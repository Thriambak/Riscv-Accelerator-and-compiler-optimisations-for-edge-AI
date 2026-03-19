// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcv32e40x_wrapper.h for the primary calling header

#include "Vcv32e40x_wrapper__pch.h"
#include "Vcv32e40x_wrapper__Syms.h"
#include "Vcv32e40x_wrapper___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcv32e40x_wrapper___024root___dump_triggers__ico(Vcv32e40x_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vcv32e40x_wrapper___024root___eval_triggers__ico(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___eval_triggers__ico\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
    vlSelfRef.__VicoTriggered.set(1U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid__1)));
    vlSelfRef.__VicoTriggered.set(2U, (0U != (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                                ^ vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__1[0U]) 
                                               | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U] 
                                                  ^ 
                                                  vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__1[1U])) 
                                              | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                                                 ^ 
                                                 vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__1[2U]))));
    vlSelfRef.__VicoTriggered.set(3U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_ready__1)));
    vlSelfRef.__VicoTriggered.set(4U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up__1)));
    vlSelfRef.__VicoTriggered.set(5U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid__1)));
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
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
        vlSelfRef.__VicoDidInit = 1U;
        vlSelfRef.__VicoTriggered.set(1U, 1U);
        vlSelfRef.__VicoTriggered.set(2U, 1U);
        vlSelfRef.__VicoTriggered.set(3U, 1U);
        vlSelfRef.__VicoTriggered.set(4U, 1U);
        vlSelfRef.__VicoTriggered.set(5U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcv32e40x_wrapper___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*1:0*/, 128> Vcv32e40x_wrapper__ConstPool__TABLE_he4bdb8e7_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcv32e40x_wrapper__ConstPool__TABLE_h7d65c057_0;

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___ico_sequent__TOP__0(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___ico_sequent__TOP__0\n"); );
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
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid 
        = (((IData)(vlSelfRef.mem_rvalid_i) & (1U == 
                                               vlSelfRef.cv32e40x_wrapper__DOT__req_sources
                                               [0U])) 
           | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_bytes[0U] 
        = (0xffU & vlSelfRef.mem_rdata_i);
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_bytes[1U] 
        = (0xffU & (vlSelfRef.mem_rdata_i >> 8U));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_bytes[2U] 
        = (0xffU & (vlSelfRef.mem_rdata_i >> 0x10U));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__tr__DOT__memory_read_bytes[3U] 
        = (vlSelfRef.mem_rdata_i >> 0x18U);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_resp_valid 
        = (((IData)(vlSelfRef.mem_rvalid_i) & (0U == 
                                               vlSelfRef.cv32e40x_wrapper__DOT__req_sources
                                               [0U])) 
           | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
    vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
        = (((QData)((IData)(vlSelfRef.mem_rdata_i)) 
            << 2U) | (QData)((IData)(((IData)(vlSelfRef.mem_err_i) 
                                      << 1U))));
    vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if.resp_payload 
        = (((QData)((IData)(vlSelfRef.mem_rdata_i)) 
            << 1U) | (QData)((IData)(vlSelfRef.mem_err_i)));
    vlSelfRef.cv32e40x_wrapper__DOT__amem_rvalid = 
        ((IData)(vlSelfRef.mem_rvalid_i) & (2U == vlSelfRef.cv32e40x_wrapper__DOT__req_sources
                                            [0U]));
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
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_inst_resp 
        = ((vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if.resp_payload 
            << 2U) | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status)));
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
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_addr_inc = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycles_inc = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__rf_wdata_wb 
        = ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U])
            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_ext
            : ((8U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])
                ? (IData)((vlSymsp->TOP__cv32e40x_wrapper__DOT__ext_if.result 
                           >> 0xeU)) : ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] 
                                         << 0x1cU) 
                                        | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                           >> 4U))));
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
                    if ((3U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                        if (vlSelfRef.cv32e40x_wrapper__DOT__amem_rvalid) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_addr_inc = 1U;
                        }
                    }
                    if ((3U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                        if ((4U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
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
                }
            }
        }
    }
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track_next 
        = (0x7fU & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__au_start)
                     ? (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT____VdfgRegularize_ha59b5e9f_0_1)
                     : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_addr_inc)
                         ? (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track) 
                             >= (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_bytes))
                             ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track) 
                                - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_bytes))
                             : 0U) : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycles_inc)
                                       ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track) 
                                          - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycle_bytes))
                                       : (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb[0U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__rf_wdata_wb;
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
    vlSelfRef.cv32e40x_wrapper__DOT__amem_req = 0U;
    if (((((((((0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state) 
               | (1U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
              | (2U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
             | (3U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
            | (4U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
           | (5U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
          | (6U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
         | (7U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__next_state 
            = ((0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)
                ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_load)
                    ? 1U : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_store)
                             ? ((0U == (0x1fU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                        [2U])) ? 7U
                                 : 5U) : 0U)) : ((1U 
                                                  == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)
                                                  ? 2U
                                                  : 
                                                 ((2U 
                                                   == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)
                                                    ? 
                                                   ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__amem_rvalid)
                                                     ? 2U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      VL_EXTENDS_II(32,7, (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track_next)))
                                                      ? 4U
                                                      : 3U))
                                                    : 
                                                   ((4U 
                                                     == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)
                                                     ? 0U
                                                     : 
                                                    ((5U 
                                                      == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)
                                                      ? 6U
                                                      : 
                                                     ((6U 
                                                       == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)
                                                       ? 
                                                      ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__amem_rvalid)
                                                        ? 
                                                       (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycles_cnt) 
                                                         == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycles))
                                                         ? 7U
                                                         : 5U)
                                                        : 6U)
                                                       : 0U)))))));
        if ((0U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
            if ((1U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                if ((2U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                    if ((0U != VL_EXTENDS_II(32,7, (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track_next)))) {
                        vlSelfRef.cv32e40x_wrapper__DOT__amem_req = 1U;
                    }
                } else if ((3U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                    if ((4U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                        if ((5U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                            vlSelfRef.cv32e40x_wrapper__DOT__amem_req = 1U;
                        }
                    }
                }
            }
        }
    }
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
    vlSelfRef.cv32e40x_wrapper__DOT__amem_gnt = ((0x100U 
                                                  > (IData)(vlSelfRef.cv32e40x_wrapper__DOT__req_count)) 
                                                 & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__amem_req));
    vlSelfRef.mem_req_o = (((IData)(vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if.s_req) 
                            | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid)) 
                           | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__amem_req));
    vlSelfRef.mem_wdata_o = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                              << 0x1bU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                           >> 5U));
    vlSelfRef.mem_be_o = (0xfU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                  >> 5U));
    vlSelfRef.mem_we_o = 0U;
    if (vlSelfRef.cv32e40x_wrapper__DOT__amem_req) {
        vlSelfRef.mem_wdata_o = vlSelfRef.cv32e40x_wrapper__DOT__amem_wdata;
        vlSelfRef.mem_be_o = vlSelfRef.cv32e40x_wrapper__DOT__amem_be;
        vlSelfRef.mem_we_o = vlSelfRef.cv32e40x_wrapper__DOT__amem_we;
    } else if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid) {
        vlSelfRef.mem_we_o = (1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                    >> 9U));
    }
    vlSelfRef.cv32e40x_wrapper__DOT__imem_gnt = ((0x100U 
                                                  > (IData)(vlSelfRef.cv32e40x_wrapper__DOT__req_count)) 
                                                 & ((IData)(vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if.s_req) 
                                                    & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid)) 
                                                       & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__amem_req)))));
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
    if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state = 1U;
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q) {
            if (vlSelfRef.cv32e40x_wrapper__DOT__imem_gnt) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state = 0U;
            }
        }
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state = 0U;
        if (((IData)(vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if.s_req) 
             & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__imem_gnt)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state = 1U;
        }
    }
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

