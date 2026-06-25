// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_scoreboard.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_scoreboard) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_scoreboard::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_scoreboard::~Vtestbench_scoreboard() {
}

void Vtestbench_scoreboard::_settle__TOP__testbench__scoreboard__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_scoreboard::_settle__TOP__testbench__scoreboard__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__scoreboard.__PVT__pc_debug 
        = ((IData)(vlSymsp->TOP__testbench__scoreboard.__PVT__o_instr_vld)
            ? vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug
            : 0U);
}

void Vtestbench_scoreboard::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_scoreboard::_ctor_var_reset\n"); );
    // Body
    __PVT__i_io_sw = VL_RAND_RESET_I(32);
    __PVT__o_io_ledr = VL_RAND_RESET_I(32);
    __PVT__o_pc_debug = VL_RAND_RESET_I(32);
    __PVT__o_instr_vld = VL_RAND_RESET_I(1);
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__o_counter = VL_RAND_RESET_Q(64);
    __PVT__o_instr_cnt = VL_RAND_RESET_Q(64);
    __PVT__pc_debug = VL_RAND_RESET_I(32);
    __PVT__instr_vld = VL_RAND_RESET_I(1);
}
