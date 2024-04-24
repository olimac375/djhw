// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VDJ_H_
#define VERILATED_VDJ_H_  // guard

#include "verilated.h"

class VDJ__Syms;
class VDJ___024root;
class VerilatedVcdC;

// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) VDJ VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    VDJ__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&write,0,0);
    VL_IN8(&read,0,0);
    VL_IN8(&stream_address,0,0);
    VL_OUT8(&left_fifo_sink_valid,0,0);
    VL_IN8(&left_fifo_source_valid,0,0);
    VL_IN8(&left_fifo_almost_full,0,0);
    VL_IN8(&left_fifo_almost_empty,0,0);
    VL_OUT8(&left_fifo_interrupt,0,0);
    VL_OUT8(&right_fifo_sink_valid,0,0);
    VL_IN8(&right_fifo_source_valid,0,0);
    VL_IN8(&right_fifo_almost_full,0,0);
    VL_IN8(&right_fifo_almost_empty,0,0);
    VL_OUT8(&right_fifo_interrupt,0,0);
    VL_OUT8(&o_sync,0,0);
    VL_IN16(&writedata,15,0);
    VL_OUT16(&left_fifo_sink_stream,15,0);
    VL_IN16(&left_fifo_source_stream,15,0);
    VL_OUT16(&right_fifo_sink_stream,15,0);
    VL_IN16(&right_fifo_source_stream,15,0);
    VL_OUT16(&readdata,15,0);
    VL_OUT64(&o_result,51,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VDJ___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VDJ(VerilatedContext* contextp, const char* name = "TOP");
    explicit VDJ(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VDJ();
  private:
    VL_UNCOPYABLE(VDJ);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
