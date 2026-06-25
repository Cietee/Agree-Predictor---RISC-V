// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_block_WRITE_BACK.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_block_WRITE_BACK) {
    VL_CELL(__PVT__mask_module, Vtestbench_sign_extend);
    VL_CELL(__PVT__PCplus4, Vtestbench_full_adder_nbit);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_block_WRITE_BACK::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_block_WRITE_BACK::~Vtestbench_block_WRITE_BACK() {
}

void Vtestbench_block_WRITE_BACK::_settle__TOP__testbench__TAGE__writeback_unit__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_WRITE_BACK::_settle__TOP__testbench__TAGE__writeback_unit__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__writeback_unit__PCplus4.__PVT__i_b = 4U;
}

void Vtestbench_block_WRITE_BACK::_settle__TOP__testbench__TAGE__writeback_unit__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_WRITE_BACK::_settle__TOP__testbench__TAGE__writeback_unit__2\n"); );
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

void Vtestbench_block_WRITE_BACK::_settle__TOP__testbench__TAGE__writeback_unit__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_WRITE_BACK::_settle__TOP__testbench__TAGE__writeback_unit__3\n"); );
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

void Vtestbench_block_WRITE_BACK::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_WRITE_BACK::_ctor_var_reset\n"); );
    // Body
    __PVT__i_lsu_data = VL_RAND_RESET_I(32);
    __PVT__i_bit_mask = VL_RAND_RESET_I(2);
    __PVT__i_signed_op = VL_RAND_RESET_I(1);
    __PVT__i_wb_sel = VL_RAND_RESET_I(2);
    __PVT__i_alu_data = VL_RAND_RESET_I(32);
    __PVT__i_pc = VL_RAND_RESET_I(32);
    __PVT__o_wb_data = VL_RAND_RESET_I(32);
    __PVT__pc4 = VL_RAND_RESET_I(32);
    __PVT__lsu_data = VL_RAND_RESET_I(32);
}
