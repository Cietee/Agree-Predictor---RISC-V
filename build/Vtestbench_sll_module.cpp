// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_sll_module.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_sll_module::_combo__TOP__testbench__TAGE__execute_unit__alu_module__sll_module__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_sll_module::_combo__TOP__testbench__TAGE__execute_unit__alu_module__sll_module__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vtemp5;
    IData/*31:0*/ __Vtemp6;
    IData/*31:0*/ __Vtemp7;
    IData/*31:0*/ __Vtemp8;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage[0U] 
        = ((1U & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__i_imme), 0U))
            ? VL_CONCAT_III(32,31,1, (0x7fffffffU & 
                                      VL_SEL_IIII(31,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__i_data, 0U, 0x1fU)), 0U)
            : vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__i_data);
    __Vtemp5 = ((1U & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__i_imme), 1U))
                 ? VL_CONCAT_III(32,30,2, (0x3fffffffU 
                                           & VL_SEL_IIII(30,32,5,32, 
                                                         vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage
                                                         [0U], 0U, 0x1eU)), 0U)
                 : vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage
                [0U]);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage[1U] 
        = __Vtemp5;
    __Vtemp6 = ((1U & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__i_imme), 2U))
                 ? VL_CONCAT_III(32,28,4, (0xfffffffU 
                                           & VL_SEL_IIII(28,32,5,32, 
                                                         vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage
                                                         [1U], 0U, 0x1cU)), 0U)
                 : vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage
                [1U]);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage[2U] 
        = __Vtemp6;
    __Vtemp7 = ((1U & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__i_imme), 3U))
                 ? VL_CONCAT_III(32,24,8, (0xffffffU 
                                           & VL_SEL_IIII(24,32,5,32, 
                                                         vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage
                                                         [2U], 0U, 0x18U)), 0U)
                 : vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage
                [2U]);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage[3U] 
        = __Vtemp7;
    __Vtemp8 = ((1U & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__i_imme), 4U))
                 ? VL_CONCAT_III(32,16,16, (0xffffU 
                                            & VL_SEL_IIII(16,32,5,32, 
                                                          vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage
                                                          [3U], 0U, 0x10U)), 0U)
                 : vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage
                [3U]);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage[4U] 
        = __Vtemp8;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__o_data 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage
        [4U];
}
