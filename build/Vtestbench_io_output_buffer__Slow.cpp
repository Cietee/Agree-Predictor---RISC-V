// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_io_output_buffer.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_io_output_buffer) {
    VL_CELL(__PVT__LEDR_BASEcmp, Vtestbench_comparator);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_io_output_buffer::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_io_output_buffer::~Vtestbench_io_output_buffer() {
}

void Vtestbench_io_output_buffer::_settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_io_output_buffer::_settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp.__PVT__i_signed = 0U;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp.__PVT__i_b = 0x7000U;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__o_output_buffer_data 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__ledr;
}

void Vtestbench_io_output_buffer::_settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_io_output_buffer::_settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__ledr_select 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp.__PVT__o_equal;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__o_io_ledr 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__ledr;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__o_output_buffer_select 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__ledr_select;
}

void Vtestbench_io_output_buffer::_settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_io_output_buffer::_settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__bit_masked_data 
        = ((0U == (IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_bit_mask))
            ? VL_CONCAT_III(32,24,8, (0xffffffU & VL_REPLICATE_IOI(24,1,32,
                                                                   (1U 
                                                                    & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_st_data, 7U)), 0x18U)), 
                            (0xffU & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_st_data, 0U, 8U)))
            : ((1U == (IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_bit_mask))
                ? VL_CONCAT_III(32,16,16, (0xffffU 
                                           & VL_REPLICATE_IOI(16,1,32,
                                                              (1U 
                                                               & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_st_data, 0xfU)), 0x10U)), 
                                (0xffffU & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_st_data, 0U, 0x10U)))
                : ((2U == (IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_bit_mask))
                    ? vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_st_data
                    : 0U)));
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp.__PVT__i_a 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_lsu_addr;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__ledrd 
        = ((IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__ledr_select)
            ? vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__bit_masked_data
            : vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__ledr);
}

void Vtestbench_io_output_buffer::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_io_output_buffer::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__i_lsu_addr = VL_RAND_RESET_I(32);
    __PVT__i_st_data = VL_RAND_RESET_I(32);
    __PVT__i_lsu_wren = VL_RAND_RESET_I(1);
    __PVT__i_bit_mask = VL_RAND_RESET_I(2);
    __PVT__o_io_ledr = VL_RAND_RESET_I(32);
    __PVT__o_output_buffer_data = VL_RAND_RESET_I(32);
    __PVT__o_output_buffer_select = VL_RAND_RESET_I(1);
    __PVT__bit_masked_data = VL_RAND_RESET_I(32);
    __PVT__ledr_select = VL_RAND_RESET_I(1);
    __PVT__ledrd = VL_RAND_RESET_I(32);
    __PVT__ledr = VL_RAND_RESET_I(32);
    __Vdly__ledr = VL_RAND_RESET_I(32);
}
