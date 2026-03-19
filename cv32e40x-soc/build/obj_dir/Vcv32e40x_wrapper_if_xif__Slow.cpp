// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcv32e40x_wrapper.h for the primary calling header

#include "Vcv32e40x_wrapper__pch.h"
#include "Vcv32e40x_wrapper__Syms.h"
#include "Vcv32e40x_wrapper_if_xif.h"

void Vcv32e40x_wrapper_if_xif___ctor_var_reset(Vcv32e40x_wrapper_if_xif* vlSelf);

Vcv32e40x_wrapper_if_xif::Vcv32e40x_wrapper_if_xif(Vcv32e40x_wrapper__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcv32e40x_wrapper_if_xif___ctor_var_reset(this);
}

void Vcv32e40x_wrapper_if_xif::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcv32e40x_wrapper_if_xif::~Vcv32e40x_wrapper_if_xif() {
}
