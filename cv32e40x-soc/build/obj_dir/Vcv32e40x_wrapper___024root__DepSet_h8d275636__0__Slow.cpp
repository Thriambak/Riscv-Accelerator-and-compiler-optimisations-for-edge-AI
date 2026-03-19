// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcv32e40x_wrapper.h for the primary calling header

#include "Vcv32e40x_wrapper__pch.h"
#include "Vcv32e40x_wrapper__Syms.h"
#include "Vcv32e40x_wrapper___024root.h"

extern const VlWide<29>/*927:0*/ Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0;
extern const VlWide<56>/*1791:0*/ Vcv32e40x_wrapper__ConstPool__CONST_hd3450429_0;

VL_ATTR_COLD void Vcv32e40x_wrapper___024root___eval_initial__TOP(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___eval_initial__TOP\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[0U] = 0U;
    vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[1U] = 0U;
    vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[2U] 
        = (0xfffffffcU & vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[2U]);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (0xfffffffdU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_q);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = (0xfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_q);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0U] = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[1U] = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[2U] = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = ((0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[3U]) 
           | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0U] 
              << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[4U] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[1U] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[5U] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[1U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[2U] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[6U] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[2U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[3U] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[7U] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[3U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[4U] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[8U] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[4U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[5U] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[9U] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[5U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[6U] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0xaU] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[6U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[7U] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0xbU] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[7U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[8U] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0xcU] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[8U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[9U] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0xdU] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[9U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0xaU] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0xeU] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0xaU] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0xbU] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0xfU] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0xbU] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0xcU] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x10U] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0xcU] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0xdU] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x11U] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0xdU] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0xeU] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x12U] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0xeU] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0xfU] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x13U] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0xfU] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x10U] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x14U] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x10U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x11U] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x15U] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x11U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x12U] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x16U] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x12U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x13U] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x17U] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x13U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x14U] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x18U] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x14U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x15U] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x19U] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x15U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x16U] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1aU] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x16U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x17U] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1bU] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x17U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x18U] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1cU] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x18U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x19U] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1dU] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x19U] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x1aU] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1eU] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x1aU] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x1bU] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1fU] 
        = ((Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x1bU] 
            >> 0x10U) | (Vcv32e40x_wrapper__ConstPool__CONST_h9fecadc7_0[0x1cU] 
                         << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U] = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U] = 0U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x37U)) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[(__Vilp1 
                                                                                + (IData)(8U))] 
            = Vcv32e40x_wrapper__ConstPool__CONST_hd3450429_0[__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffffffffffffff3ULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[2U] = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[3U] = 0U;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x37U)) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[(__Vilp2 
                                                                                + (IData)(8U))] 
            = Vcv32e40x_wrapper__ConstPool__CONST_hd3450429_0[__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcv32e40x_wrapper___024root___dump_triggers__stl(Vcv32e40x_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcv32e40x_wrapper___024root___eval_triggers__stl(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___eval_triggers__stl\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid__0)));
    vlSelfRef.__VstlTriggered.set(2U, (0U != (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                                ^ vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__0[0U]) 
                                               | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U] 
                                                  ^ 
                                                  vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__0[1U])) 
                                              | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                                                 ^ 
                                                 vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__0[2U]))));
    vlSelfRef.__VstlTriggered.set(3U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_valid) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_valid__0)));
    vlSelfRef.__VstlTriggered.set(4U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_ready__0)));
    vlSelfRef.__VstlTriggered.set(5U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid__0)));
    vlSelfRef.__VstlTriggered.set(6U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__0)));
    vlSelfRef.__VstlTriggered.set(7U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_ready) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_ready__0)));
    vlSelfRef.__VstlTriggered.set(8U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_resp_valid) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_resp_valid__0)));
    vlSelfRef.__VstlTriggered.set(9U, (0U != ((((((
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                   ^ 
                                                   vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[0U]) 
                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                     ^ 
                                                     vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[1U])) 
                                                 | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                    ^ 
                                                    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[2U])) 
                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                   ^ 
                                                   vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[3U])) 
                                               | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                  ^ 
                                                  vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[4U])) 
                                              | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                 ^ 
                                                 vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[5U]))));
    vlSelfRef.__VstlTriggered.set(0xaU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__mret_insn_id) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__mret_insn_id__0)));
    vlSelfRef.__VstlTriggered.set(0xbU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_raw_id) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_raw_id__0)));
    vlSelfRef.__VstlTriggered.set(0xcU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_en_id) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__csr_en_id__0)));
    vlSelfRef.__VstlTriggered.set(0xdU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_valid) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__if_valid__0)));
    vlSelfRef.__VstlTriggered.set(0xeU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ready) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__id_ready__0)));
    vlSelfRef.__VstlTriggered.set(0xfU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__instr_valid) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__instr_valid__0)));
    vlSelfRef.__VstlTriggered.set(0x10U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_12) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_12__0)));
    vlSelfRef.__VstlTriggered.set(0x11U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_valid) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_valid__0)));
    vlSelfRef.__VstlTriggered.set(0x12U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up__0)));
    vlSelfRef.__VstlTriggered.set(0x13U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status__0)));
    vlSelfRef.__VstlTriggered.set(0x14U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id__0)));
    vlSelfRef.__VstlTriggered.set(0x15U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step__0)));
    vlSelfRef.__VstlTriggered.set(0x16U, (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__0));
    vlSelfRef.__VstlTriggered.set(0x17U, (0U != (((
                                                   ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                     ^ 
                                                     vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[0U]) 
                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                       ^ 
                                                       vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[1U])) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                      ^ 
                                                      vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[2U])) 
                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                     ^ 
                                                     vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[3U])) 
                                                 | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                    ^ 
                                                    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[4U]))));
    vlSelfRef.__VstlTriggered.set(0x18U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_4) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_4__0)));
    vlSelfRef.__VstlTriggered.set(0x19U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_3) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_3__0)));
    vlSelfRef.__VstlTriggered.set(0x1aU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_0__0)));
    vlSelfRef.__VstlTriggered.set(0x1bU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_1) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_1__0)));
    vlSelfRef.__VstlTriggered.set(0x1cU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_2) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_2__0)));
    vlSelfRef.__VstlTriggered.set(0x1dU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_3) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_3__0)));
    vlSelfRef.__VstlTriggered.set(0x1eU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__0[0U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__0[1U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__0[2U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_valid__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_ready__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_ready__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_resp_valid__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_resp_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[0U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[1U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[2U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[3U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[4U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[5U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__mret_insn_id__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__mret_insn_id;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_raw_id__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_raw_id;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__csr_en_id__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_en_id;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__if_valid__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__id_ready__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__instr_valid__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__instr_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_12__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_12;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_valid__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[0U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[1U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[2U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[3U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[4U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_4__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_4;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_3__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_3;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_0__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_0;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_1__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_1;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_2__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_2;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_3__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_3;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
        vlSelfRef.__VstlTriggered.set(2U, 1U);
        vlSelfRef.__VstlTriggered.set(3U, 1U);
        vlSelfRef.__VstlTriggered.set(4U, 1U);
        vlSelfRef.__VstlTriggered.set(5U, 1U);
        vlSelfRef.__VstlTriggered.set(6U, 1U);
        vlSelfRef.__VstlTriggered.set(7U, 1U);
        vlSelfRef.__VstlTriggered.set(8U, 1U);
        vlSelfRef.__VstlTriggered.set(9U, 1U);
        vlSelfRef.__VstlTriggered.set(0xaU, 1U);
        vlSelfRef.__VstlTriggered.set(0xbU, 1U);
        vlSelfRef.__VstlTriggered.set(0xcU, 1U);
        vlSelfRef.__VstlTriggered.set(0xdU, 1U);
        vlSelfRef.__VstlTriggered.set(0xeU, 1U);
        vlSelfRef.__VstlTriggered.set(0xfU, 1U);
        vlSelfRef.__VstlTriggered.set(0x10U, 1U);
        vlSelfRef.__VstlTriggered.set(0x11U, 1U);
        vlSelfRef.__VstlTriggered.set(0x12U, 1U);
        vlSelfRef.__VstlTriggered.set(0x13U, 1U);
        vlSelfRef.__VstlTriggered.set(0x14U, 1U);
        vlSelfRef.__VstlTriggered.set(0x15U, 1U);
        vlSelfRef.__VstlTriggered.set(0x16U, 1U);
        vlSelfRef.__VstlTriggered.set(0x17U, 1U);
        vlSelfRef.__VstlTriggered.set(0x18U, 1U);
        vlSelfRef.__VstlTriggered.set(0x19U, 1U);
        vlSelfRef.__VstlTriggered.set(0x1aU, 1U);
        vlSelfRef.__VstlTriggered.set(0x1bU, 1U);
        vlSelfRef.__VstlTriggered.set(0x1cU, 1U);
        vlSelfRef.__VstlTriggered.set(0x1dU, 1U);
        vlSelfRef.__VstlTriggered.set(0x1eU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcv32e40x_wrapper___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*0:0*/, 1024> Vcv32e40x_wrapper__ConstPool__TABLE_hfd8811fc_0;

VL_ATTR_COLD void Vcv32e40x_wrapper___024root___stl_sequent__TOP__0(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___stl_sequent__TOP__0\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_cmp_result;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_cmp_result = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_clz_data_rev;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_clz_data_rev = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_signed;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_signed = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift = 0;
    IData/*16:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ah;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ah = 0;
    IData/*16:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_bh;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_bh = 0;
    IData/*16:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_a;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_a = 0;
    IData/*16:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_b;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_b = 0;
    VlWide<3>/*79:0*/ cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans;
    VL_ZERO_W(80, cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans);
    CData/*1:0*/ cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__wdata_offset;
    cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__wdata_offset = 0;
    CData/*4:0*/ cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause;
    cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_10;
    cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_10 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_11;
    cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_11 = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual;
    cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual = 0;
    CData/*4:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_4_3;
    __VdfgRegularize_hd87f99a1_4_3 = 0;
    SData/*9:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    VlWide<4>/*127:0*/ __Vtemp_554;
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write_lsu = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__gen_fifo__DOT__rvalid_issue 
        = (0U < (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__pending_rvalid));
    vlSelfRef.cv32e40x_wrapper__DOT__amem_we = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_bytes[0U] 
        = (0xffU & vlSelfRef.mem_rdata_i);
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_bytes[1U] 
        = (0xffU & (vlSelfRef.mem_rdata_i >> 8U));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_bytes[2U] 
        = (0xffU & (vlSelfRef.mem_rdata_i >> 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_bytes[3U] 
        = (vlSelfRef.mem_rdata_i >> 0x18U);
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__core_halt_ctrl = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_done = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_rem 
        = ((3U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                         >> 0xcU))) | (2U == (3U & 
                                              (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                               >> 0xcU))));
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_rvalid = 0U;
    if ((0U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__state)) {
        if ((1U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__state)) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__core_halt_ctrl = 1U;
        } else if ((2U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__state)) {
            if ((3U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__state)) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__core_halt_ctrl = 1U;
            }
        }
        if ((1U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__state)) {
            if ((2U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__state)) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_rvalid = 1U;
            }
        }
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[2U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[3U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[8U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[9U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xaU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xbU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xaU])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xbU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xbU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xaU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xcU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xdU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xcU])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xdU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xdU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xcU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xeU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xfU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xeU])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xfU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xfU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xeU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x10U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x11U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x10U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x11U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x11U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x10U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x12U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x13U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x12U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x13U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x13U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x12U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x14U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x15U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x14U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x15U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x15U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x14U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x16U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x17U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x16U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x17U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x17U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x16U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x18U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x19U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x18U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x19U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x19U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x18U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1aU])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1aU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1cU])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1cU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1eU])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1eU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x20U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x21U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x20U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x21U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x21U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x20U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x22U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x23U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x22U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x23U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x23U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x22U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x24U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x25U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x24U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x25U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x25U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x24U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x26U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x27U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x26U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x27U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x27U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x26U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x28U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x29U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x28U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x29U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x29U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x28U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2aU])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2aU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2cU])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2cU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2eU])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2eU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x30U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x31U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x30U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x31U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x31U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x30U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x32U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x33U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x32U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x33U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x33U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x32U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x34U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x35U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x34U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x35U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x35U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x34U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x36U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x37U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x36U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x37U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x37U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x36U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x38U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x39U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x38U])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x39U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x39U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x38U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3aU])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3aU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3cU])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3cU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3eU])))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3eU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_i_type 
        = (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                              >> 0x1bU)))) << 0xcU) 
           | (0xfffU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                        >> 0x10U)));
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_signed 
        = ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                         >> 0xcU))) | (3U == (3U & 
                                              (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                               >> 0xcU))));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__gen_fifo__DOT__fifo_read_en 
        = (1U & (~ ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__count)) 
                    | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__dec_busy) 
                       | (2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__state))))));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_gnt = 0U;
    if ((0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__state)) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_gnt = 1U;
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__comp_out 
        = (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__divisor_q 
             == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__remainder_q) 
            | ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__remainder_q 
                > vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__divisor_q) 
               ^ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__comp_inv_q))) 
           & ((~ (IData)((0U != ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                  << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                              >> 0x13U))))) 
              | (0U != vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__remainder_q)));
    vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[4U] 
        = ((0xfU & vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[4U]) 
           | ((IData)((((QData)((IData)(((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                          << 4U) | 
                                         (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                                          >> 0x1cU)))) 
                        << 5U) | (QData)((IData)((0x18U 
                                                  | (7U 
                                                     & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U])))))) 
              << 4U));
    vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[5U] 
        = (0x1ffU & (((IData)((((QData)((IData)(((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                  << 4U) 
                                                 | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                                                    >> 0x1cU)))) 
                                << 5U) | (QData)((IData)(
                                                         (0x18U 
                                                          | (7U 
                                                             & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U])))))) 
                      >> 0x1cU) | ((IData)(((((QData)((IData)(
                                                              ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                << 4U) 
                                                               | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                                                                  >> 0x1cU)))) 
                                              << 5U) 
                                             | (QData)((IData)(
                                                               (0x18U 
                                                                | (7U 
                                                                   & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U]))))) 
                                            >> 0x20U)) 
                                   << 4U)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2 
        = ((2U > (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
            ? (3U & ((IData)(1U) + (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
            : 0U);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl = 0x24c1000000090ULL;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
        = (0x7000000ULL | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
    if ((0x33U == (0x7fU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                             << 4U) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                                       >> 0x1cU))))) {
        if (((((((((8U == ((0x3f8U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                      >> 0x12U)) | 
                           (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                  >> 8U)))) | (9U == 
                                               ((0x3f8U 
                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                    >> 0x12U)) 
                                                | (7U 
                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                      >> 8U))))) 
                  | (0xaU == ((0x3f8U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                         >> 0x12U)) 
                              | (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                       >> 8U))))) | 
                 (0xbU == ((0x3f8U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                      >> 0x12U)) | 
                           (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                  >> 8U))))) | (0xcU 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                     >> 0x12U)) 
                                                 | (7U 
                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                       >> 8U))))) 
               | (0xdU == ((0x3f8U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                      >> 0x12U)) | 
                           (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                  >> 8U))))) | (0xeU 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                     >> 0x12U)) 
                                                 | (7U 
                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                       >> 8U))))) 
             | (0xfU == ((0x3f8U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                    >> 0x12U)) | (7U 
                                                  & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                     >> 8U)))))) {
            if ((8U == ((0x3f8U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                   >> 0x12U)) | (7U 
                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                    >> 8U))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x1fffffffffffefULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x200000000ULL | (0x1ffffcffffffffULL 
                                         & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
            } else if ((9U == ((0x3f8U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                          >> 0x12U)) 
                               | (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                        >> 8U))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x1fffffffffffefULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x3c0000000ULL | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
            } else if ((0xaU == ((0x3f8U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                            >> 0x12U)) 
                                 | (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                          >> 8U))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x1fffffffffffefULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x340000000ULL | (0x1ffffc3fffffffULL 
                                         & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
            } else if ((0xbU == ((0x3f8U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                            >> 0x12U)) 
                                 | (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                          >> 8U))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x1fffffffffffefULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x300000000ULL | (0x1ffffc3fffffffULL 
                                         & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
            } else if ((0xcU == ((0x3f8U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                            >> 0x12U)) 
                                 | (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                          >> 8U))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x1fffffffffffefULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x1ffc7fffffffffULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x28000000ULL | (0x1fffffc7ffffffULL 
                                        & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x40000000000ULL | (0x1f03ffffffffffULL 
                                           & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
            } else if ((0xdU == ((0x3f8U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                            >> 0x12U)) 
                                 | (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                          >> 8U))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x1fffffffffffefULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x1ffc7fffffffffULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x20000000ULL | (0x1fffffc7ffffffULL 
                                        & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x40000000000ULL | (0x1f03ffffffffffULL 
                                           & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
            } else if ((0xeU == ((0x3f8U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                            >> 0x12U)) 
                                 | (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                          >> 8U))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x1fffffffffffefULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x1ffc7fffffffffULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x38000000ULL | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x40000000000ULL | (0x1f03ffffffffffULL 
                                           & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
            } else {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x1fffffffffffefULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x1ffc7fffffffffULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x30000000ULL | (0x1fffffc7ffffffULL 
                                        & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                    = (0x40000000000ULL | (0x1f03ffffffffffULL 
                                           & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl));
            }
        } else {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl = 0x24c1000000090ULL;
        }
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl = 0x24c1000000090ULL;
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_3_1 
        = ((2U >= (3U & ((IData)(2U) - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
           && (1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                     >> (3U & ((IData)(2U) - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__res_mux 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_rem_q)
            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__remainder_q
            : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__quotient_q);
    vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
        = (((QData)((IData)(vlSelfRef.mem_rdata_i)) 
            << 2U) | (QData)((IData)(((IData)(vlSelfRef.mem_err_i) 
                                      << 1U))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
        = (IData)((0x1ffffffffULL & (((1ULL | ((QData)((IData)(
                                                               ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                 << 0xdU) 
                                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                   >> 0x13U)))) 
                                               << 1U)) 
                                      + (((QData)((IData)(
                                                          ((0x400000U 
                                                            & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                                                            ? 
                                                           (~ 
                                                            ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                              << 0xdU) 
                                                             | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                                >> 0x13U)))
                                                            : 
                                                           ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                             << 0xdU) 
                                                            | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                               >> 0x13U))))) 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                       >> 0x16U)))))) 
                                     >> 1U)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd 
        = (VL_SHIFTL_III(32,32,32, ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                     << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                 >> 0x13U)), 
                         ((0x22U == (0x3fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                              >> 0x13U)))
                           ? 1U : ((0x24U == (0x3fU 
                                              & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                 >> 0x13U)))
                                    ? 2U : 3U))) + 
           ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
             << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                         >> 0x13U)));
    if ((0x27U != (0x3fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                            >> 0x13U)))) {
        cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
            = VL_STREAML_FAST_III(32, ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                        << 0xdU) | 
                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                        >> 0x13U)), 0);
        cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
            = VL_STREAML_FAST_III(32, ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                        << 0xdU) | 
                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                        >> 0x13U)), 0);
    } else {
        cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
            = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                            >> 0x13U));
        cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
            = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                            >> 0x13U));
    }
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_bh 
        = ((0x10000U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                        & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[4U])) 
           | (0xffffU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[4U] 
                         >> 1U)));
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ah 
        = ((0x10000U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                         << 1U) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U])) 
           | (0xffffU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                         >> 1U)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb = 0U;
    vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if.resp_payload 
        = (((QData)((IData)(vlSelfRef.mem_rdata_i)) 
            << 1U) | (QData)((IData)(vlSelfRef.mem_err_i)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_rdata_id[0U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [(0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                   >> 0xbU))];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_rdata_id[1U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [(0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                   >> 0x10U))];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_0_0 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
           - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb[0U] 
        = (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] 
                    >> 4U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_en 
        = (1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                  >> 0xeU) & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
                              >> 0xbU)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__xif_waiting 
        = (IData)(((0x808U == (0x808U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])) 
                   & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__result_valid_q))));
    vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.result 
        = (((QData)((IData)((7U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__result_id_q)))) 
            << 0x2eU) | (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__result_data_q)) 
                          << 0xeU) | (QData)((IData)(
                                                     (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__wb_rd_q) 
                                                       << 9U) 
                                                      | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__wb_pending_q) 
                                                         << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
        = ((0x7ffffe1fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]) 
           | (0x7fffffe0U & (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                              << 8U) | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q) 
                                        << 5U))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb 
        = (IData)((0x810U == (0x810U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb 
        = (IData)((0x900U == (0x900U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb 
        = (IData)((0x840U == (0x840U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT____VdfgRegularize_ha59b5e9f_0_1 
        = (0x7fU & ((0x1fU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                     [2U]) << (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                     [3U] >> 2U))));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycles 
        = (7U & ((((IData)(3U) + (0x3fU & ((0x1fU & 
                                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                            [2U]) << 
                                           (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                                  [3U] 
                                                  >> 2U))))) 
                  >> 2U) - (IData)(1U)));
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
        = VL_GTS_IQQ(33, (((QData)((IData)((0x440000U 
                                            == (0x440000U 
                                                & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])))) 
                           << 0x20U) | (QData)((IData)(
                                                       ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                         << 0xdU) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                           >> 0x13U))))), 
                     (((QData)((IData)((1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                               >> 0x12U) 
                                              & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                 >> 0x16U))))) 
                       << 0x20U) | (QData)((IData)(
                                                   ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                     << 0xdU) 
                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                       >> 0x13U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int 
        = ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U])
            ? (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                 << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                             >> 0x13U)) + (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                             << 0xdU) 
                                            | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                               >> 0x13U)) 
                                           + ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__split_q)
                                               ? 4U
                                               : 0U)))
            : ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                            >> 0x13U)));
    vlSelfRef.cv32e40x_wrapper__DOT__amem_rvalid = 
        ((IData)(vlSelfRef.mem_rvalid_i) & (2U == vlSelfRef.cv32e40x_wrapper__DOT__req_sources
                                            [0U]));
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
        = (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
             << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                         >> 0x13U)) == ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                         << 0xdU) | 
                                        (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                         >> 0x13U)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp 
        = ((0x7fbU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp)) 
           | ((IData)((0x900U == (0x900U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U]))) 
              << 2U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_1_2 
        = (1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                  >> 5U) & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
                            >> 0xbU)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex 
        = (1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                  & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U]) 
                 >> 0xbU));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb 
        = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
            >> 0xbU) & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] 
                        >> 9U));
    cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual 
        = (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mie_csr_i__DOT__rdata_q 
           & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_q);
    __VdfgRegularize_hd87f99a1_4_3 = (1U & (~ (IData)(
                                                      (4U 
                                                       == 
                                                       (0x804U 
                                                        & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_jr_match 
        = (((0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                      >> 6U)) == (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                           >> 0xbU))) 
           & (0U != (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                              >> 0xbU))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb 
        = (1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
                  >> 0x13U) & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                               >> 0xbU)));
    cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_11 
        = (1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q) 
                    | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__fencei_flush_req_o))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jr_match 
        = (((0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] 
                      >> 4U)) == (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                           >> 0xbU))) 
           & (0U != (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                              >> 0xbU))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb 
        = (IData)((0xa00U == (0xa00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_valid_wb 
        = (1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
                  >> 0x14U) & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                               >> 0xbU)));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__immediate_operand 
        = (0x7ffU & ((7U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                   [0U] >> 0xcU))) ? 
                     (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                      [0U] >> 0x14U) : (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                 [0U] 
                                                 >> 0xfU))));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT____VdfgExtracted_hf911b2c9__0 
        = ((7U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                         [0U] >> 0xcU))) | ((0U == 
                                             (7U & 
                                              (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                               [0U] 
                                               >> 0xcU))) 
                                            | ((5U 
                                                == 
                                                (7U 
                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                    [0U] 
                                                    >> 0xcU))) 
                                               | (6U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                      [0U] 
                                                      >> 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[3U] = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[2U] = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[1U] = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[0U] = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set = 0U;
    if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__byte_enable_reg))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set 
            = (1U | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[0U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_bytes
            [0U];
    }
    if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__byte_enable_reg))) {
        if ((0U == (1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set 
                = (1U | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[0U] 
                = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_bytes
                [1U];
        } else if ((1U == (1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set 
                = (2U | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[1U] 
                = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_bytes
                [1U];
        } else {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[1U] = 0U;
        }
    }
    if ((4U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__byte_enable_reg))) {
        if ((0U == (3U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set 
                = (1U | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[0U] 
                = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_bytes
                [2U];
        } else if ((1U == (3U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set 
                = (2U | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[1U] 
                = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_bytes
                [2U];
        } else if ((3U == (3U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set 
                = (4U | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[2U] 
                = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_bytes
                [2U];
        } else {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[2U] = 0U;
        }
    }
    if ((8U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__byte_enable_reg))) {
        if ((4U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set))) {
            if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set))) {
                if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set 
                        = (8U | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set));
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[3U] 
                        = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_bytes
                        [3U];
                } else {
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[3U] = 0U;
                }
            } else {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[3U] = 0U;
            }
        } else if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set))) {
            if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set))) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set 
                    = (4U | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set));
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[2U] 
                    = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_bytes
                    [3U];
            } else {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[3U] = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set 
                = (2U | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[1U] 
                = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_bytes
                [3U];
        } else {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set 
                = (1U | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[0U] 
                = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_bytes
                [3U];
        }
    }
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__apu_rvalid 
        = (((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__state)) 
            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_rvalid)) 
           | (0U < (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__pending_rvalid)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__op_b_is_neg 
        = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
            >> 0x12U) & (IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_signed));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_3_6 
        = ((2U >= (3U & ((IData)(2U) - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))) 
           && (1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                     >> (3U & ((IData)(2U) - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_ext 
        = ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_type_q))
            ? ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                ? ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_sign_ext_q)
                        ? (((- (IData)((1U & (IData)(
                                                     (vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                      >> 0x21U))))) 
                            << 8U) | (0xffU & (IData)(
                                                      (vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                       >> 0x1aU))))
                        : (0xffU & (IData)((vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                            >> 0x1aU))))
                    : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_sign_ext_q)
                        ? (((- (IData)((1U & (IData)(
                                                     (vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                      >> 0x19U))))) 
                            << 8U) | (0xffU & (IData)(
                                                      (vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                       >> 0x12U))))
                        : (0xffU & (IData)((vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                            >> 0x12U)))))
                : ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_sign_ext_q)
                        ? (((- (IData)((1U & (IData)(
                                                     (vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                      >> 0x11U))))) 
                            << 8U) | (0xffU & (IData)(
                                                      (vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                       >> 0xaU))))
                        : (0xffU & (IData)((vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                            >> 0xaU))))
                    : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_sign_ext_q)
                        ? (((- (IData)((1U & (IData)(
                                                     (vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                      >> 9U))))) 
                            << 8U) | (0xffU & (IData)(
                                                      (vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                       >> 2U))))
                        : (0xffU & (IData)((vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                            >> 2U))))))
            : ((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_type_q))
                ? ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_sign_ext_q)
                            ? (((- (IData)((1U & (IData)(
                                                         (vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                          >> 9U))))) 
                                << 0x10U) | ((0xff00U 
                                              & ((IData)(
                                                         (vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                          >> 2U)) 
                                                 << 8U)) 
                                             | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_q 
                                                >> 0x18U)))
                            : ((0xff00U & ((IData)(
                                                   (vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                    >> 2U)) 
                                           << 8U)) 
                               | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_q 
                                  >> 0x18U))) : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_sign_ext_q)
                                                  ? 
                                                 (((- (IData)(
                                                              (1U 
                                                               & (IData)(
                                                                         (vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                                          >> 0x21U))))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & (IData)(
                                                               (vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                                >> 0x12U))))
                                                  : 
                                                 (0xffffU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                             >> 0x12U)))))
                    : ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_sign_ext_q)
                            ? (((- (IData)((1U & (IData)(
                                                         (vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                          >> 0x19U))))) 
                                << 0x10U) | (0xffffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                        >> 0xaU))))
                            : (0xffffU & (IData)((vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                  >> 0xaU))))
                        : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_sign_ext_q)
                            ? (((- (IData)((1U & (IData)(
                                                         (vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                          >> 0x11U))))) 
                                << 0x10U) | (0xffffU 
                                             & (IData)(
                                                       (vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                        >> 2U))))
                            : (0xffffU & (IData)((vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                  >> 2U))))))
                : ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? (((IData)((vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                     >> 2U)) << 8U) 
                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_q 
                              >> 0x18U)) : (((IData)(
                                                     (vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                      >> 2U)) 
                                             << 0x10U) 
                                            | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_q 
                                               >> 0x10U)))
                    : ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? (((IData)((vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                     >> 2U)) << 0x18U) 
                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_q 
                              >> 8U)) : (IData)((vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                                                 >> 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffffeU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (1U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                    & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffffdU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (2U & ((0xfffffffeU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                    ^ (0xfffffffeU & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                      & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                         << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffffdU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (2U & ((0xfffffffeU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                    ^ (0xfffffffeU & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                       << 1U) & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffffbU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (4U & ((0xfffffffcU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                    ^ (0xfffffffcU & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                      & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                         << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffffbU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (4U & ((0xfffffffcU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                    ^ (0xfffffffcU & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                       & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                      << 1U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffffbU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (4U & ((0xfffffffcU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                    ^ (0xfffffffcU & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                       << 2U) & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffff7U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (8U & ((0xfffffff8U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                    ^ (0xfffffff8U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                      & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                         << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffff7U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (8U & ((0xfffffff8U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                    ^ (0xfffffff8U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                       << 1U) & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffff7U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (8U & ((0xfffffff8U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                    ^ (0xfffffff8U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                       << 2U) & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffff7U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (8U & ((0xfffffff8U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                    ^ (0xfffffff8U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                       << 3U) & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffefU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10U & ((0xfffffff0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xfffffff0U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                         & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                            << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffefU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10U & ((0xfffffff0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xfffffff0U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 1U) & 
                                         (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffefU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10U & ((0xfffffff0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xfffffff0U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                         << 2U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffefU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10U & ((0xfffffff0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xfffffff0U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 3U) & 
                                         (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffefU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10U & ((0xfffffff0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xfffffff0U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 4U) & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffdfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20U & ((0xffffffe0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffe0U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                         & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                            << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffdfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20U & ((0xffffffe0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffe0U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 1U) & 
                                         (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffdfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20U & ((0xffffffe0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffe0U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 2U) & 
                                         (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffdfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20U & ((0xffffffe0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffe0U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 3U) & 
                                         (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffdfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20U & ((0xffffffe0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffe0U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 4U) & 
                                         (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffdfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20U & ((0xffffffe0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffe0U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 5U) & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffbfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40U & ((0xffffffc0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffc0U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                         & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                            << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffbfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40U & ((0xffffffc0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffc0U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 1U) & 
                                         (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffbfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40U & ((0xffffffc0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffc0U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 2U) & 
                                         (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffbfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40U & ((0xffffffc0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffc0U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                         << 3U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffbfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40U & ((0xffffffc0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffc0U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 4U) & 
                                         (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffbfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40U & ((0xffffffc0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffc0U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 5U) & 
                                         (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffffbfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40U & ((0xffffffc0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffffc0U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 6U) & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffff7fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80U & ((0xffffff80U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffff80U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                         & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                            << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffff7fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80U & ((0xffffff80U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffff80U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 1U) & 
                                         (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffff7fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80U & ((0xffffff80U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffff80U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 2U) & 
                                         (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffff7fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80U & ((0xffffff80U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffff80U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 3U) & 
                                         (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffff7fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80U & ((0xffffff80U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffff80U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 4U) & 
                                         (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffff7fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80U & ((0xffffff80U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffff80U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 5U) & 
                                         (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffff7fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80U & ((0xffffff80U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffff80U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 6U) & 
                                         (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                          << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffff7fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80U & ((0xffffff80U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                       ^ (0xffffff80U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          << 7U) & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffeffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100U & ((0xffffff00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xffffff00U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                             << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffeffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100U & ((0xffffff00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xffffff00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 1U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffeffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100U & ((0xffffff00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xffffff00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 2U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffeffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100U & ((0xffffff00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xffffff00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 3U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffeffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100U & ((0xffffff00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xffffff00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                          << 4U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffeffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100U & ((0xffffff00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xffffff00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 5U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffeffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100U & ((0xffffff00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xffffff00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 6U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffeffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100U & ((0xffffff00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xffffff00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 7U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffeffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100U & ((0xffffff00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xffffff00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 8U) & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                             << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 1U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 2U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 3U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 4U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 5U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 6U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 7U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 8U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffdffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200U & ((0xfffffe00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffe00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 9U) & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                             << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 1U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 2U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 3U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 4U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                          << 5U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 6U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 7U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 8U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 9U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffffbffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400U & ((0xfffffc00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffffc00U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 0xaU) 
                                          & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                          & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                             << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 1U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 2U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 3U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 4U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 5U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 6U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 7U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 8U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 9U) & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                           << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 0xaU) 
                                          & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                             << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffff7ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800U & ((0xfffff800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                        ^ (0xfffff800U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           << 0xbU) 
                                          & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 1U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 2U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 3U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 4U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 5U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                           << 6U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 7U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 8U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 9U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xaU) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xbU) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffefffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000U & ((0xfffff000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xfffff000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xcU) 
                                           & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xdU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 1U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 2U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 3U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 4U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 5U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 6U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 7U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 8U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 9U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xaU) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xbU) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xcU) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffdfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000U & ((0xffffe000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffe000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xdU) 
                                           & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xeU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 1U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xdU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 2U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 3U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 4U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 5U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 6U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                           << 7U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 8U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 9U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xaU) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xbU) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xcU) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xdU) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffffbfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000U & ((0xffffc000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffffc000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xeU) 
                                           & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xfU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 1U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xeU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 2U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xdU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 3U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 4U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 5U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 6U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 7U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 8U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 9U) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xaU) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xbU) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xcU) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xdU) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xeU) 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                              << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000U & ((0xffff8000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                         ^ (0xffff8000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            << 0xfU) 
                                           & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x10U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 1U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xfU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 2U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xeU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 3U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xdU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 4U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 5U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 6U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 7U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                            << 8U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 9U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xaU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xbU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xcU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xdU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xeU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xfU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000U & ((0xffff0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xffff0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x10U) 
                                            & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x11U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 1U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x10U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 2U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xfU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 3U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xeU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 4U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xdU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 5U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 6U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 7U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 8U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 9U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xaU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xbU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xcU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xdU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xeU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xfU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x10U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000U & ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffe0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x11U) 
                                            & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x12U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 1U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x11U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 2U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x10U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 3U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xfU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 4U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xeU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 5U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xdU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 6U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 7U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 8U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                            << 9U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xaU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xbU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xcU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xdU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xeU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xfU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x10U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x11U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000U & ((0xfffc0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfffc0000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x12U) 
                                            & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x13U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 1U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x12U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 2U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x11U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 3U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0x10U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 4U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xfU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 5U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xeU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 6U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xdU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 7U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 8U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 9U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xaU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xbU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xcU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xdU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xeU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0xfU) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x10U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x11U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x12U) 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                               << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000U & ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                          ^ (0xfff80000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             << 0x13U) 
                                            & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x14U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 1U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x13U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 2U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x12U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 3U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x11U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 4U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x10U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 5U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xfU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 6U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xeU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 7U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xdU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 8U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 9U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                             << 0xaU)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xbU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xcU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xdU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xeU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xfU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x10U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x11U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x12U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x13U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x100000U & ((0xfff00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xfff00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x14U) 
                                             & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x15U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 1U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x14U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 2U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x13U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 3U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x12U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 4U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x11U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 5U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x10U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 6U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xfU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 7U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xeU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 8U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xdU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 9U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xaU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xbU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xcU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xdU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xeU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xfU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x10U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x11U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x12U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x13U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x14U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x200000U & ((0xffe00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffe00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x15U) 
                                             & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x16U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 1U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x15U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 2U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x14U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 3U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x13U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 4U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x12U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 5U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x11U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 6U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x10U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 7U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xfU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 8U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xeU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 9U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xdU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xaU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                             << 0xbU)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xcU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xdU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xeU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xfU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x10U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x11U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x12U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x13U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x14U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x15U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x400000U & ((0xffc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xffc00000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x16U) 
                                             & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x17U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 1U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x16U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 2U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x15U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 3U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x14U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 4U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x13U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 5U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x12U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 6U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x11U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 7U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0x10U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 8U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xfU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 9U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xeU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xaU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xdU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xbU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xcU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xdU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xeU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0xfU) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x10U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x11U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x12U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x13U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x14U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x15U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x16U) 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x800000U & ((0xff800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                           ^ (0xff800000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              << 0x17U) 
                                             & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x18U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 1U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x17U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 2U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x16U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 3U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x15U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 4U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x14U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 5U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x13U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 6U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x12U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 7U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x11U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 8U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x10U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 9U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xfU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xaU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xeU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xbU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xdU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                              << 0xcU)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xdU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xeU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xfU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x10U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x11U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x12U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x13U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x14U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x15U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x16U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x17U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x1000000U & ((0xff000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xff000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x18U) 
                                              & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x19U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 1U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x18U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 2U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x17U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 3U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x16U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 4U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x15U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 5U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x14U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 6U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x13U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 7U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x12U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 8U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x11U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 9U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x10U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xaU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xfU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xbU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xeU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xcU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xdU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xdU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xeU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xfU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x10U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x11U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x12U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x13U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x14U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x15U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x16U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x17U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x18U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x2000000U & ((0xfe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfe000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x19U) 
                                              & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x1aU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 1U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x19U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 2U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x18U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 3U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x17U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 4U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x16U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 5U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x15U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 6U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x14U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 7U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x13U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 8U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x12U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 9U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x11U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xaU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x10U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xbU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xfU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xcU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xeU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                              << 0xdU)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xeU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xfU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x10U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x11U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x12U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x13U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x14U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x15U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x16U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x17U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x18U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x19U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x4000000U & ((0xfc000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xfc000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x1aU) 
                                              & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x1bU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 1U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x1aU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 2U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x19U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 3U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x18U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 4U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x17U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 5U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x16U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 6U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x15U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 7U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x14U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 8U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x13U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 9U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x12U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xaU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x11U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xbU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0x10U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xcU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xfU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xdU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xeU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xeU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xdU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0xfU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x10U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x11U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x12U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x13U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x14U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x15U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x16U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x17U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x18U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x19U) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x1aU) 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                 << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x8000000U & ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                            ^ (0xf8000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               << 0x1bU) 
                                              & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1cU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 1U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1bU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 2U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1aU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 3U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x19U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 4U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x18U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 5U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x17U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 6U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x16U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 7U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x15U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 8U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x14U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 9U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x13U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xaU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x12U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xbU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x11U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xcU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x10U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xdU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xfU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                               << 0xeU)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xfU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xdU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x10U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x11U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x12U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x13U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x14U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x15U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x16U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x17U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x18U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x19U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1aU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1bU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x10000000U & ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xf0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1cU) 
                                               & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1dU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 1U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1cU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 2U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1bU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 3U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1aU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 4U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x19U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 5U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x18U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 6U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x17U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 7U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x16U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 8U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x15U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 9U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x14U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xaU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x13U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xbU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x12U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xcU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x11U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xdU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x10U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xeU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xfU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xfU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xeU))))));
    if ((0x1000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
        if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                      >> 0x17U)))) {
            if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                          >> 0x16U)))) {
                if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                              >> 0x14U)))) {
                    if ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb 
                            = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                            >> 0x13U));
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                         >> 0x17U)))) {
        if ((0x400000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
            if ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                              >> 0x14U)))) {
                    if ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb 
                            = (- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                >> 0x12U))));
                    }
                }
            }
        }
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x10U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xdU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x11U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x12U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x13U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x14U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x15U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x16U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x17U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x18U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x19U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1aU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1bU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1cU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x20000000U & ((0xe0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xe0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1dU) 
                                               & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1eU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 1U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1dU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 2U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1cU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 3U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1bU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 4U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1aU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 5U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x19U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 6U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x18U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 7U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x17U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 8U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x16U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 9U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x15U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xaU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x14U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xbU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x13U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xcU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x12U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xdU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x11U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xeU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x10U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b) 
                                               << 0xfU)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x10U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xeU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x11U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xdU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x12U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x13U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x14U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x15U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x16U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x17U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x18U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x19U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1aU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1bU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1cU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1dU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x40000000U & ((0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0xc0000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1eU) 
                                               & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1fU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 1U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1eU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 2U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1dU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 3U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1cU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 4U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1bU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 5U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x1aU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 6U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x19U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 7U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x18U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 8U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x17U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 9U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x16U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xaU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x15U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xbU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x14U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xcU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x13U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xdU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x12U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xeU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x11U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0xfU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0x10U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x10U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xfU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x11U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xeU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x12U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xdU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x13U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xcU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x14U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xbU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x15U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 0xaU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x16U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 9U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x17U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 8U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x18U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 7U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x19U) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 6U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1aU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 5U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1bU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 4U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1cU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 3U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1dU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 2U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1eU) 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b 
                                                  << 1U))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
           | (0x80000000U & ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result) 
                             ^ (0x80000000U & ((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_a 
                                                << 0x1fU) 
                                               & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_op_b)))));
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_b 
        = (0xffffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[4U] 
                       << 0xfU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                   >> 0x11U)));
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_a 
        = (0xffffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                       << 0xfU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[4U] 
                                   >> 0x11U)));
    if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state)))) {
            cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift = 1U;
        }
        cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_b 
            = ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state))
                ? cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_bh
                : (0xffffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[4U] 
                               << 0xfU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                           >> 0x11U))));
        cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_a 
            = cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_ah;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state)))) {
            if ((0x20000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U])) {
                cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift = 1U;
            }
        }
        if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state))) {
            cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_b 
                = cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_bh;
            cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_a 
                = (0xffffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                               << 0xfU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[4U] 
                                           >> 0x11U)));
        }
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_3_1)
            ? ((0x68U >= ((IData)(3U) + (0x7fU & ((IData)(0x23U) 
                                                  * 
                                                  ((IData)(2U) 
                                                   - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                ? (((0U == (0x1fU & ((IData)(3U) + 
                                     (0x7fU & ((IData)(0x23U) 
                                               * ((IData)(2U) 
                                                  - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))
                     ? 0U : (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                             (((IData)(0x22U) + (0x7fU 
                                                 & ((IData)(0x23U) 
                                                    * 
                                                    ((IData)(2U) 
                                                     - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(3U) 
                                                + (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      ((IData)(2U) 
                                                       - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))))) 
                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                      (((IData)(3U) + (0x7fU & ((IData)(0x23U) 
                                                * ((IData)(2U) 
                                                   - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                       >> 5U)] >> (0x1fU & ((IData)(3U) 
                                            + (0x7fU 
                                               & ((IData)(0x23U) 
                                                  * 
                                                  ((IData)(2U) 
                                                   - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))))
                : 0U) : (IData)((vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if.resp_payload 
                                 >> 1U)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_aa 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_en)
            ? ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                            >> 0x13U)) : ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                           << 0xdU) 
                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                             >> 0x13U)));
    if ((0x1000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
        if ((0x800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
            if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                          >> 0x15U)))) {
                if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                              >> 0x14U)))) {
                    if ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_aa = 1U;
                    }
                }
            }
        } else if ((0x400000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
            if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                          >> 0x15U)))) {
                if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                              >> 0x14U)))) {
                    if ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_aa = 1U;
                    }
                }
            }
        }
    }
    if (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result 
            = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                            >> 0x13U));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result 
            = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                            >> 0x13U));
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result 
            = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                            >> 0x13U));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result 
            = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                            >> 0x13U));
    }
    cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__wdata_offset 
        = (3U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int 
                 - ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
                     << 4U) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
                               >> 0x1cU))));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_addr_inc = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycles_inc = 0U;
    if (((((((((0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state) 
               | (1U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
              | (2U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
             | (3U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
            | (4U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
           | (5U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
          | (6U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
         | (7U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state))) {
        if ((0U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
            if ((1U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                if ((2U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                    if ((3U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                        if ((4U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write_lsu = 1U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_done = 1U;
                        } else if ((5U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                            if ((6U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_done = 1U;
                            }
                        }
                        if ((4U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                            if ((5U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                                vlSelfRef.cv32e40x_wrapper__DOT__amem_we = 1U;
                            }
                            if ((5U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                                if ((6U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                                    if (vlSelfRef.cv32e40x_wrapper__DOT__amem_rvalid) {
                                        if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycles_cnt) 
                                             != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycles))) {
                                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycles_inc = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((3U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                        if (vlSelfRef.cv32e40x_wrapper__DOT__amem_rvalid) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_addr_inc = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_hc2f9a3b9__0 
        = ((IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
           | (IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_1_2)
            ? (0xfffU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                         >> 0x13U)) : 0U);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__irq_id_ctrl 
        = ((cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual 
            >> 0x1fU) ? 0x1fU : ((0x40000000U & cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual)
                                  ? 0x1eU : ((0x20000000U 
                                              & cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual)
                                              ? 0x1dU
                                              : ((0x10000000U 
                                                  & cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual)
                                                  ? 0x1cU
                                                  : 
                                                 ((0x8000000U 
                                                   & cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual)
                                                   ? 0x1bU
                                                   : 
                                                  ((0x4000000U 
                                                    & cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual)
                                                    ? 0x1aU
                                                    : 
                                                   ((0x2000000U 
                                                     & cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual)
                                                     ? 0x19U
                                                     : 
                                                    ((0x1000000U 
                                                      & cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual)
                                                      ? 0x18U
                                                      : 
                                                     ((0x800000U 
                                                       & cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual)
                                                       ? 0x17U
                                                       : 
                                                      ((0x400000U 
                                                        & cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual)
                                                        ? 0x16U
                                                        : 
                                                       ((0x200000U 
                                                         & cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual)
                                                         ? 0x15U
                                                         : 
                                                        ((0x100000U 
                                                          & cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual)
                                                          ? 0x14U
                                                          : 
                                                         ((0x80000U 
                                                           & cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual)
                                                           ? 0x13U
                                                           : 
                                                          ((0x40000U 
                                                            & cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual)
                                                            ? 0x12U
                                                            : 
                                                           ((0x20000U 
                                                             & cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual)
                                                             ? 0x11U
                                                             : 
                                                            ((0x10000U 
                                                              & cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual)
                                                              ? 0x10U
                                                              : 
                                                             ((0x800U 
                                                               & cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual)
                                                               ? 0xbU
                                                               : 
                                                              ((8U 
                                                                & cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual)
                                                                ? 3U
                                                                : 7U))))))))))))))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_nmi 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
           & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
              & (IData)(__VdfgRegularize_hd87f99a1_4_3)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_interrupt 
        = ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
           & ((0U != cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual) 
              & ((IData)(__VdfgRegularize_hd87f99a1_4_3) 
                 & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                    >> 3U))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_13 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
           & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
              & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q 
                 >> 0xfU)));
    cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_10 
        = (1U & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_valid_wb)) 
                 & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__obi_data_req_q))));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr 
        = (0x1fU & ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                  [3U] >> 2U))) ? (
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                    [0U] 
                                                    >> 0x14U) 
                                                   + (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cycle_count))
                     : ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                      [3U] >> 2U)))
                         ? ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                             [0U] >> 0x14U) + ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cycle_count) 
                                               << 1U))
                         : ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                             [0U] >> 0x14U) + (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cycle_count)))));
    if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                      [3U] >> 2U)))) {
        __Vtemp_554[2U] = (IData)((((QData)((IData)(
                                                    (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                     [
                                                     (1U 
                                                      | (0x1eU 
                                                         & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr)))] 
                                                     >> 0x10U))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                                 [
                                                                 (1U 
                                                                  | (0x1eU 
                                                                     & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr)))])))));
        __Vtemp_554[3U] = (IData)(((((QData)((IData)(
                                                     (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                      [
                                                      (1U 
                                                       | (0x1eU 
                                                          & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr)))] 
                                                      >> 0x10U))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                                  [
                                                                  (1U 
                                                                   | (0x1eU 
                                                                      & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr)))])))) 
                                   >> 0x20U));
    } else if ((2U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        __Vtemp_554[2U] = (IData)((((QData)((IData)(
                                                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                    [
                                                    (3U 
                                                     | (0x1cU 
                                                        & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr)))])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                                [
                                                                (2U 
                                                                 | (0x1dU 
                                                                    & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr)))]))));
        __Vtemp_554[3U] = (IData)(((((QData)((IData)(
                                                     vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                     [
                                                     (3U 
                                                      | (0x1cU 
                                                         & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr)))])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                                 [
                                                                 (2U 
                                                                  | (0x1dU 
                                                                     & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr)))]))) 
                                   >> 0x20U));
    } else {
        __Vtemp_554[2U] = 0U;
        __Vtemp_554[3U] = 0U;
    }
    if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                      [3U] >> 2U)))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_addr 
            = (0x1fU & ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                         [0U] >> 0xfU) + (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cycle_count)));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U] 
            = (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
               [cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr]);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U] 
            = (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                        [cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr] 
                        >> 8U));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U] 
            = (IData)((((QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                         [cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr] 
                                         >> 0x18U))) 
                        << 0x20U) | (QData)((IData)(
                                                    (0xffU 
                                                     & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                        [cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr] 
                                                        >> 0x10U))))));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U] 
            = (IData)(((((QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                          [cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr] 
                                          >> 0x18U))) 
                         << 0x20U) | (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                         [cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr] 
                                                         >> 0x10U))))) 
                       >> 0x20U));
    } else {
        if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                          [3U] >> 2U)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_addr 
                = (0x1fU & ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                             [0U] >> 0xfU) + ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cycle_count) 
                                              << 1U)));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U] 
                = (0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                   [cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr]);
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U] 
                = (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                   [cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr] 
                   >> 0x10U);
        } else {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_addr 
                = (0x1fU & ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                             [0U] >> 0xfU) + (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cycle_count)));
            if ((2U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                              [3U] >> 2U)))) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U] 
                    = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                    [cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr];
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U] 
                    = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                    [(1U | (0x1eU & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_addr)))];
            } else {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U] = 0U;
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U] = 0U;
            }
        }
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U] 
            = __Vtemp_554[2U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U] 
            = __Vtemp_554[3U];
    }
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__max_vl 
        = (0x1fU & ((7U & ((7U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                            [4U]) >> (7U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__immediate_operand) 
                                            >> 2U)))) 
                    << (3U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__immediate_operand))));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_addr2 
        = (2U | (0x1dU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_addr)));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data1 
        = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
        [(1U | (0x1eU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_addr)))];
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data0 
        = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
        [vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_addr];
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
        = ((0x1000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U])
            ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__op_b_is_neg)
                ? (1U | ((IData)((0xffffffffULL & (
                                                   VL_SHIFTL_QQI(33,33,32, 
                                                                 (~ (QData)((IData)(
                                                                                ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                                << 0xdU) 
                                                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                                                >> 0x13U))))), 1U) 
                                                   >> 1U))) 
                         << 1U)) : ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                     << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                 >> 0x13U)))
            : ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                            >> 0x13U)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT____VdfgRegularize_h6404b41a_0_2 
        = ((IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_signed) 
           & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
               >> 0x12U) ^ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__op_b_is_neg)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__rf_wdata_wb 
        = ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U])
            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_ext
            : ((8U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])
                ? (IData)((vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.result 
                           >> 0xeU)) : ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] 
                                         << 0x1cU) 
                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                           >> 4U))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__result 
        = (0x3ffffffffULL & (VL_MULS_QQQ(34, (0x3ffffffffULL 
                                              & VL_EXTENDS_QI(34,32, 
                                                              ((0x20000U 
                                                                & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U])
                                                                ? 
                                                               (((- (IData)(
                                                                            (1U 
                                                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_a 
                                                                                >> 0x10U)))) 
                                                                 << 0x10U) 
                                                                | (0xffffU 
                                                                   & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_a))
                                                                : 
                                                               ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                                                                 << 0xfU) 
                                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[4U] 
                                                                   >> 0x11U))))), 
                                         (0x3ffffffffULL 
                                          & VL_EXTENDS_QI(34,32, 
                                                          ((0x20000U 
                                                            & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U])
                                                            ? 
                                                           (((- (IData)(
                                                                        (1U 
                                                                         & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_b 
                                                                            >> 0x10U)))) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_b))
                                                            : 
                                                           ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[4U] 
                                                             << 0xfU) 
                                                            | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                                               >> 0x11U)))))) 
                             + VL_EXTENDS_QQ(34,33, vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr;
    if ((2U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n 
            = ((3U != (3U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                             >> 0x10U))) ? (0xfffffffcU 
                                            & ((IData)(4U) 
                                               + (0xfffffffcU 
                                                  & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))
                : (2U | (0xfffffffcU & ((IData)(4U) 
                                        + (0xfffffffcU 
                                           & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
            = ((2U > (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
                ? (3U & ((IData)(1U) + (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                : 0U);
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n 
            = ((3U != (3U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr))
                ? (2U | (0xfffffffcU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q))
                : (0xfffffffcU & ((IData)(4U) + (0xfffffffcU 
                                                 & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q))));
        if ((3U == (3U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
                = ((2U > (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
                    ? (3U & ((IData)(1U) + (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                    : 0U);
        }
    }
    cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans[0U] 
        = (7U | (0xffffffe0U & cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans[0U]));
    cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans[0U] 
        = ((0x1fU & cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans[0U]) 
           | (((2U & (IData)(cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__wdata_offset))
                ? ((1U & (IData)(cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__wdata_offset))
                    ? ((0xff000000U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                                       << 5U)) | (0xffffffU 
                                                  & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                      << 5U) 
                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                                                        >> 0x1bU))))
                    : ((0xffff0000U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                        << 0x1dU) | 
                                       (0x1fff0000U 
                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                                           >> 3U)))) 
                       | (0xffffU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                     >> 3U)))) : ((1U 
                                                   & (IData)(cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__wdata_offset))
                                                   ? 
                                                  ((0xffffff00U 
                                                    & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                        << 0x15U) 
                                                       | (0x1fff00U 
                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                                                             >> 0xbU)))) 
                                                   | (0xffU 
                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                         >> 0xbU)))
                                                   : 
                                                  ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                    << 0xdU) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                                                      >> 0x13U)))) 
              << 5U));
    cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xffffffe0U & cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (((2U & (IData)(cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__wdata_offset))
                ? ((1U & (IData)(cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__wdata_offset))
                    ? ((0xff000000U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                                       << 5U)) | (0xffffffU 
                                                  & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                      << 5U) 
                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                                                        >> 0x1bU))))
                    : ((0xffff0000U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                        << 0x1dU) | 
                                       (0x1fff0000U 
                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                                           >> 3U)))) 
                       | (0xffffU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                     >> 3U)))) : ((1U 
                                                   & (IData)(cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__wdata_offset))
                                                   ? 
                                                  ((0xffffff00U 
                                                    & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                        << 0x15U) 
                                                       | (0x1fff00U 
                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                                                             >> 0xbU)))) 
                                                   | (0xffU 
                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                         >> 0xbU)))
                                                   : 
                                                  ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                    << 0xdU) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                                                      >> 0x13U)))) 
              >> 0x1bU));
    cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xfffffe1fU & cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (((0U == (3U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                              << 1U) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
                                        >> 0x1fU))))
                ? ((2U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int)
                    ? ((1U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int)
                        ? 8U : 4U) : ((1U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int)
                                       ? 2U : 1U)) : 
               ((1U == (3U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                               << 1U) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
                                         >> 0x1fU))))
                 ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__split_q)
                     ? 1U : ((2U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int)
                              ? ((1U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int)
                                  ? 8U : 0xcU) : ((1U 
                                                   & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int)
                                                   ? 6U
                                                   : 3U)))
                 : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__split_q)
                     ? ((2U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int)
                         ? ((1U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int)
                             ? 7U : 3U) : ((1U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int)
                                            ? 1U : 0U))
                     : ((2U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int)
                         ? ((1U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int)
                             ? 8U : 0xcU) : ((1U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int)
                                              ? 0xeU
                                              : 0xfU))))) 
              << 5U));
    cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xffff01ffU & cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (0xfffffe00U & ((0xfc00U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
                                         >> 0xcU)) 
                             | (0x200U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                          << 8U)))));
    cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xffffU & cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__split_q)
                ? (0xfffffffcU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int)
                : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int) 
              << 0x10U));
    cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans[2U] 
        = (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__split_q)
             ? (0xfffffffcU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int)
             : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int) 
           >> 0x10U);
    __Vtableidx2 = (((0x200U & ((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
                                << 9U)) | ((0x100U 
                                            & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_hc2f9a3b9__0)) 
                                               << 8U)) 
                                           | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_hc2f9a3b9__0) 
                                              << 7U))) 
                    | ((0x7eU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                 >> 0x12U)) | (IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)));
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_cmp_result 
        = Vcv32e40x_wrapper__ConstPool__TABLE_hfd8811fc_0
        [__Vtableidx2];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 0U;
    if ((0x800U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x400U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                          >> 9U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                              >> 8U)))) {
                    if ((0x80U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                                } else if ((8U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                                } else if ((4U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                                } else if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                                } else if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                         >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                            } else if ((8U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                            } else if ((4U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                            } else if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                            } else if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x200U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x100U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x80U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                            } else if ((8U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                            } else if ((4U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                            } else if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                            } else if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                        } else if ((8U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                        } else if ((4U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                        } else if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                        } else if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_debug 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb) 
           | (((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_req_q)) 
              | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_13) 
                 | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_allowed 
        = ((IData)(cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_11) 
           & (IData)(cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_10));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed 
        = ((IData)(cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_10) 
           & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
              & (IData)(cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_11)));
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((((((cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                << 0x1fU) | (0x40000000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                            << 0x1dU))) 
              | ((0x20000000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                 << 0x1bU)) | (0x10000000U 
                                               & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                                  << 0x19U)))) 
             | (((0x8000000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                << 0x17U)) | (0x4000000U 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                                 << 0x15U))) 
                | ((0x2000000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                  << 0x13U)) | (0x1000000U 
                                                & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                                   << 0x11U))))) 
            | ((((0x800000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                               << 0xfU)) | (0x400000U 
                                            & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                               << 0xdU))) 
                | ((0x200000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                 << 0xbU)) | (0x100000U 
                                              & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                                 << 9U)))) 
               | (((0x80000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                << 7U)) | (0x40000U 
                                           & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                              << 5U))) 
                  | ((0x20000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                  << 3U)) | (0x10000U 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                                << 1U)))))) 
           | (((((0x8000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                             >> 1U)) | (0x4000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                                   >> 3U))) 
                | ((0x2000U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                               >> 5U)) | (0x1000U & 
                                          (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                           >> 7U)))) 
               | (((0x800U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                              >> 9U)) | (0x400U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                                   >> 0xbU))) 
                  | ((0x200U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                >> 0xdU)) | (0x100U 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                                >> 0xfU))))) 
              | ((((0x80U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                             >> 0x11U)) | (0x40U & 
                                           (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                            >> 0x13U))) 
                  | ((0x20U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                               >> 0x15U)) | (0x10U 
                                             & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                                >> 0x17U)))) 
                 | (((8U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                            >> 0x19U)) | (4U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                                >> 0x1bU))) 
                    | ((2U & (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                              >> 0x1dU)) | (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__alu_clz_data 
                                            >> 0x1fU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_en)
            ? cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_clz_data_rev
            : ((0x28U == (0x3fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                   >> 0x13U))) ? ((
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                   << 0xdU) 
                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                     >> 0x13U))
                : VL_STREAML_FAST_III(32, ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                            << 0xdU) 
                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                              >> 0x13U)), 0)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb[0U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__rf_wdata_wb;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc_res 
        = (0x1ffffffffULL & ((IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift)
                              ? (0x3ffffffffULL & VL_SHIFTRS_QQI(34,34,32, vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__result, 0x10U))
                              : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__result));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans[0U] 
        = cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans[0U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans[1U] 
        = cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans[1U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans[2U] 
        = cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans[2U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans[0U] 
        = (0xffffffe7U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans[0U]);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__instr_meta_n 
        = (0xfU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
                   >> 0xcU));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__instr_meta_n 
        = ((0xdU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__instr_meta_n)) 
           | ((IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_cmp_result) 
              << 1U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex 
        = ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q)) 
           & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
               >> 0x14U) & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
                             >> 0xbU) & (IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_cmp_result))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U] 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U]) 
           | (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_debug) 
               | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
              << 0x1fU));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
        = ((0x7ffffffeU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]) 
           | (0x7fffffffU & ((1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                    >> 2U)) | (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_debug) 
                                                | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                                               >> 1U))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
        = ((0x7ffffff1U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]) 
           | (0x7ffffffeU & ((8U & (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                                     << 3U) | ((0xfffffff8U 
                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q 
                                                   << 1U)) 
                                               | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb) 
                                                  << 3U)))) 
                             | ((4U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                       << 2U)) | (2U 
                                                  & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h3ec76060__0 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_debug) 
           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_allowed));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h75e42caa__0 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_nmi) 
           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hb14c1f80__0 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_interrupt) 
           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed));
    if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[0U];
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[1U];
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[2U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[2U];
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans[0U];
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans[1U];
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[2U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans[2U];
    }
    cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)))) {
                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h75e42caa__0)))) {
                    if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h3ec76060__0)))) {
                        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hb14c1f80__0) {
                            cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause 
                                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__irq_id_ctrl;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
        = ((0x7fe0ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]) 
           | (0x7fffffffU & (((0U == (3U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q))
                               ? 0U : (IData)(cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause)) 
                             << 0x10U)));
}
