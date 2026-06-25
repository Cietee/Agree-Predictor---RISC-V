// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_block_WRITE_BACK.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_block_WRITE_BACK::_combo__TOP__testbench__TAGE__writeback_unit__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_WRITE_BACK::_combo__TOP__testbench__TAGE__writeback_unit__4\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__writeback_unit__mask_module.__PVT__i_data 
        = vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__i_lsu_data;
    vlSymsp->TOP__testbench__TAGE__writeback_unit__mask_module.__PVT__i_signed_flag 
        = vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__i_signed_op;
    vlSymsp->TOP__testbench__TAGE__writeback_unit__mask_module.__PVT__i_bit_mask 
        = vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__i_bit_mask;
    vlSymsp->TOP__testbench__TAGE__writeback_unit__PCplus4.__PVT__i_a 
        = vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__i_pc;
}

VL_INLINE_OPT void Vtestbench_block_WRITE_BACK::_combo__TOP__testbench__TAGE__writeback_unit__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_WRITE_BACK::_combo__TOP__testbench__TAGE__writeback_unit__5\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__lsu_data 
        = vlSymsp->TOP__testbench__TAGE__writeback_unit__mask_module.__PVT__o_data;
    vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__pc4 
        = vlSymsp->TOP__testbench__TAGE__writeback_unit__PCplus4.__PVT__o_sum;
    vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__o_wb_data 
        = ((0U == (IData)(vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__i_wb_sel))
            ? vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__pc4
            : ((1U == (IData)(vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__i_wb_sel))
                ? vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__i_alu_data
                : ((2U == (IData)(vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__i_wb_sel))
                    ? vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__lsu_data
                    : 0U)));
}