extern const VlUnpacked<CData/*0:0*/, 16> Vcv32e40x_wrapper__ConstPool__TABLE_h22c0c54c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcv32e40x_wrapper__ConstPool__TABLE_hed15535e_0;

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___ico_comb__TOP__1(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___ico_comb__TOP__1\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__csr_mtvec_init_if;
    cv32e40x_wrapper__DOT__core__DOT__csr_mtvec_init_if = 0;
    QData/*36:0*/ cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__bus_trans;
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__bus_trans = 0;
    CData/*1:0*/ cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins;
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins = 0;
    CData/*1:0*/ cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch;
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hb4c4fe8d__0;
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hb4c4fe8d__0 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h80a9321c__0;
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h80a9321c__0 = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h4ed25a56__0;
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h4ed25a56__0 = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h760371f7__0;
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h760371f7__0 = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__exception_pc;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__exception_pc = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_en_gated;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_en_gated = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_we;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_we = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_2;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_2 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_4;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_4 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_5;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_5 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_7;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_7 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_9;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_9 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_10;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_10 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_11;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_11 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_12;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_12 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_13;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_13 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_14;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_14 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_15;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_15 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_16;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_16 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_17;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_17 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_18;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_18 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_19;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_19 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_20;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_20 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_21;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_21 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_22;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_22 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_23;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_23 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_24;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_24 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_25;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_25 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_26;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_26 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_27;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_27 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_28;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_28 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_29;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_29 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_30;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_30 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_31;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_31 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_32;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_32 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_33;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_33 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_34;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_34 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_35;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_35 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_36;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_36 = 0;
    CData/*5:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_37;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_37 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_38;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_38 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_39;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_39 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_40;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_40 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__dmem_gnt = ((0x100U 
                                                  > (IData)(vlSelfRef.cv32e40x_wrapper__DOT__req_count)) 
                                                 & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__amem_req)) 
                                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid)));
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
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans_valid) 
           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans_ready));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q;
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 0U;
    if ((0x800U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x400U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x200U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x100U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x80U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x40U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x20U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x10U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((8U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        } else if ((4U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                             >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        }
                    } else {
                        cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else if ((0x100U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            } else if ((0x80U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x40U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((0x20U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                     >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((0x40U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            } else if ((0x20U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            } else if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                 >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x200U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x100U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x80U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x40U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x20U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                         >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                        cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x40U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((0x20U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                     >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        }
    } else if ((0x400U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x200U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x100U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x80U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x40U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x20U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((0x10U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read 
                                = ((1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 3U)) || 
                                   ((1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                           >> 2U)) 
                                    || (1U & ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (~ 
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                                                    >> 8U))
                                                   : 
                                                  (~ 
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                                                    >> 8U)))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (~ 
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                                                    >> 8U))
                                                   : 
                                                  (~ 
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                                                    >> 8U)))))));
                        } else if ((8U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((4U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            } else if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        } else if ((4U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            } else if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        }
                    } else {
                        cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                } else {
                    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else {
                cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        }
    } else if ((0x200U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x100U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x80U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            } else if ((0x40U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x20U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((0x10U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((8U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((4U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                }
            } else if ((0x20U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                            } else if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((8U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((4U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            } else if ((4U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr))) {
                cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        }
    } else {
        cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
    }
    if ((1U & (~ (IData)(vlSelfRef.clk_i)))) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en 
            = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__sleep_unit_i__DOT__fetch_enable_q) 
               & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U] 
                   >> 0x1fU) | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__sleep_unit_i__DOT__core_busy_q)));
    }
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q;
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins = 0U;
    if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                  >> 0x1cU)))) {
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
            cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins 
                = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q)
                    ? ((3U == (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                             >> 3U))))
                        ? 1U : ((3U == (3U & (IData)(
                                                     (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                                      >> 0x13U))))
                                 ? 1U : 2U)) : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q)
                                                 ? 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                                              >> 0x13U))))
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                                              >> 0x13U))))
                                                  ? 1U
                                                  : 2U)));
        }
    }
    if ((8U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U])) {
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_resp_valid) {
            cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch 
                = (3U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q) 
                         - (IData)(1U)));
        }
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n = 0U;
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n 
            = (7U & (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
                      + (IData)(cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins)) 
                     - ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q)
                         ? 1U : 0U)));
    }
    cv32e40x_wrapper__DOT__core__DOT__csr_mtvec_init_if 
        = (IData)((0x10000000U == (0x1e000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__branch_addr_n = 0x80U;
    if ((0x8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])) {
        if ((0x4000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])) {
            if ((0x2000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__branch_addr_n 
                    = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dpc_csr_i__DOT__rdata_q;
            }
        } else {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__branch_addr_n 
                = ((0x2000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])
                    ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q
                    : ((0x1000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])
                        ? ((0x800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])
                            ? (0xffffff00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q)
                            : ((0x400000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])
                                ? (0xffffff00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q)
                                : 0U)) : ((0x800000U 
                                           & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])
                                           ? 0U : (
                                                   (0x400000U 
                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])
                                                    ? 
                                                   ((0xffffff00U 
                                                     & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q) 
                                                    | (0x7cU 
                                                       & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                                                          >> 0xeU)))
                                                    : 
                                                   (0xffffff00U 
                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q)))));
        }
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__branch_addr_n 
            = ((0x4000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])
                ? ((0x2000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])
                    ? ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                        << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                                    >> 0x13U)) : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target)
                : ((0x2000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])
                    ? ((IData)(4U) + ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
                                       << 0xdU) | (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[1U] 
                                                   >> 0x13U)))
                    : 0x80U));
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
        = (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr)) 
            << 3U) | (QData)((IData)(((4U & (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_3_1)
                                               ? ((0x68U 
                                                   >= 
                                                   ((IData)(2U) 
                                                    + 
                                                    (0x7fU 
                                                     & ((IData)(0x23U) 
                                                        * 
                                                        ((IData)(2U) 
                                                         - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))) 
                                                  && (1U 
                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                         (((IData)(2U) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(0x23U) 
                                                               * 
                                                               ((IData)(2U) 
                                                                - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))) 
                                                          >> 5U)] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(2U) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(0x23U) 
                                                                 * 
                                                                 ((IData)(2U) 
                                                                  - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))))
                                               : (IData)(vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if.resp_payload)) 
                                             << 2U)) 
                                      | (3U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_3_1)
                                                ? (
                                                   (0x68U 
                                                    >= 
                                                    (0x7fU 
                                                     & ((IData)(0x23U) 
                                                        * 
                                                        ((IData)(2U) 
                                                         - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                                                    ? 
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
                                                            - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                                                    : 0U)
                                                : (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_status)))))));
    if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                  >> 3U)))) {
        if ((2U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                = (((QData)((IData)(((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_3_6)
                                      ? ((((0x68U >= 
                                            ((IData)(3U) 
                                             + (0x7fU 
                                                & ((IData)(0x23U) 
                                                   * 
                                                   ((IData)(2U) 
                                                    - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))
                                            ? (0xffffU 
                                               & (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(0x23U) 
                                                            * 
                                                            ((IData)(2U) 
                                                             - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                    (((IData)(0x12U) 
                                                      + 
                                                      (0x7fU 
                                                       & ((IData)(0x23U) 
                                                          * 
                                                          ((IData)(2U) 
                                                           - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x23U) 
                                                             * 
                                                             ((IData)(2U) 
                                                              - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))))))) 
                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                                                     (((IData)(3U) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(0x23U) 
                                                           * 
                                                           ((IData)(2U) 
                                                            - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))) 
                                                      >> 5U)] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(3U) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(0x23U) 
                                                             * 
                                                             ((IData)(2U) 
                                                              - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))))))))
                                            : 0U) << 0x10U) 
                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                            >> 0x10U))
                                      : (((IData)((vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if.resp_payload 
                                                   >> 1U)) 
                                          << 0x10U) 
                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                                            >> 0x10U))))) 
                    << 3U) | (QData)((IData)((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__bus_err_unaligned) 
                                               << 2U) 
                                              | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__mpu_status_unaligned)))));
        }
    }
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_37 
        = (1U | (((0x20U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                            >> 0xdU)) | ((0x10U & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                                   >> 0xfU)) 
                                         | (8U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                                  >> 0x11U)))) 
                 | ((4U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                           >> 0x13U)) | (2U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                               >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_en_gated 
        = (1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                  >> 3U) & ((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                   >> 4U))) & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                                               >> 0xbU))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_illegal 
        = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
            >> 0xbU) & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                         >> 5U) & (((0U != (3U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                                  >> 3U))) 
                                    & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                        >> 5U) & (3U 
                                                  == 
                                                  ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_1_2)
                                                    ? 
                                                   (3U 
                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                       >> 0x1dU))
                                                    : 0U)))) 
                                   | (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__illegal_csr_read))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__clk_en));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q;
    if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n 
            = cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
            = (1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__branch_addr_n 
                        >> 1U)));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
            = (1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__branch_addr_n 
                     >> 1U));
    } else {
        if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_resp_valid) 
             & (0U < (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n 
                = (3U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q) 
                         - (IData)(1U)));
        }
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
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
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_addr 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q;
    if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_valid) 
                 & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_ready))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = 0U;
            }
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_addr 
                = ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])
                    ? (0xfffffffcU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__branch_addr_n)
                    : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q);
        }
    } else {
        if ((1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                    >> 0x1cU) & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_valid) 
                                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_ready)))))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = 1U;
        }
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_addr 
            = ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])
                ? (0xfffffffcU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__branch_addr_n)
                : ((IData)(4U) + (0xfffffffcU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q)));
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_meta_n = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_meta_n 
        = ((0xeU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_meta_n)) 
           | (3U != (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 3U)))));
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hb4c4fe8d__0 
        = (0x6fU | ((((((IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                 >> 0xfU)) << 0x1fU) 
                       | (0x40000000U & ((IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                  >> 0xbU)) 
                                         << 0x1eU))) 
                      | ((0x30000000U & ((IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                  >> 0xcU)) 
                                         << 0x1cU)) 
                         | ((0x8000000U & ((IData)(
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                    >> 9U)) 
                                           << 0x1bU)) 
                            | (0x4000000U & ((IData)(
                                                     (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0xaU)) 
                                             << 0x1aU))))) 
                     | ((0x2000000U & ((IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 5U)) 
                                       << 0x19U)) | 
                        ((0x1000000U & ((IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                 >> 0xeU)) 
                                        << 0x18U)) 
                         | (0xe00000U & ((IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                  >> 6U)) 
                                         << 0x15U))))) 
                    | ((0x1ff000U & ((- (IData)((1U 
                                                 & (IData)(
                                                           (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 0xfU))))) 
                                     << 0xcU)) | (0x80U 
                                                  & ((~ (IData)(
                                                                (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0x12U))) 
                                                     << 7U)))));
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h4ed25a56__0 
        = (0x45413U | ((0x40000000U & ((IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 0xdU)) 
                                       << 0x1eU)) | 
                       (((0x1f00000U & ((IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                 >> 5U)) 
                                        << 0x14U)) 
                         | (0x38000U & ((IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                 >> 0xaU)) 
                                        << 0xfU))) 
                        | (0x380U & ((IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 0xaU)) 
                                     << 7U)))));
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h760371f7__0 
        = (0x1013U | ((0x1f00000U & ((IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 5U)) 
                                     << 0x14U)) | (
                                                   (0xf8000U 
                                                    & ((IData)(
                                                               (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0xaU)) 
                                                       << 0xfU)) 
                                                   | (0xf80U 
                                                      & ((IData)(
                                                                 (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0xaU)) 
                                                         << 7U)))));
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h80a9321c__0 
        = (0U == ((0x20U & ((IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                     >> 0xfU)) << 5U)) 
                  | (0x1fU & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 5U)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events_raw 
        = (((((0x8000U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                          << 7U)) | (0x4000U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                                << 5U))) 
             | ((0x2000U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                            << 3U)) | (0x1000U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                                  << 1U)))) 
            | (((0x800U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                           >> 1U)) | (0x400U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                                >> 3U))) 
               | ((0x200U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                             >> 5U)) | (0x100U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                                  >> 7U))))) 
           | ((0x80U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                        >> 9U)) | ((0x40U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                             >> 0xbU)) 
                                   | (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_37))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
        = ((0xffc0U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events)) 
           | (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_37));
    if (cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_en_gated) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int 
            = ((4U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U])
                ? ((2U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U])
                    ? ((~ ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                            << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
                                        >> 0x15U))) 
                       & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] 
                           << 0x1cU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                        >> 4U))) : 
                   (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                      << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
                                  >> 0x15U)) | ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] 
                                                 << 0x1cU) 
                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                   >> 4U))))
                : ((2U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U])
                    ? ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                        << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
                                    >> 0x15U)) : ((
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                   << 0xbU) 
                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
                                                     >> 0x15U))));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int = 1U;
        if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                      >> 2U)))) {
            if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                          >> 1U)))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int = 0U;
            }
        }
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int 
            = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
                            >> 0x15U));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int = 0U;
    }
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__bus_trans 
        = (6ULL | ((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
                   << 5U));
    cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__bus_trans 
        = (0x1fffffffe7ULL & cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__bus_trans);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr;
    if ((0U == (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                              >> 3U))))) {
        if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                           >> 0x12U)))) {
            if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x11U)))) {
                if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x10U)))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U))))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((7ULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed) 
                           | ((QData)((IData)((0x842023U 
                                               | ((((0x4000000U 
                                                     & ((IData)(
                                                                (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 8U)) 
                                                        << 0x1aU)) 
                                                    | (0x2000000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xfU)) 
                                                          << 0x19U))) 
                                                   | (0x700000U 
                                                      & ((IData)(
                                                                 (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 5U)) 
                                                         << 0x14U))) 
                                                  | ((0x38000U 
                                                      & ((IData)(
                                                                 (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0xaU)) 
                                                         << 0xfU)) 
                                                     | ((0xc00U 
                                                         & ((IData)(
                                                                    (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 0xdU)) 
                                                            << 0xaU)) 
                                                        | (0x200U 
                                                           & ((IData)(
                                                                      (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 9U)) 
                                                              << 9U)))))))) 
                              << 3U));
                }
            } else {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0x11U)))) {
            if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x10U)))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0x10U))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((7ULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed) 
                       | ((QData)((IData)((0x42403U 
                                           | (((0x4000000U 
                                                & ((IData)(
                                                           (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 8U)) 
                                                   << 0x1aU)) 
                                               | ((0x3800000U 
                                                   & ((IData)(
                                                              (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0xdU)) 
                                                      << 0x17U)) 
                                                  | (0x400000U 
                                                     & ((IData)(
                                                                (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 9U)) 
                                                        << 0x16U)))) 
                                              | ((0x38000U 
                                                  & ((IData)(
                                                             (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                              >> 0xaU)) 
                                                     << 0xfU)) 
                                                 | (0x380U 
                                                    & ((IData)(
                                                               (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 5U)) 
                                                       << 7U))))))) 
                          << 3U));
            }
        } else {
            if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x10U)))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0U == (0xffU & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 8U))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0x10U))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((7ULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed) 
                       | ((QData)((IData)((0x10413U 
                                           | (((0x3c000000U 
                                                & ((IData)(
                                                           (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 0xaU)) 
                                                   << 0x1aU)) 
                                               | ((0x3000000U 
                                                   & ((IData)(
                                                              (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0xeU)) 
                                                      << 0x18U)) 
                                                  | ((0x800000U 
                                                      & ((IData)(
                                                                 (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 8U)) 
                                                         << 0x17U)) 
                                                     | (0x400000U 
                                                        & ((IData)(
                                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 9U)) 
                                                           << 0x16U))))) 
                                              | (0x380U 
                                                 & ((IData)(
                                                            (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 5U)) 
                                                    << 7U)))))) 
                          << 3U));
            }
        }
    } else if ((1U == (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                     >> 3U))))) {
        if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                           >> 0x12U)))) {
            if ((1U & (~ (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0x11U))))) {
                if ((1U & (~ (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U))))) {
                    if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                       >> 0xeU)))) {
                        if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 0xdU)))) {
                            if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                               >> 0xfU)))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                              >> 0xfU)))) {
                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
            if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x11U)))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((7ULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed) 
                       | ((QData)((IData)((0x40063U 
                                           | ((((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xfU))))) 
                                                << 0x1cU) 
                                               | ((0xc000000U 
                                                   & ((IData)(
                                                              (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 8U)) 
                                                      << 0x1aU)) 
                                                  | (0x2000000U 
                                                     & ((IData)(
                                                                (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 5U)) 
                                                        << 0x19U)))) 
                                              | ((0x38000U 
                                                  & ((IData)(
                                                             (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                              >> 0xaU)) 
                                                     << 0xfU)) 
                                                 | (((0x1000U 
                                                      & ((IData)(
                                                                 (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0x10U)) 
                                                         << 0xcU)) 
                                                     | (0xc00U 
                                                        & ((IData)(
                                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xdU)) 
                                                           << 0xaU))) 
                                                    | ((0x300U 
                                                        & ((IData)(
                                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 6U)) 
                                                           << 8U)) 
                                                       | (0x80U 
                                                          & ((IData)(
                                                                     (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xfU)) 
                                                             << 7U))))))))) 
                          << 3U));
            } else if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U)))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((7ULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed) 
                       | ((QData)((IData)(cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hb4c4fe8d__0)) 
                          << 3U));
            } else if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0xeU)))) {
                if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0xdU)))) {
                    if ((1U & (~ (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                          >> 0xfU))))) {
                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((7ULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed) 
                               | ((QData)((IData)((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 9U)))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 8U)))
                                                     ? 
                                                    (0x847433U 
                                                     | ((0x700000U 
                                                         & ((IData)(
                                                                    (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 5U)) 
                                                            << 0x14U)) 
                                                        | ((0x38000U 
                                                            & ((IData)(
                                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xaU)) 
                                                               << 0xfU)) 
                                                           | (0x380U 
                                                              & ((IData)(
                                                                         (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xaU)) 
                                                                 << 7U)))))
                                                     : 
                                                    (0x846433U 
                                                     | ((0x700000U 
                                                         & ((IData)(
                                                                    (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 5U)) 
                                                            << 0x14U)) 
                                                        | ((0x38000U 
                                                            & ((IData)(
                                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xaU)) 
                                                               << 0xfU)) 
                                                           | (0x380U 
                                                              & ((IData)(
                                                                         (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xaU)) 
                                                                 << 7U))))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 8U)))
                                                     ? 
                                                    (0x844433U 
                                                     | ((0x700000U 
                                                         & ((IData)(
                                                                    (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 5U)) 
                                                            << 0x14U)) 
                                                        | ((0x38000U 
                                                            & ((IData)(
                                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xaU)) 
                                                               << 0xfU)) 
                                                           | (0x380U 
                                                              & ((IData)(
                                                                         (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xaU)) 
                                                                 << 7U)))))
                                                     : 
                                                    (0x40840433U 
                                                     | ((0x700000U 
                                                         & ((IData)(
                                                                    (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 5U)) 
                                                            << 0x14U)) 
                                                        | ((0x38000U 
                                                            & ((IData)(
                                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xaU)) 
                                                               << 0xfU)) 
                                                           | (0x380U 
                                                              & ((IData)(
                                                                         (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 0xaU)) 
                                                                 << 7U))))))))) 
                                  << 3U));
                    }
                } else {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((7ULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed) 
                           | ((QData)((IData)((0x47413U 
                                               | (((((- (IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                            >> 0xfU))))) 
                                                     << 0x1aU) 
                                                    | (0x2000000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xfU)) 
                                                          << 0x19U))) 
                                                   | (0x1f00000U 
                                                      & ((IData)(
                                                                 (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 5U)) 
                                                         << 0x14U))) 
                                                  | ((0x38000U 
                                                      & ((IData)(
                                                                 (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                  >> 0xaU)) 
                                                         << 0xfU)) 
                                                     | (0x380U 
                                                        & ((IData)(
                                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xaU)) 
                                                           << 7U))))))) 
                              << 3U));
                }
            } else {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((7ULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed) 
                       | ((QData)((IData)(cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h4ed25a56__0)) 
                          << 3U));
            }
        } else if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0x11U)))) {
            if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x10U)))) {
                if (cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h80a9321c__0) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (IData)(cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h80a9321c__0)))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((7ULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed) 
                           | ((QData)((IData)(((2U 
                                                == 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 0xaU))))
                                                ? (0x10113U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xfU))))) 
                                                       << 0x1dU) 
                                                      | (((0x18000000U 
                                                           & ((IData)(
                                                                      (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 6U)) 
                                                              << 0x1bU)) 
                                                          | (0x4000000U 
                                                             & ((IData)(
                                                                        (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 8U)) 
                                                                << 0x1aU))) 
                                                         | ((0x2000000U 
                                                             & ((IData)(
                                                                        (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 5U)) 
                                                                << 0x19U)) 
                                                            | (0x1000000U 
                                                               & ((IData)(
                                                                          (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 9U)) 
                                                                  << 0x18U))))))
                                                : (0x37U 
                                                   | (((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 0xfU))))) 
                                                       << 0x11U) 
                                                      | ((0x1f000U 
                                                          & ((IData)(
                                                                     (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 5U)) 
                                                             << 0xcU)) 
                                                         | (0xf80U 
                                                            & ((IData)(
                                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                        >> 0xaU)) 
                                                               << 7U)))))))) 
                              << 3U));
                }
            } else {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((7ULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed) 
                       | ((QData)((IData)((0x13U | 
                                           (((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xfU))))) 
                                             << 0x1aU) 
                                            | ((0x2000000U 
                                                & ((IData)(
                                                           (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 0xfU)) 
                                                   << 0x19U)) 
                                               | ((0x1f00000U 
                                                   & ((IData)(
                                                              (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 5U)) 
                                                      << 0x14U)) 
                                                  | (0xf80U 
                                                     & ((IData)(
                                                                (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xaU)) 
                                                        << 7U)))))))) 
                          << 3U));
            }
        } else {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
                = ((7ULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed) 
                   | ((QData)((IData)(((1U & (IData)(
                                                     (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                      >> 0x10U)))
                                        ? cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_hb4c4fe8d__0
                                        : (0x13U | 
                                           ((((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 0xfU))))) 
                                              << 0x1aU) 
                                             | ((0x2000000U 
                                                 & ((IData)(
                                                            (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 0xfU)) 
                                                    << 0x19U)) 
                                                | (0x1f00000U 
                                                   & ((IData)(
                                                              (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 5U)) 
                                                      << 0x14U)))) 
                                            | ((0xf8000U 
                                                & ((IData)(
                                                           (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 0xaU)) 
                                                   << 0xfU)) 
                                               | (0xf80U 
                                                  & ((IData)(
                                                             (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                              >> 0xaU)) 
                                                     << 7U)))))))) 
                      << 3U));
        }
    } else if ((2U == (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                     >> 3U))))) {
        if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                           >> 0x12U)))) {
            if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x11U)))) {
                if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x10U)))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
                if ((1U & (~ (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U))))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((7ULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed) 
                           | ((QData)((IData)((0x12023U 
                                               | (((0xc000000U 
                                                    & ((IData)(
                                                               (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 0xaU)) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xfU)) 
                                                          << 0x19U)) 
                                                      | (0x1f00000U 
                                                         & ((IData)(
                                                                    (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 5U)) 
                                                            << 0x14U)))) 
                                                  | (0xe00U 
                                                     & ((IData)(
                                                                (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xcU)) 
                                                        << 9U)))))) 
                              << 3U));
                }
            } else {
                if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                   >> 0x10U)))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((1U & (~ (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                             >> 0xfU))))) {
                    if ((0U == (0x1fU & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                 >> 5U))))) {
                        if ((0U == (0x1fU & (IData)(
                                                    (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                     >> 0xaU))))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                        }
                    }
                }
                if ((1U & (~ (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0x10U))))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
                        = ((7ULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed) 
                           | ((QData)((IData)(((1U 
                                                & (IData)(
                                                          (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                           >> 0xfU)))
                                                ? (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 5U))))
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 0xaU))))
                                                     ? 0x100073U
                                                     : 
                                                    (0xe7U 
                                                     | (0xf8000U 
                                                        & ((IData)(
                                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 0xaU)) 
                                                           << 0xfU))))
                                                    : 
                                                   (0x33U 
                                                    | ((0x1f00000U 
                                                        & ((IData)(
                                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 5U)) 
                                                           << 0x14U)) 
                                                       | ((0xf8000U 
                                                           & ((IData)(
                                                                      (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                       >> 0xaU)) 
                                                              << 0xfU)) 
                                                          | (0xf80U 
                                                             & ((IData)(
                                                                        (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                         >> 0xaU)) 
                                                                << 7U))))))
                                                : (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                >> 5U))))
                                                    ? 
                                                   (0x67U 
                                                    | (0xf8000U 
                                                       & ((IData)(
                                                                  (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                   >> 0xaU)) 
                                                          << 0xfU)))
                                                    : 
                                                   (0x33U 
                                                    | ((0x1f00000U 
                                                        & ((IData)(
                                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                    >> 5U)) 
                                                           << 0x14U)) 
                                                       | (0xf80U 
                                                          & ((IData)(
                                                                     (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                      >> 0xaU)) 
                                                             << 7U)))))))) 
                              << 3U));
                }
            }
        } else if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0x11U)))) {
            if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x10U)))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((0U == (0x1fU & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                >> 0xaU))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0x10U))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((7ULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed) 
                       | ((QData)((IData)((0x12003U 
                                           | (((0xc000000U 
                                                & ((IData)(
                                                           (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 5U)) 
                                                   << 0x1aU)) 
                                               | ((0x2000000U 
                                                   & ((IData)(
                                                              (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                               >> 0xfU)) 
                                                      << 0x19U)) 
                                                  | (0x1c00000U 
                                                     & ((IData)(
                                                                (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                 >> 7U)) 
                                                        << 0x16U)))) 
                                              | (0xf80U 
                                                 & ((IData)(
                                                            (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                             >> 0xaU)) 
                                                    << 7U)))))) 
                          << 3U));
            }
        } else {
            if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                               >> 0x10U)))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            } else if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                      >> 0xfU)))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
            if ((1U & (~ (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                  >> 0x10U))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
                    = ((7ULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed) 
                       | ((QData)((IData)(cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__compressed_decoder_i__DOT____VdfgExtracted_h760371f7__0)) 
                          << 3U));
            }
        }
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
            = ((7ULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed) 
               | ((QData)((IData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                           >> 3U)))) 
                  << 3U));
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcause_n 
        = (0x800000ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_n 
        = ((3U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_n) 
           | ((((IData)(cv32e40x_wrapper__DOT__core__DOT__csr_mtvec_init_if)
                 ? 0U : (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int 
                         >> 8U)) << 8U) | (0xfcU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_n 
        = ((0xfffffffcU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_n) 
           | (3U & ((IData)(cv32e40x_wrapper__DOT__core__DOT__csr_mtvec_init_if)
                     ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q
                     : (1U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_n 
        = (3U | ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q) 
                 | ((0x8000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                    | ((0x800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                       | ((0x1c0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q) 
                          | (4U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_n 
        = (0x1800U | (0x88U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mepc_n 
        = (0xfffffffeU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dpc_n 
        = (0xfffffffeU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int);
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__exception_pc 
        = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
            << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                        >> 0x15U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mie_we = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mscratch_we = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dscratch0_we = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dscratch1_we = 0U;
    if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_1 
            = (1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                     >> 8U));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_we 
            = cv32e40x_wrapper__DOT__core__DOT__csr_mtvec_init_if;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcause_we = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_we = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mepc_we = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dpc_we = 0U;
        if ((1U & (~ ((((((((0x300U == (0xfffU & ((
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                   << 0xbU) 
                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                     >> 0x15U)))) 
                            | (0x310U == (0xfffU & 
                                          ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                            << 0xbU) 
                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                              >> 0x15U))))) 
                           | (0x304U == (0xfffU & (
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                    << 0xbU) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                      >> 0x15U))))) 
                          | (0x305U == (0xfffU & ((
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                   << 0xbU) 
                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                     >> 0x15U))))) 
                         | (0x340U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                  << 0xbU) 
                                                 | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                    >> 0x15U))))) 
                        | (0x341U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                 << 0xbU) 
                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                   >> 0x15U))))) 
                       | (0x342U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                << 0xbU) 
                                               | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                  >> 0x15U))))) 
                      | (0x7b0U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                               << 0xbU) 
                                              | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                 >> 0x15U)))))))) {
            if ((0x7b1U != (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                       << 0xbU) | (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                   >> 0x15U))))) {
                if ((0x7b2U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                           << 0xbU) 
                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                             >> 0x15U))))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dscratch0_we = 1U;
                }
                if ((0x7b2U != (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                           << 0xbU) 
                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                             >> 0x15U))))) {
                    if ((0x7b3U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                               << 0xbU) 
                                              | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                 >> 0x15U))))) {
                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dscratch1_we = 1U;
                    }
                }
            }
            if ((0x7b1U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                       << 0xbU) | (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                   >> 0x15U))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dpc_we = 1U;
            }
        }
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_we = 0U;
        if (((((((((0x300U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                          << 0xbU) 
                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                            >> 0x15U)))) 
                   | (0x310U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                            << 0xbU) 
                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                              >> 0x15U))))) 
                  | (0x304U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                           << 0xbU) 
                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                             >> 0x15U))))) 
                 | (0x305U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                          << 0xbU) 
                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                            >> 0x15U))))) 
                | (0x340U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                         << 0xbU) | 
                                        (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                         >> 0x15U))))) 
               | (0x341U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                        << 0xbU) | 
                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                        >> 0x15U))))) 
              | (0x342U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                       << 0xbU) | (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                   >> 0x15U))))) 
             | (0x7b0U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                      << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                  >> 0x15U)))))) {
            if ((0x300U != (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                       << 0xbU) | (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                   >> 0x15U))))) {
                if ((0x310U != (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                           << 0xbU) 
                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                             >> 0x15U))))) {
                    if ((0x304U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                               << 0xbU) 
                                              | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                 >> 0x15U))))) {
                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mie_we = 1U;
                    }
                    if ((0x304U != (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                               << 0xbU) 
                                              | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                 >> 0x15U))))) {
                        if ((0x305U != (0xfffU & ((
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                   << 0xbU) 
                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                     >> 0x15U))))) {
                            if ((0x340U == (0xfffU 
                                            & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                << 0xbU) 
                                               | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                  >> 0x15U))))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mscratch_we = 1U;
                            }
                            if ((0x340U != (0xfffU 
                                            & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                << 0xbU) 
                                               | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                  >> 0x15U))))) {
                                if ((0x341U != (0xfffU 
                                                & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                    << 0xbU) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                      >> 0x15U))))) {
                                    if ((0x342U == 
                                         (0xfffU & 
                                          ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                            << 0xbU) 
                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                              >> 0x15U))))) {
                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcause_we = 1U;
                                    }
                                    if ((0x342U != 
                                         (0xfffU & 
                                          ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                            << 0xbU) 
                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                              >> 0x15U))))) {
                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_we = 1U;
                                    }
                                }
                                if ((0x341U == (0xfffU 
                                                & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                    << 0xbU) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                      >> 0x15U))))) {
                                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mepc_we = 1U;
                                }
                            }
                        }
                        if ((0x305U == (0xfffU & ((
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                   << 0xbU) 
                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                     >> 0x15U))))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_we = 1U;
                        }
                    }
                }
            }
            if ((0x300U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                       << 0xbU) | (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                   >> 0x15U))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_we = 1U;
            }
        }
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_1 = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_we 
            = cv32e40x_wrapper__DOT__core__DOT__csr_mtvec_init_if;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcause_we = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_we = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mepc_we = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dpc_we = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_we = 0U;
    }
    if ((0x1000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U])) {
        if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                      >> 4U)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcause_n 
                = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U] 
                    << 5U) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                              >> 0x1bU));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0xffffff7fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_n) 
                   | (0x80U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                               << 4U)));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_n 
                = (0xfffffff7U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_n);
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_n 
                = (0x1800U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_n);
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcause_we = 1U;
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mepc_we = 1U;
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_we = 1U;
        }
        if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U])) {
            cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q;
        } else if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U])) {
            cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__exception_pc 
                = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                                >> 0x15U));
        } else if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U])) {
            cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__exception_pc 
                = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
                    << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[1U] 
                                >> 0x13U));
        } else if ((0x8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U])) {
            cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__exception_pc 
                = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
                    << 0xdU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[1U] 
                                >> 0x13U));
        }
        if ((0x10U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | ((0xf0000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q) 
                         | ((0x8000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q) 
                            | ((0x800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q) 
                               | ((0x1c0U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                                             << 1U)) 
                                  | (4U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q))))));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dpc_n 
                = cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__exception_pc;
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_we = 1U;
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dpc_we = 1U;
        } else {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mepc_n 
                = cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__exception_pc;
        }
    } else if ((0x4000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U])) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_n 
            = ((0xfffffff7U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_n) 
               | (8U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                        >> 4U)));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_n 
            = (0x80U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_n);
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_n 
            = (0x1800U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_n);
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_we = 1U;
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_n 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_q;
    if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
         & (0x320U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                  << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                              >> 0x15U)))))) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_n 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int;
    }
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_we 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & ((0x323U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                     << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                 >> 0x15U)))) 
              | ((0x324U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                        << 0xbU) | 
                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                        >> 0x15U)))) 
                 | ((0x325U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                           << 0xbU) 
                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                             >> 0x15U)))) 
                    | ((0x326U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                              << 0xbU) 
                                             | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))) 
                       | ((0x327U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                 << 0xbU) 
                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                   >> 0x15U)))) 
                          | ((0x328U == (0xfffU & (
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                    << 0xbU) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                      >> 0x15U)))) 
                             | ((0x329U == (0xfffU 
                                            & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                << 0xbU) 
                                               | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                  >> 0x15U)))) 
                                | ((0x32aU == (0xfffU 
                                               & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                   << 0xbU) 
                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                     >> 0x15U)))) 
                                   | ((0x32bU == (0xfffU 
                                                  & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                      << 0xbU) 
                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                        >> 0x15U)))) 
                                      | ((0x32cU == 
                                          (0xfffU & 
                                           ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                             << 0xbU) 
                                            | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                               >> 0x15U)))) 
                                         | ((0x32dU 
                                             == (0xfffU 
                                                 & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                     << 0xbU) 
                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                       >> 0x15U)))) 
                                            | ((0x32eU 
                                                == 
                                                (0xfffU 
                                                 & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                     << 0xbU) 
                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                       >> 0x15U)))) 
                                               | ((0x32fU 
                                                   == 
                                                   (0xfffU 
                                                    & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                        << 0xbU) 
                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                          >> 0x15U)))) 
                                                  | ((0x330U 
                                                      == 
                                                      (0xfffU 
                                                       & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                           << 0xbU) 
                                                          | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                             >> 0x15U)))) 
                                                     | ((0x331U 
                                                         == 
                                                         (0xfffU 
                                                          & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                              << 0xbU) 
                                                             | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                                >> 0x15U)))) 
                                                        | ((0x332U 
                                                            == 
                                                            (0xfffU 
                                                             & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                                 << 0xbU) 
                                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                                   >> 0x15U)))) 
                                                           | ((0x333U 
                                                               == 
                                                               (0xfffU 
                                                                & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                                    << 0xbU) 
                                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                                      >> 0x15U)))) 
                                                              | ((0x334U 
                                                                  == 
                                                                  (0xfffU 
                                                                   & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                                       << 0xbU) 
                                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                                         >> 0x15U)))) 
                                                                 | ((0x335U 
                                                                     == 
                                                                     (0xfffU 
                                                                      & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                                          << 0xbU) 
                                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                                            >> 0x15U)))) 
                                                                    | ((0x336U 
                                                                        == 
                                                                        (0xfffU 
                                                                         & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                                             << 0xbU) 
                                                                            | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                                               >> 0x15U)))) 
                                                                       | ((0x337U 
                                                                           == 
                                                                           (0xfffU 
                                                                            & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                                                << 0xbU) 
                                                                               | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                                                >> 0x15U)))) 
                                                                          | ((0x338U 
                                                                              == 
                                                                              (0xfffU 
                                                                               & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                                                >> 0x15U)))) 
                                                                             | ((0x339U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                                                >> 0x15U)))) 
                                                                                | ((0x33aU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                                                >> 0x15U)))) 
                                                                                | ((0x33bU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                                                >> 0x15U)))) 
                                                                                | ((0x33cU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                                                >> 0x15U)))) 
                                                                                | ((0x33dU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                                                >> 0x15U)))) 
                                                                                | ((0x33eU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                                                >> 0x15U)))) 
                                                                                | (0x33fU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                                                << 0xbU) 
                                                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                                                >> 0x15U)))))))))))))))))))))))))))))))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_36 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1fU == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_35 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1eU == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_34 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1dU == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_33 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1cU == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_32 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1bU == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_31 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1aU == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_30 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb19U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_29 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb18U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_28 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb17U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_27 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb16U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_26 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb15U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_25 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb14U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_24 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb13U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_23 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb12U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_22 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb11U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_21 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb10U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_20 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0fU == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_19 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0eU == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_18 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0dU == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_17 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0cU == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_16 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0bU == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_15 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0aU == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_14 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb09U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_13 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb08U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_12 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb07U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_11 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb06U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_10 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb05U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_9 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb04U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_4 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb01U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_7 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb03U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_5 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb02U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_2 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb00U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                    << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                >> 0x15U)))));
    vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if.req_payload 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q)
            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q
            : cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__bus_trans);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[1U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[1U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[2U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[2U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[3U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[3U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[4U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[4U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[5U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[5U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[6U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[6U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[7U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[7U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[8U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[8U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[9U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[9U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0xaU] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0xaU];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0xbU] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0xbU];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0xcU] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0xcU];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0xdU] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0xdU];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0xeU] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0xeU];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0xfU] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0xfU];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0x10U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x10U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0x11U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x11U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0x12U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x12U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0x13U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x13U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0x14U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x14U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0x15U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x15U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0x16U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x16U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0x17U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x17U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0x18U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x18U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0x19U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x19U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1aU] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1aU];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1bU] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1bU];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1cU] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1cU];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1dU] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1dU];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1eU] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1eU];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1fU] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1fU];
    if (cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_we) {
        VL_ASSIGNSEL_WI(1024,32,(0x3ffU & VL_SHIFTL_III(10,32,32, 
                                                        (0x1fU 
                                                         & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                            >> 0x15U)), 5U)), vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n, vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_38 
        = ((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_7)) 
           & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0xb83U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                       << 0xbU) | (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                   >> 0x15U))))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_39 
        = ((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_5)) 
           & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0xb82U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                       << 0xbU) | (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                   >> 0x15U))))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = (((((((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_36) 
                << 0x1fU) | ((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_35) 
                             << 0x1eU)) | (((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_34) 
                                            << 0x1dU) 
                                           | ((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_33) 
                                              << 0x1cU))) 
             | ((((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_32) 
                  << 0x1bU) | ((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_31) 
                               << 0x1aU)) | (((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_30) 
                                              << 0x19U) 
                                             | ((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_29) 
                                                << 0x18U)))) 
            | (((((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_28) 
                  << 0x17U) | ((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_27) 
                               << 0x16U)) | (((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_26) 
                                              << 0x15U) 
                                             | ((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_25) 
                                                << 0x14U))) 
               | ((((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_24) 
                    << 0x13U) | ((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_23) 
                                 << 0x12U)) | (((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_22) 
                                                << 0x11U) 
                                               | ((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_21) 
                                                  << 0x10U))))) 
           | ((((((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_20) 
                  << 0xfU) | ((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_19) 
                              << 0xeU)) | (((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_18) 
                                            << 0xdU) 
                                           | ((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_17) 
                                              << 0xcU))) 
               | ((((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_16) 
                    << 0xbU) | ((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_15) 
                                << 0xaU)) | (((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_14) 
                                              << 9U) 
                                             | ((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_13) 
                                                << 8U)))) 
              | (((((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_12) 
                    << 7U) | ((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_11) 
                              << 6U)) | (((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_10) 
                                          << 5U) | 
                                         ((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_9) 
                                          << 4U))) 
                 | ((((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_7) 
                      << 3U) | ((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_5) 
                                << 2U)) | (((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_4) 
                                            << 1U) 
                                           | (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_2))))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_40 
        = ((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_2)) 
           & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0xb80U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                       << 0xbU) | (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                   >> 0x15U))))));
    vlSelfRef.mem_addr_o = (IData)((vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if.req_payload 
                                    >> 5U));
    if (vlSelfRef.cv32e40x_wrapper__DOT__amem_req) {
        vlSelfRef.mem_addr_o = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_store)
                                 ? ((0xfffffffcU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_addr) 
                                    + VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycles_cnt), 2U))
                                 : (0xfffffffcU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_addr));
    } else if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid) {
        vlSelfRef.mem_addr_o = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[2U] 
                                 << 0x10U) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                              >> 0x10U));
    }
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = ((((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_7)) 
             & ((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_38)) 
                & ((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_q 
                       >> 3U)) & (0U != ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events) 
                                         & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[3U]))))) 
            << 3U) | ((4U & (((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_5)) 
                              << 2U) & (((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_39)) 
                                         << 2U) & (
                                                   ((~ 
                                                     (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                                      >> 2U)) 
                                                    << 2U) 
                                                   & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events) 
                                                      << 1U))))) 
                      | (1U & ((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_2)) 
                               & (~ ((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_40) 
                                     | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
    cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((((((((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_36)) 
                 & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                    & (0xb9fU == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                             << 0xbU) 
                                            | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                               >> 0x15U)))))) 
                << 0x1fU) | (((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_35)) 
                              & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                 & (0xb9eU == (0xfffU 
                                               & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                   << 0xbU) 
                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                     >> 0x15U)))))) 
                             << 0x1eU)) | ((((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_34)) 
                                             & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & (0xb9dU 
                                                   == 
                                                   (0xfffU 
                                                    & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                        << 0xbU) 
                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                          >> 0x15U)))))) 
                                            << 0x1dU) 
                                           | (((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_33)) 
                                               & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & (0xb9cU 
                                                     == 
                                                     (0xfffU 
                                                      & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                          << 0xbU) 
                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                            >> 0x15U)))))) 
                                              << 0x1cU))) 
             | (((((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_32)) 
                   & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                      & (0xb9bU == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                               << 0xbU) 
                                              | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                 >> 0x15U)))))) 
                  << 0x1bU) | (((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_31)) 
                                & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                   & (0xb9aU == (0xfffU 
                                                 & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                     << 0xbU) 
                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                       >> 0x15U)))))) 
                               << 0x1aU)) | ((((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_30)) 
                                               & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & (0xb99U 
                                                     == 
                                                     (0xfffU 
                                                      & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                          << 0xbU) 
                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                            >> 0x15U)))))) 
                                              << 0x19U) 
                                             | (((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_29)) 
                                                 & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & (0xb98U 
                                                       == 
                                                       (0xfffU 
                                                        & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                            << 0xbU) 
                                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                              >> 0x15U)))))) 
                                                << 0x18U)))) 
            | ((((((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_28)) 
                   & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                      & (0xb97U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                               << 0xbU) 
                                              | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                 >> 0x15U)))))) 
                  << 0x17U) | (((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_27)) 
                                & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                   & (0xb96U == (0xfffU 
                                                 & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                     << 0xbU) 
                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                       >> 0x15U)))))) 
                               << 0x16U)) | ((((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_26)) 
                                               & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & (0xb95U 
                                                     == 
                                                     (0xfffU 
                                                      & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                          << 0xbU) 
                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                            >> 0x15U)))))) 
                                              << 0x15U) 
                                             | (((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_25)) 
                                                 & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & (0xb94U 
                                                       == 
                                                       (0xfffU 
                                                        & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                            << 0xbU) 
                                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                              >> 0x15U)))))) 
                                                << 0x14U))) 
               | (((((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_24)) 
                     & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                        & (0xb93U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                 << 0xbU) 
                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                   >> 0x15U)))))) 
                    << 0x13U) | (((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_23)) 
                                  & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                     & (0xb92U == (0xfffU 
                                                   & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                       << 0xbU) 
                                                      | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                         >> 0x15U)))))) 
                                 << 0x12U)) | ((((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_22)) 
                                                 & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & (0xb91U 
                                                       == 
                                                       (0xfffU 
                                                        & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                            << 0xbU) 
                                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                              >> 0x15U)))))) 
                                                << 0x11U) 
                                               | (((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_21)) 
                                                   & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                      & (0xb90U 
                                                         == 
                                                         (0xfffU 
                                                          & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                              << 0xbU) 
                                                             | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                                >> 0x15U)))))) 
                                                  << 0x10U))))) 
           | (((((((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_20)) 
                   & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                      & (0xb8fU == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                               << 0xbU) 
                                              | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                 >> 0x15U)))))) 
                  << 0xfU) | (((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_19)) 
                               & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                  & (0xb8eU == (0xfffU 
                                                & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                    << 0xbU) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                      >> 0x15U)))))) 
                              << 0xeU)) | ((((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_18)) 
                                             & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & (0xb8dU 
                                                   == 
                                                   (0xfffU 
                                                    & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                        << 0xbU) 
                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                          >> 0x15U)))))) 
                                            << 0xdU) 
                                           | (((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_17)) 
                                               & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & (0xb8cU 
                                                     == 
                                                     (0xfffU 
                                                      & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                          << 0xbU) 
                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                            >> 0x15U)))))) 
                                              << 0xcU))) 
               | (((((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_16)) 
                     & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                        & (0xb8bU == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                 << 0xbU) 
                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                   >> 0x15U)))))) 
                    << 0xbU) | (((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_15)) 
                                 & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                    & (0xb8aU == (0xfffU 
                                                  & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                      << 0xbU) 
                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                        >> 0x15U)))))) 
                                << 0xaU)) | ((((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_14)) 
                                               & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                  & (0xb89U 
                                                     == 
                                                     (0xfffU 
                                                      & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                          << 0xbU) 
                                                         | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                            >> 0x15U)))))) 
                                              << 9U) 
                                             | (((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_13)) 
                                                 & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                    & (0xb88U 
                                                       == 
                                                       (0xfffU 
                                                        & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                            << 0xbU) 
                                                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                              >> 0x15U)))))) 
                                                << 8U)))) 
              | ((((((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_12)) 
                     & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                        & (0xb87U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                 << 0xbU) 
                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                   >> 0x15U)))))) 
                    << 7U) | (((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_11)) 
                               & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                  & (0xb86U == (0xfffU 
                                                & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                    << 0xbU) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                      >> 0x15U)))))) 
                              << 6U)) | ((((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_10)) 
                                           & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                              & (0xb85U 
                                                 == 
                                                 (0xfffU 
                                                  & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                      << 0xbU) 
                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                        >> 0x15U)))))) 
                                          << 5U) | 
                                         (((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_9)) 
                                           & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                              & (0xb84U 
                                                 == 
                                                 (0xfffU 
                                                  & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                      << 0xbU) 
                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                        >> 0x15U)))))) 
                                          << 4U))) 
                 | ((((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_38) 
                      << 3U) | ((IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_39) 
                                << 2U)) | ((((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_4)) 
                                             & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & (0xb81U 
                                                   == 
                                                   (0xfffU 
                                                    & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                                        << 0xbU) 
                                                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                          >> 0x15U)))))) 
                                            << 1U) 
                                           | (IData)(cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_40))))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffffffffffffffcULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    if ((1U & cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (1ULL | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((1U & cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (2ULL | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((1U & cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (3ULL | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffffffffffffcfULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    if ((4U & cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x10ULL | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((4U & cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x20ULL | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((4U & cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x30ULL | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffffffffffff3fULL & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U]))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
        = (IData)(((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U]))) 
                   >> 0x20U));
    if ((1U & cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((1U & cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((1U & cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
            = (IData)(((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))) 
                       >> 0x20U));
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
        = (IData)((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U]))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
        = (IData)(((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U]))) 
                   >> 0x20U));
    if ((4U & cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((4U & cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((4U & cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
            = (IData)((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
            = (IData)(((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))) 
                       >> 0x20U));
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[6U] 
        = (IData)((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U]))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[7U] 
        = (IData)(((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U]))) 
                   >> 0x20U));
    if ((8U & cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x40ULL | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we);
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[6U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((8U & cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x80ULL | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we);
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[7U] 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((8U & cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0xc0ULL | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we);
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[6U] 
            = (IData)((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U]))));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[7U] 
            = (IData)(((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U]))) 
                       >> 0x20U));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcv32e40x_wrapper___024root___dump_triggers__act(Vcv32e40x_wrapper___024root* vlSelf);
#endif  // VL_DEBUG

void Vcv32e40x_wrapper___024root___eval_triggers__act(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___eval_triggers__act\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid__2)));
    vlSelfRef.__VactTriggered.set(1U, (0U != (((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                                                ^ vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__2[0U]) 
                                               | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[1U] 
                                                  ^ 
                                                  vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__2[1U])) 
                                              | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                                                 ^ 
                                                 vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm__2[2U]))));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_valid) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_valid__1)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_ready__2)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid__2)));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__1)));
    vlSelfRef.__VactTriggered.set(6U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_ready) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_ready__1)));
    vlSelfRef.__VactTriggered.set(7U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_resp_valid) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_resp_valid__1)));
    vlSelfRef.__VactTriggered.set(8U, (0U != ((((((
                                                   vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                   ^ 
                                                   vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[0U]) 
                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                     ^ 
                                                     vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[1U])) 
                                                 | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                    ^ 
                                                    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[2U])) 
                                                | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                   ^ 
                                                   vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[3U])) 
                                               | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                  ^ 
                                                  vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[4U])) 
                                              | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                 ^ 
                                                 vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__1[5U]))));
    vlSelfRef.__VactTriggered.set(9U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__mret_insn_id) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__mret_insn_id__1)));
    vlSelfRef.__VactTriggered.set(0xaU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_raw_id) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_raw_id__1)));
    vlSelfRef.__VactTriggered.set(0xbU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_en_id) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__csr_en_id__1)));
    vlSelfRef.__VactTriggered.set(0xcU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_valid) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__if_valid__1)));
    vlSelfRef.__VactTriggered.set(0xdU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ready) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__id_ready__1)));
    vlSelfRef.__VactTriggered.set(0xeU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__instr_valid) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__wb_stage_i__DOT__instr_valid__1)));
    vlSelfRef.__VactTriggered.set(0xfU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_12) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_12__1)));
    vlSelfRef.__VactTriggered.set(0x10U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_valid) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_valid__1)));
    vlSelfRef.__VactTriggered.set(0x11U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__count_up__2)));
    vlSelfRef.__VactTriggered.set(0x12U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status__1)));
    vlSelfRef.__VactTriggered.set(0x13U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id__1)));
    vlSelfRef.__VactTriggered.set(0x14U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step__1)));
    vlSelfRef.__VactTriggered.set(0x15U, (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__1));
    vlSelfRef.__VactTriggered.set(0x16U, (0U != (((
                                                   ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                     ^ 
                                                     vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[0U]) 
                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                       ^ 
                                                       vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[1U])) 
                                                   | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                      ^ 
                                                      vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[2U])) 
                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                     ^ 
                                                     vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[3U])) 
                                                 | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                    ^ 
                                                    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__1[4U]))));
    vlSelfRef.__VactTriggered.set(0x17U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_4) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_4__1)));
    vlSelfRef.__VactTriggered.set(0x18U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_3) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h78274dd8_0_3__1)));
    vlSelfRef.__VactTriggered.set(0x19U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_0__1)));
    vlSelfRef.__VactTriggered.set(0x1aU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_1) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_1__1)));
    vlSelfRef.__VactTriggered.set(0x1bU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_2) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_2__1)));
    vlSelfRef.__VactTriggered.set(0x1cU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_3) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_3__1)));
    vlSelfRef.__VactTriggered.set(0x1dU, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op__1)));
    vlSelfRef.__VactTriggered.set(0x1eU, ((IData)(vlSelfRef.clk_i) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0))));
    vlSelfRef.__VactTriggered.set(0x1fU, ((~ (IData)(vlSelfRef.rst_ni)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0)));
    vlSelfRef.__VactTriggered.set(0x20U, ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_wrapper__DOT__core__DOT__clk__0))));
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
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
        vlSelfRef.__VactTriggered.set(5U, 1U);
        vlSelfRef.__VactTriggered.set(6U, 1U);
        vlSelfRef.__VactTriggered.set(7U, 1U);
        vlSelfRef.__VactTriggered.set(8U, 1U);
        vlSelfRef.__VactTriggered.set(9U, 1U);
        vlSelfRef.__VactTriggered.set(0xaU, 1U);
        vlSelfRef.__VactTriggered.set(0xbU, 1U);
        vlSelfRef.__VactTriggered.set(0xcU, 1U);
        vlSelfRef.__VactTriggered.set(0xdU, 1U);
        vlSelfRef.__VactTriggered.set(0xeU, 1U);
        vlSelfRef.__VactTriggered.set(0xfU, 1U);
        vlSelfRef.__VactTriggered.set(0x10U, 1U);
        vlSelfRef.__VactTriggered.set(0x11U, 1U);
        vlSelfRef.__VactTriggered.set(0x12U, 1U);
        vlSelfRef.__VactTriggered.set(0x13U, 1U);
        vlSelfRef.__VactTriggered.set(0x14U, 1U);
        vlSelfRef.__VactTriggered.set(0x15U, 1U);
        vlSelfRef.__VactTriggered.set(0x16U, 1U);
        vlSelfRef.__VactTriggered.set(0x17U, 1U);
        vlSelfRef.__VactTriggered.set(0x18U, 1U);
        vlSelfRef.__VactTriggered.set(0x19U, 1U);
        vlSelfRef.__VactTriggered.set(0x1aU, 1U);
        vlSelfRef.__VactTriggered.set(0x1bU, 1U);
        vlSelfRef.__VactTriggered.set(0x1cU, 1U);
        vlSelfRef.__VactTriggered.set(0x1dU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcv32e40x_wrapper___024root___dump_triggers__act(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*2:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h8d246da9_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_he6824a7c_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h78119940_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h9a6ebf41_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h661f7af5_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vcv32e40x_wrapper__ConstPool__TABLE_h41f0b72e_0;

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__2(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__2\n"); );
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
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_resp_valid 
        = (((IData)(vlSelfRef.mem_rvalid_i) & (0U == 
                                               vlSelfRef.cv32e40x_wrapper__DOT__req_sources
                                               [0U])) 
           | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
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

extern const VlUnpacked<CData/*2:0*/, 128> Vcv32e40x_wrapper__ConstPool__TABLE_hd73581e0_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcv32e40x_wrapper__ConstPool__TABLE_h4e5db45e_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcv32e40x_wrapper__ConstPool__TABLE_hac2193e5_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcv32e40x_wrapper__ConstPool__TABLE_hd965fa7c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcv32e40x_wrapper__ConstPool__TABLE_h44fad514_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcv32e40x_wrapper__ConstPool__TABLE_h1b26f08b_0;

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__4(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__4\n"); );
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
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid 
        = (((IData)(vlSelfRef.mem_rvalid_i) & (1U == 
                                               vlSelfRef.cv32e40x_wrapper__DOT__req_sources
                                               [0U])) 
           | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans_valid 
        = ((~ (IData)(cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus)) 
           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__trans_valid));
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
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) 
           | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans_valid));
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

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___act_comb__TOP__5(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___act_comb__TOP__5\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_addr;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_addr = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__set_vl_max;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__set_vl_max = 0;
    CData/*1:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__elements_to_write;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__elements_to_write = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr_src;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr_src = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__unsigned_immediate;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__unsigned_immediate = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__wide_vs1;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__wide_vs1 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_strided;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_strided = 0;
    VlWide<4>/*127:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data;
    VL_ZERO_W(128, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data);
    VlWide<4>/*127:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data;
    VL_ZERO_W(128, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data);
    CData/*4:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr_vlsu;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr_vlsu = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__fix_vd_addr;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__fix_vd_addr = 0;
    CData/*5:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__vl_zero_indexed;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__vl_zero_indexed = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__is_accumulating;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__is_accumulating = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data0;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data0 = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data1;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data1 = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__dot_sum_01;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__dot_sum_01 = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__dot_sum_23;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__dot_sum_23 = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_final;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_final = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_final;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_final = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_final;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_final = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_final;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_final = 0;
    QData/*32:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__selected_mult_out;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__selected_mult_out = 0;
    QData/*32:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__add_out;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__add_out = 0;
    QData/*32:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__addend;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__addend = 0;
    QData/*32:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__macc;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__macc = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__subtract;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__subtract = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_a;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_a = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_b;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_b = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat_result = 0;
    SData/*15:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat16_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat16_result = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat32_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat32_result = 0;
    VlWide<3>/*65:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__requant_shifted;
    VL_ZERO_W(66, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__requant_shifted);
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__requant_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__requant_result = 0;
    QData/*32:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__selected_mult_out;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__selected_mult_out = 0;
    QData/*32:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__add_out;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__add_out = 0;
    QData/*32:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__addend;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__addend = 0;
    QData/*32:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__macc;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__macc = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__subtract;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__subtract = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_a;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_a = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_b;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_b = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat_result = 0;
    SData/*15:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat16_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat16_result = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat32_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat32_result = 0;
    VlWide<3>/*65:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__requant_shifted;
    VL_ZERO_W(66, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__requant_shifted);
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__requant_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__requant_result = 0;
    QData/*32:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__selected_mult_out;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__selected_mult_out = 0;
    QData/*32:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__add_out;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__add_out = 0;
    QData/*32:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__addend;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__addend = 0;
    QData/*32:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__macc;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__macc = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__subtract;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__subtract = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_a;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_a = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_b;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_b = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat_result = 0;
    SData/*15:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat16_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat16_result = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat32_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat32_result = 0;
    VlWide<3>/*65:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__requant_shifted;
    VL_ZERO_W(66, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__requant_shifted);
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__requant_result;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__requant_result = 0;
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
    CData/*1:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__ib_select;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__ib_select = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__next_el_pre;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__next_el_pre = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__stride;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__stride = 0;
    CData/*3:0*/ cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycle_be;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycle_be = 0;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_48;
    VlWide<3>/*95:0*/ __Vtemp_52;
    VlWide<3>/*95:0*/ __Vtemp_53;
    VlWide<3>/*95:0*/ __Vtemp_55;
    VlWide<3>/*95:0*/ __Vtemp_56;
    VlWide<3>/*95:0*/ __Vtemp_57;
    VlWide<3>/*95:0*/ __Vtemp_60;
    VlWide<3>/*95:0*/ __Vtemp_61;
    VlWide<3>/*95:0*/ __Vtemp_63;
    VlWide<3>/*95:0*/ __Vtemp_64;
    VlWide<3>/*95:0*/ __Vtemp_65;
    VlWide<3>/*95:0*/ __Vtemp_67;
    VlWide<3>/*95:0*/ __Vtemp_68;
    VlWide<3>/*95:0*/ __Vtemp_70;
    VlWide<3>/*95:0*/ __Vtemp_71;
    VlWide<3>/*95:0*/ __Vtemp_72;
    VlWide<3>/*95:0*/ __Vtemp_73;
    VlWide<3>/*95:0*/ __Vtemp_75;
    VlWide<3>/*95:0*/ __Vtemp_76;
    VlWide<3>/*95:0*/ __Vtemp_78;
    VlWide<3>/*95:0*/ __Vtemp_79;
    VlWide<3>/*95:0*/ __Vtemp_80;
    VlWide<3>/*95:0*/ __Vtemp_81;
    VlWide<3>/*95:0*/ __Vtemp_83;
    VlWide<3>/*95:0*/ __Vtemp_84;
    VlWide<3>/*95:0*/ __Vtemp_86;
    VlWide<3>/*95:0*/ __Vtemp_87;
    VlWide<3>/*95:0*/ __Vtemp_88;
    VlWide<3>/*95:0*/ __Vtemp_89;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_93;
    VlWide<3>/*95:0*/ __Vtemp_95;
    VlWide<3>/*95:0*/ __Vtemp_96;
    VlWide<3>/*95:0*/ __Vtemp_97;
    VlWide<3>/*95:0*/ __Vtemp_99;
    VlWide<3>/*95:0*/ __Vtemp_100;
    VlWide<3>/*95:0*/ __Vtemp_101;
    VlWide<3>/*95:0*/ __Vtemp_104;
    VlWide<3>/*95:0*/ __Vtemp_105;
    VlWide<3>/*95:0*/ __Vtemp_107;
    VlWide<3>/*95:0*/ __Vtemp_108;
    VlWide<3>/*95:0*/ __Vtemp_109;
    VlWide<3>/*95:0*/ __Vtemp_112;
    VlWide<3>/*95:0*/ __Vtemp_113;
    VlWide<3>/*95:0*/ __Vtemp_115;
    VlWide<3>/*95:0*/ __Vtemp_116;
    VlWide<3>/*95:0*/ __Vtemp_117;
    VlWide<3>/*95:0*/ __Vtemp_119;
    VlWide<3>/*95:0*/ __Vtemp_120;
    VlWide<3>/*95:0*/ __Vtemp_122;
    VlWide<3>/*95:0*/ __Vtemp_123;
    VlWide<3>/*95:0*/ __Vtemp_124;
    VlWide<3>/*95:0*/ __Vtemp_125;
    VlWide<3>/*95:0*/ __Vtemp_127;
    VlWide<3>/*95:0*/ __Vtemp_128;
    VlWide<3>/*95:0*/ __Vtemp_130;
    VlWide<3>/*95:0*/ __Vtemp_131;
    VlWide<3>/*95:0*/ __Vtemp_132;
    VlWide<3>/*95:0*/ __Vtemp_133;
    VlWide<3>/*95:0*/ __Vtemp_135;
    VlWide<3>/*95:0*/ __Vtemp_136;
    VlWide<3>/*95:0*/ __Vtemp_138;
    VlWide<3>/*95:0*/ __Vtemp_139;
    VlWide<3>/*95:0*/ __Vtemp_140;
    VlWide<3>/*95:0*/ __Vtemp_141;
    VlWide<3>/*95:0*/ __Vtemp_144;
    VlWide<3>/*95:0*/ __Vtemp_145;
    VlWide<3>/*95:0*/ __Vtemp_147;
    VlWide<3>/*95:0*/ __Vtemp_148;
    VlWide<3>/*95:0*/ __Vtemp_149;
    VlWide<3>/*95:0*/ __Vtemp_151;
    VlWide<3>/*95:0*/ __Vtemp_152;
    VlWide<3>/*95:0*/ __Vtemp_153;
    VlWide<3>/*95:0*/ __Vtemp_156;
    VlWide<3>/*95:0*/ __Vtemp_157;
    VlWide<3>/*95:0*/ __Vtemp_159;
    VlWide<3>/*95:0*/ __Vtemp_160;
    VlWide<3>/*95:0*/ __Vtemp_161;
    VlWide<3>/*95:0*/ __Vtemp_164;
    VlWide<3>/*95:0*/ __Vtemp_165;
    VlWide<3>/*95:0*/ __Vtemp_167;
    VlWide<3>/*95:0*/ __Vtemp_168;
    VlWide<3>/*95:0*/ __Vtemp_169;
    VlWide<3>/*95:0*/ __Vtemp_171;
    VlWide<3>/*95:0*/ __Vtemp_172;
    VlWide<3>/*95:0*/ __Vtemp_174;
    VlWide<3>/*95:0*/ __Vtemp_175;
    VlWide<3>/*95:0*/ __Vtemp_176;
    VlWide<3>/*95:0*/ __Vtemp_177;
    VlWide<3>/*95:0*/ __Vtemp_179;
    VlWide<3>/*95:0*/ __Vtemp_180;
    VlWide<3>/*95:0*/ __Vtemp_182;
    VlWide<3>/*95:0*/ __Vtemp_183;
    VlWide<3>/*95:0*/ __Vtemp_184;
    VlWide<3>/*95:0*/ __Vtemp_185;
    VlWide<3>/*95:0*/ __Vtemp_187;
    VlWide<3>/*95:0*/ __Vtemp_188;
    VlWide<3>/*95:0*/ __Vtemp_190;
    VlWide<3>/*95:0*/ __Vtemp_191;
    VlWide<3>/*95:0*/ __Vtemp_192;
    VlWide<3>/*95:0*/ __Vtemp_193;
    VlWide<3>/*95:0*/ __Vtemp_196;
    VlWide<3>/*95:0*/ __Vtemp_197;
    VlWide<3>/*95:0*/ __Vtemp_199;
    VlWide<3>/*95:0*/ __Vtemp_200;
    VlWide<3>/*95:0*/ __Vtemp_201;
    VlWide<3>/*95:0*/ __Vtemp_203;
    VlWide<3>/*95:0*/ __Vtemp_204;
    VlWide<3>/*95:0*/ __Vtemp_205;
    VlWide<3>/*95:0*/ __Vtemp_208;
    VlWide<3>/*95:0*/ __Vtemp_209;
    VlWide<3>/*95:0*/ __Vtemp_211;
    VlWide<3>/*95:0*/ __Vtemp_212;
    VlWide<3>/*95:0*/ __Vtemp_213;
    VlWide<3>/*95:0*/ __Vtemp_216;
    VlWide<3>/*95:0*/ __Vtemp_217;
    VlWide<3>/*95:0*/ __Vtemp_219;
    VlWide<3>/*95:0*/ __Vtemp_220;
    VlWide<3>/*95:0*/ __Vtemp_221;
    VlWide<3>/*95:0*/ __Vtemp_223;
    VlWide<3>/*95:0*/ __Vtemp_224;
    VlWide<3>/*95:0*/ __Vtemp_226;
    VlWide<3>/*95:0*/ __Vtemp_227;
    VlWide<3>/*95:0*/ __Vtemp_228;
    VlWide<3>/*95:0*/ __Vtemp_229;
    VlWide<3>/*95:0*/ __Vtemp_231;
    VlWide<3>/*95:0*/ __Vtemp_232;
    VlWide<3>/*95:0*/ __Vtemp_234;
    VlWide<3>/*95:0*/ __Vtemp_235;
    VlWide<3>/*95:0*/ __Vtemp_236;
    VlWide<3>/*95:0*/ __Vtemp_237;
    VlWide<3>/*95:0*/ __Vtemp_239;
    VlWide<3>/*95:0*/ __Vtemp_240;
    VlWide<3>/*95:0*/ __Vtemp_242;
    VlWide<3>/*95:0*/ __Vtemp_243;
    VlWide<3>/*95:0*/ __Vtemp_244;
    VlWide<3>/*95:0*/ __Vtemp_245;
    VlWide<3>/*95:0*/ __Vtemp_248;
    VlWide<3>/*95:0*/ __Vtemp_249;
    VlWide<3>/*95:0*/ __Vtemp_251;
    VlWide<3>/*95:0*/ __Vtemp_252;
    VlWide<3>/*95:0*/ __Vtemp_253;
    VlWide<3>/*95:0*/ __Vtemp_255;
    VlWide<3>/*95:0*/ __Vtemp_256;
    VlWide<3>/*95:0*/ __Vtemp_257;
    // Body
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__all_zero_cycle 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op) 
           & (0xfU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__zero_skip_mask)));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__csr_write = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__preserve_vl = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__set_vl_max = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data_src = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr_src = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__saturate_mode = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__apu_result_select = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__unsigned_immediate = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__wide_vs1 = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_en = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_load = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_store = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_strided = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__fix_vd_addr = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__fused_load_compute = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__is_accumulating = 0U;
    if (((1U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__state) 
         | (3U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__state))) {
        if ((3U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__state)) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 4U;
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 0U;
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__is_accumulating = 1U;
        } else if ((7U == (0x7fU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                           [0U]))) {
            if (VL_LIKELY((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT____VdfgExtracted_hf911b2c9__0))) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data_src = 1U;
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_en = 1U;
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_load = 1U;
                if ((2U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                  [0U] >> 0x1aU)))) {
                    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_strided = 1U;
                }
            } else {
                VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:333: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unimplemented LOAD_FP instruction (funct3=%b)\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),3,
                             (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                    [0U] >> 0xcU)));
                VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 333, "");
            }
        } else if ((0x27U == (0x7fU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                              [0U]))) {
            if (VL_LIKELY((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT____VdfgExtracted_hf911b2c9__0))) {
                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr_src = 1U;
                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__fix_vd_addr = 1U;
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_en = 1U;
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_store = 1U;
            } else {
                VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:344: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unimplemented STORE_FP instruction (funct3=%b)\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),3,
                             (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                    [0U] >> 0xcU)));
                VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 344, "");
            }
        } else if (VL_LIKELY(((0x57U == (0x7fU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                         [0U]))))) {
            if ((7U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                              [0U] >> 0xcU)))) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__csr_write = 1U;
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__apu_result_select = 0U;
                if ((0U == (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                     [0U] >> 0xfU)))) {
                    if ((0U == (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                         [0U] >> 7U)))) {
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__preserve_vl = 1U;
                    } else {
                        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__set_vl_max = 1U;
                    }
                }
            } else if ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                        [0U] >> 0x1fU)) {
                if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                     [0U])) {
                    if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                         [0U])) {
                        if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                             [0U])) {
                            if ((0x8000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                 [0U])) {
                                if ((0x4000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                     [0U])) {
                                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 3U;
                                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode = 7U;
                                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 1U;
                                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                                    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                                } else {
                                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 0U;
                                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode = 3U;
                                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 2U;
                                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                                    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                                }
                            } else if ((0x4000000U 
                                        & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                        [0U])) {
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__apu_result_select = 3U;
                            } else {
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 0xaU;
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 0U;
                                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__apu_result_select = 2U;
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 0U;
                            }
                        } else if ((0x8000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                    [0U])) {
                            if ((0x4000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                 [0U])) {
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 3U;
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening = 1U;
                                if ((2U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                  [0U] 
                                                  >> 0xcU)))) {
                                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 0U;
                                } else if ((6U == (7U 
                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                      [0U] 
                                                      >> 0xcU)))) {
                                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 1U;
                                }
                            } else {
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 0U;
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode = 4U;
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 4U;
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                            }
                        } else if ((0x4000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                    [0U])) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 0U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode = 5U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 4U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                        } else {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 0U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode = 6U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 4U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                        }
                    } else if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                [0U])) {
                        if (VL_UNLIKELY(((0x8000000U 
                                          & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                          [0U])))) {
                            VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
                        } else if (VL_UNLIKELY(((0x4000000U 
                                                 & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                 [0U])))) {
                            VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
                        } else {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data_src = 1U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_en = 1U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_load = 1U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__fused_load_compute = 1U;
                            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                        }
                    } else if ((0x8000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                [0U])) {
                        if ((0x4000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                             [0U])) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 4U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode = 4U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__is_accumulating = 1U;
                            if ((2U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                              [0U] 
                                              >> 0xcU)))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 0U;
                            } else if ((6U == (7U & 
                                               (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [0U] 
                                                >> 0xcU)))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 1U;
                            }
                        } else {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 4U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode = 3U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__is_accumulating = 1U;
                            if ((2U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                              [0U] 
                                              >> 0xcU)))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 0U;
                            } else if ((6U == (7U & 
                                               (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [0U] 
                                                >> 0xcU)))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 1U;
                            }
                        }
                    } else if ((0x4000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                [0U])) {
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 0U;
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 3U;
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__fix_vd_addr = 1U;
                        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening = 1U;
                        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__wide_vs1 = 1U;
                    } else {
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 0xcU;
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__is_accumulating = 1U;
                        if ((2U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                          [0U] >> 0xcU)))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 0U;
                        } else if ((6U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                 [0U] 
                                                 >> 0xcU)))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 1U;
                        }
                    }
                } else if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                            [0U])) {
                    if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                         [0U])) {
                        if ((0x8000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                             [0U])) {
                            if ((0x4000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                 [0U])) {
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 0xbU;
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 0U;
                                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__is_accumulating = 1U;
                            } else {
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 4U;
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening = 1U;
                                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__is_accumulating = 1U;
                                if ((2U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                  [0U] 
                                                  >> 0xcU)))) {
                                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 0U;
                                } else if ((6U == (7U 
                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                      [0U] 
                                                      >> 0xcU)))) {
                                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 1U;
                                }
                            }
                        } else if (VL_LIKELY(((0x4000000U 
                                               & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                               [0U])))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 4U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__is_accumulating = 1U;
                            if ((2U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                              [0U] 
                                              >> 0xcU)))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 0U;
                            } else if ((6U == (7U & 
                                               (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [0U] 
                                                >> 0xcU)))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 1U;
                            }
                        } else {
                            VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
                        }
                    } else if (VL_UNLIKELY(((0x8000000U 
                                             & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                             [0U])))) {
                        VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
                    } else if ((0x4000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                [0U])) {
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 7U;
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                        if ((0U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                          [0U] >> 0xcU)))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 0U;
                        } else if ((4U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                 [0U] 
                                                 >> 0xcU)))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 1U;
                        } else if ((3U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                 [0U] 
                                                 >> 0xcU)))) {
                            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__unsigned_immediate = 1U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 2U;
                        }
                    } else {
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 6U;
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                        if ((0U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                          [0U] >> 0xcU)))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 0U;
                        } else if ((4U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                 [0U] 
                                                 >> 0xcU)))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 1U;
                        } else if ((3U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                 [0U] 
                                                 >> 0xcU)))) {
                            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__unsigned_immediate = 1U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 2U;
                        }
                    }
                } else if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                            [0U])) {
                    if ((0x8000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                         [0U])) {
                        if (VL_LIKELY(((0x4000000U 
                                        & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                        [0U])))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 3U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__saturate_mode = 2U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                            if ((0U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                              [0U] 
                                              >> 0xcU)))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 0U;
                            } else if ((4U == (7U & 
                                               (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [0U] 
                                                >> 0xcU)))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 1U;
                            }
                        } else {
                            VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
                        }
                    } else if (VL_LIKELY(((0x4000000U 
                                           & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                           [0U])))) {
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                        if ((0U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                          [0U] >> 0xcU)))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 2U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 0U;
                        } else if ((4U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                 [0U] 
                                                 >> 0xcU)))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 2U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 1U;
                        } else if ((3U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                 [0U] 
                                                 >> 0xcU)))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 2U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 2U;
                        } else if ((2U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                 [0U] 
                                                 >> 0xcU)))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 3U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 0U;
                        }
                    } else {
                        VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
                    }
                } else if (VL_UNLIKELY(((0x8000000U 
                                         & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                         [0U])))) {
                    VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
                } else if (VL_LIKELY(((0x4000000U & 
                                       vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                       [0U])))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 0U;
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__saturate_mode = 1U;
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                } else {
                    VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
                }
            } else if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                        [0U])) {
                if (VL_UNLIKELY(((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                  [0U])))) {
                    VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
                } else if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                            [0U])) {
                    if (VL_LIKELY(((0x8000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                    [0U])))) {
                        if (VL_LIKELY(((0x4000000U 
                                        & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                        [0U])))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_data_src = 2U;
                            if ((3U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                              [0U] 
                                              >> 0xcU)))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 2U;
                            } else if ((4U == (7U & 
                                               (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [0U] 
                                                >> 0xcU)))) {
                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 1U;
                            }
                        } else {
                            VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
                        }
                    } else {
                        VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
                    }
                } else if (VL_UNLIKELY(((0x8000000U 
                                         & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                         [0U])))) {
                    VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
                } else if (VL_UNLIKELY(((0x4000000U 
                                         & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                         [0U])))) {
                    VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
                } else {
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__apu_result_select = 1U;
                }
            } else if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                        [0U])) {
                if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                     [0U])) {
                    if (VL_LIKELY(((0x8000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                    [0U])))) {
                        if (VL_UNLIKELY(((0x4000000U 
                                          & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                          [0U])))) {
                            VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                                         64,VL_TIME_UNITED_Q(1),
                                         -12,vlSymsp->name());
                            VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
                        } else {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 0xdU;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 5U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                        }
                    } else {
                        VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
                    }
                } else if ((0x8000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                            [0U])) {
                    if ((0x4000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                         [0U])) {
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 5U;
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                    } else {
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 8U;
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                    }
                } else if (VL_LIKELY(((0x4000000U & 
                                       vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                       [0U])))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 9U;
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                } else {
                    VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
                }
            } else if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                        [0U])) {
                if ((0x8000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                     [0U])) {
                    if (VL_LIKELY(((0x4000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                    [0U])))) {
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 1U;
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode = 1U;
                        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                        if ((2U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                          [0U] >> 0xcU)))) {
                            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__fix_vd_addr = 1U;
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 3U;
                        } else if ((0U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                 [0U] 
                                                 >> 0xcU)))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 0U;
                        } else if ((4U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                 [0U] 
                                                 >> 0xcU)))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 1U;
                        }
                    } else {
                        VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                                     64,VL_TIME_UNITED_Q(1),
                                     -12,vlSymsp->name());
                        VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
                    }
                } else if (VL_LIKELY(((0x4000000U & 
                                       vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                       [0U])))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 1U;
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode = 2U;
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                    if ((0U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                      [0U] >> 0xcU)))) {
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 0U;
                    } else if ((4U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                             [0U] >> 0xcU)))) {
                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 1U;
                    }
                } else {
                    VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
                }
            } else if ((0x8000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                        [0U])) {
                if (VL_UNLIKELY(((0x4000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                  [0U])))) {
                    VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                                 64,VL_TIME_UNITED_Q(1),
                                 -12,vlSymsp->name());
                    VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
                } else {
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 1U;
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                }
            } else if (VL_UNLIKELY(((0x4000000U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                     [0U])))) {
                VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:764: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unsupported vector instruction\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 764, "");
            } else {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op = 0U;
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 1U;
                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr = 1U;
                if ((0U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                  [0U] >> 0xcU)))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 0U;
                } else if ((4U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                         [0U] >> 0xcU)))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 1U;
                } else if ((2U == (7U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                         [0U] >> 0xcU)))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select = 3U;
                    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__fix_vd_addr = 1U;
                }
            }
        } else {
            VL_WRITEF_NX("[%0t] %%Error: vector_decoder.sv:770: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vdec0: Unrecognised major opcode\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_decoder.sv", 770, "");
        }
    }
    if (((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__all_zero_cycle) 
           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write)) 
          & (3U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) 
         & (~ (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__is_accumulating)))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vec_reg_write = 0U;
    }
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__vl_next 
        = (0x1fU & (((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__set_vl_max) 
                     | (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                        [1U] > (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__max_vl)))
                     ? (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__max_vl)
                     : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                    [1U]));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__vl_zero_indexed 
        = (0x3fU & ((0x1fU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                     [2U]) - (IData)(1U)));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__stride 
        = ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_strided)
            ? vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
           [2U] : ((IData)(1U) << (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                         [3U] >> 2U))));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycle_be 
        = (VL_LTES_III(32, 4U, VL_EXTENDS_II(32,7, (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track)))
            ? 0xfU : (VL_LTES_III(32, 3U, VL_EXTENDS_II(32,7, (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track)))
                       ? 7U : (VL_LTES_III(32, 2U, 
                                           VL_EXTENDS_II(32,7, (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track)))
                                ? 3U : 1U)));
    vlSelfRef.cv32e40x_wrapper__DOT__amem_be = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_store)
                                                 ? (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycle_be)
                                                 : 0xfU);
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__au_start = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op 
        = ((3U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op)) 
           | ((4U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op)) 
              | ((0xaU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op)) 
                 | ((0xbU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op)) 
                    | (0xcU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))))));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__subtract = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__macc = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__subtract = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__macc = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__subtract = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__macc = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__subtract = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__macc = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate 
        = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
        [1U];
    if ((0U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        if ((1U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
            if ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate 
                    = (((- (IData)((1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__immediate_operand) 
                                          >> 4U)))) 
                        << 5U) | (0x1fU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__immediate_operand)));
            }
        }
    }
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__elements_to_write = 0U;
    if (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__multi_cycle_instr) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__max_cycle_count 
            = (0xfU & ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__vl_zero_indexed) 
                       >> 2U));
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__elements_to_write 
            = (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cycle_count) 
                == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__max_cycle_count))
                ? ((3U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))
                    ? 1U : (3U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                            [2U])) : 0U);
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__max_cycle_count = 0U;
    }
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__next_el_pre = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_bytes = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__ib_select = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__next_el_addr = 0U;
    if (((((((((0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state) 
               | (1U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
              | (2U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
             | (3U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
            | (4U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
           | (5U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
          | (6U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
         | (7U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state))) {
        if ((0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
            if (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_load) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__au_start = 1U;
            } else if (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_store) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__au_start = 1U;
            }
        }
    }
    if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                      [3U] >> 2U)))) {
        if (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__wide_vs1) {
            __Vtemp_17[2U] = (IData)((((QData)((IData)(
                                                       vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                       [
                                                       (3U 
                                                        | (0x1cU 
                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_addr)))])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                                   [vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_addr2]))));
            __Vtemp_17[3U] = (IData)(((((QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                        [
                                                        (3U 
                                                         | (0x1cU 
                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_addr)))])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                                    [vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_addr2]))) 
                                      >> 0x20U));
        } else {
            __Vtemp_17[2U] = (IData)((((QData)((IData)(
                                                       (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data1 
                                                        >> 0x10U))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data1)))));
            __Vtemp_17[3U] = (IData)(((((QData)((IData)(
                                                        (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data1 
                                                         >> 0x10U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data1)))) 
                                      >> 0x20U));
        }
    } else if ((2U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        __Vtemp_17[2U] = (IData)((((QData)((IData)(
                                                   vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                   [
                                                   (3U 
                                                    | (0x1cU 
                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_addr)))])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                               [vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_addr2]))));
        __Vtemp_17[3U] = (IData)(((((QData)((IData)(
                                                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                    [
                                                    (3U 
                                                     | (0x1cU 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_addr)))])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                                [vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_addr2]))) 
                                  >> 0x20U));
    } else {
        __Vtemp_17[2U] = 0U;
        __Vtemp_17[3U] = 0U;
    }
    if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                      [3U] >> 2U)))) {
        if (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__wide_vs1) {
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[0U] 
                = (0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data0);
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[1U] 
                = (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data0 
                   >> 0x10U);
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[2U] 
                = (IData)((((QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data1 
                                             >> 0x10U))) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data1)))));
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[3U] 
                = (IData)(((((QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data1 
                                              >> 0x10U))) 
                             << 0x20U) | (QData)((IData)(
                                                         (0xffffU 
                                                          & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data1)))) 
                           >> 0x20U));
        } else {
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[0U] 
                = (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data0);
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[1U] 
                = (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data0 
                            >> 8U));
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[2U] 
                = (IData)((((QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data0 
                                             >> 0x18U))) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xffU 
                                                         & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data0 
                                                            >> 0x10U))))));
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[3U] 
                = (IData)(((((QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data0 
                                              >> 0x18U))) 
                             << 0x20U) | (QData)((IData)(
                                                         (0xffU 
                                                          & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data0 
                                                             >> 0x10U))))) 
                           >> 0x20U));
        }
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_addr 
            = (0x1fU & ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__fix_vd_addr)
                         ? (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                            [0U] >> 7U) : ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening))
                                            ? ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [0U] 
                                                >> 7U) 
                                               + ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cycle_count) 
                                                  << 1U))
                                            : ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [0U] 
                                                >> 7U) 
                                               + (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cycle_count)))));
    } else {
        if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                          [3U] >> 2U)))) {
            if (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__wide_vs1) {
                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[0U] 
                    = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data0;
                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[1U] 
                    = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data1;
            } else {
                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[0U] 
                    = (0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data0);
                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[1U] 
                    = (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs1_rd_data0 
                       >> 0x10U);
            }
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_addr 
                = (0x1fU & ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__fix_vd_addr)
                             ? (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                [0U] >> 7U) : ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [0U] 
                                                >> 7U) 
                                               + ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cycle_count) 
                                                  << 1U))));
        } else {
            if ((2U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                              [3U] >> 2U)))) {
                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[0U] 
                    = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                    [vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_addr];
                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[1U] 
                    = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                    [(1U | (0x1eU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_addr)))];
            } else {
                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[0U] = 0U;
                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[1U] = 0U;
            }
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_addr 
                = (0x1fU & ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__fix_vd_addr)
                             ? (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                [0U] >> 7U) : ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [0U] 
                                                >> 7U) 
                                               + (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cycle_count))));
        }
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[2U] 
            = __Vtemp_17[2U];
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[3U] 
            = __Vtemp_17[3U];
    }
    if (((((((((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op)) 
               | (1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
              | (2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
             | (3U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
            | (4U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
           | (5U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
          | (6U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
         | (7U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op)))) {
        if ((0U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
            if ((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__subtract = 1U;
                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__subtract = 1U;
                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__subtract = 1U;
                cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__subtract = 1U;
            }
            if ((1U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
                if ((2U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
                    if ((3U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
                        if ((4U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
                            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__macc = 1U;
                            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__macc = 1U;
                            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__macc = 1U;
                            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__macc = 1U;
                        }
                    }
                }
            }
        }
    } else if ((8U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        if ((9U != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
            if ((0xaU != (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
                if ((0xbU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__macc = 1U;
                    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__macc = 1U;
                    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__macc = 1U;
                    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__macc = 1U;
                } else if ((0xcU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__macc = 1U;
                    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__macc = 1U;
                    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__macc = 1U;
                    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__macc = 1U;
                }
            }
        }
    }
    if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                      [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__ib_select 
            = (3U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_addr);
        if ((1U < cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__stride)) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen 
                = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen) 
                   | (0xfU & ((IData)(1U) << (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__ib_select))));
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__next_el_pre 
                = (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_addr 
                   + cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__stride);
            if ((((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__next_el_pre 
                   >> 2U) == (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_addr 
                              >> 2U)) & VL_LTS_III(32, 1U, 
                                                   VL_EXTENDS_II(32,7, (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track))))) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen 
                    = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen) 
                       | (0xfU & ((IData)(1U) << (3U 
                                                  & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__next_el_pre))));
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__next_el_addr 
                    = (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__next_el_pre 
                       + cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__stride);
            } else {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__next_el_addr 
                    = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__next_el_pre;
            }
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_bytes 
                = (0x7fU & ((((1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen) 
                                     >> 3U)) + (1U 
                                                & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen) 
                                                   >> 2U))) 
                             + (1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen) 
                                      >> 1U))) + (1U 
                                                  & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen))));
        } else if ((1U == cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__stride)) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen 
                = ((0xeU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen)) 
                   | ((0U == (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__ib_select))
                       ? 1U : 0U));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__next_el_addr 
                = ((IData)(4U) + (0xfffffffcU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_addr));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen 
                = ((0xdU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen)) 
                   | (((1U == (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__ib_select)) 
                       | VL_LTS_III(32, 1U, VL_EXTENDS_II(32,7, (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track)))) 
                      << 1U));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen 
                = ((0xbU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen)) 
                   | (((2U == (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__ib_select)) 
                       | VL_LTS_III(32, 2U, VL_EXTENDS_II(32,7, (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track)))) 
                      << 2U));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen 
                = ((7U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen)) 
                   | (((3U == (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__ib_select)) 
                       | VL_LTS_III(32, 3U, VL_EXTENDS_II(32,7, (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track)))) 
                      << 3U));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_bytes 
                = (0x7fU & ((((1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen) 
                                     >> 3U)) + (1U 
                                                & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen) 
                                                   >> 2U))) 
                             + (1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen) 
                                      >> 1U))) + (1U 
                                                  & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen))));
        } else if ((0U == cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__stride)) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen 
                = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen) 
                   | (0xfU & ((IData)(1U) << (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__ib_select))));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_bytes 
                = (0x1fU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                   [2U]);
        }
    } else if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__ib_select 
            = (2U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_addr);
        if ((2U < cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__stride)) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen 
                = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen) 
                   | (0xfU & ((IData)(1U) << (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__ib_select))));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__next_el_addr 
                = ((0xfffffffeU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_addr) 
                   + (0xfffffffeU & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__stride));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen 
                = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen) 
                   | (0xfU & ((IData)(1U) << (3U & 
                                              ((IData)(1U) 
                                               + (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__ib_select))))));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_bytes 
                = (0x7fU & ((((1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen) 
                                     >> 3U)) + (1U 
                                                & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen) 
                                                   >> 2U))) 
                             + (1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen) 
                                      >> 1U))) + (1U 
                                                  & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen))));
        } else if ((2U == cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__stride)) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen 
                = ((0xcU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen)) 
                   | ((0U == (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__ib_select))
                       ? 3U : 0U));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__next_el_addr 
                = ((IData)(4U) + (0xfffffffcU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_addr));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen 
                = ((3U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen)) 
                   | ((((2U == (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__ib_select)) 
                        | VL_LTS_III(32, 2U, VL_EXTENDS_II(32,7, (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track))))
                        ? 3U : 0U) << 2U));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_bytes 
                = (0x7fU & ((((1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen) 
                                     >> 3U)) + (1U 
                                                & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen) 
                                                   >> 2U))) 
                             + (1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen) 
                                      >> 1U))) + (1U 
                                                  & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen))));
        } else if ((0U == cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__stride)) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen 
                = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen) 
                   | (0xfU & ((IData)(1U) << (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__ib_select))));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_bytes 
                = (0x3eU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                            [2U] << 1U));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen 
                = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen) 
                   | (0xfU & ((IData)(1U) << (3U & 
                                              ((IData)(1U) 
                                               + (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__ib_select))))));
        }
    } else if (VL_LIKELY(((2U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                        [3U] >> 2U)))))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__ib_select = 0U;
        if ((4U <= cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__stride)) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen = 0xfU;
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__next_el_addr 
                = ((0xfffffffcU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_addr) 
                   + (0xfffffffcU & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__stride));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_bytes = 4U;
        } else if ((0U == cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__stride)) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__be_gen = 0xfU;
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_bytes 
                = (0x3eU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                            [2U] << 1U));
        }
    } else {
        VL_WRITEF_NX("[%0t] %%Error: vector_lsu.sv:250: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vlsu0: Invalid VSEW\n",0,
                     64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_lsu.sv", 250, "");
    }
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT____Vcellinp__tr__byte_select_i 
        = (0x7fU & (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT____VdfgRegularize_ha59b5e9f_0_1) 
                     - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track)) 
                    + (0xcU & ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_addr) 
                               << 2U))));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr_vlsu 
        = (0x1fU & ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_addr) 
                    + (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycles_cnt)));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track_next 
        = (0x7fU & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__au_start)
                     ? (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT____VdfgRegularize_ha59b5e9f_0_1)
                     : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_addr_inc)
                         ? (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track) 
                             >= (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_bytes))
                             ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track) 
                                - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__cycle_bytes))
                             : 0U) : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycles_inc)
                                       ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track) 
                                          - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycle_bytes))
                                       : (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track)))));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr 
        = ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr_src)
            ? ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr_src)
                ? (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr_vlsu)
                : 0U) : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vd_addr));
    vlSelfRef.cv32e40x_wrapper__DOT__amem_req = 0U;
    if (((((((((0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state) 
               | (1U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
              | (2U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
             | (3U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
            | (4U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
           | (5U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
          | (6U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) 
         | (7U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__next_state 
            = ((0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)
                ? ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_load)
                    ? 1U : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_store)
                             ? ((0U == (0x1fU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                        [2U])) ? 7U
                                 : 5U) : 0U)) : ((1U 
                                                  == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)
                                                  ? 2U
                                                  : 
                                                 ((2U 
                                                   == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)
                                                    ? 
                                                   ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__amem_rvalid)
                                                     ? 2U
                                                     : 
                                                    ((0U 
                                                      == 
                                                      VL_EXTENDS_II(32,7, (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track_next)))
                                                      ? 4U
                                                      : 3U))
                                                    : 
                                                   ((4U 
                                                     == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)
                                                     ? 0U
                                                     : 
                                                    ((5U 
                                                      == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)
                                                      ? 6U
                                                      : 
                                                     ((6U 
                                                       == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)
                                                       ? 
                                                      ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__amem_rvalid)
                                                        ? 
                                                       (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycles_cnt) 
                                                         == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__store_cycles))
                                                         ? 7U
                                                         : 5U)
                                                        : 6U)
                                                       : 0U)))))));
        if ((0U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
            if ((1U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                if ((2U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                    if ((0U != VL_EXTENDS_II(32,7, (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__byte_track_next)))) {
                        vlSelfRef.cv32e40x_wrapper__DOT__amem_req = 1U;
                    }
                } else if ((3U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                    if ((4U != vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                        if ((5U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu0__DOT__current_state)) {
                            vlSelfRef.cv32e40x_wrapper__DOT__amem_req = 1U;
                        }
                    }
                }
            }
        }
    }
    if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                      [3U] >> 2U)))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[0U] 
            = (((- (IData)((1U & (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate 
                                  >> 7U)))) << 8U) 
               | (0xffU & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[1U] 
            = (((- (IData)((1U & (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate 
                                  >> 7U)))) << 8U) 
               | (0xffU & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[2U] 
            = (IData)((((QData)((IData)((((- (IData)(
                                                     (1U 
                                                      & (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate 
                                                         >> 7U)))) 
                                          << 8U) | 
                                         (0xffU & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate)))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (0xffU 
                                                        & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate))))));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[3U] 
            = (IData)(((((QData)((IData)((((- (IData)(
                                                      (1U 
                                                       & (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0xffU & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate)))) 
                         << 0x20U) | (QData)((IData)(
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate 
                                                                      >> 7U)))) 
                                                       << 8U) 
                                                      | (0xffU 
                                                         & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate))))) 
                       >> 0x20U));
    } else if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[0U] 
            = (((- (IData)((1U & (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate 
                                  >> 0xfU)))) << 0x10U) 
               | (0xffffU & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[1U] 
            = (((- (IData)((1U & (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate 
                                  >> 0xfU)))) << 0x10U) 
               | (0xffffU & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[2U] 
            = (IData)((((QData)((IData)((((- (IData)(
                                                     (1U 
                                                      & (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate 
                                                         >> 0xfU)))) 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate)))) 
                        << 0x20U) | (QData)((IData)(
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate 
                                                                     >> 0xfU)))) 
                                                      << 0x10U) 
                                                     | (0xffffU 
                                                        & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate))))));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[3U] 
            = (IData)(((((QData)((IData)((((- (IData)(
                                                      (1U 
                                                       & (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate 
                                                          >> 0xfU)))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate)))) 
                         << 0x20U) | (QData)((IData)(
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate 
                                                                      >> 0xfU)))) 
                                                       << 0x10U) 
                                                      | (0xffffU 
                                                         & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate))))) 
                       >> 0x20U));
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[0U] 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate;
        if ((2U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                          [3U] >> 2U)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[1U] 
                = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate;
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[2U] 
                = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate;
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[3U] 
                = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__scalar_to_replicate;
        } else {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[1U] = 0U;
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[2U] = 0U;
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[3U] = 0U;
        }
    }
    if ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[0U];
    } else if ((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[0U];
    } else if ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data 
            = ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__unsigned_immediate)
                ? (0x1fU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__immediate_operand))
                : (((- (IData)((1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__immediate_operand) 
                                      >> 4U)))) << 5U) 
                   | (0x1fU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__immediate_operand))));
    } else if ((3U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data 
            = ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__cycle_count))
                ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[0U]
                : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__reduction_intermediate_reg);
    } else if ((4U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data = 0U;
    } else if ((5U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data 
            = (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U]);
    }
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_3 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op) 
           & ((0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data) 
              | (0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U])));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_a = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_b = 0U;
    if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                      [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_a 
            = (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U] 
                                  >> 7U)))) << 8U) 
               | (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U]));
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_b 
            = ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__wide_vs1)
                ? (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data))
                : (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data 
                                      >> 7U)))) << 8U) 
                   | (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data)));
    } else if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_a 
            = (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U] 
                                  >> 0xfU)))) << 0x10U) 
               | (0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U]));
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_b 
            = ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__wide_vs1)
                ? vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data
                : (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data)));
        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening)))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening))))) {
                VL_WRITEF_NX("[%0t] %%Error: vw_sign_ext.sv:52: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.arith_stage0.pe0.se0: Trying to quad-widen 16b elements!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vw_sign_ext.sv", 52, "");
            }
        }
    } else {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_a 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U];
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_b 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data;
    }
    if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening))) {
        if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                          [3U] >> 2U)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__eff_vsew = 1U;
        } else if (VL_LIKELY(((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                            [3U] >> 2U)))))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__eff_vsew = 2U;
        } else {
            VL_WRITEF_NX("[%0t] %%Error: vector_registers.sv:211: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.vreg0: Widening ops with VSEW=32b are not supported\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name());
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__eff_vsew 
                = (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                         [3U] >> 2U));
            VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vector_registers.sv", 211, "");
        }
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__eff_vsew 
            = (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                     [3U] >> 2U));
    }
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en0 = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en1 = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en2 = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en3 = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_addr2 
        = (2U | (0x1dU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr)));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data1 
        = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
        [(1U | (0x1eU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr)))];
    if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                      [3U] >> 2U)))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening))) {
            __Vtemp_48[2U] = (IData)((((QData)((IData)(
                                                       vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                       [
                                                       (3U 
                                                        | (0x1cU 
                                                           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr)))])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                                   [vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_addr2]))));
            __Vtemp_48[3U] = (IData)(((((QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                        [
                                                        (3U 
                                                         | (0x1cU 
                                                            & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr)))])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                                    [vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_addr2]))) 
                                      >> 0x20U));
        } else {
            __Vtemp_48[2U] = (IData)((((QData)((IData)(
                                                       (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data1 
                                                        >> 0x10U))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (0xffffU 
                                                                    & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data1)))));
            __Vtemp_48[3U] = (IData)(((((QData)((IData)(
                                                        (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data1 
                                                         >> 0x10U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data1)))) 
                                      >> 0x20U));
        }
    } else if ((2U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        __Vtemp_48[2U] = (IData)((((QData)((IData)(
                                                   vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                   [
                                                   (3U 
                                                    | (0x1cU 
                                                       & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr)))])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                               [vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_addr2]))));
        __Vtemp_48[3U] = (IData)(((((QData)((IData)(
                                                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                    [
                                                    (3U 
                                                     | (0x1cU 
                                                        & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr)))])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                                                                [vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vd_addr2]))) 
                                  >> 0x20U));
    } else {
        __Vtemp_48[2U] = 0U;
        __Vtemp_48[3U] = 0U;
    }
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data0 
        = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
        [vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr];
    vlSelfRef.cv32e40x_wrapper__DOT__amem_gnt = ((0x100U 
                                                  > (IData)(vlSelfRef.cv32e40x_wrapper__DOT__req_count)) 
                                                 & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__amem_req));
    vlSelfRef.mem_be_o = (0xfU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                  >> 5U));
    vlSelfRef.cv32e40x_wrapper__DOT__amem_wdata = 0U;
    if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                      [3U] >> 2U)))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[0U] 
                = (0xffffU & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data0);
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[1U] 
                = (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data0 
                   >> 0x10U);
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[2U] 
                = (IData)((((QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data1 
                                             >> 0x10U))) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xffffU 
                                                         & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data1)))));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[3U] 
                = (IData)(((((QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data1 
                                              >> 0x10U))) 
                             << 0x20U) | (QData)((IData)(
                                                         (0xffffU 
                                                          & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data1)))) 
                           >> 0x20U));
        } else {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[0U] 
                = (0xffU & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data0);
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[1U] 
                = (0xffU & (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data0 
                            >> 8U));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[2U] 
                = (IData)((((QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data0 
                                             >> 0x18U))) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xffU 
                                                         & (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data0 
                                                            >> 0x10U))))));
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[3U] 
                = (IData)(((((QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data0 
                                              >> 0x18U))) 
                             << 0x20U) | (QData)((IData)(
                                                         (0xffU 
                                                          & (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data0 
                                                             >> 0x10U))))) 
                           >> 0x20U));
        }
    } else {
        if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                          [3U] >> 2U)))) {
            if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening))) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[0U] 
                    = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data0;
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[1U] 
                    = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data1;
            } else {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[0U] 
                    = (0xffffU & cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data0);
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[1U] 
                    = (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vs3_rd_data0 
                       >> 0x10U);
            }
        } else if ((2U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                 [3U] >> 2U)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[0U] 
                = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                [vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr];
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[1U] 
                = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__vregs
                [(1U | (0x1eU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr)))];
        } else {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[0U] = 0U;
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[1U] = 0U;
        }
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[2U] 
            = __Vtemp_48[2U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[3U] 
            = __Vtemp_48[3U];
    }
    if ((0xbU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_a 
            = (QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_a 
                               + (((- (IData)((1U & 
                                               (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [1U] 
                                                >> 7U)))) 
                                   << 8U) | (0xffU 
                                             & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                             [1U])))));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_b 
            = (QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_b 
                               + (((- (IData)((1U & 
                                               (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [1U] 
                                                >> 0xfU)))) 
                                   << 8U) | (0xffU 
                                             & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [1U] 
                                                >> 8U))))));
        VL_EXTENDS_WQ(66,33, __Vtemp_52, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_a);
        __Vtemp_53[0U] = __Vtemp_52[0U];
        __Vtemp_53[1U] = __Vtemp_52[1U];
        __Vtemp_53[2U] = (3U & __Vtemp_52[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp_55, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_b);
        __Vtemp_56[0U] = __Vtemp_55[0U];
        __Vtemp_56[1U] = __Vtemp_55[1U];
        __Vtemp_56[2U] = (3U & __Vtemp_55[2U]);
        VL_MULS_WWW(66, __Vtemp_57, __Vtemp_53, __Vtemp_56);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide[0U] 
            = __Vtemp_57[0U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide[1U] 
            = __Vtemp_57[1U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide[2U] 
            = (3U & __Vtemp_57[2U]);
    } else if ((0xcU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        VL_EXTENDS_WI(66,8, __Vtemp_60, (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U]));
        __Vtemp_61[0U] = __Vtemp_60[0U];
        __Vtemp_61[1U] = __Vtemp_60[1U];
        __Vtemp_61[2U] = (3U & __Vtemp_60[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_63, (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data));
        __Vtemp_64[0U] = __Vtemp_63[0U];
        __Vtemp_64[1U] = __Vtemp_63[1U];
        __Vtemp_64[2U] = (3U & __Vtemp_63[2U]);
        VL_MULS_WWW(66, __Vtemp_65, __Vtemp_61, __Vtemp_64);
        VL_EXTENDS_WI(66,8, __Vtemp_67, (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U] 
                                                  >> 8U)));
        __Vtemp_68[0U] = __Vtemp_67[0U];
        __Vtemp_68[1U] = __Vtemp_67[1U];
        __Vtemp_68[2U] = (3U & __Vtemp_67[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_70, (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data 
                                                  >> 8U)));
        __Vtemp_71[0U] = __Vtemp_70[0U];
        __Vtemp_71[1U] = __Vtemp_70[1U];
        __Vtemp_71[2U] = (3U & __Vtemp_70[2U]);
        VL_MULS_WWW(66, __Vtemp_72, __Vtemp_68, __Vtemp_71);
        VL_ADD_W(3, __Vtemp_73, __Vtemp_65, __Vtemp_72);
        VL_EXTENDS_WI(66,8, __Vtemp_75, (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U] 
                                                  >> 0x10U)));
        __Vtemp_76[0U] = __Vtemp_75[0U];
        __Vtemp_76[1U] = __Vtemp_75[1U];
        __Vtemp_76[2U] = (3U & __Vtemp_75[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_78, (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data 
                                                  >> 0x10U)));
        __Vtemp_79[0U] = __Vtemp_78[0U];
        __Vtemp_79[1U] = __Vtemp_78[1U];
        __Vtemp_79[2U] = (3U & __Vtemp_78[2U]);
        VL_MULS_WWW(66, __Vtemp_80, __Vtemp_76, __Vtemp_79);
        VL_ADD_W(3, __Vtemp_81, __Vtemp_73, __Vtemp_80);
        VL_EXTENDS_WI(66,8, __Vtemp_83, (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U] 
                                         >> 0x18U));
        __Vtemp_84[0U] = __Vtemp_83[0U];
        __Vtemp_84[1U] = __Vtemp_83[1U];
        __Vtemp_84[2U] = (3U & __Vtemp_83[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_86, (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data 
                                         >> 0x18U));
        __Vtemp_87[0U] = __Vtemp_86[0U];
        __Vtemp_87[1U] = __Vtemp_86[1U];
        __Vtemp_87[2U] = (3U & __Vtemp_86[2U]);
        VL_MULS_WWW(66, __Vtemp_88, __Vtemp_84, __Vtemp_87);
        VL_ADD_W(3, __Vtemp_89, __Vtemp_81, __Vtemp_88);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide[0U] 
            = __Vtemp_89[0U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide[1U] 
            = __Vtemp_89[1U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide[2U] 
            = (3U & __Vtemp_89[2U]);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_a = 0ULL;
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_b = 0ULL;
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_a 
            = (((QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_a 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_a)));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_b 
            = (((QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_b 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_b)));
        VL_EXTENDS_WQ(66,33, __Vtemp_92, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_a);
        __Vtemp_93[0U] = __Vtemp_92[0U];
        __Vtemp_93[1U] = __Vtemp_92[1U];
        __Vtemp_93[2U] = (3U & __Vtemp_92[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp_95, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_b);
        __Vtemp_96[0U] = __Vtemp_95[0U];
        __Vtemp_96[1U] = __Vtemp_95[1U];
        __Vtemp_96[2U] = (3U & __Vtemp_95[2U]);
        VL_MULS_WWW(66, __Vtemp_97, __Vtemp_93, __Vtemp_96);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide[0U] 
            = __Vtemp_97[0U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide[1U] 
            = __Vtemp_97[1U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide[2U] 
            = (3U & __Vtemp_97[2U]);
    }
    if (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__macc) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__add_a 
            = (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide[0U]));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__add_b 
            = (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[0U]));
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__add_a 
            = (((QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_a 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_a)));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__add_b 
            = (((QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_b 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sign_ext_b)));
    }
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__addend 
        = (0x1ffffffffULL & ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__subtract)
                              ? (1ULL + (~ vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__add_b))
                              : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__add_b));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__add_out 
        = (0x1ffffffffULL & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__add_a 
                             + cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__addend));
    vlSelfRef.mem_wdata_o = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                              << 0x1bU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                           >> 5U));
    if (vlSelfRef.cv32e40x_wrapper__DOT__amem_req) {
        vlSelfRef.mem_be_o = vlSelfRef.cv32e40x_wrapper__DOT__amem_be;
    }
    if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                      [3U] >> 2U)))) {
        vlSelfRef.cv32e40x_wrapper__DOT__amem_wdata 
            = (((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[3U] 
                 << 0x18U) | (0xff0000U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[2U] 
                                           << 0x10U))) 
               | ((0xff00U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[1U] 
                              << 8U)) | (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[0U])));
    } else if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        if ((1U & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr_vlsu))) {
            if ((1U & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr_vlsu))) {
                vlSelfRef.cv32e40x_wrapper__DOT__amem_wdata 
                    = ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[3U] 
                        << 0x10U) | (0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[2U]));
            }
        } else {
            vlSelfRef.cv32e40x_wrapper__DOT__amem_wdata 
                = ((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[1U] 
                    << 0x10U) | (0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[0U]));
        }
    } else if ((2U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        vlSelfRef.cv32e40x_wrapper__DOT__amem_wdata 
            = ((2U & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr_vlsu))
                ? ((1U & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr_vlsu))
                    ? vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[3U]
                    : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[2U])
                : ((1U & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr_vlsu))
                    ? vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[1U]
                    : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[0U]));
    }
    if (vlSelfRef.cv32e40x_wrapper__DOT__amem_req) {
        vlSelfRef.mem_wdata_o = vlSelfRef.cv32e40x_wrapper__DOT__amem_wdata;
    }
    VL_SHIFTRS_WWI(66,66,5, __Vtemp_99, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide, 
                   (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                             [1U] >> 0x10U)));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__requant_shifted[0U] 
        = __Vtemp_99[0U];
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__requant_shifted[1U] 
        = __Vtemp_99[1U];
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__requant_shifted[2U] 
        = (3U & __Vtemp_99[2U]);
    __Vtemp_100[0U] = 0x7fU;
    __Vtemp_100[1U] = 0U;
    __Vtemp_100[2U] = 0U;
    __Vtemp_101[0U] = 0xffffff80U;
    __Vtemp_101[1U] = 0xffffffffU;
    __Vtemp_101[2U] = 3U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__requant_result 
        = (VL_LTS_IWW(66, __Vtemp_100, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__requant_shifted)
            ? 0x7fU : (VL_GTS_IWW(66, __Vtemp_101, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__requant_shifted)
                        ? 0xffffff80U : cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__requant_shifted[0U]));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result = 0ULL;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__selected_mult_out 
        = (0x1ffffffffULL & ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__saturate_mode))
                              ? ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                               [3U] 
                                               >> 2U)))
                                  ? (QData)((IData)(
                                                    (0x1ffU 
                                                     & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide[0U])))
                                  : ((1U == (3U & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                                   [3U] 
                                                   >> 2U)))
                                      ? (QData)((IData)(
                                                        (0x1ffffU 
                                                         & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide[0U])))
                                      : ((2U == (3U 
                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                                    [3U] 
                                                    >> 2U)))
                                          ? (((QData)((IData)(
                                                              vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide[0U])))
                                          : (((QData)((IData)(
                                                              vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide[0U]))))))
                              : (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__mult_wide[0U])))));
    if (((((((((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op)) 
               | (1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
              | (2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
             | (3U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
            | (4U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
           | (5U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
          | (6U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
         | (7U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result 
            = ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__add_out
                : ((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                    ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__add_out
                    : ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                        ? (QData)((IData)(VL_SHIFTL_III(32,32,32, 
                                                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U], vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data)))
                        : ((3U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                            ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__selected_mult_out
                            : ((4U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                                ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__add_out
                                : ((5U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                                    ? (QData)((IData)(
                                                      (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U] 
                                                       ^ vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data)))
                                    : ((6U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                                        ? (QData)((IData)(
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U], vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data)))
                                        : (QData)((IData)(
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U], vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data))))))))));
    } else if ((8U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result 
            = (QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U] 
                               | vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data)));
    } else if ((9U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result 
            = (QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U] 
                               & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data)));
    } else if ((0xaU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__selected_mult_out;
    } else if ((0xbU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__add_out;
    } else if ((0xcU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__add_out;
    } else if ((0xdU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result 
            = (((QData)((IData)((0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data))) 
                << 0x18U) | (QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U] 
                                             >> 8U))));
    }
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat16_result 
        = (VL_GTS_IQQ(33, 0x1ffff8000ULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result)
            ? 0x8000U : (VL_LTS_IQQ(33, 0x7fffULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result)
                          ? 0x7fffU : (0xffffU & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result))));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat32_result 
        = (VL_GTS_IQQ(33, 0x180000000ULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result)
            ? 0x80000000U : (VL_LTS_IQQ(33, 0x7fffffffULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result)
                              ? 0x7fffffffU : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result)));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat_result 
        = (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result);
    if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening))) {
        if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                          [3U] >> 2U)))) {
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat_result 
                = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat16_result;
        } else if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                 [3U] >> 2U)))) {
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat_result 
                = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat32_result;
        }
    } else if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat32_result;
    } else if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat_result 
            = (VL_GTS_IQQ(33, 0x1ffffff80ULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result)
                ? 0x80U : (VL_LTS_IQQ(33, 0x7fULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result)
                            ? 0x7fU : (0xffU & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result))));
    } else if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat16_result;
    } else if ((2U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat32_result;
    }
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_out 
        = ((4U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
            ? ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                ? ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                    ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__requant_result
                    : ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result 
                                      >> 0x1fU))) ? 
                       (- (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result))
                        : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result)))
                : ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                    ? ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result 
                                      >> 0x1fU))) ? 
                       VL_SHIFTRS_III(32,32,5, (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result), 
                                      (0x1fU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                       [1U])) : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result))
                    : ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result 
                                      >> 0x1fU))) ? 0U
                        : (((QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result)) 
                            > (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                              [1U])))
                            ? vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                           [1U] : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result)))))
            : ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                ? ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                    ? ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result 
                                      >> 0x1fU))) ? 0U
                        : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result))
                    : ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result 
                                      >> 0x20U))) ? 
                       vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U]
                        : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data))
                : ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                    ? ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result 
                                      >> 0x20U))) ? vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_b_data
                        : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[0U])
                    : ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__saturate_mode))
                        ? (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__arith_result)
                        : cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0__DOT__sat_result))));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_final 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_3)
            ? 0U : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_out);
    if ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[1U];
    } else if ((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[1U];
    } else if ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data 
            = ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__unsigned_immediate)
                ? (0x1fU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__immediate_operand))
                : (((- (IData)((1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__immediate_operand) 
                                      >> 4U)))) << 5U) 
                   | (0x1fU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__immediate_operand))));
    } else if ((3U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe0_out;
    } else if ((4U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data = 0U;
    } else if ((5U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data 
            = (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U]);
    }
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_2 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op) 
           & ((0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data) 
              | (0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U])));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_a = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_b = 0U;
    if (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vlsu_load) {
        if ((0U == (3U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                    [3U]))) {
            if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr))) {
                if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en3 = 0xfU;
                } else {
                    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en2 = 0xfU;
                }
            } else if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr))) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en1 = 0xfU;
            } else {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en0 = 0xfU;
            }
        } else if ((1U == (3U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                           [3U]))) {
            if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_addr))) {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en2 = 0xfU;
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en3 = 0xfU;
            } else {
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en0 = 0xfU;
                vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en1 = 0xfU;
            }
        } else if ((2U == (3U & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                           [3U]))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en0 = 0xfU;
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en1 = 0xfU;
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en2 = 0xfU;
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en3 = 0xfU;
        }
    } else if ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__eff_vsew))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en0 
            = ((2U & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__elements_to_write))
                ? ((1U & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__elements_to_write))
                    ? 7U : 3U) : ((1U & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__elements_to_write))
                                   ? 1U : 0xfU));
    } else if ((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__eff_vsew))) {
        if ((0U == (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__elements_to_write))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en0 = 0xfU;
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en1 = 0xfU;
        } else if ((1U == (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__elements_to_write))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en0 = 3U;
        } else if ((2U == (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__elements_to_write))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en0 = 0xfU;
        } else if ((3U == (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__elements_to_write))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en0 = 0xfU;
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en1 = 3U;
        }
    } else if ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__eff_vsew))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en0 = 0xfU;
        if ((0U == (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__elements_to_write))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en1 = 0xfU;
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en2 = 0xfU;
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en3 = 0xfU;
        } else if ((2U == (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__elements_to_write))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en1 = 0xfU;
        } else if ((3U == (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__elements_to_write))) {
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en1 = 0xfU;
            vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vreg0__DOT__wr_en2 = 0xfU;
        }
    }
    if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                      [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_a 
            = (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U] 
                                  >> 7U)))) << 8U) 
               | (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U]));
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_b 
            = ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__wide_vs1)
                ? (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data))
                : (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data 
                                      >> 7U)))) << 8U) 
                   | (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data)));
    } else if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_a 
            = (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U] 
                                  >> 0xfU)))) << 0x10U) 
               | (0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U]));
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_b 
            = ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__wide_vs1)
                ? vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data
                : (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data)));
        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening)))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening))))) {
                VL_WRITEF_NX("[%0t] %%Error: vw_sign_ext.sv:52: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.arith_stage0.pe1.se0: Trying to quad-widen 16b elements!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vw_sign_ext.sv", 52, "");
            }
        }
    } else {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_a 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U];
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_b 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data;
    }
    if ((0xbU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_a 
            = (QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_a 
                               + (((- (IData)((1U & 
                                               (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [1U] 
                                                >> 7U)))) 
                                   << 8U) | (0xffU 
                                             & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                             [1U])))));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_b 
            = (QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_b 
                               + (((- (IData)((1U & 
                                               (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [1U] 
                                                >> 0xfU)))) 
                                   << 8U) | (0xffU 
                                             & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [1U] 
                                                >> 8U))))));
        VL_EXTENDS_WQ(66,33, __Vtemp_104, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_a);
        __Vtemp_105[0U] = __Vtemp_104[0U];
        __Vtemp_105[1U] = __Vtemp_104[1U];
        __Vtemp_105[2U] = (3U & __Vtemp_104[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp_107, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_b);
        __Vtemp_108[0U] = __Vtemp_107[0U];
        __Vtemp_108[1U] = __Vtemp_107[1U];
        __Vtemp_108[2U] = (3U & __Vtemp_107[2U]);
        VL_MULS_WWW(66, __Vtemp_109, __Vtemp_105, __Vtemp_108);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide[0U] 
            = __Vtemp_109[0U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide[1U] 
            = __Vtemp_109[1U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide[2U] 
            = (3U & __Vtemp_109[2U]);
    } else if ((0xcU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        VL_EXTENDS_WI(66,8, __Vtemp_112, (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U]));
        __Vtemp_113[0U] = __Vtemp_112[0U];
        __Vtemp_113[1U] = __Vtemp_112[1U];
        __Vtemp_113[2U] = (3U & __Vtemp_112[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_115, (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data));
        __Vtemp_116[0U] = __Vtemp_115[0U];
        __Vtemp_116[1U] = __Vtemp_115[1U];
        __Vtemp_116[2U] = (3U & __Vtemp_115[2U]);
        VL_MULS_WWW(66, __Vtemp_117, __Vtemp_113, __Vtemp_116);
        VL_EXTENDS_WI(66,8, __Vtemp_119, (0xffU & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U] 
                                                   >> 8U)));
        __Vtemp_120[0U] = __Vtemp_119[0U];
        __Vtemp_120[1U] = __Vtemp_119[1U];
        __Vtemp_120[2U] = (3U & __Vtemp_119[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_122, (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data 
                                                   >> 8U)));
        __Vtemp_123[0U] = __Vtemp_122[0U];
        __Vtemp_123[1U] = __Vtemp_122[1U];
        __Vtemp_123[2U] = (3U & __Vtemp_122[2U]);
        VL_MULS_WWW(66, __Vtemp_124, __Vtemp_120, __Vtemp_123);
        VL_ADD_W(3, __Vtemp_125, __Vtemp_117, __Vtemp_124);
        VL_EXTENDS_WI(66,8, __Vtemp_127, (0xffU & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U] 
                                                   >> 0x10U)));
        __Vtemp_128[0U] = __Vtemp_127[0U];
        __Vtemp_128[1U] = __Vtemp_127[1U];
        __Vtemp_128[2U] = (3U & __Vtemp_127[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_130, (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data 
                                                   >> 0x10U)));
        __Vtemp_131[0U] = __Vtemp_130[0U];
        __Vtemp_131[1U] = __Vtemp_130[1U];
        __Vtemp_131[2U] = (3U & __Vtemp_130[2U]);
        VL_MULS_WWW(66, __Vtemp_132, __Vtemp_128, __Vtemp_131);
        VL_ADD_W(3, __Vtemp_133, __Vtemp_125, __Vtemp_132);
        VL_EXTENDS_WI(66,8, __Vtemp_135, (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U] 
                                          >> 0x18U));
        __Vtemp_136[0U] = __Vtemp_135[0U];
        __Vtemp_136[1U] = __Vtemp_135[1U];
        __Vtemp_136[2U] = (3U & __Vtemp_135[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_138, (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data 
                                          >> 0x18U));
        __Vtemp_139[0U] = __Vtemp_138[0U];
        __Vtemp_139[1U] = __Vtemp_138[1U];
        __Vtemp_139[2U] = (3U & __Vtemp_138[2U]);
        VL_MULS_WWW(66, __Vtemp_140, __Vtemp_136, __Vtemp_139);
        VL_ADD_W(3, __Vtemp_141, __Vtemp_133, __Vtemp_140);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide[0U] 
            = __Vtemp_141[0U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide[1U] 
            = __Vtemp_141[1U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide[2U] 
            = (3U & __Vtemp_141[2U]);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_a = 0ULL;
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_b = 0ULL;
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_a 
            = (((QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_a 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_a)));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_b 
            = (((QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_b 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_b)));
        VL_EXTENDS_WQ(66,33, __Vtemp_144, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_a);
        __Vtemp_145[0U] = __Vtemp_144[0U];
        __Vtemp_145[1U] = __Vtemp_144[1U];
        __Vtemp_145[2U] = (3U & __Vtemp_144[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp_147, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_b);
        __Vtemp_148[0U] = __Vtemp_147[0U];
        __Vtemp_148[1U] = __Vtemp_147[1U];
        __Vtemp_148[2U] = (3U & __Vtemp_147[2U]);
        VL_MULS_WWW(66, __Vtemp_149, __Vtemp_145, __Vtemp_148);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide[0U] 
            = __Vtemp_149[0U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide[1U] 
            = __Vtemp_149[1U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide[2U] 
            = (3U & __Vtemp_149[2U]);
    }
    if (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__macc) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__add_a 
            = (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide[0U]));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__add_b 
            = (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[1U]));
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__add_a 
            = (((QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_a 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_a)));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__add_b 
            = (((QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_b 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sign_ext_b)));
    }
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__addend 
        = (0x1ffffffffULL & ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__subtract)
                              ? (1ULL + (~ vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__add_b))
                              : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__add_b));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__add_out 
        = (0x1ffffffffULL & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__add_a 
                             + cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__addend));
    VL_SHIFTRS_WWI(66,66,5, __Vtemp_151, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide, 
                   (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                             [1U] >> 0x10U)));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__requant_shifted[0U] 
        = __Vtemp_151[0U];
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__requant_shifted[1U] 
        = __Vtemp_151[1U];
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__requant_shifted[2U] 
        = (3U & __Vtemp_151[2U]);
    __Vtemp_152[0U] = 0x7fU;
    __Vtemp_152[1U] = 0U;
    __Vtemp_152[2U] = 0U;
    __Vtemp_153[0U] = 0xffffff80U;
    __Vtemp_153[1U] = 0xffffffffU;
    __Vtemp_153[2U] = 3U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__requant_result 
        = (VL_LTS_IWW(66, __Vtemp_152, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__requant_shifted)
            ? 0x7fU : (VL_GTS_IWW(66, __Vtemp_153, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__requant_shifted)
                        ? 0xffffff80U : cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__requant_shifted[0U]));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result = 0ULL;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__selected_mult_out 
        = (0x1ffffffffULL & ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__saturate_mode))
                              ? ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                               [3U] 
                                               >> 2U)))
                                  ? (QData)((IData)(
                                                    (0x1ffU 
                                                     & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide[0U])))
                                  : ((1U == (3U & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                                   [3U] 
                                                   >> 2U)))
                                      ? (QData)((IData)(
                                                        (0x1ffffU 
                                                         & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide[0U])))
                                      : ((2U == (3U 
                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                                    [3U] 
                                                    >> 2U)))
                                          ? (((QData)((IData)(
                                                              vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide[0U])))
                                          : (((QData)((IData)(
                                                              vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide[0U]))))))
                              : (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__mult_wide[0U])))));
    if (((((((((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op)) 
               | (1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
              | (2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
             | (3U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
            | (4U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
           | (5U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
          | (6U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
         | (7U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result 
            = ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__add_out
                : ((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                    ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__add_out
                    : ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                        ? (QData)((IData)(VL_SHIFTL_III(32,32,32, 
                                                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U], vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data)))
                        : ((3U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                            ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__selected_mult_out
                            : ((4U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                                ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__add_out
                                : ((5U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                                    ? (QData)((IData)(
                                                      (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U] 
                                                       ^ vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data)))
                                    : ((6U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                                        ? (QData)((IData)(
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U], vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data)))
                                        : (QData)((IData)(
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U], vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data))))))))));
    } else if ((8U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result 
            = (QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U] 
                               | vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data)));
    } else if ((9U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result 
            = (QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U] 
                               & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data)));
    } else if ((0xaU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__selected_mult_out;
    } else if ((0xbU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__add_out;
    } else if ((0xcU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__add_out;
    } else if ((0xdU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result 
            = (((QData)((IData)((0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data))) 
                << 0x18U) | (QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U] 
                                             >> 8U))));
    }
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat16_result 
        = (VL_GTS_IQQ(33, 0x1ffff8000ULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result)
            ? 0x8000U : (VL_LTS_IQQ(33, 0x7fffULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result)
                          ? 0x7fffU : (0xffffU & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result))));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat32_result 
        = (VL_GTS_IQQ(33, 0x180000000ULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result)
            ? 0x80000000U : (VL_LTS_IQQ(33, 0x7fffffffULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result)
                              ? 0x7fffffffU : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result)));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat_result 
        = (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result);
    if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening))) {
        if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                          [3U] >> 2U)))) {
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat_result 
                = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat16_result;
        } else if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                 [3U] >> 2U)))) {
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat_result 
                = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat32_result;
        }
    } else if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat32_result;
    } else if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat_result 
            = (VL_GTS_IQQ(33, 0x1ffffff80ULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result)
                ? 0x80U : (VL_LTS_IQQ(33, 0x7fULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result)
                            ? 0x7fU : (0xffU & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result))));
    } else if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat16_result;
    } else if ((2U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat32_result;
    }
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_out 
        = ((4U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
            ? ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                ? ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                    ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__requant_result
                    : ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result 
                                      >> 0x1fU))) ? 
                       (- (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result))
                        : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result)))
                : ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                    ? ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result 
                                      >> 0x1fU))) ? 
                       VL_SHIFTRS_III(32,32,5, (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result), 
                                      (0x1fU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                       [1U])) : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result))
                    : ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result 
                                      >> 0x1fU))) ? 0U
                        : (((QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result)) 
                            > (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                              [1U])))
                            ? vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                           [1U] : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result)))))
            : ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                ? ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                    ? ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result 
                                      >> 0x1fU))) ? 0U
                        : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result))
                    : ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result 
                                      >> 0x20U))) ? 
                       vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U]
                        : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data))
                : ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                    ? ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result 
                                      >> 0x20U))) ? vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_b_data
                        : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[1U])
                    : ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__saturate_mode))
                        ? (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__arith_result)
                        : cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1__DOT__sat_result))));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_final 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_2)
            ? 0U : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_out);
    if ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[2U];
    } else if ((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[2U];
    } else if ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data 
            = ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__unsigned_immediate)
                ? (0x1fU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__immediate_operand))
                : (((- (IData)((1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__immediate_operand) 
                                      >> 4U)))) << 5U) 
                   | (0x1fU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__immediate_operand))));
    } else if ((3U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe1_out;
    } else if ((4U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data = 0U;
    } else if ((5U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data 
            = (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U]);
    }
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_1 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op) 
           & ((0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data) 
              | (0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U])));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_a = 0U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_b = 0U;
    if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                      [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_a 
            = (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U] 
                                  >> 7U)))) << 8U) 
               | (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U]));
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_b 
            = ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__wide_vs1)
                ? (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data))
                : (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data 
                                      >> 7U)))) << 8U) 
                   | (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data)));
    } else if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_a 
            = (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U] 
                                  >> 0xfU)))) << 0x10U) 
               | (0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U]));
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_b 
            = ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__wide_vs1)
                ? vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data
                : (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data)));
        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening)))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening))))) {
                VL_WRITEF_NX("[%0t] %%Error: vw_sign_ext.sv:52: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.arith_stage0.pe2.se0: Trying to quad-widen 16b elements!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vw_sign_ext.sv", 52, "");
            }
        }
    } else {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_a 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U];
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_b 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data;
    }
    if ((0xbU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_a 
            = (QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_a 
                               + (((- (IData)((1U & 
                                               (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [1U] 
                                                >> 7U)))) 
                                   << 8U) | (0xffU 
                                             & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                             [1U])))));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_b 
            = (QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_b 
                               + (((- (IData)((1U & 
                                               (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [1U] 
                                                >> 0xfU)))) 
                                   << 8U) | (0xffU 
                                             & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                                [1U] 
                                                >> 8U))))));
        VL_EXTENDS_WQ(66,33, __Vtemp_156, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_a);
        __Vtemp_157[0U] = __Vtemp_156[0U];
        __Vtemp_157[1U] = __Vtemp_156[1U];
        __Vtemp_157[2U] = (3U & __Vtemp_156[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp_159, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_b);
        __Vtemp_160[0U] = __Vtemp_159[0U];
        __Vtemp_160[1U] = __Vtemp_159[1U];
        __Vtemp_160[2U] = (3U & __Vtemp_159[2U]);
        VL_MULS_WWW(66, __Vtemp_161, __Vtemp_157, __Vtemp_160);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide[0U] 
            = __Vtemp_161[0U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide[1U] 
            = __Vtemp_161[1U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide[2U] 
            = (3U & __Vtemp_161[2U]);
    } else if ((0xcU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        VL_EXTENDS_WI(66,8, __Vtemp_164, (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U]));
        __Vtemp_165[0U] = __Vtemp_164[0U];
        __Vtemp_165[1U] = __Vtemp_164[1U];
        __Vtemp_165[2U] = (3U & __Vtemp_164[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_167, (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data));
        __Vtemp_168[0U] = __Vtemp_167[0U];
        __Vtemp_168[1U] = __Vtemp_167[1U];
        __Vtemp_168[2U] = (3U & __Vtemp_167[2U]);
        VL_MULS_WWW(66, __Vtemp_169, __Vtemp_165, __Vtemp_168);
        VL_EXTENDS_WI(66,8, __Vtemp_171, (0xffU & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U] 
                                                   >> 8U)));
        __Vtemp_172[0U] = __Vtemp_171[0U];
        __Vtemp_172[1U] = __Vtemp_171[1U];
        __Vtemp_172[2U] = (3U & __Vtemp_171[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_174, (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data 
                                                   >> 8U)));
        __Vtemp_175[0U] = __Vtemp_174[0U];
        __Vtemp_175[1U] = __Vtemp_174[1U];
        __Vtemp_175[2U] = (3U & __Vtemp_174[2U]);
        VL_MULS_WWW(66, __Vtemp_176, __Vtemp_172, __Vtemp_175);
        VL_ADD_W(3, __Vtemp_177, __Vtemp_169, __Vtemp_176);
        VL_EXTENDS_WI(66,8, __Vtemp_179, (0xffU & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U] 
                                                   >> 0x10U)));
        __Vtemp_180[0U] = __Vtemp_179[0U];
        __Vtemp_180[1U] = __Vtemp_179[1U];
        __Vtemp_180[2U] = (3U & __Vtemp_179[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_182, (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data 
                                                   >> 0x10U)));
        __Vtemp_183[0U] = __Vtemp_182[0U];
        __Vtemp_183[1U] = __Vtemp_182[1U];
        __Vtemp_183[2U] = (3U & __Vtemp_182[2U]);
        VL_MULS_WWW(66, __Vtemp_184, __Vtemp_180, __Vtemp_183);
        VL_ADD_W(3, __Vtemp_185, __Vtemp_177, __Vtemp_184);
        VL_EXTENDS_WI(66,8, __Vtemp_187, (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U] 
                                          >> 0x18U));
        __Vtemp_188[0U] = __Vtemp_187[0U];
        __Vtemp_188[1U] = __Vtemp_187[1U];
        __Vtemp_188[2U] = (3U & __Vtemp_187[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_190, (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data 
                                          >> 0x18U));
        __Vtemp_191[0U] = __Vtemp_190[0U];
        __Vtemp_191[1U] = __Vtemp_190[1U];
        __Vtemp_191[2U] = (3U & __Vtemp_190[2U]);
        VL_MULS_WWW(66, __Vtemp_192, __Vtemp_188, __Vtemp_191);
        VL_ADD_W(3, __Vtemp_193, __Vtemp_185, __Vtemp_192);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide[0U] 
            = __Vtemp_193[0U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide[1U] 
            = __Vtemp_193[1U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide[2U] 
            = (3U & __Vtemp_193[2U]);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_a = 0ULL;
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_b = 0ULL;
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_a 
            = (((QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_a 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_a)));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_b 
            = (((QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_b 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_b)));
        VL_EXTENDS_WQ(66,33, __Vtemp_196, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_a);
        __Vtemp_197[0U] = __Vtemp_196[0U];
        __Vtemp_197[1U] = __Vtemp_196[1U];
        __Vtemp_197[2U] = (3U & __Vtemp_196[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp_199, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_b);
        __Vtemp_200[0U] = __Vtemp_199[0U];
        __Vtemp_200[1U] = __Vtemp_199[1U];
        __Vtemp_200[2U] = (3U & __Vtemp_199[2U]);
        VL_MULS_WWW(66, __Vtemp_201, __Vtemp_197, __Vtemp_200);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide[0U] 
            = __Vtemp_201[0U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide[1U] 
            = __Vtemp_201[1U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide[2U] 
            = (3U & __Vtemp_201[2U]);
    }
    if (cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__macc) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__add_a 
            = (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide[0U]));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__add_b 
            = (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs3_data[2U]));
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__add_a 
            = (((QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_a 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_a)));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__add_b 
            = (((QData)((IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_b 
                                 >> 0x1fU))) << 0x20U) 
               | (QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sign_ext_b)));
    }
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__addend 
        = (0x1ffffffffULL & ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__subtract)
                              ? (1ULL + (~ vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__add_b))
                              : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__add_b));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__add_out 
        = (0x1ffffffffULL & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__add_a 
                             + cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__addend));
    VL_SHIFTRS_WWI(66,66,5, __Vtemp_203, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide, 
                   (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                             [1U] >> 0x10U)));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__requant_shifted[0U] 
        = __Vtemp_203[0U];
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__requant_shifted[1U] 
        = __Vtemp_203[1U];
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__requant_shifted[2U] 
        = (3U & __Vtemp_203[2U]);
    __Vtemp_204[0U] = 0x7fU;
    __Vtemp_204[1U] = 0U;
    __Vtemp_204[2U] = 0U;
    __Vtemp_205[0U] = 0xffffff80U;
    __Vtemp_205[1U] = 0xffffffffU;
    __Vtemp_205[2U] = 3U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__requant_result 
        = (VL_LTS_IWW(66, __Vtemp_204, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__requant_shifted)
            ? 0x7fU : (VL_GTS_IWW(66, __Vtemp_205, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__requant_shifted)
                        ? 0xffffff80U : cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__requant_shifted[0U]));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result = 0ULL;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__selected_mult_out 
        = (0x1ffffffffULL & ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__saturate_mode))
                              ? ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                               [3U] 
                                               >> 2U)))
                                  ? (QData)((IData)(
                                                    (0x1ffU 
                                                     & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide[0U])))
                                  : ((1U == (3U & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                                   [3U] 
                                                   >> 2U)))
                                      ? (QData)((IData)(
                                                        (0x1ffffU 
                                                         & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide[0U])))
                                      : ((2U == (3U 
                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                                    [3U] 
                                                    >> 2U)))
                                          ? (((QData)((IData)(
                                                              vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide[0U])))
                                          : (((QData)((IData)(
                                                              vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide[0U]))))))
                              : (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__mult_wide[0U])))));
    if (((((((((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op)) 
               | (1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
              | (2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
             | (3U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
            | (4U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
           | (5U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
          | (6U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) 
         | (7U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result 
            = ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__add_out
                : ((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                    ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__add_out
                    : ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                        ? (QData)((IData)(VL_SHIFTL_III(32,32,32, 
                                                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U], vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data)))
                        : ((3U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                            ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__selected_mult_out
                            : ((4U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                                ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__add_out
                                : ((5U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                                    ? (QData)((IData)(
                                                      (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U] 
                                                       ^ vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data)))
                                    : ((6U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))
                                        ? (QData)((IData)(
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U], vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data)))
                                        : (QData)((IData)(
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U], vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data))))))))));
    } else if ((8U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result 
            = (QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U] 
                               | vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data)));
    } else if ((9U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result 
            = (QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U] 
                               & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data)));
    } else if ((0xaU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__selected_mult_out;
    } else if ((0xbU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__add_out;
    } else if ((0xcU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__add_out;
    } else if ((0xdU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result 
            = (((QData)((IData)((0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data))) 
                << 0x18U) | (QData)((IData)((vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U] 
                                             >> 8U))));
    }
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat16_result 
        = (VL_GTS_IQQ(33, 0x1ffff8000ULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result)
            ? 0x8000U : (VL_LTS_IQQ(33, 0x7fffULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result)
                          ? 0x7fffU : (0xffffU & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result))));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat32_result 
        = (VL_GTS_IQQ(33, 0x180000000ULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result)
            ? 0x80000000U : (VL_LTS_IQQ(33, 0x7fffffffULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result)
                              ? 0x7fffffffU : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result)));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat_result 
        = (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result);
    if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening))) {
        if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                          [3U] >> 2U)))) {
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat_result 
                = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat16_result;
        } else if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                                 [3U] >> 2U)))) {
            cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat_result 
                = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat32_result;
        }
    } else if ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat32_result;
    } else if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat_result 
            = (VL_GTS_IQQ(33, 0x1ffffff80ULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result)
                ? 0x80U : (VL_LTS_IQQ(33, 0x7fULL, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result)
                            ? 0x7fU : (0xffU & (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result))));
    } else if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat16_result;
    } else if ((2U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat_result 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat32_result;
    }
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_out 
        = ((4U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
            ? ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                ? ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                    ? cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__requant_result
                    : ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result 
                                      >> 0x1fU))) ? 
                       (- (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result))
                        : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result)))
                : ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                    ? ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result 
                                      >> 0x1fU))) ? 
                       VL_SHIFTRS_III(32,32,5, (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result), 
                                      (0x1fU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                       [1U])) : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result))
                    : ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result 
                                      >> 0x1fU))) ? 0U
                        : (((QData)((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result)) 
                            > (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                                              [1U])))
                            ? vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                           [1U] : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result)))))
            : ((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                ? ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                    ? ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result 
                                      >> 0x1fU))) ? 0U
                        : (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result))
                    : ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result 
                                      >> 0x20U))) ? 
                       vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U]
                        : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data))
                : ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__output_mode))
                    ? ((1U & (IData)((cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result 
                                      >> 0x20U))) ? vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_b_data
                        : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[2U])
                    : ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__saturate_mode))
                        ? (IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__arith_result)
                        : cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2__DOT__sat_result))));
    if ((0U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data 
            = cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs1_data[3U];
    } else if ((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__replicated_scalar[3U];
    } else if ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data 
            = ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__unsigned_immediate)
                ? (0x1fU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__immediate_operand))
                : (((- (IData)((1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__immediate_operand) 
                                      >> 4U)))) << 5U) 
                   | (0x1fU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__immediate_operand))));
    } else if ((3U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_out;
    } else if ((4U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data = 0U;
    } else if ((5U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__operand_select))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data 
            = (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
               [1U]);
    }
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_final 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_1)
            ? 0U : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe2_out);
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_0 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__is_mul_op) 
           & ((0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data) 
              | (0U == vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U])));
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_a = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_b = 0U;
    if ((0U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                      [3U] >> 2U)))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_a 
            = (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U] 
                                  >> 7U)))) << 8U) 
               | (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U]));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_b 
            = ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__wide_vs1)
                ? (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data))
                : (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data 
                                      >> 7U)))) << 8U) 
                   | (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data)));
    } else if ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vcsrs0__DOT__csrs
                             [3U] >> 2U)))) {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_a 
            = (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U] 
                                  >> 0xfU)))) << 0x10U) 
               | (0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U]));
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_b 
            = ((IData)(cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__wide_vs1)
                ? vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data
                : (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data)));
        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening)))) {
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__widening))))) {
                VL_WRITEF_NX("[%0t] %%Error: vw_sign_ext.sv:52: Assertion failed in %Ncv32e40x_wrapper.ext.acctop0.arith_stage0.pe3.se0: Trying to quad-widen 16b elements!\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name());
                VL_STOP_MT("/home/thriambak/riscv/ai_vector/cv32e40x-soc/x-ava-core/rtl/vw_sign_ext.sv", 52, "");
            }
        }
    } else {
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_a 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__sign_ext_b 
            = vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data;
    }
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
        VL_EXTENDS_WQ(66,33, __Vtemp_208, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_a);
        __Vtemp_209[0U] = __Vtemp_208[0U];
        __Vtemp_209[1U] = __Vtemp_208[1U];
        __Vtemp_209[2U] = (3U & __Vtemp_208[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp_211, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_b);
        __Vtemp_212[0U] = __Vtemp_211[0U];
        __Vtemp_212[1U] = __Vtemp_211[1U];
        __Vtemp_212[2U] = (3U & __Vtemp_211[2U]);
        VL_MULS_WWW(66, __Vtemp_213, __Vtemp_209, __Vtemp_212);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[0U] 
            = __Vtemp_213[0U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[1U] 
            = __Vtemp_213[1U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[2U] 
            = (3U & __Vtemp_213[2U]);
    } else if ((0xcU == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__pe_op))) {
        VL_EXTENDS_WI(66,8, __Vtemp_216, (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U]));
        __Vtemp_217[0U] = __Vtemp_216[0U];
        __Vtemp_217[1U] = __Vtemp_216[1U];
        __Vtemp_217[2U] = (3U & __Vtemp_216[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_219, (0xffU & vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data));
        __Vtemp_220[0U] = __Vtemp_219[0U];
        __Vtemp_220[1U] = __Vtemp_219[1U];
        __Vtemp_220[2U] = (3U & __Vtemp_219[2U]);
        VL_MULS_WWW(66, __Vtemp_221, __Vtemp_217, __Vtemp_220);
        VL_EXTENDS_WI(66,8, __Vtemp_223, (0xffU & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U] 
                                                   >> 8U)));
        __Vtemp_224[0U] = __Vtemp_223[0U];
        __Vtemp_224[1U] = __Vtemp_223[1U];
        __Vtemp_224[2U] = (3U & __Vtemp_223[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_226, (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data 
                                                   >> 8U)));
        __Vtemp_227[0U] = __Vtemp_226[0U];
        __Vtemp_227[1U] = __Vtemp_226[1U];
        __Vtemp_227[2U] = (3U & __Vtemp_226[2U]);
        VL_MULS_WWW(66, __Vtemp_228, __Vtemp_224, __Vtemp_227);
        VL_ADD_W(3, __Vtemp_229, __Vtemp_221, __Vtemp_228);
        VL_EXTENDS_WI(66,8, __Vtemp_231, (0xffU & (
                                                   vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U] 
                                                   >> 0x10U)));
        __Vtemp_232[0U] = __Vtemp_231[0U];
        __Vtemp_232[1U] = __Vtemp_231[1U];
        __Vtemp_232[2U] = (3U & __Vtemp_231[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_234, (0xffU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data 
                                                   >> 0x10U)));
        __Vtemp_235[0U] = __Vtemp_234[0U];
        __Vtemp_235[1U] = __Vtemp_234[1U];
        __Vtemp_235[2U] = (3U & __Vtemp_234[2U]);
        VL_MULS_WWW(66, __Vtemp_236, __Vtemp_232, __Vtemp_235);
        VL_ADD_W(3, __Vtemp_237, __Vtemp_229, __Vtemp_236);
        VL_EXTENDS_WI(66,8, __Vtemp_239, (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vs2_data[3U] 
                                          >> 0x18U));
        __Vtemp_240[0U] = __Vtemp_239[0U];
        __Vtemp_240[1U] = __Vtemp_239[1U];
        __Vtemp_240[2U] = (3U & __Vtemp_239[2U]);
        VL_EXTENDS_WI(66,8, __Vtemp_242, (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_b_data 
                                          >> 0x18U));
        __Vtemp_243[0U] = __Vtemp_242[0U];
        __Vtemp_243[1U] = __Vtemp_242[1U];
        __Vtemp_243[2U] = (3U & __Vtemp_242[2U]);
        VL_MULS_WWW(66, __Vtemp_244, __Vtemp_240, __Vtemp_243);
        VL_ADD_W(3, __Vtemp_245, __Vtemp_237, __Vtemp_244);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[0U] 
            = __Vtemp_245[0U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[1U] 
            = __Vtemp_245[1U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[2U] 
            = (3U & __Vtemp_245[2U]);
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
        VL_EXTENDS_WQ(66,33, __Vtemp_248, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_a);
        __Vtemp_249[0U] = __Vtemp_248[0U];
        __Vtemp_249[1U] = __Vtemp_248[1U];
        __Vtemp_249[2U] = (3U & __Vtemp_248[2U]);
        VL_EXTENDS_WQ(66,33, __Vtemp_251, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_b);
        __Vtemp_252[0U] = __Vtemp_251[0U];
        __Vtemp_252[1U] = __Vtemp_251[1U];
        __Vtemp_252[2U] = (3U & __Vtemp_251[2U]);
        VL_MULS_WWW(66, __Vtemp_253, __Vtemp_249, __Vtemp_252);
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[0U] 
            = __Vtemp_253[0U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[1U] 
            = __Vtemp_253[1U];
        vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide[2U] 
            = (3U & __Vtemp_253[2U]);
    }
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
    VL_SHIFTRS_WWI(66,66,5, __Vtemp_255, vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__mult_wide, 
                   (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__vdec0__DOT__reg_apu_operands
                             [1U] >> 0x10U)));
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__requant_shifted[0U] 
        = __Vtemp_255[0U];
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__requant_shifted[1U] 
        = __Vtemp_255[1U];
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__requant_shifted[2U] 
        = (3U & __Vtemp_255[2U]);
    __Vtemp_256[0U] = 0x7fU;
    __Vtemp_256[1U] = 0U;
    __Vtemp_256[2U] = 0U;
    __Vtemp_257[0U] = 0xffffff80U;
    __Vtemp_257[1U] = 0xffffffffU;
    __Vtemp_257[2U] = 3U;
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__requant_result 
        = (VL_LTS_IWW(66, __Vtemp_256, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__requant_shifted)
            ? 0x7fU : (VL_GTS_IWW(66, __Vtemp_257, cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__requant_shifted)
                        ? 0xffffff80U : cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3__DOT__requant_shifted[0U]));
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
    cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_final 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT____VdfgRegularize_hdbeb81c0_1_0)
            ? 0U : vlSelfRef.cv32e40x_wrapper__DOT__ext__DOT__acctop0__DOT__arith_stage0__DOT__pe3_out);
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
