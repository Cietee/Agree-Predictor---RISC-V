// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_testbench.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_testbench) {
    VL_CELL(__PVT__driverUnit, Vtestbench_driver);
    VL_CELL(__PVT__TAGE, Vtestbench_top_riscv);
    VL_CELL(__PVT__cycleCountUnit, Vtestbench_cycle_count);
    VL_CELL(__PVT__readResultUnit, Vtestbench_read_result);
    VL_CELL(__PVT__scoreboard, Vtestbench_scoreboard);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_testbench::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_testbench::~Vtestbench_testbench() {
}

void Vtestbench_testbench::_settle__TOP__testbench__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtestbench_testbench::_settle__TOP__testbench__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench.__PVT__o_misprediction 
        = vlSymsp->TOP__testbench__TAGE.__PVT__o_misprediction;
    vlSymsp->TOP__testbench__scoreboard.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench.i_rst_n;
    vlSymsp->TOP__testbench__TAGE.__PVT__i_rst_n = vlSymsp->TOP__testbench.i_rst_n;
    vlSymsp->TOP__testbench__driverUnit.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench.i_rst_n;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench.i_rst_n;
    vlSymsp->TOP__testbench__readResultUnit.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench.i_rst_n;
    vlSymsp->TOP__testbench__scoreboard.__PVT__i_clk 
        = vlSymsp->TOP__testbench.i_clk;
    vlSymsp->TOP__testbench__readResultUnit.__PVT__i_clk 
        = vlSymsp->TOP__testbench.i_clk;
    vlSymsp->TOP__testbench__driverUnit.__PVT__i_clk 
        = vlSymsp->TOP__testbench.i_clk;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__i_clk 
        = vlSymsp->TOP__testbench.i_clk;
    vlSymsp->TOP__testbench__TAGE.__PVT__i_clk = vlSymsp->TOP__testbench.i_clk;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_misprediction 
        = vlSymsp->TOP__testbench.__PVT__o_misprediction;
}

void Vtestbench_testbench::_settle__TOP__testbench__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtestbench_testbench::_settle__TOP__testbench__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench.__PVT__i_io_sw = vlSymsp->TOP__testbench__driverUnit.__PVT__i_io_sw;
    vlSymsp->TOP__testbench.o_misprediction_cnt = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_misprediction_cnt;
    vlSymsp->TOP__testbench.o_branch_count = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_branch_count;
    vlSymsp->TOP__testbench.o_counter = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_counter;
    vlSymsp->TOP__testbench.o_instr_cnt = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_instr_cnt;
    vlSymsp->TOP__testbench__scoreboard.__PVT__i_io_sw 
        = vlSymsp->TOP__testbench.__PVT__i_io_sw;
    vlSymsp->TOP__testbench__TAGE.__PVT__i_io_sw = vlSymsp->TOP__testbench.__PVT__i_io_sw;
    vlSymsp->TOP__testbench__readResultUnit.__PVT__o_misprediction_cnt 
        = vlSymsp->TOP__testbench.o_misprediction_cnt;
    vlSymsp->TOP__testbench__readResultUnit.__PVT__o_branch_count 
        = vlSymsp->TOP__testbench.o_branch_count;
    vlSymsp->TOP__testbench__readResultUnit.__PVT__o_counter 
        = vlSymsp->TOP__testbench.o_counter;
    vlSymsp->TOP__testbench__scoreboard.__PVT__o_counter 
        = vlSymsp->TOP__testbench.o_counter;
    vlSymsp->TOP__testbench__readResultUnit.__PVT__o_instr_cnt 
        = vlSymsp->TOP__testbench.o_instr_cnt;
    vlSymsp->TOP__testbench__scoreboard.__PVT__o_instr_cnt 
        = vlSymsp->TOP__testbench.o_instr_cnt;
}

void Vtestbench_testbench::_settle__TOP__testbench__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtestbench_testbench::_settle__TOP__testbench__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench.__PVT__o_io_ledr = vlSymsp->TOP__testbench__TAGE.__PVT__o_io_ledr;
    vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr 
        = vlSymsp->TOP__testbench.__PVT__o_io_ledr;
}

