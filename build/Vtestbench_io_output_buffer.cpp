// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_io_output_buffer.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_io_output_buffer::_combo__TOP__testbench__TAGE__lsu_unit__output_buffer_module__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_io_output_buffer::_combo__TOP__testbench__TAGE__lsu_unit__output_buffer_module__4\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__ledr_select 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp.__PVT__o_equal;
}

VL_INLINE_OPT void Vtestbench_io_output_buffer::_sequent__TOP__testbench__TAGE__lsu_unit__output_buffer_module__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_io_output_buffer::_sequent__TOP__testbench__TAGE__lsu_unit__output_buffer_module__5\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__Vdly__ledr 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__ledr;
    if (vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_rst_n) {
        if (vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_lsu_wren) {
            vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__Vdly__ledr 
                = vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__ledrd;
        }
    } else {
        vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__Vdly__ledr = 0U;
    }
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__ledr 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__Vdly__ledr;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__o_output_buffer_data 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__ledr;
}

VL_INLINE_OPT void Vtestbench_io_output_buffer::_combo__TOP__testbench__TAGE__lsu_unit__output_buffer_module__6(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_io_output_buffer::_combo__TOP__testbench__TAGE__lsu_unit__output_buffer_module__6\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__o_io_ledr 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__ledr;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__o_output_buffer_select 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__ledr_select;
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
