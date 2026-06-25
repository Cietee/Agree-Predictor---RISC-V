// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_bbt_module.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_bbt_module::_sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bbt_module::_sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vtemp1;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__Vdlyvset__bbt_table__v0 = 0U;
    if (vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__i_rst_n) {
        if (vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__i_update_en) {
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__Vdlyvval__bbt_table__v0 
                = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__i_actual_taken;
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__Vdlyvset__bbt_table__v0 = 1U;
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__Vdlyvlsb__bbt_table__v0 = 1U;
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__Vdlyvdim0__bbt_table__v0 
                = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__update_bbt_index;
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__Vdlyvlsb__bbt_table__v1 = 0U;
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__Vdlyvdim0__bbt_table__v1 
                = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__update_bbt_index;
        }
    } else {
        vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(1,32,32, 0x400U, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__unnamedblk1__DOT__i)) {
            VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__bbt_table
                            [(0x3ffU & VL_SEL_IIII(10,32,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__unnamedblk1__DOT__i, 0U, 0xaU))], 0U);
            VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__bbt_table
                            [(0x3ffU & VL_SEL_IIII(10,32,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__unnamedblk1__DOT__i, 0U, 0xaU))], 0U);
            __Vtemp1 = ((IData)(1U) + vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__unnamedblk1__DOT__i);
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__unnamedblk1__DOT__i 
                = __Vtemp1;
        }
    }
    if (vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__Vdlyvset__bbt_table__v0) {
        VL_ASSIGNBIT_II(1,vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__Vdlyvlsb__bbt_table__v0, 
                        vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__bbt_table
                        [vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__Vdlyvdim0__bbt_table__v0], vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__Vdlyvval__bbt_table__v0);
        VL_ASSIGNBIT_IO(1,vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__Vdlyvlsb__bbt_table__v1, 
                        vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__bbt_table
                        [vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__Vdlyvdim0__bbt_table__v1], 1U);
    }
}

VL_INLINE_OPT void Vtestbench_bbt_module::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bbt_module::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__biasing_bit_out 
        = (1U & VL_BITSEL_IIII(1,2,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__bbt_table
                               [vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__bbt_index], 1U));
}
