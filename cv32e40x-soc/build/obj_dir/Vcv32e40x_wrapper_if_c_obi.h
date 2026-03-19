// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcv32e40x_wrapper.h for the primary calling header

#ifndef VERILATED_VCV32E40X_WRAPPER_IF_C_OBI_H_
#define VERILATED_VCV32E40X_WRAPPER_IF_C_OBI_H_  // guard

#include "verilated.h"


class Vcv32e40x_wrapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcv32e40x_wrapper_if_c_obi final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ s_req;
    QData/*36:0*/ req_payload;
    QData/*32:0*/ resp_payload;

    // INTERNAL VARIABLES
    Vcv32e40x_wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcv32e40x_wrapper_if_c_obi(Vcv32e40x_wrapper__Syms* symsp, const char* v__name);
    ~Vcv32e40x_wrapper_if_c_obi();
    VL_UNCOPYABLE(Vcv32e40x_wrapper_if_c_obi);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vcv32e40x_wrapper_if_c_obi* obj);

#endif  // guard
