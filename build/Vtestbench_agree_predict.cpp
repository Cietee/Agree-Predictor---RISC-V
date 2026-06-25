// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_agree_predict.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_agree_predict::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__6(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_agree_predict::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__6\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_clk;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_clk;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_clk;
}

VL_INLINE_OPT void Vtestbench_agree_predict::_sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__7(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_agree_predict::_sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__7\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__Vdly__biasing_bit_D 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__biasing_bit_D;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__Vdly__biasing_bit_E 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__biasing_bit_E;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__Vdly__biasing_bit_D 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__bias;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__Vdly__biasing_bit_E 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__biasing_bit_D;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__biasing_bit_D 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__Vdly__biasing_bit_D;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__biasing_bit_E 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__Vdly__biasing_bit_E;
}

VL_INLINE_OPT void Vtestbench_agree_predict::_sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__8(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_agree_predict::_sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__8\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__bhr_data 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__bhr_out;
}

VL_INLINE_OPT void Vtestbench_agree_predict::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__9(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_agree_predict::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__9\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__bbt_index 
        = (0x3ffU & VL_SEL_IIII(10,32,5,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_pc, 2U, 0xaU));
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__pht_index 
        = (0x3ffU & (VL_SEL_IIII(10,32,5,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_pc, 2U, 0xaU) 
                     ^ (IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__bhr_data)));
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__update_bbt_index 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__update_bbt_index;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__update_pht_index 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__update_pht_index;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__o_bbt_index 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__bbt_index;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__bbt_index 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__bbt_index;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__o_pht_index 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__pht_index;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__pht_index 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__pht_index;
}

VL_INLINE_OPT void Vtestbench_agree_predict::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__10(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_agree_predict::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__10\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__bias 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__biasing_bit_out;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__pht_is_weak 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__o_pht_weak_state;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__agree_bit 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__o_prediction;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__pht_is_weak 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__pht_is_weak;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__o_prediction 
        = (1U & ((IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__agree_bit)
                  ? (IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__bias)
                  : (~ (IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__bias))));
}

VL_INLINE_OPT void Vtestbench_agree_predict::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__11(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_agree_predict::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__11\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_update_bbt_index 
        = (0x3ffU & VL_SEL_IIII(10,32,5,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_update_pc, 2U, 0xaU));
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_update_pht_index 
        = (0x3ffU & (VL_SEL_IIII(10,32,5,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_update_pc, 2U, 0xaU) 
                     ^ (IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__bhr_data)));
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__i_actual_taken 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_update_taken;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__i_update_en 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_update_en;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__i_update_direct_en 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_update_en;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__Vcellinp__bias_bit_table__i_update_en 
        = ((IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_update_en) 
           & (IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_mispredict_direct));
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__actual_agree 
        = (((IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_update_taken) 
            == (IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__biasing_bit_E)) 
           & (IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_update_en));
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__i_update_en 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__Vcellinp__bias_bit_table__i_update_en;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__i_update_taken 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__actual_agree;
}
