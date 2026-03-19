// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcv32e40x_wrapper__pch.h"
#include "Vcv32e40x_wrapper.h"
#include "Vcv32e40x_wrapper___024root.h"
#include "Vcv32e40x_wrapper___024unit.h"
#include "Vcv32e40x_wrapper_if_xif.h"
#include "Vcv32e40x_wrapper_if_c_obi.h"
#include "Vcv32e40x_wrapper_if_c_obi__Tz1_TBz2.h"

// FUNCTIONS
Vcv32e40x_wrapper__Syms::~Vcv32e40x_wrapper__Syms()
{
}

Vcv32e40x_wrapper__Syms::Vcv32e40x_wrapper__Syms(VerilatedContext* contextp, const char* namep, Vcv32e40x_wrapper* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if{this, Verilated::catName(namep, "cv32e40x_wrapper.core.m_c_obi_data_if")}
    , TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if{this, Verilated::catName(namep, "cv32e40x_wrapper.core.m_c_obi_instr_if")}
    , TOP__cv32e40x_wrapper__DOT__ext_if{this, Verilated::catName(namep, "cv32e40x_wrapper.ext_if")}
{
        // Check resources
        Verilated::stackCheck(20059);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if = &TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if;
    TOP.__PVT__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if = &TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if;
    TOP.__PVT__cv32e40x_wrapper__DOT__ext_if = &TOP__cv32e40x_wrapper__DOT__ext_if;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.__Vconfigure(true);
    TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if.__Vconfigure(true);
    TOP__cv32e40x_wrapper__DOT__ext_if.__Vconfigure(true);
}
