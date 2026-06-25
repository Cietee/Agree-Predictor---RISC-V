// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_agree_predict.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_agree_predict) {
    VL_CELL(__PVT__branch_history_reg, Vtestbench_bhr_module);
    VL_CELL(__PVT__pattern_history_table, Vtestbench_pht_module);
    VL_CELL(__PVT__bias_bit_table, Vtestbench_bbt_module);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_agree_predict::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_agree_predict::~Vtestbench_agree_predict() {
}

void Vtestbench_agree_predict::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_agree_predict::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__i_actual_taken 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_actual_taken;
}

void Vtestbench_agree_predict::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_agree_predict::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__bhr_data 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__bhr_out;
}

void Vtestbench_agree_predict::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_agree_predict::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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

void Vtestbench_agree_predict::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_agree_predict::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__4\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_clk;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_clk;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_clk;
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

void Vtestbench_agree_predict::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_agree_predict::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__5\n"); );
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

void Vtestbench_agree_predict::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_agree_predict::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__i_pc = VL_RAND_RESET_I(32);
    __PVT__i_mispredict_direct = VL_RAND_RESET_I(1);
    __PVT__update_pht_index = VL_RAND_RESET_I(10);
    __PVT__update_bbt_index = VL_RAND_RESET_I(10);
    __PVT__i_update_en = VL_RAND_RESET_I(1);
    __PVT__i_update_taken = VL_RAND_RESET_I(1);
    __PVT__i_update_pc = VL_RAND_RESET_I(32);
    __PVT__o_pht_index = VL_RAND_RESET_I(10);
    __PVT__o_bbt_index = VL_RAND_RESET_I(10);
    __PVT__o_prediction = VL_RAND_RESET_I(1);
    __PVT__actual_agree = VL_RAND_RESET_I(1);
    __PVT__biasing_bit_D = VL_RAND_RESET_I(1);
    __PVT__biasing_bit_E = VL_RAND_RESET_I(1);
    __PVT__bhr_data = VL_RAND_RESET_I(10);
    __PVT__pht_index = VL_RAND_RESET_I(10);
    __PVT__i_update_pht_index = VL_RAND_RESET_I(10);
    __PVT__bbt_index = VL_RAND_RESET_I(10);
    __PVT__i_update_bbt_index = VL_RAND_RESET_I(10);
    __PVT__pht_counter_data = VL_RAND_RESET_I(2);
    __PVT__bias = VL_RAND_RESET_I(1);
    __PVT__pht_is_weak = VL_RAND_RESET_I(1);
    __PVT__agree_bit = VL_RAND_RESET_I(1);
    __Vcellinp__bias_bit_table__i_update_en = VL_RAND_RESET_I(1);
    __PVT__i_actual_taken = VL_RAND_RESET_I(1);
    __Vdly__biasing_bit_D = VL_RAND_RESET_I(1);
    __Vdly__biasing_bit_E = VL_RAND_RESET_I(1);
}
