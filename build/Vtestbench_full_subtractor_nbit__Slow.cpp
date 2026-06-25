// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_full_subtractor_nbit.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_full_subtractor_nbit) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_full_subtractor_nbit::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_full_subtractor_nbit::~Vtestbench_full_subtractor_nbit() {
}

void Vtestbench_full_subtractor_nbit::_settle__TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_subtractor_nbit::_settle__TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGNBIT_QI(1,0U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0U);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__o_borrow 
        = (1U & VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x20U));
}

void Vtestbench_full_subtractor_nbit::_settle__TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_subtractor_nbit::_settle__TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp1;
    CData/*31:0*/ __Vtemp2;
    CData/*31:0*/ __Vtemp3;
    CData/*31:0*/ __Vtemp4;
    CData/*31:0*/ __Vtemp5;
    CData/*31:0*/ __Vtemp6;
    CData/*31:0*/ __Vtemp7;
    CData/*31:0*/ __Vtemp8;
    CData/*31:0*/ __Vtemp9;
    CData/*31:0*/ __Vtemp10;
    CData/*31:0*/ __Vtemp11;
    CData/*31:0*/ __Vtemp12;
    CData/*31:0*/ __Vtemp13;
    CData/*31:0*/ __Vtemp14;
    CData/*31:0*/ __Vtemp15;
    CData/*31:0*/ __Vtemp16;
    CData/*31:0*/ __Vtemp17;
    CData/*31:0*/ __Vtemp18;
    CData/*31:0*/ __Vtemp19;
    CData/*31:0*/ __Vtemp20;
    CData/*31:0*/ __Vtemp21;
    CData/*31:0*/ __Vtemp22;
    CData/*31:0*/ __Vtemp23;
    CData/*31:0*/ __Vtemp24;
    CData/*31:0*/ __Vtemp25;
    CData/*31:0*/ __Vtemp26;
    CData/*31:0*/ __Vtemp27;
    CData/*31:0*/ __Vtemp28;
    CData/*31:0*/ __Vtemp29;
    CData/*31:0*/ __Vtemp30;
    CData/*31:0*/ __Vtemp31;
    CData/*31:0*/ __Vtemp32;
    // Body
    __Vtemp1 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0U)) 
                       & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0U)) 
                      | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0U) 
                         & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0U) 
                               ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0U))))));
    VL_ASSIGNBIT_QI(1,1U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp1);
    __Vtemp2 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 1U)) 
                       & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 1U)) 
                      | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 1U) 
                         & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 1U) 
                               ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 1U))))));
    VL_ASSIGNBIT_QI(1,2U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp2);
    __Vtemp3 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 2U)) 
                       & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 2U)) 
                      | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 2U) 
                         & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 2U) 
                               ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 2U))))));
    VL_ASSIGNBIT_QI(1,3U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp3);
    __Vtemp4 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 3U)) 
                       & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 3U)) 
                      | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 3U) 
                         & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 3U) 
                               ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 3U))))));
    VL_ASSIGNBIT_QI(1,4U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp4);
    __Vtemp5 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 4U)) 
                       & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 4U)) 
                      | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 4U) 
                         & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 4U) 
                               ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 4U))))));
    VL_ASSIGNBIT_QI(1,5U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp5);
    __Vtemp6 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 5U)) 
                       & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 5U)) 
                      | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 5U) 
                         & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 5U) 
                               ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 5U))))));
    VL_ASSIGNBIT_QI(1,6U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp6);
    __Vtemp7 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 6U)) 
                       & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 6U)) 
                      | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 6U) 
                         & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 6U) 
                               ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 6U))))));
    VL_ASSIGNBIT_QI(1,7U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp7);
    __Vtemp8 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 7U)) 
                       & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 7U)) 
                      | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 7U) 
                         & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 7U) 
                               ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 7U))))));
    VL_ASSIGNBIT_QI(1,8U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp8);
    __Vtemp9 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 8U)) 
                       & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 8U)) 
                      | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 8U) 
                         & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 8U) 
                               ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 8U))))));
    VL_ASSIGNBIT_QI(1,9U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp9);
    __Vtemp10 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 9U)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 9U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 9U) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 9U) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 9U))))));
    VL_ASSIGNBIT_QI(1,0xaU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp10);
    __Vtemp11 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0xaU)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0xaU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0xaU) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0xaU) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0xaU))))));
    VL_ASSIGNBIT_QI(1,0xbU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp11);
    __Vtemp12 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0xbU)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0xbU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0xbU) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0xbU) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0xbU))))));
    VL_ASSIGNBIT_QI(1,0xcU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp12);
    __Vtemp13 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0xcU)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0xcU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0xcU) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0xcU) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0xcU))))));
    VL_ASSIGNBIT_QI(1,0xdU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp13);
    __Vtemp14 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0xdU)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0xdU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0xdU) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0xdU) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0xdU))))));
    VL_ASSIGNBIT_QI(1,0xeU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp14);
    __Vtemp15 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0xeU)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0xeU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0xeU) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0xeU) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0xeU))))));
    VL_ASSIGNBIT_QI(1,0xfU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp15);
    __Vtemp16 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0xfU)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0xfU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0xfU) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0xfU) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0xfU))))));
    VL_ASSIGNBIT_QI(1,0x10U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp16);
    __Vtemp17 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x10U)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x10U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x10U) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x10U) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x10U))))));
    VL_ASSIGNBIT_QI(1,0x11U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp17);
    __Vtemp18 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x11U)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x11U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x11U) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x11U) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x11U))))));
    VL_ASSIGNBIT_QI(1,0x12U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp18);
    __Vtemp19 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x12U)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x12U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x12U) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x12U) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x12U))))));
    VL_ASSIGNBIT_QI(1,0x13U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp19);
    __Vtemp20 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x13U)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x13U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x13U) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x13U) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x13U))))));
    VL_ASSIGNBIT_QI(1,0x14U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp20);
    __Vtemp21 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x14U)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x14U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x14U) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x14U) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x14U))))));
    VL_ASSIGNBIT_QI(1,0x15U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp21);
    __Vtemp22 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x15U)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x15U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x15U) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x15U) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x15U))))));
    VL_ASSIGNBIT_QI(1,0x16U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp22);
    __Vtemp23 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x16U)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x16U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x16U) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x16U) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x16U))))));
    VL_ASSIGNBIT_QI(1,0x17U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp23);
    __Vtemp24 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x17U)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x17U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x17U) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x17U) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x17U))))));
    VL_ASSIGNBIT_QI(1,0x18U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp24);
    __Vtemp25 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x18U)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x18U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x18U) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x18U) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x18U))))));
    VL_ASSIGNBIT_QI(1,0x19U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp25);
    __Vtemp26 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x19U)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x19U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x19U) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x19U) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x19U))))));
    VL_ASSIGNBIT_QI(1,0x1aU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp26);
    __Vtemp27 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x1aU)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x1aU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x1aU) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x1aU) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x1aU))))));
    VL_ASSIGNBIT_QI(1,0x1bU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp27);
    __Vtemp28 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x1bU)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x1bU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x1bU) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x1bU) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x1bU))))));
    VL_ASSIGNBIT_QI(1,0x1cU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp28);
    __Vtemp29 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x1cU)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x1cU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x1cU) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x1cU) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x1cU))))));
    VL_ASSIGNBIT_QI(1,0x1dU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp29);
    __Vtemp30 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x1dU)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x1dU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x1dU) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x1dU) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x1dU))))));
    VL_ASSIGNBIT_QI(1,0x1eU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp30);
    __Vtemp31 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x1eU)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x1eU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x1eU) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x1eU) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x1eU))))));
    VL_ASSIGNBIT_QI(1,0x1fU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp31);
    __Vtemp32 = (1U & (((~ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x1fU)) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x1fU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x1fU) 
                          & (~ (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x1fU) 
                                ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x1fU))))));
    VL_ASSIGNBIT_QI(1,0x20U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, __Vtemp32);
    VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0U))));
    VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 1U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 1U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 1U))));
    VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 2U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 2U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 2U))));
    VL_ASSIGNBIT_II(1,3U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 3U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 3U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 3U))));
    VL_ASSIGNBIT_II(1,4U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 4U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 4U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 4U))));
    VL_ASSIGNBIT_II(1,5U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 5U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 5U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 5U))));
    VL_ASSIGNBIT_II(1,6U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 6U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 6U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 6U))));
    VL_ASSIGNBIT_II(1,7U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 7U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 7U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 7U))));
    VL_ASSIGNBIT_II(1,8U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 8U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 8U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 8U))));
    VL_ASSIGNBIT_II(1,9U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 9U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 9U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 9U))));
    VL_ASSIGNBIT_II(1,0xaU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0xaU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0xaU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0xaU))));
    VL_ASSIGNBIT_II(1,0xbU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0xbU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0xbU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0xbU))));
    VL_ASSIGNBIT_II(1,0xcU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0xcU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0xcU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0xcU))));
    VL_ASSIGNBIT_II(1,0xdU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0xdU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0xdU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0xdU))));
    VL_ASSIGNBIT_II(1,0xeU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0xeU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0xeU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0xeU))));
    VL_ASSIGNBIT_II(1,0xfU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0xfU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0xfU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0xfU))));
    VL_ASSIGNBIT_II(1,0x10U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x10U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x10U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x10U))));
    VL_ASSIGNBIT_II(1,0x11U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x11U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x11U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x11U))));
    VL_ASSIGNBIT_II(1,0x12U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x12U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x12U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x12U))));
    VL_ASSIGNBIT_II(1,0x13U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x13U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x13U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x13U))));
    VL_ASSIGNBIT_II(1,0x14U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x14U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x14U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x14U))));
    VL_ASSIGNBIT_II(1,0x15U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x15U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x15U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x15U))));
    VL_ASSIGNBIT_II(1,0x16U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x16U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x16U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x16U))));
    VL_ASSIGNBIT_II(1,0x17U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x17U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x17U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x17U))));
    VL_ASSIGNBIT_II(1,0x18U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x18U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x18U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x18U))));
    VL_ASSIGNBIT_II(1,0x19U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x19U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x19U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x19U))));
    VL_ASSIGNBIT_II(1,0x1aU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x1aU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x1aU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x1aU))));
    VL_ASSIGNBIT_II(1,0x1bU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x1bU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x1bU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x1bU))));
    VL_ASSIGNBIT_II(1,0x1cU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x1cU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x1cU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x1cU))));
    VL_ASSIGNBIT_II(1,0x1dU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x1dU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x1dU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x1dU))));
    VL_ASSIGNBIT_II(1,0x1eU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x1eU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x1eU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x1eU))));
    VL_ASSIGNBIT_II(1,0x1fU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a, 0x1fU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b, 0x1fU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow, 0x1fU))));
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__o_diff 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__diff;
}

void Vtestbench_full_subtractor_nbit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_subtractor_nbit::_ctor_var_reset\n"); );
    // Body
    __PVT__i_a = VL_RAND_RESET_I(32);
    __PVT__i_b = VL_RAND_RESET_I(32);
    __PVT__o_diff = VL_RAND_RESET_I(32);
    __PVT__o_borrow = VL_RAND_RESET_I(1);
    __PVT__sig_borrow = VL_RAND_RESET_Q(33);
    __PVT__diff = VL_RAND_RESET_I(32);
}
