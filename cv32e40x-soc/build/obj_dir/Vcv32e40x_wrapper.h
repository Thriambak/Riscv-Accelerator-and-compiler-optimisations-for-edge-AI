// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCV32E40X_WRAPPER_H_
#define VERILATED_VCV32E40X_WRAPPER_H_  // guard

#include "verilated.h"

class Vcv32e40x_wrapper__Syms;
class Vcv32e40x_wrapper___024root;
class Vcv32e40x_wrapper_if_c_obi;
class Vcv32e40x_wrapper_if_c_obi__Tz1_TBz2;
class Vcv32e40x_wrapper_if_xif;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vcv32e40x_wrapper VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vcv32e40x_wrapper__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);
    VL_OUT8(&mem_req_o,0,0);
    VL_OUT8(&mem_we_o,0,0);
    VL_OUT8(&mem_be_o,3,0);
    VL_IN8(&mem_rvalid_i,0,0);
    VL_IN8(&mem_err_i,0,0);
    VL_OUT(&mem_addr_o,31,0);
    VL_OUT(&mem_wdata_o,31,0);
    VL_IN(&mem_rdata_i,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vcv32e40x_wrapper_if_xif* const __PVT__cv32e40x_wrapper__DOT__ext_if;
    Vcv32e40x_wrapper_if_c_obi* const __PVT__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if;
    Vcv32e40x_wrapper_if_c_obi__Tz1_TBz2* const __PVT__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vcv32e40x_wrapper___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vcv32e40x_wrapper(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vcv32e40x_wrapper(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vcv32e40x_wrapper();
  private:
    VL_UNCOPYABLE(Vcv32e40x_wrapper);  ///< Copying not allowed

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
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
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
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
