// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_lsu.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_lsu::_combo__TOP__testbench__TAGE__lsu_unit__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_lsu::_combo__TOP__testbench__TAGE__lsu_unit__5\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_clk;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_clk;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_clk;
}

VL_INLINE_OPT void Vtestbench_lsu::_sequent__TOP__testbench__TAGE__lsu_unit__6(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_lsu::_sequent__TOP__testbench__TAGE__lsu_unit__6\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__output_buffer_data 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__o_output_buffer_data;
}

VL_INLINE_OPT void Vtestbench_lsu::_combo__TOP__testbench__TAGE__lsu_unit__7(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_lsu::_combo__TOP__testbench__TAGE__lsu_unit__7\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_lsu_wren 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_lsu_wren;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_lsu_wren 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_lsu_wren;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_lsu_addr 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_lsu_addr;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__i_io_sw 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_io_sw;
}

VL_INLINE_OPT void Vtestbench_lsu::_combo__TOP__testbench__TAGE__lsu_unit__8(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_lsu::_combo__TOP__testbench__TAGE__lsu_unit__8\n"); );
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
}

VL_INLINE_OPT void Vtestbench_lsu::_combo__TOP__testbench__TAGE__lsu_unit__9(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_lsu::_combo__TOP__testbench__TAGE__lsu_unit__9\n"); );
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
