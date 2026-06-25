// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_branch_prediction_top.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_branch_prediction_top::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_branch_prediction_top::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__5\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__i_clk;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__i_clk;
}

VL_INLINE_OPT void Vtestbench_branch_prediction_top::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__6(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_branch_prediction_top::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__6\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__i_pc 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__i_pc;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_pc 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__i_pc;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellinp__agree_unit__update_bbt_index 
        = VL_EXTEND_II(10,7, (IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__update_bbt_index));
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellinp__agree_unit__update_pht_index 
        = VL_EXTEND_II(10,8, (IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__update_pht_index));
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__update_bbt_index 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellinp__agree_unit__update_bbt_index;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__update_pht_index 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellinp__agree_unit__update_pht_index;
}

VL_INLINE_OPT void Vtestbench_branch_prediction_top::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__7(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_branch_prediction_top::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__7\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellout__agree_unit__o_bbt_index 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__o_bbt_index;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellout__agree_unit__o_pht_index 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__o_pht_index;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellout__btb_unit__o_btb_hit 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__o_btb_hit;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellout__btb_unit__o_target_pc 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__o_target_pc;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__o_bbt_index 
        = (0xffU & VL_SEL_IIII(8,10,32,32, (IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellout__agree_unit__o_bbt_index), 0U, 8U));
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__o_pht_index 
        = (0x7fU & VL_SEL_IIII(7,10,32,32, (IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellout__agree_unit__o_pht_index), 0U, 7U));
    VL_ASSIGNBIT_QI(1,0U, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__o_branch_predict_bus, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellout__btb_unit__o_btb_hit);
    VL_ASSIGNSEL_QIII(32,1U, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__o_branch_predict_bus, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellout__btb_unit__o_target_pc);
}

VL_INLINE_OPT void Vtestbench_branch_prediction_top::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__8(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_branch_prediction_top::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__8\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellout__agree_unit__o_prediction 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__o_prediction;
    VL_ASSIGNBIT_QI(1,0x21U, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__o_branch_predict_bus, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellout__agree_unit__o_prediction);
}

VL_INLINE_OPT void Vtestbench_branch_prediction_top::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__9(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_branch_prediction_top::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__9\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellinp__btb_unit__i_update_target_pc 
        = VL_SEL_IWII(32,68,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__i_branch_predict_bus, 2U, 0x20U);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellinp__btb_unit__i_update_target_en 
        = (1U & (VL_BITSEL_IWII(1,68,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__i_branch_predict_bus, 0U) 
                 & VL_BITSEL_IWII(1,68,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__i_branch_predict_bus, 0x43U)));
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellinp__btb_unit__i_update_pc 
        = VL_SEL_IWII(32,68,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__i_branch_predict_bus, 0x23U, 0x20U);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellinp__agree_unit__i_update_pc 
        = VL_SEL_IWII(32,68,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__i_branch_predict_bus, 0x23U, 0x20U);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellinp__agree_unit__i_mispredict_direct 
        = (1U & VL_BITSEL_IWII(1,68,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__i_branch_predict_bus, 1U));
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellinp__agree_unit__i_update_taken 
        = (1U & VL_BITSEL_IWII(1,68,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__i_branch_predict_bus, 0x22U));
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellinp__agree_unit__i_update_en 
        = (1U & VL_BITSEL_IWII(1,68,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__i_branch_predict_bus, 0x43U));
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__i_update_target_pc 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellinp__btb_unit__i_update_target_pc;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__i_update_target_en 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellinp__btb_unit__i_update_target_en;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__i_update_pc 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellinp__btb_unit__i_update_pc;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_update_pc 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellinp__agree_unit__i_update_pc;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_mispredict_direct 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellinp__agree_unit__i_mispredict_direct;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_update_taken 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellinp__agree_unit__i_update_taken;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_update_en 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__Vcellinp__agree_unit__i_update_en;
}
