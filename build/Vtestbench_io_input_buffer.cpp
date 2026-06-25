// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_io_input_buffer.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_io_input_buffer::_combo__TOP__testbench__TAGE__lsu_unit__input_buffer_module__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_io_input_buffer::_combo__TOP__testbench__TAGE__lsu_unit__input_buffer_module__4\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__switch_select 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp.__PVT__o_equal;
}

VL_INLINE_OPT void Vtestbench_io_input_buffer::_sequent__TOP__testbench__TAGE__lsu_unit__input_buffer_module__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_io_input_buffer::_sequent__TOP__testbench__TAGE__lsu_unit__input_buffer_module__5\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__Vdly__switch_mem 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__switch_mem;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__Vdly__switch_mem 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__i_io_sw;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__switch_mem 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__Vdly__switch_mem;
}

VL_INLINE_OPT void Vtestbench_io_input_buffer::_combo__TOP__testbench__TAGE__lsu_unit__input_buffer_module__6(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_io_input_buffer::_combo__TOP__testbench__TAGE__lsu_unit__input_buffer_module__6\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__o_input_buffer_data 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__switch_mem;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__o_input_buffer_select 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__switch_select;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp.__PVT__i_a 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__i_lsu_addr;
}
