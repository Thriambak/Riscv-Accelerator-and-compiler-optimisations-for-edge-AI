// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcv32e40x_wrapper.h for the primary calling header

#ifndef VERILATED_VCV32E40X_WRAPPER_IF_XIF_H_
#define VERILATED_VCV32E40X_WRAPPER_IF_XIF_H_  // guard

#include "verilated.h"


class Vcv32e40x_wrapper__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcv32e40x_wrapper_if_xif final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ issue_valid;
    VlWide<6>/*168:0*/ issue_req;
    QData/*48:0*/ result;

    // INTERNAL VARIABLES
    Vcv32e40x_wrapper__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcv32e40x_wrapper_if_xif(Vcv32e40x_wrapper__Syms* symsp, const char* v__name);
    ~Vcv32e40x_wrapper_if_xif();
    VL_UNCOPYABLE(Vcv32e40x_wrapper_if_xif);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vcv32e40x_wrapper_if_xif* obj);

#endif  // guard
