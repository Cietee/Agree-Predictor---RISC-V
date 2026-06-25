// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_sll_module.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_sll_module) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_sll_module::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_sll_module::~Vtestbench_sll_module() {
}

void Vtestbench_sll_module::_settle__TOP__testbench__TAGE__execute_unit__alu_module__sll_module__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_sll_module::_settle__TOP__testbench__TAGE__execute_unit__alu_module__sll_module__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vtemp1;
    IData/*31:0*/ __Vtemp2;
    IData/*31:0*/ __Vtemp3;
    IData/*31:0*/ __Vtemp4;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage[0U] 
        = ((1U & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__i_imme), 0U))
            ? VL_CONCAT_III(32,31,1, (0x7fffffffU & 
                                      VL_SEL_IIII(31,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__i_data, 0U, 0x1fU)), 0U)
            : vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__i_data);
    __Vtemp1 = ((1U & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__i_imme), 1U))
                 ? VL_CONCAT_III(32,30,2, (0x3fffffffU 
                                           & VL_SEL_IIII(30,32,5,32, 
                                                         vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage
                                                         [0U], 0U, 0x1eU)), 0U)
                 : vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage
                [0U]);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage[1U] 
        = __Vtemp1;
    __Vtemp2 = ((1U & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__i_imme), 2U))
                 ? VL_CONCAT_III(32,28,4, (0xfffffffU 
                                           & VL_SEL_IIII(28,32,5,32, 
                                                         vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage
                                                         [1U], 0U, 0x1cU)), 0U)
                 : vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage
                [1U]);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage[2U] 
        = __Vtemp2;
    __Vtemp3 = ((1U & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__i_imme), 3U))
                 ? VL_CONCAT_III(32,24,8, (0xffffffU 
                                           & VL_SEL_IIII(24,32,5,32, 
                                                         vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage
                                                         [2U], 0U, 0x18U)), 0U)
                 : vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage
                [2U]);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage[3U] 
        = __Vtemp3;
    __Vtemp4 = ((1U & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__i_imme), 4U))
                 ? VL_CONCAT_III(32,16,16, (0xffffU 
                                            & VL_SEL_IIII(16,32,5,32, 
                                                          vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage
                                                          [3U], 0U, 0x10U)), 0U)
                 : vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage
                [3U]);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage[4U] 
        = __Vtemp4;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__o_data 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__stage
        [4U];
}

void Vtestbench_sll_module::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_sll_module::_ctor_var_reset\n"); );
    // Body
    __PVT__i_data = VL_RAND_RESET_I(32);
    __PVT__i_imme = VL_RAND_RESET_I(5);
    __PVT__o_data = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            __PVT__stage[__Vi0] = VL_RAND_RESET_I(32);
    }}
}
