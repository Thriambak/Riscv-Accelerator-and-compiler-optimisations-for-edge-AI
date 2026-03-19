// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcv32e40x_wrapper.h for the primary calling header

#include "Vcv32e40x_wrapper__pch.h"
#include "Vcv32e40x_wrapper_if_c_obi__Tz1_TBz2.h"

VL_ATTR_COLD void Vcv32e40x_wrapper_if_c_obi__Tz1_TBz2___ctor_var_reset(Vcv32e40x_wrapper_if_c_obi__Tz1_TBz2* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcv32e40x_wrapper_if_c_obi__Tz1_TBz2___ctor_var_reset\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->resp_payload = VL_RAND_RESET_Q(34);
}
