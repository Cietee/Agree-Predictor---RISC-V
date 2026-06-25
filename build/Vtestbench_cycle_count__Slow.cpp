// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_cycle_count.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_cycle_count) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_cycle_count::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_cycle_count::~Vtestbench_cycle_count() {
}

void Vtestbench_cycle_count::_settle__TOP__testbench__cycleCountUnit__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_cycle_count::_settle__TOP__testbench__cycleCountUnit__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_counter 
        = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__counter;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_instr_cnt 
        = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__instruction_count;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_misprediction_cnt 
        = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__misprediction_count;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_branch_count 
        = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__branch_count;
}

void Vtestbench_cycle_count::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_cycle_count::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__o_instr_vld = VL_RAND_RESET_I(1);
    __PVT__o_EXMEM_instruction = VL_RAND_RESET_I(32);
    __PVT__o_misprediction = VL_RAND_RESET_I(1);
    __PVT__i_lsu_addr = VL_RAND_RESET_I(32);
    __PVT__i_lsu_data = VL_RAND_RESET_I(32);
    __PVT__i_lsu_wren = VL_RAND_RESET_I(1);
    __PVT__o_counter = VL_RAND_RESET_Q(64);
    __PVT__o_instr_cnt = VL_RAND_RESET_Q(64);
    __PVT__o_branch_count = VL_RAND_RESET_Q(64);
    __PVT__o_misprediction_cnt = VL_RAND_RESET_Q(64);
    __PVT__o_pc_debug = VL_RAND_RESET_I(32);
    __PVT__counter = VL_RAND_RESET_Q(64);
    __PVT__instruction_count = VL_RAND_RESET_Q(64);
    __PVT__misprediction_count = VL_RAND_RESET_Q(64);
    __PVT__branch_count = VL_RAND_RESET_Q(64);
    __Vdly__counter = VL_RAND_RESET_Q(64);
    __Vdly__branch_count = VL_RAND_RESET_Q(64);
    __Vdly__instruction_count = VL_RAND_RESET_Q(64);
    __Vdly__misprediction_count = VL_RAND_RESET_Q(64);
}
