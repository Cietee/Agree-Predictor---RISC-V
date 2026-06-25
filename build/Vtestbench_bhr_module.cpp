// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_bhr_module.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_bhr_module::_sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bhr_module::_sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__Vdly__global_bhr 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__global_bhr;
    if (vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__i_rst_n) {
        if (vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__i_update_en) {
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__Vdly__global_bhr 
                = VL_CONCAT_III(10,9,1, (0x1ffU & VL_SEL_IIII(9,10,4,32, (IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__global_bhr), 0U, 9U)), (IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__i_actual_taken));
        }
    } else {
        vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__Vdly__global_bhr = 0U;
    }
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__global_bhr 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__Vdly__global_bhr;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__bhr_out 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__global_bhr;
}