void Vtestbench_testbench::_settle__TOP__testbench__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtestbench_testbench::_settle__TOP__testbench__4\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench.o_EXMEM_instruction = vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_instruction;
    vlSymsp->TOP__testbench.o_lsu_addr = vlSymsp->TOP__testbench__TAGE.__PVT__o_lsu_addr;
    vlSymsp->TOP__testbench.o_lsu_data = vlSymsp->TOP__testbench__TAGE.__PVT__o_lsu_data;
    vlSymsp->TOP__testbench.o_lsu_wren = vlSymsp->TOP__testbench__TAGE.__PVT__o_lsu_wren;
    vlSymsp->TOP__testbench.__PVT__o_pc_debug = vlSymsp->TOP__testbench__TAGE.__PVT__o_pc_debug;
    vlSymsp->TOP__testbench.o_instr_vld = vlSymsp->TOP__testbench__TAGE.__PVT__o_instr_vld;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_EXMEM_instruction 
        = vlSymsp->TOP__testbench.o_EXMEM_instruction;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__i_lsu_addr 
        = vlSymsp->TOP__testbench.o_lsu_addr;
    vlSymsp->TOP__testbench__readResultUnit.__PVT__i_lsu_addr 
        = vlSymsp->TOP__testbench.o_lsu_addr;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__i_lsu_data 
        = vlSymsp->TOP__testbench.o_lsu_data;
    vlSymsp->TOP__testbench__readResultUnit.__PVT__i_lsu_data 
        = vlSymsp->TOP__testbench.o_lsu_data;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__i_lsu_wren 
        = vlSymsp->TOP__testbench.o_lsu_wren;
    vlSymsp->TOP__testbench__readResultUnit.__PVT__i_lsu_wren 
        = vlSymsp->TOP__testbench.o_lsu_wren;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_pc_debug 
        = vlSymsp->TOP__testbench.__PVT__o_pc_debug;
    vlSymsp->TOP__testbench__readResultUnit.__PVT__o_pc_debug 
        = vlSymsp->TOP__testbench.__PVT__o_pc_debug;
    vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug 
        = vlSymsp->TOP__testbench.__PVT__o_pc_debug;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_instr_vld 
        = vlSymsp->TOP__testbench.o_instr_vld;
    vlSymsp->TOP__testbench__scoreboard.__PVT__o_instr_vld 
        = vlSymsp->TOP__testbench.o_instr_vld;
}

void Vtestbench_testbench::_settle__TOP__testbench__6(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtestbench_testbench::_settle__TOP__testbench__6\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench.__Vcellout__readResultUnit__o_print_signal 
        = vlSymsp->TOP__testbench__readResultUnit.__PVT__o_print_signal;
    vlSymsp->TOP__testbench.o_print_signal = VL_EXTEND_QI(64,1, (IData)(vlSymsp->TOP__testbench.__Vcellout__readResultUnit__o_print_signal));
}

void Vtestbench_testbench::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtestbench_testbench::_ctor_var_reset\n"); );
    // Body
    i_clk = VL_RAND_RESET_I(1);
    i_rst_n = VL_RAND_RESET_I(1);
    o_EXMEM_instruction = VL_RAND_RESET_I(32);
    o_instr_vld = VL_RAND_RESET_I(1);
    o_misprediction_cnt = VL_RAND_RESET_Q(64);
    o_instr_cnt = VL_RAND_RESET_Q(64);
    o_counter = VL_RAND_RESET_Q(64);
    o_branch_count = VL_RAND_RESET_Q(64);
    o_print_signal = VL_RAND_RESET_Q(64);
    o_lsu_addr = VL_RAND_RESET_I(32);
    o_lsu_data = VL_RAND_RESET_I(32);
    o_lsu_wren = VL_RAND_RESET_I(1);
    __PVT__i_io_sw = VL_RAND_RESET_I(32);
    __PVT__o_io_ledr = VL_RAND_RESET_I(32);
    __PVT__o_misprediction = VL_RAND_RESET_I(1);
    __PVT__o_pc_debug = VL_RAND_RESET_I(32);
    __Vcellout__readResultUnit__o_print_signal = VL_RAND_RESET_I(1);
}
