// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcv32e40x_wrapper.h for the primary calling header

#include "Vcv32e40x_wrapper__pch.h"
#include "Vcv32e40x_wrapper___024root.h"

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__10(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__10\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match 
        = (((((0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] 
                        >> 4U)) == (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                             >> 0x10U))) 
             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_4)) 
            << 1U) | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jr_match) 
                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_3)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match 
        = (((((0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                        >> 6U)) == (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                             >> 0x10U))) 
             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_4)) 
            << 1U) | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_jr_match) 
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

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__11(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__11\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
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
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__13(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__13\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

extern const VlUnpacked<CData/*1:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h61a14a7c_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h1dbc620d_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h3931de26_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h2ecec9f4_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_hc62f7ad7_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h7ce83cad_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h88599ead_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_hb93ab6b3_0;

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__15(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__15\n"); );
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
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__cnt_d 
            = (0x3fU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_clz_result));
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
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__cnt_d 
            = (0x3fU & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__init_dummy_cnt)
                         ? (((IData)(0x20U) - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_clz_result)) 
                            - (IData)(1U)) : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__cnt_q) 
                                              - (0U 
                                                 != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__cnt_q)))));
        cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__add_b_mux 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__remainder_q;
        cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__add_a_mux 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__divisor_q;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__res_inv_d 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__res_inv_q;
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__divisor_d 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__divisor_en)
            ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__init_en)
                ? (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                : (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__comp_inv_q) 
                    << 0x1fU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__divisor_q 
                                 >> 1U))) : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__divisor_q);
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

extern const VlUnpacked<CData/*2:0*/, 128> Vcv32e40x_wrapper__ConstPool__TABLE_hd73581e0_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcv32e40x_wrapper__ConstPool__TABLE_h4e5db45e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcv32e40x_wrapper__ConstPool__TABLE_hac2193e5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcv32e40x_wrapper__ConstPool__TABLE_hd965fa7c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcv32e40x_wrapper__ConstPool__TABLE_h44fad514_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcv32e40x_wrapper__ConstPool__TABLE_h1b26f08b_0;

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__16(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__16\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus;
    cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    __Vtableidx4 = ((0x40U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                              << 5U)) | (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans_valid) 
                                          << 5U) | 
                                         (((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__next_cnt)) 
                                           << 3U) | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n 
        = Vcv32e40x_wrapper__ConstPool__TABLE_hd73581e0_0
        [__Vtableidx4];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status 
        = Vcv32e40x_wrapper__ConstPool__TABLE_h4e5db45e_0
        [__Vtableidx4];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core 
        = Vcv32e40x_wrapper__ConstPool__TABLE_hac2193e5_0
        [__Vtableidx4];
    cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus 
        = Vcv32e40x_wrapper__ConstPool__TABLE_hd965fa7c_0
        [__Vtableidx4];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid 
        = Vcv32e40x_wrapper__ConstPool__TABLE_h44fad514_0
        [__Vtableidx4];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready 
        = Vcv32e40x_wrapper__ConstPool__TABLE_h1b26f08b_0
        [__Vtableidx4];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans_valid 
        = ((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus)) 
           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans_valid));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) 
           | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans_valid));
}

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__18(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__18\n"); );
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

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__20(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__20\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__24(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__24\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_resp_valid 
        = (((IData)(vlSelfRef.mem_rvalid_i) & (0U == 
                                               vlSelfRef.cv32e40x_wrapper__DOT__req_sources
                                               [0U])) 
           | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vcv32e40x_wrapper__ConstPool__TABLE_h22c0c54c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcv32e40x_wrapper__ConstPool__TABLE_hed15535e_0;

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_comb__TOP__27(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_comb__TOP__27\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans_ready 
        = (1U & (((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core)) 
                  & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state)
                      ? ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans[0U] 
                          >> 3U) & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__dmem_gnt))
                      : ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans[0U] 
                          >> 3U) | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__dmem_gnt)))) 
                 | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready)));
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
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans_valid) 
           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans_ready));
}

void Vcv32e40x_wrapper___024root___eval_triggers__act(Vcv32e40x_wrapper___024root* vlSelf);
void Vcv32e40x_wrapper___024root___eval_act(Vcv32e40x_wrapper___024root* vlSelf);

bool Vcv32e40x_wrapper___024root___eval_phase__act(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___eval_phase__act\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<33> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcv32e40x_wrapper___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcv32e40x_wrapper___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vcv32e40x_wrapper___024root___eval_nba(Vcv32e40x_wrapper___024root* vlSelf);

bool Vcv32e40x_wrapper___024root___eval_phase__nba(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___eval_phase__nba\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcv32e40x_wrapper___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcv32e40x_wrapper___024root___dump_triggers__ico(Vcv32e40x_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
bool Vcv32e40x_wrapper___024root___eval_phase__ico(Vcv32e40x_wrapper___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcv32e40x_wrapper___024root___dump_triggers__nba(Vcv32e40x_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcv32e40x_wrapper___024root___dump_triggers__act(Vcv32e40x_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vcv32e40x_wrapper___024root___eval(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___eval\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vcv32e40x_wrapper___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/cv32e40x_wrapper.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcv32e40x_wrapper___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcv32e40x_wrapper___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/cv32e40x_wrapper.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcv32e40x_wrapper___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/cv32e40x_wrapper.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcv32e40x_wrapper___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcv32e40x_wrapper___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcv32e40x_wrapper___024root___eval_debug_assertions(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___eval_debug_assertions\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY(((vlSelfRef.rst_ni & 0xfeU)))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY(((vlSelfRef.mem_rvalid_i & 0xfeU)))) {
        Verilated::overWidthError("mem_rvalid_i");}
    if (VL_UNLIKELY(((vlSelfRef.mem_err_i & 0xfeU)))) {
        Verilated::overWidthError("mem_err_i");}
}
#endif  // VL_DEBUG
