// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCV32E40X_WRAPPER__SYMS_H_
#define VERILATED_VCV32E40X_WRAPPER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcv32e40x_wrapper.h"

// INCLUDE MODULE CLASSES
#include "Vcv32e40x_wrapper___024root.h"
#include "Vcv32e40x_wrapper___024unit.h"
#include "Vcv32e40x_wrapper_if_xif.h"
#include "Vcv32e40x_wrapper_if_c_obi.h"
#include "Vcv32e40x_wrapper_if_c_obi__Tz1_TBz2.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcv32e40x_wrapper__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcv32e40x_wrapper* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcv32e40x_wrapper___024root    TOP;
    Vcv32e40x_wrapper_if_c_obi__Tz1_TBz2 TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if;
    Vcv32e40x_wrapper_if_c_obi     TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if;
    Vcv32e40x_wrapper_if_xif       TOP__cv32e40x_wrapper__DOT__ext_if;

    // CONSTRUCTORS
    Vcv32e40x_wrapper__Syms(VerilatedContext* contextp, const char* namep, Vcv32e40x_wrapper* modelp);
    ~Vcv32e40x_wrapper__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
