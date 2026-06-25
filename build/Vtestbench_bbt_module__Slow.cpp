// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_bbt_module.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_bbt_module) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_bbt_module::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_bbt_module::~Vtestbench_bbt_module() {
}

void Vtestbench_bbt_module::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bbt_module::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__biasing_bit_out 
        = (1U & VL_BITSEL_IIII(1,2,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__bbt_table
                               [vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__bbt_index], 1U));
}

void Vtestbench_bbt_module::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bbt_module::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__bbt_index = VL_RAND_RESET_I(10);
    __PVT__update_bbt_index = VL_RAND_RESET_I(10);
    __PVT__biasing_bit_out = VL_RAND_RESET_I(1);
    __PVT__i_update_en = VL_RAND_RESET_I(1);
    __PVT__i_actual_taken = VL_RAND_RESET_I(1);
    __PVT__pht_is_weak = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            __PVT__bbt_table[__Vi0] = VL_RAND_RESET_I(2);
    }}
    __PVT__unnamedblk1__DOT__i = 0;
    __Vdlyvdim0__bbt_table__v0 = 0;
    __Vdlyvlsb__bbt_table__v0 = 0;
    __Vdlyvval__bbt_table__v0 = VL_RAND_RESET_I(1);
    __Vdlyvset__bbt_table__v0 = 0;
    __Vdlyvdim0__bbt_table__v1 = 0;
    __Vdlyvlsb__bbt_table__v1 = 0;
}
