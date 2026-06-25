// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_instruction_mem.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_instruction_mem::_combo__TOP__testbench__TAGE__fetch_unit__instruction_memory__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_instruction_mem::_combo__TOP__testbench__TAGE__fetch_unit__instruction_memory__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__instruction_memory.__PVT__o_rdata 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__instruction_memory.__PVT__imem
        [(0xfffU & VL_SEL_IIII(12,32,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__instruction_memory.__PVT__i_raddr, 2U, 0xcU))];
}
