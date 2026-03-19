// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcv32e40x_wrapper.h for the primary calling header

#ifndef VERILATED_VCV32E40X_WRAPPER___024UNIT_H_
#define VERILATED_VCV32E40X_WRAPPER___024UNIT_H_  // guard

#include "verilated.h"


class Vcv32e40x_wrapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcv32e40x_wrapper___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vcv32e40x_wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcv32e40x_wrapper___024unit(Vcv32e40x_wrapper__Syms* symsp, const char* v__name);
    ~Vcv32e40x_wrapper___024unit();
    VL_UNCOPYABLE(Vcv32e40x_wrapper___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
