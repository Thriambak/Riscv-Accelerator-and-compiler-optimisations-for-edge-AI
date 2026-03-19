// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcv32e40x_wrapper.h for the primary calling header

#include "Vcv32e40x_wrapper__pch.h"
#include "Vcv32e40x_wrapper___024root.h"

VL_ATTR_COLD void Vcv32e40x_wrapper___024root___eval_static(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___eval_static\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcv32e40x_wrapper___024root___eval_initial__TOP(Vcv32e40x_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vcv32e40x_wrapper___024root___eval_initial(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___eval_initial\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcv32e40x_wrapper___024root___eval_initial__TOP(vlSelf);
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
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__1[0U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__1[1U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__1[2U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_ready__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid__2 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__2[0U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__2[1U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__2[2U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_valid__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_ready__2 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid__2 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_ready__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_resp_valid__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_resp_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[0U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[1U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[2U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[3U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[4U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[5U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__mret_insn_id__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__mret_insn_id;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_raw_id__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_raw_id;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__csr_en_id__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_en_id;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__if_valid__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__id_ready__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__instr_valid__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__instr_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_12__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_12;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_valid__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up__2 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[0U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[1U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[2U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[3U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[4U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_4__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_4;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_3__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_3;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_0__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_0;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_1__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_1;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_2__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_2;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_3__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_3;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op__1 
        = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op;
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0 = vlSelfRef.rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__clk__0 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__clk;
}

VL_ATTR_COLD void Vcv32e40x_wrapper___024root___eval_final(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___eval_final\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcv32e40x_wrapper___024root___dump_triggers__stl(Vcv32e40x_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcv32e40x_wrapper___024root___eval_phase__stl(Vcv32e40x_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vcv32e40x_wrapper___024root___eval_settle(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___eval_settle\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcv32e40x_wrapper___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/cv32e40x_wrapper.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcv32e40x_wrapper___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcv32e40x_wrapper___024root___dump_triggers__stl(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___dump_triggers__stl\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] cv32e40x_wrapper.core.load_store_unit_i.bus_trans_valid)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] cv32e40x_wrapper.core.ctrl_fsm)\n");
    }
    if ((8ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] cv32e40x_wrapper.core.wb_valid)\n");
    }
    if ((0x10ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] cv32e40x_wrapper.core.wb_ready)\n");
    }
    if ((0x20ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] cv32e40x_wrapper.core.load_store_unit_i.resp_valid)\n");
    }
    if ((0x40ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] cv32e40x_wrapper.core.controller_i.controller_fsm_i.exception_in_wb)\n");
    }
    if ((0x80ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] cv32e40x_wrapper.core.if_stage_i.prefetch_trans_ready)\n");
    }
    if ((0x100ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] cv32e40x_wrapper.core.if_stage_i.prefetch_resp_valid)\n");
    }
    if ((0x200ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 9 is active: @([hybrid] cv32e40x_wrapper.core.ex_stage_i.alu_i.alu_b_cpop_i.sum)\n");
    }
    if ((0x400ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 10 is active: @([hybrid] cv32e40x_wrapper.core.mret_insn_id)\n");
    }
    if ((0x800ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 11 is active: @([hybrid] cv32e40x_wrapper.core.ctrl_transfer_insn_raw_id)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 12 is active: @([hybrid] cv32e40x_wrapper.core.csr_en_id)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 13 is active: @([hybrid] cv32e40x_wrapper.core.if_valid)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 14 is active: @([hybrid] cv32e40x_wrapper.core.id_ready)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 15 is active: @([hybrid] cv32e40x_wrapper.core.wb_stage_i.instr_valid)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 16 is active: @([hybrid] cv32e40x_wrapper.core.controller_i.controller_fsm_i.__VdfgRegularize_h12c5834c_0_12)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 17 is active: @([hybrid] cv32e40x_wrapper.core.ex_valid)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 18 is active: @([hybrid] cv32e40x_wrapper.core.load_store_unit_i.count_up)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 19 is active: @([hybrid] cv32e40x_wrapper.core.load_store_unit_i.mpu_i.mpu_status)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 20 is active: @([hybrid] cv32e40x_wrapper.core.controller_i.controller_fsm_i.jump_taken_id)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 21 is active: @([hybrid] cv32e40x_wrapper.core.controller_i.controller_fsm_i.pending_single_step)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 22 is active: @([hybrid] cv32e40x_wrapper.core.ex_stage_i.alu_i.ff_one_i.sel_nodes)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 23 is active: @([hybrid] cv32e40x_wrapper.core.ex_stage_i.alu_i.ff_one_i.index_nodes)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 24 is active: @([hybrid] cv32e40x_wrapper.core.controller_i.bypass_i.__VdfgRegularize_h78274dd8_0_4)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 25 is active: @([hybrid] cv32e40x_wrapper.core.controller_i.bypass_i.__VdfgRegularize_h78274dd8_0_3)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 26 is active: @([hybrid] cv32e40x_wrapper.ext.acctop0.arith_stage0.__VdfgRegularize_hdbeb81c0_1_0)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 27 is active: @([hybrid] cv32e40x_wrapper.ext.acctop0.arith_stage0.__VdfgRegularize_hdbeb81c0_1_1)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 28 is active: @([hybrid] cv32e40x_wrapper.ext.acctop0.arith_stage0.__VdfgRegularize_hdbeb81c0_1_2)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 29 is active: @([hybrid] cv32e40x_wrapper.ext.acctop0.arith_stage0.__VdfgRegularize_hdbeb81c0_1_3)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 30 is active: @([hybrid] cv32e40x_wrapper.ext.acctop0.arith_stage0.is_mul_op)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcv32e40x_wrapper___024root___stl_sequent__TOP__0(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__0(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__1(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__2(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__3(Vcv32e40x_wrapper___024root* vlSelf);
VL_ATTR_COLD void Vcv32e40x_wrapper___024root___stl_sequent__TOP__1(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__5(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__6(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__18(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__10(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___nba_comb__TOP__7(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__9(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__11(Vcv32e40x_wrapper___024root* vlSelf);
VL_ATTR_COLD void Vcv32e40x_wrapper___024root___stl_comb__TOP__10(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_sequent__TOP__12(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___ico_comb__TOP__0(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__1(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__2(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__4(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__5(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__9(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__8(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__3(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__10(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__11(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__13(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__14(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__15(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__16(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__17(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__18(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__12(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__20(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__21(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__22(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__19(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__24(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__25(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__26(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__23(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__27(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__28(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__29(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___act_comb__TOP__30(Vcv32e40x_wrapper___024root* vlSelf);

VL_ATTR_COLD void Vcv32e40x_wrapper___024root___eval_stl(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___eval_stl\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___stl_sequent__TOP__0(vlSelf);
    }
    if ((0x201ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x80001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x101ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0xc00000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___stl_sequent__TOP__1(vlSelf);
    }
    if ((0x40021ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x3c000000ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((0x25ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__18(vlSelf);
    }
    if ((0x3000001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__10(vlSelf);
    }
    if ((0x45ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___nba_comb__TOP__7(vlSelf);
    }
    if ((0x21ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__9(vlSelf);
    }
    if ((0xdULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__11(vlSelf);
    }
    if ((0xc00001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___stl_comb__TOP__10(vlSelf);
    }
    if ((0x400001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_sequent__TOP__12(vlSelf);
    }
    if ((0x105ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x15ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x185ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x40025ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x7c000001ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__5(vlSelf);
    }
    if ((0x3001c11ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__9(vlSelf);
    }
    if ((0x88021ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__8(vlSelf);
    }
    if ((0xc00201ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0x40015ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__10(vlSelf);
    }
    if ((0xc00015ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__11(vlSelf);
    }
    if ((0x7c0401a5ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__13(vlSelf);
    }
    if ((0x7c040025ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__14(vlSelf);
    }
    if ((0x7c000003ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__15(vlSelf);
    }
    if ((0x3001c15ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__16(vlSelf);
    }
    if ((0x303fc39ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__17(vlSelf);
    }
    if ((0x3387c51ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__18(vlSelf);
    }
    if ((0xc00205ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__12(vlSelf);
    }
    if ((0x7c040027ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__20(vlSelf);
    }
    if ((0x7f3bfdffULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__21(vlSelf);
    }
    if ((0x7f3bfc7fULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__22(vlSelf);
    }
    if ((0x3c01e15ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__19(vlSelf);
    }
    if ((0x7c040037ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__24(vlSelf);
    }
    if ((0x7f3bfdffULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__25(vlSelf);
    }
    if ((0x7f3ffc7fULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__26(vlSelf);
    }
    if ((0x7fc01e15ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__23(vlSelf);
    }
    if ((0x7fc41e37ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__27(vlSelf);
    }
    if ((0x7ffffe7fULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__28(vlSelf);
    }
    if ((0x7fcc1f37ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__29(vlSelf);
    }
    if ((0x7fffff7fULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcv32e40x_wrapper___024root___act_comb__TOP__30(vlSelf);
    }
}

VL_ATTR_COLD void Vcv32e40x_wrapper___024root___stl_sequent__TOP__1(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___stl_sequent__TOP__1\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_clz_result 
        = ((1U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
            ? (0x1fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U])
            : 0x20U);
}

VL_ATTR_COLD void Vcv32e40x_wrapper___024root___stl_comb__TOP__10(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___stl_comb__TOP__10\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    // Body
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

VL_ATTR_COLD void Vcv32e40x_wrapper___024root___eval_triggers__stl(Vcv32e40x_wrapper___024root* vlSelf);

VL_ATTR_COLD bool Vcv32e40x_wrapper___024root___eval_phase__stl(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___eval_phase__stl\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcv32e40x_wrapper___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcv32e40x_wrapper___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcv32e40x_wrapper___024root___dump_triggers__ico(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___dump_triggers__ico\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: @([hybrid] cv32e40x_wrapper.core.load_store_unit_i.bus_trans_valid)\n");
    }
    if ((4ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 2 is active: @([hybrid] cv32e40x_wrapper.core.ctrl_fsm)\n");
    }
    if ((8ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 3 is active: @([hybrid] cv32e40x_wrapper.core.wb_ready)\n");
    }
    if ((0x10ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 4 is active: @([hybrid] cv32e40x_wrapper.core.load_store_unit_i.count_up)\n");
    }
    if ((0x20ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 5 is active: @([hybrid] cv32e40x_wrapper.core.load_store_unit_i.resp_valid)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcv32e40x_wrapper___024root___dump_triggers__act(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___dump_triggers__act\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] cv32e40x_wrapper.core.load_store_unit_i.bus_trans_valid)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] cv32e40x_wrapper.core.ctrl_fsm)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] cv32e40x_wrapper.core.wb_valid)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] cv32e40x_wrapper.core.wb_ready)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] cv32e40x_wrapper.core.load_store_unit_i.resp_valid)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] cv32e40x_wrapper.core.controller_i.controller_fsm_i.exception_in_wb)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] cv32e40x_wrapper.core.if_stage_i.prefetch_trans_ready)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] cv32e40x_wrapper.core.if_stage_i.prefetch_resp_valid)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([hybrid] cv32e40x_wrapper.core.ex_stage_i.alu_i.alu_b_cpop_i.sum)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([hybrid] cv32e40x_wrapper.core.mret_insn_id)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([hybrid] cv32e40x_wrapper.core.ctrl_transfer_insn_raw_id)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([hybrid] cv32e40x_wrapper.core.csr_en_id)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([hybrid] cv32e40x_wrapper.core.if_valid)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([hybrid] cv32e40x_wrapper.core.id_ready)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([hybrid] cv32e40x_wrapper.core.wb_stage_i.instr_valid)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 15 is active: @([hybrid] cv32e40x_wrapper.core.controller_i.controller_fsm_i.__VdfgRegularize_h12c5834c_0_12)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 16 is active: @([hybrid] cv32e40x_wrapper.core.ex_valid)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 17 is active: @([hybrid] cv32e40x_wrapper.core.load_store_unit_i.count_up)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 18 is active: @([hybrid] cv32e40x_wrapper.core.load_store_unit_i.mpu_i.mpu_status)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 19 is active: @([hybrid] cv32e40x_wrapper.core.controller_i.controller_fsm_i.jump_taken_id)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 20 is active: @([hybrid] cv32e40x_wrapper.core.controller_i.controller_fsm_i.pending_single_step)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 21 is active: @([hybrid] cv32e40x_wrapper.core.ex_stage_i.alu_i.ff_one_i.sel_nodes)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 22 is active: @([hybrid] cv32e40x_wrapper.core.ex_stage_i.alu_i.ff_one_i.index_nodes)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 23 is active: @([hybrid] cv32e40x_wrapper.core.controller_i.bypass_i.__VdfgRegularize_h78274dd8_0_4)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 24 is active: @([hybrid] cv32e40x_wrapper.core.controller_i.bypass_i.__VdfgRegularize_h78274dd8_0_3)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 25 is active: @([hybrid] cv32e40x_wrapper.ext.acctop0.arith_stage0.__VdfgRegularize_hdbeb81c0_1_0)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 26 is active: @([hybrid] cv32e40x_wrapper.ext.acctop0.arith_stage0.__VdfgRegularize_hdbeb81c0_1_1)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 27 is active: @([hybrid] cv32e40x_wrapper.ext.acctop0.arith_stage0.__VdfgRegularize_hdbeb81c0_1_2)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 28 is active: @([hybrid] cv32e40x_wrapper.ext.acctop0.arith_stage0.__VdfgRegularize_hdbeb81c0_1_3)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 29 is active: @([hybrid] cv32e40x_wrapper.ext.acctop0.arith_stage0.is_mul_op)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 30 is active: @(posedge clk_i)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 31 is active: @(negedge rst_ni)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 32 is active: @(posedge cv32e40x_wrapper.core.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcv32e40x_wrapper___024root___dump_triggers__nba(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___dump_triggers__nba\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] cv32e40x_wrapper.core.load_store_unit_i.bus_trans_valid)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] cv32e40x_wrapper.core.ctrl_fsm)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] cv32e40x_wrapper.core.wb_valid)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] cv32e40x_wrapper.core.wb_ready)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] cv32e40x_wrapper.core.load_store_unit_i.resp_valid)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] cv32e40x_wrapper.core.controller_i.controller_fsm_i.exception_in_wb)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] cv32e40x_wrapper.core.if_stage_i.prefetch_trans_ready)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] cv32e40x_wrapper.core.if_stage_i.prefetch_resp_valid)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([hybrid] cv32e40x_wrapper.core.ex_stage_i.alu_i.alu_b_cpop_i.sum)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([hybrid] cv32e40x_wrapper.core.mret_insn_id)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([hybrid] cv32e40x_wrapper.core.ctrl_transfer_insn_raw_id)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([hybrid] cv32e40x_wrapper.core.csr_en_id)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([hybrid] cv32e40x_wrapper.core.if_valid)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([hybrid] cv32e40x_wrapper.core.id_ready)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([hybrid] cv32e40x_wrapper.core.wb_stage_i.instr_valid)\n");
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 15 is active: @([hybrid] cv32e40x_wrapper.core.controller_i.controller_fsm_i.__VdfgRegularize_h12c5834c_0_12)\n");
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 16 is active: @([hybrid] cv32e40x_wrapper.core.ex_valid)\n");
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 17 is active: @([hybrid] cv32e40x_wrapper.core.load_store_unit_i.count_up)\n");
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 18 is active: @([hybrid] cv32e40x_wrapper.core.load_store_unit_i.mpu_i.mpu_status)\n");
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 19 is active: @([hybrid] cv32e40x_wrapper.core.controller_i.controller_fsm_i.jump_taken_id)\n");
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 20 is active: @([hybrid] cv32e40x_wrapper.core.controller_i.controller_fsm_i.pending_single_step)\n");
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 21 is active: @([hybrid] cv32e40x_wrapper.core.ex_stage_i.alu_i.ff_one_i.sel_nodes)\n");
    }
    if ((0x400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 22 is active: @([hybrid] cv32e40x_wrapper.core.ex_stage_i.alu_i.ff_one_i.index_nodes)\n");
    }
    if ((0x800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 23 is active: @([hybrid] cv32e40x_wrapper.core.controller_i.bypass_i.__VdfgRegularize_h78274dd8_0_4)\n");
    }
    if ((0x1000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 24 is active: @([hybrid] cv32e40x_wrapper.core.controller_i.bypass_i.__VdfgRegularize_h78274dd8_0_3)\n");
    }
    if ((0x2000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 25 is active: @([hybrid] cv32e40x_wrapper.ext.acctop0.arith_stage0.__VdfgRegularize_hdbeb81c0_1_0)\n");
    }
    if ((0x4000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 26 is active: @([hybrid] cv32e40x_wrapper.ext.acctop0.arith_stage0.__VdfgRegularize_hdbeb81c0_1_1)\n");
    }
    if ((0x8000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 27 is active: @([hybrid] cv32e40x_wrapper.ext.acctop0.arith_stage0.__VdfgRegularize_hdbeb81c0_1_2)\n");
    }
    if ((0x10000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 28 is active: @([hybrid] cv32e40x_wrapper.ext.acctop0.arith_stage0.__VdfgRegularize_hdbeb81c0_1_3)\n");
    }
    if ((0x20000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 29 is active: @([hybrid] cv32e40x_wrapper.ext.acctop0.arith_stage0.is_mul_op)\n");
    }
    if ((0x40000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 30 is active: @(posedge clk_i)\n");
    }
    if ((0x80000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 31 is active: @(negedge rst_ni)\n");
    }
    if ((0x100000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 32 is active: @(posedge cv32e40x_wrapper.core.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcv32e40x_wrapper___024root___ctor_var_reset(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___ctor_var_reset\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->mem_req_o = VL_RAND_RESET_I(1);
    vlSelf->mem_addr_o = VL_RAND_RESET_I(32);
    vlSelf->mem_we_o = VL_RAND_RESET_I(1);
    vlSelf->mem_be_o = VL_RAND_RESET_I(4);
    vlSelf->mem_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->mem_rvalid_i = VL_RAND_RESET_I(1);
    vlSelf->mem_err_i = VL_RAND_RESET_I(1);
    vlSelf->mem_rdata_i = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__imem_gnt = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__dmem_gnt = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__amem_req = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__amem_gnt = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__amem_we = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__amem_be = VL_RAND_RESET_I(4);
    vlSelf->cv32e40x_wrapper__DOT__amem_wdata = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__amem_rvalid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->cv32e40x_wrapper__DOT__req_sources[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->cv32e40x_wrapper__DOT__imem_req_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cv32e40x_wrapper__DOT__req_count = VL_RAND_RESET_I(9);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__fencei_flush_req_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(282, vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe);
    VL_RAND_RESET_W(170, vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe);
    VL_RAND_RESET_W(93, vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_id_pipe);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ctrl_byp = VL_RAND_RESET_I(11);
    VL_RAND_RESET_W(95, vlSelf->cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__rf_wdata_wb = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__rf_wdata_ex = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->cv32e40x_wrapper__DOT__core__DOT__regfile_rdata_id[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__csr_counter_read = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__lsu_split_ex = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__lsu_valid_1 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__lsu_valid_wb = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_ready = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_ready = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__wb_ready = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_valid = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_valid = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_valid = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__wb_valid = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__mret_insn_id = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_id = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_raw_id = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__csr_en_id = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__csr_illegal = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__irq_id_ctrl = VL_RAND_RESET_I(5);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__sleep_unit_i__DOT__fetch_enable_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__sleep_unit_i__DOT__core_busy_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__if_ready = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__branch_addr_n = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_valid = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr = VL_RAND_RESET_Q(35);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed = VL_RAND_RESET_Q(35);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_addr = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_inst_resp = VL_RAND_RESET_Q(35);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__xif_id = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_meta_n = VL_RAND_RESET_I(4);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(105, vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n = VL_RAND_RESET_Q(35);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2 = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h80fa5999__0 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h04a6c627__0 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_head544d3__0 = VL_RAND_RESET_Q(35);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_0_0 = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_3_1 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_3_6 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__state_n = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q = VL_RAND_RESET_Q(37);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_i_type = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_a = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__rf_we = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__alu_en = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__alu_op_b_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__op_c_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_b_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__mul_en = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__div_en = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__lsu_en = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_b_fw = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__jalr_fw = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_a = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_b = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__illegal_insn = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__instr_valid = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__xif_waiting = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__xif_insn_accept = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__xif_insn_reject = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__instr_meta_n = VL_RAND_RESET_I(4);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl = VL_RAND_RESET_Q(53);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec = VL_RAND_RESET_Q(53);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_ready = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__instr_valid = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mul_en_gated = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_en = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_ready = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_clz_result = VL_RAND_RESET_I(6);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__instr_meta_n = VL_RAND_RESET_I(4);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_aa = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp = VL_RAND_RESET_Q(64);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_result = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__clmul_result = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_hc2f9a3b9__0 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes);
    VL_RAND_RESET_W(192, vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__quotient_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__quotient_d = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__remainder_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__remainder_d = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__divisor_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__divisor_d = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_rem_d = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_rem_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__comp_inv_d = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__comp_inv_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__res_inv_d = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__res_inv_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__res_mux = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__cnt_q = VL_RAND_RESET_I(6);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__cnt_d = VL_RAND_RESET_I(6);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__init_dummy_cnt = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__divisor_en = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__comp_out = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__init_en = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_rem = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__op_b_is_neg = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT____VdfgRegularize_h6404b41a_0_2 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state_next = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc = VL_RAND_RESET_Q(33);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc_next = VL_RAND_RESET_Q(33);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc_res = VL_RAND_RESET_Q(33);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__result = VL_RAND_RESET_Q(34);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans_valid = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans_ready = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__cnt_q = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__next_cnt = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__ctrl_update = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_type_q = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_sign_ext_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_we_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_offset_q = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__last_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__split_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__done_0 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_en_gated = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_ext = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(80, vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__instr_valid = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__xif_waiting = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_rdata_int = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mepc_n = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mepc_we = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_n = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_we = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dpc_n = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dpc_we = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dscratch0_we = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dscratch1_we = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mscratch_we = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_n = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_we = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcause_n = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcause_we = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_n = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_we = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mie_we = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(2048, vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q);
    VL_RAND_RESET_W(2048, vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(1024, vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q);
    VL_RAND_RESET_W(1024, vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_n = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(2048, vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr = VL_RAND_RESET_I(12);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events_raw = VL_RAND_RESET_I(16);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_1_2 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_1 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dscratch0_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dscratch1_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dpc_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mie_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcause_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__tmatch_control_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__tmatch_value_csr_i__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_req_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_nmi = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_debug = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_interrupt = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_allowed = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__obi_data_req_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_flush_req_set = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h75e42caa__0 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h3ec76060__0 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hb14c1f80__0 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_12 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_13 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_jr_match = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jr_match = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_3 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_4 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_q = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__apu_gnt = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__apu_rvalid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, vlSelf->cv32e40x_wrapper__DOT__ext__DOT__apu_operands_i);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__apu_op = VL_RAND_RESET_I(6);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__apu_flags_i = VL_RAND_RESET_I(15);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__core_halt_o = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__is_vector_op = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__needs_writeback = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__result_valid_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__result_data_q = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__result_id_q = VL_RAND_RESET_I(4);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__issue_id_q = VL_RAND_RESET_I(4);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__wb_pending_q = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__wb_rd_q = VL_RAND_RESET_I(5);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__immediate_operand = VL_RAND_RESET_I(11);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_addr = VL_RAND_RESET_I(5);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__csr_write = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__preserve_vl = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cycle_count = VL_RAND_RESET_I(4);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data_src = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = VL_RAND_RESET_I(4);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__saturate_mode = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__apu_result_select = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write_lsu = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_done = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_en = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_load = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_store = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data);
    VL_RAND_RESET_W(128, vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data);
    VL_RAND_RESET_W(128, vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__zero_skip_mask = VL_RAND_RESET_I(4);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__all_zero_cycle = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_req = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_gnt = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_rvalid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_operands_unpacked[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr = VL_RAND_RESET_I(5);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__reg_apu_result = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__perf_vec_instr_count = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__perf_vlsu_stall_count = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__perf_compute_cycles = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__perf_skipped_ops = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__perf_compacted_cycles = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_RAND_RESET_W(117, vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__fifo_mem[__Vi0]);
    }
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__wr_ptr = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__rd_ptr = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__count = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__pending_rvalid = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__dec_busy = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__gen_fifo__DOT__fifo_write_en = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__gen_fifo__DOT__fifo_read_en = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__gen_fifo__DOT__rvalid_issue = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__vl_next = VL_RAND_RESET_I(5);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__max_vl = VL_RAND_RESET_I(5);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__state = 0;
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__next_state = 0;
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__max_cycle_count = VL_RAND_RESET_I(4);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__fused_load_compute = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__core_halt_ctrl = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT____VdfgExtracted_hf911b2c9__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_addr2 = VL_RAND_RESET_I(5);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_addr2 = VL_RAND_RESET_I(5);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data0 = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data1 = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data2 = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_wr_data3 = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data0 = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data1 = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en0 = VL_RAND_RESET_I(4);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en1 = VL_RAND_RESET_I(4);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en2 = VL_RAND_RESET_I(4);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en3 = VL_RAND_RESET_I(4);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__eff_vsew = VL_RAND_RESET_I(2);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__reduction_intermediate_reg = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_out = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_out = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_out = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_out = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__dot_sum_all = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__dot_accumulator = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_0 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_1 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_2 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_3 = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_a = VL_RAND_RESET_Q(33);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_b = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(66, vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__add_a = VL_RAND_RESET_Q(33);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__add_b = VL_RAND_RESET_Q(33);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_a = VL_RAND_RESET_Q(33);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_b = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(66, vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__add_a = VL_RAND_RESET_Q(33);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__add_b = VL_RAND_RESET_Q(33);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_a = VL_RAND_RESET_Q(33);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_b = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(66, vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__add_a = VL_RAND_RESET_Q(33);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__add_b = VL_RAND_RESET_Q(33);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_a = VL_RAND_RESET_Q(33);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_b = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(66, vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__add_a = VL_RAND_RESET_Q(33);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__add_b = VL_RAND_RESET_Q(33);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__macc = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__subtract = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_a = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_b = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__au_start = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT____Vcellinp__tr__byte_select_i = VL_RAND_RESET_I(7);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen = VL_RAND_RESET_I(4);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__next_el_addr = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_addr = VL_RAND_RESET_I(32);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_bytes = VL_RAND_RESET_I(7);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state = 0;
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__next_state = 0;
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track = VL_RAND_RESET_I(7);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track_next = VL_RAND_RESET_I(7);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_addr_inc = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycles_inc = VL_RAND_RESET_I(1);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycle_bytes = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycles = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycles_cnt = VL_RAND_RESET_I(3);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT____VdfgRegularize_ha59b5e9f_0_1 = VL_RAND_RESET_I(7);
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__byte_enable_reg = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__temp_reg[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_bytes[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_packed[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__packed_set = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(95, vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__0);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_valid__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_resp_valid__0 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(192, vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__mret_insn_id__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_raw_id__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__csr_en_id__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__if_valid__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__id_ready__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__instr_valid__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_12__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_valid__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__0 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_4__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_3__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_0__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_1__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_2__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_3__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op__0 = VL_RAND_RESET_I(1);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid__1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(95, vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_ready__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid__1 = VL_RAND_RESET_I(1);
    vlSelf->__VicoDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid__2 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(95, vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__2);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_valid__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_ready__2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid__2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_ready__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_resp_valid__1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(192, vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__mret_insn_id__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_raw_id__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__csr_en_id__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__if_valid__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__id_ready__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__instr_valid__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_12__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_valid__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up__2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status__1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(160, vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_4__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_3__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_0__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_1__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_2__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_3__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op__1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
