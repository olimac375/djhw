// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdj__Syms.h"


VL_ATTR_COLD void Vdj___024root__trace_init_sub__TOP__0(Vdj___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+2296,0,"clk_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2297,0,"dj_0_avalon_slave_0_writedata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2298,0,"dj_0_avalon_slave_0_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2299,0,"dj_0_avalon_slave_0_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2300,0,"dj_0_avalon_slave_0_readdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2301,0,"dj_0_avalon_slave_0_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2302,0,"dj_0_left_stream_interrupt_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2303,0,"dj_0_right_stream_interrupt_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2304,0,"reset_reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dj", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+2296,0,"clk_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2297,0,"dj_0_avalon_slave_0_writedata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2298,0,"dj_0_avalon_slave_0_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2299,0,"dj_0_avalon_slave_0_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2300,0,"dj_0_avalon_slave_0_readdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2301,0,"dj_0_avalon_slave_0_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2302,0,"dj_0_left_stream_interrupt_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2303,0,"dj_0_right_stream_interrupt_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2304,0,"reset_reset_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2195,0,"codec_left_fifo_almost_empty_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2196,0,"codec_right_fifo_almost_empty_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2197,0,"left_sc_fifo_almost_empty_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2198,0,"right_sc_fifo_almost_empty_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2199,0,"codec_left_fifo_almost_full_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2200,0,"codec_right_fifo_almost_full_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2201,0,"left_sc_fifo_almost_full_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2202,0,"right_sc_fifo_almost_full_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"dj_0_codec_left_fifo_sink_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"dj_0_codec_left_fifo_sink_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2204,0,"dj_0_codec_left_fifo_sink_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2205,0,"dj_0_codec_right_fifo_sink_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2206,0,"dj_0_codec_right_fifo_sink_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2207,0,"dj_0_codec_right_fifo_sink_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+241,0,"dj_0_left_fifo_sink_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2297,0,"dj_0_left_fifo_sink_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2208,0,"dj_0_left_fifo_sink_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2209,0,"codec_left_fifo_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2210,0,"codec_left_fifo_out_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+253,0,"codec_left_fifo_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2211,0,"codec_right_fifo_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2212,0,"codec_right_fifo_out_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+253,0,"codec_right_fifo_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2213,0,"left_sc_fifo_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2214,0,"left_sc_fifo_out_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2203,0,"left_sc_fifo_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2215,0,"right_sc_fifo_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2216,0,"right_sc_fifo_out_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2205,0,"right_sc_fifo_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+242,0,"dj_0_right_fifo_sink_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2297,0,"dj_0_right_fifo_sink_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2217,0,"dj_0_right_fifo_sink_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"rst_controller_reset_out_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("codec_left_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2307,0,"SYMBOLS_PER_BEAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2308,0,"BITS_PER_SYMBOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2309,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"CHANNEL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"ERROR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_PACKETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"USE_FILL_LEVEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_STORE_FORWARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"USE_ALMOST_FULL_IF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"USE_ALMOST_EMPTY_IF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2312,0,"EMPTY_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"USE_MEMORY_BLOCKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2313,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"EMPTY_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2203,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"in_startofpacket",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"in_endofpacket",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2314,0,"in_empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2314,0,"in_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2314,0,"in_channel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2204,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2210,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2209,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"out_startofpacket",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"out_endofpacket",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2314,0,"out_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2314,0,"out_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2314,0,"out_channel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+253,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2315,0,"csr_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2316,0,"csr_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2317,0,"csr_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2318,0,"csr_writedata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2218,0,"csr_readdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2199,0,"almost_full_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2195,0,"almost_empty_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2319,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2309,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2312,0,"PKT_SIGNALS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2313,0,"PAYLOAD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2219,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2220,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declArray(c+2320,0,"mem_used",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+2221,0,"next_wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2282,0,"next_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2222,0,"incremented_wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2223,0,"incremented_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2282,0,"mem_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2283,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2224,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2225,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2284,0,"next_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2226,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2285,0,"next_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2352,0,"in_packet_signals",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2352,0,"out_packet_signals",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+252,0,"in_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2278,0,"internal_out_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2210,0,"out_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2227,0,"internal_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2286,0,"internal_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2228,0,"fifo_fill_level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+2229,0,"fill_level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+2353,0,"sop_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2353,0,"curr_sop_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2230,0,"almost_full_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2231,0,"almost_empty_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2354,0,"cut_through_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2355,0,"pkt_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2356,0,"drop_on_error_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2357,0,"error_in_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2358,0,"pkt_has_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2359,0,"sop_has_left_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2360,0,"fifo_too_small_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2361,0,"pkt_cnt_eq_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2362,0,"pkt_cnt_eq_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2363,0,"wait_for_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2364,0,"pkt_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2365,0,"wait_for_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2366,0,"ok_to_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2367,0,"in_pkt_eop_arrive",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2368,0,"out_pkt_leave",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2369,0,"in_pkt_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2370,0,"in_pkt_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"drop_on_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2371,0,"fifo_too_small",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2372,0,"out_pkt_sop_leave",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2373,0,"max_fifo_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2374,0,"fifo_fill_level_lt_cut_through_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2375,0,"log2ceil__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("gen_blk16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2309,0,"depth32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("codec_right_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2307,0,"SYMBOLS_PER_BEAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2308,0,"BITS_PER_SYMBOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2309,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"CHANNEL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"ERROR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_PACKETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"USE_FILL_LEVEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_STORE_FORWARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"USE_ALMOST_FULL_IF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"USE_ALMOST_EMPTY_IF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2312,0,"EMPTY_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"USE_MEMORY_BLOCKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2313,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"EMPTY_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2206,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2205,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"in_startofpacket",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"in_endofpacket",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2314,0,"in_empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2314,0,"in_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2314,0,"in_channel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2207,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2212,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2211,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"out_startofpacket",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"out_endofpacket",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2314,0,"out_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2314,0,"out_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2314,0,"out_channel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+253,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2376,0,"csr_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2377,0,"csr_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2378,0,"csr_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2379,0,"csr_writedata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2232,0,"csr_readdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2200,0,"almost_full_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2196,0,"almost_empty_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2319,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2309,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2312,0,"PKT_SIGNALS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2313,0,"PAYLOAD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2233,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2234,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declArray(c+2380,0,"mem_used",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+2235,0,"next_wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2287,0,"next_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2236,0,"incremented_wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2237,0,"incremented_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2287,0,"mem_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2288,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2238,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2239,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2289,0,"next_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2240,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2290,0,"next_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2352,0,"in_packet_signals",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2352,0,"out_packet_signals",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2206,0,"in_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2279,0,"internal_out_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2212,0,"out_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2241,0,"internal_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2291,0,"internal_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2242,0,"fifo_fill_level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+2243,0,"fill_level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+2353,0,"sop_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2353,0,"curr_sop_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2244,0,"almost_full_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2245,0,"almost_empty_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2412,0,"cut_through_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2413,0,"pkt_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2414,0,"drop_on_error_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2415,0,"error_in_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2416,0,"pkt_has_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2417,0,"sop_has_left_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2418,0,"fifo_too_small_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2419,0,"pkt_cnt_eq_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2420,0,"pkt_cnt_eq_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2421,0,"wait_for_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2422,0,"pkt_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2423,0,"wait_for_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2366,0,"ok_to_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2424,0,"in_pkt_eop_arrive",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2425,0,"out_pkt_leave",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2426,0,"in_pkt_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2427,0,"in_pkt_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"drop_on_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2428,0,"fifo_too_small",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2429,0,"out_pkt_sop_leave",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2373,0,"max_fifo_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2430,0,"fifo_fill_level_lt_cut_through_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2431,0,"log2ceil__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("gen_blk16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2309,0,"depth32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dj_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2313,0,"FFT_IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2432,0,"FFT_OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2432,0,"IFFT_IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2433,0,"IFFT_OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2434,0,"LGWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2297,0,"writedata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2298,0,"write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2299,0,"read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2301,0,"stream_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2297,0,"left_fifo_sink_stream",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+241,0,"left_fifo_sink_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2208,0,"left_fifo_sink_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2214,0,"left_fifo_source_stream",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2213,0,"left_fifo_source_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"left_fifo_source_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2201,0,"left_fifo_almost_full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2197,0,"left_fifo_almost_empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2297,0,"right_fifo_sink_stream",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+242,0,"right_fifo_sink_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2217,0,"right_fifo_sink_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2216,0,"right_fifo_source_stream",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2215,0,"right_fifo_source_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2205,0,"right_fifo_source_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2202,0,"right_fifo_almost_full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2198,0,"right_fifo_almost_empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+252,0,"codec_left_fifo_sink_stream",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2203,0,"codec_left_fifo_sink_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2204,0,"codec_left_fifo_sink_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2210,0,"codec_left_fifo_source_stream",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2209,0,"codec_left_fifo_source_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"codec_left_fifo_source_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2199,0,"codec_left_fifo_almost_full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2195,0,"codec_left_fifo_almost_empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2206,0,"codec_right_fifo_sink_stream",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2205,0,"codec_right_fifo_sink_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2207,0,"codec_right_fifo_sink_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2212,0,"codec_right_fifo_source_stream",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2211,0,"codec_right_fifo_source_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"codec_right_fifo_source_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2200,0,"codec_right_fifo_almost_full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2196,0,"codec_right_fifo_almost_empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2302,0,"left_stream_interrupt_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2303,0,"right_stream_interrupt_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2300,0,"readdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2246,0,"mixed_sample",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBit(c+2203,0,"left_fft_ce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+254,0,"left_fft_o_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+256,0,"left_fft_o_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"left_ifft_i_ce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+258,0,"left_ifft_i_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+2435,0,"left_ifft_i_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+260,0,"left_ifft_o_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+262,0,"left_ifft_o_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2436,0,"left_lpf_cutoff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+257,0,"left_lpf_o_ce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"left_lpf_o_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+258,0,"left_lpf_o_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+2205,0,"right_fft_ce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2437,0,"right_fft_o_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+2439,0,"right_fft_o_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2440,0,"right_ifft_i_ce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2441,0,"right_ifft_i_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+2443,0,"right_ifft_i_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2247,0,"right_ifft_o_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+2444,0,"right_ifft_o_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2445,0,"right_lpf_cutoff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2446,0,"right_lpf_o_ce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2447,0,"right_lpf_o_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2448,0,"right_lpf_o_sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+264,0,"left_w_syncd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+265,0,"left_r_syncd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+266,0,"right_w_syncd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+267,0,"right_r_syncd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+268,0,"ctr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+269,0,"clk_div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("left_fft", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2313,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2432,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2249,0,"i_sample",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+254,0,"o_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+256,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+270,0,"br_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+271,0,"br_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+273,0,"w_s512",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+274,0,"w_d512",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+276,0,"w_s256",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+277,0,"w_d256",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+279,0,"w_s128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+280,0,"w_d128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+282,0,"w_s64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+283,0,"w_d64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+285,0,"w_s32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+286,0,"w_d32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+288,0,"w_s16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+289,0,"w_d16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+291,0,"w_s8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+292,0,"w_d8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+294,0,"w_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+295,0,"w_d4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+297,0,"w_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+298,0,"w_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+300,0,"br_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"r_br_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("revstage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2434,0,"LGSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2432,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2292,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+298,0,"i_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+271,0,"o_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+270,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"wraddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+303,0,"rdaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+304,0,"in_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("stage_128", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2450,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2451,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2450,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2452,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2453,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2311,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2454,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+276,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+277,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+280,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+279,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+306,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+308,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+310,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBit(c+312,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+315,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+317,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBus(c+319,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+320,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+2314,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+321,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+322,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2450,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2451,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2450,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2457,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+310,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+306,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+308,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+2187,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+315,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+317,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+314,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+324,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+326,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+328,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+330,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBus(c+332,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+333,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+334,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+335,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+336,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+337,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+338,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+339,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+340,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+341,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declQuad(c+342,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+344,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+346,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+348,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+350,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+352,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+354,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBit(c+356,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+357,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+359,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+361,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+363,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+365,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+367,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+368,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+369,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+370,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+371,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+372,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+373,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+374,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+375,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+376,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+346,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+348,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+350,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2458,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2450,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+357,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+368,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+377,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+378,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+379,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2459,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2458,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2450,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+359,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+367,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+381,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+382,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+383,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2459,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2460,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2450,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+365,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+370,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+385,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+386,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+387,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+389,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2460,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2450,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+363,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+369,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+390,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+391,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+392,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+394,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2462,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2463,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2464,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2312,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2453,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2311,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2465,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 87,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+285,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+286,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+289,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+288,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+396,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+398,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+400,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+402,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+403,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+405,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+407,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+1+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 45,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+409,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+410+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 37,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+426,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+427+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2314,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+443,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+444,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2462,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2463,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2464,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2457,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+400,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+396,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+398,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+2188,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+405,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+407,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+404,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+446,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+448,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+450,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+451,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+452,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBus(c+454,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+455,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+456,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+457,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+458,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+459,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+460,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+461,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+462,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+463,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+464,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+466,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+468,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+470,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+472,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+474,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+476,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBit(c+478,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+479,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+481,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+483,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+485,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+487,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+489,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+490,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+491,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+492,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+493,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+494,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+495,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+496,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+497,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+498,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declQuad(c+468,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+470,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+472,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2460,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2464,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+479,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+490,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+499,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+500,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+501,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+502,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2459,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2460,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2464,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+481,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+489,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+503,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+504,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+505,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2459,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2468,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2464,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+487,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+492,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+506,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+507,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+508,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+510,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2468,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2464,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+485,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+491,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+511,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+512,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+513,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+514,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+515,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2432,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2432,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+294,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+295,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+298,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+297,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+516,0,"m_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+517,0,"m_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+518,0,"i_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+519,0,"i_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+520,0,"rnd_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+521,0,"rnd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+522,0,"sto_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+523,0,"sto_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+524,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+526,0,"sync_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+527,0,"o_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+528,0,"o_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->pushPrefix("do_rnd_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2451,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2432,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+521,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+528,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->pushPrefix("DROP_ONE_BIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+529,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+530,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+531,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2451,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2432,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+520,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+527,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->pushPrefix("DROP_ONE_BIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+533,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+534,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+535,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_256", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2469,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2432,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2450,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2470,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2453,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2311,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2471,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+273,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+274,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+277,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+276,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+538,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+540,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+542,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+544,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+546,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+547,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+549,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBus(c+551,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+552,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2314,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+553,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+554,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2469,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2432,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2450,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2457,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+542,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+538,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+540,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+2189,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+547,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+549,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+546,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+556,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+558,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+560,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+562,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBus(c+564,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+565,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+566,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+567,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+568,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+569,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+570,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+571,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+572,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+573,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declQuad(c+574,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+576,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+578,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+580,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+582,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+584,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+586,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBit(c+588,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+589,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+591,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+593,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+595,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+597,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+599,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+600,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+601,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+602,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+603,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+604,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+605,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+606,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+607,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+608,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declQuad(c+578,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+580,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+582,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2474,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2450,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+589,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+600,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+609,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+610,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+611,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+612,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2475,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2474,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2450,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+591,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+599,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+613,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+614,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+615,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2475,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2458,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2450,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+597,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+602,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+616,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+617,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+618,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+619,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+620,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2458,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2450,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+595,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+601,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+621,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+622,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+623,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+624,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+625,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2462,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2463,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2462,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2453,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2311,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2476,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 87,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+283,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+286,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+285,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+626,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+627,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+629,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+631,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+633,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+636,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+638,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+17+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 45,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+640,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+641+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 37,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+673,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+674+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 37,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2314,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+706,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+707,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2462,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2463,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2462,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2457,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+631,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+627,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+629,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+2190,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+636,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+638,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+635,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+709,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+711,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+713,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+714,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+715,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBus(c+717,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+718,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+719,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+720,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+721,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+722,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+723,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+724,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+725,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+726,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+727,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+729,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+731,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+733,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+735,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+737,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+739,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBit(c+741,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+742,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+744,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+746,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+748,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+750,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+752,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+753,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+754,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+755,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+756,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+757,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+758,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+759,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+760,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+761,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declQuad(c+731,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+733,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+735,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2460,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2462,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+742,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+753,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+762,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+763,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+764,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+765,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2479,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2460,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2462,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+744,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+752,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+766,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+767,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+768,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+769,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2479,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2468,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2462,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+750,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+755,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+770,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+771,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+772,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+773,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+774,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2468,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2462,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+748,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+754,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+775,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+776,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+777,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+778,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+779,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2464,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2432,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2434,0,"LGWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"INVERSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+292,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+295,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+294,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+780,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+781,0,"pipeline",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+782,0,"sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+783,0,"sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+784,0,"diff_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+785,0,"diff_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declQuad(c+786,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+788,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBus(c+790,0,"ob_b_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+791,0,"ob_b_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+792,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+793+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+797,0,"imem_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+798,0,"imem_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+799,0,"i_data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+800,0,"i_data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+801+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 41,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+805,0,"rnd_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+806,0,"rnd_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+807,0,"rnd_diff_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+808,0,"rnd_diff_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+809,0,"n_rnd_diff_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+810,0,"n_rnd_diff_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->pushPrefix("do_rnd_diff_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2432,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2432,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+785,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+808,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_diff_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2432,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2432,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+784,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+807,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_sum_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2432,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2432,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+783,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+806,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_sum_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2432,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2432,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+782,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+805,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_512", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2313,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2464,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2469,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2308,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2453,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2311,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2480,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2294,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2249,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+274,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+273,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+811,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+812,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+813,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+814,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+816,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+817,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+818,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+819,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+821,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+823,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+824,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+2314,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+825,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+826,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2313,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2464,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2469,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2457,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+814,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+812,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+813,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2191,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+819,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+821,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+818,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+828,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+829,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+830,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+831,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+832,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBus(c+834,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+835,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+836,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+837,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+838,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+839,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+840,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+841,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+842,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+843,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declQuad(c+844,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+846,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+848,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+850,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+852,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+854,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+856,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBit(c+858,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+859,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+861,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+863,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+865,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+867,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+869,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+870,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+871,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+872,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+873,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+874,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+875,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+876,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+877,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+878,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declQuad(c+848,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+850,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declQuad(c+852,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2483,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2469,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+859,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declBus(c+870,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+879,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+880,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+881,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+882,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2484,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2483,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2469,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+861,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->declBus(c+869,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+883,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+884,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+885,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2484,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2474,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2469,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+867,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+872,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+886,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+887,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+888,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+889,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+890,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2474,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2469,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+865,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+871,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+891,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBus(c+892,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->declBit(c+893,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+894,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+895,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 16,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_64", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2450,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2451,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2462,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2485,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2453,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2311,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2486,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 87,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+280,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+283,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+282,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+896,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+897,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+899,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+901,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBit(c+903,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+904,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+906,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+908,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+49+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 43,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+910,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+911+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 35,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+975,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+976+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 37,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2314,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1040,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+1041,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2450,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2451,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2462,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2457,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+901,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+897,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+899,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+2192,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+906,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declQuad(c+908,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 37,0);
    tracep->declBit(c+905,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1043,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declQuad(c+1045,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+1047,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1048,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1049,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBus(c+1051,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+1052,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+1053,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+1054,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+1055,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1056,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1057,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1058,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1059,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1060,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declQuad(c+1061,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+1063,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+1065,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+1067,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+1069,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1071,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1073,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBit(c+1075,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1076,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+1078,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+1080,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declQuad(c+1082,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1084,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+1086,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1087,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1088,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1089,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1090,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1091,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1092,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1093,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1094,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1095,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declQuad(c+1065,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+1067,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declQuad(c+1069,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2458,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2462,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1076,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+1087,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1096,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1097,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+1098,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1099,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2489,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2458,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2462,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1078,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 40,0);
    tracep->declBus(c+1086,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1100,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1101,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+1102,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2489,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2460,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2462,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1084,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+1089,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1103,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1104,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+1105,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1106,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1107,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2460,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2462,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1082,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declBus(c+1088,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1108,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1109,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+1110,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1111,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1112,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2464,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2490,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2464,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2453,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2311,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2491,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+288,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+289,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+292,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+291,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1113,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1114,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+1116,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+1118,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1120,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1121,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1122,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1123,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+1125,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+113+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 47,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1127,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+1128+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1136,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+1137+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2314,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1145,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+1146,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2464,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2490,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2464,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2457,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1118,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1114,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+1116,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+2193,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1123,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+1125,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+1122,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1148,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+1150,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declBit(c+1152,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1153,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1154,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBus(c+1156,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1157,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1158,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1159,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1160,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1161,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1162,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1163,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1164,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1165,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declQuad(c+1166,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1168,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1170,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1172,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1174,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1176,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1178,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declBit(c+1180,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1181,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1183,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1185,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1187,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1189,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declBus(c+1191,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1192,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1193,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1194,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1195,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1196,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1197,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1198,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1199,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1200,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declQuad(c+1170,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1172,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1174,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2468,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2464,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1181,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+1192,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1201,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1202,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+1203,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1204,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2494,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2468,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2464,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1183,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declBus(c+1191,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1205,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1206,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+1207,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1208,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2494,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2495,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2464,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1189,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declBus(c+1194,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1209,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1210,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+1211,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1212,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2495,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2464,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2203,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1187,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declBus(c+1193,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1214,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+1215,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+1216,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1217,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1218,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("left_ifft", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2432,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2433,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+258,0,"i_sample",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+260,0,"o_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+262,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1219,0,"br_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1220,0,"br_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+1222,0,"w_s512",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1223,0,"w_d512",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBit(c+1225,0,"w_s256",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1226,0,"w_d256",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1228,0,"w_s128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1229,0,"w_d128",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1231,0,"w_s64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1232,0,"w_d64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1234,0,"w_s32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1235,0,"w_d32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1237,0,"w_s16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1238,0,"w_d16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBit(c+1240,0,"w_s8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1241,0,"w_d8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBit(c+1243,0,"w_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1244,0,"w_d4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+1246,0,"w_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1247,0,"w_d2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+1249,0,"br_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1250,0,"r_br_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("revstage", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2434,0,"LGSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2433,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1251,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1247,0,"i_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declQuad(c+1220,0,"o_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+1219,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1252,0,"wraddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1253,0,"rdaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1254,0,"in_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("stage_128", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2463,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2496,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2463,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2452,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2453,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2311,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2497,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 103,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1225,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1226,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1229,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1228,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1255,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1256,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1258,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1260,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 53,0);
    tracep->declBit(c+1262,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1263,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1265,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1267,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBus(c+1269,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1270,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+2314,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1271,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declQuad(c+1272,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2463,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2496,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2463,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2457,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1260,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 53,0);
    tracep->declQuad(c+1256,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1258,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1274,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1265,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1267,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1264,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1275,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1277,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1279,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1280,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1281,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 53,0);
    tracep->declBus(c+1283,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1284,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1285,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1286,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1287,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1288,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1289,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1290,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1291,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1292,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declQuad(c+1293,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1295,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1297,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1299,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1301,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1303,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1305,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+1307,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1308,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1310,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1312,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1314,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1316,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+1318,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1319,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1320,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1321,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1322,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1323,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1324,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1325,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1326,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1327,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declQuad(c+1297,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1299,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1301,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2501,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2463,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1308,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declBus(c+1319,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1328,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1329,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+1330,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1331,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2502,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2501,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2463,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1310,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declBus(c+1318,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1332,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1333,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+1334,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1335,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2502,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2503,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2463,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1316,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+1321,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1336,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1337,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+1338,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1339,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1340,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2503,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2463,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1314,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+1320,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1341,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1342,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+1343,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1344,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1345,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2490,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2504,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2505,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2312,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2453,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2311,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2506,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1234,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1235,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1238,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBit(c+1237,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1346,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1347,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1349,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1351,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+1353,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1354,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1355,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1356,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+1358,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+121+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 55,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1360,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+1361+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 47,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1377,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+1378+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 49,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2314,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1394,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declQuad(c+1395,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2490,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2504,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2505,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2457,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1351,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declQuad(c+1347,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1349,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1397,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1356,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+1358,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBit(c+1355,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1398,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1400,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1402,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1403,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1404,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+1406,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1407,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1408,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1409,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1410,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1411,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1412,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1413,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1414,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1415,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declQuad(c+1416,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1418,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1420,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1422,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1424,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+1426,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+1428,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBit(c+1430,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1431,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1433,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1435,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1437,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+1439,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+1441,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1442,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1443,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1444,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1445,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1446,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1447,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1448,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1449,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+1450,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declQuad(c+1420,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1422,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1424,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2503,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2505,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1431,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+1442,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1451,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1452,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+1453,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1454,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2502,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2503,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2505,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1433,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+1441,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1455,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1456,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+1457,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2502,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2509,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2505,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1439,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+1444,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1458,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1459,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+1460,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1461,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1462,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2509,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2505,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1437,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+1443,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1463,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1464,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+1465,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1466,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1467,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2433,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2433,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1243,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1244,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declQuad(c+1247,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+1246,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1468,0,"m_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1469,0,"m_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1470,0,"i_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1471,0,"i_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1472,0,"rnd_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1473,0,"rnd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1474,0,"sto_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1475,0,"sto_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBit(c+1476,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1477,0,"stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1478,0,"sync_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1479,0,"o_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1480,0,"o_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->pushPrefix("do_rnd_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2496,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2433,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1473,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1480,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->pushPrefix("DROP_ONE_BIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1481,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1482,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBit(c+1483,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1484,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2496,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2433,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1472,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1479,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->pushPrefix("DROP_ONE_BIT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1485,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1486,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBit(c+1487,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1488,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_256", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2451,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2433,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2463,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2470,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2453,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2311,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2510,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 103,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1222,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1223,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+1226,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1225,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1489,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1490,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+1492,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+1494,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+1496,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1497,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1498,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1499,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1501,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBus(c+1503,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1504,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+2314,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1505,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+1506,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2451,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2433,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2463,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2457,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1494,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declQuad(c+1490,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+1492,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBit(c+1508,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1499,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1501,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1498,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1509,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+1511,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBit(c+1513,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1514,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1515,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBus(c+1517,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1518,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1519,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1520,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1521,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1522,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1523,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1524,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1525,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1526,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+1527,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1529,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1531,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1533,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1535,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1537,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1539,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declBit(c+1541,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1542,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1544,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1546,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1548,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1550,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declBus(c+1552,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1553,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1554,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1555,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1556,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1557,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1558,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1559,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1560,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1561,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declQuad(c+1531,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1533,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1535,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2514,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2463,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1542,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+1553,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1562,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1563,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+1564,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1565,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2515,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2514,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2463,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1544,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+1552,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1566,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1567,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+1568,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2515,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2501,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2463,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1550,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declBus(c+1555,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1569,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1570,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+1571,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1572,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1573,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2501,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2463,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1548,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declBus(c+1554,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1574,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+1575,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBit(c+1576,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1577,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1578,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2490,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2504,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2490,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2453,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2311,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2516,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1231,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1232,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1235,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1234,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1579,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1580,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1582,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1584,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBit(c+1586,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1587,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1588,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1589,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1591,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+137+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 55,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1593,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+1594+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 47,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1626,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+1627+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 47,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2314,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1659,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+1660,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2490,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2504,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2490,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2457,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1584,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declQuad(c+1580,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1582,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1662,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1589,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1591,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1588,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1663,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1665,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1667,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1668,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1669,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 55,0);
    tracep->declBus(c+1671,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1672,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1673,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1674,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1675,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1676,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1677,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1678,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1679,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1680,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declQuad(c+1681,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1683,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1685,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1687,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1689,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+1691,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+1693,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBit(c+1695,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1696,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1698,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1700,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+1702,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+1704,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+1706,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1707,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1708,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1709,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1710,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1711,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1712,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1713,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1714,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+1715,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declQuad(c+1685,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1687,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+1689,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2503,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2490,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1696,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+1707,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1716,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1717,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+1718,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1719,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2519,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2503,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2490,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1698,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+1706,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1720,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1721,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+1722,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1723,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2519,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2509,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2490,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1704,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+1709,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1724,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1725,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+1726,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1727,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1728,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2509,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2490,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1702,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+1708,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1729,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+1730,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+1731,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1732,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1733,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2505,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2433,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2434,0,"LGWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"INVERSE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1240,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1241,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+1244,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBit(c+1243,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1734,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1735,0,"pipeline",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1736,0,"sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1737,0,"sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1738,0,"diff_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1739,0,"diff_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declQuad(c+1740,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declQuad(c+1742,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 51,0);
    tracep->declBus(c+1744,0,"ob_b_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1745,0,"ob_b_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1746,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+1747+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 49,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1751,0,"imem_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1752,0,"imem_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1753,0,"i_data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1754,0,"i_data_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+1755+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 51,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1759,0,"rnd_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1760,0,"rnd_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1761,0,"rnd_diff_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1762,0,"rnd_diff_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1763,0,"n_rnd_diff_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1764,0,"n_rnd_diff_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->pushPrefix("do_rnd_diff_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2433,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2433,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1739,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1762,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_diff_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2433,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2433,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1738,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1761,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_sum_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2433,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2433,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1737,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1760,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_sum_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2433,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2433,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1736,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1759,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_512", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2432,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2505,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2451,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2308,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2453,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2311,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2520,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 103,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2294,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+258,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+1223,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBit(c+1222,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1765,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1766,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+1768,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+1770,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBit(c+1772,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1773,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1774,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1775,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+1777,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBus(c+1779,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+1780,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+2314,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1781,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1782,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2432,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2505,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2451,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2457,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1770,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+1766,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+1768,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+1784,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1775,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declQuad(c+1777,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 43,0);
    tracep->declBit(c+1774,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1785,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declQuad(c+1787,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+1789,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1790,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1791,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBus(c+1793,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1794,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1795,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1796,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1797,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1798,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1799,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1800,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1801,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1802,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declQuad(c+1803,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1805,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1807,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1809,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1811,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1813,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1815,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBit(c+1817,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1818,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1820,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1822,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 44,0);
    tracep->declQuad(c+1824,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+1826,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+1828,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1829,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1830,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1831,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1832,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1833,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+1834,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1835,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1836,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+1837,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declQuad(c+1807,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1809,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declQuad(c+1811,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2495,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2451,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1818,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declBus(c+1829,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1838,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1839,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+1840,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1841,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2494,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2495,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2451,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1820,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 46,0);
    tracep->declBus(c+1828,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1842,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1843,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+1844,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2494,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2514,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2451,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1826,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+1831,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1845,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1846,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+1847,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1848,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1849,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2514,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2451,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1824,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declBus(c+1830,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1850,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1851,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBit(c+1852,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1853,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1854,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_64", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2463,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2496,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2490,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2485,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2453,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2311,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2524,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 95,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1228,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1229,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1232,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1231,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1855,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1856,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1858,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1860,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 53,0);
    tracep->declBit(c+1862,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1863,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1864,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1865,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1867,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+169+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 53,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1869,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1870+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 45,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1934,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+1935+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 47,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2314,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1999,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+2000,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2463,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2496,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2490,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2457,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1860,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 53,0);
    tracep->declQuad(c+1856,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1858,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+2002,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1865,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declQuad(c+1867,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 47,0);
    tracep->declBit(c+1864,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2003,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+2005,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+2007,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2008,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2009,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 53,0);
    tracep->declBus(c+2011,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+2012,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+2013,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+2014,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+2015,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+2016,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+2017,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2018,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2019,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2020,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declQuad(c+2021,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+2023,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+2025,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+2027,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+2029,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+2031,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+2033,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBit(c+2035,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2036,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+2038,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+2040,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 48,0);
    tracep->declQuad(c+2042,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+2044,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+2046,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2047,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2048,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2049,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2050,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+2051,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+2052,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2053,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2054,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+2055,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declQuad(c+2025,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+2027,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declQuad(c+2029,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2501,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2490,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2036,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declBus(c+2047,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2056,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2057,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+2058,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2059,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2527,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2501,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2490,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2038,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 50,0);
    tracep->declBus(c+2046,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2060,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2061,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+2062,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2527,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2503,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2490,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2044,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+2049,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2063,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2064,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+2065,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2066,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2067,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2503,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2490,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2042,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declBus(c+2048,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2068,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2069,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBit(c+2070,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2071,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2072,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("stage_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2505,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2528,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2505,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"LGSPAN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"BFLYSHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2453,0,"OPT_HWMPY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2311,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+2529,0,"COEFFILE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 87,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1237,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1238,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+1241,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBit(c+1240,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2073,0,"wait_for_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2074,0,"ib_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+2076,0,"ib_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+2078,0,"ib_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 57,0);
    tracep->declBit(c+2080,0,"ib_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2081,0,"b_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2082,0,"ob_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2083,0,"ob_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+2085,0,"ob_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->pushPrefix("cmem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+233+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 57,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+2087,0,"iaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("imem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+2088+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 49,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+2096,0,"oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("omem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+2097+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 49,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+2314,0,"idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2105,0,"nxt_oaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+2106,0,"pre_ovalue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->pushPrefix("HWBFLY", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("bfly", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2505,0,"IWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2528,0,"CWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2505,0,"OWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2457,0,"CKPCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2078,0,"i_coef",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 57,0);
    tracep->declQuad(c+2074,0,"i_left",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+2076,0,"i_right",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBit(c+2108,0,"i_aux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2083,0,"o_left",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+2085,0,"o_right",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBit(c+2082,0,"o_aux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2109,0,"r_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declQuad(c+2111,0,"r_right",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 49,0);
    tracep->declBit(c+2113,0,"r_aux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2114,0,"r_aux_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2115,0,"r_coef",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 57,0);
    tracep->declBus(c+2117,0,"r_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2118,0,"r_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2119,0,"r_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2120,0,"r_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2121,0,"ir_coef_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+2122,0,"ir_coef_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+2123,0,"r_sum_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+2124,0,"r_sum_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+2125,0,"r_dif_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+2126,0,"r_dif_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declQuad(c+2127,0,"leftv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+2129,0,"leftvv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+2131,0,"p_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+2133,0,"p_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+2135,0,"p_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 56,0);
    tracep->declQuad(c+2137,0,"w_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 56,0);
    tracep->declQuad(c+2139,0,"w_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 56,0);
    tracep->declBit(c+2141,0,"aux_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2142,0,"left_si",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+2144,0,"left_sr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+2146,0,"left_saved",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 52,0);
    tracep->declQuad(c+2148,0,"mpy_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 56,0);
    tracep->declQuad(c+2150,0,"mpy_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 56,0);
    tracep->declBus(c+2152,0,"rnd_left_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2153,0,"rnd_left_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2154,0,"rnd_right_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2155,0,"rnd_right_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("CKPCE_ONE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2156,0,"p1c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+2157,0,"p2c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+2158,0,"p1d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+2159,0,"p2d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+2160,0,"p3c_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+2161,0,"p3d_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declQuad(c+2131,0,"rp_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+2133,0,"rp_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declQuad(c+2135,0,"rp_three",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 56,0);
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2509,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2505,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2142,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+2153,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2162,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2163,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+2164,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2165,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2532,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_left_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2509,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2505,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2144,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 54,0);
    tracep->declBus(c+2152,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2166,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2167,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+2168,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2169,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2532,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2533,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2505,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2150,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 56,0);
    tracep->declBus(c+2155,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2170,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2171,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+2172,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2173,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2174,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("do_rnd_right_r", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2533,0,"IWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2505,0,"OWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"SHIFT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+2148,0,"i_val",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 56,0);
    tracep->declBus(c+2154,0,"o_val",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->pushPrefix("ROUND_RESULT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2175,0,"truncated_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBus(c+2176,0,"rounded_up",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 24,0);
    tracep->declBit(c+2177,0,"last_valid_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2178,0,"first_lost_bit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2179,0,"other_lost_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("left_lpf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2432,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2434,0,"LGWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2319,0,"LGP1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2485,0,"LGFILTWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2436,0,"i_cutoff",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2296,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+256,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2194,0,"i_ce",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+254,0,"i_sample",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+256,0,"i_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+257,0,"o_ce",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+258,0,"o_sample",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 41,0);
    tracep->declBit(c+263,0,"o_sync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2180,0,"bin_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2181,0,"sample_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+2182,0,"sample_im",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+2183,0,"out_re",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+2184,0,"out_im",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("left_sc_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2307,0,"SYMBOLS_PER_BEAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2308,0,"BITS_PER_SYMBOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2309,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"CHANNEL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"ERROR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_PACKETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"USE_FILL_LEVEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_STORE_FORWARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"USE_ALMOST_FULL_IF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"USE_ALMOST_EMPTY_IF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2312,0,"EMPTY_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"USE_MEMORY_BLOCKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2313,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"EMPTY_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2297,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+241,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"in_startofpacket",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"in_endofpacket",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2314,0,"in_empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2314,0,"in_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2314,0,"in_channel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2208,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2214,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2213,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"out_startofpacket",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"out_endofpacket",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2314,0,"out_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2314,0,"out_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2314,0,"out_channel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2203,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2534,0,"csr_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2535,0,"csr_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2536,0,"csr_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2537,0,"csr_writedata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2250,0,"csr_readdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2201,0,"almost_full_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2197,0,"almost_empty_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2319,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2309,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2312,0,"PKT_SIGNALS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2313,0,"PAYLOAD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2251,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2252,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declArray(c+2538,0,"mem_used",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+244,0,"next_wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2305,0,"next_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2253,0,"incremented_wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2254,0,"incremented_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2305,0,"mem_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2255,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+245,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2256,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+246,0,"next_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2257,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+247,0,"next_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2352,0,"in_packet_signals",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2352,0,"out_packet_signals",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2297,0,"in_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2280,0,"internal_out_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2214,0,"out_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2258,0,"internal_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2259,0,"internal_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2260,0,"fifo_fill_level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+2261,0,"fill_level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+2353,0,"sop_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2353,0,"curr_sop_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2262,0,"almost_full_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2263,0,"almost_empty_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2570,0,"cut_through_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2571,0,"pkt_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2572,0,"drop_on_error_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2573,0,"error_in_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2574,0,"pkt_has_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2575,0,"sop_has_left_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2576,0,"fifo_too_small_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2577,0,"pkt_cnt_eq_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2578,0,"pkt_cnt_eq_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2579,0,"wait_for_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2580,0,"pkt_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2581,0,"wait_for_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2366,0,"ok_to_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2582,0,"in_pkt_eop_arrive",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2583,0,"out_pkt_leave",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2584,0,"in_pkt_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2585,0,"in_pkt_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"drop_on_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2586,0,"fifo_too_small",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2587,0,"out_pkt_sop_leave",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2373,0,"max_fifo_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2588,0,"fifo_fill_level_lt_cut_through_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2589,0,"log2ceil__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("gen_blk16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2309,0,"depth32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("right_sc_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2307,0,"SYMBOLS_PER_BEAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2308,0,"BITS_PER_SYMBOL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2309,0,"FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"CHANNEL_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"ERROR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_PACKETS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"USE_FILL_LEVEL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_STORE_FORWARD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"USE_ALMOST_FULL_IF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"USE_ALMOST_EMPTY_IF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2312,0,"EMPTY_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"USE_MEMORY_BLOCKS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2313,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"EMPTY_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2296,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2297,0,"in_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+242,0,"in_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"in_startofpacket",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"in_endofpacket",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2314,0,"in_empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2314,0,"in_error",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2314,0,"in_channel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2217,0,"in_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2216,0,"out_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2215,0,"out_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"out_startofpacket",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"out_endofpacket",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2314,0,"out_empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2314,0,"out_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2314,0,"out_channel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+2205,0,"out_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2590,0,"csr_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2591,0,"csr_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2592,0,"csr_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2593,0,"csr_writedata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2264,0,"csr_readdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2202,0,"almost_full_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2198,0,"almost_empty_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2319,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2309,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2312,0,"PKT_SIGNALS_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2313,0,"PAYLOAD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2265,0,"wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2266,0,"rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declArray(c+2594,0,"mem_used",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+248,0,"next_wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2306,0,"next_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2267,0,"incremented_wr_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2268,0,"incremented_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2306,0,"mem_rd_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+2269,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2270,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"next_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2271,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"next_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2352,0,"in_packet_signals",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2352,0,"out_packet_signals",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2297,0,"in_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2281,0,"internal_out_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+2216,0,"out_payload",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2272,0,"internal_out_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2273,0,"internal_out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2274,0,"fifo_fill_level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+2275,0,"fill_level",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+2353,0,"sop_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2353,0,"curr_sop_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+2276,0,"almost_full_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2277,0,"almost_empty_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2626,0,"cut_through_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->declBus(c+2627,0,"pkt_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2628,0,"drop_on_error_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2629,0,"error_in_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2630,0,"pkt_has_started",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2631,0,"sop_has_left_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2632,0,"fifo_too_small_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2633,0,"pkt_cnt_eq_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2634,0,"pkt_cnt_eq_one",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2635,0,"wait_for_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2636,0,"pkt_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2637,0,"wait_for_pkt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2366,0,"ok_to_forward",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2638,0,"in_pkt_eop_arrive",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2639,0,"out_pkt_leave",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2640,0,"in_pkt_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2641,0,"in_pkt_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"drop_on_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2642,0,"fifo_too_small",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2643,0,"out_pkt_sop_leave",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2373,0,"max_fifo_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2644,0,"fifo_fill_level_lt_cut_through_threshold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2645,0,"log2ceil__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("gen_blk16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2309,0,"depth32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rst_controller", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2311,0,"NUM_RESET_INPUTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_RESET_REQUEST_IN0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_RESET_REQUEST_IN1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_RESET_REQUEST_IN2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_RESET_REQUEST_IN3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_RESET_REQUEST_IN4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_RESET_REQUEST_IN5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_RESET_REQUEST_IN6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_RESET_REQUEST_IN7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_RESET_REQUEST_IN8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_RESET_REQUEST_IN9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_RESET_REQUEST_IN10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_RESET_REQUEST_IN11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_RESET_REQUEST_IN12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_RESET_REQUEST_IN13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_RESET_REQUEST_IN14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"USE_RESET_REQUEST_IN15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+2646,0,"OUTPUT_RESET_SYNC_EDGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+2307,0,"SYNC_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"RESET_REQUEST_PRESENT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"RESET_REQ_WAIT_TIME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2312,0,"MIN_RST_ASSERTION_TIME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"RESET_REQ_EARLY_DSRT_TIME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2310,0,"ADAPT_RESET_REQUEST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+243,0,"reset_in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_in3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_in4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_in5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_in6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_in7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_in8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_in9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_in10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_in11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_in12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_in13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_in14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_in15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_req_in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_req_in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_req_in2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_req_in3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_req_in4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_req_in5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_req_in6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_req_in7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_req_in8",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_req_in9",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_req_in10",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_req_in11",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_req_in12",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_req_in13",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_req_in14",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"reset_req_in15",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2296,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"reset_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2185,0,"reset_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2453,0,"ASYNC_RESET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2312,0,"MIN_METASTABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"RSTREQ_ASRT_SYNC_TAP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2311,0,"LARGER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2461,0,"ASSERTION_CHAIN_LENGTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"RESET_REQ_DRST_TAP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+243,0,"merged_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2314,0,"merged_reset_req_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"reset_out_pre",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2185,0,"reset_req_pre",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2648,0,"altera_reset_synchronizer_int_chain",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+2649,0,"r_sync_rst_chain",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2650,0,"r_sync_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2651,0,"r_early_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("alt_rst_req_sync_uq1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2310,0,"ASYNC_RESET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2307,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+2314,0,"reset_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2296,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2185,0,"reset_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2186,0,"altera_reset_synchronizer_int_chain",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2185,0,"altera_reset_synchronizer_int_chain_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("alt_rst_sync_uq1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2453,0,"ASYNC_RESET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+2307,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+243,0,"reset_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2296,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2293,0,"reset_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2295,0,"altera_reset_synchronizer_int_chain",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2293,0,"altera_reset_synchronizer_int_chain_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdj___024root__trace_init_top(Vdj___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root__trace_init_top\n"); );
    // Body
    Vdj___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdj___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vdj___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdj___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdj___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdj___024root__trace_register(Vdj___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vdj___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vdj___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vdj___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vdj___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdj___024root__trace_const_0_sub_0(Vdj___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdj___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root__trace_const_0\n"); );
    // Init
    Vdj___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdj___024root*>(voidSelf);
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdj___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdj___024root__trace_const_0_sub_0(Vdj___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root__trace_const_0_sub_0\n"); );
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
    bufp->fullIData(oldp+2307,(2U),32);
    bufp->fullIData(oldp+2308,(8U),32);
    bufp->fullIData(oldp+2309,(0x400U),32);
    bufp->fullIData(oldp+2310,(0U),32);
    bufp->fullIData(oldp+2311,(1U),32);
    bufp->fullIData(oldp+2312,(3U),32);
    bufp->fullIData(oldp+2313,(0x10U),32);
    bufp->fullBit(oldp+2314,(0U));
    bufp->fullCData(oldp+2315,(vlSelf->dj__DOT__codec_left_fifo__DOT__csr_address),2);
    bufp->fullBit(oldp+2316,(vlSelf->dj__DOT__codec_left_fifo__DOT__csr_write));
    bufp->fullBit(oldp+2317,(vlSelf->dj__DOT__codec_left_fifo__DOT__csr_read));
    bufp->fullIData(oldp+2318,(vlSelf->dj__DOT__codec_left_fifo__DOT__csr_writedata),32);
    bufp->fullIData(oldp+2319,(0xaU),32);
    bufp->fullWData(oldp+2320,(vlSelf->dj__DOT__codec_left_fifo__DOT__mem_used),1024);
    bufp->fullCData(oldp+2352,(0U),3);
    bufp->fullSData(oldp+2353,(0U),10);
    bufp->fullIData(oldp+2354,(vlSelf->dj__DOT__codec_left_fifo__DOT__cut_through_threshold),24);
    bufp->fullSData(oldp+2355,(vlSelf->dj__DOT__codec_left_fifo__DOT__pkt_cnt),16);
    bufp->fullBit(oldp+2356,(vlSelf->dj__DOT__codec_left_fifo__DOT__drop_on_error_en));
    bufp->fullBit(oldp+2357,(vlSelf->dj__DOT__codec_left_fifo__DOT__error_in_pkt));
    bufp->fullBit(oldp+2358,(vlSelf->dj__DOT__codec_left_fifo__DOT__pkt_has_started));
    bufp->fullBit(oldp+2359,(vlSelf->dj__DOT__codec_left_fifo__DOT__sop_has_left_fifo));
    bufp->fullBit(oldp+2360,(vlSelf->dj__DOT__codec_left_fifo__DOT__fifo_too_small_r));
    bufp->fullBit(oldp+2361,(vlSelf->dj__DOT__codec_left_fifo__DOT__pkt_cnt_eq_zero));
    bufp->fullBit(oldp+2362,(vlSelf->dj__DOT__codec_left_fifo__DOT__pkt_cnt_eq_one));
    bufp->fullBit(oldp+2363,(vlSelf->dj__DOT__codec_left_fifo__DOT__wait_for_threshold));
    bufp->fullBit(oldp+2364,(vlSelf->dj__DOT__codec_left_fifo__DOT__pkt_mode));
    bufp->fullBit(oldp+2365,(vlSelf->dj__DOT__codec_left_fifo__DOT__wait_for_pkt));
    bufp->fullBit(oldp+2366,(1U));
    bufp->fullBit(oldp+2367,(vlSelf->dj__DOT__codec_left_fifo__DOT__in_pkt_eop_arrive));
    bufp->fullBit(oldp+2368,(vlSelf->dj__DOT__codec_left_fifo__DOT__out_pkt_leave));
    bufp->fullBit(oldp+2369,(vlSelf->dj__DOT__codec_left_fifo__DOT__in_pkt_start));
    bufp->fullBit(oldp+2370,(vlSelf->dj__DOT__codec_left_fifo__DOT__in_pkt_error));
    bufp->fullBit(oldp+2371,(vlSelf->dj__DOT__codec_left_fifo__DOT__fifo_too_small));
    bufp->fullBit(oldp+2372,(vlSelf->dj__DOT__codec_left_fifo__DOT__out_pkt_sop_leave));
    bufp->fullIData(oldp+2373,(0x3ffU),32);
    bufp->fullBit(oldp+2374,(vlSelf->dj__DOT__codec_left_fifo__DOT__fifo_fill_level_lt_cut_through_threshold));
    bufp->fullIData(oldp+2375,(vlSelf->dj__DOT__codec_left_fifo__DOT__log2ceil__Vstatic__i),32);
    bufp->fullCData(oldp+2376,(vlSelf->dj__DOT__codec_right_fifo__DOT__csr_address),2);
    bufp->fullBit(oldp+2377,(vlSelf->dj__DOT__codec_right_fifo__DOT__csr_write));
    bufp->fullBit(oldp+2378,(vlSelf->dj__DOT__codec_right_fifo__DOT__csr_read));
    bufp->fullIData(oldp+2379,(vlSelf->dj__DOT__codec_right_fifo__DOT__csr_writedata),32);
    bufp->fullWData(oldp+2380,(vlSelf->dj__DOT__codec_right_fifo__DOT__mem_used),1024);
    bufp->fullIData(oldp+2412,(vlSelf->dj__DOT__codec_right_fifo__DOT__cut_through_threshold),24);
    bufp->fullSData(oldp+2413,(vlSelf->dj__DOT__codec_right_fifo__DOT__pkt_cnt),16);
    bufp->fullBit(oldp+2414,(vlSelf->dj__DOT__codec_right_fifo__DOT__drop_on_error_en));
    bufp->fullBit(oldp+2415,(vlSelf->dj__DOT__codec_right_fifo__DOT__error_in_pkt));
    bufp->fullBit(oldp+2416,(vlSelf->dj__DOT__codec_right_fifo__DOT__pkt_has_started));
    bufp->fullBit(oldp+2417,(vlSelf->dj__DOT__codec_right_fifo__DOT__sop_has_left_fifo));
    bufp->fullBit(oldp+2418,(vlSelf->dj__DOT__codec_right_fifo__DOT__fifo_too_small_r));
    bufp->fullBit(oldp+2419,(vlSelf->dj__DOT__codec_right_fifo__DOT__pkt_cnt_eq_zero));
    bufp->fullBit(oldp+2420,(vlSelf->dj__DOT__codec_right_fifo__DOT__pkt_cnt_eq_one));
    bufp->fullBit(oldp+2421,(vlSelf->dj__DOT__codec_right_fifo__DOT__wait_for_threshold));
    bufp->fullBit(oldp+2422,(vlSelf->dj__DOT__codec_right_fifo__DOT__pkt_mode));
    bufp->fullBit(oldp+2423,(vlSelf->dj__DOT__codec_right_fifo__DOT__wait_for_pkt));
    bufp->fullBit(oldp+2424,(vlSelf->dj__DOT__codec_right_fifo__DOT__in_pkt_eop_arrive));
    bufp->fullBit(oldp+2425,(vlSelf->dj__DOT__codec_right_fifo__DOT__out_pkt_leave));
    bufp->fullBit(oldp+2426,(vlSelf->dj__DOT__codec_right_fifo__DOT__in_pkt_start));
    bufp->fullBit(oldp+2427,(vlSelf->dj__DOT__codec_right_fifo__DOT__in_pkt_error));
    bufp->fullBit(oldp+2428,(vlSelf->dj__DOT__codec_right_fifo__DOT__fifo_too_small));
    bufp->fullBit(oldp+2429,(vlSelf->dj__DOT__codec_right_fifo__DOT__out_pkt_sop_leave));
    bufp->fullBit(oldp+2430,(vlSelf->dj__DOT__codec_right_fifo__DOT__fifo_fill_level_lt_cut_through_threshold));
    bufp->fullIData(oldp+2431,(vlSelf->dj__DOT__codec_right_fifo__DOT__log2ceil__Vstatic__i),32);
    bufp->fullIData(oldp+2432,(0x15U),32);
    bufp->fullIData(oldp+2433,(0x1aU),32);
    bufp->fullIData(oldp+2434,(9U),32);
    bufp->fullBit(oldp+2435,(vlSelf->dj__DOT__dj_0__DOT__left_ifft_i_reset));
    bufp->fullSData(oldp+2436,(0xaU),10);
    bufp->fullQData(oldp+2437,(vlSelf->dj__DOT__dj_0__DOT__right_fft_o_result),42);
    bufp->fullBit(oldp+2439,(vlSelf->dj__DOT__dj_0__DOT__right_fft_o_sync));
    bufp->fullBit(oldp+2440,(vlSelf->dj__DOT__dj_0__DOT__right_ifft_i_ce));
    bufp->fullQData(oldp+2441,(vlSelf->dj__DOT__dj_0__DOT__right_ifft_i_sample),42);
    bufp->fullBit(oldp+2443,(vlSelf->dj__DOT__dj_0__DOT__right_ifft_i_reset));
    bufp->fullBit(oldp+2444,(vlSelf->dj__DOT__dj_0__DOT__right_ifft_o_sync));
    bufp->fullSData(oldp+2445,(vlSelf->dj__DOT__dj_0__DOT__right_lpf_cutoff),10);
    bufp->fullBit(oldp+2446,(vlSelf->dj__DOT__dj_0__DOT__right_lpf_o_ce));
    bufp->fullBit(oldp+2447,(vlSelf->dj__DOT__dj_0__DOT__right_lpf_o_sync));
    bufp->fullQData(oldp+2448,(vlSelf->dj__DOT__dj_0__DOT__right_lpf_o_sample),42);
    bufp->fullIData(oldp+2450,(0x12U),32);
    bufp->fullIData(oldp+2451,(0x16U),32);
    bufp->fullIData(oldp+2452,(6U),32);
    bufp->fullBit(oldp+2453,(1U));
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x5f313238U;
    __Vtemp_1[2U] = 0x636d656dU;
    bufp->fullWData(oldp+2454,(__Vtemp_1),96);
    bufp->fullCData(oldp+2457,(1U),2);
    bufp->fullIData(oldp+2458,(0x29U),32);
    bufp->fullIData(oldp+2459,(0U),20);
    bufp->fullIData(oldp+2460,(0x2bU),32);
    bufp->fullIData(oldp+2461,(4U),32);
    bufp->fullIData(oldp+2462,(0x13U),32);
    bufp->fullIData(oldp+2463,(0x17U),32);
    bufp->fullIData(oldp+2464,(0x14U),32);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x6d5f3136U;
    __Vtemp_2[2U] = 0x636d65U;
    bufp->fullWData(oldp+2465,(__Vtemp_2),88);
    bufp->fullIData(oldp+2468,(0x2dU),32);
    bufp->fullIData(oldp+2469,(0x11U),32);
    bufp->fullIData(oldp+2470,(7U),32);
    __Vtemp_3[0U] = 0x2e686578U;
    __Vtemp_3[1U] = 0x5f323536U;
    __Vtemp_3[2U] = 0x636d656dU;
    bufp->fullWData(oldp+2471,(__Vtemp_3),96);
    bufp->fullIData(oldp+2474,(0x27U),32);
    bufp->fullIData(oldp+2475,(0U),18);
    __Vtemp_4[0U] = 0x2e686578U;
    __Vtemp_4[1U] = 0x6d5f3332U;
    __Vtemp_4[2U] = 0x636d65U;
    bufp->fullWData(oldp+2476,(__Vtemp_4),88);
    bufp->fullIData(oldp+2479,(0U),21);
    __Vtemp_5[0U] = 0x2e686578U;
    __Vtemp_5[1U] = 0x5f353132U;
    __Vtemp_5[2U] = 0x636d656dU;
    bufp->fullWData(oldp+2480,(__Vtemp_5),96);
    bufp->fullIData(oldp+2483,(0x25U),32);
    bufp->fullIData(oldp+2484,(0U),17);
    bufp->fullIData(oldp+2485,(5U),32);
    __Vtemp_6[0U] = 0x2e686578U;
    __Vtemp_6[1U] = 0x6d5f3634U;
    __Vtemp_6[2U] = 0x636d65U;
    bufp->fullWData(oldp+2486,(__Vtemp_6),88);
    bufp->fullIData(oldp+2489,(0U),19);
    bufp->fullIData(oldp+2490,(0x18U),32);
    __Vtemp_7[0U] = 0x2e686578U;
    __Vtemp_7[1U] = 0x656d5f38U;
    __Vtemp_7[2U] = 0x636dU;
    bufp->fullWData(oldp+2491,(__Vtemp_7),80);
    bufp->fullIData(oldp+2494,(0U),22);
    bufp->fullIData(oldp+2495,(0x2fU),32);
    bufp->fullIData(oldp+2496,(0x1bU),32);
    __Vtemp_8[0U] = 0x2e686578U;
    __Vtemp_8[1U] = 0x5f313238U;
    __Vtemp_8[2U] = 0x636d656dU;
    __Vtemp_8[3U] = 0x69U;
    bufp->fullWData(oldp+2497,(__Vtemp_8),104);
    bufp->fullIData(oldp+2501,(0x33U),32);
    bufp->fullIData(oldp+2502,(0U),25);
    bufp->fullIData(oldp+2503,(0x35U),32);
    bufp->fullIData(oldp+2504,(0x1cU),32);
    bufp->fullIData(oldp+2505,(0x19U),32);
    __Vtemp_9[0U] = 0x2e686578U;
    __Vtemp_9[1U] = 0x6d5f3136U;
    __Vtemp_9[2U] = 0x69636d65U;
    bufp->fullWData(oldp+2506,(__Vtemp_9),96);
    bufp->fullIData(oldp+2509,(0x37U),32);
    __Vtemp_10[0U] = 0x2e686578U;
    __Vtemp_10[1U] = 0x5f323536U;
    __Vtemp_10[2U] = 0x636d656dU;
    __Vtemp_10[3U] = 0x69U;
    bufp->fullWData(oldp+2510,(__Vtemp_10),104);
    bufp->fullIData(oldp+2514,(0x31U),32);
    bufp->fullIData(oldp+2515,(0U),23);
    __Vtemp_11[0U] = 0x2e686578U;
    __Vtemp_11[1U] = 0x6d5f3332U;
    __Vtemp_11[2U] = 0x69636d65U;
    bufp->fullWData(oldp+2516,(__Vtemp_11),96);
    bufp->fullIData(oldp+2519,(0U),26);
    __Vtemp_12[0U] = 0x2e686578U;
    __Vtemp_12[1U] = 0x5f353132U;
    __Vtemp_12[2U] = 0x636d656dU;
    __Vtemp_12[3U] = 0x69U;
    bufp->fullWData(oldp+2520,(__Vtemp_12),104);
    __Vtemp_13[0U] = 0x2e686578U;
    __Vtemp_13[1U] = 0x6d5f3634U;
    __Vtemp_13[2U] = 0x69636d65U;
    bufp->fullWData(oldp+2524,(__Vtemp_13),96);
    bufp->fullIData(oldp+2527,(0U),24);
    bufp->fullIData(oldp+2528,(0x1dU),32);
    __Vtemp_14[0U] = 0x2e686578U;
    __Vtemp_14[1U] = 0x656d5f38U;
    __Vtemp_14[2U] = 0x69636dU;
    bufp->fullWData(oldp+2529,(__Vtemp_14),88);
    bufp->fullIData(oldp+2532,(0U),27);
    bufp->fullIData(oldp+2533,(0x39U),32);
    bufp->fullCData(oldp+2534,(vlSelf->dj__DOT__left_sc_fifo__DOT__csr_address),2);
    bufp->fullBit(oldp+2535,(vlSelf->dj__DOT__left_sc_fifo__DOT__csr_write));
    bufp->fullBit(oldp+2536,(vlSelf->dj__DOT__left_sc_fifo__DOT__csr_read));
    bufp->fullIData(oldp+2537,(vlSelf->dj__DOT__left_sc_fifo__DOT__csr_writedata),32);
    bufp->fullWData(oldp+2538,(vlSelf->dj__DOT__left_sc_fifo__DOT__mem_used),1024);
    bufp->fullIData(oldp+2570,(vlSelf->dj__DOT__left_sc_fifo__DOT__cut_through_threshold),24);
    bufp->fullSData(oldp+2571,(vlSelf->dj__DOT__left_sc_fifo__DOT__pkt_cnt),16);
    bufp->fullBit(oldp+2572,(vlSelf->dj__DOT__left_sc_fifo__DOT__drop_on_error_en));
    bufp->fullBit(oldp+2573,(vlSelf->dj__DOT__left_sc_fifo__DOT__error_in_pkt));
    bufp->fullBit(oldp+2574,(vlSelf->dj__DOT__left_sc_fifo__DOT__pkt_has_started));
    bufp->fullBit(oldp+2575,(vlSelf->dj__DOT__left_sc_fifo__DOT__sop_has_left_fifo));
    bufp->fullBit(oldp+2576,(vlSelf->dj__DOT__left_sc_fifo__DOT__fifo_too_small_r));
    bufp->fullBit(oldp+2577,(vlSelf->dj__DOT__left_sc_fifo__DOT__pkt_cnt_eq_zero));
    bufp->fullBit(oldp+2578,(vlSelf->dj__DOT__left_sc_fifo__DOT__pkt_cnt_eq_one));
    bufp->fullBit(oldp+2579,(vlSelf->dj__DOT__left_sc_fifo__DOT__wait_for_threshold));
    bufp->fullBit(oldp+2580,(vlSelf->dj__DOT__left_sc_fifo__DOT__pkt_mode));
    bufp->fullBit(oldp+2581,(vlSelf->dj__DOT__left_sc_fifo__DOT__wait_for_pkt));
    bufp->fullBit(oldp+2582,(vlSelf->dj__DOT__left_sc_fifo__DOT__in_pkt_eop_arrive));
    bufp->fullBit(oldp+2583,(vlSelf->dj__DOT__left_sc_fifo__DOT__out_pkt_leave));
    bufp->fullBit(oldp+2584,(vlSelf->dj__DOT__left_sc_fifo__DOT__in_pkt_start));
    bufp->fullBit(oldp+2585,(vlSelf->dj__DOT__left_sc_fifo__DOT__in_pkt_error));
    bufp->fullBit(oldp+2586,(vlSelf->dj__DOT__left_sc_fifo__DOT__fifo_too_small));
    bufp->fullBit(oldp+2587,(vlSelf->dj__DOT__left_sc_fifo__DOT__out_pkt_sop_leave));
    bufp->fullBit(oldp+2588,(vlSelf->dj__DOT__left_sc_fifo__DOT__fifo_fill_level_lt_cut_through_threshold));
    bufp->fullIData(oldp+2589,(vlSelf->dj__DOT__left_sc_fifo__DOT__log2ceil__Vstatic__i),32);
    bufp->fullCData(oldp+2590,(vlSelf->dj__DOT__right_sc_fifo__DOT__csr_address),2);
    bufp->fullBit(oldp+2591,(vlSelf->dj__DOT__right_sc_fifo__DOT__csr_write));
    bufp->fullBit(oldp+2592,(vlSelf->dj__DOT__right_sc_fifo__DOT__csr_read));
    bufp->fullIData(oldp+2593,(vlSelf->dj__DOT__right_sc_fifo__DOT__csr_writedata),32);
    bufp->fullWData(oldp+2594,(vlSelf->dj__DOT__right_sc_fifo__DOT__mem_used),1024);
    bufp->fullIData(oldp+2626,(vlSelf->dj__DOT__right_sc_fifo__DOT__cut_through_threshold),24);
    bufp->fullSData(oldp+2627,(vlSelf->dj__DOT__right_sc_fifo__DOT__pkt_cnt),16);
    bufp->fullBit(oldp+2628,(vlSelf->dj__DOT__right_sc_fifo__DOT__drop_on_error_en));
    bufp->fullBit(oldp+2629,(vlSelf->dj__DOT__right_sc_fifo__DOT__error_in_pkt));
    bufp->fullBit(oldp+2630,(vlSelf->dj__DOT__right_sc_fifo__DOT__pkt_has_started));
    bufp->fullBit(oldp+2631,(vlSelf->dj__DOT__right_sc_fifo__DOT__sop_has_left_fifo));
    bufp->fullBit(oldp+2632,(vlSelf->dj__DOT__right_sc_fifo__DOT__fifo_too_small_r));
    bufp->fullBit(oldp+2633,(vlSelf->dj__DOT__right_sc_fifo__DOT__pkt_cnt_eq_zero));
    bufp->fullBit(oldp+2634,(vlSelf->dj__DOT__right_sc_fifo__DOT__pkt_cnt_eq_one));
    bufp->fullBit(oldp+2635,(vlSelf->dj__DOT__right_sc_fifo__DOT__wait_for_threshold));
    bufp->fullBit(oldp+2636,(vlSelf->dj__DOT__right_sc_fifo__DOT__pkt_mode));
    bufp->fullBit(oldp+2637,(vlSelf->dj__DOT__right_sc_fifo__DOT__wait_for_pkt));
    bufp->fullBit(oldp+2638,(vlSelf->dj__DOT__right_sc_fifo__DOT__in_pkt_eop_arrive));
    bufp->fullBit(oldp+2639,(vlSelf->dj__DOT__right_sc_fifo__DOT__out_pkt_leave));
    bufp->fullBit(oldp+2640,(vlSelf->dj__DOT__right_sc_fifo__DOT__in_pkt_start));
    bufp->fullBit(oldp+2641,(vlSelf->dj__DOT__right_sc_fifo__DOT__in_pkt_error));
    bufp->fullBit(oldp+2642,(vlSelf->dj__DOT__right_sc_fifo__DOT__fifo_too_small));
    bufp->fullBit(oldp+2643,(vlSelf->dj__DOT__right_sc_fifo__DOT__out_pkt_sop_leave));
    bufp->fullBit(oldp+2644,(vlSelf->dj__DOT__right_sc_fifo__DOT__fifo_fill_level_lt_cut_through_threshold));
    bufp->fullIData(oldp+2645,(vlSelf->dj__DOT__right_sc_fifo__DOT__log2ceil__Vstatic__i),32);
    bufp->fullQData(oldp+2646,(0x6465617373657274ULL),64);
    bufp->fullCData(oldp+2648,(vlSelf->dj__DOT__rst_controller__DOT__altera_reset_synchronizer_int_chain),5);
    bufp->fullCData(oldp+2649,(vlSelf->dj__DOT__rst_controller__DOT__r_sync_rst_chain),4);
    bufp->fullBit(oldp+2650,(vlSelf->dj__DOT__rst_controller__DOT__r_sync_rst));
    bufp->fullBit(oldp+2651,(vlSelf->dj__DOT__rst_controller__DOT__r_early_rst));
}

VL_ATTR_COLD void Vdj___024root__trace_full_0_sub_0(Vdj___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdj___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root__trace_full_0\n"); );
    // Init
    Vdj___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdj___024root*>(voidSelf);
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdj___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdj___024root__trace_full_0_sub_0(Vdj___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdj___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__cmem[0]),46);
    bufp->fullQData(oldp+3,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__cmem[1]),46);
    bufp->fullQData(oldp+5,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__cmem[2]),46);
    bufp->fullQData(oldp+7,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__cmem[3]),46);
    bufp->fullQData(oldp+9,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__cmem[4]),46);
    bufp->fullQData(oldp+11,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__cmem[5]),46);
    bufp->fullQData(oldp+13,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__cmem[6]),46);
    bufp->fullQData(oldp+15,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__cmem[7]),46);
    bufp->fullQData(oldp+17,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[0]),46);
    bufp->fullQData(oldp+19,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[1]),46);
    bufp->fullQData(oldp+21,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[2]),46);
    bufp->fullQData(oldp+23,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[3]),46);
    bufp->fullQData(oldp+25,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[4]),46);
    bufp->fullQData(oldp+27,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[5]),46);
    bufp->fullQData(oldp+29,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[6]),46);
    bufp->fullQData(oldp+31,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[7]),46);
    bufp->fullQData(oldp+33,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[8]),46);
    bufp->fullQData(oldp+35,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[9]),46);
    bufp->fullQData(oldp+37,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[10]),46);
    bufp->fullQData(oldp+39,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[11]),46);
    bufp->fullQData(oldp+41,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[12]),46);
    bufp->fullQData(oldp+43,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[13]),46);
    bufp->fullQData(oldp+45,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[14]),46);
    bufp->fullQData(oldp+47,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__cmem[15]),46);
    bufp->fullQData(oldp+49,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[0]),44);
    bufp->fullQData(oldp+51,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[1]),44);
    bufp->fullQData(oldp+53,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[2]),44);
    bufp->fullQData(oldp+55,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[3]),44);
    bufp->fullQData(oldp+57,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[4]),44);
    bufp->fullQData(oldp+59,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[5]),44);
    bufp->fullQData(oldp+61,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[6]),44);
    bufp->fullQData(oldp+63,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[7]),44);
    bufp->fullQData(oldp+65,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[8]),44);
    bufp->fullQData(oldp+67,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[9]),44);
    bufp->fullQData(oldp+69,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[10]),44);
    bufp->fullQData(oldp+71,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[11]),44);
    bufp->fullQData(oldp+73,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[12]),44);
    bufp->fullQData(oldp+75,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[13]),44);
    bufp->fullQData(oldp+77,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[14]),44);
    bufp->fullQData(oldp+79,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[15]),44);
    bufp->fullQData(oldp+81,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[16]),44);
    bufp->fullQData(oldp+83,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[17]),44);
    bufp->fullQData(oldp+85,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[18]),44);
    bufp->fullQData(oldp+87,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[19]),44);
    bufp->fullQData(oldp+89,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[20]),44);
    bufp->fullQData(oldp+91,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[21]),44);
    bufp->fullQData(oldp+93,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[22]),44);
    bufp->fullQData(oldp+95,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[23]),44);
    bufp->fullQData(oldp+97,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[24]),44);
    bufp->fullQData(oldp+99,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[25]),44);
    bufp->fullQData(oldp+101,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[26]),44);
    bufp->fullQData(oldp+103,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[27]),44);
    bufp->fullQData(oldp+105,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[28]),44);
    bufp->fullQData(oldp+107,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[29]),44);
    bufp->fullQData(oldp+109,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[30]),44);
    bufp->fullQData(oldp+111,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__cmem[31]),44);
    bufp->fullQData(oldp+113,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__cmem[0]),48);
    bufp->fullQData(oldp+115,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__cmem[1]),48);
    bufp->fullQData(oldp+117,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__cmem[2]),48);
    bufp->fullQData(oldp+119,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__cmem[3]),48);
    bufp->fullQData(oldp+121,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__cmem[0]),56);
    bufp->fullQData(oldp+123,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__cmem[1]),56);
    bufp->fullQData(oldp+125,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__cmem[2]),56);
    bufp->fullQData(oldp+127,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__cmem[3]),56);
    bufp->fullQData(oldp+129,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__cmem[4]),56);
    bufp->fullQData(oldp+131,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__cmem[5]),56);
    bufp->fullQData(oldp+133,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__cmem[6]),56);
    bufp->fullQData(oldp+135,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__cmem[7]),56);
    bufp->fullQData(oldp+137,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[0]),56);
    bufp->fullQData(oldp+139,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[1]),56);
    bufp->fullQData(oldp+141,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[2]),56);
    bufp->fullQData(oldp+143,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[3]),56);
    bufp->fullQData(oldp+145,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[4]),56);
    bufp->fullQData(oldp+147,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[5]),56);
    bufp->fullQData(oldp+149,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[6]),56);
    bufp->fullQData(oldp+151,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[7]),56);
    bufp->fullQData(oldp+153,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[8]),56);
    bufp->fullQData(oldp+155,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[9]),56);
    bufp->fullQData(oldp+157,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[10]),56);
    bufp->fullQData(oldp+159,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[11]),56);
    bufp->fullQData(oldp+161,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[12]),56);
    bufp->fullQData(oldp+163,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[13]),56);
    bufp->fullQData(oldp+165,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[14]),56);
    bufp->fullQData(oldp+167,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__cmem[15]),56);
    bufp->fullQData(oldp+169,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[0]),54);
    bufp->fullQData(oldp+171,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[1]),54);
    bufp->fullQData(oldp+173,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[2]),54);
    bufp->fullQData(oldp+175,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[3]),54);
    bufp->fullQData(oldp+177,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[4]),54);
    bufp->fullQData(oldp+179,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[5]),54);
    bufp->fullQData(oldp+181,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[6]),54);
    bufp->fullQData(oldp+183,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[7]),54);
    bufp->fullQData(oldp+185,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[8]),54);
    bufp->fullQData(oldp+187,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[9]),54);
    bufp->fullQData(oldp+189,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[10]),54);
    bufp->fullQData(oldp+191,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[11]),54);
    bufp->fullQData(oldp+193,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[12]),54);
    bufp->fullQData(oldp+195,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[13]),54);
    bufp->fullQData(oldp+197,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[14]),54);
    bufp->fullQData(oldp+199,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[15]),54);
    bufp->fullQData(oldp+201,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[16]),54);
    bufp->fullQData(oldp+203,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[17]),54);
    bufp->fullQData(oldp+205,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[18]),54);
    bufp->fullQData(oldp+207,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[19]),54);
    bufp->fullQData(oldp+209,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[20]),54);
    bufp->fullQData(oldp+211,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[21]),54);
    bufp->fullQData(oldp+213,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[22]),54);
    bufp->fullQData(oldp+215,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[23]),54);
    bufp->fullQData(oldp+217,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[24]),54);
    bufp->fullQData(oldp+219,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[25]),54);
    bufp->fullQData(oldp+221,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[26]),54);
    bufp->fullQData(oldp+223,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[27]),54);
    bufp->fullQData(oldp+225,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[28]),54);
    bufp->fullQData(oldp+227,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[29]),54);
    bufp->fullQData(oldp+229,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[30]),54);
    bufp->fullQData(oldp+231,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__cmem[31]),54);
    bufp->fullQData(oldp+233,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__cmem[0]),58);
    bufp->fullQData(oldp+235,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__cmem[1]),58);
    bufp->fullQData(oldp+237,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__cmem[2]),58);
    bufp->fullQData(oldp+239,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__cmem[3]),58);
    bufp->fullBit(oldp+241,(vlSelf->dj__DOT__dj_0_left_fifo_sink_valid));
    bufp->fullBit(oldp+242,(vlSelf->dj__DOT__dj_0_right_fifo_sink_valid));
    bufp->fullBit(oldp+243,(vlSelf->dj__DOT__rst_controller__DOT__merged_reset));
    bufp->fullSData(oldp+244,(vlSelf->dj__DOT__left_sc_fifo__DOT__next_wr_ptr),10);
    bufp->fullBit(oldp+245,(vlSelf->dj__DOT__left_sc_fifo__DOT__write));
    bufp->fullBit(oldp+246,(vlSelf->dj__DOT__left_sc_fifo__DOT__next_empty));
    bufp->fullBit(oldp+247,(vlSelf->dj__DOT__left_sc_fifo__DOT__next_full));
    bufp->fullSData(oldp+248,(vlSelf->dj__DOT__right_sc_fifo__DOT__next_wr_ptr),10);
    bufp->fullBit(oldp+249,(vlSelf->dj__DOT__right_sc_fifo__DOT__write));
    bufp->fullBit(oldp+250,(vlSelf->dj__DOT__right_sc_fifo__DOT__next_empty));
    bufp->fullBit(oldp+251,(vlSelf->dj__DOT__right_sc_fifo__DOT__next_full));
    bufp->fullSData(oldp+252,((0xffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft_o_result 
                                                  >> 0x1aU)))),16);
    bufp->fullBit(oldp+253,((0U == (IData)(vlSelf->dj__DOT__dj_0__DOT__ctr))));
    bufp->fullQData(oldp+254,(vlSelf->dj__DOT__dj_0__DOT__left_fft_o_result),42);
    bufp->fullBit(oldp+256,(vlSelf->dj__DOT__dj_0__DOT__left_fft_o_sync));
    bufp->fullBit(oldp+257,(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_ce));
    bufp->fullQData(oldp+258,(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_sample),42);
    bufp->fullQData(oldp+260,(vlSelf->dj__DOT__dj_0__DOT__left_ifft_o_result),52);
    bufp->fullBit(oldp+262,(vlSelf->dj__DOT__dj_0__DOT__left_ifft_o_sync));
    bufp->fullBit(oldp+263,(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_sync));
    bufp->fullBit(oldp+264,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft_o_sync) 
                             | (IData)(vlSelf->dj__DOT__dj_0__DOT__left_r_syncd))));
    bufp->fullBit(oldp+265,(vlSelf->dj__DOT__dj_0__DOT__left_r_syncd));
    bufp->fullBit(oldp+266,(((IData)(vlSelf->dj__DOT__dj_0__DOT__right_fft_o_sync) 
                             | (IData)(vlSelf->dj__DOT__dj_0__DOT__right_r_syncd))));
    bufp->fullBit(oldp+267,(vlSelf->dj__DOT__dj_0__DOT__right_r_syncd));
    bufp->fullCData(oldp+268,(vlSelf->dj__DOT__dj_0__DOT__ctr),3);
    bufp->fullBit(oldp+269,((1U & ((IData)(vlSelf->dj__DOT__dj_0__DOT__ctr) 
                                   >> 2U))));
    bufp->fullBit(oldp+270,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__br_sync));
    bufp->fullQData(oldp+271,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__br_result),42);
    bufp->fullBit(oldp+273,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s512));
    bufp->fullQData(oldp+274,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d512),34);
    bufp->fullBit(oldp+276,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s256));
    bufp->fullQData(oldp+277,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d256),36);
    bufp->fullBit(oldp+279,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s128));
    bufp->fullQData(oldp+280,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d128),36);
    bufp->fullBit(oldp+282,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s64));
    bufp->fullQData(oldp+283,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d64),38);
    bufp->fullBit(oldp+285,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s32));
    bufp->fullQData(oldp+286,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d32),38);
    bufp->fullBit(oldp+288,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s16));
    bufp->fullQData(oldp+289,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d16),40);
    bufp->fullBit(oldp+291,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s8));
    bufp->fullQData(oldp+292,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d8),40);
    bufp->fullBit(oldp+294,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s4));
    bufp->fullQData(oldp+295,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d4),42);
    bufp->fullBit(oldp+297,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s2));
    bufp->fullQData(oldp+298,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__o_r)) 
                                << 0x15U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__o_i)))),42);
    bufp->fullBit(oldp+300,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__r_br_started) 
                             | (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_s2))));
    bufp->fullBit(oldp+301,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__r_br_started));
    bufp->fullSData(oldp+302,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr),10);
    bufp->fullSData(oldp+303,(((0x200U & ((~ ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                              >> 9U)) 
                                          << 9U)) | 
                               ((0x100U & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                           << 8U)) 
                                | ((0x80U & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                             << 6U)) 
                                   | ((0x40U & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                << 4U)) 
                                      | ((0x20U & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                   << 2U)) 
                                         | ((0x10U 
                                             & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr)) 
                                            | ((8U 
                                                & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                   >> 2U)) 
                                               | ((4U 
                                                   & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                      >> 4U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                         >> 6U)) 
                                                     | (1U 
                                                        & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__wraddr) 
                                                           >> 8U)))))))))))),10);
    bufp->fullBit(oldp+304,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__revstage__DOT__in_reset));
    bufp->fullBit(oldp+305,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__wait_for_sync));
    bufp->fullQData(oldp+306,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__ib_a),36);
    bufp->fullQData(oldp+308,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__ib_b),36);
    bufp->fullQData(oldp+310,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__ib_c),44);
    bufp->fullBit(oldp+312,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__ib_sync));
    bufp->fullBit(oldp+313,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__b_started));
    bufp->fullBit(oldp+314,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__ob_sync));
    bufp->fullQData(oldp+315,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                << 0x12U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),36);
    bufp->fullQData(oldp+317,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                << 0x12U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),36);
    bufp->fullCData(oldp+319,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__iaddr),7);
    bufp->fullCData(oldp+320,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__oaddr),7);
    bufp->fullCData(oldp+321,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__nxt_oaddr),6);
    bufp->fullQData(oldp+322,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__pre_ovalue),36);
    bufp->fullQData(oldp+324,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left),36);
    bufp->fullQData(oldp+326,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right),36);
    bufp->fullBit(oldp+328,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+329,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+330,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef),44);
    bufp->fullIData(oldp+332,((0x3ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                   >> 0x12U)))),18);
    bufp->fullIData(oldp+333,((0x3ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left))),18);
    bufp->fullIData(oldp+334,((0x3ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                   >> 0x12U)))),18);
    bufp->fullIData(oldp+335,((0x3ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right))),18);
    bufp->fullIData(oldp+336,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),22);
    bufp->fullIData(oldp+337,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),22);
    bufp->fullIData(oldp+338,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),19);
    bufp->fullIData(oldp+339,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),19);
    bufp->fullIData(oldp+340,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),19);
    bufp->fullIData(oldp+341,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),19);
    bufp->fullQData(oldp+342,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv),39);
    bufp->fullQData(oldp+344,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv),39);
    bufp->fullQData(oldp+346,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),41);
    bufp->fullQData(oldp+348,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),41);
    bufp->fullQData(oldp+350,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),43);
    bufp->fullQData(oldp+352,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one),43);
    bufp->fullQData(oldp+354,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two),43);
    bufp->fullBit(oldp+356,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x26U)))));
    bufp->fullQData(oldp+357,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x12U)))))))) 
                                << 0x27U) | (0x7fffffffffULL 
                                             & VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U)))),41);
    bufp->fullQData(oldp+359,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x25U)))))))) 
                                << 0x27U) | ((QData)((IData)(
                                                             (0x7ffffU 
                                                              & (IData)(
                                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                         >> 0x13U))))) 
                                             << 0x14U))),41);
    bufp->fullQData(oldp+361,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved),39);
    bufp->fullQData(oldp+363,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),43);
    bufp->fullQData(oldp+365,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),43);
    bufp->fullIData(oldp+367,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),18);
    bufp->fullIData(oldp+368,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),18);
    bufp->fullIData(oldp+369,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),18);
    bufp->fullIData(oldp+370,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),18);
    bufp->fullIData(oldp+371,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),22);
    bufp->fullIData(oldp+372,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),22);
    bufp->fullIData(oldp+373,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),19);
    bufp->fullIData(oldp+374,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),19);
    bufp->fullIData(oldp+375,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),23);
    bufp->fullIData(oldp+376,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),20);
    bufp->fullIData(oldp+377,((0x3ffffU & (IData)((0x3ffffULL 
                                                   & (VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                      >> 0x15U))))),18);
    bufp->fullIData(oldp+378,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                         >> 0x15U)))))),18);
    bufp->fullBit(oldp+379,((1U & (IData)((0x3ffffULL 
                                           & (VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                              >> 0x15U))))));
    bufp->fullBit(oldp+380,((1U & (IData)((0x7ffffULL 
                                           & (VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                              >> 0x14U))))));
    bufp->fullIData(oldp+381,((0x3ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                   >> 0x14U)))),18);
    bufp->fullIData(oldp+382,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x14U))))),18);
    bufp->fullBit(oldp+383,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x14U)))));
    bufp->fullBit(oldp+384,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x13U)))));
    bufp->fullIData(oldp+385,((0x3ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x15U)))),18);
    bufp->fullIData(oldp+386,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x15U))))),18);
    bufp->fullBit(oldp+387,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+388,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+389,((0xfffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),20);
    bufp->fullIData(oldp+390,((0x3ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x15U)))),18);
    bufp->fullIData(oldp+391,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x15U))))),18);
    bufp->fullBit(oldp+392,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+393,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+394,((0xfffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),20);
    bufp->fullBit(oldp+395,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__wait_for_sync));
    bufp->fullQData(oldp+396,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__ib_a),38);
    bufp->fullQData(oldp+398,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__ib_b),38);
    bufp->fullQData(oldp+400,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__ib_c),46);
    bufp->fullBit(oldp+402,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__ib_sync));
    bufp->fullBit(oldp+403,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__b_started));
    bufp->fullBit(oldp+404,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__ob_sync));
    bufp->fullQData(oldp+405,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                << 0x14U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),40);
    bufp->fullQData(oldp+407,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                << 0x14U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),40);
    bufp->fullCData(oldp+409,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__iaddr),4);
    bufp->fullQData(oldp+410,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__imem[0]),38);
    bufp->fullQData(oldp+412,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__imem[1]),38);
    bufp->fullQData(oldp+414,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__imem[2]),38);
    bufp->fullQData(oldp+416,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__imem[3]),38);
    bufp->fullQData(oldp+418,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__imem[4]),38);
    bufp->fullQData(oldp+420,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__imem[5]),38);
    bufp->fullQData(oldp+422,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__imem[6]),38);
    bufp->fullQData(oldp+424,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__imem[7]),38);
    bufp->fullCData(oldp+426,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__oaddr),4);
    bufp->fullQData(oldp+427,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__omem[0]),40);
    bufp->fullQData(oldp+429,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__omem[1]),40);
    bufp->fullQData(oldp+431,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__omem[2]),40);
    bufp->fullQData(oldp+433,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__omem[3]),40);
    bufp->fullQData(oldp+435,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__omem[4]),40);
    bufp->fullQData(oldp+437,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__omem[5]),40);
    bufp->fullQData(oldp+439,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__omem[6]),40);
    bufp->fullQData(oldp+441,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__omem[7]),40);
    bufp->fullCData(oldp+443,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__nxt_oaddr),3);
    bufp->fullQData(oldp+444,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__pre_ovalue),40);
    bufp->fullQData(oldp+446,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left),38);
    bufp->fullQData(oldp+448,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right),38);
    bufp->fullBit(oldp+450,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+451,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+452,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef),46);
    bufp->fullIData(oldp+454,((0x7ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                   >> 0x13U)))),19);
    bufp->fullIData(oldp+455,((0x7ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left))),19);
    bufp->fullIData(oldp+456,((0x7ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                   >> 0x13U)))),19);
    bufp->fullIData(oldp+457,((0x7ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right))),19);
    bufp->fullIData(oldp+458,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),23);
    bufp->fullIData(oldp+459,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),23);
    bufp->fullIData(oldp+460,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),20);
    bufp->fullIData(oldp+461,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),20);
    bufp->fullIData(oldp+462,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),20);
    bufp->fullIData(oldp+463,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),20);
    bufp->fullQData(oldp+464,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv),41);
    bufp->fullQData(oldp+466,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv),41);
    bufp->fullQData(oldp+468,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),43);
    bufp->fullQData(oldp+470,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),43);
    bufp->fullQData(oldp+472,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),45);
    bufp->fullQData(oldp+474,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one),45);
    bufp->fullQData(oldp+476,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two),45);
    bufp->fullBit(oldp+478,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x28U)))));
    bufp->fullQData(oldp+479,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x13U)))))))) 
                                << 0x29U) | (0x1ffffffffffULL 
                                             & VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U)))),43);
    bufp->fullQData(oldp+481,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x27U)))))))) 
                                << 0x29U) | ((QData)((IData)(
                                                             (0xfffffU 
                                                              & (IData)(
                                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                         >> 0x14U))))) 
                                             << 0x15U))),43);
    bufp->fullQData(oldp+483,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved),41);
    bufp->fullQData(oldp+485,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),45);
    bufp->fullQData(oldp+487,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),45);
    bufp->fullIData(oldp+489,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),20);
    bufp->fullIData(oldp+490,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),20);
    bufp->fullIData(oldp+491,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),20);
    bufp->fullIData(oldp+492,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),20);
    bufp->fullIData(oldp+493,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),23);
    bufp->fullIData(oldp+494,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),23);
    bufp->fullIData(oldp+495,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),20);
    bufp->fullIData(oldp+496,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),20);
    bufp->fullIData(oldp+497,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),24);
    bufp->fullIData(oldp+498,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),21);
    bufp->fullIData(oldp+499,((0xfffffU & (IData)((0xfffffULL 
                                                   & (VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                      >> 0x15U))))),20);
    bufp->fullIData(oldp+500,((0xfffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (0xfffffULL 
                                                      & (VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                         >> 0x15U)))))),20);
    bufp->fullBit(oldp+501,((1U & (IData)((0xfffffULL 
                                           & (VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                              >> 0x15U))))));
    bufp->fullBit(oldp+502,((1U & (IData)((0x1fffffULL 
                                           & (VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                              >> 0x14U))))));
    bufp->fullIData(oldp+503,((0xfffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                   >> 0x14U)))),20);
    bufp->fullIData(oldp+504,((0xfffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x14U))))),20);
    bufp->fullBit(oldp+505,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+506,((0xfffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x15U)))),20);
    bufp->fullIData(oldp+507,((0xfffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x15U))))),20);
    bufp->fullBit(oldp+508,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+509,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+510,((0xfffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),20);
    bufp->fullIData(oldp+511,((0xfffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x15U)))),20);
    bufp->fullIData(oldp+512,((0xfffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x15U))))),20);
    bufp->fullBit(oldp+513,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+514,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+515,((0xfffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),20);
    bufp->fullIData(oldp+516,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__m_r),21);
    bufp->fullIData(oldp+517,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__m_i),21);
    bufp->fullIData(oldp+518,((0x1fffffU & (IData)(
                                                   (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d4 
                                                    >> 0x15U)))),21);
    bufp->fullIData(oldp+519,((0x1fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d4))),21);
    bufp->fullIData(oldp+520,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_r),22);
    bufp->fullIData(oldp+521,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_i),22);
    bufp->fullIData(oldp+522,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__sto_r),22);
    bufp->fullIData(oldp+523,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__sto_i),22);
    bufp->fullBit(oldp+524,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__wait_for_sync));
    bufp->fullBit(oldp+525,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__stage));
    bufp->fullCData(oldp+526,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__sync_pipe),2);
    bufp->fullIData(oldp+527,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__o_r),21);
    bufp->fullIData(oldp+528,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__o_i),21);
    bufp->fullIData(oldp+529,((0x1fffffU & (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_i 
                                            >> 1U))),21);
    bufp->fullIData(oldp+530,((0x1fffffU & ((IData)(1U) 
                                            + (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_i 
                                               >> 1U)))),21);
    bufp->fullBit(oldp+531,((1U & (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_i 
                                   >> 1U))));
    bufp->fullBit(oldp+532,((1U & vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_i)));
    bufp->fullIData(oldp+533,((0x1fffffU & (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_r 
                                            >> 1U))),21);
    bufp->fullIData(oldp+534,((0x1fffffU & ((IData)(1U) 
                                            + (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_r 
                                               >> 1U)))),21);
    bufp->fullBit(oldp+535,((1U & (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_r 
                                   >> 1U))));
    bufp->fullBit(oldp+536,((1U & vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_2__DOT__rnd_r)));
    bufp->fullBit(oldp+537,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__wait_for_sync));
    bufp->fullQData(oldp+538,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__ib_a),34);
    bufp->fullQData(oldp+540,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__ib_b),34);
    bufp->fullQData(oldp+542,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__ib_c),42);
    bufp->fullBit(oldp+544,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__ib_sync));
    bufp->fullBit(oldp+545,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__b_started));
    bufp->fullBit(oldp+546,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__ob_sync));
    bufp->fullQData(oldp+547,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                << 0x12U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),36);
    bufp->fullQData(oldp+549,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                << 0x12U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),36);
    bufp->fullCData(oldp+551,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__iaddr),8);
    bufp->fullCData(oldp+552,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__oaddr),8);
    bufp->fullCData(oldp+553,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__nxt_oaddr),7);
    bufp->fullQData(oldp+554,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__pre_ovalue),36);
    bufp->fullQData(oldp+556,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left),34);
    bufp->fullQData(oldp+558,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right),34);
    bufp->fullBit(oldp+560,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+561,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+562,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef),42);
    bufp->fullIData(oldp+564,((0x1ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                   >> 0x11U)))),17);
    bufp->fullIData(oldp+565,((0x1ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left))),17);
    bufp->fullIData(oldp+566,((0x1ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                   >> 0x11U)))),17);
    bufp->fullIData(oldp+567,((0x1ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right))),17);
    bufp->fullIData(oldp+568,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),21);
    bufp->fullIData(oldp+569,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),21);
    bufp->fullIData(oldp+570,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),18);
    bufp->fullIData(oldp+571,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),18);
    bufp->fullIData(oldp+572,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),18);
    bufp->fullIData(oldp+573,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),18);
    bufp->fullQData(oldp+574,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv),37);
    bufp->fullQData(oldp+576,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv),37);
    bufp->fullQData(oldp+578,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),39);
    bufp->fullQData(oldp+580,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),39);
    bufp->fullQData(oldp+582,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),41);
    bufp->fullQData(oldp+584,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one),41);
    bufp->fullQData(oldp+586,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two),41);
    bufp->fullBit(oldp+588,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x24U)))));
    bufp->fullQData(oldp+589,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x11U)))))))) 
                                << 0x25U) | (0x1fffffffffULL 
                                             & VL_SHIFTL_QQI(37,37,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U)))),39);
    bufp->fullQData(oldp+591,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x23U)))))))) 
                                << 0x25U) | ((QData)((IData)(
                                                             (0x3ffffU 
                                                              & (IData)(
                                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                         >> 0x12U))))) 
                                             << 0x13U))),39);
    bufp->fullQData(oldp+593,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved),37);
    bufp->fullQData(oldp+595,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),41);
    bufp->fullQData(oldp+597,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),41);
    bufp->fullIData(oldp+599,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),18);
    bufp->fullIData(oldp+600,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),18);
    bufp->fullIData(oldp+601,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),18);
    bufp->fullIData(oldp+602,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),18);
    bufp->fullIData(oldp+603,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),21);
    bufp->fullIData(oldp+604,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),21);
    bufp->fullIData(oldp+605,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),18);
    bufp->fullIData(oldp+606,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),18);
    bufp->fullIData(oldp+607,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),22);
    bufp->fullIData(oldp+608,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),19);
    bufp->fullIData(oldp+609,((0x3ffffU & (IData)((0x3ffffULL 
                                                   & (VL_SHIFTL_QQI(37,37,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                      >> 0x13U))))),18);
    bufp->fullIData(oldp+610,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (0x3ffffULL 
                                                      & (VL_SHIFTL_QQI(37,37,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                                         >> 0x13U)))))),18);
    bufp->fullBit(oldp+611,((1U & (IData)((0x3ffffULL 
                                           & (VL_SHIFTL_QQI(37,37,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                              >> 0x13U))))));
    bufp->fullBit(oldp+612,((1U & (IData)((0x7ffffULL 
                                           & (VL_SHIFTL_QQI(37,37,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x13U) 
                                              >> 0x12U))))));
    bufp->fullIData(oldp+613,((0x3ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                   >> 0x12U)))),18);
    bufp->fullIData(oldp+614,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x12U))))),18);
    bufp->fullBit(oldp+615,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x12U)))));
    bufp->fullIData(oldp+616,((0x3ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x13U)))),18);
    bufp->fullIData(oldp+617,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x13U))))),18);
    bufp->fullBit(oldp+618,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+619,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x12U)))));
    bufp->fullIData(oldp+620,((0x3ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),18);
    bufp->fullIData(oldp+621,((0x3ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x13U)))),18);
    bufp->fullIData(oldp+622,((0x3ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x13U))))),18);
    bufp->fullBit(oldp+623,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x13U)))));
    bufp->fullBit(oldp+624,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x12U)))));
    bufp->fullIData(oldp+625,((0x3ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),18);
    bufp->fullBit(oldp+626,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__wait_for_sync));
    bufp->fullQData(oldp+627,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__ib_a),38);
    bufp->fullQData(oldp+629,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__ib_b),38);
    bufp->fullQData(oldp+631,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__ib_c),46);
    bufp->fullBit(oldp+633,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__ib_sync));
    bufp->fullBit(oldp+634,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__b_started));
    bufp->fullBit(oldp+635,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__ob_sync));
    bufp->fullQData(oldp+636,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                << 0x13U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),38);
    bufp->fullQData(oldp+638,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                << 0x13U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),38);
    bufp->fullCData(oldp+640,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__iaddr),5);
    bufp->fullQData(oldp+641,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[0]),38);
    bufp->fullQData(oldp+643,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[1]),38);
    bufp->fullQData(oldp+645,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[2]),38);
    bufp->fullQData(oldp+647,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[3]),38);
    bufp->fullQData(oldp+649,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[4]),38);
    bufp->fullQData(oldp+651,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[5]),38);
    bufp->fullQData(oldp+653,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[6]),38);
    bufp->fullQData(oldp+655,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[7]),38);
    bufp->fullQData(oldp+657,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[8]),38);
    bufp->fullQData(oldp+659,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[9]),38);
    bufp->fullQData(oldp+661,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[10]),38);
    bufp->fullQData(oldp+663,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[11]),38);
    bufp->fullQData(oldp+665,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[12]),38);
    bufp->fullQData(oldp+667,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[13]),38);
    bufp->fullQData(oldp+669,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[14]),38);
    bufp->fullQData(oldp+671,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__imem[15]),38);
    bufp->fullCData(oldp+673,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__oaddr),5);
    bufp->fullQData(oldp+674,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[0]),38);
    bufp->fullQData(oldp+676,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[1]),38);
    bufp->fullQData(oldp+678,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[2]),38);
    bufp->fullQData(oldp+680,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[3]),38);
    bufp->fullQData(oldp+682,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[4]),38);
    bufp->fullQData(oldp+684,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[5]),38);
    bufp->fullQData(oldp+686,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[6]),38);
    bufp->fullQData(oldp+688,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[7]),38);
    bufp->fullQData(oldp+690,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[8]),38);
    bufp->fullQData(oldp+692,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[9]),38);
    bufp->fullQData(oldp+694,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[10]),38);
    bufp->fullQData(oldp+696,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[11]),38);
    bufp->fullQData(oldp+698,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[12]),38);
    bufp->fullQData(oldp+700,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[13]),38);
    bufp->fullQData(oldp+702,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[14]),38);
    bufp->fullQData(oldp+704,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__omem[15]),38);
    bufp->fullCData(oldp+706,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__nxt_oaddr),4);
    bufp->fullQData(oldp+707,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__pre_ovalue),38);
    bufp->fullQData(oldp+709,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left),38);
    bufp->fullQData(oldp+711,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right),38);
    bufp->fullBit(oldp+713,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+714,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+715,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef),46);
    bufp->fullIData(oldp+717,((0x7ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                   >> 0x13U)))),19);
    bufp->fullIData(oldp+718,((0x7ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left))),19);
    bufp->fullIData(oldp+719,((0x7ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                   >> 0x13U)))),19);
    bufp->fullIData(oldp+720,((0x7ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right))),19);
    bufp->fullIData(oldp+721,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),23);
    bufp->fullIData(oldp+722,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),23);
    bufp->fullIData(oldp+723,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),20);
    bufp->fullIData(oldp+724,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),20);
    bufp->fullIData(oldp+725,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),20);
    bufp->fullIData(oldp+726,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),20);
    bufp->fullQData(oldp+727,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv),41);
    bufp->fullQData(oldp+729,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv),41);
    bufp->fullQData(oldp+731,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),43);
    bufp->fullQData(oldp+733,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),43);
    bufp->fullQData(oldp+735,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),45);
    bufp->fullQData(oldp+737,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one),45);
    bufp->fullQData(oldp+739,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two),45);
    bufp->fullBit(oldp+741,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x28U)))));
    bufp->fullQData(oldp+742,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x13U)))))))) 
                                << 0x29U) | (0x1ffffffffffULL 
                                             & VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U)))),43);
    bufp->fullQData(oldp+744,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x27U)))))))) 
                                << 0x29U) | ((QData)((IData)(
                                                             (0xfffffU 
                                                              & (IData)(
                                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                         >> 0x14U))))) 
                                             << 0x15U))),43);
    bufp->fullQData(oldp+746,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved),41);
    bufp->fullQData(oldp+748,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),45);
    bufp->fullQData(oldp+750,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),45);
    bufp->fullIData(oldp+752,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),19);
    bufp->fullIData(oldp+753,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),19);
    bufp->fullIData(oldp+754,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),19);
    bufp->fullIData(oldp+755,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),19);
    bufp->fullIData(oldp+756,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),23);
    bufp->fullIData(oldp+757,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),23);
    bufp->fullIData(oldp+758,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),20);
    bufp->fullIData(oldp+759,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),20);
    bufp->fullIData(oldp+760,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),24);
    bufp->fullIData(oldp+761,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),21);
    bufp->fullIData(oldp+762,((0x7ffffU & (IData)((0x7ffffULL 
                                                   & (VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                      >> 0x16U))))),19);
    bufp->fullIData(oldp+763,((0x7ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (0x7ffffULL 
                                                      & (VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                                         >> 0x16U)))))),19);
    bufp->fullBit(oldp+764,((1U & (IData)((0x7ffffULL 
                                           & (VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                              >> 0x16U))))));
    bufp->fullBit(oldp+765,((1U & (IData)((0xfffffULL 
                                           & (VL_SHIFTL_QQI(41,41,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x15U) 
                                              >> 0x15U))))));
    bufp->fullIData(oldp+766,((0x7ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                   >> 0x15U)))),19);
    bufp->fullIData(oldp+767,((0x7ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x15U))))),19);
    bufp->fullBit(oldp+768,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x15U)))));
    bufp->fullBit(oldp+769,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x14U)))));
    bufp->fullIData(oldp+770,((0x7ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x16U)))),19);
    bufp->fullIData(oldp+771,((0x7ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x16U))))),19);
    bufp->fullBit(oldp+772,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+773,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x15U)))));
    bufp->fullIData(oldp+774,((0x1fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),21);
    bufp->fullIData(oldp+775,((0x7ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x16U)))),19);
    bufp->fullIData(oldp+776,((0x7ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x16U))))),19);
    bufp->fullBit(oldp+777,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x16U)))));
    bufp->fullBit(oldp+778,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x15U)))));
    bufp->fullIData(oldp+779,((0x1fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),21);
    bufp->fullBit(oldp+780,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__wait_for_sync));
    bufp->fullCData(oldp+781,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__pipeline),3);
    bufp->fullIData(oldp+782,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__sum_r),21);
    bufp->fullIData(oldp+783,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__sum_i),21);
    bufp->fullIData(oldp+784,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__diff_r),21);
    bufp->fullIData(oldp+785,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__diff_i),21);
    bufp->fullQData(oldp+786,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__ob_a),42);
    bufp->fullQData(oldp+788,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__ob_b_r)) 
                                << 0x15U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__ob_b_i)))),42);
    bufp->fullIData(oldp+790,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__ob_b_r),21);
    bufp->fullIData(oldp+791,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__ob_b_i),21);
    bufp->fullSData(oldp+792,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__iaddr),9);
    bufp->fullQData(oldp+793,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__imem[0]),40);
    bufp->fullQData(oldp+795,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__imem[1]),40);
    bufp->fullIData(oldp+797,((0xfffffU & (IData)((
                                                   vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__imem
                                                   [1U] 
                                                   >> 0x14U)))),20);
    bufp->fullIData(oldp+798,((0xfffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__imem
                                                  [1U]))),20);
    bufp->fullIData(oldp+799,((0xfffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d8 
                                                   >> 0x14U)))),20);
    bufp->fullIData(oldp+800,((0xfffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__w_d8))),20);
    bufp->fullQData(oldp+801,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__omem[0]),42);
    bufp->fullQData(oldp+803,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__omem[1]),42);
    bufp->fullIData(oldp+805,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__rnd_sum_r),21);
    bufp->fullIData(oldp+806,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__rnd_sum_i),21);
    bufp->fullIData(oldp+807,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__rnd_diff_r),21);
    bufp->fullIData(oldp+808,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__rnd_diff_i),21);
    bufp->fullIData(oldp+809,((0x1fffffU & (- vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__rnd_diff_r))),21);
    bufp->fullIData(oldp+810,((0x1fffffU & (- vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_4__DOT__rnd_diff_i))),21);
    bufp->fullBit(oldp+811,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__wait_for_sync));
    bufp->fullIData(oldp+812,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__ib_a),32);
    bufp->fullIData(oldp+813,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__ib_b),32);
    bufp->fullQData(oldp+814,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__ib_c),40);
    bufp->fullBit(oldp+816,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__ib_sync));
    bufp->fullBit(oldp+817,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__b_started));
    bufp->fullBit(oldp+818,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__ob_sync));
    bufp->fullQData(oldp+819,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                << 0x11U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),34);
    bufp->fullQData(oldp+821,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                << 0x11U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),34);
    bufp->fullSData(oldp+823,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__iaddr),9);
    bufp->fullSData(oldp+824,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__oaddr),9);
    bufp->fullCData(oldp+825,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__nxt_oaddr),8);
    bufp->fullQData(oldp+826,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__pre_ovalue),34);
    bufp->fullIData(oldp+828,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left),32);
    bufp->fullIData(oldp+829,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right),32);
    bufp->fullBit(oldp+830,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+831,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+832,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef),40);
    bufp->fullSData(oldp+834,((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+835,((0xffffU & vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left)),16);
    bufp->fullSData(oldp+836,((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                               >> 0x10U)),16);
    bufp->fullSData(oldp+837,((0xffffU & vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right)),16);
    bufp->fullIData(oldp+838,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),20);
    bufp->fullIData(oldp+839,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),20);
    bufp->fullIData(oldp+840,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),17);
    bufp->fullIData(oldp+841,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),17);
    bufp->fullIData(oldp+842,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),17);
    bufp->fullIData(oldp+843,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),17);
    bufp->fullQData(oldp+844,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv),35);
    bufp->fullQData(oldp+846,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv),35);
    bufp->fullQData(oldp+848,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),37);
    bufp->fullQData(oldp+850,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),37);
    bufp->fullQData(oldp+852,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),39);
    bufp->fullQData(oldp+854,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one),39);
    bufp->fullQData(oldp+856,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two),39);
    bufp->fullBit(oldp+858,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x22U)))));
    bufp->fullQData(oldp+859,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x10U)))))))) 
                                << 0x23U) | (0x7ffffffffULL 
                                             & VL_SHIFTL_QQI(35,35,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U)))),37);
    bufp->fullQData(oldp+861,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x21U)))))))) 
                                << 0x23U) | ((QData)((IData)(
                                                             (0x1ffffU 
                                                              & (IData)(
                                                                        (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                         >> 0x11U))))) 
                                             << 0x12U))),37);
    bufp->fullQData(oldp+863,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved),35);
    bufp->fullQData(oldp+865,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),39);
    bufp->fullQData(oldp+867,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),39);
    bufp->fullIData(oldp+869,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),17);
    bufp->fullIData(oldp+870,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),17);
    bufp->fullIData(oldp+871,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),17);
    bufp->fullIData(oldp+872,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),17);
    bufp->fullIData(oldp+873,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),20);
    bufp->fullIData(oldp+874,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),20);
    bufp->fullIData(oldp+875,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),17);
    bufp->fullIData(oldp+876,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),17);
    bufp->fullIData(oldp+877,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),21);
    bufp->fullIData(oldp+878,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),18);
    bufp->fullIData(oldp+879,((0x1ffffU & (IData)((0x1ffffULL 
                                                   & (VL_SHIFTL_QQI(35,35,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                      >> 0x12U))))),17);
    bufp->fullIData(oldp+880,((0x1ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (0x1ffffULL 
                                                      & (VL_SHIFTL_QQI(35,35,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                                         >> 0x12U)))))),17);
    bufp->fullBit(oldp+881,((1U & (IData)((0x1ffffULL 
                                           & (VL_SHIFTL_QQI(35,35,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                              >> 0x12U))))));
    bufp->fullBit(oldp+882,((1U & (IData)((0x3ffffULL 
                                           & (VL_SHIFTL_QQI(35,35,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x12U) 
                                              >> 0x11U))))));
    bufp->fullIData(oldp+883,((0x1ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                   >> 0x11U)))),17);
    bufp->fullIData(oldp+884,((0x1ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x11U))))),17);
    bufp->fullBit(oldp+885,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                           >> 0x11U)))));
    bufp->fullIData(oldp+886,((0x1ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                   >> 0x12U)))),17);
    bufp->fullIData(oldp+887,((0x1ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x12U))))),17);
    bufp->fullBit(oldp+888,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+889,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                           >> 0x11U)))));
    bufp->fullIData(oldp+890,((0x1ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),17);
    bufp->fullIData(oldp+891,((0x1ffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                   >> 0x12U)))),17);
    bufp->fullIData(oldp+892,((0x1ffffU & ((IData)(1U) 
                                           + (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x12U))))),17);
    bufp->fullBit(oldp+893,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x12U)))));
    bufp->fullBit(oldp+894,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                           >> 0x11U)))));
    bufp->fullIData(oldp+895,((0x1ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),17);
    bufp->fullBit(oldp+896,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__wait_for_sync));
    bufp->fullQData(oldp+897,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__ib_a),36);
    bufp->fullQData(oldp+899,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__ib_b),36);
    bufp->fullQData(oldp+901,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__ib_c),44);
    bufp->fullBit(oldp+903,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__ib_sync));
    bufp->fullBit(oldp+904,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__b_started));
    bufp->fullBit(oldp+905,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__ob_sync));
    bufp->fullQData(oldp+906,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                << 0x13U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),38);
    bufp->fullQData(oldp+908,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                << 0x13U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),38);
    bufp->fullCData(oldp+910,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__iaddr),6);
    bufp->fullQData(oldp+911,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[0]),36);
    bufp->fullQData(oldp+913,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[1]),36);
    bufp->fullQData(oldp+915,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[2]),36);
    bufp->fullQData(oldp+917,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[3]),36);
    bufp->fullQData(oldp+919,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[4]),36);
    bufp->fullQData(oldp+921,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[5]),36);
    bufp->fullQData(oldp+923,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[6]),36);
    bufp->fullQData(oldp+925,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[7]),36);
    bufp->fullQData(oldp+927,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[8]),36);
    bufp->fullQData(oldp+929,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[9]),36);
    bufp->fullQData(oldp+931,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[10]),36);
    bufp->fullQData(oldp+933,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[11]),36);
    bufp->fullQData(oldp+935,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[12]),36);
    bufp->fullQData(oldp+937,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[13]),36);
    bufp->fullQData(oldp+939,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[14]),36);
    bufp->fullQData(oldp+941,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[15]),36);
    bufp->fullQData(oldp+943,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[16]),36);
    bufp->fullQData(oldp+945,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[17]),36);
    bufp->fullQData(oldp+947,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[18]),36);
    bufp->fullQData(oldp+949,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[19]),36);
    bufp->fullQData(oldp+951,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[20]),36);
    bufp->fullQData(oldp+953,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[21]),36);
    bufp->fullQData(oldp+955,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[22]),36);
    bufp->fullQData(oldp+957,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[23]),36);
    bufp->fullQData(oldp+959,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[24]),36);
    bufp->fullQData(oldp+961,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[25]),36);
    bufp->fullQData(oldp+963,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[26]),36);
    bufp->fullQData(oldp+965,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[27]),36);
    bufp->fullQData(oldp+967,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[28]),36);
    bufp->fullQData(oldp+969,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[29]),36);
    bufp->fullQData(oldp+971,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[30]),36);
    bufp->fullQData(oldp+973,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__imem[31]),36);
    bufp->fullCData(oldp+975,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__oaddr),6);
    bufp->fullQData(oldp+976,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[0]),38);
    bufp->fullQData(oldp+978,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[1]),38);
    bufp->fullQData(oldp+980,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[2]),38);
    bufp->fullQData(oldp+982,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[3]),38);
    bufp->fullQData(oldp+984,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[4]),38);
    bufp->fullQData(oldp+986,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[5]),38);
    bufp->fullQData(oldp+988,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[6]),38);
    bufp->fullQData(oldp+990,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[7]),38);
    bufp->fullQData(oldp+992,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[8]),38);
    bufp->fullQData(oldp+994,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[9]),38);
    bufp->fullQData(oldp+996,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[10]),38);
    bufp->fullQData(oldp+998,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[11]),38);
    bufp->fullQData(oldp+1000,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[12]),38);
    bufp->fullQData(oldp+1002,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[13]),38);
    bufp->fullQData(oldp+1004,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[14]),38);
    bufp->fullQData(oldp+1006,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[15]),38);
    bufp->fullQData(oldp+1008,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[16]),38);
    bufp->fullQData(oldp+1010,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[17]),38);
    bufp->fullQData(oldp+1012,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[18]),38);
    bufp->fullQData(oldp+1014,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[19]),38);
    bufp->fullQData(oldp+1016,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[20]),38);
    bufp->fullQData(oldp+1018,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[21]),38);
    bufp->fullQData(oldp+1020,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[22]),38);
    bufp->fullQData(oldp+1022,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[23]),38);
    bufp->fullQData(oldp+1024,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[24]),38);
    bufp->fullQData(oldp+1026,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[25]),38);
    bufp->fullQData(oldp+1028,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[26]),38);
    bufp->fullQData(oldp+1030,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[27]),38);
    bufp->fullQData(oldp+1032,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[28]),38);
    bufp->fullQData(oldp+1034,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[29]),38);
    bufp->fullQData(oldp+1036,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[30]),38);
    bufp->fullQData(oldp+1038,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__omem[31]),38);
    bufp->fullCData(oldp+1040,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__nxt_oaddr),5);
    bufp->fullQData(oldp+1041,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__pre_ovalue),38);
    bufp->fullQData(oldp+1043,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left),36);
    bufp->fullQData(oldp+1045,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right),36);
    bufp->fullBit(oldp+1047,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+1048,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+1049,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef),44);
    bufp->fullIData(oldp+1051,((0x3ffffU & (IData)(
                                                   (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                    >> 0x12U)))),18);
    bufp->fullIData(oldp+1052,((0x3ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left))),18);
    bufp->fullIData(oldp+1053,((0x3ffffU & (IData)(
                                                   (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                    >> 0x12U)))),18);
    bufp->fullIData(oldp+1054,((0x3ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right))),18);
    bufp->fullIData(oldp+1055,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),22);
    bufp->fullIData(oldp+1056,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),22);
    bufp->fullIData(oldp+1057,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),19);
    bufp->fullIData(oldp+1058,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),19);
    bufp->fullIData(oldp+1059,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),19);
    bufp->fullIData(oldp+1060,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),19);
    bufp->fullQData(oldp+1061,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv),39);
    bufp->fullQData(oldp+1063,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv),39);
    bufp->fullQData(oldp+1065,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),41);
    bufp->fullQData(oldp+1067,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),41);
    bufp->fullQData(oldp+1069,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),43);
    bufp->fullQData(oldp+1071,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one),43);
    bufp->fullQData(oldp+1073,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two),43);
    bufp->fullBit(oldp+1075,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x26U)))));
    bufp->fullQData(oldp+1076,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x12U)))))))) 
                                 << 0x27U) | (0x7fffffffffULL 
                                              & VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U)))),41);
    bufp->fullQData(oldp+1078,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x25U)))))))) 
                                 << 0x27U) | ((QData)((IData)(
                                                              (0x7ffffU 
                                                               & (IData)(
                                                                         (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x13U))))) 
                                              << 0x14U))),41);
    bufp->fullQData(oldp+1080,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved),39);
    bufp->fullQData(oldp+1082,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),43);
    bufp->fullQData(oldp+1084,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),43);
    bufp->fullIData(oldp+1086,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),19);
    bufp->fullIData(oldp+1087,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),19);
    bufp->fullIData(oldp+1088,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),19);
    bufp->fullIData(oldp+1089,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),19);
    bufp->fullIData(oldp+1090,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),22);
    bufp->fullIData(oldp+1091,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),22);
    bufp->fullIData(oldp+1092,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),19);
    bufp->fullIData(oldp+1093,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),19);
    bufp->fullIData(oldp+1094,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),23);
    bufp->fullIData(oldp+1095,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),20);
    bufp->fullIData(oldp+1096,((0x7ffffU & (IData)(
                                                   (0x7ffffULL 
                                                    & (VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                       >> 0x14U))))),19);
    bufp->fullIData(oldp+1097,((0x7ffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (0x7ffffULL 
                                                       & (VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                                          >> 0x14U)))))),19);
    bufp->fullBit(oldp+1098,((1U & (IData)((0x7ffffULL 
                                            & (VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                               >> 0x14U))))));
    bufp->fullBit(oldp+1099,((1U & (IData)((0xfffffULL 
                                            & (VL_SHIFTL_QQI(39,39,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x14U) 
                                               >> 0x13U))))));
    bufp->fullIData(oldp+1100,((0x7ffffU & (IData)(
                                                   (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                    >> 0x13U)))),19);
    bufp->fullIData(oldp+1101,((0x7ffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                       >> 0x13U))))),19);
    bufp->fullBit(oldp+1102,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x13U)))));
    bufp->fullIData(oldp+1103,((0x7ffffU & (IData)(
                                                   (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                    >> 0x14U)))),19);
    bufp->fullIData(oldp+1104,((0x7ffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                       >> 0x14U))))),19);
    bufp->fullBit(oldp+1105,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+1106,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x13U)))));
    bufp->fullIData(oldp+1107,((0x7ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),19);
    bufp->fullIData(oldp+1108,((0x7ffffU & (IData)(
                                                   (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                    >> 0x14U)))),19);
    bufp->fullIData(oldp+1109,((0x7ffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                       >> 0x14U))))),19);
    bufp->fullBit(oldp+1110,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x14U)))));
    bufp->fullBit(oldp+1111,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x13U)))));
    bufp->fullIData(oldp+1112,((0x7ffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),19);
    bufp->fullBit(oldp+1113,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__wait_for_sync));
    bufp->fullQData(oldp+1114,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__ib_a),40);
    bufp->fullQData(oldp+1116,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__ib_b),40);
    bufp->fullQData(oldp+1118,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__ib_c),48);
    bufp->fullBit(oldp+1120,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__ib_sync));
    bufp->fullBit(oldp+1121,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__b_started));
    bufp->fullBit(oldp+1122,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__ob_sync));
    bufp->fullQData(oldp+1123,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                 << 0x14U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),40);
    bufp->fullQData(oldp+1125,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                 << 0x14U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),40);
    bufp->fullCData(oldp+1127,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__iaddr),3);
    bufp->fullQData(oldp+1128,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__imem[0]),40);
    bufp->fullQData(oldp+1130,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__imem[1]),40);
    bufp->fullQData(oldp+1132,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__imem[2]),40);
    bufp->fullQData(oldp+1134,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__imem[3]),40);
    bufp->fullCData(oldp+1136,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__oaddr),3);
    bufp->fullQData(oldp+1137,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__omem[0]),40);
    bufp->fullQData(oldp+1139,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__omem[1]),40);
    bufp->fullQData(oldp+1141,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__omem[2]),40);
    bufp->fullQData(oldp+1143,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__omem[3]),40);
    bufp->fullCData(oldp+1145,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__nxt_oaddr),2);
    bufp->fullQData(oldp+1146,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__pre_ovalue),40);
    bufp->fullQData(oldp+1148,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left),40);
    bufp->fullQData(oldp+1150,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right),40);
    bufp->fullBit(oldp+1152,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+1153,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+1154,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef),48);
    bufp->fullIData(oldp+1156,((0xfffffU & (IData)(
                                                   (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                    >> 0x14U)))),20);
    bufp->fullIData(oldp+1157,((0xfffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left))),20);
    bufp->fullIData(oldp+1158,((0xfffffU & (IData)(
                                                   (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                    >> 0x14U)))),20);
    bufp->fullIData(oldp+1159,((0xfffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right))),20);
    bufp->fullIData(oldp+1160,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),24);
    bufp->fullIData(oldp+1161,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),24);
    bufp->fullIData(oldp+1162,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),21);
    bufp->fullIData(oldp+1163,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),21);
    bufp->fullIData(oldp+1164,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),21);
    bufp->fullIData(oldp+1165,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),21);
    bufp->fullQData(oldp+1166,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv),43);
    bufp->fullQData(oldp+1168,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv),43);
    bufp->fullQData(oldp+1170,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),45);
    bufp->fullQData(oldp+1172,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),45);
    bufp->fullQData(oldp+1174,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),47);
    bufp->fullQData(oldp+1176,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one),47);
    bufp->fullQData(oldp+1178,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two),47);
    bufp->fullBit(oldp+1180,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x2aU)))));
    bufp->fullQData(oldp+1181,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x14U)))))))) 
                                 << 0x2bU) | (0x7ffffffffffULL 
                                              & VL_SHIFTL_QQI(43,43,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U)))),45);
    bufp->fullQData(oldp+1183,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x29U)))))))) 
                                 << 0x2bU) | ((QData)((IData)(
                                                              (0x1fffffU 
                                                               & (IData)(
                                                                         (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x15U))))) 
                                              << 0x16U))),45);
    bufp->fullQData(oldp+1185,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved),43);
    bufp->fullQData(oldp+1187,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),47);
    bufp->fullQData(oldp+1189,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),47);
    bufp->fullIData(oldp+1191,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),20);
    bufp->fullIData(oldp+1192,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),20);
    bufp->fullIData(oldp+1193,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),20);
    bufp->fullIData(oldp+1194,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),20);
    bufp->fullIData(oldp+1195,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),24);
    bufp->fullIData(oldp+1196,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),24);
    bufp->fullIData(oldp+1197,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),21);
    bufp->fullIData(oldp+1198,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),21);
    bufp->fullIData(oldp+1199,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),25);
    bufp->fullIData(oldp+1200,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),22);
    bufp->fullIData(oldp+1201,((0xfffffU & (IData)(
                                                   (0xfffffULL 
                                                    & (VL_SHIFTL_QQI(43,43,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                       >> 0x17U))))),20);
    bufp->fullIData(oldp+1202,((0xfffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (0xfffffULL 
                                                       & (VL_SHIFTL_QQI(43,43,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                                          >> 0x17U)))))),20);
    bufp->fullBit(oldp+1203,((1U & (IData)((0xfffffULL 
                                            & (VL_SHIFTL_QQI(43,43,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+1204,((1U & (IData)((0x1fffffULL 
                                            & (VL_SHIFTL_QQI(43,43,32, vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x16U) 
                                               >> 0x16U))))));
    bufp->fullIData(oldp+1205,((0xfffffU & (IData)(
                                                   (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                    >> 0x16U)))),20);
    bufp->fullIData(oldp+1206,((0xfffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                       >> 0x16U))))),20);
    bufp->fullBit(oldp+1207,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x16U)))));
    bufp->fullBit(oldp+1208,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x15U)))));
    bufp->fullIData(oldp+1209,((0xfffffU & (IData)(
                                                   (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                    >> 0x17U)))),20);
    bufp->fullIData(oldp+1210,((0xfffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                       >> 0x17U))))),20);
    bufp->fullBit(oldp+1211,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+1212,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x16U)))));
    bufp->fullIData(oldp+1213,((0x3fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),22);
    bufp->fullIData(oldp+1214,((0xfffffU & (IData)(
                                                   (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                    >> 0x17U)))),20);
    bufp->fullIData(oldp+1215,((0xfffffU & ((IData)(1U) 
                                            + (IData)(
                                                      (vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                       >> 0x17U))))),20);
    bufp->fullBit(oldp+1216,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+1217,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x16U)))));
    bufp->fullIData(oldp+1218,((0x3fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),22);
    bufp->fullBit(oldp+1219,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__br_sync));
    bufp->fullQData(oldp+1220,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__br_result),52);
    bufp->fullBit(oldp+1222,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s512));
    bufp->fullQData(oldp+1223,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d512),44);
    bufp->fullBit(oldp+1225,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s256));
    bufp->fullQData(oldp+1226,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d256),46);
    bufp->fullBit(oldp+1228,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s128));
    bufp->fullQData(oldp+1229,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d128),46);
    bufp->fullBit(oldp+1231,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s64));
    bufp->fullQData(oldp+1232,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d64),48);
    bufp->fullBit(oldp+1234,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s32));
    bufp->fullQData(oldp+1235,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d32),48);
    bufp->fullBit(oldp+1237,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s16));
    bufp->fullQData(oldp+1238,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d16),50);
    bufp->fullBit(oldp+1240,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s8));
    bufp->fullQData(oldp+1241,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d8),50);
    bufp->fullBit(oldp+1243,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s4));
    bufp->fullQData(oldp+1244,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d4),52);
    bufp->fullBit(oldp+1246,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s2));
    bufp->fullQData(oldp+1247,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__o_r)) 
                                 << 0x1aU) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__o_i)))),52);
    bufp->fullBit(oldp+1249,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__r_br_started) 
                              | (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_s2))));
    bufp->fullBit(oldp+1250,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__r_br_started));
    bufp->fullBit(oldp+1251,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT____Vcellinp__revstage__i_ce));
    bufp->fullSData(oldp+1252,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr),10);
    bufp->fullSData(oldp+1253,(((0x200U & ((~ ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                               >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                              << 8U)) 
                                   | ((0x80U & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                << 6U)) 
                                      | ((0x40U & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                   << 4U)) 
                                         | ((0x20U 
                                             & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                << 2U)) 
                                            | ((0x10U 
                                                & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr)) 
                                               | ((8U 
                                                   & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                      >> 2U)) 
                                                  | ((4U 
                                                      & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                         >> 4U)) 
                                                     | ((2U 
                                                         & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                            >> 6U)) 
                                                        | (1U 
                                                           & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__wraddr) 
                                                              >> 8U)))))))))))),10);
    bufp->fullBit(oldp+1254,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__revstage__DOT__in_reset));
    bufp->fullBit(oldp+1255,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__wait_for_sync));
    bufp->fullQData(oldp+1256,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__ib_a),46);
    bufp->fullQData(oldp+1258,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__ib_b),46);
    bufp->fullQData(oldp+1260,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__ib_c),54);
    bufp->fullBit(oldp+1262,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__ib_sync));
    bufp->fullBit(oldp+1263,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__b_started));
    bufp->fullBit(oldp+1264,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__ob_sync));
    bufp->fullQData(oldp+1265,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                 << 0x17U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),46);
    bufp->fullQData(oldp+1267,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                 << 0x17U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),46);
    bufp->fullCData(oldp+1269,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__iaddr),7);
    bufp->fullCData(oldp+1270,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__oaddr),7);
    bufp->fullCData(oldp+1271,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__nxt_oaddr),6);
    bufp->fullQData(oldp+1272,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__pre_ovalue),46);
    bufp->fullBit(oldp+1274,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__ib_sync) 
                              & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_ce))));
    bufp->fullQData(oldp+1275,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left),46);
    bufp->fullQData(oldp+1277,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right),46);
    bufp->fullBit(oldp+1279,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+1280,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+1281,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_coef),54);
    bufp->fullIData(oldp+1283,((0x7fffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                     >> 0x17U)))),23);
    bufp->fullIData(oldp+1284,((0x7fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_left))),23);
    bufp->fullIData(oldp+1285,((0x7fffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                     >> 0x17U)))),23);
    bufp->fullIData(oldp+1286,((0x7fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_right))),23);
    bufp->fullIData(oldp+1287,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),27);
    bufp->fullIData(oldp+1288,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),27);
    bufp->fullIData(oldp+1289,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),24);
    bufp->fullIData(oldp+1290,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),24);
    bufp->fullIData(oldp+1291,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),24);
    bufp->fullIData(oldp+1292,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),24);
    bufp->fullQData(oldp+1293,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftv),49);
    bufp->fullQData(oldp+1295,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__leftvv),49);
    bufp->fullQData(oldp+1297,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),51);
    bufp->fullQData(oldp+1299,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),51);
    bufp->fullQData(oldp+1301,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),53);
    bufp->fullQData(oldp+1303,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_one),53);
    bufp->fullQData(oldp+1305,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__w_two),53);
    bufp->fullBit(oldp+1307,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x30U)))));
    bufp->fullQData(oldp+1308,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x17U)))))))) 
                                 << 0x31U) | (0x1ffffffffffffULL 
                                              & VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U)))),51);
    bufp->fullQData(oldp+1310,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x2fU)))))))) 
                                 << 0x31U) | ((QData)((IData)(
                                                              (0xffffffU 
                                                               & (IData)(
                                                                         (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x18U))))) 
                                              << 0x19U))),51);
    bufp->fullQData(oldp+1312,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved),49);
    bufp->fullQData(oldp+1314,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),53);
    bufp->fullQData(oldp+1316,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),53);
    bufp->fullIData(oldp+1318,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),23);
    bufp->fullIData(oldp+1319,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),23);
    bufp->fullIData(oldp+1320,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),23);
    bufp->fullIData(oldp+1321,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),23);
    bufp->fullIData(oldp+1322,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),27);
    bufp->fullIData(oldp+1323,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),27);
    bufp->fullIData(oldp+1324,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),24);
    bufp->fullIData(oldp+1325,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),24);
    bufp->fullIData(oldp+1326,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),28);
    bufp->fullIData(oldp+1327,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),25);
    bufp->fullIData(oldp+1328,((0x7fffffU & (IData)(
                                                    (0x7fffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                        >> 0x1aU))))),23);
    bufp->fullIData(oldp+1329,((0x7fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (0x7fffffULL 
                                                        & (VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                           >> 0x1aU)))))),23);
    bufp->fullBit(oldp+1330,((1U & (IData)((0x7fffffULL 
                                            & (VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+1331,((1U & (IData)((0xffffffULL 
                                            & (VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                               >> 0x19U))))));
    bufp->fullIData(oldp+1332,((0x7fffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                     >> 0x19U)))),23);
    bufp->fullIData(oldp+1333,((0x7fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x19U))))),23);
    bufp->fullBit(oldp+1334,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+1335,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x18U)))));
    bufp->fullIData(oldp+1336,((0x7fffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                     >> 0x1aU)))),23);
    bufp->fullIData(oldp+1337,((0x7fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x1aU))))),23);
    bufp->fullBit(oldp+1338,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+1339,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x19U)))));
    bufp->fullIData(oldp+1340,((0x1ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),25);
    bufp->fullIData(oldp+1341,((0x7fffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                     >> 0x1aU)))),23);
    bufp->fullIData(oldp+1342,((0x7fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x1aU))))),23);
    bufp->fullBit(oldp+1343,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+1344,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x19U)))));
    bufp->fullIData(oldp+1345,((0x1ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_128__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),25);
    bufp->fullBit(oldp+1346,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__wait_for_sync));
    bufp->fullQData(oldp+1347,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__ib_a),48);
    bufp->fullQData(oldp+1349,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__ib_b),48);
    bufp->fullQData(oldp+1351,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__ib_c),56);
    bufp->fullBit(oldp+1353,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__ib_sync));
    bufp->fullBit(oldp+1354,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__b_started));
    bufp->fullBit(oldp+1355,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__ob_sync));
    bufp->fullQData(oldp+1356,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                 << 0x19U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),50);
    bufp->fullQData(oldp+1358,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                 << 0x19U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),50);
    bufp->fullCData(oldp+1360,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__iaddr),4);
    bufp->fullQData(oldp+1361,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__imem[0]),48);
    bufp->fullQData(oldp+1363,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__imem[1]),48);
    bufp->fullQData(oldp+1365,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__imem[2]),48);
    bufp->fullQData(oldp+1367,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__imem[3]),48);
    bufp->fullQData(oldp+1369,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__imem[4]),48);
    bufp->fullQData(oldp+1371,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__imem[5]),48);
    bufp->fullQData(oldp+1373,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__imem[6]),48);
    bufp->fullQData(oldp+1375,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__imem[7]),48);
    bufp->fullCData(oldp+1377,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__oaddr),4);
    bufp->fullQData(oldp+1378,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__omem[0]),50);
    bufp->fullQData(oldp+1380,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__omem[1]),50);
    bufp->fullQData(oldp+1382,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__omem[2]),50);
    bufp->fullQData(oldp+1384,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__omem[3]),50);
    bufp->fullQData(oldp+1386,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__omem[4]),50);
    bufp->fullQData(oldp+1388,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__omem[5]),50);
    bufp->fullQData(oldp+1390,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__omem[6]),50);
    bufp->fullQData(oldp+1392,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__omem[7]),50);
    bufp->fullCData(oldp+1394,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__nxt_oaddr),3);
    bufp->fullQData(oldp+1395,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__pre_ovalue),50);
    bufp->fullBit(oldp+1397,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__ib_sync) 
                              & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_ce))));
    bufp->fullQData(oldp+1398,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left),48);
    bufp->fullQData(oldp+1400,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right),48);
    bufp->fullBit(oldp+1402,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+1403,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+1404,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_coef),56);
    bufp->fullIData(oldp+1406,((0xffffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                     >> 0x18U)))),24);
    bufp->fullIData(oldp+1407,((0xffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_left))),24);
    bufp->fullIData(oldp+1408,((0xffffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                     >> 0x18U)))),24);
    bufp->fullIData(oldp+1409,((0xffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_right))),24);
    bufp->fullIData(oldp+1410,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),28);
    bufp->fullIData(oldp+1411,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),28);
    bufp->fullIData(oldp+1412,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),25);
    bufp->fullIData(oldp+1413,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),25);
    bufp->fullIData(oldp+1414,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),25);
    bufp->fullIData(oldp+1415,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),25);
    bufp->fullQData(oldp+1416,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftv),51);
    bufp->fullQData(oldp+1418,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__leftvv),51);
    bufp->fullQData(oldp+1420,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),53);
    bufp->fullQData(oldp+1422,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),53);
    bufp->fullQData(oldp+1424,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),55);
    bufp->fullQData(oldp+1426,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_one),55);
    bufp->fullQData(oldp+1428,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__w_two),55);
    bufp->fullBit(oldp+1430,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x32U)))));
    bufp->fullQData(oldp+1431,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x18U)))))))) 
                                 << 0x33U) | (0x7ffffffffffffULL 
                                              & VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU)))),53);
    bufp->fullQData(oldp+1433,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x31U)))))))) 
                                 << 0x33U) | ((QData)((IData)(
                                                              (0x1ffffffU 
                                                               & (IData)(
                                                                         (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x19U))))) 
                                              << 0x1aU))),53);
    bufp->fullQData(oldp+1435,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved),51);
    bufp->fullQData(oldp+1437,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),55);
    bufp->fullQData(oldp+1439,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),55);
    bufp->fullIData(oldp+1441,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),25);
    bufp->fullIData(oldp+1442,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),25);
    bufp->fullIData(oldp+1443,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),25);
    bufp->fullIData(oldp+1444,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),25);
    bufp->fullIData(oldp+1445,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),28);
    bufp->fullIData(oldp+1446,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),28);
    bufp->fullIData(oldp+1447,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),25);
    bufp->fullIData(oldp+1448,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),25);
    bufp->fullIData(oldp+1449,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),29);
    bufp->fullIData(oldp+1450,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),26);
    bufp->fullIData(oldp+1451,((0x1ffffffU & (IData)(
                                                     (0x1ffffffULL 
                                                      & (VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                         >> 0x1aU))))),25);
    bufp->fullIData(oldp+1452,((0x1ffffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0x1ffffffULL 
                                                         & (VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                            >> 0x1aU)))))),25);
    bufp->fullBit(oldp+1453,((1U & (IData)((0x1ffffffULL 
                                            & (VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                               >> 0x1aU))))));
    bufp->fullBit(oldp+1454,((1U & (IData)((0x3ffffffULL 
                                            & (VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                               >> 0x19U))))));
    bufp->fullIData(oldp+1455,((0x1ffffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x19U)))),25);
    bufp->fullIData(oldp+1456,((0x1ffffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x19U))))),25);
    bufp->fullBit(oldp+1457,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x19U)))));
    bufp->fullIData(oldp+1458,((0x1ffffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x1aU)))),25);
    bufp->fullIData(oldp+1459,((0x1ffffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x1aU))))),25);
    bufp->fullBit(oldp+1460,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+1461,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x19U)))));
    bufp->fullIData(oldp+1462,((0x1ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),25);
    bufp->fullIData(oldp+1463,((0x1ffffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x1aU)))),25);
    bufp->fullIData(oldp+1464,((0x1ffffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x1aU))))),25);
    bufp->fullBit(oldp+1465,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+1466,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x19U)))));
    bufp->fullIData(oldp+1467,((0x1ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_16__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),25);
    bufp->fullIData(oldp+1468,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__m_r),26);
    bufp->fullIData(oldp+1469,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__m_i),26);
    bufp->fullIData(oldp+1470,((0x3ffffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d4 
                                                      >> 0x1aU)))),26);
    bufp->fullIData(oldp+1471,((0x3ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d4))),26);
    bufp->fullIData(oldp+1472,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_r),27);
    bufp->fullIData(oldp+1473,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_i),27);
    bufp->fullIData(oldp+1474,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__sto_r),27);
    bufp->fullIData(oldp+1475,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__sto_i),27);
    bufp->fullBit(oldp+1476,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__wait_for_sync));
    bufp->fullBit(oldp+1477,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__stage));
    bufp->fullCData(oldp+1478,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__sync_pipe),2);
    bufp->fullIData(oldp+1479,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__o_r),26);
    bufp->fullIData(oldp+1480,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__o_i),26);
    bufp->fullIData(oldp+1481,((0x3ffffffU & (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_i 
                                              >> 1U))),26);
    bufp->fullIData(oldp+1482,((0x3ffffffU & ((IData)(1U) 
                                              + (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_i 
                                                 >> 1U)))),26);
    bufp->fullBit(oldp+1483,((1U & (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_i 
                                    >> 1U))));
    bufp->fullBit(oldp+1484,((1U & vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_i)));
    bufp->fullIData(oldp+1485,((0x3ffffffU & (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_r 
                                              >> 1U))),26);
    bufp->fullIData(oldp+1486,((0x3ffffffU & ((IData)(1U) 
                                              + (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_r 
                                                 >> 1U)))),26);
    bufp->fullBit(oldp+1487,((1U & (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_r 
                                    >> 1U))));
    bufp->fullBit(oldp+1488,((1U & vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_2__DOT__rnd_r)));
    bufp->fullBit(oldp+1489,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__wait_for_sync));
    bufp->fullQData(oldp+1490,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__ib_a),44);
    bufp->fullQData(oldp+1492,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__ib_b),44);
    bufp->fullQData(oldp+1494,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__ib_c),52);
    bufp->fullBit(oldp+1496,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__ib_sync));
    bufp->fullBit(oldp+1497,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__b_started));
    bufp->fullBit(oldp+1498,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__ob_sync));
    bufp->fullQData(oldp+1499,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                 << 0x17U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),46);
    bufp->fullQData(oldp+1501,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                 << 0x17U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),46);
    bufp->fullCData(oldp+1503,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__iaddr),8);
    bufp->fullCData(oldp+1504,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__oaddr),8);
    bufp->fullCData(oldp+1505,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__nxt_oaddr),7);
    bufp->fullQData(oldp+1506,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__pre_ovalue),46);
    bufp->fullBit(oldp+1508,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__ib_sync) 
                              & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_ce))));
    bufp->fullQData(oldp+1509,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left),44);
    bufp->fullQData(oldp+1511,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right),44);
    bufp->fullBit(oldp+1513,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+1514,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+1515,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_coef),52);
    bufp->fullIData(oldp+1517,((0x3fffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                     >> 0x16U)))),22);
    bufp->fullIData(oldp+1518,((0x3fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_left))),22);
    bufp->fullIData(oldp+1519,((0x3fffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                     >> 0x16U)))),22);
    bufp->fullIData(oldp+1520,((0x3fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_right))),22);
    bufp->fullIData(oldp+1521,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),26);
    bufp->fullIData(oldp+1522,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),26);
    bufp->fullIData(oldp+1523,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),23);
    bufp->fullIData(oldp+1524,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),23);
    bufp->fullIData(oldp+1525,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),23);
    bufp->fullIData(oldp+1526,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),23);
    bufp->fullQData(oldp+1527,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftv),47);
    bufp->fullQData(oldp+1529,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__leftvv),47);
    bufp->fullQData(oldp+1531,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),49);
    bufp->fullQData(oldp+1533,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),49);
    bufp->fullQData(oldp+1535,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),51);
    bufp->fullQData(oldp+1537,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_one),51);
    bufp->fullQData(oldp+1539,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__w_two),51);
    bufp->fullBit(oldp+1541,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x2eU)))));
    bufp->fullQData(oldp+1542,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x16U)))))))) 
                                 << 0x2fU) | (0x7fffffffffffULL 
                                              & VL_SHIFTL_QQI(47,47,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U)))),49);
    bufp->fullQData(oldp+1544,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x2dU)))))))) 
                                 << 0x2fU) | ((QData)((IData)(
                                                              (0x7fffffU 
                                                               & (IData)(
                                                                         (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x17U))))) 
                                              << 0x18U))),49);
    bufp->fullQData(oldp+1546,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved),47);
    bufp->fullQData(oldp+1548,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),51);
    bufp->fullQData(oldp+1550,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),51);
    bufp->fullIData(oldp+1552,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),23);
    bufp->fullIData(oldp+1553,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),23);
    bufp->fullIData(oldp+1554,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),23);
    bufp->fullIData(oldp+1555,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),23);
    bufp->fullIData(oldp+1556,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),26);
    bufp->fullIData(oldp+1557,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),26);
    bufp->fullIData(oldp+1558,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),23);
    bufp->fullIData(oldp+1559,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),23);
    bufp->fullIData(oldp+1560,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),27);
    bufp->fullIData(oldp+1561,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),24);
    bufp->fullIData(oldp+1562,((0x7fffffU & (IData)(
                                                    (0x7fffffULL 
                                                     & (VL_SHIFTL_QQI(47,47,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                                        >> 0x18U))))),23);
    bufp->fullIData(oldp+1563,((0x7fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (0x7fffffULL 
                                                        & (VL_SHIFTL_QQI(47,47,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                                           >> 0x18U)))))),23);
    bufp->fullBit(oldp+1564,((1U & (IData)((0x7fffffULL 
                                            & (VL_SHIFTL_QQI(47,47,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                               >> 0x18U))))));
    bufp->fullBit(oldp+1565,((1U & (IData)((0xffffffULL 
                                            & (VL_SHIFTL_QQI(47,47,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x18U) 
                                               >> 0x17U))))));
    bufp->fullIData(oldp+1566,((0x7fffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                     >> 0x17U)))),23);
    bufp->fullIData(oldp+1567,((0x7fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x17U))))),23);
    bufp->fullBit(oldp+1568,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x17U)))));
    bufp->fullIData(oldp+1569,((0x7fffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                     >> 0x18U)))),23);
    bufp->fullIData(oldp+1570,((0x7fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x18U))))),23);
    bufp->fullBit(oldp+1571,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+1572,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x17U)))));
    bufp->fullIData(oldp+1573,((0x7fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),23);
    bufp->fullIData(oldp+1574,((0x7fffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                     >> 0x18U)))),23);
    bufp->fullIData(oldp+1575,((0x7fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x18U))))),23);
    bufp->fullBit(oldp+1576,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x18U)))));
    bufp->fullBit(oldp+1577,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x17U)))));
    bufp->fullIData(oldp+1578,((0x7fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_256__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),23);
    bufp->fullBit(oldp+1579,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__wait_for_sync));
    bufp->fullQData(oldp+1580,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__ib_a),48);
    bufp->fullQData(oldp+1582,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__ib_b),48);
    bufp->fullQData(oldp+1584,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__ib_c),56);
    bufp->fullBit(oldp+1586,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__ib_sync));
    bufp->fullBit(oldp+1587,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__b_started));
    bufp->fullBit(oldp+1588,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__ob_sync));
    bufp->fullQData(oldp+1589,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                 << 0x18U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),48);
    bufp->fullQData(oldp+1591,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                 << 0x18U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),48);
    bufp->fullCData(oldp+1593,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__iaddr),5);
    bufp->fullQData(oldp+1594,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[0]),48);
    bufp->fullQData(oldp+1596,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[1]),48);
    bufp->fullQData(oldp+1598,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[2]),48);
    bufp->fullQData(oldp+1600,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[3]),48);
    bufp->fullQData(oldp+1602,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[4]),48);
    bufp->fullQData(oldp+1604,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[5]),48);
    bufp->fullQData(oldp+1606,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[6]),48);
    bufp->fullQData(oldp+1608,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[7]),48);
    bufp->fullQData(oldp+1610,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[8]),48);
    bufp->fullQData(oldp+1612,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[9]),48);
    bufp->fullQData(oldp+1614,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[10]),48);
    bufp->fullQData(oldp+1616,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[11]),48);
    bufp->fullQData(oldp+1618,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[12]),48);
    bufp->fullQData(oldp+1620,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[13]),48);
    bufp->fullQData(oldp+1622,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[14]),48);
    bufp->fullQData(oldp+1624,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__imem[15]),48);
    bufp->fullCData(oldp+1626,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__oaddr),5);
    bufp->fullQData(oldp+1627,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[0]),48);
    bufp->fullQData(oldp+1629,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[1]),48);
    bufp->fullQData(oldp+1631,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[2]),48);
    bufp->fullQData(oldp+1633,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[3]),48);
    bufp->fullQData(oldp+1635,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[4]),48);
    bufp->fullQData(oldp+1637,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[5]),48);
    bufp->fullQData(oldp+1639,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[6]),48);
    bufp->fullQData(oldp+1641,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[7]),48);
    bufp->fullQData(oldp+1643,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[8]),48);
    bufp->fullQData(oldp+1645,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[9]),48);
    bufp->fullQData(oldp+1647,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[10]),48);
    bufp->fullQData(oldp+1649,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[11]),48);
    bufp->fullQData(oldp+1651,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[12]),48);
    bufp->fullQData(oldp+1653,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[13]),48);
    bufp->fullQData(oldp+1655,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[14]),48);
    bufp->fullQData(oldp+1657,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__omem[15]),48);
    bufp->fullCData(oldp+1659,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__nxt_oaddr),4);
    bufp->fullQData(oldp+1660,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__pre_ovalue),48);
    bufp->fullBit(oldp+1662,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__ib_sync) 
                              & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_ce))));
    bufp->fullQData(oldp+1663,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left),48);
    bufp->fullQData(oldp+1665,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right),48);
    bufp->fullBit(oldp+1667,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+1668,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+1669,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_coef),56);
    bufp->fullIData(oldp+1671,((0xffffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                     >> 0x18U)))),24);
    bufp->fullIData(oldp+1672,((0xffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_left))),24);
    bufp->fullIData(oldp+1673,((0xffffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                     >> 0x18U)))),24);
    bufp->fullIData(oldp+1674,((0xffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_right))),24);
    bufp->fullIData(oldp+1675,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),28);
    bufp->fullIData(oldp+1676,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),28);
    bufp->fullIData(oldp+1677,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),25);
    bufp->fullIData(oldp+1678,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),25);
    bufp->fullIData(oldp+1679,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),25);
    bufp->fullIData(oldp+1680,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),25);
    bufp->fullQData(oldp+1681,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftv),51);
    bufp->fullQData(oldp+1683,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__leftvv),51);
    bufp->fullQData(oldp+1685,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),53);
    bufp->fullQData(oldp+1687,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),53);
    bufp->fullQData(oldp+1689,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),55);
    bufp->fullQData(oldp+1691,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_one),55);
    bufp->fullQData(oldp+1693,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__w_two),55);
    bufp->fullBit(oldp+1695,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x32U)))));
    bufp->fullQData(oldp+1696,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x18U)))))))) 
                                 << 0x33U) | (0x7ffffffffffffULL 
                                              & VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU)))),53);
    bufp->fullQData(oldp+1698,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x31U)))))))) 
                                 << 0x33U) | ((QData)((IData)(
                                                              (0x1ffffffU 
                                                               & (IData)(
                                                                         (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x19U))))) 
                                              << 0x1aU))),53);
    bufp->fullQData(oldp+1700,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved),51);
    bufp->fullQData(oldp+1702,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),55);
    bufp->fullQData(oldp+1704,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),55);
    bufp->fullIData(oldp+1706,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),24);
    bufp->fullIData(oldp+1707,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),24);
    bufp->fullIData(oldp+1708,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),24);
    bufp->fullIData(oldp+1709,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),24);
    bufp->fullIData(oldp+1710,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),28);
    bufp->fullIData(oldp+1711,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),28);
    bufp->fullIData(oldp+1712,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),25);
    bufp->fullIData(oldp+1713,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),25);
    bufp->fullIData(oldp+1714,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),29);
    bufp->fullIData(oldp+1715,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),26);
    bufp->fullIData(oldp+1716,((0xffffffU & (IData)(
                                                    (0xffffffULL 
                                                     & (VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                        >> 0x1bU))))),24);
    bufp->fullIData(oldp+1717,((0xffffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (0xffffffULL 
                                                        & (VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                                           >> 0x1bU)))))),24);
    bufp->fullBit(oldp+1718,((1U & (IData)((0xffffffULL 
                                            & (VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                               >> 0x1bU))))));
    bufp->fullBit(oldp+1719,((1U & (IData)((0x1ffffffULL 
                                            & (VL_SHIFTL_QQI(51,51,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1aU) 
                                               >> 0x1aU))))));
    bufp->fullIData(oldp+1720,((0xffffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                     >> 0x1aU)))),24);
    bufp->fullIData(oldp+1721,((0xffffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x1aU))))),24);
    bufp->fullBit(oldp+1722,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x1aU)))));
    bufp->fullBit(oldp+1723,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x19U)))));
    bufp->fullIData(oldp+1724,((0xffffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                     >> 0x1bU)))),24);
    bufp->fullIData(oldp+1725,((0xffffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x1bU))))),24);
    bufp->fullBit(oldp+1726,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+1727,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x1aU)))));
    bufp->fullIData(oldp+1728,((0x3ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),26);
    bufp->fullIData(oldp+1729,((0xffffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                     >> 0x1bU)))),24);
    bufp->fullIData(oldp+1730,((0xffffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x1bU))))),24);
    bufp->fullBit(oldp+1731,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+1732,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x1aU)))));
    bufp->fullIData(oldp+1733,((0x3ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_32__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),26);
    bufp->fullBit(oldp+1734,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__wait_for_sync));
    bufp->fullCData(oldp+1735,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__pipeline),3);
    bufp->fullIData(oldp+1736,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__sum_r),26);
    bufp->fullIData(oldp+1737,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__sum_i),26);
    bufp->fullIData(oldp+1738,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__diff_r),26);
    bufp->fullIData(oldp+1739,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__diff_i),26);
    bufp->fullQData(oldp+1740,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__ob_a),52);
    bufp->fullQData(oldp+1742,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__ob_b_r)) 
                                 << 0x1aU) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__ob_b_i)))),52);
    bufp->fullIData(oldp+1744,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__ob_b_r),26);
    bufp->fullIData(oldp+1745,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__ob_b_i),26);
    bufp->fullSData(oldp+1746,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__iaddr),9);
    bufp->fullQData(oldp+1747,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__imem[0]),50);
    bufp->fullQData(oldp+1749,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__imem[1]),50);
    bufp->fullIData(oldp+1751,((0x1ffffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__imem
                                                      [1U] 
                                                      >> 0x19U)))),25);
    bufp->fullIData(oldp+1752,((0x1ffffffU & (IData)(
                                                     vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__imem
                                                     [1U]))),25);
    bufp->fullIData(oldp+1753,((0x1ffffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d8 
                                                      >> 0x19U)))),25);
    bufp->fullIData(oldp+1754,((0x1ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__w_d8))),25);
    bufp->fullQData(oldp+1755,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__omem[0]),52);
    bufp->fullQData(oldp+1757,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__omem[1]),52);
    bufp->fullIData(oldp+1759,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__rnd_sum_r),26);
    bufp->fullIData(oldp+1760,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__rnd_sum_i),26);
    bufp->fullIData(oldp+1761,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__rnd_diff_r),26);
    bufp->fullIData(oldp+1762,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__rnd_diff_i),26);
    bufp->fullIData(oldp+1763,((0x3ffffffU & (- vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__rnd_diff_r))),26);
    bufp->fullIData(oldp+1764,((0x3ffffffU & (- vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_4__DOT__rnd_diff_i))),26);
    bufp->fullBit(oldp+1765,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__wait_for_sync));
    bufp->fullQData(oldp+1766,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__ib_a),42);
    bufp->fullQData(oldp+1768,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__ib_b),42);
    bufp->fullQData(oldp+1770,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__ib_c),50);
    bufp->fullBit(oldp+1772,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__ib_sync));
    bufp->fullBit(oldp+1773,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__b_started));
    bufp->fullBit(oldp+1774,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__ob_sync));
    bufp->fullQData(oldp+1775,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                 << 0x16U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),44);
    bufp->fullQData(oldp+1777,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                 << 0x16U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),44);
    bufp->fullSData(oldp+1779,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__iaddr),9);
    bufp->fullSData(oldp+1780,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__oaddr),9);
    bufp->fullCData(oldp+1781,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__nxt_oaddr),8);
    bufp->fullQData(oldp+1782,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__pre_ovalue),44);
    bufp->fullBit(oldp+1784,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__ib_sync) 
                              & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_ce))));
    bufp->fullQData(oldp+1785,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left),42);
    bufp->fullQData(oldp+1787,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right),42);
    bufp->fullBit(oldp+1789,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+1790,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+1791,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_coef),50);
    bufp->fullIData(oldp+1793,((0x1fffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                     >> 0x15U)))),21);
    bufp->fullIData(oldp+1794,((0x1fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_left))),21);
    bufp->fullIData(oldp+1795,((0x1fffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                     >> 0x15U)))),21);
    bufp->fullIData(oldp+1796,((0x1fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_right))),21);
    bufp->fullIData(oldp+1797,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),25);
    bufp->fullIData(oldp+1798,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),25);
    bufp->fullIData(oldp+1799,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),22);
    bufp->fullIData(oldp+1800,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),22);
    bufp->fullIData(oldp+1801,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),22);
    bufp->fullIData(oldp+1802,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),22);
    bufp->fullQData(oldp+1803,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftv),45);
    bufp->fullQData(oldp+1805,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__leftvv),45);
    bufp->fullQData(oldp+1807,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),47);
    bufp->fullQData(oldp+1809,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),47);
    bufp->fullQData(oldp+1811,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),49);
    bufp->fullQData(oldp+1813,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_one),49);
    bufp->fullQData(oldp+1815,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__w_two),49);
    bufp->fullBit(oldp+1817,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x2cU)))));
    bufp->fullQData(oldp+1818,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x15U)))))))) 
                                 << 0x2dU) | (0x1fffffffffffULL 
                                              & VL_SHIFTL_QQI(45,45,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U)))),47);
    bufp->fullQData(oldp+1820,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x2bU)))))))) 
                                 << 0x2dU) | ((QData)((IData)(
                                                              (0x3fffffU 
                                                               & (IData)(
                                                                         (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x16U))))) 
                                              << 0x17U))),47);
    bufp->fullQData(oldp+1822,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved),45);
    bufp->fullQData(oldp+1824,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),49);
    bufp->fullQData(oldp+1826,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),49);
    bufp->fullIData(oldp+1828,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),22);
    bufp->fullIData(oldp+1829,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),22);
    bufp->fullIData(oldp+1830,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),22);
    bufp->fullIData(oldp+1831,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),22);
    bufp->fullIData(oldp+1832,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),25);
    bufp->fullIData(oldp+1833,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),25);
    bufp->fullIData(oldp+1834,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),22);
    bufp->fullIData(oldp+1835,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),22);
    bufp->fullIData(oldp+1836,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),26);
    bufp->fullIData(oldp+1837,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),23);
    bufp->fullIData(oldp+1838,((0x3fffffU & (IData)(
                                                    (0x3fffffULL 
                                                     & (VL_SHIFTL_QQI(45,45,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                                        >> 0x17U))))),22);
    bufp->fullIData(oldp+1839,((0x3fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (0x3fffffULL 
                                                        & (VL_SHIFTL_QQI(45,45,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                                           >> 0x17U)))))),22);
    bufp->fullBit(oldp+1840,((1U & (IData)((0x3fffffULL 
                                            & (VL_SHIFTL_QQI(45,45,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                               >> 0x17U))))));
    bufp->fullBit(oldp+1841,((1U & (IData)((0x7fffffULL 
                                            & (VL_SHIFTL_QQI(45,45,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x17U) 
                                               >> 0x16U))))));
    bufp->fullIData(oldp+1842,((0x3fffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                     >> 0x16U)))),22);
    bufp->fullIData(oldp+1843,((0x3fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x16U))))),22);
    bufp->fullBit(oldp+1844,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x16U)))));
    bufp->fullIData(oldp+1845,((0x3fffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                     >> 0x17U)))),22);
    bufp->fullIData(oldp+1846,((0x3fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x17U))))),22);
    bufp->fullBit(oldp+1847,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+1848,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x16U)))));
    bufp->fullIData(oldp+1849,((0x3fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),22);
    bufp->fullIData(oldp+1850,((0x3fffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                     >> 0x17U)))),22);
    bufp->fullIData(oldp+1851,((0x3fffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x17U))))),22);
    bufp->fullBit(oldp+1852,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x17U)))));
    bufp->fullBit(oldp+1853,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x16U)))));
    bufp->fullIData(oldp+1854,((0x3fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_512__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),22);
    bufp->fullBit(oldp+1855,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__wait_for_sync));
    bufp->fullQData(oldp+1856,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__ib_a),46);
    bufp->fullQData(oldp+1858,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__ib_b),46);
    bufp->fullQData(oldp+1860,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__ib_c),54);
    bufp->fullBit(oldp+1862,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__ib_sync));
    bufp->fullBit(oldp+1863,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__b_started));
    bufp->fullBit(oldp+1864,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__ob_sync));
    bufp->fullQData(oldp+1865,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                 << 0x18U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),48);
    bufp->fullQData(oldp+1867,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                 << 0x18U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),48);
    bufp->fullCData(oldp+1869,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__iaddr),6);
    bufp->fullQData(oldp+1870,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[0]),46);
    bufp->fullQData(oldp+1872,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[1]),46);
    bufp->fullQData(oldp+1874,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[2]),46);
    bufp->fullQData(oldp+1876,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[3]),46);
    bufp->fullQData(oldp+1878,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[4]),46);
    bufp->fullQData(oldp+1880,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[5]),46);
    bufp->fullQData(oldp+1882,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[6]),46);
    bufp->fullQData(oldp+1884,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[7]),46);
    bufp->fullQData(oldp+1886,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[8]),46);
    bufp->fullQData(oldp+1888,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[9]),46);
    bufp->fullQData(oldp+1890,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[10]),46);
    bufp->fullQData(oldp+1892,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[11]),46);
    bufp->fullQData(oldp+1894,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[12]),46);
    bufp->fullQData(oldp+1896,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[13]),46);
    bufp->fullQData(oldp+1898,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[14]),46);
    bufp->fullQData(oldp+1900,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[15]),46);
    bufp->fullQData(oldp+1902,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[16]),46);
    bufp->fullQData(oldp+1904,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[17]),46);
    bufp->fullQData(oldp+1906,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[18]),46);
    bufp->fullQData(oldp+1908,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[19]),46);
    bufp->fullQData(oldp+1910,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[20]),46);
    bufp->fullQData(oldp+1912,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[21]),46);
    bufp->fullQData(oldp+1914,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[22]),46);
    bufp->fullQData(oldp+1916,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[23]),46);
    bufp->fullQData(oldp+1918,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[24]),46);
    bufp->fullQData(oldp+1920,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[25]),46);
    bufp->fullQData(oldp+1922,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[26]),46);
    bufp->fullQData(oldp+1924,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[27]),46);
    bufp->fullQData(oldp+1926,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[28]),46);
    bufp->fullQData(oldp+1928,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[29]),46);
    bufp->fullQData(oldp+1930,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[30]),46);
    bufp->fullQData(oldp+1932,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__imem[31]),46);
    bufp->fullCData(oldp+1934,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__oaddr),6);
    bufp->fullQData(oldp+1935,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[0]),48);
    bufp->fullQData(oldp+1937,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[1]),48);
    bufp->fullQData(oldp+1939,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[2]),48);
    bufp->fullQData(oldp+1941,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[3]),48);
    bufp->fullQData(oldp+1943,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[4]),48);
    bufp->fullQData(oldp+1945,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[5]),48);
    bufp->fullQData(oldp+1947,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[6]),48);
    bufp->fullQData(oldp+1949,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[7]),48);
    bufp->fullQData(oldp+1951,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[8]),48);
    bufp->fullQData(oldp+1953,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[9]),48);
    bufp->fullQData(oldp+1955,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[10]),48);
    bufp->fullQData(oldp+1957,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[11]),48);
    bufp->fullQData(oldp+1959,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[12]),48);
    bufp->fullQData(oldp+1961,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[13]),48);
    bufp->fullQData(oldp+1963,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[14]),48);
    bufp->fullQData(oldp+1965,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[15]),48);
    bufp->fullQData(oldp+1967,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[16]),48);
    bufp->fullQData(oldp+1969,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[17]),48);
    bufp->fullQData(oldp+1971,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[18]),48);
    bufp->fullQData(oldp+1973,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[19]),48);
    bufp->fullQData(oldp+1975,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[20]),48);
    bufp->fullQData(oldp+1977,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[21]),48);
    bufp->fullQData(oldp+1979,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[22]),48);
    bufp->fullQData(oldp+1981,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[23]),48);
    bufp->fullQData(oldp+1983,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[24]),48);
    bufp->fullQData(oldp+1985,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[25]),48);
    bufp->fullQData(oldp+1987,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[26]),48);
    bufp->fullQData(oldp+1989,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[27]),48);
    bufp->fullQData(oldp+1991,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[28]),48);
    bufp->fullQData(oldp+1993,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[29]),48);
    bufp->fullQData(oldp+1995,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[30]),48);
    bufp->fullQData(oldp+1997,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__omem[31]),48);
    bufp->fullCData(oldp+1999,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__nxt_oaddr),5);
    bufp->fullQData(oldp+2000,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__pre_ovalue),48);
    bufp->fullBit(oldp+2002,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__ib_sync) 
                              & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_ce))));
    bufp->fullQData(oldp+2003,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left),46);
    bufp->fullQData(oldp+2005,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right),46);
    bufp->fullBit(oldp+2007,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+2008,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+2009,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_coef),54);
    bufp->fullIData(oldp+2011,((0x7fffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                     >> 0x17U)))),23);
    bufp->fullIData(oldp+2012,((0x7fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_left))),23);
    bufp->fullIData(oldp+2013,((0x7fffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                     >> 0x17U)))),23);
    bufp->fullIData(oldp+2014,((0x7fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_right))),23);
    bufp->fullIData(oldp+2015,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),27);
    bufp->fullIData(oldp+2016,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),27);
    bufp->fullIData(oldp+2017,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),24);
    bufp->fullIData(oldp+2018,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),24);
    bufp->fullIData(oldp+2019,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),24);
    bufp->fullIData(oldp+2020,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),24);
    bufp->fullQData(oldp+2021,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftv),49);
    bufp->fullQData(oldp+2023,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__leftvv),49);
    bufp->fullQData(oldp+2025,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),51);
    bufp->fullQData(oldp+2027,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),51);
    bufp->fullQData(oldp+2029,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),53);
    bufp->fullQData(oldp+2031,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_one),53);
    bufp->fullQData(oldp+2033,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__w_two),53);
    bufp->fullBit(oldp+2035,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x30U)))));
    bufp->fullQData(oldp+2036,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x17U)))))))) 
                                 << 0x31U) | (0x1ffffffffffffULL 
                                              & VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U)))),51);
    bufp->fullQData(oldp+2038,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x2fU)))))))) 
                                 << 0x31U) | ((QData)((IData)(
                                                              (0xffffffU 
                                                               & (IData)(
                                                                         (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x18U))))) 
                                              << 0x19U))),51);
    bufp->fullQData(oldp+2040,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved),49);
    bufp->fullQData(oldp+2042,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),53);
    bufp->fullQData(oldp+2044,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),53);
    bufp->fullIData(oldp+2046,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),24);
    bufp->fullIData(oldp+2047,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),24);
    bufp->fullIData(oldp+2048,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),24);
    bufp->fullIData(oldp+2049,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),24);
    bufp->fullIData(oldp+2050,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),27);
    bufp->fullIData(oldp+2051,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),27);
    bufp->fullIData(oldp+2052,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),24);
    bufp->fullIData(oldp+2053,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),24);
    bufp->fullIData(oldp+2054,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),28);
    bufp->fullIData(oldp+2055,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),25);
    bufp->fullIData(oldp+2056,((0xffffffU & (IData)(
                                                    (0xffffffULL 
                                                     & (VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                        >> 0x19U))))),24);
    bufp->fullIData(oldp+2057,((0xffffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (0xffffffULL 
                                                        & (VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                                           >> 0x19U)))))),24);
    bufp->fullBit(oldp+2058,((1U & (IData)((0xffffffULL 
                                            & (VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                               >> 0x19U))))));
    bufp->fullBit(oldp+2059,((1U & (IData)((0x1ffffffULL 
                                            & (VL_SHIFTL_QQI(49,49,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x19U) 
                                               >> 0x18U))))));
    bufp->fullIData(oldp+2060,((0xffffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                     >> 0x18U)))),24);
    bufp->fullIData(oldp+2061,((0xffffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                        >> 0x18U))))),24);
    bufp->fullBit(oldp+2062,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x18U)))));
    bufp->fullIData(oldp+2063,((0xffffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                     >> 0x19U)))),24);
    bufp->fullIData(oldp+2064,((0xffffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                        >> 0x19U))))),24);
    bufp->fullBit(oldp+2065,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+2066,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x18U)))));
    bufp->fullIData(oldp+2067,((0xffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),24);
    bufp->fullIData(oldp+2068,((0xffffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                     >> 0x19U)))),24);
    bufp->fullIData(oldp+2069,((0xffffffU & ((IData)(1U) 
                                             + (IData)(
                                                       (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                        >> 0x19U))))),24);
    bufp->fullBit(oldp+2070,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x19U)))));
    bufp->fullBit(oldp+2071,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x18U)))));
    bufp->fullIData(oldp+2072,((0xffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_64__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),24);
    bufp->fullBit(oldp+2073,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__wait_for_sync));
    bufp->fullQData(oldp+2074,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__ib_a),50);
    bufp->fullQData(oldp+2076,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__ib_b),50);
    bufp->fullQData(oldp+2078,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__ib_c),58);
    bufp->fullBit(oldp+2080,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__ib_sync));
    bufp->fullBit(oldp+2081,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__b_started));
    bufp->fullBit(oldp+2082,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__ob_sync));
    bufp->fullQData(oldp+2083,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r)) 
                                 << 0x19U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i)))),50);
    bufp->fullQData(oldp+2085,((((QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r)) 
                                 << 0x19U) | (QData)((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i)))),50);
    bufp->fullCData(oldp+2087,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__iaddr),3);
    bufp->fullQData(oldp+2088,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__imem[0]),50);
    bufp->fullQData(oldp+2090,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__imem[1]),50);
    bufp->fullQData(oldp+2092,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__imem[2]),50);
    bufp->fullQData(oldp+2094,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__imem[3]),50);
    bufp->fullCData(oldp+2096,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__oaddr),3);
    bufp->fullQData(oldp+2097,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__omem[0]),50);
    bufp->fullQData(oldp+2099,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__omem[1]),50);
    bufp->fullQData(oldp+2101,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__omem[2]),50);
    bufp->fullQData(oldp+2103,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__omem[3]),50);
    bufp->fullCData(oldp+2105,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__nxt_oaddr),2);
    bufp->fullQData(oldp+2106,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__pre_ovalue),50);
    bufp->fullBit(oldp+2108,(((IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__ib_sync) 
                              & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_ce))));
    bufp->fullQData(oldp+2109,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left),50);
    bufp->fullQData(oldp+2111,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right),50);
    bufp->fullBit(oldp+2113,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux));
    bufp->fullBit(oldp+2114,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_aux_2));
    bufp->fullQData(oldp+2115,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_coef),58);
    bufp->fullIData(oldp+2117,((0x1ffffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left 
                                                      >> 0x19U)))),25);
    bufp->fullIData(oldp+2118,((0x1ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_left))),25);
    bufp->fullIData(oldp+2119,((0x1ffffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right 
                                                      >> 0x19U)))),25);
    bufp->fullIData(oldp+2120,((0x1ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_right))),25);
    bufp->fullIData(oldp+2121,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_r),29);
    bufp->fullIData(oldp+2122,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__ir_coef_i),29);
    bufp->fullIData(oldp+2123,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_r),26);
    bufp->fullIData(oldp+2124,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_sum_i),26);
    bufp->fullIData(oldp+2125,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_r),26);
    bufp->fullIData(oldp+2126,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__r_dif_i),26);
    bufp->fullQData(oldp+2127,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftv),53);
    bufp->fullQData(oldp+2129,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__leftvv),53);
    bufp->fullQData(oldp+2131,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_one),55);
    bufp->fullQData(oldp+2133,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_two),55);
    bufp->fullQData(oldp+2135,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__rp_three),57);
    bufp->fullQData(oldp+2137,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_one),57);
    bufp->fullQData(oldp+2139,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__w_two),57);
    bufp->fullBit(oldp+2141,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x34U)))));
    bufp->fullQData(oldp+2142,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x19U)))))))) 
                                 << 0x35U) | (0x1fffffffffffffULL 
                                              & VL_SHIFTL_QQI(53,53,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU)))),55);
    bufp->fullQData(oldp+2144,((((QData)((IData)((3U 
                                                  & (- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                           >> 0x33U)))))))) 
                                 << 0x35U) | ((QData)((IData)(
                                                              (0x3ffffffU 
                                                               & (IData)(
                                                                         (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                                          >> 0x1aU))))) 
                                              << 0x1bU))),55);
    bufp->fullQData(oldp+2146,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved),53);
    bufp->fullQData(oldp+2148,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r),57);
    bufp->fullQData(oldp+2150,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i),57);
    bufp->fullIData(oldp+2152,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_r),25);
    bufp->fullIData(oldp+2153,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_left_i),25);
    bufp->fullIData(oldp+2154,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_r),25);
    bufp->fullIData(oldp+2155,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__rnd_right_i),25);
    bufp->fullIData(oldp+2156,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1c_in),29);
    bufp->fullIData(oldp+2157,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2c_in),29);
    bufp->fullIData(oldp+2158,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p1d_in),26);
    bufp->fullIData(oldp+2159,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p2d_in),26);
    bufp->fullIData(oldp+2160,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3c_in),30);
    bufp->fullIData(oldp+2161,(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__CKPCE_ONE__DOT__p3d_in),27);
    bufp->fullIData(oldp+2162,((0x1ffffffU & (IData)(
                                                     (0x1ffffffULL 
                                                      & (VL_SHIFTL_QQI(53,53,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                                         >> 0x1cU))))),25);
    bufp->fullIData(oldp+2163,((0x1ffffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (0x1ffffffULL 
                                                         & (VL_SHIFTL_QQI(53,53,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                                            >> 0x1cU)))))),25);
    bufp->fullBit(oldp+2164,((1U & (IData)((0x1ffffffULL 
                                            & (VL_SHIFTL_QQI(53,53,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                               >> 0x1cU))))));
    bufp->fullBit(oldp+2165,((1U & (IData)((0x3ffffffULL 
                                            & (VL_SHIFTL_QQI(53,53,32, vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved, 0x1bU) 
                                               >> 0x1bU))))));
    bufp->fullIData(oldp+2166,((0x1ffffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                      >> 0x1bU)))),25);
    bufp->fullIData(oldp+2167,((0x1ffffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                                         >> 0x1bU))))),25);
    bufp->fullBit(oldp+2168,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x1bU)))));
    bufp->fullBit(oldp+2169,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__left_saved 
                                            >> 0x1aU)))));
    bufp->fullIData(oldp+2170,((0x1ffffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                      >> 0x1cU)))),25);
    bufp->fullIData(oldp+2171,((0x1ffffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                                         >> 0x1cU))))),25);
    bufp->fullBit(oldp+2172,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+2173,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i 
                                            >> 0x1bU)))));
    bufp->fullIData(oldp+2174,((0x7ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_i))),27);
    bufp->fullIData(oldp+2175,((0x1ffffffU & (IData)(
                                                     (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                      >> 0x1cU)))),25);
    bufp->fullIData(oldp+2176,((0x1ffffffU & ((IData)(1U) 
                                              + (IData)(
                                                        (vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                                         >> 0x1cU))))),25);
    bufp->fullBit(oldp+2177,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x1cU)))));
    bufp->fullBit(oldp+2178,((1U & (IData)((vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r 
                                            >> 0x1bU)))));
    bufp->fullIData(oldp+2179,((0x7ffffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_ifft__DOT__stage_8__DOT__HWBFLY__DOT__bfly__DOT__mpy_r))),27);
    bufp->fullSData(oldp+2180,(vlSelf->dj__DOT__dj_0__DOT__left_lpf__DOT__bin_idx),10);
    bufp->fullIData(oldp+2181,((0x1fffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_fft_o_result 
                                                     >> 0x15U)))),21);
    bufp->fullIData(oldp+2182,((0x1fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft_o_result))),21);
    bufp->fullIData(oldp+2183,((0x1fffffU & (IData)(
                                                    (vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_sample 
                                                     >> 0x15U)))),21);
    bufp->fullIData(oldp+2184,((0x1fffffU & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_lpf_o_sample))),21);
    bufp->fullBit(oldp+2185,(vlSelf->dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_req_sync_uq1__DOT__altera_reset_synchronizer_int_chain_out));
    bufp->fullCData(oldp+2186,(vlSelf->dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_req_sync_uq1__DOT__altera_reset_synchronizer_int_chain),2);
    bufp->fullBit(oldp+2187,(((IData)(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid) 
                              & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_128__DOT__ib_sync))));
    bufp->fullBit(oldp+2188,(((IData)(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid) 
                              & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_16__DOT__ib_sync))));
    bufp->fullBit(oldp+2189,(((IData)(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid) 
                              & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_256__DOT__ib_sync))));
    bufp->fullBit(oldp+2190,(((IData)(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid) 
                              & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_32__DOT__ib_sync))));
    bufp->fullBit(oldp+2191,(((IData)(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid) 
                              & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_512__DOT__ib_sync))));
    bufp->fullBit(oldp+2192,(((IData)(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid) 
                              & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_64__DOT__ib_sync))));
    bufp->fullBit(oldp+2193,(((IData)(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid) 
                              & (IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT__stage_8__DOT__ib_sync))));
    bufp->fullBit(oldp+2194,(((IData)(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid) 
                              & ((IData)(vlSelf->dj__DOT__dj_0__DOT__left_fft_o_sync) 
                                 | (IData)(vlSelf->dj__DOT__dj_0__DOT__left_r_syncd)))));
    bufp->fullBit(oldp+2195,(((IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__fill_level) 
                              <= vlSelf->dj__DOT__codec_left_fifo__DOT__almost_empty_threshold)));
    bufp->fullBit(oldp+2196,(((IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__fill_level) 
                              <= vlSelf->dj__DOT__codec_right_fifo__DOT__almost_empty_threshold)));
    bufp->fullBit(oldp+2197,(((IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__fill_level) 
                              <= vlSelf->dj__DOT__left_sc_fifo__DOT__almost_empty_threshold)));
    bufp->fullBit(oldp+2198,(((IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__fill_level) 
                              <= vlSelf->dj__DOT__right_sc_fifo__DOT__almost_empty_threshold)));
    bufp->fullBit(oldp+2199,(((IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__fill_level) 
                              >= vlSelf->dj__DOT__codec_left_fifo__DOT__almost_full_threshold)));
    bufp->fullBit(oldp+2200,(((IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__fill_level) 
                              >= vlSelf->dj__DOT__codec_right_fifo__DOT__almost_full_threshold)));
    bufp->fullBit(oldp+2201,(((IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__fill_level) 
                              >= vlSelf->dj__DOT__left_sc_fifo__DOT__almost_full_threshold)));
    bufp->fullBit(oldp+2202,(((IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__fill_level) 
                              >= vlSelf->dj__DOT__right_sc_fifo__DOT__almost_full_threshold)));
    bufp->fullBit(oldp+2203,(vlSelf->dj__DOT__dj_0_codec_left_fifo_sink_valid));
    bufp->fullBit(oldp+2204,((1U & (~ (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__full)))));
    bufp->fullBit(oldp+2205,(vlSelf->dj__DOT__dj_0_codec_right_fifo_sink_valid));
    bufp->fullSData(oldp+2206,((0xffffU & (IData)((vlSelf->dj__DOT__dj_0__DOT__right_ifft_o_result 
                                                   >> 0x1aU)))),16);
    bufp->fullBit(oldp+2207,((1U & (~ (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__full)))));
    bufp->fullBit(oldp+2208,((1U & (~ (IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__full)))));
    bufp->fullBit(oldp+2209,(vlSelf->dj__DOT__codec_left_fifo_out_valid));
    bufp->fullSData(oldp+2210,(vlSelf->dj__DOT__codec_left_fifo__DOT__out_payload),16);
    bufp->fullBit(oldp+2211,(vlSelf->dj__DOT__codec_right_fifo_out_valid));
    bufp->fullSData(oldp+2212,(vlSelf->dj__DOT__codec_right_fifo__DOT__out_payload),16);
    bufp->fullBit(oldp+2213,(vlSelf->dj__DOT__left_sc_fifo_out_valid));
    bufp->fullSData(oldp+2214,(vlSelf->dj__DOT__left_sc_fifo__DOT__out_payload),16);
    bufp->fullBit(oldp+2215,(vlSelf->dj__DOT__right_sc_fifo_out_valid));
    bufp->fullSData(oldp+2216,(vlSelf->dj__DOT__right_sc_fifo__DOT__out_payload),16);
    bufp->fullBit(oldp+2217,((1U & (~ (IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__full)))));
    bufp->fullIData(oldp+2218,(vlSelf->dj__DOT__codec_left_fifo__DOT__csr_readdata),32);
    bufp->fullSData(oldp+2219,(vlSelf->dj__DOT__codec_left_fifo__DOT__wr_ptr),10);
    bufp->fullSData(oldp+2220,(vlSelf->dj__DOT__codec_left_fifo__DOT__rd_ptr),10);
    bufp->fullSData(oldp+2221,(vlSelf->dj__DOT__codec_left_fifo__DOT__next_wr_ptr),10);
    bufp->fullSData(oldp+2222,((0x3ffU & ((IData)(1U) 
                                          + (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__wr_ptr)))),10);
    bufp->fullSData(oldp+2223,((0x3ffU & ((IData)(1U) 
                                          + (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__rd_ptr)))),10);
    bufp->fullBit(oldp+2224,(vlSelf->dj__DOT__codec_left_fifo__DOT__write));
    bufp->fullBit(oldp+2225,(vlSelf->dj__DOT__codec_left_fifo__DOT__empty));
    bufp->fullBit(oldp+2226,(vlSelf->dj__DOT__codec_left_fifo__DOT__full));
    bufp->fullBit(oldp+2227,(vlSelf->dj__DOT__codec_left_fifo__DOT__internal_out_valid));
    bufp->fullSData(oldp+2228,(vlSelf->dj__DOT__codec_left_fifo__DOT__fifo_fill_level),11);
    bufp->fullSData(oldp+2229,(vlSelf->dj__DOT__codec_left_fifo__DOT__fill_level),11);
    bufp->fullIData(oldp+2230,(vlSelf->dj__DOT__codec_left_fifo__DOT__almost_full_threshold),24);
    bufp->fullIData(oldp+2231,(vlSelf->dj__DOT__codec_left_fifo__DOT__almost_empty_threshold),24);
    bufp->fullIData(oldp+2232,(vlSelf->dj__DOT__codec_right_fifo__DOT__csr_readdata),32);
    bufp->fullSData(oldp+2233,(vlSelf->dj__DOT__codec_right_fifo__DOT__wr_ptr),10);
    bufp->fullSData(oldp+2234,(vlSelf->dj__DOT__codec_right_fifo__DOT__rd_ptr),10);
    bufp->fullSData(oldp+2235,(vlSelf->dj__DOT__codec_right_fifo__DOT__next_wr_ptr),10);
    bufp->fullSData(oldp+2236,((0x3ffU & ((IData)(1U) 
                                          + (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__wr_ptr)))),10);
    bufp->fullSData(oldp+2237,((0x3ffU & ((IData)(1U) 
                                          + (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__rd_ptr)))),10);
    bufp->fullBit(oldp+2238,(vlSelf->dj__DOT__codec_right_fifo__DOT__write));
    bufp->fullBit(oldp+2239,(vlSelf->dj__DOT__codec_right_fifo__DOT__empty));
    bufp->fullBit(oldp+2240,(vlSelf->dj__DOT__codec_right_fifo__DOT__full));
    bufp->fullBit(oldp+2241,(vlSelf->dj__DOT__codec_right_fifo__DOT__internal_out_valid));
    bufp->fullSData(oldp+2242,(vlSelf->dj__DOT__codec_right_fifo__DOT__fifo_fill_level),11);
    bufp->fullSData(oldp+2243,(vlSelf->dj__DOT__codec_right_fifo__DOT__fill_level),11);
    bufp->fullIData(oldp+2244,(vlSelf->dj__DOT__codec_right_fifo__DOT__almost_full_threshold),24);
    bufp->fullIData(oldp+2245,(vlSelf->dj__DOT__codec_right_fifo__DOT__almost_empty_threshold),24);
    bufp->fullIData(oldp+2246,((0x3ffffffU & (VL_EXTENDS_II(26,16, (IData)(vlSelf->dj__DOT__codec_left_fifo__DOT__out_payload)) 
                                              + VL_EXTENDS_II(26,16, (IData)(vlSelf->dj__DOT__codec_right_fifo__DOT__out_payload))))),26);
    bufp->fullQData(oldp+2247,(vlSelf->dj__DOT__dj_0__DOT__right_ifft_o_result),52);
    bufp->fullIData(oldp+2249,(((IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__out_payload) 
                                << 0x10U)),32);
    bufp->fullIData(oldp+2250,(vlSelf->dj__DOT__left_sc_fifo__DOT__csr_readdata),32);
    bufp->fullSData(oldp+2251,(vlSelf->dj__DOT__left_sc_fifo__DOT__wr_ptr),10);
    bufp->fullSData(oldp+2252,(vlSelf->dj__DOT__left_sc_fifo__DOT__rd_ptr),10);
    bufp->fullSData(oldp+2253,((0x3ffU & ((IData)(1U) 
                                          + (IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__wr_ptr)))),10);
    bufp->fullSData(oldp+2254,((0x3ffU & ((IData)(1U) 
                                          + (IData)(vlSelf->dj__DOT__left_sc_fifo__DOT__rd_ptr)))),10);
    bufp->fullBit(oldp+2255,(vlSelf->dj__DOT__left_sc_fifo__DOT__read));
    bufp->fullBit(oldp+2256,(vlSelf->dj__DOT__left_sc_fifo__DOT__empty));
    bufp->fullBit(oldp+2257,(vlSelf->dj__DOT__left_sc_fifo__DOT__full));
    bufp->fullBit(oldp+2258,(vlSelf->dj__DOT__left_sc_fifo__DOT__internal_out_valid));
    bufp->fullBit(oldp+2259,(vlSelf->dj__DOT__left_sc_fifo__DOT__internal_out_ready));
    bufp->fullSData(oldp+2260,(vlSelf->dj__DOT__left_sc_fifo__DOT__fifo_fill_level),11);
    bufp->fullSData(oldp+2261,(vlSelf->dj__DOT__left_sc_fifo__DOT__fill_level),11);
    bufp->fullIData(oldp+2262,(vlSelf->dj__DOT__left_sc_fifo__DOT__almost_full_threshold),24);
    bufp->fullIData(oldp+2263,(vlSelf->dj__DOT__left_sc_fifo__DOT__almost_empty_threshold),24);
    bufp->fullIData(oldp+2264,(vlSelf->dj__DOT__right_sc_fifo__DOT__csr_readdata),32);
    bufp->fullSData(oldp+2265,(vlSelf->dj__DOT__right_sc_fifo__DOT__wr_ptr),10);
    bufp->fullSData(oldp+2266,(vlSelf->dj__DOT__right_sc_fifo__DOT__rd_ptr),10);
    bufp->fullSData(oldp+2267,((0x3ffU & ((IData)(1U) 
                                          + (IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__wr_ptr)))),10);
    bufp->fullSData(oldp+2268,((0x3ffU & ((IData)(1U) 
                                          + (IData)(vlSelf->dj__DOT__right_sc_fifo__DOT__rd_ptr)))),10);
    bufp->fullBit(oldp+2269,(vlSelf->dj__DOT__right_sc_fifo__DOT__read));
    bufp->fullBit(oldp+2270,(vlSelf->dj__DOT__right_sc_fifo__DOT__empty));
    bufp->fullBit(oldp+2271,(vlSelf->dj__DOT__right_sc_fifo__DOT__full));
    bufp->fullBit(oldp+2272,(vlSelf->dj__DOT__right_sc_fifo__DOT__internal_out_valid));
    bufp->fullBit(oldp+2273,(vlSelf->dj__DOT__right_sc_fifo__DOT__internal_out_ready));
    bufp->fullSData(oldp+2274,(vlSelf->dj__DOT__right_sc_fifo__DOT__fifo_fill_level),11);
    bufp->fullSData(oldp+2275,(vlSelf->dj__DOT__right_sc_fifo__DOT__fill_level),11);
    bufp->fullIData(oldp+2276,(vlSelf->dj__DOT__right_sc_fifo__DOT__almost_full_threshold),24);
    bufp->fullIData(oldp+2277,(vlSelf->dj__DOT__right_sc_fifo__DOT__almost_empty_threshold),24);
    bufp->fullSData(oldp+2278,(vlSelf->dj__DOT__codec_left_fifo__DOT__internal_out_payload),16);
    bufp->fullSData(oldp+2279,(vlSelf->dj__DOT__codec_right_fifo__DOT__internal_out_payload),16);
    bufp->fullSData(oldp+2280,(vlSelf->dj__DOT__left_sc_fifo__DOT__internal_out_payload),16);
    bufp->fullSData(oldp+2281,(vlSelf->dj__DOT__right_sc_fifo__DOT__internal_out_payload),16);
    bufp->fullSData(oldp+2282,(vlSelf->dj__DOT__codec_left_fifo__DOT__next_rd_ptr),10);
    bufp->fullBit(oldp+2283,(vlSelf->dj__DOT__codec_left_fifo__DOT__read));
    bufp->fullBit(oldp+2284,(vlSelf->dj__DOT__codec_left_fifo__DOT__next_empty));
    bufp->fullBit(oldp+2285,(vlSelf->dj__DOT__codec_left_fifo__DOT__next_full));
    bufp->fullBit(oldp+2286,(vlSelf->dj__DOT__codec_left_fifo__DOT__internal_out_ready));
    bufp->fullSData(oldp+2287,(vlSelf->dj__DOT__codec_right_fifo__DOT__next_rd_ptr),10);
    bufp->fullBit(oldp+2288,(vlSelf->dj__DOT__codec_right_fifo__DOT__read));
    bufp->fullBit(oldp+2289,(vlSelf->dj__DOT__codec_right_fifo__DOT__next_empty));
    bufp->fullBit(oldp+2290,(vlSelf->dj__DOT__codec_right_fifo__DOT__next_full));
    bufp->fullBit(oldp+2291,(vlSelf->dj__DOT__codec_right_fifo__DOT__internal_out_ready));
    bufp->fullBit(oldp+2292,(vlSelf->dj__DOT__dj_0__DOT__left_fft__DOT____Vcellinp__revstage__i_ce));
    bufp->fullBit(oldp+2293,(vlSelf->dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_sync_uq1__DOT__altera_reset_synchronizer_int_chain_out));
    bufp->fullBit(oldp+2294,((1U & (~ (IData)(vlSelf->dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_sync_uq1__DOT__altera_reset_synchronizer_int_chain_out)))));
    bufp->fullCData(oldp+2295,(vlSelf->dj__DOT__rst_controller__DOT__genblk1__DOT__alt_rst_sync_uq1__DOT__altera_reset_synchronizer_int_chain),2);
    bufp->fullBit(oldp+2296,(vlSelf->clk_clk));
    bufp->fullSData(oldp+2297,(vlSelf->dj_0_avalon_slave_0_writedata),16);
    bufp->fullBit(oldp+2298,(vlSelf->dj_0_avalon_slave_0_write));
    bufp->fullBit(oldp+2299,(vlSelf->dj_0_avalon_slave_0_read));
    bufp->fullSData(oldp+2300,(vlSelf->dj_0_avalon_slave_0_readdata),16);
    bufp->fullBit(oldp+2301,(vlSelf->dj_0_avalon_slave_0_address));
    bufp->fullBit(oldp+2302,(vlSelf->dj_0_left_stream_interrupt_irq));
    bufp->fullBit(oldp+2303,(vlSelf->dj_0_right_stream_interrupt_irq));
    bufp->fullBit(oldp+2304,(vlSelf->reset_reset_n));
    bufp->fullSData(oldp+2305,(vlSelf->dj__DOT__left_sc_fifo__DOT__next_rd_ptr),10);
    bufp->fullSData(oldp+2306,(vlSelf->dj__DOT__right_sc_fifo__DOT__next_rd_ptr),10);
}
