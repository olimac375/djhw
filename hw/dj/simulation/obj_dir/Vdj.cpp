// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdj__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vdj::Vdj(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdj__Syms(contextp(), _vcname__, this)}
    , clk_clk{vlSymsp->TOP.clk_clk}
    , dj_0_avalon_slave_0_write{vlSymsp->TOP.dj_0_avalon_slave_0_write}
    , dj_0_avalon_slave_0_read{vlSymsp->TOP.dj_0_avalon_slave_0_read}
    , dj_0_avalon_slave_0_address{vlSymsp->TOP.dj_0_avalon_slave_0_address}
    , dj_0_left_stream_interrupt_irq{vlSymsp->TOP.dj_0_left_stream_interrupt_irq}
    , dj_0_right_stream_interrupt_irq{vlSymsp->TOP.dj_0_right_stream_interrupt_irq}
    , reset_reset_n{vlSymsp->TOP.reset_reset_n}
    , dj_0_avalon_slave_0_writedata{vlSymsp->TOP.dj_0_avalon_slave_0_writedata}
    , dj_0_avalon_slave_0_readdata{vlSymsp->TOP.dj_0_avalon_slave_0_readdata}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdj::Vdj(const char* _vcname__)
    : Vdj(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdj::~Vdj() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdj___024root___eval_debug_assertions(Vdj___024root* vlSelf);
#endif  // VL_DEBUG
void Vdj___024root___eval_static(Vdj___024root* vlSelf);
void Vdj___024root___eval_initial(Vdj___024root* vlSelf);
void Vdj___024root___eval_settle(Vdj___024root* vlSelf);
void Vdj___024root___eval(Vdj___024root* vlSelf);

void Vdj::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdj::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdj___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdj___024root___eval_static(&(vlSymsp->TOP));
        Vdj___024root___eval_initial(&(vlSymsp->TOP));
        Vdj___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdj___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdj::eventsPending() { return false; }

uint64_t Vdj::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vdj::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdj___024root___eval_final(Vdj___024root* vlSelf);

VL_ATTR_COLD void Vdj::final() {
    Vdj___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdj::hierName() const { return vlSymsp->name(); }
const char* Vdj::modelName() const { return "Vdj"; }
unsigned Vdj::threads() const { return 1; }
void Vdj::prepareClone() const { contextp()->prepareClone(); }
void Vdj::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vdj::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vdj___024root__trace_decl_types(VerilatedVcd* tracep);

void Vdj___024root__trace_init_top(Vdj___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vdj___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdj___024root*>(voidSelf);
    Vdj__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vdj___024root__trace_decl_types(tracep);
    Vdj___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vdj___024root__trace_register(Vdj___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vdj::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vdj::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    (void)levels; (void)options; // Prevent unused variable warning
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vdj___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
