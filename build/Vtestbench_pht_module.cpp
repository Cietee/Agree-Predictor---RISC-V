// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_pht_module.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_pht_module::_sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_pht_module::_sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vtemp1;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__Vdlyvset__pht_counter__v0 = 0U;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__Vdlyvset__pht_counter__v1 = 0U;
    if (vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__i_rst_n) {
        if (vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__i_update_direct_en) {
            if (((IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__i_update_taken) 
                 & (3U != vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__pht_counter
                    [vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__update_pht_index]))) {
                vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__Vdlyvval__pht_counter__v0 
                    = (3U & ((IData)(1U) + vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__pht_counter
                             [vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__update_pht_index]));
                vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__Vdlyvset__pht_counter__v0 = 1U;
                vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__Vdlyvdim0__pht_counter__v0 
                    = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__update_pht_index;
            } else {
                if (((IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__i_update_taken) 
                     & (0U != vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__pht_counter
                        [vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__update_pht_index]))) {
                    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__Vdlyvval__pht_counter__v1 
                        = (3U & (vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__pht_counter
                                 [vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__update_pht_index] 
                                 - (IData)(1U)));
                    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__Vdlyvset__pht_counter__v1 = 1U;
                    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__Vdlyvdim0__pht_counter__v1 
                        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__update_pht_index;
                }
            }
        }
    } else {
        vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(1,32,32, 0x400U, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__unnamedblk1__DOT__i)) {
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__pht_counter[(0x3ffU 
                                                                                & VL_SEL_IIII(10,32,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__unnamedblk1__DOT__i, 0U, 0xaU))] = 3U;
            __Vtemp1 = ((IData)(1U) + vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__unnamedblk1__DOT__i);
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__unnamedblk1__DOT__i 
                = __Vtemp1;
        }
    }
    if (vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__Vdlyvset__pht_counter__v0) {
        vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__pht_counter[vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__Vdlyvdim0__pht_counter__v0] 
            = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__Vdlyvval__pht_counter__v0;
    }
    if (vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__Vdlyvset__pht_counter__v1) {
        vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__pht_counter[vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__Vdlyvdim0__pht_counter__v1] 
            = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__Vdlyvval__pht_counter__v1;
    }
}

VL_INLINE_OPT void Vtestbench_pht_module::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_pht_module::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table__4\n"); );
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

VL_INLINE_OPT void Vtestbench_pht_module::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_pht_module::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table__5\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__mis_agree 
        = ((IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__i_update_taken) 
           != (1U & VL_BITSEL_IIII(1,2,1,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__pht_counter
                                   [vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__update_pht_index], 1U)));
}
