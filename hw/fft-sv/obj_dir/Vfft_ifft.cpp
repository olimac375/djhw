// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfft_ifft__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfft_ifft::Vfft_ifft(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfft_ifft__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_ce{vlSymsp->TOP.i_ce}
    , i_reset{vlSymsp->TOP.i_reset}
    , o_sync{vlSymsp->TOP.o_sync}
    , i_sample{vlSymsp->TOP.i_sample}
    , o_result{vlSymsp->TOP.o_result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfft_ifft::Vfft_ifft(const char* _vcname__)
    : Vfft_ifft(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfft_ifft::~Vfft_ifft() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfft_ifft___024root___eval_debug_assertions(Vfft_ifft___024root* vlSelf);
#endif  // VL_DEBUG
void Vfft_ifft___024root___eval_static(Vfft_ifft___024root* vlSelf);
void Vfft_ifft___024root___eval_initial(Vfft_ifft___024root* vlSelf);
void Vfft_ifft___024root___eval_settle(Vfft_ifft___024root* vlSelf);
void Vfft_ifft___024root___eval(Vfft_ifft___024root* vlSelf);

void Vfft_ifft::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfft_ifft::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfft_ifft___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfft_ifft___024root___eval_static(&(vlSymsp->TOP));
        Vfft_ifft___024root___eval_initial(&(vlSymsp->TOP));
        Vfft_ifft___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfft_ifft___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfft_ifft::eventsPending() { return false; }

uint64_t Vfft_ifft::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfft_ifft::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfft_ifft___024root___eval_final(Vfft_ifft___024root* vlSelf);

VL_ATTR_COLD void Vfft_ifft::final() {
    Vfft_ifft___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfft_ifft::hierName() const { return vlSymsp->name(); }
const char* Vfft_ifft::modelName() const { return "Vfft_ifft"; }
unsigned Vfft_ifft::threads() const { return 1; }
void Vfft_ifft::prepareClone() const { contextp()->prepareClone(); }
void Vfft_ifft::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vfft_ifft::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vfft_ifft___024root__trace_decl_types(VerilatedVcd* tracep);

void Vfft_ifft___024root__trace_init_top(Vfft_ifft___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfft_ifft___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfft_ifft___024root*>(voidSelf);
    Vfft_ifft__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vfft_ifft___024root__trace_decl_types(tracep);
    Vfft_ifft___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfft_ifft___024root__trace_register(Vfft_ifft___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfft_ifft::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfft_ifft::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    (void)levels; (void)options; // Prevent unused variable warning
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vfft_ifft___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
