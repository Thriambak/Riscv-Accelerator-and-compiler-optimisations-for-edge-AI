// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcv32e40x_wrapper.h for the primary calling header

#include "Vcv32e40x_wrapper__pch.h"
#include "Vcv32e40x_wrapper___024root.h"

void Vcv32e40x_wrapper___024root___ico_sequent__TOP__0(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___ico_comb__TOP__0(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___ico_comb__TOP__1(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___ico_comb__TOP__2(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___ico_comb__TOP__3(Vcv32e40x_wrapper___024root* vlSelf);

void Vcv32e40x_wrapper___024root___eval_ico(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___eval_ico\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0x3bULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((0x3fULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___ico_comb__TOP__3(vlSelf);
    }
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___ico_comb__TOP__0(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___ico_comb__TOP__0\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_valid 
        = ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                     >> 3U))) && ((2U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)
                                   ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid) 
                                      && ((3U != (3U 
                                                  & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                                     >> 0x10U)))
                                           ? (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid)
                                           : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_3_6) 
                                              | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_3_1) 
                                                 & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated)))))
                                   : (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_valid 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_valid) 
           & (IData)((0U == (0x88U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]))));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___ico_comb__TOP__2(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___ico_comb__TOP__2\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__done_0 
        = (1U & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_en_gated)) 
                 | ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__cnt_q))
                     ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up) 
                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready))
                     : ((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__cnt_q))
                         ? (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid) 
                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans_valid)) 
                            & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready) 
                               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans_ready)))
                         : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready) 
                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__ctrl_update 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__done_0) 
           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_en_gated));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___ico_comb__TOP__3(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___ico_comb__TOP__3\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_ready 
        = (1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                  >> 1U) | ((((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready) 
                                & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_ready)) 
                               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_ready)) 
                              & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_split_ex))) 
                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__done_0)) 
                            & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                  >> 5U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ready 
        = (1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                  >> 2U) | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_ready) 
                            & ((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                   >> 6U)) & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__xif_waiting))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_12 
        = ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_valid)) 
           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_ready));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__if_ready 
        = (1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                  >> 3U) | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ready) 
                            & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                  >> 7U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q;
    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)))) {
                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h75e42caa__0)))) {
                    if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h3ec76060__0)))) {
                        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hb14c1f80__0)))) {
                            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)))) {
                                        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb)))) {
                                            if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex) {
                                                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 1U;
                                            } else if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id) {
                                                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q) 
          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_valid)) 
         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ready))) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 0U;
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int;
    if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_valid) 
         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__if_ready))) {
        if ((1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                    >> 1U) | ((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                  >> 1U)) & (3U == 
                                             (3U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr)))))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h04a6c627__0 = 0U;
            if ((2U >= (3U & ((IData)(2U) - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n 
                    = (((~ ((IData)(1U) << (3U & ((IData)(2U) 
                                                  - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n)) 
                       | (7U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h04a6c627__0) 
                                << (3U & ((IData)(2U) 
                                          - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))));
            }
        }
    }
}

void Vcv32e40x_wrapper___024root___eval_triggers__ico(Vcv32e40x_wrapper___024root* vlSelf);

bool Vcv32e40x_wrapper___024root___eval_phase__ico(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___eval_phase__ico\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcv32e40x_wrapper___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vcv32e40x_wrapper___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcv32e40x_wrapper___024root___act_sequent__TOP__0(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__1(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__2(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__3(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__4(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__5(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__6(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__7(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__8(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__9(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__10(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__11(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__12(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__1(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__2(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__3(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__4(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__5(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__6(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__7(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__8(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__9(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__10(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__11(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__12(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__13(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__14(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__15(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__16(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__17(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__18(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__19(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__20(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__21(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__22(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__23(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__24(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__25(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__26(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__27(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__28(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__29(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__30(Vcv32e40x_wrapper___024root* vlSelf);

void Vcv32e40x_wrapper___024root___eval_act(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___eval_act\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x600000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x20010ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x1e000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((0x12ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((0x22ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__8(vlSelf);
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__9(vlSelf);
    }
    if ((0x1800000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__10(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__11(vlSelf);
    }
    if ((0x200000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__12(vlSelf);
    }
    if ((0x82ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0xaULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0xc2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x600100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0x20012ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x3e000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__5(vlSelf);
    }
    if ((0x12ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__6(vlSelf);
    }
    if ((0x22ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__7(vlSelf);
    }
    if ((0x44010ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__8(vlSelf);
    }
    if ((0x1800e08ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__9(vlSelf);
    }
    if ((0x2000aULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__10(vlSelf);
    }
    if ((0x60000aULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__11(vlSelf);
    }
    if ((0x600102ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__12(vlSelf);
    }
    if ((0x3e0200d2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__13(vlSelf);
    }
    if ((0x3e020012ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__14(vlSelf);
    }
    if ((0x3e000001ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__15(vlSelf);
    }
    if ((0x1800e0aULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__16(vlSelf);
    }
    if ((0x181fe1cULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__17(vlSelf);
    }
    if ((0x19c3e28ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__18(vlSelf);
    }
    if ((0x1e00f0aULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__19(vlSelf);
    }
    if ((0x3e020013ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__20(vlSelf);
    }
    if ((0x3f9dfeffULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__21(vlSelf);
    }
    if ((0x3f9dfe3fULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__22(vlSelf);
    }
    if ((0x3fe00f0aULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__23(vlSelf);
    }
    if ((0x3e02001bULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__24(vlSelf);
    }
    if ((0x3f9dfeffULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__25(vlSelf);
    }
    if ((0x3f9ffe3fULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__26(vlSelf);
    }
    if ((0x3fe20f1bULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__27(vlSelf);
    }
    if ((0x3fffff3fULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__28(vlSelf);
    }
    if ((0x3fe60f9bULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__29(vlSelf);
    }
    if ((0x3fffffbfULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__30(vlSelf);
    }
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_sequent__TOP__0(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_sequent__TOP__0\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((((0xfc0000U 
                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                       << 0x1cU) 
                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                         >> 4U)) 
                                                     + 
                                                     (1U 
                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                         >> 0xaU))) 
                                                    << 0x12U)) 
                                                | (0x3f000U 
                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                         << 2U) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                           >> 0x1eU)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                           >> 9U))) 
                                                      << 0xcU))) 
                                               | ((0xfc0U 
                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                         << 8U) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                           >> 0x18U)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                           >> 8U))) 
                                                      << 6U)) 
                                                  | (0x3fU 
                                                     & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                          << 0xeU) 
                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                            >> 0x12U)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                            >> 7U)))))))) 
                              << 0x18U) | (QData)((IData)(
                                                          (((0xfc0000U 
                                                             & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                   << 0x14U) 
                                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                     >> 0xcU)) 
                                                                 + 
                                                                 (1U 
                                                                  & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                     >> 6U))) 
                                                                << 0x12U)) 
                                                            | (0x3f000U 
                                                               & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                     << 0x1aU) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                       >> 6U)) 
                                                                   + 
                                                                   (1U 
                                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                       >> 5U))) 
                                                                  << 0xcU))) 
                                                           | ((0xfc0U 
                                                               & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                   + 
                                                                   (1U 
                                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                       >> 4U))) 
                                                                  << 6U)) 
                                                              | (0x3fU 
                                                                 & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                      << 6U) 
                                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                        >> 0x1aU)) 
                                                                    + 
                                                                    (1U 
                                                                     & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                        >> 3U))))))))));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)((((0xfc0000U 
                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                         << 0xcU) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                           >> 0x14U)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                           >> 0x12U))) 
                                                      << 0x12U)) 
                                                  | (0x3f000U 
                                                     & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                           << 0x12U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                             >> 0xeU)) 
                                                         + 
                                                         (1U 
                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                             >> 0x11U))) 
                                                        << 0xcU))) 
                                                 | ((0xfc0U 
                                                     & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                             >> 8U)) 
                                                         + 
                                                         (1U 
                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                             >> 0x10U))) 
                                                        << 6U)) 
                                                    | (0x3fU 
                                                       & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                            << 0x1eU) 
                                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                              >> 2U)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                              >> 0xfU)))))))) 
                                << 0x18U) | (QData)((IData)(
                                                            (((0xfc0000U 
                                                               & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                     << 4U) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                       >> 0x1cU)) 
                                                                   + 
                                                                   (1U 
                                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                       >> 0xeU))) 
                                                                  << 0x12U)) 
                                                              | (0x3f000U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                       << 0xaU) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                         >> 0x16U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                         >> 0xdU))) 
                                                                    << 0xcU))) 
                                                             | ((0xfc0U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                       << 0x10U) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                         >> 0x10U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                         >> 0xcU))) 
                                                                    << 6U)) 
                                                                | (0x3fU 
                                                                   & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                        << 0x16U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                          >> 0xaU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                          >> 0xbU)))))))))) 
                      << 0x10U) | (IData)(((((QData)((IData)(
                                                             (((0xfc0000U 
                                                                & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                      << 0x1cU) 
                                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                        >> 4U)) 
                                                                    + 
                                                                    (1U 
                                                                     & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                        >> 0xaU))) 
                                                                   << 0x12U)) 
                                                               | (0x3f000U 
                                                                  & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                        << 2U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                          >> 0x1eU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                          >> 9U))) 
                                                                     << 0xcU))) 
                                                              | ((0xfc0U 
                                                                  & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                        << 8U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                          >> 0x18U)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                          >> 8U))) 
                                                                     << 6U)) 
                                                                 | (0x3fU 
                                                                    & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                         << 0xeU) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                           >> 0x12U)) 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                           >> 7U)))))))) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (((0xfc0000U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                       << 0x14U) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                         >> 0xcU)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                         >> 6U))) 
                                                                    << 0x12U)) 
                                                                | (0x3f000U 
                                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                         << 0x1aU) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                           >> 6U)) 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                           >> 5U))) 
                                                                      << 0xcU))) 
                                                               | ((0xfc0U 
                                                                   & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                           >> 4U))) 
                                                                      << 6U)) 
                                                                  | (0x3fU 
                                                                     & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                          << 6U) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                            >> 0x1aU)) 
                                                                        + 
                                                                        (1U 
                                                                         & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                            >> 3U))))))))) 
                                           >> 0x20U)));
    __Vtemp_2[2U] = (((IData)((((QData)((IData)((((0xfc0000U 
                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                         << 0xcU) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                           >> 0x14U)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                           >> 0x12U))) 
                                                      << 0x12U)) 
                                                  | (0x3f000U 
                                                     & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                           << 0x12U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                             >> 0xeU)) 
                                                         + 
                                                         (1U 
                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                             >> 0x11U))) 
                                                        << 0xcU))) 
                                                 | ((0xfc0U 
                                                     & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                             >> 8U)) 
                                                         + 
                                                         (1U 
                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                             >> 0x10U))) 
                                                        << 6U)) 
                                                    | (0x3fU 
                                                       & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                            << 0x1eU) 
                                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                              >> 2U)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                              >> 0xfU)))))))) 
                                << 0x18U) | (QData)((IData)(
                                                            (((0xfc0000U 
                                                               & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                     << 4U) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                       >> 0x1cU)) 
                                                                   + 
                                                                   (1U 
                                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                       >> 0xeU))) 
                                                                  << 0x12U)) 
                                                              | (0x3f000U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                       << 0xaU) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                         >> 0x16U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                         >> 0xdU))) 
                                                                    << 0xcU))) 
                                                             | ((0xfc0U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                       << 0x10U) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                         >> 0x10U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                         >> 0xcU))) 
                                                                    << 6U)) 
                                                                | (0x3fU 
                                                                   & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                        << 0x16U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                          >> 0xaU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                          >> 0xbU)))))))))) 
                      >> 0x10U) | ((IData)(((((QData)((IData)(
                                                              (((0xfc0000U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                       << 0xcU) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                         >> 0x14U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                         >> 0x12U))) 
                                                                    << 0x12U)) 
                                                                | (0x3f000U 
                                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                         << 0x12U) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                           >> 0xeU)) 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                           >> 0x11U))) 
                                                                      << 0xcU))) 
                                                               | ((0xfc0U 
                                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                         << 0x18U) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                           >> 8U)) 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                           >> 0x10U))) 
                                                                      << 6U)) 
                                                                  | (0x3fU 
                                                                     & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                          << 0x1eU) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                            >> 2U)) 
                                                                        + 
                                                                        (1U 
                                                                         & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                            >> 0xfU)))))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               (((0xfc0000U 
                                                                  & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                        << 4U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                          >> 0x1cU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                          >> 0xeU))) 
                                                                     << 0x12U)) 
                                                                 | (0x3f000U 
                                                                    & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                          << 0xaU) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                            >> 0x16U)) 
                                                                        + 
                                                                        (1U 
                                                                         & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                            >> 0xdU))) 
                                                                       << 0xcU))) 
                                                                | ((0xfc0U 
                                                                    & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                          << 0x10U) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                            >> 0x10U)) 
                                                                        + 
                                                                        (1U 
                                                                         & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                            >> 0xcU))) 
                                                                       << 6U)) 
                                                                   | (0x3fU 
                                                                      & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                           << 0x16U) 
                                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                             >> 0xaU)) 
                                                                         + 
                                                                         (1U 
                                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                             >> 0xbU))))))))) 
                                            >> 0x20U)) 
                                   << 0x10U));
    __Vtemp_3[0U] = (IData)((((QData)((IData)((((0xfc0000U 
                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                       << 0x1cU) 
                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                         >> 4U)) 
                                                     + 
                                                     (1U 
                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                         >> 0x1aU))) 
                                                    << 0x12U)) 
                                                | (0x3f000U 
                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                         << 2U) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                           >> 0x1eU)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                           >> 0x19U))) 
                                                      << 0xcU))) 
                                               | ((0xfc0U 
                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                         << 8U) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                           >> 0x18U)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                           >> 0x18U))) 
                                                      << 6U)) 
                                                  | (0x3fU 
                                                     & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                          << 0xeU) 
                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                            >> 0x12U)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                            >> 0x17U)))))))) 
                              << 0x18U) | (QData)((IData)(
                                                          (((0xfc0000U 
                                                             & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                   << 0x14U) 
                                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                     >> 0xcU)) 
                                                                 + 
                                                                 (1U 
                                                                  & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                     >> 0x16U))) 
                                                                << 0x12U)) 
                                                            | (0x3f000U 
                                                               & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                     << 0x1aU) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                       >> 6U)) 
                                                                   + 
                                                                   (1U 
                                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                       >> 0x15U))) 
                                                                  << 0xcU))) 
                                                           | ((0xfc0U 
                                                               & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                   + 
                                                                   (1U 
                                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                       >> 0x14U))) 
                                                                  << 6U)) 
                                                              | (1U 
                                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                    >> 0x13U))))))));
    __Vtemp_3[1U] = (((IData)((((QData)((IData)((((0xfc0000U 
                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                         << 0xcU) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                           >> 0x14U)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                           >> 2U))) 
                                                      << 0x12U)) 
                                                  | (0x3f000U 
                                                     & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                           << 0x12U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                             >> 0xeU)) 
                                                         + 
                                                         (1U 
                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                             >> 1U))) 
                                                        << 0xcU))) 
                                                 | ((0xfc0U 
                                                     & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                             >> 8U)) 
                                                         + 
                                                         (1U 
                                                          & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) 
                                                        << 6U)) 
                                                    | (0x3fU 
                                                       & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                            << 0x1eU) 
                                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                              >> 2U)) 
                                                          + 
                                                          (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                           >> 0x1fU))))))) 
                                << 0x18U) | (QData)((IData)(
                                                            (((0xfc0000U 
                                                               & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                     << 4U) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                       >> 0x1cU)) 
                                                                   + 
                                                                   (1U 
                                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                       >> 0x1eU))) 
                                                                  << 0x12U)) 
                                                              | (0x3f000U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                       << 0xaU) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                         >> 0x16U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                         >> 0x1dU))) 
                                                                    << 0xcU))) 
                                                             | ((0xfc0U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                       << 0x10U) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                         >> 0x10U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                         >> 0x1cU))) 
                                                                    << 6U)) 
                                                                | (0x3fU 
                                                                   & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                        << 0x16U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                          >> 0xaU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                          >> 0x1bU)))))))))) 
                      << 0x10U) | (IData)(((((QData)((IData)(
                                                             (((0xfc0000U 
                                                                & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                      << 0x1cU) 
                                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                        >> 4U)) 
                                                                    + 
                                                                    (1U 
                                                                     & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                        >> 0x1aU))) 
                                                                   << 0x12U)) 
                                                               | (0x3f000U 
                                                                  & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                        << 2U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                          >> 0x1eU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                          >> 0x19U))) 
                                                                     << 0xcU))) 
                                                              | ((0xfc0U 
                                                                  & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                        << 8U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                          >> 0x18U)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                          >> 0x18U))) 
                                                                     << 6U)) 
                                                                 | (0x3fU 
                                                                    & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                         << 0xeU) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                           >> 0x12U)) 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                           >> 0x17U)))))))) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (((0xfc0000U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                       << 0x14U) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                         >> 0xcU)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                         >> 0x16U))) 
                                                                    << 0x12U)) 
                                                                | (0x3f000U 
                                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                         << 0x1aU) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                           >> 6U)) 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                           >> 0x15U))) 
                                                                      << 0xcU))) 
                                                               | ((0xfc0U 
                                                                   & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                           >> 0x14U))) 
                                                                      << 6U)) 
                                                                  | (1U 
                                                                     & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                        >> 0x13U))))))) 
                                           >> 0x20U)));
    __Vtemp_3[2U] = (((IData)((((QData)((IData)((((0xfc0000U 
                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                         << 0xcU) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                           >> 0x14U)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                           >> 2U))) 
                                                      << 0x12U)) 
                                                  | (0x3f000U 
                                                     & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                           << 0x12U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                             >> 0xeU)) 
                                                         + 
                                                         (1U 
                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                             >> 1U))) 
                                                        << 0xcU))) 
                                                 | ((0xfc0U 
                                                     & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                             >> 8U)) 
                                                         + 
                                                         (1U 
                                                          & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) 
                                                        << 6U)) 
                                                    | (0x3fU 
                                                       & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                            << 0x1eU) 
                                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                              >> 2U)) 
                                                          + 
                                                          (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                           >> 0x1fU))))))) 
                                << 0x18U) | (QData)((IData)(
                                                            (((0xfc0000U 
                                                               & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                     << 4U) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                       >> 0x1cU)) 
                                                                   + 
                                                                   (1U 
                                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                       >> 0x1eU))) 
                                                                  << 0x12U)) 
                                                              | (0x3f000U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                       << 0xaU) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                         >> 0x16U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                         >> 0x1dU))) 
                                                                    << 0xcU))) 
                                                             | ((0xfc0U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                       << 0x10U) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                         >> 0x10U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                         >> 0x1cU))) 
                                                                    << 6U)) 
                                                                | (0x3fU 
                                                                   & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                        << 0x16U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                          >> 0xaU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                          >> 0x1bU)))))))))) 
                      >> 0x10U) | ((IData)(((((QData)((IData)(
                                                              (((0xfc0000U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                       << 0xcU) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                         >> 0x14U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                         >> 2U))) 
                                                                    << 0x12U)) 
                                                                | (0x3f000U 
                                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                         << 0x12U) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                           >> 0xeU)) 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                           >> 1U))) 
                                                                      << 0xcU))) 
                                                               | ((0xfc0U 
                                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                         << 0x18U) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                           >> 8U)) 
                                                                       + 
                                                                       (1U 
                                                                        & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) 
                                                                      << 6U)) 
                                                                  | (0x3fU 
                                                                     & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                          << 0x1eU) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                            >> 2U)) 
                                                                        + 
                                                                        (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                         >> 0x1fU))))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               (((0xfc0000U 
                                                                  & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                        << 4U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                          >> 0x1cU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                          >> 0x1eU))) 
                                                                     << 0x12U)) 
                                                                 | (0x3f000U 
                                                                    & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                          << 0xaU) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                            >> 0x16U)) 
                                                                        + 
                                                                        (1U 
                                                                         & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                            >> 0x1dU))) 
                                                                       << 0xcU))) 
                                                                | ((0xfc0U 
                                                                    & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                          << 0x10U) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                            >> 0x10U)) 
                                                                        + 
                                                                        (1U 
                                                                         & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                            >> 0x1cU))) 
                                                                       << 6U)) 
                                                                   | (0x3fU 
                                                                      & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                           << 0x16U) 
                                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                             >> 0xaU)) 
                                                                         + 
                                                                         (1U 
                                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                             >> 0x1bU))))))))) 
                                            >> 0x20U)) 
                                   << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
        = __Vtemp_3[2U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
        = __Vtemp_2[0U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
        = __Vtemp_2[1U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
        = __Vtemp_2[2U];
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_sequent__TOP__1(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_sequent__TOP__1\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb 
        = (1U & ((IData)(((0U != (0x70680U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])) 
                          | (0U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status)))) 
                 & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                    >> 0xbU)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_flush_req_set = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)))) {
                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h75e42caa__0)))) {
                    if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h3ec76060__0)))) {
                        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hb14c1f80__0)))) {
                            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb)))) {
                                    if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) {
                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_flush_req_set = 1U;
                                        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q) {
                                            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_flush_req_set = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q;
    if ((4U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)))) {
            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h75e42caa__0)))) {
                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h3ec76060__0)))) {
                    if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hb14c1f80__0)))) {
                        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb)))) {
                                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)))) {
                                    if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb) {
                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_sequent__TOP__2(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_sequent__TOP__2\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated 
        = ((0U >= (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q)) 
           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_resp_valid));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q;
    if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n 
            = ((2U > (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))
                ? (3U & ((IData)(1U) + (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))
                : 0U);
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h80fa5999__0 = 1U;
        if ((2U >= (3U & ((IData)(2U) - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int 
                = (((~ ((IData)(1U) << (3U & ((IData)(2U) 
                                              - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))) 
                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int)) 
                   | (7U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h80fa5999__0) 
                            << (3U & ((IData)(2U) - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))));
        }
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_3_1) 
           | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_sequent__TOP__3(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_sequent__TOP__3\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_a_mux_sel;
    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_a_mux_sel = 0;
    QData/*52:0*/ cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl;
    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0;
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__instr_valid 
        = (IData)(((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                    >> 0x1cU) & (0U == (0x44U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__instr_valid 
        = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
            >> 0xbU) & (0U == (0x22U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U])));
    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
        = (0x1fffffffffffefULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
        = (0x1000000000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
    if ((4U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
        if ((2U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
            if ((1U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
                if ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                     >> 0x1fU)) {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                } else if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                } else if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                    if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0x4c0000000000ULL | 
                               (0x1f03ffffffffffULL 
                                & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                        if ((0U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                          >> 8U)))) {
                            if ((0U == ((0x3e0U & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 6U)) 
                                        | (0x1fU & 
                                           (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                            >> 3U))))) {
                                if ((0U == (0xfffU 
                                            & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                               >> 0x10U)))) {
                                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        = (4ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                                } else if ((1U == (0xfffU 
                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                      >> 0x10U)))) {
                                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        = (8ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                                } else if ((0x302U 
                                            == (0xfffU 
                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 0x10U)))) {
                                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        = (0x40ULL 
                                           | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                                } else if ((0x7b2U 
                                            == (0xfffU 
                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 0x10U)))) {
                                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        = ((0x100U 
                                            & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])
                                            ? (0x20ULL 
                                               | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
                                            : 0x24c1000000090ULL);
                                } else if ((0x105U 
                                            == (0xfffU 
                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 0x10U)))) {
                                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        = ((0x1ffffffffffffdULL 
                                            & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (~ 
                                                                  (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                                                                   >> 3U))))) 
                                              << 1U));
                                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        = (0x8000000000ULL 
                                           | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        = (0x1ffff3ffffffffULL 
                                           & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        = (0x1f03ffffffffffULL 
                                           & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                                } else {
                                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                                }
                            } else {
                                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                            }
                        } else {
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x1800000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x8000000000ULL 
                                   | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x1fffe3ffffffffULL 
                                   & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x4c0000000000ULL 
                                   | (0x1f03ffffffffffULL 
                                      & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                            if ((0x400U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
                                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                    = (0x20000000000ULL 
                                       | (0x1ffcffffffffffULL 
                                          & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                            } else {
                                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                    = (0x2000000ULL 
                                       | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                    = (0x1ffcffffffffffULL 
                                       & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            }
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                 >> 8U)))
                                    ? (0x200000ULL 
                                       | (0x1fffffff9fffffULL 
                                          & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))
                                    : ((2U == (3U & 
                                               (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                >> 8U)))
                                        ? ((0x1fffffff9fffffULL 
                                            & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                                           | ((QData)((IData)(
                                                              ((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                    >> 0xbU)))
                                                                ? 0U
                                                                : 2U))) 
                                              << 0x15U))
                                        : ((3U == (3U 
                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                      >> 8U)))
                                            ? ((0x1fffffff9fffffULL 
                                                & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                                               | ((QData)((IData)(
                                                                  ((0U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                        >> 0xbU)))
                                                                    ? 0U
                                                                    : 3U))) 
                                                  << 0x15U))
                                            : 0x24c1000000090ULL)));
                            if ((1U & (IData)((cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                               >> 4U)))) {
                                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                            }
                        }
                    } else {
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                    }
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                }
            } else if ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                        >> 0x1fU)) {
                if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                    if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                        if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0xa000000000000ULL 
                                   | (0x1ffffffffffffULL 
                                      & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x18000000000ULL 
                                   | (0x1ffc7fffffffffULL 
                                      & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0xc00000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x1f03ffffffffffULL 
                                   & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x1000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                        } else {
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                        }
                    } else {
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                    }
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                }
            } else if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                    if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                        if ((0U != (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                          >> 8U)))) {
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                        } else {
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x14000000000000ULL 
                                   | (0x1ffffffffffffULL 
                                      & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x18000000000ULL 
                                   | (0x1ffc7fffffffffULL 
                                      & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0xc00000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x1f03ffffffffffULL 
                                   & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x3000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                        }
                    } else {
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                    }
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                }
            } else if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x1e000000000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x4000000000ULL | (0x1fff9fffffffffULL 
                                              & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x6000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = ((0x400U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                            ? ((0x1f03ffffffffffULL 
                                & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                               | ((QData)((IData)((
                                                   (0x200U 
                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                                                    ? 
                                                   ((0x100U 
                                                     & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                                                     ? 0x17U
                                                     : 0x16U)
                                                    : 
                                                   ((0x100U 
                                                     & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                                                     ? 0x1dU
                                                     : 0x1cU)))) 
                                  << 0x2aU)) : ((0x200U 
                                                 & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                                                 ? 0x24c1000000090ULL
                                                 : 
                                                ((0x1f03ffffffffffULL 
                                                  & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                                                 | ((QData)((IData)(
                                                                    ((0x100U 
                                                                      & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                                                                      ? 0x11U
                                                                      : 0x10U))) 
                                                    << 0x2aU))));
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                }
            } else {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
            }
        } else {
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
        }
    } else if ((2U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
        if ((1U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
            if ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                 >> 0x1fU)) {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
            } else if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                    if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0x28000000000ULL | (0x1ffc7fffffffffULL 
                                                   & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0x1800000000ULL | (0x1fffe3ffffffffULL 
                                                  & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0x1f03ffffffffffULL 
                               & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0x1000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                    } else {
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                    }
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                }
            } else if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                    if (((3U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                       >> 0x1aU))) 
                         | (2U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                         >> 0x1aU))))) {
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                    } else {
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0x3000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                        if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                      >> 0x18U)))) {
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x4000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                        }
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (((((((((0U == ((0x1f8U 
                                               & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                  >> 0x12U)) 
                                              | (7U 
                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                    >> 8U)))) 
                                      | (0x100U == 
                                         ((0x1f8U & 
                                           (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                            >> 0x12U)) 
                                          | (7U & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 8U))))) 
                                     | (2U == ((0x1f8U 
                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 0x12U)) 
                                               | (7U 
                                                  & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                     >> 8U))))) 
                                    | (3U == ((0x1f8U 
                                               & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                  >> 0x12U)) 
                                              | (7U 
                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                    >> 8U))))) 
                                   | (4U == ((0x1f8U 
                                              & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                 >> 0x12U)) 
                                             | (7U 
                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 8U))))) 
                                  | (6U == ((0x1f8U 
                                             & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                >> 0x12U)) 
                                            | (7U & 
                                               (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                >> 8U))))) 
                                 | (7U == ((0x1f8U 
                                            & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                               >> 0x12U)) 
                                           | (7U & 
                                              (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                               >> 8U))))) 
                                | (1U == ((0x1f8U & 
                                           (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                            >> 0x12U)) 
                                          | (7U & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 8U)))))
                                ? ((0x1f03ffffffffffULL 
                                    & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                                   | ((QData)((IData)(
                                                      ((0U 
                                                        == 
                                                        ((0x1f8U 
                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                             >> 0x12U)) 
                                                         | (7U 
                                                            & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                               >> 8U))))
                                                        ? 0U
                                                        : 
                                                       ((0x100U 
                                                         == 
                                                         ((0x1f8U 
                                                           & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                              >> 0x12U)) 
                                                          | (7U 
                                                             & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                >> 8U))))
                                                         ? 8U
                                                         : 
                                                        ((2U 
                                                          == 
                                                          ((0x1f8U 
                                                            & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                               >> 0x12U)) 
                                                           | (7U 
                                                              & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                 >> 8U))))
                                                          ? 0x1aU
                                                          : 
                                                         ((3U 
                                                           == 
                                                           ((0x1f8U 
                                                             & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                >> 0x12U)) 
                                                            | (7U 
                                                               & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                  >> 8U))))
                                                           ? 0x13U
                                                           : 
                                                          ((4U 
                                                            == 
                                                            ((0x1f8U 
                                                              & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                 >> 0x12U)) 
                                                             | (7U 
                                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                   >> 8U))))
                                                            ? 4U
                                                            : 
                                                           ((6U 
                                                             == 
                                                             ((0x1f8U 
                                                               & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                  >> 0x12U)) 
                                                              | (7U 
                                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                    >> 8U))))
                                                             ? 6U
                                                             : 
                                                            ((7U 
                                                              == 
                                                              ((0x1f8U 
                                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                   >> 0x12U)) 
                                                               | (7U 
                                                                  & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                     >> 8U))))
                                                              ? 7U
                                                              : 1U))))))))) 
                                      << 0x2aU)) : 
                               ((5U == ((0x1f8U & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 0x12U)) 
                                        | (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                 >> 8U))))
                                 ? (0x140000000000ULL 
                                    | (0x1f03ffffffffffULL 
                                       & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))
                                 : ((0x105U == ((0x1f8U 
                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                    >> 0x12U)) 
                                                | (7U 
                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                      >> 8U))))
                                     ? (0x340000000000ULL 
                                        | (0x1f03ffffffffffULL 
                                           & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))
                                     : 0x24c1000000090ULL)));
                    }
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                }
            } else {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
            }
        } else if ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                    >> 0x1fU)) {
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
        } else if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
        } else if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
            if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x180000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x6000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x1effffffffffffULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x2000000000ULL | (0x1fff9fffffffffULL 
                                          & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x400000000ULL | (0x1ffff3ffffffffULL 
                                         & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x8000000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = ((0x1ffffffff9ffffULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                       | ((QData)((IData)((3U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                 >> 8U)))) 
                          << 0x11U));
                if ((1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                            >> 0xaU) | (3U == (3U & 
                                               (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                >> 8U)))))) {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                }
            } else {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
            }
        } else {
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
        }
    } else if ((1U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
        if ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
             >> 0x1fU)) {
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
        } else if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
            if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x18000000000ULL | (0x1ffc7fffffffffULL 
                                               & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x800000000ULL | (0x1ffff3ffffffffULL 
                                             & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x1f03ffffffffffULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x1000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                }
            } else {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
            }
        } else if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
            if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x8000000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x1ffff3ffffffffULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x3000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                if ((0x400U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = ((0x200U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                            ? ((0x1f03ffffffffffULL 
                                & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                               | ((QData)((IData)((
                                                   (0x100U 
                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                                                    ? 7U
                                                    : 6U))) 
                                  << 0x2aU)) : ((0x100U 
                                                 & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                      >> 0x15U)))
                                                  ? 
                                                 (0x140000000000ULL 
                                                  | (0x1f03ffffffffffULL 
                                                     & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))
                                                  : 
                                                 ((0x20U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                       >> 0x15U)))
                                                   ? 
                                                  (0x340000000000ULL 
                                                   | (0x1f03ffffffffffULL 
                                                      & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))
                                                   : 0x24c1000000090ULL))
                                                 : 
                                                (0x100000000000ULL 
                                                 | (0x1f03ffffffffffULL 
                                                    & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))));
                } else if ((0x200U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = ((0x1f03ffffffffffULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                           | ((QData)((IData)(((0x100U 
                                                & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                                                ? 0x13U
                                                : 0x1aU))) 
                              << 0x2aU));
                } else if ((0x100U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x40000000000ULL | (0x1f03ffffffffffULL 
                                               & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                    if ((0U != (0x7fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                         >> 0x15U)))) {
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                    }
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x1f03ffffffffffULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                }
            } else {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
            }
        } else {
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
        }
    } else if ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                >> 0x1fU)) {
        if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
            if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x4c0000000000ULL | (0x1f03ffffffffffULL 
                                                & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = ((0U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                         >> 8U))) ? 
                           (1ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
                            : ((1U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                             >> 8U)))
                                ? (1ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
                                : 0x24c1000000090ULL));
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                }
            } else {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
            }
        } else {
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
        }
    } else if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
    } else if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
        if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                = (0x100000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                = (0x3000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                = (0x1effffffffffffULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                = (0x8000000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                = (0x1ffff3ffffffffULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                = ((0x1ffffffff8ffffULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                   | ((QData)((IData)(((6U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                              >> 7U)) 
                                       | (1U & (~ (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 0xaU)))))) 
                      << 0x10U));
            if ((((7U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                >> 8U))) | (6U == (7U 
                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                      >> 8U)))) 
                 | (3U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                 >> 8U))))) {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
            }
        } else {
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
        }
    } else {
        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__instr_valid 
        = (1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                  >> 0xbU) & ((~ vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]) 
                              & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                    >> 4U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_en_gated 
        = (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
             >> 0xbU) & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                         >> 2U)) & (0U == (0x22U & 
                                           vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U])));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_valid 
        = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
            >> 0x1dU) & ((2U > (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                         & ((0U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_0_0) 
                            | (((1U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_0_0) 
                                & (0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q))) 
                               | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                                  >> 0x1cU)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_rdata_int 
        = ((0x800U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
            ? ((0x400U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                ? ((0x200U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                    ? ((0x100U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                        ? ((0x80U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                            ? 0U : ((0x40U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                     ? 0U : ((0x20U 
                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? 0U : 
                                             ((0x10U 
                                               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? ((8U 
                                                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 0x14U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0x602U
                                                      : 0U))))
                                               : 0U))))
                        : 0U) : ((0x100U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                  ? 0U : ((0x80U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                           ? ((0x40U 
                                               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? 0U
                                               : ((0x20U 
                                                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                      ? 0U
                                                      : 
                                                     (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                         ? 0U
                                                         : 
                                                        (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (((IData)(0x1fU) 
                                                           + 
                                                           (0x7ffU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (0x3fU 
                                                           & (((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                          ? 0U
                                                          : 
                                                         (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                           (0x3fU 
                                                            & (((IData)(0x20U) 
                                                                + 
                                                                VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))))))))
                                           : ((0x40U 
                                               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? 0U
                                               : ((0x20U 
                                                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                      ? 0U
                                                      : 
                                                     (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                         ? 0U
                                                         : 
                                                        (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (((IData)(0x1fU) 
                                                           + 
                                                           (0x7ffU 
                                                            & VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (0x3fU 
                                                           & (VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                          ? 0U
                                                          : 
                                                         (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                           (0x3fU 
                                                            & (VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))))))))))
                : ((0x200U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                    ? ((0x100U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                        ? ((0x80U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                            ? ((0x40U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                ? 0U : ((0x20U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? 0U : ((0x10U 
                                                  & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        VL_SHIFTL_III(11,32,32, 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (0x3fU 
                                                      & (((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (0x3fU 
                                                       & (((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                      ? 0U
                                                      : 
                                                     (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))))))))
                            : ((0x40U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                ? 0U : ((0x20U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? 0U : ((0x10U 
                                                  & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(11,32,32, 
                                                                     (0x1fU 
                                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x7ffU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(11,32,32, 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (0x3fU 
                                                      & (VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(11,32,32, 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(11,32,32, 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x7ffU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (0x3fU 
                                                       & (VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                      ? 0U
                                                      : 
                                                     (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))))))))
                        : 0U) : 0U)) : ((0x400U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? ((0x200U 
                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                             ? ((0x100U 
                                                 & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                 ? 
                                                ((0x80U 
                                                  & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 
                                                 ((0x40U 
                                                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dscratch1_csr_i__DOT__rdata_q
                                                         : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dscratch0_csr_i__DOT__rdata_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dpc_csr_i__DOT__rdata_q
                                                         : 
                                                        ((0xfffffff0U 
                                                          & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q) 
                                                         | ((8U 
                                                             & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                                                >> 0x14U)) 
                                                            | (7U 
                                                               & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q)))))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : 4U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__tmatch_value_csr_i__DOT__rdata_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__tmatch_control_csr_i__DOT__rdata_q
                                                         : 0U)))))
                                                    : 0U))
                                                  : 0U)
                                                 : 0U)
                                             : 0U) : 
                                        ((0x200U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                          ? ((0x100U 
                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? ((0x80U 
                                                  & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_q))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcause_csr_i__DOT__rdata_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q
                                                         : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q))))))
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(10,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x3ffU 
                                                          & VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(10,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                        (0x1fU 
                                                         & (VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(10,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(10,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x3ffU 
                                                           & VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                         (0x1fU 
                                                          & (VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                         ? 0U
                                                         : 
                                                        (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                         (((IData)(0x1fU) 
                                                           + 
                                                           (0x3ffU 
                                                            & VL_SHIFTL_III(10,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                          (0x1fU 
                                                           & (VL_SHIFTL_III(10,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        (((0U 
                                                           == 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(10,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                           ? 0U
                                                           : 
                                                          (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                           (((IData)(0x1fU) 
                                                             + 
                                                             (0x3ffU 
                                                              & VL_SHIFTL_III(10,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                            >> 5U)] 
                                                           << 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(10,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                            (0x1fU 
                                                             & (VL_SHIFTL_III(10,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                                >> 5U))] 
                                                            >> 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(10,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                         : 0U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_q)))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q
                                                         : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mie_csr_i__DOT__rdata_q))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0x40001104U
                                                         : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q))))))))
                                              : 0U)
                                          : 0U)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_en_gated 
        = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
            >> 0x12U) & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__instr_valid));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
        = ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                          >> 4U))) ? ((1U & (IData)(
                                                    (cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                     >> 4U)))
                                       ? 0x24c1000000090ULL
                                       : cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
            : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_split_ex = 0U;
    if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_en_gated) 
         & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__split_q)))) {
        if ((2U == (3U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                           << 1U) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
                                     >> 0x1fU))))) {
            if ((0U != (3U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_split_ex = 1U;
            }
        } else if ((1U == (3U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                  << 1U) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
                                            >> 0x1fU))))) {
            if ((3U == (3U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_split_ex = 1U;
            }
        }
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans_valid 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_en_gated) 
           & (2U > (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_valid = 0U;
    if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_valid = 1U;
        }
    } else if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state)))) {
        if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                      >> 0x11U)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_valid = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_en_gated)))) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_valid = 0U;
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_en_id 
        = (1U & ((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                     >> 4U)) & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                        >> 0x17U))));
    if ((0x10U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U])) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__op_c_mux_sel = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_raw_id = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 1U;
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__op_c_mux_sel 
            = (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                             >> 0x25U)));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
            = (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                             >> 0x28U)));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_b_mux_sel 
            = (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                             >> 0x22U)));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_raw_id 
            = (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                             >> 0x33U)));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel 
            = (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                             >> 0x31U)));
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__alu_op_b_mux_sel 
        = (1U & ((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                     >> 4U)) & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                        >> 0x27U))));
    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_a_mux_sel 
        = (1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                  >> 4U) | (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                    >> 0x24U))));
    if (cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_a_mux_sel) {
        if (cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_a_mux_sel) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_a = 0U;
        }
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_a 
            = (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                        >> 0xbU));
    }
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_sequent__TOP__4(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_sequent__TOP__4\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_clz_result 
        = ((1U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
            ? (0x1fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U])
            : 0x20U);
    __Vtemp_2[0U] = (IData)((((QData)((IData)((((((0x10000U 
                                                   & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                   ? 0x10U
                                                   : 0x11U) 
                                                 << 0xfU) 
                                                | (((0x4000U 
                                                     & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xaU)) 
                                               | ((((0x1000U 
                                                     & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                     ? 0xcU
                                                     : 0xdU) 
                                                   << 5U) 
                                                  | ((0x400U 
                                                      & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                      ? 0xaU
                                                      : 0xbU))))) 
                              << 0x14U) | (QData)((IData)(
                                                          (((((0x100U 
                                                               & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                               ? 8U
                                                               : 9U) 
                                                             << 0xfU) 
                                                            | (((0x40U 
                                                                 & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                 ? 6U
                                                                 : 7U) 
                                                               << 0xaU)) 
                                                           | ((((0x10U 
                                                                 & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                 ? 4U
                                                                 : 5U) 
                                                               << 5U) 
                                                              | ((4U 
                                                                  & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                  ? 2U
                                                                  : 3U)))))));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)((((
                                                   (0x40000000U 
                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                    ? 0x1eU
                                                    : 0x1fU) 
                                                  << 0xaU) 
                                                 | ((((0x10000000U 
                                                       & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                       ? 0x1cU
                                                       : 0x1dU) 
                                                     << 5U) 
                                                    | ((0x4000000U 
                                                        & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                        ? 0x1aU
                                                        : 0x1bU))))) 
                                << 0x14U) | (QData)((IData)(
                                                            (((((0x1000000U 
                                                                 & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                 ? 0x18U
                                                                 : 0x19U) 
                                                               << 0xfU) 
                                                              | (((0x400000U 
                                                                   & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                   ? 0x16U
                                                                   : 0x17U) 
                                                                 << 0xaU)) 
                                                             | ((((0x100000U 
                                                                   & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                   ? 0x14U
                                                                   : 0x15U) 
                                                                 << 5U) 
                                                                | ((0x40000U 
                                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                    ? 0x12U
                                                                    : 0x13U))))))) 
                      << 8U) | (IData)(((((QData)((IData)(
                                                          (((((0x10000U 
                                                               & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                               ? 0x10U
                                                               : 0x11U) 
                                                             << 0xfU) 
                                                            | (((0x4000U 
                                                                 & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                 ? 0xeU
                                                                 : 0xfU) 
                                                               << 0xaU)) 
                                                           | ((((0x1000U 
                                                                 & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                 ? 0xcU
                                                                 : 0xdU) 
                                                               << 5U) 
                                                              | ((0x400U 
                                                                  & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                  ? 0xaU
                                                                  : 0xbU))))) 
                                          << 0x14U) 
                                         | (QData)((IData)(
                                                           (((((0x100U 
                                                                & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                ? 8U
                                                                : 9U) 
                                                              << 0xfU) 
                                                             | (((0x40U 
                                                                  & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                  ? 6U
                                                                  : 7U) 
                                                                << 0xaU)) 
                                                            | ((((0x10U 
                                                                  & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                  ? 4U
                                                                  : 5U) 
                                                                << 5U) 
                                                               | ((4U 
                                                                   & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                   ? 2U
                                                                   : 3U)))))) 
                                        >> 0x20U)));
    __Vtemp_2[2U] = (((IData)((((QData)((IData)((((
                                                   (0x40000000U 
                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                    ? 0x1eU
                                                    : 0x1fU) 
                                                  << 0xaU) 
                                                 | ((((0x10000000U 
                                                       & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                       ? 0x1cU
                                                       : 0x1dU) 
                                                     << 5U) 
                                                    | ((0x4000000U 
                                                        & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                        ? 0x1aU
                                                        : 0x1bU))))) 
                                << 0x14U) | (QData)((IData)(
                                                            (((((0x1000000U 
                                                                 & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                 ? 0x18U
                                                                 : 0x19U) 
                                                               << 0xfU) 
                                                              | (((0x400000U 
                                                                   & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                   ? 0x16U
                                                                   : 0x17U) 
                                                                 << 0xaU)) 
                                                             | ((((0x100000U 
                                                                   & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                   ? 0x14U
                                                                   : 0x15U) 
                                                                 << 5U) 
                                                                | ((0x40000U 
                                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                    ? 0x12U
                                                                    : 0x13U))))))) 
                      >> 0x18U) | ((IData)(((((QData)((IData)(
                                                              ((((0x40000000U 
                                                                  & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                  ? 0x1eU
                                                                  : 0x1fU) 
                                                                << 0xaU) 
                                                               | ((((0x10000000U 
                                                                     & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                     ? 0x1cU
                                                                     : 0x1dU) 
                                                                   << 5U) 
                                                                  | ((0x4000000U 
                                                                      & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                      ? 0x1aU
                                                                      : 0x1bU))))) 
                                              << 0x14U) 
                                             | (QData)((IData)(
                                                               (((((0x1000000U 
                                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                    ? 0x18U
                                                                    : 0x19U) 
                                                                  << 0xfU) 
                                                                 | (((0x400000U 
                                                                      & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                      ? 0x16U
                                                                      : 0x17U) 
                                                                    << 0xaU)) 
                                                                | ((((0x100000U 
                                                                      & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                      ? 0x14U
                                                                      : 0x15U) 
                                                                    << 5U) 
                                                                   | ((0x40000U 
                                                                       & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                       ? 0x12U
                                                                       : 0x13U)))))) 
                                            >> 0x20U)) 
                                   << 8U));
    __Vtemp_3[0U] = (IData)((((QData)((IData)((((0xf8000U 
                                                 & (((0x8000U 
                                                      & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                      ? 
                                                     ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                       << 0x15U) 
                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                         >> 0xbU))
                                                      : 
                                                     ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                         >> 0x10U))) 
                                                    << 0xfU)) 
                                                | (0x7c00U 
                                                   & (((0x2000U 
                                                        & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                        ? 
                                                       ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                         << 0x1fU) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                           >> 1U))
                                                        : 
                                                       ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                         << 0x1aU) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                           >> 6U))) 
                                                      << 0xaU))) 
                                               | ((0x3e0U 
                                                   & (((0x800U 
                                                        & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                        ? 
                                                       ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                         << 9U) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                           >> 0x17U))
                                                        : 
                                                       ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                         << 4U) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                           >> 0x1cU))) 
                                                      << 5U)) 
                                                  | (0x1fU 
                                                     & ((0x200U 
                                                         & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                         ? 
                                                        ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                          << 0x13U) 
                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                            >> 0xdU))
                                                         : 
                                                        ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                          << 0xeU) 
                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                            >> 0x12U)))))))) 
                              << 0x14U) | (QData)((IData)(
                                                          (((0xf8000U 
                                                             & (((0x80U 
                                                                  & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                   << 0x1dU) 
                                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                     >> 3U))
                                                                  : 
                                                                 ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                   << 0x18U) 
                                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                     >> 8U))) 
                                                                << 0xfU)) 
                                                            | (0x7c00U 
                                                               & (((0x20U 
                                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                     << 7U) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                       >> 0x19U))
                                                                    : 
                                                                   ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                     << 2U) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                       >> 0x1eU))) 
                                                                  << 0xaU))) 
                                                           | ((0x3e0U 
                                                               & (((8U 
                                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                     << 0x11U) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                       >> 0xfU))
                                                                    : 
                                                                   ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                     << 0xcU) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                       >> 0x14U))) 
                                                                  << 5U)) 
                                                              | (0x1fU 
                                                                 & ((2U 
                                                                     & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                      << 0x1bU) 
                                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                        >> 5U))
                                                                     : 
                                                                    ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                      << 0x16U) 
                                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                        >> 0xaU))))))))));
    __Vtemp_3[1U] = (((IData)((((QData)((IData)((((
                                                   ((1U 
                                                     & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                     ? 0U
                                                     : 1U) 
                                                   << 0xfU) 
                                                  | (0x7c00U 
                                                     & (((0x20000000U 
                                                          & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0xfU) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x11U))
                                                          : 
                                                         ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0xaU) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x16U))) 
                                                        << 0xaU))) 
                                                 | ((0x3e0U 
                                                     & (((0x8000000U 
                                                          & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x19U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 7U))
                                                          : 
                                                         ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x14U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0xcU))) 
                                                        << 5U)) 
                                                    | (0x1fU 
                                                       & ((0x2000000U 
                                                           & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                           ? 
                                                          ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                              >> 0x1dU))
                                                           : 
                                                          ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                            << 0x1eU) 
                                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                              >> 2U)))))))) 
                                << 0x14U) | (QData)((IData)(
                                                            (((0xf8000U 
                                                               & (((0x800000U 
                                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                     << 0xdU) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                       >> 0x13U))
                                                                    : 
                                                                   ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                     << 8U) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                       >> 0x18U))) 
                                                                  << 0xfU)) 
                                                              | (0x7c00U 
                                                                 & (((0x200000U 
                                                                      & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                      ? 
                                                                     ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                       << 0x17U) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                         >> 9U))
                                                                      : 
                                                                     ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                       << 0x12U) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                         >> 0xeU))) 
                                                                    << 0xaU))) 
                                                             | ((0x3e0U 
                                                                 & (((0x80000U 
                                                                      & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                      ? 
                                                                     ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                       << 1U) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                         >> 0x1fU))
                                                                      : 
                                                                     ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                       << 0x1cU) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                         >> 4U))) 
                                                                    << 5U)) 
                                                                | (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))))))) 
                      << 8U) | (IData)(((((QData)((IData)(
                                                          (((0xf8000U 
                                                             & (((0x8000U 
                                                                  & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                  ? 
                                                                 ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                   << 0x15U) 
                                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                     >> 0xbU))
                                                                  : 
                                                                 ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                   << 0x10U) 
                                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                     >> 0x10U))) 
                                                                << 0xfU)) 
                                                            | (0x7c00U 
                                                               & (((0x2000U 
                                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                     << 0x1fU) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                       >> 1U))
                                                                    : 
                                                                   ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                     << 0x1aU) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                       >> 6U))) 
                                                                  << 0xaU))) 
                                                           | ((0x3e0U 
                                                               & (((0x800U 
                                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                     << 9U) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                       >> 0x17U))
                                                                    : 
                                                                   ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                     << 4U) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                       >> 0x1cU))) 
                                                                  << 5U)) 
                                                              | (0x1fU 
                                                                 & ((0x200U 
                                                                     & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                      << 0x13U) 
                                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                        >> 0xdU))
                                                                     : 
                                                                    ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                      << 0xeU) 
                                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                        >> 0x12U)))))))) 
                                          << 0x14U) 
                                         | (QData)((IData)(
                                                           (((0xf8000U 
                                                              & (((0x80U 
                                                                   & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                   ? 
                                                                  ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                    << 0x1dU) 
                                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                      >> 3U))
                                                                   : 
                                                                  ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                    << 0x18U) 
                                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                      >> 8U))) 
                                                                 << 0xfU)) 
                                                             | (0x7c00U 
                                                                & (((0x20U 
                                                                     & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                      << 7U) 
                                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                        >> 0x19U))
                                                                     : 
                                                                    ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                      << 2U) 
                                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                        >> 0x1eU))) 
                                                                   << 0xaU))) 
                                                            | ((0x3e0U 
                                                                & (((8U 
                                                                     & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                      << 0x11U) 
                                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                        >> 0xfU))
                                                                     : 
                                                                    ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                      << 0xcU) 
                                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                        >> 0x14U))) 
                                                                   << 5U)) 
                                                               | (0x1fU 
                                                                  & ((2U 
                                                                      & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                      ? 
                                                                     ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                       << 0x1bU) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                         >> 5U))
                                                                      : 
                                                                     ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                       << 0x16U) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                         >> 0xaU))))))))) 
                                        >> 0x20U)));
    __Vtemp_3[2U] = (((IData)((((QData)((IData)((((
                                                   ((1U 
                                                     & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                     ? 0U
                                                     : 1U) 
                                                   << 0xfU) 
                                                  | (0x7c00U 
                                                     & (((0x20000000U 
                                                          & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0xfU) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x11U))
                                                          : 
                                                         ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0xaU) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0x16U))) 
                                                        << 0xaU))) 
                                                 | ((0x3e0U 
                                                     & (((0x8000000U 
                                                          & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                          ? 
                                                         ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x19U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 7U))
                                                          : 
                                                         ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                           << 0x14U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                             >> 0xcU))) 
                                                        << 5U)) 
                                                    | (0x1fU 
                                                       & ((0x2000000U 
                                                           & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                           ? 
                                                          ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                            << 3U) 
                                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                              >> 0x1dU))
                                                           : 
                                                          ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                            << 0x1eU) 
                                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                              >> 2U)))))))) 
                                << 0x14U) | (QData)((IData)(
                                                            (((0xf8000U 
                                                               & (((0x800000U 
                                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                     << 0xdU) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                       >> 0x13U))
                                                                    : 
                                                                   ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                     << 8U) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                       >> 0x18U))) 
                                                                  << 0xfU)) 
                                                              | (0x7c00U 
                                                                 & (((0x200000U 
                                                                      & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                      ? 
                                                                     ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                       << 0x17U) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                         >> 9U))
                                                                      : 
                                                                     ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                       << 0x12U) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                         >> 0xeU))) 
                                                                    << 0xaU))) 
                                                             | ((0x3e0U 
                                                                 & (((0x80000U 
                                                                      & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                      ? 
                                                                     ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                       << 1U) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                         >> 0x1fU))
                                                                      : 
                                                                     ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                       << 0x1cU) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                         >> 4U))) 
                                                                    << 5U)) 
                                                                | (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))))))) 
                      >> 0x18U) | ((IData)(((((QData)((IData)(
                                                              (((((1U 
                                                                   & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                                   ? 0U
                                                                   : 1U) 
                                                                 << 0xfU) 
                                                                | (0x7c00U 
                                                                   & (((0x20000000U 
                                                                        & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                         << 0xfU) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                           >> 0x11U))
                                                                        : 
                                                                       ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                         << 0xaU) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                           >> 0x16U))) 
                                                                      << 0xaU))) 
                                                               | ((0x3e0U 
                                                                   & (((0x8000000U 
                                                                        & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                         << 0x19U) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                           >> 7U))
                                                                        : 
                                                                       ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                         << 0x14U) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                           >> 0xcU))) 
                                                                      << 5U)) 
                                                                  | (0x1fU 
                                                                     & ((0x2000000U 
                                                                         & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                         ? 
                                                                        ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                          << 3U) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                            >> 0x1dU))
                                                                         : 
                                                                        ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                          << 0x1eU) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                                            >> 2U)))))))) 
                                              << 0x14U) 
                                             | (QData)((IData)(
                                                               (((0xf8000U 
                                                                  & (((0x800000U 
                                                                       & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                        << 0xdU) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                          >> 0x13U))
                                                                       : 
                                                                      ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                        << 8U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                          >> 0x18U))) 
                                                                     << 0xfU)) 
                                                                 | (0x7c00U 
                                                                    & (((0x200000U 
                                                                         & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                         ? 
                                                                        ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                          << 0x17U) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                            >> 9U))
                                                                         : 
                                                                        ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                          << 0x12U) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                            >> 0xeU))) 
                                                                       << 0xaU))) 
                                                                | ((0x3e0U 
                                                                    & (((0x80000U 
                                                                         & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                         ? 
                                                                        ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                          << 1U) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                            >> 0x1fU))
                                                                         : 
                                                                        ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                          << 0x1cU) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                            >> 4U))) 
                                                                       << 5U)) 
                                                                   | (0x1fU 
                                                                      & ((0x20000U 
                                                                          & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                           << 0xbU) 
                                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                             >> 0x15U))
                                                                          : 
                                                                         ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                           << 6U) 
                                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                             >> 0x1aU))))))))) 
                                            >> 0x20U)) 
                                   << 8U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((__Vtemp_2[0U] << 0x10U) | __Vtemp_3[2U]);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((__Vtemp_2[0U] >> 0x10U) | (__Vtemp_2[1U] 
                                       << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | ((__Vtemp_2[1U] >> 0x10U) | (__Vtemp_2[2U] 
                                          << 0x10U)));
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt 
        = (0x3fU & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_en)
                     ? (0x1fU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_clz_result))
                     : ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                         ? (- (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                        >> 0x13U)))
                         : (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                     >> 0x13U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_aa)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((0x20U & (IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)) 
                << 0x20U) | (QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                             >> 0x20U))))
            : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((0x10U & (IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & (IData)(
                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                        >> 0x30U))))))
            : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((8U & (IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                           >> 0x38U))))))
            : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((4U & (IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 4U) | (QData)((IData)((0xfU & (IData)(
                                                         (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                          >> 0x3cU))))))
            : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((2U & (IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 2U) | (QData)((IData)((3U & (IData)(
                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                        >> 0x3eU))))))
            : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((1U & (IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 1U) | (QData)((IData)((1U & (IData)(
                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                        >> 0x3fU))))))
            : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result 
        = (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    if ((0x1000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
        if ((0x800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
            if ((0x400000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                if ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                    if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                  >> 0x14U)))) {
                        if ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result 
                                = (1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp));
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                     >> 0x14U)))) {
                    if ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result 
                            = (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                 << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                             >> 0x13U)) 
                               ^ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp));
                    }
                }
            } else if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                 >> 0x15U)))) {
                if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                              >> 0x14U)))) {
                    if ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result 
                            = (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                 << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                             >> 0x13U)) 
                               | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp));
                    }
                }
            }
        } else if ((0x400000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
            if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                          >> 0x15U)))) {
                if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                              >> 0x14U)))) {
                    if ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result 
                            = (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                 << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                             >> 0x13U)) 
                               & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)));
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_sequent__TOP__5(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_sequent__TOP__5\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__next_cnt 
        = (3U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up)
                  ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid)
                      ? (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__cnt_q)))
                  : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid)
                      ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__cnt_q) 
                         - (IData)(1U)) : (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__cnt_q))));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_sequent__TOP__6(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_sequent__TOP__6\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__zero_skip_mask 
        = ((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_0) 
             << 3U) | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_1) 
                       << 2U)) | (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_2) 
                                   << 1U) | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_3)));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_sequent__TOP__7(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_sequent__TOP__7\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready 
        = (1U & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__xif_waiting)) 
                 & ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__cnt_q))
                     ? (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                           >> 4U)) : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid) 
                                      & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                            >> 4U))))));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_sequent__TOP__8(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_sequent__TOP__8\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated 
        = (((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event) 
              & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb))) 
             & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb))) 
            & (~ vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U])) 
           & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                 >> 4U)));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_sequent__TOP__9(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_sequent__TOP__9\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_valid_1 
        = ((0U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__cnt_q)) 
           & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__last_q) 
              & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid) 
                 & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_valid_wb))));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_sequent__TOP__10(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_sequent__TOP__10\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match 
        = (((((0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                        >> 6U)) == (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                             >> 0x10U))) 
             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_4)) 
            << 1U) | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_jr_match) 
                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_3)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match 
        = (((((0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] 
                        >> 4U)) == (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                             >> 0x10U))) 
             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_4)) 
            << 1U) | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jr_match) 
                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_3)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp 
        = (0x3fU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp));
    if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp 
                = (0x400U | (0x1ffU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp)));
        }
        if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp 
                = (0x100U | (0x67fU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp)));
        }
    }
    if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp 
                = (0x200U | (0x1ffU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp)));
        }
        if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp 
                = (0x80U | (0x67fU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp)));
        }
    }
    if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) {
        if (((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_valid_wb)) 
             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jr_match))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp 
                = (0x40U | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp));
        }
    }
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_sequent__TOP__11(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_sequent__TOP__11\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step 
        = (1U & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                 & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q 
                     >> 2U) & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_debug)) 
                               & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_valid) 
                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                                     >> 0xfU))))));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_sequent__TOP__12(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_sequent__TOP__12\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((((((IData)((0U != (0xc0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                      << 0x1eU) | ((IData)((0U != (0x30000000U 
                                                   & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                   << 0x1dU)) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0xc000000U 
                                                            & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                  << 0x1cU) 
                                                 | ((IData)(
                                                            (0U 
                                                             != 
                                                             (0x3000000U 
                                                              & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                    << 0x1bU))) 
                   | ((((IData)((0U != (0xc00000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                        << 0x1aU) | ((IData)((0U != 
                                              (0x300000U 
                                               & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                     << 0x19U)) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc0000U 
                                                              & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                    << 0x18U) 
                                                   | ((IData)(
                                                              (0U 
                                                               != 
                                                               (0x30000U 
                                                                & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                      << 0x17U)))) 
                  | (((((IData)((0U != (0xc000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                        << 0x16U) | ((IData)((0U != 
                                              (0x3000U 
                                               & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                     << 0x15U)) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00U 
                                                              & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                    << 0x14U) 
                                                   | ((IData)(
                                                              (0U 
                                                               != 
                                                               (0x300U 
                                                                & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                      << 0x13U))) 
                     | ((((IData)((0U != (0xc0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                          << 0x12U) | ((IData)((0U 
                                                != 
                                                (0x30U 
                                                 & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                       << 0x11U)) | 
                        (((IData)((0U != (0xcU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                          << 0x10U) | ((IData)((0U 
                                                != 
                                                (3U 
                                                 & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                       << 0xfU))))) 
                 | ((((((IData)((0U != (0x60000000U 
                                        & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                        << 0xeU) | ((IData)((0U != 
                                             (0x18000000U 
                                              & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                    << 0xdU)) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x6000000U 
                                                            & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                  << 0xcU) 
                                                 | ((IData)(
                                                            (0U 
                                                             != 
                                                             (0x1800000U 
                                                              & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                    << 0xbU))) 
                     | ((((IData)((0U != (0x600000U 
                                          & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                          << 0xaU) | ((IData)((0U != 
                                               (0x180000U 
                                                & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                      << 9U)) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60000U 
                                                            & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                  << 8U) 
                                                 | ((IData)(
                                                            (0U 
                                                             != 
                                                             (0x18000U 
                                                              & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                    << 7U)))) 
                    | (((((IData)((0U != (0x6000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                          << 6U) | ((IData)((0U != 
                                             (0x1800U 
                                              & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                    << 5U)) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x600U 
                                                          & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                << 4U) 
                                               | ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x180U 
                                                            & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                  << 3U))) 
                       | (((IData)((0U != (0x60U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                           << 2U) | (((IData)((0U != 
                                               (0x18U 
                                                & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                      << 1U) | (IData)(
                                                       (0U 
                                                        != 
                                                        (6U 
                                                         & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = ((0x80000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes) 
           | __Vtemp_1);
}

extern const VlUnpacked<CData/*1:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h61a14a7c_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h1dbc620d_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h3931de26_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h2ecec9f4_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_hc62f7ad7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h7ce83cad_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h88599ead_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_hb93ab6b3_0;

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__1(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__1\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__add_a_mux;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__add_a_mux = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__add_b_mux;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__add_b_mux = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__remainder_en;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__remainder_en = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__quotient_en;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__quotient_en = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx3 = (((0x7fffe0U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                    >> 9U) & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__instr_valid) 
                                              << 5U))) 
                     | (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__comp_out) 
                         << 4U) | (8U & ((~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__cnt_q)))) 
                                         << 3U)))) 
                    | (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready) 
                        << 2U) | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__state)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__next_state 
        = Vcv32e40x_wrapper__ConstPool__TABLE_h61a14a7c_0
        [__Vtableidx3];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_valid 
        = Vcv32e40x_wrapper__ConstPool__TABLE_h1dbc620d_0
        [__Vtableidx3];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_ready 
        = Vcv32e40x_wrapper__ConstPool__TABLE_h3931de26_0
        [__Vtableidx3];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__init_en 
        = Vcv32e40x_wrapper__ConstPool__TABLE_h2ecec9f4_0
        [__Vtableidx3];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__init_dummy_cnt 
        = Vcv32e40x_wrapper__ConstPool__TABLE_hc62f7ad7_0
        [__Vtableidx3];
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__remainder_en 
        = Vcv32e40x_wrapper__ConstPool__TABLE_h7ce83cad_0
        [__Vtableidx3];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__divisor_en 
        = Vcv32e40x_wrapper__ConstPool__TABLE_h88599ead_0
        [__Vtableidx3];
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__quotient_en 
        = Vcv32e40x_wrapper__ConstPool__TABLE_hb93ab6b3_0
        [__Vtableidx3];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_ready = 0U;
    if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state))) {
            if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_ready = 1U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state)))) {
        if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                      >> 0x11U)))) {
            if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_ready = 1U;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_en_gated)))) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_ready = 1U;
    }
    if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__init_en) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_rem_d 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_rem;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__comp_inv_d 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__op_b_is_neg;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__quotient_d = 0U;
        cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__add_b_mux = 0U;
        cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__add_a_mux 
            = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                            >> 0x13U));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__res_inv_d 
            = (((0U != ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                         << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                     >> 0x13U))) | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_rem)) 
               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT____VdfgRegularize_h6404b41a_0_2));
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_rem_d 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_rem_q;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__comp_inv_d 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__comp_inv_q;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__quotient_d 
            = ((IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__quotient_en)
                ? ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__quotient_q 
                    << 1U) | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__comp_out))
                : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__quotient_q);
        cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__add_b_mux 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__remainder_q;
        cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__add_a_mux 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__divisor_q;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__res_inv_d 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__res_inv_q;
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__remainder_d 
        = ((IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__remainder_en)
            ? (((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT____VdfgRegularize_h6404b41a_0_2)) 
                & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__init_en))
                ? (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__add_b_mux 
                   + cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__add_a_mux)
                : (cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__add_b_mux 
                   - cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__add_a_mux))
            : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__remainder_q);
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__3(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__3\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result = 0U;
    if ((0x1000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
        if ((0x800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
            if ((0x400000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                if ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                    if ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                        if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                      >> 0x13U)))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result;
                        }
                    } else {
                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                            = ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                                ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                                : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result);
                    }
                } else if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                     >> 0x14U)))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                            : (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                  >> 2U)))) 
                                << 0x10U) | (0xffffU 
                                             & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                 << 0xdU) 
                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                   >> 0x13U)))));
                }
            } else if ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                if ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                    if ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result;
                    }
                } else {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result
                            : (((0xff000000U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                << 5U)) 
                                | (0xff0000U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                 << 0x15U) 
                                                | (0x1f0000U 
                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                      >> 0xbU))))) 
                               | ((0xff00U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                              << 5U)) 
                                  | (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                              >> 0xbU)))));
                }
            } else if ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                              >> 0x13U)))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                        = ((((- (IData)((0U != (0xffU 
                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                   >> 0xbU))))) 
                             << 0x18U) | (0xff0000U 
                                          & ((- (IData)(
                                                        (0U 
                                                         != 
                                                         (0xffU 
                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                             >> 3U))))) 
                                             << 0x10U))) 
                           | ((0xff00U & ((- (IData)(
                                                     (0U 
                                                      != 
                                                      (0xffU 
                                                       & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                           << 5U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                             >> 0x1bU)))))) 
                                          << 8U)) | 
                              (0xffU & (- (IData)((0U 
                                                   != 
                                                   (0xffU 
                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                       >> 0x13U))))))));
                }
            } else {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                        ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                        : (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                              >> 0x1aU)))) 
                            << 8U) | (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                               >> 0x13U))));
            }
        } else if ((0x400000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
            if ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                if ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                            ? (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                 << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                             >> 0x13U)) 
                               & (~ ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                      << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                  >> 0x13U))))
                            : (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                 << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                             >> 0x13U)) 
                               | (~ ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                      << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                  >> 0x13U)))));
                } else if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                     >> 0x13U)))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                        = (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                             << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                         >> 0x13U)) 
                           ^ (~ ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                  << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                              >> 0x13U))));
                }
            } else {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                        ? ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                            ? VL_SHIFTR_III(32,32,32, VL_STREAML_FAST_III(32, vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result, 0), 1U)
                            : VL_STREAML_FAST_III(32, vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result, 0))
                        : ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                            : (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_clz_result)));
            }
        } else {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                = ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                    ? ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                        ? ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result
                            : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd)
                        : ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                            : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd))
                    : ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                        ? ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                            ? (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                               >> 0x1aU) : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd)
                        : ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                            : (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_clz_result))));
        }
    } else if ((0x800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
        if ((0x400000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
            if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                          >> 0x15U)))) {
                if ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                    if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                  >> 0x13U)))) {
                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                            = (1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_hc2f9a3b9__0)));
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                             >> 0x15U)))) {
            if ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                if ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                        = (1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_hc2f9a3b9__0)));
                }
            }
        }
    } else if ((0x400000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
        if ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
            if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                          >> 0x14U)))) {
                if ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result;
                }
            }
        } else if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                             >> 0x14U)))) {
            if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                          >> 0x13U)))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                    = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result;
            }
        }
    } else if ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
            = ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                ? ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                    ? (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                         << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                     >> 0x13U)) & (
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                    << 0xdU) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                      >> 0x13U)))
                    : (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                         << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                     >> 0x13U)) | (
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                    << 0xdU) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                      >> 0x13U))))
                : ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                    ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                    : (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                         << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                     >> 0x13U)) ^ (
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                    << 0xdU) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                      >> 0x13U)))));
    } else if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                         >> 0x14U)))) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
            = ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result);
    }
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__6(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__6\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state_next 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state;
    if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state))) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc_next 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc;
        if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state))) {
            if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state_next = 0U;
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc_next = 0ULL;
            }
        } else {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state_next = 3U;
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc_next 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc_res;
        }
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc_next 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc;
        if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state_next = 2U;
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc_next 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc_res;
        } else if ((0x20000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U])) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state_next = 1U;
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc_next 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc_res;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_en_gated)))) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state_next = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc_next = 0ULL;
    }
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__7(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__7\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
        = ((0xff01ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]) 
           | (((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                 << 0x17U) | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                              << 0x16U)) | ((0xffe00000U 
                                             & (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                                 << 0x15U) 
                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                                                   << 9U))) 
                                            | (0xfff00000U 
                                               & (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                                   << 0x14U) 
                                                  & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                                                     << 5U))))) 
              | ((0xfff80000U & (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                  << 0x13U) & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                                               << 5U))) 
                 | ((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                      & (0x6000U == (0x6000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U]))) 
                     << 0x12U) | (0x20000U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                                              << 2U))))));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__8(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__8\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_valid 
        = ((((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
                 >> 0x14U)) & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__xif_waiting))) 
            | ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
                >> 0x14U) & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_valid_1) 
                             | (0U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status))))) 
           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__instr_valid));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__9(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__9\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp 
        = (0x7efU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp 
        = (0x7feU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp 
        = (0x7f7U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp 
        = (0x7fdU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp));
    if ((1U & ((IData)((0U != (0xe000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U]))) 
               | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                  >> 3U)))) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp 
            = (1U | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp));
    }
    if ((((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
             >> 2U) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
                       >> 3U)) & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex)) 
          & (0U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) 
         | (((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready)) 
             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb)) 
            & (0U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))))) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp 
            = (0x10U | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp));
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp 
        = ((0x7dfU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp)) 
           | (((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_raw_id)) 
               & ((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) 
                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jr_match)) 
                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_valid_wb)) 
                  | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex) 
                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_jr_match)))) 
              << 5U));
    if ((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_en_id) 
          | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__mret_insn_id)) 
         & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
             >> 0x1cU) & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
                            >> 0xbU) & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                         | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U]) 
                                        >> 5U)) | (
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                                                    >> 0xbU) 
                                                   & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                       >> 3U) 
                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                                                         >> 5U))))))) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp 
            = (8U | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp));
    }
    if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_counter_read) 
         & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
            >> 0xbU))) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp 
            = (2U | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp));
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id 
        = ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q)) 
           & ((((~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp) 
                    >> 5U)) & ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_raw_id)) 
                               | (1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_raw_id)))) 
               | ((~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp) 
                      >> 3U)) & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__mret_insn_id))) 
              & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                 >> 0x1cU)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__jalr_fw 
        = ((0x40U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp))
            ? ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] 
                << 0x1cU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                             >> 4U)) : ((0x40U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp))
                                         ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_rdata_id
                                        [0U] : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_rdata_id
                                        [0U]));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__10(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__10\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_valid 
        = (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
             >> 0x19U) | ((((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                               >> 2U) & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_en_gated)) 
                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__instr_valid)) 
                            & ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__cnt_q))
                                ? (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up)
                                : ((1U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__cnt_q)) 
                                   | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up)))) 
                           | ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                               >> 0x12U) & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_valid))) 
                          | (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                               >> 0xeU) & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_valid)) 
                             | ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                 >> 5U) | ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
                                            >> 3U) 
                                           | (1U & 
                                              (((0U 
                                                 != 
                                                 (0x70400U 
                                                  & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U])) 
                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
                                                   >> 0x13U)) 
                                               & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
                                                  >> 0xbU)))))))) 
           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__instr_valid));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__11(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__11\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__cnt_d 
        = (0x3fU & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__init_en)
                     ? (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_clz_result)
                     : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__init_dummy_cnt)
                         ? (((IData)(0x20U) - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_clz_result)) 
                            - (IData)(1U)) : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__cnt_q) 
                                              - (0U 
                                                 != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__cnt_q))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__divisor_d 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__divisor_en)
            ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__init_en)
                ? (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                : (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__comp_inv_q) 
                    << 0x1fU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__divisor_q 
                                 >> 1U))) : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__divisor_q);
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__12(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__12\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__rf_wdata_ex 
        = ((0x40000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U])
            ? (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__result)
            : ((0x4000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U])
                ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__res_inv_q)
                    ? (- vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__res_mux)
                    : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__res_mux)
                : ((0x20U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U])
                    ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_rdata_int
                    : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result)));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__14(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__14\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.mem_we_o = 0U;
    if (vlSelfRef.cv32e40x_wrapper__DOT__amem_req) {
        vlSelfRef.mem_we_o = vlSelfRef.cv32e40x_wrapper__DOT__amem_we;
    } else if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid) {
        vlSelfRef.mem_we_o = (1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                    >> 9U));
    }
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__15(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__15\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__dmem_gnt = ((0x100U 
                                                  > (IData)(vlSelfRef.cv32e40x_wrapper__DOT__req_count)) 
                                                 & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__amem_req)) 
                                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
        = ((0xfffe7fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]) 
           | (0xffff8000U & (((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid) 
                                & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__dmem_gnt)) 
                               & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                     >> 9U))) << 0x10U) 
                             | (0xffff8000U & ((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid) 
                                                 & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__dmem_gnt)) 
                                                << 0xfU) 
                                               & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                                  << 6U))))));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__17(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__17\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
        = ((0xffff80ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]) 
           | (0xffffff00U & ((((((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_valid)) 
                                 & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ready)) 
                                << 0xeU) | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_12) 
                                            << 0xdU)) 
                              | ((((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_valid)) 
                                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready)) 
                                  << 0xcU) | (0x800U 
                                              & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_valid)) 
                                                 << 0xbU)))) 
                             | ((0xfffffc00U & (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp) 
                                                 << 6U) 
                                                & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_12) 
                                                   << 0xaU))) 
                                | ((0xfffffe00U & (
                                                   ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp) 
                                                    << 4U) 
                                                   & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_12) 
                                                      << 9U))) 
                                   | (0xfff00U & ((
                                                   (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_valid_1)) 
                                                   << 8U) 
                                                  & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
                                                      >> 0xcU) 
                                                     & (((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_valid)) 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__instr_valid)) 
                                                        << 8U)))))))));
}

extern const VlUnpacked<CData/*2:0*/, 128> Vcv32e40x_wrapper__ConstPool__TABLE_hda12827b_0;

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__18(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__18\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
        = (0x60000000U | (0x1ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
        = (0x7fff01ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
        = ((0xffffff7fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]) 
           | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q) 
              << 7U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
        = ((0xffffffbfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]) 
           | (0x40U & (((((IData)((0U != (0x3cU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp)))) 
                          | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_interrupt) 
                             & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed)))) 
                         | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_debug) 
                            & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_allowed)))) 
                        | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_nmi) 
                           & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed)))) 
                       << 6U)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
        = ((0xffffffc0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]) 
           | (0x20U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp) 
                       << 4U)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
        = (0xf9ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U] 
        = (0x87ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U]);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
        = (0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
        = (0x7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U] 
        = (0xf8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U]);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
        = (0x400000U | (0x7e3fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
        = (0x7fffffefU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
        = (0x7fdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q;
    if ((4U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                = (0x5fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]);
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 0U;
        } else if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                = (0x5fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]);
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 0U;
        } else {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                = (0x200U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]);
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 0U;
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 2U;
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                = (0x18800000U | (0x603fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]) 
                   | (0x1000000U & ((~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q))) 
                                    << 0x18U)));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                = (0x10U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]);
            if ((4U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                    = (0xeU | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                    = ((0xfffffffeU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]) 
                       | (1U & (~ (((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q)) 
                                    | (2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q))) 
                                   | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb))))));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U] 
                    = ((0x800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])
                        ? (0x8000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U])
                        : ((0x800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U])
                            ? (0x10000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U])
                            : ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                                ? (0x20000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U])
                                : (0x40000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U]))));
            } else {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                    = (8U | (0xfffffff0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U] 
                    = ((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                         & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q 
                            >> 0xfU)) | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb))
                        ? (0x8000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U])
                        : (0x40000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U]));
            }
        }
    } else if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                = (0x1fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]);
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                = (0x10U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]);
            if ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U] 
                 >> 0x1fU)) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 2U;
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                    = (0x40000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]);
            }
        } else {
            if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h75e42caa__0) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                    = (0xfU | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                    = (0x19000000U | (0x603fffffU & 
                                      vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                    = (0x1000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U] 
                    = (0x4000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U]);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                    = ((0x7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]) 
                       | (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q)
                            ? 0x81U : 0x80U) << 0x1bU));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U] 
                    = ((0xfffffff8U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U]) 
                       | (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q)
                            ? 0x81U : 0x80U) >> 5U));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U] 
                    = ((0x800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])
                        ? (0x8000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U])
                        : ((0x800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U])
                            ? (0x10000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U])
                            : ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                                ? (0x20000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U])
                                : (0x40000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U]))));
            } else if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h3ec76060__0) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                    = (0xf0U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 4U;
            } else if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hb14c1f80__0) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                    = (0xfU | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                    = (0x18400000U | (0x603fffffU & 
                                      vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                    = ((0x7fff03ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]) 
                       | (0x7ffffc00U & (0x8000U | 
                                         ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__irq_id_ctrl) 
                                          << 0xaU))));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                    = (0x1000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U] 
                    = (0x4000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U]);
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                    = ((0x7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]) 
                       | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__irq_id_ctrl) 
                          << 0x1bU));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U] 
                    = ((0xfffffff8U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U]) 
                       | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__irq_id_ctrl) 
                          >> 5U));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U] 
                    = ((0x800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])
                        ? (0x8000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U])
                        : ((0x800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U])
                            ? (0x10000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U])
                            : ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                                ? (0x20000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U])
                                : (0x40000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U]))));
            } else {
                if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                        = (0xeU | (0xfffffff0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]));
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                        = ((0x603fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]) 
                           | (0x7fc00000U & (0x18000000U 
                                             | (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)
                                                  ? 3U
                                                  : 0U) 
                                                << 0x16U))));
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U] 
                        = (0x8000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U]);
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]) 
                           | (0x1000000U & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                                            << 0x18U)));
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                        = ((0x7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]) 
                           | (((0U != (3U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                                             >> 0x10U)))
                                ? 1U : ((0x40000U & 
                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])
                                         ? 0x30U : 
                                        ((0x400U & 
                                          vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])
                                          ? 2U : ((0x80U 
                                                   & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])
                                                   ? 0xbU
                                                   : 
                                                  ((0x200U 
                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status))
                                                     ? 7U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status))
                                                      ? 5U
                                                      : 0U))))))) 
                              << 0x1bU));
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U] 
                        = ((0xfffffff8U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U]) 
                           | (((0U != (3U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                                             >> 0x10U)))
                                ? 1U : ((0x40000U & 
                                         vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])
                                         ? 0x30U : 
                                        ((0x400U & 
                                          vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])
                                          ? 2U : ((0x80U 
                                                   & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])
                                                   ? 0xbU
                                                   : 
                                                  ((0x200U 
                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status))
                                                     ? 7U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status))
                                                      ? 5U
                                                      : 0U))))))) 
                              >> 5U));
                } else if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                        = (0xc0U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]);
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 3U;
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                        = (0x5fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]);
                } else if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                        = (0x1eU | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]);
                    if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q) {
                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                            = (0x12000000U | (0x61ffffffU 
                                              & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]));
                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                            = (0xffffffefU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]);
                    }
                } else if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                        = (0xeU | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]);
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 0U;
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                        = (0x1e000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]);
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                        = (0x2000000U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]);
                } else if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                        = (0xcU | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]);
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                        = (0x16000000U | (0x61ffffffU 
                                          & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]));
                } else if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                        = (8U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]);
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__mret_insn_id)
                            ? ((0x603fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]) 
                               | (0x7fc00000U & (0x10c00000U 
                                                 | (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)
                                                      ? 4U
                                                      : 5U) 
                                                    << 0x19U))))
                            : (0x14000000U | (0x61ffffffU 
                                              & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])));
                }
                if ((IData)(((0x820U == (0x820U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])) 
                             & (~ vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U])))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]) 
                           | (0x4000000U & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                                            << 0x1aU)));
                }
            }
            if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 4U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
            = (0x30000000U | (0x41ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 2U;
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
            = (0x5fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]);
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__sleep_unit_i__DOT__fetch_enable_q) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 1U;
        }
    }
    if (((((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
               >> 8U)) & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q 
                          >> 2U)) & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q))) 
         & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_valid) 
            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ready)))) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 1U;
    }
    __Vtableidx6 = (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns) 
                     << 4U) | (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n) 
                                << 3U) | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns 
        = Vcv32e40x_wrapper__ConstPool__TABLE_hda12827b_0
        [__Vtableidx6];
}

