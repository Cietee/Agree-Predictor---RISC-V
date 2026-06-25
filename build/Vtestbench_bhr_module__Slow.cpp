// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_bhr_module.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_bhr_module) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_bhr_module::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_bhr_module::~Vtestbench_bhr_module() {
}

void Vtestbench_bhr_module::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bhr_module::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__bhr_out 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__global_bhr;
}

void Vtestbench_bhr_module::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bhr_module::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__i_update_en = VL_RAND_RESET_I(1);
    __PVT__i_actual_taken = VL_RAND_RESET_I(1);
    __PVT__bhr_out = VL_RAND_RESET_I(10);
    __PVT__global_bhr = VL_RAND_RESET_I(10);
    __Vdly__global_bhr = VL_RAND_RESET_I(10);
}
