// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_pht_module.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_pht_module) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_pht_module::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_pht_module::~Vtestbench_pht_module() {
}

void Vtestbench_pht_module::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_pht_module::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__index_pred 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__pht_index;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__o_pht_weak_state 
        = ((1U == vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__pht_counter
            [vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__index_pred]) 
           | (2U == vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__pht_counter
              [vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__index_pred]));
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__o_prediction 
        = (1U & VL_BITSEL_IIII(1,2,1,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__pht_counter
                               [vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__index_pred], 1U));
}

void Vtestbench_pht_module::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_pht_module::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__mis_agree 
        = ((IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__i_update_taken) 
           != (1U & VL_BITSEL_IIII(1,2,1,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__pht_counter
                                   [vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__update_pht_index], 1U)));
}

void Vtestbench_pht_module::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_pht_module::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__pht_index = VL_RAND_RESET_I(10);
    __PVT__o_prediction = VL_RAND_RESET_I(1);
    __PVT__o_pht_weak_state = VL_RAND_RESET_I(1);
    __PVT__i_update_direct_en = VL_RAND_RESET_I(1);
    __PVT__update_pht_index = VL_RAND_RESET_I(10);
    __PVT__i_update_taken = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            __PVT__pht_counter[__Vi0] = VL_RAND_RESET_I(2);
    }}
    __PVT__index_pred = VL_RAND_RESET_I(10);
    __PVT__index_update = VL_RAND_RESET_I(10);
    __PVT__mis_agree = VL_RAND_RESET_I(1);
    __PVT__unnamedblk1__DOT__i = 0;
    __Vdlyvdim0__pht_counter__v0 = 0;
    __Vdlyvval__pht_counter__v0 = VL_RAND_RESET_I(2);
    __Vdlyvset__pht_counter__v0 = 0;
    __Vdlyvdim0__pht_counter__v1 = 0;
    __Vdlyvval__pht_counter__v1 = VL_RAND_RESET_I(2);
    __Vdlyvset__pht_counter__v1 = 0;
}
