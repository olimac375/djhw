// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VDJ__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VDJ::VDJ(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VDJ__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , write{vlSymsp->TOP.write}
    , read{vlSymsp->TOP.read}
    , stream_address{vlSymsp->TOP.stream_address}
    , left_fifo_sink_valid{vlSymsp->TOP.left_fifo_sink_valid}
    , left_fifo_source_valid{vlSymsp->TOP.left_fifo_source_valid}
    , left_fifo_almost_full{vlSymsp->TOP.left_fifo_almost_full}
    , left_fifo_almost_empty{vlSymsp->TOP.left_fifo_almost_empty}
    , left_fifo_interrupt{vlSymsp->TOP.left_fifo_interrupt}
    , right_fifo_sink_valid{vlSymsp->TOP.right_fifo_sink_valid}
    , right_fifo_source_valid{vlSymsp->TOP.right_fifo_source_valid}
    , right_fifo_almost_full{vlSymsp->TOP.right_fifo_almost_full}
    , right_fifo_almost_empty{vlSymsp->TOP.right_fifo_almost_empty}
    , right_fifo_interrupt{vlSymsp->TOP.right_fifo_interrupt}
    , o_sync{vlSymsp->TOP.o_sync}
    , writedata{vlSymsp->TOP.writedata}
    , left_fifo_sink_stream{vlSymsp->TOP.left_fifo_sink_stream}
    , left_fifo_source_stream{vlSymsp->TOP.left_fifo_source_stream}
    , right_fifo_sink_stream{vlSymsp->TOP.right_fifo_sink_stream}
    , right_fifo_source_stream{vlSymsp->TOP.right_fifo_source_stream}
    , readdata{vlSymsp->TOP.readdata}
    , o_result{vlSymsp->TOP.o_result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VDJ::VDJ(const char* _vcname__)
    : VDJ(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VDJ::~VDJ() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VDJ___024root___eval_debug_assertions(VDJ___024root* vlSelf);
#endif  // VL_DEBUG
void VDJ___024root___eval_static(VDJ___024root* vlSelf);
void VDJ___024root___eval_initial(VDJ___024root* vlSelf);
void VDJ___024root___eval_settle(VDJ___024root* vlSelf);
void VDJ___024root___eval(VDJ___024root* vlSelf);

void VDJ::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDJ::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VDJ___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VDJ___024root___eval_static(&(vlSymsp->TOP));
        VDJ___024root___eval_initial(&(vlSymsp->TOP));
        VDJ___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VDJ___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VDJ::eventsPending() { return false; }

uint64_t VDJ::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VDJ::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VDJ___024root___eval_final(VDJ___024root* vlSelf);

VL_ATTR_COLD void VDJ::final() {
    VDJ___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VDJ::hierName() const { return vlSymsp->name(); }
const char* VDJ::modelName() const { return "VDJ"; }
unsigned VDJ::threads() const { return 1; }
void VDJ::prepareClone() const { contextp()->prepareClone(); }
void VDJ::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VDJ::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VDJ___024root__trace_decl_types(VerilatedVcd* tracep);

void VDJ___024root__trace_init_top(VDJ___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VDJ___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDJ___024root*>(voidSelf);
    VDJ__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VDJ___024root__trace_decl_types(tracep);
    VDJ___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VDJ___024root__trace_register(VDJ___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VDJ::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VDJ::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    (void)levels; (void)options; // Prevent unused variable warning
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VDJ___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
