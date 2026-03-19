// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcv32e40x_wrapper.h for the primary calling header

#include "Vcv32e40x_wrapper__pch.h"
#include "Vcv32e40x_wrapper__Syms.h"
#include "Vcv32e40x_wrapper___024root.h"

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__6(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__6\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause;
    cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause = 0;
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__rf_wdata_wb 
        = ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U])
            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_ext
            : ((8U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])
                ? (IData)((vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.result 
                           >> 0xeU)) : ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] 
                                         << 0x1cU) 
                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                           >> 4U))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__xif_waiting 
        = (IData)(((0x808U == (0x808U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])) 
                   & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__result_valid_q))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_debug 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb) 
           | (((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_req_q)) 
              | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_13) 
                 | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))));
    vlSelfRef.mem_wdata_o = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                              << 0x1bU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                           >> 5U));
    vlSelfRef.mem_be_o = (0xfU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                  >> 5U));
    if (vlSelfRef.cv32e40x_wrapper__DOT__amem_req) {
        vlSelfRef.mem_wdata_o = vlSelfRef.cv32e40x_wrapper__DOT__amem_wdata;
        vlSelfRef.mem_be_o = vlSelfRef.cv32e40x_wrapper__DOT__amem_be;
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb[0U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__rf_wdata_wb;
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

extern const VlUnpacked<CData/*2:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h8d246da9_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_he6824a7c_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h78119940_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h9a6ebf41_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h661f7af5_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h41f0b72e_0;

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__14(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__14\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core;
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus;
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready;
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n 
        = (3U & (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_valid) 
                  & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_ready))
                  ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_resp_valid)
                      ? (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)
                      : ((IData)(1U) + (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)))
                  : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_resp_valid)
                      ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q) 
                         - (IData)(1U)) : (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q))));
    __Vtableidx1 = (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_valid) 
                     << 5U) | (((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n)) 
                                << 3U) | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__state_q)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__state_n 
        = Vcv32e40x_wrapper__ConstPool__TABLE_h8d246da9_0
        [__Vtableidx1];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status 
        = Vcv32e40x_wrapper__ConstPool__TABLE_he6824a7c_0
        [__Vtableidx1];
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core 
        = Vcv32e40x_wrapper__ConstPool__TABLE_h78119940_0
        [__Vtableidx1];
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus 
        = Vcv32e40x_wrapper__ConstPool__TABLE_h9a6ebf41_0
        [__Vtableidx1];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid 
        = Vcv32e40x_wrapper__ConstPool__TABLE_h661f7af5_0
        [__Vtableidx1];
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready 
        = Vcv32e40x_wrapper__ConstPool__TABLE_h41f0b72e_0
        [__Vtableidx1];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_ready 
        = (1U & (((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_core)) 
                  & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q))) 
                 | (IData)(cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_ready)));
    vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if.s_req 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q) 
           || ((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_block_bus)) 
               & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_valid)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_inst_resp 
        = ((vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if.resp_payload 
            << 2U) | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n 
        = ((0x68U >= (0x7fU & ((IData)(0x23U) * ((IData)(2U) 
                                                 - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))))
            ? (0x7ffffffffULL & (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                  (((IData)(0x22U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x23U) 
                                                        * 
                                                        ((IData)(2U) 
                                                         - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))) 
                                                   >> 5U)])) 
                                  << ((0U == (0x1fU 
                                              & ((IData)(0x23U) 
                                                 * 
                                                 ((IData)(2U) 
                                                  - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))))
                                       ? 0x20U : ((IData)(0x40U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      ((IData)(2U) 
                                                       - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))))) 
                                 | (((0U == (0x1fU 
                                             & ((IData)(0x23U) 
                                                * ((IData)(2U) 
                                                   - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))))
                                      ? 0ULL : ((QData)((IData)(
                                                                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                                (((IData)(0x1fU) 
                                                                  + 
                                                                  (0x7fU 
                                                                   & ((IData)(0x23U) 
                                                                      * 
                                                                      ((IData)(2U) 
                                                                       - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))) 
                                                                 >> 5U)])) 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x23U) 
                                                     * 
                                                     ((IData)(2U) 
                                                      - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))))) 
                                    | ((QData)((IData)(
                                                       vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                       (3U 
                                                        & (((IData)(0x23U) 
                                                            * 
                                                            ((IData)(2U) 
                                                             - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))) 
                                                           >> 5U))])) 
                                       >> (0x1fU & 
                                           ((IData)(0x23U) 
                                            * ((IData)(2U) 
                                               - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))))))))
            : 0ULL);
    if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_inst_resp;
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = 0U;
    if (((2U >= (3U & ((IData)(2U) - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))) 
         && (1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                   >> (3U & ((IData)(2U) - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))) {
        if ((3U != (3U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                          >> 0x10U)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned 
                = ((0x68U >= (0x7fU & ((IData)(0x23U) 
                                       * ((IData)(2U) 
                                          - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                    ? (3U & (((0U == (0x1fU & ((IData)(0x23U) 
                                               * ((IData)(2U) 
                                                  - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                               ? 0U : (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                       (((IData)(1U) 
                                         + (0x7fU & 
                                            ((IData)(0x23U) 
                                             * ((IData)(2U) 
                                                - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x23U) 
                                            * ((IData)(2U) 
                                               - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))) 
                             | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                (3U & (((IData)(0x23U) 
                                        * ((IData)(2U) 
                                           - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(0x23U) 
                                          * ((IData)(2U) 
                                             - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))
                    : 0U);
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned 
                = (1U & ((0x68U >= ((IData)(2U) + (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      ((IData)(2U) 
                                                       - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                         && (1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                   (((IData)(2U) + 
                                     (0x7fU & ((IData)(0x23U) 
                                               * ((IData)(2U) 
                                                  - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                    >> 5U)] >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x23U) 
                                                       * 
                                                       ((IData)(2U) 
                                                        - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))))));
        } else {
            if (((0U != ((0x68U >= (0x7fU & ((IData)(0x23U) 
                                             * ((IData)(2U) 
                                                - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))
                          ? (3U & (((0U == (0x1fU & 
                                            ((IData)(0x23U) 
                                             * ((IData)(2U) 
                                                - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))
                                     ? 0U : (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                             (((IData)(1U) 
                                               + (0x7fU 
                                                  & ((IData)(0x23U) 
                                                     * 
                                                     ((IData)(2U) 
                                                      - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x23U) 
                                                     * 
                                                     ((IData)(2U) 
                                                      - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))) 
                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                      (3U & (((IData)(0x23U) 
                                              * ((IData)(2U) 
                                                 - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))) 
                                             >> 5U))] 
                                      >> (0x1fU & ((IData)(0x23U) 
                                                   * 
                                                   ((IData)(2U) 
                                                    - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))
                          : 0U)) | (0U != ((0x68U >= 
                                            (0x7fU 
                                             & ((IData)(0x23U) 
                                                * ((IData)(2U) 
                                                   - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                            ? (3U & 
                                               (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      ((IData)(2U) 
                                                       - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                                  ? 0U
                                                  : 
                                                 (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                  (((IData)(1U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x23U) 
                                                        * 
                                                        ((IData)(2U) 
                                                         - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x23U) 
                                                       * 
                                                       ((IData)(2U) 
                                                        - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))) 
                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                   (3U 
                                                    & (((IData)(0x23U) 
                                                        * 
                                                        ((IData)(2U) 
                                                         - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x23U) 
                                                       * 
                                                       ((IData)(2U) 
                                                        - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))
                                            : 0U)))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = 1U;
            }
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned 
                = (1U & (((0x68U >= ((IData)(2U) + 
                                     (0x7fU & ((IData)(0x23U) 
                                               * ((IData)(2U) 
                                                  - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))) 
                          && (1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                    (((IData)(2U) + 
                                      (0x7fU & ((IData)(0x23U) 
                                                * ((IData)(2U) 
                                                   - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                                     >> 5U)] >> (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x23U) 
                                                        * 
                                                        ((IData)(2U) 
                                                         - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))))) 
                         | ((0x68U >= ((IData)(2U) 
                                       + (0x7fU & ((IData)(0x23U) 
                                                   * 
                                                   ((IData)(2U) 
                                                    - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                            && (1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                      (((IData)(2U) 
                                        + (0x7fU & 
                                           ((IData)(0x23U) 
                                            * ((IData)(2U) 
                                               - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                       >> 5U)] >> (0x1fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x23U) 
                                                          * 
                                                          ((IData)(2U) 
                                                           - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))))));
        }
    } else if (((2U >= (3U & ((IData)(2U) - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                && (1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                          >> (3U & ((IData)(2U) - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))) {
        if ((3U != (3U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                          >> 0x10U)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned 
                = ((0x68U >= (0x7fU & ((IData)(0x23U) 
                                       * ((IData)(2U) 
                                          - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                    ? (3U & (((0U == (0x1fU & ((IData)(0x23U) 
                                               * ((IData)(2U) 
                                                  - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                               ? 0U : (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                       (((IData)(1U) 
                                         + (0x7fU & 
                                            ((IData)(0x23U) 
                                             * ((IData)(2U) 
                                                - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0x23U) 
                                            * ((IData)(2U) 
                                               - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))) 
                             | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                (3U & (((IData)(0x23U) 
                                        * ((IData)(2U) 
                                           - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                       >> 5U))] >> 
                                (0x1fU & ((IData)(0x23U) 
                                          * ((IData)(2U) 
                                             - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))
                    : 0U);
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned 
                = (1U & ((0x68U >= ((IData)(2U) + (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * 
                                                      ((IData)(2U) 
                                                       - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                         && (1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                   (((IData)(2U) + 
                                     (0x7fU & ((IData)(0x23U) 
                                               * ((IData)(2U) 
                                                  - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                    >> 5U)] >> (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0x7fU 
                                                    & ((IData)(0x23U) 
                                                       * 
                                                       ((IData)(2U) 
                                                        - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))))));
        } else {
            if (((0U != ((0x68U >= (0x7fU & ((IData)(0x23U) 
                                             * ((IData)(2U) 
                                                - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                          ? (3U & (((0U == (0x1fU & 
                                            ((IData)(0x23U) 
                                             * ((IData)(2U) 
                                                - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                     ? 0U : (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                             (((IData)(1U) 
                                               + (0x7fU 
                                                  & ((IData)(0x23U) 
                                                     * 
                                                     ((IData)(2U) 
                                                      - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x23U) 
                                                     * 
                                                     ((IData)(2U) 
                                                      - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))) 
                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                      (3U & (((IData)(0x23U) 
                                              * ((IData)(2U) 
                                                 - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                                             >> 5U))] 
                                      >> (0x1fU & ((IData)(0x23U) 
                                                   * 
                                                   ((IData)(2U) 
                                                    - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))
                          : 0U)) | (0U != (3U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_inst_resp))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned = 1U;
            }
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned 
                = (1U & (((0x68U >= ((IData)(2U) + 
                                     (0x7fU & ((IData)(0x23U) 
                                               * ((IData)(2U) 
                                                  - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                          && (1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                    (((IData)(2U) + 
                                      (0x7fU & ((IData)(0x23U) 
                                                * ((IData)(2U) 
                                                   - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                     >> 5U)] >> (0x1fU 
                                                 & ((IData)(2U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x23U) 
                                                        * 
                                                        ((IData)(2U) 
                                                         - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))))) 
                         | (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                    >> 2U))));
        }
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned 
            = (3U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_inst_resp));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned 
            = (1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                             >> 2U)));
    }
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__26(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__26\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid 
        = (((IData)(vlSelfRef.mem_rvalid_i) & (1U == 
                                               vlSelfRef.cv32e40x_wrapper__DOT__req_sources
                                               [0U])) 
           | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb[0U] 
        = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] 
            >> 9U) & ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status)) 
                      & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__xif_waiting)) 
                         & ((~ (((IData)((0x808U == 
                                          (0x808U & 
                                           vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U]))) 
                                 & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__result_valid_q)) 
                                & (IData)((vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.result 
                                           >> 6U)))) 
                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__instr_valid)))));
    vlSelfRef.mem_we_o = 0U;
    if (vlSelfRef.cv32e40x_wrapper__DOT__amem_req) {
        vlSelfRef.mem_we_o = vlSelfRef.cv32e40x_wrapper__DOT__amem_we;
    } else if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid) {
        vlSelfRef.mem_we_o = (1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                    >> 9U));
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffeU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | ((0U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                      [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                     [0U]));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffdU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((1U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 1U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffbU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((2U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 2U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffff7U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((3U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 3U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffefU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((4U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 4U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffdfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((5U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 5U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffbfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((6U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 6U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffff7fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((7U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 7U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffeffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((8U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 8U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffdffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((9U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 9U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffbffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xaU == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0xaU));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffff7ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xbU == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0xbU));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffefffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xcU == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0xcU));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffdfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xdU == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0xdU));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffbfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xeU == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0xeU));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xfU == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0xfU));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x10U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x11U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0x11U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x12U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0x12U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x13U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0x13U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x14U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0x14U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x15U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0x15U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x16U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0x16U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x17U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0x17U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x18U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0x18U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x19U == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0x19U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1aU == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0x1aU));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1bU == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0x1bU));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xefffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1cU == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0x1cU));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1dU == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0x1dU));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1eU == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0x1eU));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1fU == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb
                       [0U]) & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_we_wb
                      [0U]) << 0x1fU));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__29(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__29\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__alu_en 
        = (1U & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp)) 
                 & ((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                        >> 4U)) & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                           >> 0x30U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__lsu_en 
        = (1U & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp)) 
                 & ((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                        >> 4U)) & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                           >> 0x14U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__div_en 
        = (1U & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp)) 
                 & ((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                        >> 4U)) & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                           >> 0x1dU)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__mul_en 
        = (1U & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp)) 
                 & ((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                        >> 4U)) & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                           >> 0x21U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__mret_insn_id 
        = (1U & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp)) 
                 & ((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                        >> 4U)) & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                           >> 6U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_id 
        = ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp))
            ? 0U : (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_raw_id));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__illegal_insn 
        = (1U & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp)) 
                 & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                     >> 4U) | (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                       >> 4U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target 
        = ((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
            ? (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                 << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                             >> 0x15U)) + (((- (IData)(
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                           >> 0x1bU)))) 
                                            << 0x14U) 
                                           | (((0xff000U 
                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   << 4U)) 
                                               | (0x800U 
                                                  & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                     >> 5U))) 
                                              | (0x7feU 
                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                    >> 0x10U)))))
            : ((3U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
                ? (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                     << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                                 >> 0x15U)) + (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                               >> 0x1bU)))) 
                                                << 0xdU) 
                                               | (((0x1000U 
                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                       >> 0xfU)) 
                                                   | (0x800U 
                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                         << 8U))) 
                                                  | ((0x7e0U 
                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                         >> 0x10U)) 
                                                     | (0x1eU 
                                                        & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                           >> 3U))))))
                : ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__ctrl_transfer_target_mux_sel))
                    ? (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__jalr_fw 
                       + vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_i_type)
                    : (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__jalr_fw 
                       + vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_i_type))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__instr_meta_n 
        = (0xfU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                   >> 0x15U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__instr_meta_n 
        = ((3U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__instr_meta_n)) 
           | ((((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_id)) 
                | (2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_id))) 
               << 3U) | ((3U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_id)) 
                         << 2U)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_4 
        = ((0U != (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                            >> 0x10U))) & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__illegal_insn) 
                                           | ((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                                                  >> 4U)) 
                                              & (IData)(
                                                        (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                         >> 0x1aU)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_3 
        = (1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__illegal_insn) 
                 | ((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                        >> 4U)) & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                           >> 0x19U)))));
    vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_valid 
        = ((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__instr_valid) 
             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__illegal_insn)) 
            & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q))) 
           & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__xif_id 
        = (7U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                 + (IData)(vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_valid)));
}

extern const VlUnpacked<CData/*1:0*/, 128> Vcv32e40x_wrapper__ConstPool__TABLE_he4bdb8e7_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcv32e40x_wrapper__ConstPool__TABLE_h7d65c057_0;

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__32(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__32\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_a_fw;
    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_a_fw = 0;
    VlWide<3>/*95:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_operands;
    VL_ZERO_W(96, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_operands);
    CData/*0:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__is_result_instr;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__is_result_instr = 0;
    CData/*6:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*7:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*6:0*/ TOP__cv32e40x_wrapper__DOT__ext_if__DOT__issue_resp;
    TOP__cv32e40x_wrapper__DOT__ext_if__DOT__issue_resp = 0;
    // Body
    cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_a_fw 
        = ((1U == (3U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp) 
                         >> 9U))) ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__rf_wdata_ex
            : ((2U == (3U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp) 
                             >> 9U))) ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__rf_wdata_wb
                : ((0U == (3U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp) 
                                 >> 9U))) ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_rdata_id
                   [0U] : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_rdata_id
                   [0U])));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_b_fw 
        = ((1U == (3U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp) 
                         >> 7U))) ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__rf_wdata_ex
            : ((2U == (3U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp) 
                             >> 7U))) ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__rf_wdata_wb
                : ((0U == (3U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp) 
                                 >> 7U))) ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_rdata_id
                   [1U] : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_rdata_id
                   [1U])));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_a 
        = ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_a_fw
            : ((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                                >> 0x15U)) : ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                                               ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_a
                                               : cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_a_fw)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_b 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__alu_op_b_mux_sel)
            ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__alu_op_b_mux_sel)
                ? ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])
                            ? 2U : 4U) : (0xfffff000U 
                                          & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                             << 4U)))
                    : ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                        ? (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                              >> 0x1bU)))) 
                            << 0xcU) | ((0xfe0U & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                                   >> 0x10U)) 
                                        | (0x1fU & 
                                           (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                            >> 3U))))
                        : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_i_type))
                : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_b_fw)
            : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_b_fw);
    vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[2U] 
        = (3U & vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[2U]);
    vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[3U] = 0U;
    vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[4U] 
        = (0xfffffff0U & vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[4U]);
    vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[2U] 
        = ((0xfU & vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[2U]) 
           | (cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_a_fw 
              << 4U));
    vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[3U] 
        = ((0xfffffff0U & vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[3U]) 
           | (cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_a_fw 
              >> 0x1cU));
    vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[2U] 
        = (4U | vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[2U]);
    vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[3U] 
        = ((0xfU & vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[3U]) 
           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_b_fw 
              << 4U));
    vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[4U] 
        = ((0xfffffff0U & vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[4U]) 
           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_b_fw 
              >> 0x1cU));
    vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[2U] 
        = (8U | vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[2U]);
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__is_vector_op 
        = ((7U == (0x7fU & (vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[4U] 
                            >> 9U))) | ((0x27U == (0x7fU 
                                                   & (vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[4U] 
                                                      >> 9U))) 
                                        | (0x57U == 
                                           (0x7fU & 
                                            (vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[4U] 
                                             >> 9U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__needs_writeback 
        = (IData)(((0xae00U == (0xfe00U & vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[4U])) 
                   & ((7U == (7U & (vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[4U] 
                                    >> 0x15U))) | ((IData)(
                                                           ((0x400000U 
                                                             == 
                                                             (0xe00000U 
                                                              & vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[4U])) 
                                                            & (0x80U 
                                                               == 
                                                               (0x1f8U 
                                                                & vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[5U])))) 
                                                   | (IData)(
                                                             ((0xc00000U 
                                                               == 
                                                               (0xe00000U 
                                                                & vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[4U])) 
                                                              & (0x1e8U 
                                                                 == 
                                                                 (0x1f8U 
                                                                  & vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[5U]))))))));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__apu_operands_i[0U] 
        = ((vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[5U] 
            << 0x17U) | (vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[4U] 
                         >> 9U));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__apu_operands_i[1U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[4U])) 
                    << 0x3cU) | (((QData)((IData)(vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[3U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[2U])) 
                                               >> 4U))));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__apu_operands_i[2U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[4U])) 
                     << 0x3cU) | (((QData)((IData)(
                                                   vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[3U])) 
                                   << 0x1cU) | ((QData)((IData)(
                                                                vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_req[2U])) 
                                                >> 4U))) 
                   >> 0x20U));
    TOP__cv32e40x_wrapper__DOT__ext_if__DOT__issue_resp 
        = (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__is_vector_op) 
            << 6U) | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__needs_writeback) 
                      << 5U));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__is_result_instr 
        = ((0x57U == (0x7fU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__apu_operands_i[0U])) 
           & ((7U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__apu_operands_i[0U] 
                            >> 0xcU))) | ((0x10U == 
                                           (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__apu_operands_i[0U] 
                                            >> 0x1aU)) 
                                          | ((0x3cU 
                                              == (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__apu_operands_i[0U] 
                                                  >> 0x1aU)) 
                                             | (0x3dU 
                                                == 
                                                (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__apu_operands_i[0U] 
                                                 >> 0x1aU))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__rf_we 
        = (1U & (((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp)) 
                  & ((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                         >> 4U)) & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                            >> 0x18U)))) 
                 | ((IData)(vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_valid) 
                    & ((IData)(TOP__cv32e40x_wrapper__DOT__ext_if__DOT__issue_resp) 
                       >> 5U))));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__gen_fifo__DOT__fifo_write_en 
        = ((~ (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__is_result_instr)) 
           & ((IData)(vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_valid) 
              & ((4U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__count)) 
                 & (0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__state)))));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__core_halt_o 
        = ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__state))
            ? ((((IData)(vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_valid) 
                 & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__is_result_instr)) 
                & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__dec_busy) 
                   | (0U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__count)))) 
               | (((IData)(vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_valid) 
                   & (~ (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__is_result_instr))) 
                  & (4U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__count))))
            : ((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__state)) 
               || ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__state)) 
                   && (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__core_halt_ctrl))));
    __Vtableidx7 = (((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_rvalid) 
                       << 6U) | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__dec_busy) 
                                 << 5U)) | (((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__count)) 
                                             << 4U) 
                                            | ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__is_result_instr) 
                                               << 3U))) 
                    | (((IData)(vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_valid) 
                        << 2U) | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__state)));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__next_state 
        = Vcv32e40x_wrapper__ConstPool__TABLE_he4bdb8e7_0
        [__Vtableidx7];
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_req = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_operands[0U] = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_operands[1U] = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_operands[2U] = 0U;
    if (((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__state)) 
         | (((((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__state)) 
               & (IData)(vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_valid)) 
              & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__is_result_instr)) 
             & (0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__count))) 
            & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__dec_busy))))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_req 
            = vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_valid;
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_operands[0U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__apu_operands_i[0U];
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_operands[1U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__apu_operands_i[1U];
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_operands[2U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__apu_operands_i[2U];
    } else if (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__gen_fifo__DOT__fifo_read_en) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_req = 1U;
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_operands[0U] 
            = ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__fifo_mem
                [vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__rd_ptr][1U] 
                << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__fifo_mem
                            [vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__rd_ptr][0U] 
                            >> 0x15U));
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_operands[1U] 
            = ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__fifo_mem
                [vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__rd_ptr][2U] 
                << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__fifo_mem
                            [vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__rd_ptr][1U] 
                            >> 0x15U));
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_operands[2U] 
            = ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__fifo_mem
                [vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__rd_ptr][3U] 
                << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__fifo_mem
                            [vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__rd_ptr][2U] 
                            >> 0x15U));
    }
    __Vtableidx8 = (((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_gnt) 
                       << 7U) | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__dec_busy) 
                                 << 6U)) | (((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__count)) 
                                             << 5U) 
                                            | ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__is_result_instr) 
                                               << 4U))) 
                    | ((((~ (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__is_result_instr)) 
                         & (4U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__count))) 
                        << 3U) | (((IData)(vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_valid) 
                                   << 2U) | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cmd_fifo__DOT__state))));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__apu_gnt 
        = Vcv32e40x_wrapper__ConstPool__TABLE_h7d65c057_0
        [__Vtableidx8];
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
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_operands_unpacked[0U] 
        = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_operands[0U];
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_operands_unpacked[1U] 
        = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_operands[1U];
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_operands_unpacked[2U] 
        = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__fifo_dec_apu_operands[2U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__xif_insn_accept 
        = ((((IData)(vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_valid) 
             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__apu_gnt)) 
            & ((IData)(TOP__cv32e40x_wrapper__DOT__ext_if__DOT__issue_resp) 
               >> 6U)) | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__xif_insn_reject 
        = ((((IData)(vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_valid) 
             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__apu_gnt)) 
            & (~ ((IData)(TOP__cv32e40x_wrapper__DOT__ext_if__DOT__issue_resp) 
                  >> 6U))) | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__xif_waiting 
        = ((((IData)(vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.issue_valid) 
             & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__apu_gnt))) 
            & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q))) 
           & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_valid 
        = ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__xif_waiting)) 
           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__instr_valid));
}
