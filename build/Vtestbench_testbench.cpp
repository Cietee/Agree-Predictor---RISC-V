// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_testbench.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_testbench::_combo__TOP__testbench__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtestbench_testbench::_combo__TOP__testbench__5\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__scoreboard.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench.i_rst_n;
    vlSymsp->TOP__testbench__TAGE.__PVT__i_rst_n = vlSymsp->TOP__testbench.i_rst_n;
    vlSymsp->TOP__testbench__scoreboard.__PVT__i_clk 
        = vlSymsp->TOP__testbench.i_clk;
    vlSymsp->TOP__testbench__readResultUnit.__PVT__i_clk 
        = vlSymsp->TOP__testbench.i_clk;
    vlSymsp->TOP__testbench__driverUnit.__PVT__i_clk 
        = vlSymsp->TOP__testbench.i_clk;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__i_clk 
        = vlSymsp->TOP__testbench.i_clk;
    vlSymsp->TOP__testbench__TAGE.__PVT__i_clk = vlSymsp->TOP__testbench.i_clk;
}

VL_INLINE_OPT void Vtestbench_testbench::_sequent__TOP__testbench__7(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtestbench_testbench::_sequent__TOP__testbench__7\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench.__Vcellout__readResultUnit__o_print_signal 
        = vlSymsp->TOP__testbench__readResultUnit.__PVT__o_print_signal;
    vlSymsp->TOP__testbench.o_print_signal = VL_EXTEND_QI(64,1, (IData)(vlSymsp->TOP__testbench.__Vcellout__readResultUnit__o_print_signal));
}

VL_INLINE_OPT void Vtestbench_testbench::_sequent__TOP__testbench__8(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtestbench_testbench::_sequent__TOP__testbench__8\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench.__PVT__i_io_sw = vlSymsp->TOP__testbench__driverUnit.__PVT__i_io_sw;
    vlSymsp->TOP__testbench__scoreboard.__PVT__i_io_sw 
        = vlSymsp->TOP__testbench.__PVT__i_io_sw;
    vlSymsp->TOP__testbench__TAGE.__PVT__i_io_sw = vlSymsp->TOP__testbench.__PVT__i_io_sw;
}

VL_INLINE_OPT void Vtestbench_testbench::_sequent__TOP__testbench__9(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtestbench_testbench::_sequent__TOP__testbench__9\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench.o_misprediction_cnt = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_misprediction_cnt;
    vlSymsp->TOP__testbench.o_branch_count = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_branch_count;
    vlSymsp->TOP__testbench.o_counter = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_counter;
    vlSymsp->TOP__testbench.o_instr_cnt = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_instr_cnt;
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

VL_INLINE_OPT void Vtestbench_testbench::_sequent__TOP__testbench__10(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtestbench_testbench::_sequent__TOP__testbench__10\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench.__PVT__o_misprediction 
        = vlSymsp->TOP__testbench__TAGE.__PVT__o_misprediction;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_misprediction 
        = vlSymsp->TOP__testbench.__PVT__o_misprediction;
}

VL_INLINE_OPT void Vtestbench_testbench::_combo__TOP__testbench__11(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtestbench_testbench::_combo__TOP__testbench__11\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__readResultUnit.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench.i_rst_n;
    vlSymsp->TOP__testbench__driverUnit.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench.i_rst_n;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench.i_rst_n;
}

VL_INLINE_OPT void Vtestbench_testbench::_combo__TOP__testbench__12(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtestbench_testbench::_combo__TOP__testbench__12\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench.__PVT__o_io_ledr = vlSymsp->TOP__testbench__TAGE.__PVT__o_io_ledr;
    vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr 
        = vlSymsp->TOP__testbench.__PVT__o_io_ledr;
}

VL_INLINE_OPT void Vtestbench_testbench::_combo__TOP__testbench__13(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtestbench_testbench::_combo__TOP__testbench__13\n"); );
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
