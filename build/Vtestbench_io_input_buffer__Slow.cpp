// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_io_input_buffer.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_io_input_buffer) {
    VL_CELL(__PVT__SWITCH_BASEcmp, Vtestbench_comparator);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_io_input_buffer::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_io_input_buffer::~Vtestbench_io_input_buffer() {
}

void Vtestbench_io_input_buffer::_settle__TOP__testbench__TAGE__lsu_unit__input_buffer_module__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_io_input_buffer::_settle__TOP__testbench__TAGE__lsu_unit__input_buffer_module__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp.__PVT__i_signed = 0U;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp.__PVT__i_b = 0x7800U;
}

void Vtestbench_io_input_buffer::_settle__TOP__testbench__TAGE__lsu_unit__input_buffer_module__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_io_input_buffer::_settle__TOP__testbench__TAGE__lsu_unit__input_buffer_module__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__switch_select 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp.__PVT__o_equal;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__o_input_buffer_data 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__switch_mem;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__o_input_buffer_select 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__switch_select;
}

void Vtestbench_io_input_buffer::_settle__TOP__testbench__TAGE__lsu_unit__input_buffer_module__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_io_input_buffer::_settle__TOP__testbench__TAGE__lsu_unit__input_buffer_module__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp.__PVT__i_a 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__i_lsu_addr;
}

void Vtestbench_io_input_buffer::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_io_input_buffer::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__i_lsu_addr = VL_RAND_RESET_I(32);
    __PVT__i_io_sw = VL_RAND_RESET_I(32);
    __PVT__o_input_buffer_data = VL_RAND_RESET_I(32);
    __PVT__o_input_buffer_select = VL_RAND_RESET_I(1);
    __PVT__switch_select = VL_RAND_RESET_I(1);
    __PVT__switch_mem = VL_RAND_RESET_I(32);
    __Vdly__switch_mem = VL_RAND_RESET_I(32);
}
