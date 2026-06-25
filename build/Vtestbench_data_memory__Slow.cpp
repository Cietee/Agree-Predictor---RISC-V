// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_data_memory.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_data_memory) {
    VL_CELL(__PVT__MEM_BASEcmp, Vtestbench_comparator);
    VL_CELL(__PVT__MEM_RANGEcmp, Vtestbench_comparator);
    VL_CELL(__PVT__MemPlus1, Vtestbench_full_adder_nbit);
    VL_CELL(__PVT__MemPlus2, Vtestbench_full_adder_nbit);
    VL_CELL(__PVT__MemPlus3, Vtestbench_full_adder_nbit);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_data_memory::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_data_memory::~Vtestbench_data_memory() {
}

void Vtestbench_data_memory::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_data_memory::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp.__PVT__i_signed = 0U;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp.__PVT__i_signed = 0U;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp.__PVT__i_b = 0U;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp.__PVT__i_b = 0x3fffU;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1.__PVT__i_b = 1U;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2.__PVT__i_b = 2U;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3.__PVT__i_b = 3U;
}

void Vtestbench_data_memory::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_data_memory::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__mem_base_eq 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp.__PVT__o_equal;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__mem_range_eq 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp.__PVT__o_equal;
}

void Vtestbench_data_memory::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_data_memory::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__3\n"); );
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

void Vtestbench_data_memory::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_data_memory::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__4\n"); );
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

void Vtestbench_data_memory::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_data_memory::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__i_lsu_addr = VL_RAND_RESET_I(32);
    __PVT__i_st_data = VL_RAND_RESET_I(32);
    __PVT__i_lsu_wren = VL_RAND_RESET_I(1);
    __PVT__i_bit_mask = VL_RAND_RESET_I(2);
    __PVT__o_memory_data = VL_RAND_RESET_I(32);
    __PVT__o_memory_select = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            __PVT__memory[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __PVT__mem_base_eq = VL_RAND_RESET_I(1);
    __PVT__mem_base_gt = VL_RAND_RESET_I(1);
    __PVT__mem_range_lt = VL_RAND_RESET_I(1);
    __PVT__mem_range_eq = VL_RAND_RESET_I(1);
    __PVT__mem_select = VL_RAND_RESET_I(1);
    __PVT__bit_masked_data = VL_RAND_RESET_I(32);
    __PVT__addr1 = VL_RAND_RESET_I(32);
    __PVT__addr2 = VL_RAND_RESET_I(32);
    __PVT__addr3 = VL_RAND_RESET_I(32);
    __PVT__unnamedblk1__DOT__i = 0;
    __Vdlyvdim0__memory__v0 = 0;
    __Vdlyvval__memory__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__memory__v0 = 0;
    __Vdlyvdim0__memory__v1 = 0;
    __Vdlyvval__memory__v1 = VL_RAND_RESET_I(8);
    __Vdlyvdim0__memory__v2 = 0;
    __Vdlyvval__memory__v2 = VL_RAND_RESET_I(8);
    __Vdlyvdim0__memory__v3 = 0;
    __Vdlyvval__memory__v3 = VL_RAND_RESET_I(8);
}
