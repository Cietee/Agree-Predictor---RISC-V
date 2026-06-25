// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_read_result.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_read_result) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_read_result::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_read_result::~Vtestbench_read_result() {
}

void Vtestbench_read_result::_initial__TOP__testbench__readResultUnit__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_read_result::_initial__TOP__testbench__readResultUnit__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__readResultUnit.__PVT__printed = 0U;
}

void Vtestbench_read_result::_settle__TOP__testbench__readResultUnit__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_read_result::_settle__TOP__testbench__readResultUnit__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__readResultUnit.__PVT__o_print_signal 
        = vlSymsp->TOP__testbench__readResultUnit.__PVT__printed;
}

void Vtestbench_read_result::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_read_result::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__i_lsu_addr = VL_RAND_RESET_I(32);
    __PVT__i_lsu_data = VL_RAND_RESET_I(32);
    __PVT__i_lsu_wren = VL_RAND_RESET_I(1);
    __PVT__o_counter = VL_RAND_RESET_Q(64);
    __PVT__o_instr_cnt = VL_RAND_RESET_Q(64);
    __PVT__o_branch_count = VL_RAND_RESET_Q(64);
    __PVT__o_misprediction_cnt = VL_RAND_RESET_Q(64);
    __PVT__o_pc_debug = VL_RAND_RESET_I(32);
    __PVT__o_print_signal = VL_RAND_RESET_I(1);
    __PVT__printed = VL_RAND_RESET_I(1);
    __PVT__result = VL_RAND_RESET_I(32);
    __Vdly__result = VL_RAND_RESET_I(32);
    __Vdly__printed = VL_RAND_RESET_I(1);
}
