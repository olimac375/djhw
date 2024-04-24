// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfftmain__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfftmain::Vfftmain(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfftmain__Syms(contextp(), _vcname__, this)}
    , i_clk{vlSymsp->TOP.i_clk}
    , i_reset{vlSymsp->TOP.i_reset}
    , i_ce{vlSymsp->TOP.i_ce}
    , o_sync{vlSymsp->TOP.o_sync}
    , i_sample{vlSymsp->TOP.i_sample}
    , o_result{vlSymsp->TOP.o_result}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfftmain::Vfftmain(const char* _vcname__)
    : Vfftmain(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfftmain::~Vfftmain() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfftmain___024root___eval_debug_assertions(Vfftmain___024root* vlSelf);
#endif  // VL_DEBUG
void Vfftmain___024root___eval_static(Vfftmain___024root* vlSelf);
void Vfftmain___024root___eval_initial(Vfftmain___024root* vlSelf);
void Vfftmain___024root___eval_settle(Vfftmain___024root* vlSelf);
void Vfftmain___024root___eval(Vfftmain___024root* vlSelf);

void Vfftmain::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfftmain::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfftmain___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfftmain___024root___eval_static(&(vlSymsp->TOP));
        Vfftmain___024root___eval_initial(&(vlSymsp->TOP));
        Vfftmain___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfftmain___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfftmain::eventsPending() { return false; }

uint64_t Vfftmain::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfftmain::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfftmain___024root___eval_final(Vfftmain___024root* vlSelf);

VL_ATTR_COLD void Vfftmain::final() {
    Vfftmain___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfftmain::hierName() const { return vlSymsp->name(); }
const char* Vfftmain::modelName() const { return "Vfftmain"; }
unsigned Vfftmain::threads() const { return 1; }
void Vfftmain::prepareClone() const { contextp()->prepareClone(); }
void Vfftmain::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vfftmain::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vfftmain___024root__trace_decl_types(VerilatedVcd* tracep);

void Vfftmain___024root__trace_init_top(Vfftmain___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfftmain___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfftmain___024root*>(voidSelf);
    Vfftmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vfftmain___024root__trace_decl_types(tracep);
    Vfftmain___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfftmain___024root__trace_register(Vfftmain___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfftmain::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfftmain::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    (void)levels; (void)options; // Prevent unused variable warning
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vfftmain___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