extern const VlUnpacked<CData/*0:0*/, 16> Vcv32e40x_wrapper__ConstPool__TABLE_h22c0c54c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcv32e40x_wrapper__ConstPool__TABLE_hed15535e_0;

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__20(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__20\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    __Vtableidx5 = ((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans_valid) 
                      << 3U) | (4U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans[0U] 
                                      >> 1U))) | (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__dmem_gnt) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state 
        = Vcv32e40x_wrapper__ConstPool__TABLE_h22c0c54c_0
        [__Vtableidx5];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push 
        = Vcv32e40x_wrapper__ConstPool__TABLE_hed15535e_0
        [__Vtableidx5];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans_ready 
        = (1U & (((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core)) 
                  & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state)
                      ? ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans[0U] 
                          >> 3U) & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__dmem_gnt))
                      : ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans[0U] 
                          >> 3U) | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__dmem_gnt)))) 
                 | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans_valid) 
           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans_ready));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__23(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__23\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__next_state 
        = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__state;
    if ((0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__state)) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__next_state 
            = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_req)
                ? 1U : 0U);
    } else if ((1U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__state)) {
        if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_load) 
             | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_store))) {
            if (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_done) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__next_state 
                    = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__fused_load_compute)
                        ? 3U : 2U);
            }
        } else if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cycle_count) 
                    == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__max_cycle_count))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__next_state = 2U;
        }
    } else if ((2U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__state)) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__next_state = 0U;
    } else if ((3U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__state)) {
        if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cycle_count) 
             == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__max_cycle_count))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__next_state = 2U;
        }
    }
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__24(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__24\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__done_0 
        = (1U & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_en_gated)) 
                 | ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__cnt_q))
                     ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up) 
                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready))
                     : ((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__cnt_q))
                         ? (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid) 
                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans_valid)) 
                            & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready) 
                               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans_ready)))
                         : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready) 
                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__ctrl_update 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__done_0) 
           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_en_gated));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_ready 
        = (1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                  >> 1U) | ((((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready) 
                                & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_ready)) 
                               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_ready)) 
                              & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_split_ex))) 
                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__done_0)) 
                            & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                  >> 5U)))));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__25(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__25\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q;
    if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
            = (1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__branch_addr_n 
                        >> 1U)));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
            = (1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__branch_addr_n 
                     >> 1U));
    } else if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q) {
            if ((3U != (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                      >> 3U))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                    = (3U != (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                            >> 0x13U))));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                    = (3U != (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                            >> 0x13U))));
            }
        } else if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                = (3U != (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                        >> 0x13U))));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                = (3U != (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                        >> 0x13U))));
        } else {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                = (3U != (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                        >> 0x13U))));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                = (3U != (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                        >> 0x13U))));
        }
    }
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__27(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__27\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ready 
        = (1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                  >> 2U) | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_ready) 
                            & ((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                   >> 6U)) & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__xif_waiting))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_12 
        = ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_valid)) 
           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_ready));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__28(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__28\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__if_ready 
        = (1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                  >> 3U) | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ready) 
                            & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                  >> 7U)))));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__29(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__29\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q;
    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)))) {
                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h75e42caa__0)))) {
                    if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h3ec76060__0)))) {
                        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hb14c1f80__0)))) {
                            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)))) {
                                        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb)))) {
                                            if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex) {
                                                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 1U;
                                            } else if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id) {
                                                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q) 
          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_valid)) 
         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ready))) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 0U;
    }
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__30(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__30\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int;
    if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_valid) 
         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__if_ready))) {
        if ((1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                    >> 1U) | ((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                  >> 1U)) & (3U == 
                                             (3U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr)))))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h04a6c627__0 = 0U;
            if ((2U >= (3U & ((IData)(2U) - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n 
                    = (((~ ((IData)(1U) << (3U & ((IData)(2U) 
                                                  - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n)) 
                       | (7U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h04a6c627__0) 
                                << (3U & ((IData)(2U) 
                                          - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))));
            }
        }
    }
}

void Vcv32e40x_wrapper___024root___nba_sequent__TOP__0(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_sequent__TOP__1(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_sequent__TOP__2(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__0(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__1(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__3(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__5(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__6(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__7(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__9(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__10(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__11(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__13(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__14(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__15(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__16(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__18(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__20(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__24(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__26(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__27(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__29(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__32(Vcv32e40x_wrapper___024root* vlSelf);

void Vcv32e40x_wrapper___024root___eval_nba(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___eval_nba\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xc0000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_sequent__TOP__0(vlSelf);
        Vcv32e40x_wrapper___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x180000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0xe0000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0xc0000001ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x180020010ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x180000002ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__3(vlSelf);
    }
    if ((0x180000080ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x180040000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__5(vlSelf);
    }
    if ((0x1c0000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x180000022ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x180000010ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__9(vlSelf);
    }
    if ((0x180000100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__9(vlSelf);
    }
    if ((0x181800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__10(vlSelf);
    }
    if ((0x180600000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__11(vlSelf);
    }
    if ((0x180200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__12(vlSelf);
    }
    if ((0x1c0000001ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__13(vlSelf);
    }
    if ((0x1800000c2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__14(vlSelf);
    }
    if ((0x18000000aULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__15(vlSelf);
    }
    if ((0x180020012ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__16(vlSelf);
    }
    if ((0x180000082ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x1c0000012ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__18(vlSelf);
    }
    if ((0x1c0000006ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__11(vlSelf);
    }
    if ((0x1c0040000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__20(vlSelf);
    }
    if ((0x1c0044010ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__8(vlSelf);
    }
    if ((0x180000102ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__12(vlSelf);
    }
    if ((0x181800e08ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__9(vlSelf);
    }
    if ((0x1c00000c2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__24(vlSelf);
    }
    if ((0x18002000aULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__10(vlSelf);
    }
    if ((0x1c0020012ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__26(vlSelf);
    }
    if ((0x1c0020013ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__27(vlSelf);
    }
    if ((0x1c00200d2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__13(vlSelf);
    }
    if ((0x181800e0aULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__29(vlSelf);
    }
    if ((0x18181fe1cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__17(vlSelf);
    }
    if ((0x1c19c3e28ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__18(vlSelf);
    }
    if ((0x1c1800f0aULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__32(vlSelf);
    }
    if ((0x1c002001bULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__24(vlSelf);
    }
    if ((0x1c19dfeffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__21(vlSelf);
    }
    if ((0x1c19dfe3fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__22(vlSelf);
    }
    if ((0x1c1820f1bULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__27(vlSelf);
    }
    if ((0x1c19dfeffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__25(vlSelf);
    }
    if ((0x1c19ffe3fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__26(vlSelf);
    }
    if ((0x1c19fff3fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__28(vlSelf);
    }
    if ((0x1c1860f9bULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__29(vlSelf);
    }
    if ((0x1c19fffbfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__30(vlSelf);
    }
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_sequent__TOP__1(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_sequent__TOP__1\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__dot_sum_01;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__dot_sum_01 = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__dot_sum_23;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__dot_sum_23 = 0;
    QData/*32:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__selected_mult_out;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__selected_mult_out = 0;
    QData/*32:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__add_out;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__add_out = 0;
    QData/*32:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__addend;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__addend = 0;
    QData/*32:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat_result = 0;
    SData/*15:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat16_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat16_result = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat32_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat32_result = 0;
    VlWide<3>/*65:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__requant_shifted;
    VL_ZERO_W(66, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__requant_shifted);
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__requant_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__requant_result = 0;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_12;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_30;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_34;
    VlWide<3>/*95:0*/ __Vtemp_35;
    VlWide<3>/*95:0*/ __Vtemp_37;
    VlWide<3>/*95:0*/ __Vtemp_38;
    VlWide<3>/*95:0*/ __Vtemp_39;
    VlWide<3>/*95:0*/ __Vtemp_40;
    VlWide<3>/*95:0*/ __Vtemp_43;
    VlWide<3>/*95:0*/ __Vtemp_44;
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_47;
    VlWide<3>/*95:0*/ __Vtemp_48;
    VlWide<3>/*95:0*/ __Vtemp_50;
    VlWide<3>/*95:0*/ __Vtemp_51;
    VlWide<3>/*95:0*/ __Vtemp_52;
    // Body
    if ((0xbU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_a 
            = (QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_a 
                               + (((- (IData)((1U & 
                                               (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [1U] 
                                                >> 7U)))) 
                                   << 8U) | (0xffU 
                                             & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                             [1U])))));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_b 
            = (QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_b 
                               + (((- (IData)((1U & 
                                               (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [1U] 
                                                >> 0xfU)))) 
                                   << 8U) | (0xffU 
                                             & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [1U] 
                                                >> 8U))))));
        VL_EXTENDS_WQ(66,33, __Vtemp_3, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_a);
        __Vtemp_4[0U] = __Vtemp_3[0U];
        __Vtemp_4[1U] = __Vtemp_3[1U];
        __Vtemp_4[2U] = (3U & __Vtemp_3[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp_6, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_b);
        __Vtemp_7[0U] = __Vtemp_6[0U];
        __Vtemp_7[1U] = __Vtemp_6[1U];
        __Vtemp_7[2U] = (3U & __Vtemp_6[2U]);
        VL_MULS_WWW(66, __Vtemp_8, __Vtemp_4, __Vtemp_7);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[0U] 
            = __Vtemp_8[0U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[1U] 
            = __Vtemp_8[1U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[2U] 
            = (3U & __Vtemp_8[2U]);
    } else if ((0xcU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        VL_EXTENDS_WI(66,8, __Vtemp_11, (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U]));
        __Vtemp_12[0U] = __Vtemp_11[0U];
        __Vtemp_12[1U] = __Vtemp_11[1U];
        __Vtemp_12[2U] = (3U & __Vtemp_11[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_14, (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data));
        __Vtemp_15[0U] = __Vtemp_14[0U];
        __Vtemp_15[1U] = __Vtemp_14[1U];
        __Vtemp_15[2U] = (3U & __Vtemp_14[2U]);
        VL_MULS_WWW(66, __Vtemp_16, __Vtemp_12, __Vtemp_15);
        VL_EXTENDS_WI(66,8, __Vtemp_18, (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U] 
                                                  >> 8U)));
        __Vtemp_19[0U] = __Vtemp_18[0U];
        __Vtemp_19[1U] = __Vtemp_18[1U];
        __Vtemp_19[2U] = (3U & __Vtemp_18[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_21, (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data 
                                                  >> 8U)));
        __Vtemp_22[0U] = __Vtemp_21[0U];
        __Vtemp_22[1U] = __Vtemp_21[1U];
        __Vtemp_22[2U] = (3U & __Vtemp_21[2U]);
        VL_MULS_WWW(66, __Vtemp_23, __Vtemp_19, __Vtemp_22);
        VL_ADD_W(3, __Vtemp_24, __Vtemp_16, __Vtemp_23);
        VL_EXTENDS_WI(66,8, __Vtemp_26, (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U] 
                                                  >> 0x10U)));
        __Vtemp_27[0U] = __Vtemp_26[0U];
        __Vtemp_27[1U] = __Vtemp_26[1U];
        __Vtemp_27[2U] = (3U & __Vtemp_26[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_29, (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data 
                                                  >> 0x10U)));
        __Vtemp_30[0U] = __Vtemp_29[0U];
        __Vtemp_30[1U] = __Vtemp_29[1U];
        __Vtemp_30[2U] = (3U & __Vtemp_29[2U]);
        VL_MULS_WWW(66, __Vtemp_31, __Vtemp_27, __Vtemp_30);
        VL_ADD_W(3, __Vtemp_32, __Vtemp_24, __Vtemp_31);
        VL_EXTENDS_WI(66,8, __Vtemp_34, (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U] 
                                         >> 0x18U));
        __Vtemp_35[0U] = __Vtemp_34[0U];
        __Vtemp_35[1U] = __Vtemp_34[1U];
        __Vtemp_35[2U] = (3U & __Vtemp_34[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_37, (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data 
                                         >> 0x18U));
        __Vtemp_38[0U] = __Vtemp_37[0U];
        __Vtemp_38[1U] = __Vtemp_37[1U];
        __Vtemp_38[2U] = (3U & __Vtemp_37[2U]);
        VL_MULS_WWW(66, __Vtemp_39, __Vtemp_35, __Vtemp_38);
        VL_ADD_W(3, __Vtemp_40, __Vtemp_32, __Vtemp_39);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[0U] 
            = __Vtemp_40[0U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[1U] 
            = __Vtemp_40[1U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[2U] 
            = (3U & __Vtemp_40[2U]);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_a = 0ULL;
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_b = 0ULL;
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_a 
            = (((QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_a 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_a)));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_b 
            = (((QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_b 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_b)));
        VL_EXTENDS_WQ(66,33, __Vtemp_43, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_a);
        __Vtemp_44[0U] = __Vtemp_43[0U];
        __Vtemp_44[1U] = __Vtemp_43[1U];
        __Vtemp_44[2U] = (3U & __Vtemp_43[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp_46, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_b);
        __Vtemp_47[0U] = __Vtemp_46[0U];
        __Vtemp_47[1U] = __Vtemp_46[1U];
        __Vtemp_47[2U] = (3U & __Vtemp_46[2U]);
        VL_MULS_WWW(66, __Vtemp_48, __Vtemp_44, __Vtemp_47);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[0U] 
            = __Vtemp_48[0U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[1U] 
            = __Vtemp_48[1U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[2U] 
            = (3U & __Vtemp_48[2U]);
    }
    if (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__macc) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__add_a 
            = (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[0U]));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__add_b 
            = (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[3U]));
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__add_a 
            = (((QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_a 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_a)));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__add_b 
            = (((QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_b 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_b)));
    }
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__addend 
        = (0x1ffffffffULL & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__subtract)
                              ? (1ULL + (~ vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__add_b))
                              : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__add_b));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__add_out 
        = (0x1ffffffffULL & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__add_a 
                             + cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__addend));
    VL_SHIFTRS_WWI(66,66,5, __Vtemp_50, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide, 
                   (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                             [1U] >> 0x10U)));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__requant_shifted[0U] 
        = __Vtemp_50[0U];
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__requant_shifted[1U] 
        = __Vtemp_50[1U];
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__requant_shifted[2U] 
        = (3U & __Vtemp_50[2U]);
    __Vtemp_51[0U] = 0x7fU;
    __Vtemp_51[1U] = 0U;
    __Vtemp_51[2U] = 0U;
    __Vtemp_52[0U] = 0xffffff80U;
    __Vtemp_52[1U] = 0xffffffffU;
    __Vtemp_52[2U] = 3U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__requant_result 
        = (VL_LTS_IWW(66, __Vtemp_51, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__requant_shifted)
            ? 0x7fU : (VL_GTS_IWW(66, __Vtemp_52, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__requant_shifted)
                        ? 0xffffff80U : cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__requant_shifted[0U]));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__selected_mult_out 
        = (0x1ffffffffULL & ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__saturate_mode))
                              ? ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                               [3U] 
                                               >> 2U)))
                                  ? (QData)((IData)(
                                                    (0x1ffU 
                                                     & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[0U])))
                                  : ((1U == (3U & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                                   [3U] 
                                                   >> 2U)))
                                      ? (QData)((IData)(
                                                        (0x1ffffU 
                                                         & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[0U])))
                                      : ((2U == (3U 
                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                                    [3U] 
                                                    >> 2U)))
                                          ? (((QData)((IData)(
                                                              vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[0U])))
                                          : (((QData)((IData)(
                                                              vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[0U]))))))
                              : (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[0U])))));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result = 0ULL;
    if (((((((((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op)) 
               | (1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
              | (2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
             | (3U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
            | (4U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
           | (5U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
          | (6U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
         | (7U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result 
            = ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__add_out
                : ((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                    ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__add_out
                    : ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                        ? (QData)((IData)(VL_SHIFTL_III(32,32,32, 
                                                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U], vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data)))
                        : ((3U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                            ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__selected_mult_out
                            : ((4U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                                ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__add_out
                                : ((5U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                                    ? (QData)((IData)(
                                                      (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U] 
                                                       ^ vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data)))
                                    : ((6U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                                        ? (QData)((IData)(
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U], vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data)))
                                        : (QData)((IData)(
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U], vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data))))))))));
    } else if ((8U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result 
            = (QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U] 
                               | vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data)));
    } else if ((9U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result 
            = (QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U] 
                               & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data)));
    } else if ((0xaU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__selected_mult_out;
    } else if ((0xbU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__add_out;
    } else if ((0xcU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__add_out;
    } else if ((0xdU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result 
            = (((QData)((IData)((0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data))) 
                << 0x18U) | (QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U] 
                                             >> 8U))));
    }
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat16_result 
        = (VL_GTS_IQQ(33, 0x1ffff8000ULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result)
            ? 0x8000U : (VL_LTS_IQQ(33, 0x7fffULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result)
                          ? 0x7fffU : (0xffffU & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result))));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat32_result 
        = (VL_GTS_IQQ(33, 0x180000000ULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result)
            ? 0x80000000U : (VL_LTS_IQQ(33, 0x7fffffffULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result)
                              ? 0x7fffffffU : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result)));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat_result 
        = (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result);
    if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening))) {
        if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                          [3U] >> 2U)))) {
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat_result 
                = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat16_result;
        } else if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                 [3U] >> 2U)))) {
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat_result 
                = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat32_result;
        }
    } else if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat32_result;
    } else if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat_result 
            = (VL_GTS_IQQ(33, 0x1ffffff80ULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result)
                ? 0x80U : (VL_LTS_IQQ(33, 0x7fULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result)
                            ? 0x7fU : (0xffU & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result))));
    } else if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat16_result;
    } else if ((2U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat32_result;
    }
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_out 
        = ((4U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
            ? ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                ? ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                    ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__requant_result
                    : ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result 
                                      >> 0x1fU))) ? 
                       (- (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result))
                        : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result)))
                : ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                    ? ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result 
                                      >> 0x1fU))) ? 
                       VL_SHIFTRS_III(32,32,5, (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result), 
                                      (0x1fU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                       [1U])) : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result))
                    : ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result 
                                      >> 0x1fU))) ? 0U
                        : (((QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result)) 
                            > (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                              [1U])))
                            ? vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                           [1U] : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result)))))
            : ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                ? ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                    ? ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result 
                                      >> 0x1fU))) ? 0U
                        : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result))
                    : ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result 
                                      >> 0x20U))) ? 
                       vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U]
                        : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data))
                : ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                    ? ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result 
                                      >> 0x20U))) ? vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data
                        : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U])
                    : ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__saturate_mode))
                        ? (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__arith_result)
                        : cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sat_result))));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__dot_sum_01 
        = (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_out 
           + vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_out);
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__dot_sum_23 
        = (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_out 
           + vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_out);
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__dot_sum_all 
        = (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__dot_sum_01 
           + cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__dot_sum_23);
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__reg_apu_result = 0U;
    if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__apu_result_select))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__apu_result_select))) {
            if ((0U == (7U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                        [1U]))) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__reg_apu_result 
                    = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__perf_vec_instr_count;
            } else if ((1U == (7U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                               [1U]))) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__reg_apu_result 
                    = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__perf_vlsu_stall_count;
            } else if ((2U == (7U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                               [1U]))) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__reg_apu_result 
                    = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__perf_compute_cycles;
            } else if ((3U == (7U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                               [1U]))) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__reg_apu_result 
                    = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__perf_skipped_ops;
            } else if ((4U == (7U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                               [1U]))) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__reg_apu_result 
                    = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__perf_compacted_cycles;
            }
        } else {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__reg_apu_result 
                = ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cycle_count))
                    ? vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__dot_sum_all
                    : (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__dot_accumulator 
                       + vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__dot_sum_all));
        }
    } else if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__apu_result_select))) {
        if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                          [3U] >> 2U)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__reg_apu_result 
                = (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U] 
                                      >> 7U)))) << 8U) 
                   | (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U]));
        } else if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                 [3U] >> 2U)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__reg_apu_result 
                = (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U] 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U]));
        } else if ((2U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                 [3U] >> 2U)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__reg_apu_result 
                = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U];
        }
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__reg_apu_result 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__vl_next;
    }
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__0(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__0\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data;
    VL_ZERO_W(128, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data);
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_final;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_final = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_final;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_final = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_final;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_final = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_final;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_final = 0;
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_3 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op) 
           & ((0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data) 
              | (0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U])));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_2 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op) 
           & ((0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data) 
              | (0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U])));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_1 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op) 
           & ((0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data) 
              | (0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U])));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_0 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op) 
           & ((0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data) 
              | (0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U])));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_final 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_3)
            ? 0U : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_out);
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_final 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_2)
            ? 0U : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_out);
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_final 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_1)
            ? 0U : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_out);
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_final 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_0)
            ? 0U : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_out);
    if ((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data_src))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[0U] 
            = (((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                 [3U] << 0x18U) | (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                                   [2U] << 0x10U)) 
               | ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                   [1U] << 8U) | vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                  [0U]));
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[1U] 
            = (((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                 [7U] << 0x18U) | (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                                   [6U] << 0x10U)) 
               | ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                   [5U] << 8U) | vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                  [4U]));
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[2U] 
            = (IData)((((QData)((IData)((((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                                           [0xfU] << 0x18U) 
                                          | (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                                             [0xeU] 
                                             << 0x10U)) 
                                         | ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                                             [0xdU] 
                                             << 8U) 
                                            | vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                                            [0xcU])))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                                                       [0xbU] 
                                                       << 0x18U) 
                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                                                         [0xaU] 
                                                         << 0x10U)) 
                                                     | ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                                                         [9U] 
                                                         << 8U) 
                                                        | vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                                                        [8U]))))));
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[3U] 
            = (IData)(((((QData)((IData)((((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                                            [0xfU] 
                                            << 0x18U) 
                                           | (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                                              [0xeU] 
                                              << 0x10U)) 
                                          | ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                                              [0xdU] 
                                              << 8U) 
                                             | vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                                             [0xcU])))) 
                         << 0x20U) | (QData)((IData)(
                                                     (((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                                                        [0xbU] 
                                                        << 0x18U) 
                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                                                          [0xaU] 
                                                          << 0x10U)) 
                                                      | ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                                                          [9U] 
                                                          << 8U) 
                                                         | vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg
                                                         [8U]))))) 
                       >> 0x20U));
    } else if ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data_src))) {
        if ((3U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[0U] 
                = ((2U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                    [2U]) ? ((1U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                              [2U]) ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_final
                              : cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_final)
                    : ((1U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                        [2U]) ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_final
                        : cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_final));
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[1U] = 0U;
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[2U] = 0U;
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[3U] = 0U;
        } else {
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[0U] 
                = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_final;
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[1U] 
                = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_final;
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[2U] 
                = (IData)((((QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_final)) 
                            << 0x20U) | (QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_final))));
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[3U] 
                = (IData)(((((QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_final)) 
                             << 0x20U) | (QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_final))) 
                           >> 0x20U));
        }
    } else if ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data_src))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[0U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[0U];
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[1U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[1U];
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[2U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[2U];
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[3U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[3U];
    } else {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[0U] = 0U;
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[1U] = 0U;
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[2U] = 0U;
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[3U] = 0U;
    }
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data0 = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data1 = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data2 = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data3 = 0U;
    if (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_load) {
        if ((0U == (3U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                    [3U]))) {
            if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr)))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data0 
                        = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[0U];
                }
                if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data1 
                        = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[1U];
                }
            }
            if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr))) {
                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr)))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data2 
                        = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[2U];
                }
                if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data3 
                        = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[3U];
                }
            }
        } else if ((1U == (3U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                           [3U]))) {
            if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr) 
                          >> 1U)))) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data0 
                    = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[0U];
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data1 
                    = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[1U];
            }
            if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr))) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data2 
                    = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[2U];
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data3 
                    = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[3U];
            }
        } else if ((2U == (3U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                           [3U]))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data0 
                = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[0U];
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data1 
                = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[1U];
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data2 
                = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[2U];
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data3 
                = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[3U];
        }
    } else {
        if ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__eff_vsew))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data0 
                = (((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[3U] 
                     << 0x18U) | (0xff0000U & (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[2U] 
                                               << 0x10U))) 
                   | ((0xff00U & (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[1U] 
                                  << 8U)) | (0xffU 
                                             & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[0U])));
        } else if ((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__eff_vsew))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data0 
                = ((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[1U] 
                    << 0x10U) | (0xffffU & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[0U]));
        } else if ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__eff_vsew))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data0 
                = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[0U];
        }
        if ((0U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__eff_vsew))) {
            if ((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__eff_vsew))) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data1 
                    = ((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[3U] 
                        << 0x10U) | (0xffffU & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[2U]));
            } else if ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__eff_vsew))) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data1 
                    = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[1U];
            }
            if ((1U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__eff_vsew))) {
                if ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__eff_vsew))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data2 
                        = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[2U];
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data3 
                        = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data[3U];
                }
            }
        }
    }
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__1(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__1\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__dmem_gnt = ((0x100U 
                                                  > (IData)(vlSelfRef.cv32e40x_wrapper__DOT__req_count)) 
                                                 & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__amem_req)) 
                                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid)));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__3(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__3\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_a_mux_sel;
    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_a_mux_sel = 0;
    QData/*52:0*/ cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl;
    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0;
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_valid 
        = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
            >> 0x1dU) & ((2U > (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                         & ((0U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_0_0) 
                            | (((1U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_0_0) 
                                & (0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q))) 
                               | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                                  >> 0x1cU)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__instr_valid 
        = (1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                  >> 0xbU) & ((~ vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]) 
                              & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                    >> 4U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__instr_valid 
        = (IData)(((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                    >> 0x1cU) & (0U == (0x44U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]))));
    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
        = (0x1fffffffffffefULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
        = (0x1000000000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
    if ((4U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
        if ((2U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
            if ((1U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
                if ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                     >> 0x1fU)) {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                } else if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                } else if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                    if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0x4c0000000000ULL | 
                               (0x1f03ffffffffffULL 
                                & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                        if ((0U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                          >> 8U)))) {
                            if ((0U == ((0x3e0U & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 6U)) 
                                        | (0x1fU & 
                                           (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                            >> 3U))))) {
                                if ((0U == (0xfffU 
                                            & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                               >> 0x10U)))) {
                                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        = (4ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                                } else if ((1U == (0xfffU 
                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                      >> 0x10U)))) {
                                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        = (8ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                                } else if ((0x302U 
                                            == (0xfffU 
                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 0x10U)))) {
                                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        = (0x40ULL 
                                           | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                                } else if ((0x7b2U 
                                            == (0xfffU 
                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 0x10U)))) {
                                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        = ((0x100U 
                                            & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])
                                            ? (0x20ULL 
                                               | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
                                            : 0x24c1000000090ULL);
                                } else if ((0x105U 
                                            == (0xfffU 
                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 0x10U)))) {
                                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        = ((0x1ffffffffffffdULL 
                                            & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                                           | ((QData)((IData)(
                                                              (1U 
                                                               & (~ 
                                                                  (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                                                                   >> 3U))))) 
                                              << 1U));
                                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        = (0x8000000000ULL 
                                           | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        = (0x1ffff3ffffffffULL 
                                           & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                        = (0x1f03ffffffffffULL 
                                           & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                                } else {
                                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                                }
                            } else {
                                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                            }
                        } else {
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x1800000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x8000000000ULL 
                                   | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x1fffe3ffffffffULL 
                                   & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x4c0000000000ULL 
                                   | (0x1f03ffffffffffULL 
                                      & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                            if ((0x400U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
                                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                    = (0x20000000000ULL 
                                       | (0x1ffcffffffffffULL 
                                          & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                            } else {
                                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                    = (0x2000000ULL 
                                       | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                    = (0x1ffcffffffffffULL 
                                       & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            }
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                 >> 8U)))
                                    ? (0x200000ULL 
                                       | (0x1fffffff9fffffULL 
                                          & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))
                                    : ((2U == (3U & 
                                               (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                >> 8U)))
                                        ? ((0x1fffffff9fffffULL 
                                            & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                                           | ((QData)((IData)(
                                                              ((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                    >> 0xbU)))
                                                                ? 0U
                                                                : 2U))) 
                                              << 0x15U))
                                        : ((3U == (3U 
                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                      >> 8U)))
                                            ? ((0x1fffffff9fffffULL 
                                                & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                                               | ((QData)((IData)(
                                                                  ((0U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                        >> 0xbU)))
                                                                    ? 0U
                                                                    : 3U))) 
                                                  << 0x15U))
                                            : 0x24c1000000090ULL)));
                            if ((1U & (IData)((cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                               >> 4U)))) {
                                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                            }
                        }
                    } else {
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                    }
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                }
            } else if ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                        >> 0x1fU)) {
                if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                    if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                        if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0xa000000000000ULL 
                                   | (0x1ffffffffffffULL 
                                      & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x18000000000ULL 
                                   | (0x1ffc7fffffffffULL 
                                      & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0xc00000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x1f03ffffffffffULL 
                                   & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x1000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                        } else {
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                        }
                    } else {
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                    }
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                }
            } else if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                    if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                        if ((0U != (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                          >> 8U)))) {
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                        } else {
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x14000000000000ULL 
                                   | (0x1ffffffffffffULL 
                                      & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x18000000000ULL 
                                   | (0x1ffc7fffffffffULL 
                                      & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0xc00000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x1f03ffffffffffULL 
                                   & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x3000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                        }
                    } else {
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                    }
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                }
            } else if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x1e000000000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x4000000000ULL | (0x1fff9fffffffffULL 
                                              & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x6000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = ((0x400U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                            ? ((0x1f03ffffffffffULL 
                                & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                               | ((QData)((IData)((
                                                   (0x200U 
                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                                                    ? 
                                                   ((0x100U 
                                                     & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                                                     ? 0x17U
                                                     : 0x16U)
                                                    : 
                                                   ((0x100U 
                                                     & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                                                     ? 0x1dU
                                                     : 0x1cU)))) 
                                  << 0x2aU)) : ((0x200U 
                                                 & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                                                 ? 0x24c1000000090ULL
                                                 : 
                                                ((0x1f03ffffffffffULL 
                                                  & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                                                 | ((QData)((IData)(
                                                                    ((0x100U 
                                                                      & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                                                                      ? 0x11U
                                                                      : 0x10U))) 
                                                    << 0x2aU))));
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                }
            } else {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
            }
        } else {
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
        }
    } else if ((2U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
        if ((1U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
            if ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                 >> 0x1fU)) {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
            } else if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                    if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0x28000000000ULL | (0x1ffc7fffffffffULL 
                                                   & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0x1800000000ULL | (0x1fffe3ffffffffULL 
                                                  & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0x1f03ffffffffffULL 
                               & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0x1000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                    } else {
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                    }
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                }
            } else if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                    if (((3U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                       >> 0x1aU))) 
                         | (2U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                         >> 0x1aU))))) {
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                    } else {
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (0x3000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                        if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                      >> 0x18U)))) {
                            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                = (0x4000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                        }
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                            = (((((((((0U == ((0x1f8U 
                                               & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                  >> 0x12U)) 
                                              | (7U 
                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                    >> 8U)))) 
                                      | (0x100U == 
                                         ((0x1f8U & 
                                           (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                            >> 0x12U)) 
                                          | (7U & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 8U))))) 
                                     | (2U == ((0x1f8U 
                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 0x12U)) 
                                               | (7U 
                                                  & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                     >> 8U))))) 
                                    | (3U == ((0x1f8U 
                                               & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                  >> 0x12U)) 
                                              | (7U 
                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                    >> 8U))))) 
                                   | (4U == ((0x1f8U 
                                              & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                 >> 0x12U)) 
                                             | (7U 
                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 8U))))) 
                                  | (6U == ((0x1f8U 
                                             & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                >> 0x12U)) 
                                            | (7U & 
                                               (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                >> 8U))))) 
                                 | (7U == ((0x1f8U 
                                            & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                               >> 0x12U)) 
                                           | (7U & 
                                              (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                               >> 8U))))) 
                                | (1U == ((0x1f8U & 
                                           (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                            >> 0x12U)) 
                                          | (7U & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 8U)))))
                                ? ((0x1f03ffffffffffULL 
                                    & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                                   | ((QData)((IData)(
                                                      ((0U 
                                                        == 
                                                        ((0x1f8U 
                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                             >> 0x12U)) 
                                                         | (7U 
                                                            & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                               >> 8U))))
                                                        ? 0U
                                                        : 
                                                       ((0x100U 
                                                         == 
                                                         ((0x1f8U 
                                                           & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                              >> 0x12U)) 
                                                          | (7U 
                                                             & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                >> 8U))))
                                                         ? 8U
                                                         : 
                                                        ((2U 
                                                          == 
                                                          ((0x1f8U 
                                                            & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                               >> 0x12U)) 
                                                           | (7U 
                                                              & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                 >> 8U))))
                                                          ? 0x1aU
                                                          : 
                                                         ((3U 
                                                           == 
                                                           ((0x1f8U 
                                                             & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                >> 0x12U)) 
                                                            | (7U 
                                                               & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                  >> 8U))))
                                                           ? 0x13U
                                                           : 
                                                          ((4U 
                                                            == 
                                                            ((0x1f8U 
                                                              & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                 >> 0x12U)) 
                                                             | (7U 
                                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                   >> 8U))))
                                                            ? 4U
                                                            : 
                                                           ((6U 
                                                             == 
                                                             ((0x1f8U 
                                                               & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                  >> 0x12U)) 
                                                              | (7U 
                                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                    >> 8U))))
                                                             ? 6U
                                                             : 
                                                            ((7U 
                                                              == 
                                                              ((0x1f8U 
                                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                   >> 0x12U)) 
                                                               | (7U 
                                                                  & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                                     >> 8U))))
                                                              ? 7U
                                                              : 1U))))))))) 
                                      << 0x2aU)) : 
                               ((5U == ((0x1f8U & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 0x12U)) 
                                        | (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                 >> 8U))))
                                 ? (0x140000000000ULL 
                                    | (0x1f03ffffffffffULL 
                                       & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))
                                 : ((0x105U == ((0x1f8U 
                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                    >> 0x12U)) 
                                                | (7U 
                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                      >> 8U))))
                                     ? (0x340000000000ULL 
                                        | (0x1f03ffffffffffULL 
                                           & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))
                                     : 0x24c1000000090ULL)));
                    }
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                }
            } else {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
            }
        } else if ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                    >> 0x1fU)) {
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
        } else if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
        } else if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
            if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x180000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x6000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x1effffffffffffULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x2000000000ULL | (0x1fff9fffffffffULL 
                                          & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x400000000ULL | (0x1ffff3ffffffffULL 
                                         & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x8000000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = ((0x1ffffffff9ffffULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                       | ((QData)((IData)((3U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                 >> 8U)))) 
                          << 0x11U));
                if ((1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                            >> 0xaU) | (3U == (3U & 
                                               (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                >> 8U)))))) {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                }
            } else {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
            }
        } else {
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
        }
    } else if ((1U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
        if ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
             >> 0x1fU)) {
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
        } else if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
            if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x18000000000ULL | (0x1ffc7fffffffffULL 
                                               & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x800000000ULL | (0x1ffff3ffffffffULL 
                                             & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x1f03ffffffffffULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x1000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                }
            } else {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
            }
        } else if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
            if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x8000000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x1ffff3ffffffffULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                    = (0x3000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                if ((0x400U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = ((0x200U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                            ? ((0x1f03ffffffffffULL 
                                & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                               | ((QData)((IData)((
                                                   (0x100U 
                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                                                    ? 7U
                                                    : 6U))) 
                                  << 0x2aU)) : ((0x100U 
                                                 & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                      >> 0x15U)))
                                                  ? 
                                                 (0x140000000000ULL 
                                                  | (0x1f03ffffffffffULL 
                                                     & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))
                                                  : 
                                                 ((0x20U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                       >> 0x15U)))
                                                   ? 
                                                  (0x340000000000ULL 
                                                   | (0x1f03ffffffffffULL 
                                                      & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))
                                                   : 0x24c1000000090ULL))
                                                 : 
                                                (0x100000000000ULL 
                                                 | (0x1f03ffffffffffULL 
                                                    & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl))));
                } else if ((0x200U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = ((0x1f03ffffffffffULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                           | ((QData)((IData)(((0x100U 
                                                & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])
                                                ? 0x13U
                                                : 0x1aU))) 
                              << 0x2aU));
                } else if ((0x100U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x40000000000ULL | (0x1f03ffffffffffULL 
                                               & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                    if ((0U != (0x7fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                         >> 0x15U)))) {
                        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                    }
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x1f03ffffffffffULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
                }
            } else {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
            }
        } else {
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
        }
    } else if ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                >> 0x1fU)) {
        if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
            if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = (0x4c0000000000ULL | (0x1f03ffffffffffULL 
                                                & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl));
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                        = ((0U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                         >> 8U))) ? 
                           (1ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
                            : ((1U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                             >> 8U)))
                                ? (1ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
                                : 0x24c1000000090ULL));
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
                }
            } else {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
            }
        } else {
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
        }
    } else if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
    } else if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
        if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                = (0x100000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                = (0x3000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                = (0x1effffffffffffULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                = (0x8000000000ULL | cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                = (0x1ffff3ffffffffULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl);
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                = ((0x1ffffffff8ffffULL & cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl) 
                   | ((QData)((IData)(((6U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                              >> 7U)) 
                                       | (1U & (~ (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 0xaU)))))) 
                      << 0x10U));
            if ((((7U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                >> 8U))) | (6U == (7U 
                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                      >> 8U)))) 
                 | (3U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                 >> 8U))))) {
                cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
            }
        } else {
            cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
        }
    } else {
        cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x24c1000000090ULL;
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__instr_valid 
        = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
            >> 0xbU) & (0U == (0x22U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U])));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_en_gated 
        = (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
             >> 0xbU) & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                         >> 2U)) & (0U == (0x22U & 
                                           vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U])));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_rdata_int 
        = ((0x800U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
            ? ((0x400U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                ? ((0x200U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                    ? ((0x100U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                        ? ((0x80U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                            ? 0U : ((0x40U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                     ? 0U : ((0x20U 
                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? 0U : 
                                             ((0x10U 
                                               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? ((8U 
                                                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 0x14U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0x602U
                                                      : 0U))))
                                               : 0U))))
                        : 0U) : ((0x100U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                  ? 0U : ((0x80U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                           ? ((0x40U 
                                               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? 0U
                                               : ((0x20U 
                                                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                      ? 0U
                                                      : 
                                                     (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                         ? 0U
                                                         : 
                                                        (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (((IData)(0x1fU) 
                                                           + 
                                                           (0x7ffU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (0x3fU 
                                                           & (((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                          ? 0U
                                                          : 
                                                         (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                           (0x3fU 
                                                            & (((IData)(0x20U) 
                                                                + 
                                                                VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))))))))
                                           : ((0x40U 
                                               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? 0U
                                               : ((0x20U 
                                                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                      ? 0U
                                                      : 
                                                     (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                         ? 0U
                                                         : 
                                                        (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (((IData)(0x1fU) 
                                                           + 
                                                           (0x7ffU 
                                                            & VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (0x3fU 
                                                           & (VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                          ? 0U
                                                          : 
                                                         (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                           (0x3fU 
                                                            & (VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))))))))))
                : ((0x200U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                    ? ((0x100U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                        ? ((0x80U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                            ? ((0x40U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                ? 0U : ((0x20U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? 0U : ((0x10U 
                                                  & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        VL_SHIFTL_III(11,32,32, 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (0x3fU 
                                                      & (((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (0x3fU 
                                                       & (((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                      ? 0U
                                                      : 
                                                     (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))))))))
                            : ((0x40U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                ? 0U : ((0x20U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? 0U : ((0x10U 
                                                  & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(11,32,32, 
                                                                     (0x1fU 
                                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x7ffU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(11,32,32, 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (0x3fU 
                                                      & (VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(11,32,32, 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(11,32,32, 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x7ffU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (0x3fU 
                                                       & (VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                      ? 0U
                                                      : 
                                                     (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))))))))
                        : 0U) : 0U)) : ((0x400U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? ((0x200U 
                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                             ? ((0x100U 
                                                 & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                 ? 
                                                ((0x80U 
                                                  & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 
                                                 ((0x40U 
                                                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dscratch1_csr_i__DOT__rdata_q
                                                         : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dscratch0_csr_i__DOT__rdata_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dpc_csr_i__DOT__rdata_q
                                                         : 
                                                        ((0xfffffff0U 
                                                          & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q) 
                                                         | ((8U 
                                                             & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                                                >> 0x14U)) 
                                                            | (7U 
                                                               & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q)))))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : 4U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__tmatch_value_csr_i__DOT__rdata_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__tmatch_control_csr_i__DOT__rdata_q
                                                         : 0U)))))
                                                    : 0U))
                                                  : 0U)
                                                 : 0U)
                                             : 0U) : 
                                        ((0x200U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                          ? ((0x100U 
                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? ((0x80U 
                                                  & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_q))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcause_csr_i__DOT__rdata_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q
                                                         : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q))))))
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(10,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x3ffU 
                                                          & VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(10,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                        (0x1fU 
                                                         & (VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(10,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(10,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x3ffU 
                                                           & VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                         (0x1fU 
                                                          & (VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                         ? 0U
                                                         : 
                                                        (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                         (((IData)(0x1fU) 
                                                           + 
                                                           (0x3ffU 
                                                            & VL_SHIFTL_III(10,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                          (0x1fU 
                                                           & (VL_SHIFTL_III(10,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        (((0U 
                                                           == 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(10,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                           ? 0U
                                                           : 
                                                          (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                           (((IData)(0x1fU) 
                                                             + 
                                                             (0x3ffU 
                                                              & VL_SHIFTL_III(10,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                            >> 5U)] 
                                                           << 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(10,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                            (0x1fU 
                                                             & (VL_SHIFTL_III(10,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                                >> 5U))] 
                                                            >> 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(10,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                         : 0U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_q)))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q
                                                         : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mie_csr_i__DOT__rdata_q))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0x40001104U
                                                         : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q))))))))
                                              : 0U)
                                          : 0U)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
        = ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                          >> 4U))) ? ((1U & (IData)(
                                                    (cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                     >> 4U)))
                                       ? 0x24c1000000090ULL
                                       : cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
            : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_en_gated 
        = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
            >> 0x12U) & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__instr_valid));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_split_ex = 0U;
    if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_en_gated) 
         & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__split_q)))) {
        if ((2U == (3U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                           << 1U) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
                                     >> 0x1fU))))) {
            if ((0U != (3U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_split_ex = 1U;
            }
        } else if ((1U == (3U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                  << 1U) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
                                            >> 0x1fU))))) {
            if ((3U == (3U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_split_ex = 1U;
            }
        }
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans_valid 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_en_gated) 
           & (2U > (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__cnt_q)));
    if ((0x10U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U])) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__op_c_mux_sel = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_b_mux_sel = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_raw_id = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = 1U;
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__op_c_mux_sel 
            = (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                             >> 0x25U)));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
            = (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                             >> 0x28U)));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_b_mux_sel 
            = (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                             >> 0x22U)));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_raw_id 
            = (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                             >> 0x33U)));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel 
            = (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                             >> 0x31U)));
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_en_id 
        = (1U & ((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                     >> 4U)) & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                        >> 0x17U))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__alu_op_b_mux_sel 
        = (1U & ((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                     >> 4U)) & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                        >> 0x27U))));
    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_a_mux_sel 
        = (1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                  >> 4U) | (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                    >> 0x24U))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_valid = 0U;
    if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_valid = 1U;
        }
    } else if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state)))) {
        if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                      >> 0x11U)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_valid = 1U;
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_en_gated)))) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_valid = 0U;
    }
    if (cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_a_mux_sel) {
        if (cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_a_mux_sel) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_a = 0U;
        }
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_a 
            = (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                        >> 0xbU));
    }
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__5(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__5\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb 
        = (1U & ((IData)(((0U != (0x70680U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])) 
                          | (0U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status)))) 
                 & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                    >> 0xbU)));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__7(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__7\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated 
        = (((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event) 
              & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb))) 
             & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb))) 
            & (~ vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U])) 
           & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                 >> 4U)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
        = ((0xff01ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U]) 
           | (((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                 << 0x17U) | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                              << 0x16U)) | ((0xffe00000U 
                                             & (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                                 << 0x15U) 
                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                                                   << 9U))) 
                                            | (0xfff00000U 
                                               & (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                                   << 0x14U) 
                                                  & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                                                     << 5U))))) 
              | ((0xfff80000U & (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                  << 0x13U) & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                                               << 5U))) 
                 | ((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                      & (0x6000U == (0x6000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U]))) 
                     << 0x12U) | (0x20000U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                                              << 2U))))));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__9(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__9\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((((0xfc0000U 
                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                       << 0x1cU) 
                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                         >> 4U)) 
                                                     + 
                                                     (1U 
                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                         >> 0xaU))) 
                                                    << 0x12U)) 
                                                | (0x3f000U 
                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                         << 2U) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                           >> 0x1eU)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                           >> 9U))) 
                                                      << 0xcU))) 
                                               | ((0xfc0U 
                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                         << 8U) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                           >> 0x18U)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                           >> 8U))) 
                                                      << 6U)) 
                                                  | (0x3fU 
                                                     & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                          << 0xeU) 
                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                            >> 0x12U)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                            >> 7U)))))))) 
                              << 0x18U) | (QData)((IData)(
                                                          (((0xfc0000U 
                                                             & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                   << 0x14U) 
                                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                     >> 0xcU)) 
                                                                 + 
                                                                 (1U 
                                                                  & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                     >> 6U))) 
                                                                << 0x12U)) 
                                                            | (0x3f000U 
                                                               & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                     << 0x1aU) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                       >> 6U)) 
                                                                   + 
                                                                   (1U 
                                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                       >> 5U))) 
                                                                  << 0xcU))) 
                                                           | ((0xfc0U 
                                                               & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                   + 
                                                                   (1U 
                                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                       >> 4U))) 
                                                                  << 6U)) 
                                                              | (0x3fU 
                                                                 & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                      << 6U) 
                                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                        >> 0x1aU)) 
                                                                    + 
                                                                    (1U 
                                                                     & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                        >> 3U))))))))));
    __Vtemp_2[1U] = (((IData)((((QData)((IData)((((0xfc0000U 
                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                         << 0xcU) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                           >> 0x14U)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                           >> 0x12U))) 
                                                      << 0x12U)) 
                                                  | (0x3f000U 
                                                     & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                           << 0x12U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                             >> 0xeU)) 
                                                         + 
                                                         (1U 
                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                             >> 0x11U))) 
                                                        << 0xcU))) 
                                                 | ((0xfc0U 
                                                     & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                             >> 8U)) 
                                                         + 
                                                         (1U 
                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                             >> 0x10U))) 
                                                        << 6U)) 
                                                    | (0x3fU 
                                                       & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                            << 0x1eU) 
                                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                              >> 2U)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                              >> 0xfU)))))))) 
                                << 0x18U) | (QData)((IData)(
                                                            (((0xfc0000U 
                                                               & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                     << 4U) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                       >> 0x1cU)) 
                                                                   + 
                                                                   (1U 
                                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                       >> 0xeU))) 
                                                                  << 0x12U)) 
                                                              | (0x3f000U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                       << 0xaU) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                         >> 0x16U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                         >> 0xdU))) 
                                                                    << 0xcU))) 
                                                             | ((0xfc0U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                       << 0x10U) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                         >> 0x10U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                         >> 0xcU))) 
                                                                    << 6U)) 
                                                                | (0x3fU 
                                                                   & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                        << 0x16U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                          >> 0xaU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                          >> 0xbU)))))))))) 
                      << 0x10U) | (IData)(((((QData)((IData)(
                                                             (((0xfc0000U 
                                                                & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                      << 0x1cU) 
                                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                        >> 4U)) 
                                                                    + 
                                                                    (1U 
                                                                     & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                        >> 0xaU))) 
                                                                   << 0x12U)) 
                                                               | (0x3f000U 
                                                                  & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                        << 2U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                          >> 0x1eU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                          >> 9U))) 
                                                                     << 0xcU))) 
                                                              | ((0xfc0U 
                                                                  & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                        << 8U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                          >> 0x18U)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                          >> 8U))) 
                                                                     << 6U)) 
                                                                 | (0x3fU 
                                                                    & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                         << 0xeU) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                           >> 0x12U)) 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                           >> 7U)))))))) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (((0xfc0000U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                       << 0x14U) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                         >> 0xcU)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                         >> 6U))) 
                                                                    << 0x12U)) 
                                                                | (0x3f000U 
                                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                         << 0x1aU) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                           >> 6U)) 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                           >> 5U))) 
                                                                      << 0xcU))) 
                                                               | ((0xfc0U 
                                                                   & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                           >> 4U))) 
                                                                      << 6U)) 
                                                                  | (0x3fU 
                                                                     & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                          << 6U) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                            >> 0x1aU)) 
                                                                        + 
                                                                        (1U 
                                                                         & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                            >> 3U))))))))) 
                                           >> 0x20U)));
    __Vtemp_2[2U] = (((IData)((((QData)((IData)((((0xfc0000U 
                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                         << 0xcU) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                           >> 0x14U)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                           >> 0x12U))) 
                                                      << 0x12U)) 
                                                  | (0x3f000U 
                                                     & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                           << 0x12U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                             >> 0xeU)) 
                                                         + 
                                                         (1U 
                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                             >> 0x11U))) 
                                                        << 0xcU))) 
                                                 | ((0xfc0U 
                                                     & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                             >> 8U)) 
                                                         + 
                                                         (1U 
                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                             >> 0x10U))) 
                                                        << 6U)) 
                                                    | (0x3fU 
                                                       & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                            << 0x1eU) 
                                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                              >> 2U)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                              >> 0xfU)))))))) 
                                << 0x18U) | (QData)((IData)(
                                                            (((0xfc0000U 
                                                               & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                     << 4U) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                       >> 0x1cU)) 
                                                                   + 
                                                                   (1U 
                                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                       >> 0xeU))) 
                                                                  << 0x12U)) 
                                                              | (0x3f000U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                       << 0xaU) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                         >> 0x16U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                         >> 0xdU))) 
                                                                    << 0xcU))) 
                                                             | ((0xfc0U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                       << 0x10U) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                         >> 0x10U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                         >> 0xcU))) 
                                                                    << 6U)) 
                                                                | (0x3fU 
                                                                   & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                        << 0x16U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                          >> 0xaU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                          >> 0xbU)))))))))) 
                      >> 0x10U) | ((IData)(((((QData)((IData)(
                                                              (((0xfc0000U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                       << 0xcU) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                         >> 0x14U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                         >> 0x12U))) 
                                                                    << 0x12U)) 
                                                                | (0x3f000U 
                                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                         << 0x12U) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                           >> 0xeU)) 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                           >> 0x11U))) 
                                                                      << 0xcU))) 
                                                               | ((0xfc0U 
                                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                         << 0x18U) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                           >> 8U)) 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                           >> 0x10U))) 
                                                                      << 6U)) 
                                                                  | (0x3fU 
                                                                     & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                          << 0x1eU) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                            >> 2U)) 
                                                                        + 
                                                                        (1U 
                                                                         & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                            >> 0xfU)))))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               (((0xfc0000U 
                                                                  & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                                        << 4U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                          >> 0x1cU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                          >> 0xeU))) 
                                                                     << 0x12U)) 
                                                                 | (0x3f000U 
                                                                    & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                          << 0xaU) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                            >> 0x16U)) 
                                                                        + 
                                                                        (1U 
                                                                         & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                            >> 0xdU))) 
                                                                       << 0xcU))) 
                                                                | ((0xfc0U 
                                                                    & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                          << 0x10U) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                            >> 0x10U)) 
                                                                        + 
                                                                        (1U 
                                                                         & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                            >> 0xcU))) 
                                                                       << 6U)) 
                                                                   | (0x3fU 
                                                                      & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                           << 0x16U) 
                                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                                             >> 0xaU)) 
                                                                         + 
                                                                         (1U 
                                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                             >> 0xbU))))))))) 
                                            >> 0x20U)) 
                                   << 0x10U));
    __Vtemp_3[0U] = (IData)((((QData)((IData)((((0xfc0000U 
                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                       << 0x1cU) 
                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                         >> 4U)) 
                                                     + 
                                                     (1U 
                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                         >> 0x1aU))) 
                                                    << 0x12U)) 
                                                | (0x3f000U 
                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                         << 2U) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                           >> 0x1eU)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                           >> 0x19U))) 
                                                      << 0xcU))) 
                                               | ((0xfc0U 
                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                         << 8U) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                           >> 0x18U)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                           >> 0x18U))) 
                                                      << 6U)) 
                                                  | (0x3fU 
                                                     & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                          << 0xeU) 
                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                            >> 0x12U)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                            >> 0x17U)))))))) 
                              << 0x18U) | (QData)((IData)(
                                                          (((0xfc0000U 
                                                             & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                   << 0x14U) 
                                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                     >> 0xcU)) 
                                                                 + 
                                                                 (1U 
                                                                  & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                     >> 0x16U))) 
                                                                << 0x12U)) 
                                                            | (0x3f000U 
                                                               & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                     << 0x1aU) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                       >> 6U)) 
                                                                   + 
                                                                   (1U 
                                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                       >> 0x15U))) 
                                                                  << 0xcU))) 
                                                           | ((0xfc0U 
                                                               & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                   + 
                                                                   (1U 
                                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                       >> 0x14U))) 
                                                                  << 6U)) 
                                                              | (1U 
                                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                    >> 0x13U))))))));
    __Vtemp_3[1U] = (((IData)((((QData)((IData)((((0xfc0000U 
                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                         << 0xcU) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                           >> 0x14U)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                           >> 2U))) 
                                                      << 0x12U)) 
                                                  | (0x3f000U 
                                                     & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                           << 0x12U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                             >> 0xeU)) 
                                                         + 
                                                         (1U 
                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                             >> 1U))) 
                                                        << 0xcU))) 
                                                 | ((0xfc0U 
                                                     & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                             >> 8U)) 
                                                         + 
                                                         (1U 
                                                          & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) 
                                                        << 6U)) 
                                                    | (0x3fU 
                                                       & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                            << 0x1eU) 
                                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                              >> 2U)) 
                                                          + 
                                                          (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                           >> 0x1fU))))))) 
                                << 0x18U) | (QData)((IData)(
                                                            (((0xfc0000U 
                                                               & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                     << 4U) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                       >> 0x1cU)) 
                                                                   + 
                                                                   (1U 
                                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                       >> 0x1eU))) 
                                                                  << 0x12U)) 
                                                              | (0x3f000U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                       << 0xaU) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                         >> 0x16U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                         >> 0x1dU))) 
                                                                    << 0xcU))) 
                                                             | ((0xfc0U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                       << 0x10U) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                         >> 0x10U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                         >> 0x1cU))) 
                                                                    << 6U)) 
                                                                | (0x3fU 
                                                                   & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                        << 0x16U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                          >> 0xaU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                          >> 0x1bU)))))))))) 
                      << 0x10U) | (IData)(((((QData)((IData)(
                                                             (((0xfc0000U 
                                                                & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                      << 0x1cU) 
                                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                        >> 4U)) 
                                                                    + 
                                                                    (1U 
                                                                     & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                        >> 0x1aU))) 
                                                                   << 0x12U)) 
                                                               | (0x3f000U 
                                                                  & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                        << 2U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                          >> 0x1eU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                          >> 0x19U))) 
                                                                     << 0xcU))) 
                                                              | ((0xfc0U 
                                                                  & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                        << 8U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                          >> 0x18U)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                          >> 0x18U))) 
                                                                     << 6U)) 
                                                                 | (0x3fU 
                                                                    & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                         << 0xeU) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                           >> 0x12U)) 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                           >> 0x17U)))))))) 
                                             << 0x18U) 
                                            | (QData)((IData)(
                                                              (((0xfc0000U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                       << 0x14U) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                         >> 0xcU)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                         >> 0x16U))) 
                                                                    << 0x12U)) 
                                                                | (0x3f000U 
                                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                         << 0x1aU) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                           >> 6U)) 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                           >> 0x15U))) 
                                                                      << 0xcU))) 
                                                               | ((0xfc0U 
                                                                   & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                           >> 0x14U))) 
                                                                      << 6U)) 
                                                                  | (1U 
                                                                     & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                        >> 0x13U))))))) 
                                           >> 0x20U)));
    __Vtemp_3[2U] = (((IData)((((QData)((IData)((((0xfc0000U 
                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                         << 0xcU) 
                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                           >> 0x14U)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                           >> 2U))) 
                                                      << 0x12U)) 
                                                  | (0x3f000U 
                                                     & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                           << 0x12U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                             >> 0xeU)) 
                                                         + 
                                                         (1U 
                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                             >> 1U))) 
                                                        << 0xcU))) 
                                                 | ((0xfc0U 
                                                     & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                             >> 8U)) 
                                                         + 
                                                         (1U 
                                                          & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) 
                                                        << 6U)) 
                                                    | (0x3fU 
                                                       & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                            << 0x1eU) 
                                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                              >> 2U)) 
                                                          + 
                                                          (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                           >> 0x1fU))))))) 
                                << 0x18U) | (QData)((IData)(
                                                            (((0xfc0000U 
                                                               & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                     << 4U) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                       >> 0x1cU)) 
                                                                   + 
                                                                   (1U 
                                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                       >> 0x1eU))) 
                                                                  << 0x12U)) 
                                                              | (0x3f000U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                       << 0xaU) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                         >> 0x16U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                         >> 0x1dU))) 
                                                                    << 0xcU))) 
                                                             | ((0xfc0U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                       << 0x10U) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                         >> 0x10U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                         >> 0x1cU))) 
                                                                    << 6U)) 
                                                                | (0x3fU 
                                                                   & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                        << 0x16U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                          >> 0xaU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                          >> 0x1bU)))))))))) 
                      >> 0x10U) | ((IData)(((((QData)((IData)(
                                                              (((0xfc0000U 
                                                                 & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                       << 0xcU) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                         >> 0x14U)) 
                                                                     + 
                                                                     (1U 
                                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                         >> 2U))) 
                                                                    << 0x12U)) 
                                                                | (0x3f000U 
                                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                         << 0x12U) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                           >> 0xeU)) 
                                                                       + 
                                                                       (1U 
                                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                           >> 1U))) 
                                                                      << 0xcU))) 
                                                               | ((0xfc0U 
                                                                   & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                         << 0x18U) 
                                                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                           >> 8U)) 
                                                                       + 
                                                                       (1U 
                                                                        & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) 
                                                                      << 6U)) 
                                                                  | (0x3fU 
                                                                     & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                          << 0x1eU) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                            >> 2U)) 
                                                                        + 
                                                                        (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                         >> 0x1fU))))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               (((0xfc0000U 
                                                                  & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                                        << 4U) 
                                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                          >> 0x1cU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                          >> 0x1eU))) 
                                                                     << 0x12U)) 
                                                                 | (0x3f000U 
                                                                    & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                          << 0xaU) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                            >> 0x16U)) 
                                                                        + 
                                                                        (1U 
                                                                         & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                            >> 0x1dU))) 
                                                                       << 0xcU))) 
                                                                | ((0xfc0U 
                                                                    & ((((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                          << 0x10U) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                            >> 0x10U)) 
                                                                        + 
                                                                        (1U 
                                                                         & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                            >> 0x1cU))) 
                                                                       << 6U)) 
                                                                   | (0x3fU 
                                                                      & (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                           << 0x16U) 
                                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                             >> 0xaU)) 
                                                                         + 
                                                                         (1U 
                                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                             >> 0x1bU))))))))) 
                                            >> 0x20U)) 
                                   << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
        = __Vtemp_3[0U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
        = __Vtemp_3[1U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
        = __Vtemp_3[2U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
        = __Vtemp_2[0U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
        = __Vtemp_2[1U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
        = __Vtemp_2[2U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result = 0U;
    if ((0x1000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
        if ((0x800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
            if ((0x400000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                if ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                    if ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                        if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                      >> 0x13U)))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result;
                        }
                    } else {
                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                            = ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                                ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                                : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result);
                    }
                } else if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                     >> 0x14U)))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                            : (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                  >> 2U)))) 
                                << 0x10U) | (0xffffU 
                                             & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                 << 0xdU) 
                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                   >> 0x13U)))));
                }
            } else if ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                if ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                    if ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result;
                    }
                } else {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result
                            : (((0xff000000U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                << 5U)) 
                                | (0xff0000U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                 << 0x15U) 
                                                | (0x1f0000U 
                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                      >> 0xbU))))) 
                               | ((0xff00U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                              << 5U)) 
                                  | (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                              >> 0xbU)))));
                }
            } else if ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                              >> 0x13U)))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                        = ((((- (IData)((0U != (0xffU 
                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                   >> 0xbU))))) 
                             << 0x18U) | (0xff0000U 
                                          & ((- (IData)(
                                                        (0U 
                                                         != 
                                                         (0xffU 
                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                             >> 3U))))) 
                                             << 0x10U))) 
                           | ((0xff00U & ((- (IData)(
                                                     (0U 
                                                      != 
                                                      (0xffU 
                                                       & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                           << 5U) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                             >> 0x1bU)))))) 
                                          << 8U)) | 
                              (0xffU & (- (IData)((0U 
                                                   != 
                                                   (0xffU 
                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                       >> 0x13U))))))));
                }
            } else {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                        ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                        : (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                              >> 0x1aU)))) 
                            << 8U) | (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                               >> 0x13U))));
            }
        } else if ((0x400000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
            if ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                if ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                            ? (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                 << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                             >> 0x13U)) 
                               & (~ ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                      << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                  >> 0x13U))))
                            : (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                 << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                             >> 0x13U)) 
                               | (~ ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                      << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                  >> 0x13U)))));
                } else if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                     >> 0x13U)))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                        = (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                             << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                         >> 0x13U)) 
                           ^ (~ ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                  << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                              >> 0x13U))));
                }
            } else {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                        ? ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                            ? VL_SHIFTR_III(32,32,32, VL_STREAML_FAST_III(32, vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result, 0), 1U)
                            : VL_STREAML_FAST_III(32, vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result, 0))
                        : ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                            : (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_clz_result)));
            }
        } else {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                = ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                    ? ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                        ? ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result
                            : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd)
                        : ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                            : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd))
                    : ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                        ? ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                            ? (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                               >> 0x1aU) : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd)
                        : ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                            : (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_clz_result))));
        }
    } else if ((0x800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
        if ((0x400000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
            if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                          >> 0x15U)))) {
                if ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                    if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                  >> 0x13U)))) {
                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                            = (1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_hc2f9a3b9__0)));
                    }
                }
            }
        } else if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                             >> 0x15U)))) {
            if ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                if ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                        = (1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_hc2f9a3b9__0)));
                }
            }
        }
    } else if ((0x400000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
        if ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
            if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                          >> 0x14U)))) {
                if ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result;
                }
            }
        } else if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                             >> 0x14U)))) {
            if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                          >> 0x13U)))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
                    = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result;
            }
        }
    } else if ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
            = ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                ? ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                    ? (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                         << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                     >> 0x13U)) & (
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                    << 0xdU) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                      >> 0x13U)))
                    : (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                         << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                     >> 0x13U)) | (
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                    << 0xdU) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                      >> 0x13U))))
                : ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                    ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                    : (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                         << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                     >> 0x13U)) ^ (
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                    << 0xdU) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                      >> 0x13U)))));
    } else if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                         >> 0x14U)))) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result 
            = ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result
                : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result);
    }
}
