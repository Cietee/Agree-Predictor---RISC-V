// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_data_memory.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_data_memory::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_data_memory::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__5\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__mem_base_eq 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp.__PVT__o_equal;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__mem_range_eq 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp.__PVT__o_equal;
}

VL_INLINE_OPT void Vtestbench_data_memory::_sequent__TOP__testbench__TAGE__lsu_unit__memory_block__6(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_data_memory::_sequent__TOP__testbench__TAGE__lsu_unit__memory_block__6\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vtemp1;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__Vdlyvset__memory__v0 = 0U;
    if (vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_rst_n) {
        if (((IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_lsu_wren) 
             & (IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__mem_select))) {
            vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__Vdlyvval__memory__v0 
                = (0xffU & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__bit_masked_data, 0U, 8U));
            vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__Vdlyvset__memory__v0 = 1U;
            vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__Vdlyvdim0__memory__v0 
                = (0x3fffU & VL_SEL_IIII(14,32,32,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_lsu_addr, 0U, 0xeU));
            vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__Vdlyvval__memory__v1 
                = (0xffU & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__bit_masked_data, 8U, 8U));
            vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__Vdlyvdim0__memory__v1 
                = (0x3fffU & VL_SEL_IIII(14,32,32,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__addr1, 0U, 0xeU));
            vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__Vdlyvval__memory__v2 
                = (0xffU & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__bit_masked_data, 0x10U, 8U));
            vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__Vdlyvdim0__memory__v2 
                = (0x3fffU & VL_SEL_IIII(14,32,32,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__addr2, 0U, 0xeU));
            vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__Vdlyvval__memory__v3 
                = (0xffU & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__bit_masked_data, 0x18U, 8U));
            vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__Vdlyvdim0__memory__v3 
                = (0x3fffU & VL_SEL_IIII(14,32,32,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__addr3, 0U, 0xeU));
        }
    } else {
        vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(1,32,32, 0x4000U, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__unnamedblk1__DOT__i)) {
            vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__memory[(0x3fffU 
                                                                                & VL_SEL_IIII(14,32,32,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__unnamedblk1__DOT__i, 0U, 0xeU))] = 0U;
            __Vtemp1 = ((IData)(1U) + vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__unnamedblk1__DOT__i);
            vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__unnamedblk1__DOT__i 
                = __Vtemp1;
        }
    }
    if (vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__Vdlyvset__memory__v0) {
        vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__memory[vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__Vdlyvdim0__memory__v0] 
            = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__Vdlyvval__memory__v0;
        vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__memory[vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__Vdlyvdim0__memory__v1] 
            = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__Vdlyvval__memory__v1;
        vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__memory[vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__Vdlyvdim0__memory__v2] 
            = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__Vdlyvval__memory__v2;
        vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__memory[vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__Vdlyvdim0__memory__v3] 
            = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__Vdlyvval__memory__v3;
    }
}

VL_INLINE_OPT void Vtestbench_data_memory::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__7(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_data_memory::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__7\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp.__PVT__i_a 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_lsu_addr;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp.__PVT__i_a 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_lsu_addr;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1.__PVT__i_a 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_lsu_addr;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2.__PVT__i_a 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_lsu_addr;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3.__PVT__i_a 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_lsu_addr;
}

VL_INLINE_OPT void Vtestbench_data_memory::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__8(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_data_memory::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__8\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__mem_base_gt 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp.__PVT__o_lessthan;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__mem_range_lt 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp.__PVT__o_lessthan;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__addr1 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1.__PVT__o_sum;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__addr2 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2.__PVT__o_sum;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__addr3 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3.__PVT__o_sum;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__mem_select 
        = ((((~ (IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__mem_base_gt)) 
             & (IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__mem_range_lt)) 
            | (IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__mem_base_eq)) 
           | (IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__mem_range_eq));
    if ((0U == (IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_bit_mask))) {
        VL_ASSIGNSEL_IIII(8,0U, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__bit_masked_data, 
                          (0xffU & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_st_data, 0U, 8U)));
        VL_ASSIGNSEL_IIII(8,8U, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__bit_masked_data, 
                          vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__memory
                          [(0x3fffU & VL_SEL_IIII(14,32,32,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__addr1, 0U, 0xeU))]);
        VL_ASSIGNSEL_IIII(8,0x10U, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__bit_masked_data, 
                          vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__memory
                          [(0x3fffU & VL_SEL_IIII(14,32,32,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__addr2, 0U, 0xeU))]);
        VL_ASSIGNSEL_IIII(8,0x18U, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__bit_masked_data, 
                          vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__memory
                          [(0x3fffU & VL_SEL_IIII(14,32,32,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__addr3, 0U, 0xeU))]);
    } else {
        if ((1U == (IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_bit_mask))) {
            VL_ASSIGNSEL_IIII(8,0U, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__bit_masked_data, 
                              (0xffU & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_st_data, 0U, 8U)));
            VL_ASSIGNSEL_IIII(8,8U, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__bit_masked_data, 
                              (0xffU & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_st_data, 8U, 8U)));
            VL_ASSIGNSEL_IIII(8,0x10U, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__bit_masked_data, 
                              vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__memory
                              [(0x3fffU & VL_SEL_IIII(14,32,32,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__addr2, 0U, 0xeU))]);
            VL_ASSIGNSEL_IIII(8,0x18U, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__bit_masked_data, 
                              vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__memory
                              [(0x3fffU & VL_SEL_IIII(14,32,32,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__addr3, 0U, 0xeU))]);
        } else {
            vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__bit_masked_data 
                = ((2U == (IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_bit_mask))
                    ? vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_st_data
                    : 0U);
        }
    }
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__o_memory_data 
        = VL_CONCAT_III(32,8,24, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__memory
                        [(0x3fffU & VL_SEL_IIII(14,32,32,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__addr3, 0U, 0xeU))], 
                        VL_CONCAT_III(24,8,16, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__memory
                                      [(0x3fffU & VL_SEL_IIII(14,32,32,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__addr2, 0U, 0xeU))], 
                                      VL_CONCAT_III(16,8,8, 
                                                    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__memory
                                                    [
                                                    (0x3fffU 
                                                     & VL_SEL_IIII(14,32,32,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__addr1, 0U, 0xeU))], 
                                                    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__memory
                                                    [
                                                    (0x3fffU 
                                                     & VL_SEL_IIII(14,32,32,32, vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_lsu_addr, 0U, 0xeU))])));
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__o_memory_select 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__mem_select;
}
