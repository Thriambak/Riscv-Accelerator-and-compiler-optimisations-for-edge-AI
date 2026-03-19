// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcv32e40x_wrapper.h for the primary calling header

#include "Vcv32e40x_wrapper__pch.h"
#include "Vcv32e40x_wrapper__Syms.h"
#include "Vcv32e40x_wrapper___024root.h"

extern const VlWide<9>/*287:0*/ Vcv32e40x_wrapper__ConstPool__CONST_hcc08b8db_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vcv32e40x_wrapper__ConstPool__TABLE_hfd8811fc_0;

VL_INLINE_OPT void Vcv32e40x_wrapper___024root___nba_sequent__TOP__2(Vcv32e40x_wrapper___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_wrapper___024root___nba_sequent__TOP__2\n"); );
    Vcv32e40x_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_cmp_result;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_cmp_result = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_clz_data_rev;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_clz_data_rev = 0;
    CData/*5:0*/ cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt = 0;
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
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_10;
    cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_10 = 0;
    CData/*0:0*/ cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_11;
    cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_11 = 0;
    IData/*31:0*/ cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual;
    cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_4_3;
    __VdfgRegularize_hd87f99a1_4_3 = 0;
    SData/*9:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    VlWide<3>/*92:0*/ __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe;
    VL_ZERO_W(93, __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe);
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v2;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v2 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v4;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v4 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v6;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v6 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v8;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v8 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v10;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v10 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v12;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v12 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v14;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v14 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v16;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v16 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v18;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v18 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v20;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v20 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v22;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v22 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v24;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v24 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v26;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v26 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v28;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v28 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v30;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v30 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v32;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v32 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v34;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v34 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v36;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v36 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v38;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v38 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v40;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v40 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v42;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v42 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v44;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v44 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v46;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v46 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v48;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v48 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v50;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v50 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v52;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v52 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v54;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v54 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v56;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v56 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v58;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v58 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v60;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v60 = 0;
    IData/*31:0*/ __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61;
    __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61 = 0;
    CData/*0:0*/ __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v62;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v62 = 0;
    // Body
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v2 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v4 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v6 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v8 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v10 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v12 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v14 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v16 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v18 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v20 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v22 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v24 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v26 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v28 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v30 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v32 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v34 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v36 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v38 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v40 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v42 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v44 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v46 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v48 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v50 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v52 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v54 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v56 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v58 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v60 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61 = 0U;
    __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v62 = 0U;
    __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U];
    __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U];
    __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U];
    if (vlSelfRef.rst_ni) {
        if ((2U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1 = 1U;
        }
        if ((4U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3 = 1U;
        }
        if ((8U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5 = 1U;
        }
        if ((0x10U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7 = 1U;
        }
        if ((0x20U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9 = 1U;
        }
        if ((0x40U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11 = 1U;
        }
        if ((0x80U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13 = 1U;
        }
        if ((0x100U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15 = 1U;
        }
        if ((0x200U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17 = 1U;
        }
        if ((0x400U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19 = 1U;
        }
        if ((0x800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21 = 1U;
        }
        if ((0x1000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23 = 1U;
        }
        if ((0x2000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25 = 1U;
        }
        if ((0x4000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27 = 1U;
        }
        if ((0x8000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29 = 1U;
        }
        if ((0x10000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31 = 1U;
        }
        if ((0x20000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33 = 1U;
        }
        if ((0x40000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35 = 1U;
        }
        if ((0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37 = 1U;
        }
        if ((0x100000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39 = 1U;
        }
        if ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41 = 1U;
        }
        if ((0x400000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43 = 1U;
        }
        if ((0x800000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45 = 1U;
        }
        if ((0x1000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47 = 1U;
        }
        if ((0x2000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49 = 1U;
        }
        if ((0x4000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51 = 1U;
        }
        if ((0x8000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53 = 1U;
        }
        if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55 = 1U;
        }
        if ((0x20000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57 = 1U;
        }
        if ((0x40000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U])) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59 = 1U;
        }
        if ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
             [0U] >> 0x1fU)) {
            __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_wdata_wb
                [0U];
            __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61 = 1U;
        }
        if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_valid) 
             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ready))) {
            __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                = ((0x1fffffU & __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U]) 
                   | ((IData)((0x8000000000ULL | ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
                                                   << 4U) 
                                                  | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_meta_n))))) 
                      << 0x15U));
            __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                = (0x1fffffffU & (((IData)((0x8000000000ULL 
                                            | ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
                                                << 4U) 
                                               | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_meta_n))))) 
                                   >> 0xbU) | ((IData)(
                                                       ((0x8000000000ULL 
                                                         | ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_decompressed 
                                                             << 4U) 
                                                            | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instr_meta_n)))) 
                                                        >> 0x20U)) 
                                               << 0x15U)));
            __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                = ((0xfU & __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U]) 
                   | ((IData)((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) 
                                << 0x11U) | (QData)((IData)(
                                                            ((0x1fffeU 
                                                              & ((IData)(
                                                                         (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                          >> 3U)) 
                                                                 << 1U)) 
                                                             | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn)))))) 
                      << 4U));
            __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                = ((0xffe00000U & __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U]) 
                   | (((IData)((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) 
                                 << 0x11U) | (QData)((IData)(
                                                             ((0x1fffeU 
                                                               & ((IData)(
                                                                          (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                           >> 3U)) 
                                                                  << 1U)) 
                                                              | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn)))))) 
                       >> 0x1cU) | ((IData)(((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) 
                                               << 0x11U) 
                                              | (QData)((IData)(
                                                                ((0x1fffeU 
                                                                  & ((IData)(
                                                                             (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                              >> 3U)) 
                                                                     << 1U)) 
                                                                 | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__illegal_c_insn))))) 
                                             >> 0x20U)) 
                                    << 4U)));
            __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                = ((0xfffffff0U & __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U]) 
                   | ((0xfffffff8U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__tmatch_control_csr_i__DOT__rdata_q 
                                       << 1U) & (((~ 
                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                                                    >> 8U)) 
                                                  & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__tmatch_value_csr_i__DOT__rdata_q 
                                                     == vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) 
                                                 << 3U))) 
                      | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__xif_id)));
        } else if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ready) {
            __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                = (0xfffffffU & __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U]);
        }
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__cnt_q 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__cnt_d;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__divisor_q 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__divisor_d;
        if (((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q)) 
             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q 
                = vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_instr_if.req_payload;
        }
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__state 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__next_state;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__state_q 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__state_n;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__quotient_q 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__quotient_d;
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcause_we) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcause_csr_i__DOT__rdata_q 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcause_n;
        }
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc_next;
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dscratch0_we) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dscratch0_csr_i__DOT__rdata_q 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dscratch1_we) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dscratch1_csr_i__DOT__rdata_q 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mscratch_we) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dpc_we) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dpc_csr_i__DOT__rdata_q 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dpc_n;
        }
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mepc_we) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mepc_n;
        }
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__remainder_q 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__remainder_d;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state_next;
        if ((1U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[0U];
        }
        if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                           >> 1U)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[1U];
        }
        if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                           >> 4U)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[4U];
        }
        if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                           >> 5U)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[5U];
        }
        if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                           >> 6U)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[6U];
        }
        if ((1U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                           >> 7U)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_n[7U];
        }
        if ((1U & (~ (IData)((0xffffffffU == (0xfffffff2U 
                                              | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_n)))))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xffbfU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x40U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events_raw)));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xff7fU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x80U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events_raw)));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xfeffU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x100U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events_raw)));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xfdffU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x200U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events_raw)));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xfbffU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x400U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events_raw)));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xf7ffU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x800U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events_raw)));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xefffU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x1000U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events_raw)));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xdfffU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x2000U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events_raw)));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0xbfffU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x4000U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events_raw)));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
                = ((0x7fffU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events)) 
                   | (0x8000U & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events_raw)));
        }
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns;
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_we) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_n;
        }
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[0U] 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans[0U];
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[1U] 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans[1U];
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[2U] 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__buffer_trans[2U];
        }
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns;
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_we) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_n;
        }
        if ((1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
                    >> 0x1cU) | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_valid) 
                                 & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_ready))))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_trans_addr;
        }
        if ((8U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U])) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q = 0U;
        } else if ((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_valid) 
                     & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__if_ready)) 
                    | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n;
        }
        if ((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_valid) 
              & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready)) 
             & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_split_ex)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event = 1U;
        } else if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                             >> 4U)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event = 0U;
        }
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mie_we) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mie_csr_i__DOT__rdata_q 
                = (0xffff0888U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int);
        }
        if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[0U] 
                      >> 3U)))) {
            if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_head544d3__0 
                    = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_n;
                if ((0x68U >= (0x7fU & ((IData)(0x23U) 
                                        * ((IData)(2U) 
                                           - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))))) {
                    VL_ASSIGNSEL_WQ(105,35,(0x7fU & 
                                            ((IData)(0x23U) 
                                             * ((IData)(2U) 
                                                - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))), vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q, vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_head544d3__0);
                }
            }
        }
        if ((0x10000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr = 0U;
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                = (0xfffffffeU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__branch_addr_n);
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr = 0U;
        } else {
            if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_valid) 
                 & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__if_ready))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr 
                    = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n;
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                    = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n;
            }
            if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr 
                    = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n;
            }
        }
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q 
            = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_single_step)
                ? 4U : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb)
                         ? 2U : ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_13)
                                  ? 1U : 3U)));
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_flush_req_set) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__fencei_flush_req_o = 1U;
        }
        if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__bus_trans_valid) 
             & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_valid) 
                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready))))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__obi_data_req_q = 1U;
        } else if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_valid) 
                    & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__obi_data_req_q = 0U;
        }
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_we) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_n;
        }
        if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid) 
             & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_we_q)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_q 
                = (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__split_q) 
                    | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_split_ex))
                    ? (IData)((vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                               >> 2U)) : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_ext);
        }
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__last_q 
                = (1U & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_split_ex)));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_offset_q 
                = (3U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__addr_int);
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_type_q 
                = (3U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                          << 1U) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
                                    >> 0x1fU)));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_sign_ext_q 
                = (1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
                         >> 0x1eU));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_we_q 
                = (1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                         >> 1U));
        }
        if ((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__resp_valid) 
              & (IData)((vlSymsp->TOP__cv32e40x_wrapper__DOT__core__DOT__m_c_obi_data_if.resp_payload 
                         >> 1U))) & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q)))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q = 1U;
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q 
                = (1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] 
                            >> 9U)));
        } else if ((IData)((0x11000000U == (0x11c00000U 
                                            & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U])))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q = 0U;
        }
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__cnt_q 
            = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__next_cnt;
        if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_1) 
             & (0x7a1U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                      << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                  >> 0x15U)))))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__tmatch_control_csr_i__DOT__rdata_q 
                = (0x28001040U | (4U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int));
        }
        if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_2_1) 
             & (0x7a2U == (0xfffU & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                                      << 0xbU) | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                                                  >> 0x15U)))))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__tmatch_value_csr_i__DOT__rdata_q 
                = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_en_gated) {
            if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__ctrl_update) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__split_q 
                    = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_split_ex;
            }
        } else {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__split_q = 0U;
        }
        if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_valid) 
             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                = (0x800U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U]);
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] 
                = ((0x1ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U]) 
                   | (0x200U & (((~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_illegal) 
                                     | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_split_ex))) 
                                 << 9U) & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                           >> 2U))));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
                = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U]) 
                   | (0x100000U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                   << 0x12U)));
            if ((0x800U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U])) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] 
                    = ((0x20fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U]) 
                       | (0x1f0U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                    >> 2U)));
                if ((1U & (~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                              >> 2U)))) {
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                        = ((0xfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U]) 
                           | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__rf_wdata_ex 
                              << 4U));
                    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] 
                        = ((0x3f0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U]) 
                           | (0x3ffU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__rf_wdata_ex 
                                        >> 0x1cU)));
                }
            }
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                = ((0xfffffff7U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U]) 
                   | (8U & (((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_illegal)) 
                             << 3U) & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                       >> 2U))));
            if ((0x20U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U])) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
                    = ((0x1fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U]) 
                       | ((IData)((((QData)((IData)(
                                                    (3U 
                                                     & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                                        >> 3U)))) 
                                    << 0x2cU) | (((QData)((IData)(
                                                                  (0xfffU 
                                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                                      >> 0x13U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                     << 0xdU) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                       >> 0x13U))))))) 
                          << 0x15U));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] 
                    = (((IData)((((QData)((IData)((3U 
                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                                      >> 3U)))) 
                                  << 0x2cU) | (((QData)((IData)(
                                                                (0xfffU 
                                                                 & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                                    >> 0x13U)))) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                   << 0xdU) 
                                                                  | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                     >> 0x13U))))))) 
                        >> 0xbU) | ((IData)(((((QData)((IData)(
                                                               (3U 
                                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                                                   >> 3U)))) 
                                               << 0x2cU) 
                                              | (((QData)((IData)(
                                                                  (0xfffU 
                                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                                      >> 0x13U)))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                     << 0xdU) 
                                                                    | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                       >> 0x13U)))))) 
                                             >> 0x20U)) 
                                    << 0x15U));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
                    = ((0xfffffff8U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U]) 
                       | ((IData)(((((QData)((IData)(
                                                     (3U 
                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                                         >> 3U)))) 
                                     << 0x2cU) | (((QData)((IData)(
                                                                   (0xfffU 
                                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                                                       >> 0x13U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                                                                      << 0xdU) 
                                                                     | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                                                                        >> 0x13U)))))) 
                                   >> 0x20U)) >> 0xbU));
            }
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                = ((0xfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U]) 
                   | ((0xffff0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U]) 
                      | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__instr_meta_n) 
                         << 0xcU)));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[1U] 
                = (((0xfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[1U]) 
                    | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__instr_meta_n) 
                       >> 0x14U)) | ((0xf000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[1U]) 
                                     | (0xffff0000U 
                                        & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[1U])));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
                = ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U]) 
                   | ((0xfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U]) 
                      | ((0xf000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U]) 
                         | (0x70000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U]))));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                = ((0xfffff9ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U]) 
                   | (0xfffffe00U & ((0x400U & ((0xfffffc00U 
                                                 & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U]) 
                                                | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_illegal) 
                                                   << 0xaU))) 
                                     | (0x200U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U]))));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                = ((0xfffffe0fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U]) 
                   | (0x1f0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U]));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
                = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U]) 
                   | (0x80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U]));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                = ((0xfffffff0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U]) 
                   | (0xfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U]));
        } else if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__wb_ready) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                = (0xfffff7ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U]);
        }
        if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_valid) 
             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_ready))) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
                = (0x800U | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U]);
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                = ((0x1ffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U]) 
                   | (0x3ffffffU & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__alu_en) 
                                    << 0x19U)));
            if (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__alu_en) 
                 | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__lsu_en))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                    = ((0x7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U]) 
                       | (((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__op_c_mux_sel))
                            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_b_fw
                            : ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__op_c_mux_sel))
                                ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target
                                : 0U)) << 0x13U));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                    = ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U]) 
                       | (((1U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__op_c_mux_sel))
                            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_b_fw
                            : ((2U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__op_c_mux_sel))
                                ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target
                                : 0U)) >> 0xdU));
            }
            if (((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__alu_en) 
                   | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__div_en)) 
                  | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_en_id)) 
                 | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__lsu_en))) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                    = ((0x7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U]) 
                       | ((IData)((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_a)) 
                                    << 0x20U) | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_b)))) 
                          << 0x13U));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
                    = (((IData)((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_a)) 
                                  << 0x20U) | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_b)))) 
                        >> 0xdU) | ((IData)(((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_a)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_b))) 
                                             >> 0x20U)) 
                                    << 0x13U));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
                    = ((0x2000000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U]) 
                       | (0x3ffffffU & (((IData)(((
                                                   ((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_a)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_b))) 
                                                  >> 0x20U)) 
                                         >> 0xdU) | 
                                        (((0x10U & 
                                           vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U])
                                           ? 0x13U : 
                                          (0x3fU & (IData)(
                                                           (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                            >> 0x2aU)))) 
                                         << 0x13U))));
            }
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                = ((0xffffbfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U]) 
                   | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__div_en) 
                      << 0xeU));
            if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__div_en) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                    = ((0xffffcfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U]) 
                       | (((0x10U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U])
                            ? 0U : (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                  >> 0x1bU)))) 
                          << 0xcU));
            }
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                = ((0xfffbffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U]) 
                   | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__mul_en) 
                      << 0x12U));
            if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__mul_en) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                    = ((0x7fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U]) 
                       | ((IData)((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_b)) 
                                    << 2U) | (QData)((IData)(
                                                             ((0x10U 
                                                               & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U])
                                                               ? 0U
                                                               : 
                                                              (3U 
                                                               & (IData)(
                                                                         (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                                          >> 0x1eU)))))))) 
                          << 0xfU));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[4U] 
                    = ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[4U]) 
                       | (((IData)((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_b)) 
                                     << 2U) | (QData)((IData)(
                                                              ((0x10U 
                                                                & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U])
                                                                ? 0U
                                                                : 
                                                               (3U 
                                                                & (IData)(
                                                                          (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                                           >> 0x1eU)))))))) 
                           >> 0x11U) | ((IData)(((((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_b)) 
                                                   << 2U) 
                                                  | (QData)((IData)(
                                                                    ((0x10U 
                                                                      & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U])
                                                                      ? 0U
                                                                      : 
                                                                     (3U 
                                                                      & (IData)(
                                                                                (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                                                >> 0x1eU))))))) 
                                                 >> 0x20U)) 
                                        << 0xfU)));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[4U] 
                    = ((0x1ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[4U]) 
                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_a 
                          << 0x11U));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                    = ((0xfffe0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U]) 
                       | (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__operand_a 
                          >> 0xfU));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
                    = ((0xfffdffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U]) 
                       | (0x20000U & (((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                                           >> 4U)) 
                                       & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                  >> 0x20U))) 
                                      << 0x11U)));
            }
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                = ((0xfffff7ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U]) 
                   | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__rf_we) 
                      << 0xbU));
            if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__rf_we) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                    = ((0xfffff83fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U]) 
                       | (0x7c0U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                    << 3U)));
            }
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                = ((0xffffffc3U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U]) 
                   | (0xfffffffcU & (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__csr_en_id) 
                                      << 5U) | ((((1U 
                                                   & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U])
                                                    ? 0U
                                                    : 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                               >> 0x15U))))) 
                                                 << 3U) 
                                                | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__lsu_en) 
                                                   << 2U)))));
            if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__lsu_en) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
                    = ((0x8fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U]) 
                       | (0xf0000000U & ((0x40000000U 
                                          & (((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                                                  >> 4U)) 
                                              & (IData)(
                                                        (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                         >> 0x10U))) 
                                             << 0x1eU)) 
                                         | (((0x10U 
                                              & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U])
                                              ? 0U : 
                                             (3U & (IData)(
                                                           (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                            >> 0xeU)))) 
                                            << 0x1cU))));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
                    = ((0x7fffffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U]) 
                       | (((0x10U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U])
                            ? 0U : (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                  >> 0x11U)))) 
                          << 0x1fU));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                    = ((0xfffffffeU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U]) 
                       | (((0x10U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U])
                            ? 0U : (3U & (IData)((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                  >> 0x11U)))) 
                          >> 1U));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                    = ((0xfffffffdU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U]) 
                       | (2U & (((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                                     >> 4U)) & (IData)(
                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                        >> 0x13U))) 
                                << 1U)));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
                    = ((0xf01fffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U]) 
                       | (0xffe00000U & ((((0x10U & 
                                            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U])
                                            ? 0U : 
                                           (0x3fU & (IData)(
                                                            (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                             >> 8U)))) 
                                          << 0x16U) 
                                         | (0x200000U 
                                            & ((0xffe00000U 
                                                & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                                                   << 0x11U)) 
                                               | ((IData)(
                                                          (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                           >> 7U)) 
                                                  << 0x15U))))));
            }
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
                = ((0xffefffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U]) 
                   | ((3U == (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_transfer_insn_id)) 
                      << 0x14U));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[1U] 
                = ((0x7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[1U]) 
                   | (0xfff80000U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                                      << 0x1eU) | (0x3ff80000U 
                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                                                      >> 2U)))));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
                = ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U]) 
                   | (0x7ffffU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                                  >> 2U)));
            if ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
                    = ((0x3ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U]) 
                       | ((IData)((((QData)((IData)(
                                                    (0xffffU 
                                                     & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                                                        >> 5U)))) 
                                    << 1U) | (QData)((IData)(
                                                             (1U 
                                                              & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                                                                 >> 0x1bU)))))) 
                          << 0x12U));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[1U] 
                    = ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[1U]) 
                       | (((IData)((((QData)((IData)(
                                                     (0xffffU 
                                                      & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                                                         >> 5U)))) 
                                     << 1U) | (QData)((IData)(
                                                              (1U 
                                                               & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                                                                  >> 0x1bU)))))) 
                           >> 0xeU) | ((IData)(((((QData)((IData)(
                                                                  (0xffffU 
                                                                   & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                                                                      >> 5U)))) 
                                                  << 1U) 
                                                 | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                                                                       >> 0x1bU))))) 
                                                >> 0x20U)) 
                                       << 0x12U)));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
                    = ((0xfffcffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U]) 
                       | (0x30000U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
                                      >> 9U)));
            } else {
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
                    = ((0xffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U]) 
                       | ((IData)((0x7ffffffffULL & 
                                   (((QData)((IData)(
                                                     vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) 
                                     << 7U) | ((QData)((IData)(
                                                               vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) 
                                               >> 0x19U)))) 
                          << 0x10U));
                vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[1U] 
                    = ((0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[1U]) 
                       | (((IData)((0x7ffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) 
                                        << 7U) | ((QData)((IData)(
                                                                  vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) 
                                                  >> 0x19U)))) 
                           >> 0x10U) | ((IData)(((0x7ffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U])) 
                                                      << 7U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U])) 
                                                        >> 0x19U))) 
                                                 >> 0x20U)) 
                                        << 0x10U)));
            }
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
                = ((0xffff0fffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U]) 
                   | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__instr_meta_n) 
                      << 0xcU));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
                = ((0xfffff9ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U]) 
                   | (0xfffffe00U & ((((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__illegal_insn) 
                                       & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__xif_insn_accept))) 
                                      << 0xaU) | (0x200U 
                                                  & (((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp)) 
                                                      & ((~ 
                                                          (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                                                           >> 4U)) 
                                                         & (IData)(
                                                                   (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                                    >> 3U)))) 
                                                     << 9U)))));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
                = ((0xfffffe1fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U]) 
                   | (0xffffffe0U & (((0x100U & (((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp)) 
                                                  & ((~ 
                                                      (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                                                       >> 4U)) 
                                                     & (IData)(
                                                               (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                                >> 1U)))) 
                                                 << 8U)) 
                                      | (0x80U & ((
                                                   (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp)) 
                                                   & ((~ 
                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                                                        >> 4U)) 
                                                      & (IData)(
                                                                (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                                 >> 2U)))) 
                                                  << 7U))) 
                                     | ((0x40U & ((
                                                   (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp)) 
                                                   & ((~ 
                                                       (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                                                        >> 4U)) 
                                                      & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec))) 
                                                  << 6U)) 
                                        | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__mret_insn_id) 
                                           << 5U)))));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
                = ((0xffffffe0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U]) 
                   | ((0x10U & (((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_byp)) 
                                 & ((~ (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                                        >> 4U)) & (IData)(
                                                          (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux_subdec 
                                                           >> 5U)))) 
                                << 4U)) | (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__xif_insn_accept) 
                                            << 3U) 
                                           | (7U & 
                                              vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U]))));
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
                = ((0xfff7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U]) 
                   | (0x80000U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
                                  << 0x10U)));
        } else if (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_ready) {
            vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
                = (0xfffff7ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U]);
        }
    } else {
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v2 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v4 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v6 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v8 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v10 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v12 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v14 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v16 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v18 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v20 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v22 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v24 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v26 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v28 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v30 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v32 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v34 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v36 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v38 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v40 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v42 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v44 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v46 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v48 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v50 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v52 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v54 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v56 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v58 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v60 = 1U;
        __VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v62 = 1U;
        __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] = 0U;
        __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] = 0U;
        __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__cnt_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__divisor_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q = 6ULL;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__state = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__mpu_i__DOT__state_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__quotient_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcause_csr_i__DOT__rdata_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc = 0ULL;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dscratch0_csr_i__DOT__rdata_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dscratch1_csr_i__DOT__rdata_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dpc_csr_i__DOT__rdata_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__remainder_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_state = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U] = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U] = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U] = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U] = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U] = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U] = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
            = (0xffbfU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
            = (0xff7fU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
            = (0xfeffU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
            = (0xfdffU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
            = (0xfbffU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
            = (0xf7ffU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
            = (0xefffU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
            = (0xdfffU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
            = (0xbfffU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events 
            = (0x7fffU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__hpm_events));
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs = 1U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__last_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mtvec_csr_i__DOT__rdata_q = 1U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[0U] = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[1U] = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[2U] = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q = 0x1800U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mie_csr_i__DOT__rdata_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[0U] = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[1U] = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[2U] = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[3U] = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__fencei_flush_req_o = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__obi_data_req_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q = 0x40000003U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_type_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_sign_ext_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__rdata_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__cnt_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__tmatch_control_csr_i__DOT__rdata_q = 0x28001040U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__tmatch_value_csr_i__DOT__rdata_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__split_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__lsu_we_q = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
            = (0xfffff7ffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U]);
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
            = (0xfU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U]);
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
            = (0xfffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U]);
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[1U] = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
            = (0xfff80000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U]);
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
            = (0xfffff80fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U]);
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
            = (0x7ffffU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U]);
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[3U] = 0U;
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U] 
            = (0xfffffff0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[4U]);
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
            = (0xfffffff0U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U]);
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
            = Vcv32e40x_wrapper__ConstPool__CONST_hcc08b8db_0[0U];
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[1U] 
            = Vcv32e40x_wrapper__ConstPool__CONST_hcc08b8db_0[1U];
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[2U] 
            = Vcv32e40x_wrapper__ConstPool__CONST_hcc08b8db_0[2U];
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
            = Vcv32e40x_wrapper__ConstPool__CONST_hcc08b8db_0[3U];
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[4U] 
            = Vcv32e40x_wrapper__ConstPool__CONST_hcc08b8db_0[4U];
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[5U] 
            = Vcv32e40x_wrapper__ConstPool__CONST_hcc08b8db_0[5U];
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
            = Vcv32e40x_wrapper__ConstPool__CONST_hcc08b8db_0[6U];
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
            = Vcv32e40x_wrapper__ConstPool__CONST_hcc08b8db_0[7U];
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U] 
            = Vcv32e40x_wrapper__ConstPool__CONST_hcc08b8db_0[8U];
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__comp_inv_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__comp_inv_d));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__x_ext__DOT__xif_rejected_q 
        = ((IData)(vlSelfRef.rst_ni) && ((~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_valid) 
                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_ready))) 
                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__xif_insn_reject)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__x_ext__DOT__xif_accepted_q 
        = ((IData)(vlSelfRef.rst_ni) && ((~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_valid) 
                                             & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_ready))) 
                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__xif_insn_accept)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__res_inv_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__res_inv_d));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_rem_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_rem_d));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[3U] 
        = ((0xffff0000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_q[3U]) 
           | ((IData)(vlSelfRef.rst_ni) ? (0xffffU 
                                           & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mhpmevent_n[3U])
               : 0U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q 
        = ((IData)(vlSelfRef.rst_ni) && ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_valid) 
                                         & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__if_ready)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xfffffffeU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | (1U & ((~ (IData)(vlSelfRef.rst_ni)) | vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_n)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_q 
        = ((0xfffffff3U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
           | ((8U & (((~ (IData)(vlSelfRef.rst_ni)) 
                      << 3U) | (0xfffffff8U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_n))) 
              | (4U & (((~ (IData)(vlSelfRef.rst_ni)) 
                        << 2U) | (0xfffffffcU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mcountinhibit_n)))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_q = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q = 0U;
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0U] = 0U;
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[1U] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v1;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v2) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[1U] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[2U] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v3;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v4) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[2U] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[3U] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v5;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v6) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[3U] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[4U] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v7;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v8) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[4U] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[5U] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v9;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v10) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[5U] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[6U] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v11;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v12) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[6U] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[7U] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v13;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v14) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[7U] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[8U] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v15;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v16) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[8U] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[9U] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v17;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v18) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[9U] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xaU] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v19;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v20) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xaU] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xbU] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v21;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v22) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xbU] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xcU] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v23;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v24) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xcU] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xdU] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v25;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v26) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xdU] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xeU] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v27;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v28) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xeU] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xfU] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v29;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v30) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0xfU] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x10U] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v31;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v32) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x10U] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x11U] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v33;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v34) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x11U] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x12U] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v35;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v36) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x12U] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x13U] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v37;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v38) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x13U] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x14U] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v39;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v40) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x14U] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x15U] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v41;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v42) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x15U] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x16U] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v43;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v44) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x16U] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x17U] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v45;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v46) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x17U] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x18U] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v47;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v48) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x18U] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x19U] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v49;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v50) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x19U] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1aU] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v51;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v52) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1aU] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1bU] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v53;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v54) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1bU] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1cU] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v55;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v56) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1cU] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1dU] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v57;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v58) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1dU] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1eU] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v59;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v60) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1eU] = 0U;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1fU] 
            = __VdlyVal__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v61;
    }
    if (__VdlySet__cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem__v62) {
        vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem[0x1fU] = 0U;
    }
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__next_state));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__res_mux 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_rem_q)
            ? vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__remainder_q
            : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__quotient_q);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_0_0 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
           - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q));
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
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2 
        = ((2U > (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
            ? (3U & ((IData)(1U) + (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
            : 0U);
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_3_1 
        = ((2U >= (3U & ((IData)(2U) - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
           && (1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                     >> (3U & ((IData)(2U) - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))));
    cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_local_qual 
        = (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__mie_csr_i__DOT__rdata_q 
           & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__int_controller_i__DOT__irq_q);
    cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_11 
        = (1U & (~ ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q) 
                    | (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__fencei_flush_req_o))));
    __VdfgRegularize_hd87f99a1_4_3 = (1U & (~ (IData)(
                                                      (4U 
                                                       == 
                                                       (0x804U 
                                                        & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q)))));
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
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h38f4209b_3_6 
        = ((2U >= (3U & ((IData)(2U) - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)))) 
           && (1U & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                     >> (3U & ((IData)(2U) - (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))))));
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
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U] 
        = ((0x7ffffe1fU & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ctrl_fsm[2U]) 
           | (0x7fffffe0U & (((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                              << 8U) | ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q) 
                                        << 5U))));
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
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_waddr_wb[0U] 
        = (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] 
                    >> 4U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb 
        = (IData)((0x810U == (0x810U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__wfi_in_wb 
        = (IData)((0x900U == (0x900U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb 
        = (IData)((0x840U == (0x840U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb 
        = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
            >> 0xbU) & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] 
                        >> 9U));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb 
        = (1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
                  >> 0x13U) & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                               >> 0xbU)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb 
        = (IData)((0xa00U == (0xa00U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U])));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_valid_wb 
        = (1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[2U] 
                  >> 0x14U) & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[0U] 
                               >> 0xbU)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_13 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
           & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
              & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__dcsr_csr_i__DOT__rdata_q 
                 >> 0xfU)));
    cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_10 
        = (1U & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__lsu_valid_wb)) 
                 & (~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__obi_data_req_q))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U] 
        = __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[0U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U] 
        = __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[1U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
        = __Vdly__cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_allowed 
        = ((IData)(cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_11) 
           & (IData)(cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_10));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed 
        = ((IData)(cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_10) 
           & ((~ (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
              & (IData)(cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_h12c5834c_0_11)));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_stage_i__DOT__imm_i_type 
        = (((- (IData)((1U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                              >> 0x1bU)))) << 0xcU) 
           | (0xfffU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                        >> 0x10U)));
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
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_rdata_id[0U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [(0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                   >> 0xbU))];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__regfile_rdata_id[1U] 
        = vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [(0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                   >> 0x10U))];
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jr_match 
        = (((0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_wb_pipe[5U] 
                      >> 4U)) == (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                           >> 0xbU))) 
           & (0U != (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                              >> 0xbU))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_rem 
        = ((3U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                         >> 0xcU))) | (2U == (3U & 
                                              (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                               >> 0xcU))));
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift = 0U;
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_signed 
        = ((1U == (3U & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                         >> 0xcU))) | (3U == (3U & 
                                              (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                                               >> 0xcU))));
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
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_en 
        = (1U & ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                  >> 0xeU) & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[0U] 
                              >> 0xbU)));
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
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_jr_match 
        = (((0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[3U] 
                      >> 6U)) == (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                                           >> 0xbU))) 
           & (0U != (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__if_id_pipe[2U] 
                              >> 0xbU))));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h75e42caa__0 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_nmi) 
           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hb14c1f80__0 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_interrupt) 
           & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_allowed));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__op_b_is_neg 
        = ((vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[7U] 
            >> 0x12U) & (IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_i__DOT__div_signed));
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
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_hc2f9a3b9__0 
        = ((IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
           | (IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal));
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT__csr_raddr 
        = ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__cs_registers_i__DOT____VdfgRegularize_h10f084ee_1_2)
            ? (0xfffU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                         >> 0x13U)) : 0U);
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
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = (((QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb)) 
            << 0x20U) | (QData)((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_aa)));
    cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt 
        = (0x3fU & ((IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_en)
                     ? (0x1fU & (IData)(vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__div_clz_result))
                     : ((0x200000U & vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[8U])
                         ? (- (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                        >> 0x13U)))
                         : (0x1fU & (vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__id_ex_pipe[6U] 
                                     >> 0x13U)))));
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
    vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_acc_res 
        = (0x1ffffffffULL & ((IData)(cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__mulh_shift)
                              ? (0x3ffffffffULL & VL_SHIFTRS_QQI(34,34,32, vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__result, 0x10U))
                              : vlSelfRef.cv32e40x_wrapper__DOT__core__DOT__ex_stage_i__DOT__mult_i__DOT__result));
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
}
