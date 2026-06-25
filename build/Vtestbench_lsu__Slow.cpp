// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_lsu.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_lsu) {
    VL_CELL(__PVT__memory_block, Vtestbench_data_memory);
    VL_CELL(__PVT__input_buffer_module, Vtestbench_io_input_buffer);
    VL_CELL(__PVT__output_buffer_module, Vtestbench_io_output_buffer);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_lsu::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_lsu::~Vtestbench_lsu() {
}

void Vtestbench_lsu::_settle__TOP__testbench__TAGE__lsu_unit__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_lsu::_settle__TOP__testbench__TAGE__lsu_unit__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__output_buffer_data 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__o_output_buffer_data;
}

void Vtestbench_lsu::_settle__TOP__testbench__TAGE__lsu_unit__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_lsu::_settle__TOP__testbench__TAGE__lsu_unit__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__input_buffer_data 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__o_input_buffer_data;
    vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__input_buffer_select 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__o_input_buffer_select;
    vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__o_io_ledr 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__o_io_ledr;
    vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__output_buffer_select 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__o_output_buffer_select;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_clk;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_clk;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_clk;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_lsu_wren 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_lsu_wren;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_lsu_wren 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_lsu_wren;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_bit_mask 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_bit_mask;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_bit_mask 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_bit_mask;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_st_data 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_st_data;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_st_data 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_st_data;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__i_lsu_addr 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_lsu_addr;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_lsu_addr 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_lsu_addr;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_lsu_addr 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_lsu_addr;
}

void Vtestbench_lsu::_settle__TOP__testbench__TAGE__lsu_unit__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_lsu::_settle__TOP__testbench__TAGE__lsu_unit__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__i_io_sw 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_io_sw;
}

void Vtestbench_lsu::_settle__TOP__testbench__TAGE__lsu_unit__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_lsu::_settle__TOP__testbench__TAGE__lsu_unit__4\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__memory_data 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__o_memory_data;
    vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__memory_select 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__o_memory_select;
    vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__select_out_ld_data 
        = VL_CONCAT_III(4,1,3, (IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__memory_select), 
                        VL_CONCAT_III(3,1,2, (IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__input_buffer_select), 
                                      VL_CONCAT_III(2,1,1, (IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__output_buffer_select), 0U)));
    vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__o_lsu_data 
        = ((8U == (IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__select_out_ld_data))
            ? vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__memory_data
            : ((4U == (IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__select_out_ld_data))
                ? vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__input_buffer_data
                : ((2U == (IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__select_out_ld_data))
                    ? vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__output_buffer_data
                    : vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__memory_data)));
}

void Vtestbench_lsu::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_lsu::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__i_lsu_addr = VL_RAND_RESET_I(32);
    __PVT__i_st_data = VL_RAND_RESET_I(32);
    __PVT__i_lsu_wren = VL_RAND_RESET_I(1);
    __PVT__i_bit_mask = VL_RAND_RESET_I(2);
    __PVT__o_lsu_data = VL_RAND_RESET_I(32);
    __PVT__i_io_sw = VL_RAND_RESET_I(32);
    __PVT__o_io_ledr = VL_RAND_RESET_I(32);
    __PVT__memory_data = VL_RAND_RESET_I(32);
    __PVT__input_buffer_data = VL_RAND_RESET_I(32);
    __PVT__output_buffer_data = VL_RAND_RESET_I(32);
    __PVT__memory_select = VL_RAND_RESET_I(1);
    __PVT__input_buffer_select = VL_RAND_RESET_I(1);
    __PVT__output_buffer_select = VL_RAND_RESET_I(1);
    __PVT__select_out_ld_data = VL_RAND_RESET_I(4);
}
