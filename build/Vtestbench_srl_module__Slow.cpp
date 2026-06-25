// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_srl_module.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_srl_module) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_srl_module::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_srl_module::~Vtestbench_srl_module() {
}

void Vtestbench_srl_module::_settle__TOP__testbench__TAGE__execute_unit__alu_module__srl_module__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_srl_module::_settle__TOP__testbench__TAGE__execute_unit__alu_module__srl_module__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vtemp1;
    IData/*31:0*/ __Vtemp2;
    IData/*31:0*/ __Vtemp3;
    IData/*31:0*/ __Vtemp4;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__stage[0U] 
        = ((1U & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__i_imme), 0U))
            ? VL_EXTEND_II(32,31, (0x7fffffffU & VL_SEL_IIII(31,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__i_data, 1U, 0x1fU)))
            : vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__i_data);
    __Vtemp1 = ((1U & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__i_imme), 1U))
                 ? VL_EXTEND_II(32,30, (0x3fffffffU 
                                        & VL_SEL_IIII(30,32,5,32, 
                                                      vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__stage
                                                      [0U], 2U, 0x1eU)))
                 : vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__stage
                [0U]);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__stage[1U] 
        = __Vtemp1;
    __Vtemp2 = ((1U & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__i_imme), 2U))
                 ? VL_EXTEND_II(32,28, (0xfffffffU 
                                        & VL_SEL_IIII(28,32,5,32, 
                                                      vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__stage
                                                      [1U], 4U, 0x1cU)))
                 : vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__stage
                [1U]);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__stage[2U] 
        = __Vtemp2;
    __Vtemp3 = ((1U & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__i_imme), 3U))
                 ? VL_EXTEND_II(32,24, (0xffffffU & 
                                        VL_SEL_IIII(24,32,5,32, 
                                                    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__stage
                                                    [2U], 8U, 0x18U)))
                 : vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__stage
                [2U]);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__stage[3U] 
        = __Vtemp3;
    __Vtemp4 = ((1U & VL_BITSEL_IIII(1,5,3,32, (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__i_imme), 4U))
                 ? VL_EXTEND_II(32,16, (0xffffU & VL_SEL_IIII(16,32,5,32, 
                                                              vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__stage
                                                              [3U], 0x10U, 0x10U)))
                 : vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__stage
                [3U]);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__stage[4U] 
        = __Vtemp4;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__o_data 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__stage
        [4U];
}

void Vtestbench_srl_module::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_srl_module::_ctor_var_reset\n"); );
    // Body
    __PVT__i_data = VL_RAND_RESET_I(32);
    __PVT__i_imme = VL_RAND_RESET_I(5);
    __PVT__o_data = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            __PVT__stage[__Vi0] = VL_RAND_RESET_I(32);
    }}
}
