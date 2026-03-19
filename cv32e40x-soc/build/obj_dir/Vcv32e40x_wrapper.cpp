// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcv32e40x_wrapper__pch.h"

//============================================================
// Constructors

Vcv32e40x_wrapper::Vcv32e40x_wrapper(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcv32e40x_wrapper__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , mem_req_o{vlSymsp->TOP.mem_req_o}
    , mem_we_o{vlSymsp->TOP.mem_we_o}
    , mem_be_o{vlSymsp->TOP.mem_be_o}
    , mem_rvalid_i{vlSymsp->TOP.mem_rvalid_i}
    , mem_err_i{vlSymsp->TOP.mem_err_i}
    , mem_addr_o{vlSymsp->TOP.mem_addr_o}
    , mem_wdata_o{vlSymsp->TOP.mem_wdata_o}
    , mem_rdata_i{vlSymsp->TOP.mem_rdata_i}
    , __PVT__cv32e40x_wrapper__DOT__ext_if{vlSymsp->TOP.__PVT__cv32e40x_wrapper__DOT__ext_if}
    , __PVT__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if{vlSymsp->TOP.__PVT__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if}
    , __PVT__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if{vlSymsp->TOP.__PVT__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcv32e40x_wrapper::Vcv32e40x_wrapper(const char* _vcname__)
    : Vcv32e40x_wrapper(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcv32e40x_wrapper::~Vcv32e40x_wrapper() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcv32e40x_wrapper___024root___eval_debug_assertions(Vcv32e40x_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
void Vcv32e40x_wrapper___024root___eval_static(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___eval_initial(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___eval_settle(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___eval(Vcv32e40x_wrapper___024root* vlSelf);

void Vcv32e40x_wrapper::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcv32e40x_wrapper::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcv32e40x_wrapper___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcv32e40x_wrapper___024root___eval_static(&(vlSymsp->TOP));
        Vcv32e40x_wrapper___024root___eval_initial(&(vlSymsp->TOP));
        Vcv32e40x_wrapper___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcv32e40x_wrapper___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcv32e40x_wrapper::eventsPending() { return false; }

uint64_t Vcv32e40x_wrapper::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcv32e40x_wrapper::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcv32e40x_wrapper___024root___eval_final(Vcv32e40x_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vcv32e40x_wrapper::final() {
    Vcv32e40x_wrapper___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcv32e40x_wrapper::hierName() const { return vlSymsp->name(); }
const char* Vcv32e40x_wrapper::modelName() const { return "Vcv32e40x_wrapper"; }
unsigned Vcv32e40x_wrapper::threads() const { return 1; }
void Vcv32e40x_wrapper::prepareClone() const { contextp()->prepareClone(); }
void Vcv32e40x_wrapper::atClone() const {
    contextp()->threadPoolpOnClone();
}
