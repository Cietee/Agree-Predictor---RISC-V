// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_comparator.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_comparator) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_comparator::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_comparator::~Vtestbench_comparator() {
}

void Vtestbench_comparator::_settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__7(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__7\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGNBIT_QI(1,0x20U, this->__PVT__sig_less, 0U);
    VL_ASSIGNBIT_QO(1,0x20U, this->__PVT__sig_equal, 1U);
    this->__PVT__o_equal = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0U));
}

void Vtestbench_comparator::_settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__12(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__12\n"); );
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
    CData/*31:0*/ __Vtemp33;
    CData/*31:0*/ __Vtemp34;
    CData/*31:0*/ __Vtemp35;
    CData/*31:0*/ __Vtemp36;
    CData/*31:0*/ __Vtemp37;
    CData/*31:0*/ __Vtemp38;
    CData/*31:0*/ __Vtemp39;
    CData/*31:0*/ __Vtemp40;
    CData/*31:0*/ __Vtemp41;
    CData/*31:0*/ __Vtemp42;
    CData/*31:0*/ __Vtemp43;
    CData/*31:0*/ __Vtemp44;
    CData/*31:0*/ __Vtemp45;
    CData/*31:0*/ __Vtemp46;
    CData/*31:0*/ __Vtemp47;
    CData/*31:0*/ __Vtemp48;
    CData/*31:0*/ __Vtemp49;
    CData/*31:0*/ __Vtemp50;
    CData/*31:0*/ __Vtemp51;
    CData/*31:0*/ __Vtemp52;
    CData/*31:0*/ __Vtemp53;
    CData/*31:0*/ __Vtemp54;
    CData/*31:0*/ __Vtemp55;
    CData/*31:0*/ __Vtemp56;
    CData/*31:0*/ __Vtemp57;
    CData/*31:0*/ __Vtemp58;
    CData/*31:0*/ __Vtemp59;
    CData/*31:0*/ __Vtemp60;
    CData/*31:0*/ __Vtemp61;
    CData/*31:0*/ __Vtemp62;
    CData/*31:0*/ __Vtemp63;
    CData/*31:0*/ __Vtemp64;
    // Body
    __Vtemp1 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                      & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_equal, __Vtemp1);
    __Vtemp2 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                      & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_equal, __Vtemp2);
    __Vtemp3 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                      & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_equal, __Vtemp3);
    __Vtemp4 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                      & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_equal, __Vtemp4);
    __Vtemp5 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                      & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_equal, __Vtemp5);
    __Vtemp6 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                      & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_equal, __Vtemp6);
    __Vtemp7 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                      & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_equal, __Vtemp7);
    __Vtemp8 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                      & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_equal, __Vtemp8);
    __Vtemp9 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                      & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_equal, __Vtemp9);
    __Vtemp10 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_equal, __Vtemp10);
    __Vtemp11 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_equal, __Vtemp11);
    __Vtemp12 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_equal, __Vtemp12);
    __Vtemp13 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_equal, __Vtemp13);
    __Vtemp14 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_equal, __Vtemp14);
    __Vtemp15 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_equal, __Vtemp15);
    __Vtemp16 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_equal, __Vtemp16);
    __Vtemp17 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_equal, __Vtemp17);
    __Vtemp18 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_equal, __Vtemp18);
    __Vtemp19 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_equal, __Vtemp19);
    __Vtemp20 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_equal, __Vtemp20);
    __Vtemp21 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_equal, __Vtemp21);
    __Vtemp22 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_equal, __Vtemp22);
    __Vtemp23 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_equal, __Vtemp23);
    __Vtemp24 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_equal, __Vtemp24);
    __Vtemp25 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_equal, __Vtemp25);
    __Vtemp26 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_equal, __Vtemp26);
    __Vtemp27 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_equal, __Vtemp27);
    __Vtemp28 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_equal, __Vtemp28);
    __Vtemp29 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_equal, __Vtemp29);
    __Vtemp30 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_equal, __Vtemp30);
    __Vtemp31 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_equal, __Vtemp31);
    __Vtemp32 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_equal, __Vtemp32);
    __Vtemp33 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x20U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_less, __Vtemp33);
    __Vtemp34 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1fU) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_less, __Vtemp34);
    __Vtemp35 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1eU) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_less, __Vtemp35);
    __Vtemp36 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1dU) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_less, __Vtemp36);
    __Vtemp37 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1cU) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_less, __Vtemp37);
    __Vtemp38 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1bU) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_less, __Vtemp38);
    __Vtemp39 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1aU) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_less, __Vtemp39);
    __Vtemp40 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x19U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_less, __Vtemp40);
    __Vtemp41 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x18U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_less, __Vtemp41);
    __Vtemp42 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x17U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_less, __Vtemp42);
    __Vtemp43 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x16U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_less, __Vtemp43);
    __Vtemp44 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x15U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_less, __Vtemp44);
    __Vtemp45 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x14U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_less, __Vtemp45);
    __Vtemp46 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x13U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_less, __Vtemp46);
    __Vtemp47 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x12U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_less, __Vtemp47);
    __Vtemp48 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x11U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_less, __Vtemp48);
    __Vtemp49 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x10U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_less, __Vtemp49);
    __Vtemp50 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xfU) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_less, __Vtemp50);
    __Vtemp51 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xeU) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_less, __Vtemp51);
    __Vtemp52 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xdU) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_less, __Vtemp52);
    __Vtemp53 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xcU) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_less, __Vtemp53);
    __Vtemp54 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xbU) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_less, __Vtemp54);
    __Vtemp55 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xaU) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_less, __Vtemp55);
    __Vtemp56 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 9U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_less, __Vtemp56);
    __Vtemp57 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 8U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_less, __Vtemp57);
    __Vtemp58 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 7U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_less, __Vtemp58);
    __Vtemp59 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 6U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_less, __Vtemp59);
    __Vtemp60 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 5U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_less, __Vtemp60);
    __Vtemp61 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 4U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_less, __Vtemp61);
    __Vtemp62 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 3U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_less, __Vtemp62);
    __Vtemp63 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 2U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_less, __Vtemp63);
    __Vtemp64 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 1U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_less, __Vtemp64);
    this->__PVT__o_lessthan = (1U & (((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                                       ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                                      & (IData)(this->__PVT__i_signed))
                                      ? (~ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U))
                                      : VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U)));
}

void Vtestbench_comparator::_settle__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_settle__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGNBIT_QO(1,0x20U, this->__PVT__sig_equal, 1U);
    VL_ASSIGNBIT_QI(1,0x20U, this->__PVT__sig_less, 0U);
    this->__PVT__o_equal = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0U));
}

void Vtestbench_comparator::_settle__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__13(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_settle__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__13\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp129;
    CData/*31:0*/ __Vtemp130;
    CData/*31:0*/ __Vtemp131;
    CData/*31:0*/ __Vtemp132;
    CData/*31:0*/ __Vtemp133;
    CData/*31:0*/ __Vtemp134;
    CData/*31:0*/ __Vtemp135;
    CData/*31:0*/ __Vtemp136;
    CData/*31:0*/ __Vtemp137;
    CData/*31:0*/ __Vtemp138;
    CData/*31:0*/ __Vtemp139;
    CData/*31:0*/ __Vtemp140;
    CData/*31:0*/ __Vtemp141;
    CData/*31:0*/ __Vtemp142;
    CData/*31:0*/ __Vtemp143;
    CData/*31:0*/ __Vtemp144;
    CData/*31:0*/ __Vtemp145;
    CData/*31:0*/ __Vtemp146;
    CData/*31:0*/ __Vtemp147;
    CData/*31:0*/ __Vtemp148;
    CData/*31:0*/ __Vtemp149;
    CData/*31:0*/ __Vtemp150;
    CData/*31:0*/ __Vtemp151;
    CData/*31:0*/ __Vtemp152;
    CData/*31:0*/ __Vtemp153;
    CData/*31:0*/ __Vtemp154;
    CData/*31:0*/ __Vtemp155;
    CData/*31:0*/ __Vtemp156;
    CData/*31:0*/ __Vtemp157;
    CData/*31:0*/ __Vtemp158;
    CData/*31:0*/ __Vtemp159;
    CData/*31:0*/ __Vtemp160;
    CData/*31:0*/ __Vtemp161;
    CData/*31:0*/ __Vtemp162;
    CData/*31:0*/ __Vtemp163;
    CData/*31:0*/ __Vtemp164;
    CData/*31:0*/ __Vtemp165;
    CData/*31:0*/ __Vtemp166;
    CData/*31:0*/ __Vtemp167;
    CData/*31:0*/ __Vtemp168;
    CData/*31:0*/ __Vtemp169;
    CData/*31:0*/ __Vtemp170;
    CData/*31:0*/ __Vtemp171;
    CData/*31:0*/ __Vtemp172;
    CData/*31:0*/ __Vtemp173;
    CData/*31:0*/ __Vtemp174;
    CData/*31:0*/ __Vtemp175;
    CData/*31:0*/ __Vtemp176;
    CData/*31:0*/ __Vtemp177;
    CData/*31:0*/ __Vtemp178;
    CData/*31:0*/ __Vtemp179;
    CData/*31:0*/ __Vtemp180;
    CData/*31:0*/ __Vtemp181;
    CData/*31:0*/ __Vtemp182;
    CData/*31:0*/ __Vtemp183;
    CData/*31:0*/ __Vtemp184;
    CData/*31:0*/ __Vtemp185;
    CData/*31:0*/ __Vtemp186;
    CData/*31:0*/ __Vtemp187;
    CData/*31:0*/ __Vtemp188;
    CData/*31:0*/ __Vtemp189;
    CData/*31:0*/ __Vtemp190;
    CData/*31:0*/ __Vtemp191;
    CData/*31:0*/ __Vtemp192;
    // Body
    __Vtemp129 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_equal, __Vtemp129);
    __Vtemp130 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_equal, __Vtemp130);
    __Vtemp131 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_equal, __Vtemp131);
    __Vtemp132 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_equal, __Vtemp132);
    __Vtemp133 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_equal, __Vtemp133);
    __Vtemp134 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_equal, __Vtemp134);
    __Vtemp135 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_equal, __Vtemp135);
    __Vtemp136 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_equal, __Vtemp136);
    __Vtemp137 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_equal, __Vtemp137);
    __Vtemp138 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_equal, __Vtemp138);
    __Vtemp139 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_equal, __Vtemp139);
    __Vtemp140 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_equal, __Vtemp140);
    __Vtemp141 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_equal, __Vtemp141);
    __Vtemp142 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_equal, __Vtemp142);
    __Vtemp143 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_equal, __Vtemp143);
    __Vtemp144 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_equal, __Vtemp144);
    __Vtemp145 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_equal, __Vtemp145);
    __Vtemp146 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_equal, __Vtemp146);
    __Vtemp147 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_equal, __Vtemp147);
    __Vtemp148 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_equal, __Vtemp148);
    __Vtemp149 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_equal, __Vtemp149);
    __Vtemp150 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_equal, __Vtemp150);
    __Vtemp151 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_equal, __Vtemp151);
    __Vtemp152 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_equal, __Vtemp152);
    __Vtemp153 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_equal, __Vtemp153);
    __Vtemp154 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_equal, __Vtemp154);
    __Vtemp155 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_equal, __Vtemp155);
    __Vtemp156 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_equal, __Vtemp156);
    __Vtemp157 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_equal, __Vtemp157);
    __Vtemp158 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_equal, __Vtemp158);
    __Vtemp159 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_equal, __Vtemp159);
    __Vtemp160 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_equal, __Vtemp160);
    __Vtemp161 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x20U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_less, __Vtemp161);
    __Vtemp162 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1fU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_less, __Vtemp162);
    __Vtemp163 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1eU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_less, __Vtemp163);
    __Vtemp164 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1dU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_less, __Vtemp164);
    __Vtemp165 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1cU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_less, __Vtemp165);
    __Vtemp166 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1bU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_less, __Vtemp166);
    __Vtemp167 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1aU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_less, __Vtemp167);
    __Vtemp168 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x19U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_less, __Vtemp168);
    __Vtemp169 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x18U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_less, __Vtemp169);
    __Vtemp170 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x17U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_less, __Vtemp170);
    __Vtemp171 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x16U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_less, __Vtemp171);
    __Vtemp172 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x15U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_less, __Vtemp172);
    __Vtemp173 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x14U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_less, __Vtemp173);
    __Vtemp174 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x13U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_less, __Vtemp174);
    __Vtemp175 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x12U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_less, __Vtemp175);
    __Vtemp176 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x11U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_less, __Vtemp176);
    __Vtemp177 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x10U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_less, __Vtemp177);
    __Vtemp178 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xfU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_less, __Vtemp178);
    __Vtemp179 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xeU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_less, __Vtemp179);
    __Vtemp180 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xdU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_less, __Vtemp180);
    __Vtemp181 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xcU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_less, __Vtemp181);
    __Vtemp182 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xbU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_less, __Vtemp182);
    __Vtemp183 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xaU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_less, __Vtemp183);
    __Vtemp184 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 9U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_less, __Vtemp184);
    __Vtemp185 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 8U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_less, __Vtemp185);
    __Vtemp186 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 7U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_less, __Vtemp186);
    __Vtemp187 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 6U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_less, __Vtemp187);
    __Vtemp188 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 5U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_less, __Vtemp188);
    __Vtemp189 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 4U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_less, __Vtemp189);
    __Vtemp190 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 3U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_less, __Vtemp190);
    __Vtemp191 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 2U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_less, __Vtemp191);
    __Vtemp192 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 1U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_less, __Vtemp192);
    this->__PVT__o_lessthan = (1U & (((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                                       ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                                      & (IData)(this->__PVT__i_signed))
                                      ? (~ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U))
                                      : VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U)));
}

void Vtestbench_comparator::_settle__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_settle__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__4\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGNBIT_QO(1,0x20U, this->__PVT__sig_equal, 1U);
    VL_ASSIGNBIT_QI(1,0x20U, this->__PVT__sig_less, 0U);
    this->__PVT__o_equal = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0U));
}

void Vtestbench_comparator::_settle__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__14(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_settle__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__14\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp257;
    CData/*31:0*/ __Vtemp258;
    CData/*31:0*/ __Vtemp259;
    CData/*31:0*/ __Vtemp260;
    CData/*31:0*/ __Vtemp261;
    CData/*31:0*/ __Vtemp262;
    CData/*31:0*/ __Vtemp263;
    CData/*31:0*/ __Vtemp264;
    CData/*31:0*/ __Vtemp265;
    CData/*31:0*/ __Vtemp266;
    CData/*31:0*/ __Vtemp267;
    CData/*31:0*/ __Vtemp268;
    CData/*31:0*/ __Vtemp269;
    CData/*31:0*/ __Vtemp270;
    CData/*31:0*/ __Vtemp271;
    CData/*31:0*/ __Vtemp272;
    CData/*31:0*/ __Vtemp273;
    CData/*31:0*/ __Vtemp274;
    CData/*31:0*/ __Vtemp275;
    CData/*31:0*/ __Vtemp276;
    CData/*31:0*/ __Vtemp277;
    CData/*31:0*/ __Vtemp278;
    CData/*31:0*/ __Vtemp279;
    CData/*31:0*/ __Vtemp280;
    CData/*31:0*/ __Vtemp281;
    CData/*31:0*/ __Vtemp282;
    CData/*31:0*/ __Vtemp283;
    CData/*31:0*/ __Vtemp284;
    CData/*31:0*/ __Vtemp285;
    CData/*31:0*/ __Vtemp286;
    CData/*31:0*/ __Vtemp287;
    CData/*31:0*/ __Vtemp288;
    CData/*31:0*/ __Vtemp289;
    CData/*31:0*/ __Vtemp290;
    CData/*31:0*/ __Vtemp291;
    CData/*31:0*/ __Vtemp292;
    CData/*31:0*/ __Vtemp293;
    CData/*31:0*/ __Vtemp294;
    CData/*31:0*/ __Vtemp295;
    CData/*31:0*/ __Vtemp296;
    CData/*31:0*/ __Vtemp297;
    CData/*31:0*/ __Vtemp298;
    CData/*31:0*/ __Vtemp299;
    CData/*31:0*/ __Vtemp300;
    CData/*31:0*/ __Vtemp301;
    CData/*31:0*/ __Vtemp302;
    CData/*31:0*/ __Vtemp303;
    CData/*31:0*/ __Vtemp304;
    CData/*31:0*/ __Vtemp305;
    CData/*31:0*/ __Vtemp306;
    CData/*31:0*/ __Vtemp307;
    CData/*31:0*/ __Vtemp308;
    CData/*31:0*/ __Vtemp309;
    CData/*31:0*/ __Vtemp310;
    CData/*31:0*/ __Vtemp311;
    CData/*31:0*/ __Vtemp312;
    CData/*31:0*/ __Vtemp313;
    CData/*31:0*/ __Vtemp314;
    CData/*31:0*/ __Vtemp315;
    CData/*31:0*/ __Vtemp316;
    CData/*31:0*/ __Vtemp317;
    CData/*31:0*/ __Vtemp318;
    CData/*31:0*/ __Vtemp319;
    CData/*31:0*/ __Vtemp320;
    // Body
    __Vtemp257 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_equal, __Vtemp257);
    __Vtemp258 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_equal, __Vtemp258);
    __Vtemp259 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_equal, __Vtemp259);
    __Vtemp260 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_equal, __Vtemp260);
    __Vtemp261 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_equal, __Vtemp261);
    __Vtemp262 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_equal, __Vtemp262);
    __Vtemp263 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_equal, __Vtemp263);
    __Vtemp264 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_equal, __Vtemp264);
    __Vtemp265 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_equal, __Vtemp265);
    __Vtemp266 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_equal, __Vtemp266);
    __Vtemp267 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_equal, __Vtemp267);
    __Vtemp268 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_equal, __Vtemp268);
    __Vtemp269 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_equal, __Vtemp269);
    __Vtemp270 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_equal, __Vtemp270);
    __Vtemp271 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_equal, __Vtemp271);
    __Vtemp272 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_equal, __Vtemp272);
    __Vtemp273 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_equal, __Vtemp273);
    __Vtemp274 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_equal, __Vtemp274);
    __Vtemp275 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_equal, __Vtemp275);
    __Vtemp276 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_equal, __Vtemp276);
    __Vtemp277 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_equal, __Vtemp277);
    __Vtemp278 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_equal, __Vtemp278);
    __Vtemp279 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_equal, __Vtemp279);
    __Vtemp280 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_equal, __Vtemp280);
    __Vtemp281 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_equal, __Vtemp281);
    __Vtemp282 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_equal, __Vtemp282);
    __Vtemp283 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_equal, __Vtemp283);
    __Vtemp284 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_equal, __Vtemp284);
    __Vtemp285 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_equal, __Vtemp285);
    __Vtemp286 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_equal, __Vtemp286);
    __Vtemp287 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_equal, __Vtemp287);
    __Vtemp288 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_equal, __Vtemp288);
    __Vtemp289 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x20U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_less, __Vtemp289);
    __Vtemp290 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1fU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_less, __Vtemp290);
    __Vtemp291 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1eU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_less, __Vtemp291);
    __Vtemp292 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1dU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_less, __Vtemp292);
    __Vtemp293 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1cU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_less, __Vtemp293);
    __Vtemp294 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1bU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_less, __Vtemp294);
    __Vtemp295 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1aU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_less, __Vtemp295);
    __Vtemp296 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x19U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_less, __Vtemp296);
    __Vtemp297 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x18U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_less, __Vtemp297);
    __Vtemp298 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x17U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_less, __Vtemp298);
    __Vtemp299 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x16U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_less, __Vtemp299);
    __Vtemp300 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x15U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_less, __Vtemp300);
    __Vtemp301 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x14U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_less, __Vtemp301);
    __Vtemp302 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x13U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_less, __Vtemp302);
    __Vtemp303 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x12U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_less, __Vtemp303);
    __Vtemp304 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x11U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_less, __Vtemp304);
    __Vtemp305 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x10U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_less, __Vtemp305);
    __Vtemp306 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xfU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_less, __Vtemp306);
    __Vtemp307 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xeU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_less, __Vtemp307);
    __Vtemp308 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xdU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_less, __Vtemp308);
    __Vtemp309 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xcU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_less, __Vtemp309);
    __Vtemp310 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xbU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_less, __Vtemp310);
    __Vtemp311 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xaU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_less, __Vtemp311);
    __Vtemp312 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 9U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_less, __Vtemp312);
    __Vtemp313 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 8U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_less, __Vtemp313);
    __Vtemp314 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 7U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_less, __Vtemp314);
    __Vtemp315 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 6U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_less, __Vtemp315);
    __Vtemp316 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 5U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_less, __Vtemp316);
    __Vtemp317 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 4U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_less, __Vtemp317);
    __Vtemp318 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 3U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_less, __Vtemp318);
    __Vtemp319 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 2U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_less, __Vtemp319);
    __Vtemp320 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 1U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_less, __Vtemp320);
    this->__PVT__o_lessthan = (1U & (((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                                       ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                                      & (IData)(this->__PVT__i_signed))
                                      ? (~ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U))
                                      : VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U)));
}

void Vtestbench_comparator::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__5\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGNBIT_QI(1,0x20U, this->__PVT__sig_less, 0U);
    VL_ASSIGNBIT_QO(1,0x20U, this->__PVT__sig_equal, 1U);
    this->__PVT__o_equal = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0U));
}

void Vtestbench_comparator::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__10(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__10\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp385;
    CData/*31:0*/ __Vtemp386;
    CData/*31:0*/ __Vtemp387;
    CData/*31:0*/ __Vtemp388;
    CData/*31:0*/ __Vtemp389;
    CData/*31:0*/ __Vtemp390;
    CData/*31:0*/ __Vtemp391;
    CData/*31:0*/ __Vtemp392;
    CData/*31:0*/ __Vtemp393;
    CData/*31:0*/ __Vtemp394;
    CData/*31:0*/ __Vtemp395;
    CData/*31:0*/ __Vtemp396;
    CData/*31:0*/ __Vtemp397;
    CData/*31:0*/ __Vtemp398;
    CData/*31:0*/ __Vtemp399;
    CData/*31:0*/ __Vtemp400;
    CData/*31:0*/ __Vtemp401;
    CData/*31:0*/ __Vtemp402;
    CData/*31:0*/ __Vtemp403;
    CData/*31:0*/ __Vtemp404;
    CData/*31:0*/ __Vtemp405;
    CData/*31:0*/ __Vtemp406;
    CData/*31:0*/ __Vtemp407;
    CData/*31:0*/ __Vtemp408;
    CData/*31:0*/ __Vtemp409;
    CData/*31:0*/ __Vtemp410;
    CData/*31:0*/ __Vtemp411;
    CData/*31:0*/ __Vtemp412;
    CData/*31:0*/ __Vtemp413;
    CData/*31:0*/ __Vtemp414;
    CData/*31:0*/ __Vtemp415;
    CData/*31:0*/ __Vtemp416;
    CData/*31:0*/ __Vtemp417;
    CData/*31:0*/ __Vtemp418;
    CData/*31:0*/ __Vtemp419;
    CData/*31:0*/ __Vtemp420;
    CData/*31:0*/ __Vtemp421;
    CData/*31:0*/ __Vtemp422;
    CData/*31:0*/ __Vtemp423;
    CData/*31:0*/ __Vtemp424;
    CData/*31:0*/ __Vtemp425;
    CData/*31:0*/ __Vtemp426;
    CData/*31:0*/ __Vtemp427;
    CData/*31:0*/ __Vtemp428;
    CData/*31:0*/ __Vtemp429;
    CData/*31:0*/ __Vtemp430;
    CData/*31:0*/ __Vtemp431;
    CData/*31:0*/ __Vtemp432;
    CData/*31:0*/ __Vtemp433;
    CData/*31:0*/ __Vtemp434;
    CData/*31:0*/ __Vtemp435;
    CData/*31:0*/ __Vtemp436;
    CData/*31:0*/ __Vtemp437;
    CData/*31:0*/ __Vtemp438;
    CData/*31:0*/ __Vtemp439;
    CData/*31:0*/ __Vtemp440;
    CData/*31:0*/ __Vtemp441;
    CData/*31:0*/ __Vtemp442;
    CData/*31:0*/ __Vtemp443;
    CData/*31:0*/ __Vtemp444;
    CData/*31:0*/ __Vtemp445;
    CData/*31:0*/ __Vtemp446;
    CData/*31:0*/ __Vtemp447;
    CData/*31:0*/ __Vtemp448;
    // Body
    __Vtemp385 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_equal, __Vtemp385);
    __Vtemp386 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_equal, __Vtemp386);
    __Vtemp387 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_equal, __Vtemp387);
    __Vtemp388 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_equal, __Vtemp388);
    __Vtemp389 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_equal, __Vtemp389);
    __Vtemp390 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_equal, __Vtemp390);
    __Vtemp391 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_equal, __Vtemp391);
    __Vtemp392 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_equal, __Vtemp392);
    __Vtemp393 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_equal, __Vtemp393);
    __Vtemp394 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_equal, __Vtemp394);
    __Vtemp395 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_equal, __Vtemp395);
    __Vtemp396 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_equal, __Vtemp396);
    __Vtemp397 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_equal, __Vtemp397);
    __Vtemp398 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_equal, __Vtemp398);
    __Vtemp399 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_equal, __Vtemp399);
    __Vtemp400 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_equal, __Vtemp400);
    __Vtemp401 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_equal, __Vtemp401);
    __Vtemp402 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_equal, __Vtemp402);
    __Vtemp403 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_equal, __Vtemp403);
    __Vtemp404 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_equal, __Vtemp404);
    __Vtemp405 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_equal, __Vtemp405);
    __Vtemp406 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_equal, __Vtemp406);
    __Vtemp407 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_equal, __Vtemp407);
    __Vtemp408 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_equal, __Vtemp408);
    __Vtemp409 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_equal, __Vtemp409);
    __Vtemp410 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_equal, __Vtemp410);
    __Vtemp411 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_equal, __Vtemp411);
    __Vtemp412 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_equal, __Vtemp412);
    __Vtemp413 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_equal, __Vtemp413);
    __Vtemp414 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_equal, __Vtemp414);
    __Vtemp415 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_equal, __Vtemp415);
    __Vtemp416 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_equal, __Vtemp416);
    __Vtemp417 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x20U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_less, __Vtemp417);
    __Vtemp418 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1fU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_less, __Vtemp418);
    __Vtemp419 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1eU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_less, __Vtemp419);
    __Vtemp420 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1dU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_less, __Vtemp420);
    __Vtemp421 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1cU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_less, __Vtemp421);
    __Vtemp422 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1bU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_less, __Vtemp422);
    __Vtemp423 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1aU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_less, __Vtemp423);
    __Vtemp424 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x19U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_less, __Vtemp424);
    __Vtemp425 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x18U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_less, __Vtemp425);
    __Vtemp426 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x17U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_less, __Vtemp426);
    __Vtemp427 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x16U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_less, __Vtemp427);
    __Vtemp428 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x15U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_less, __Vtemp428);
    __Vtemp429 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x14U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_less, __Vtemp429);
    __Vtemp430 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x13U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_less, __Vtemp430);
    __Vtemp431 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x12U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_less, __Vtemp431);
    __Vtemp432 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x11U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_less, __Vtemp432);
    __Vtemp433 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x10U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_less, __Vtemp433);
    __Vtemp434 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xfU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_less, __Vtemp434);
    __Vtemp435 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xeU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_less, __Vtemp435);
    __Vtemp436 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xdU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_less, __Vtemp436);
    __Vtemp437 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xcU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_less, __Vtemp437);
    __Vtemp438 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xbU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_less, __Vtemp438);
    __Vtemp439 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xaU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_less, __Vtemp439);
    __Vtemp440 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 9U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_less, __Vtemp440);
    __Vtemp441 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 8U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_less, __Vtemp441);
    __Vtemp442 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 7U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_less, __Vtemp442);
    __Vtemp443 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 6U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_less, __Vtemp443);
    __Vtemp444 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 5U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_less, __Vtemp444);
    __Vtemp445 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 4U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_less, __Vtemp445);
    __Vtemp446 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 3U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_less, __Vtemp446);
    __Vtemp447 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 2U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_less, __Vtemp447);
    __Vtemp448 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 1U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_less, __Vtemp448);
    this->__PVT__o_lessthan = (1U & (((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                                       ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                                      & (IData)(this->__PVT__i_signed))
                                      ? (~ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U))
                                      : VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U)));
}

void Vtestbench_comparator::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__6(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__6\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGNBIT_QI(1,0x20U, this->__PVT__sig_less, 0U);
    VL_ASSIGNBIT_QO(1,0x20U, this->__PVT__sig_equal, 1U);
    this->__PVT__o_equal = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0U));
}

void Vtestbench_comparator::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__11(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__11\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp513;
    CData/*31:0*/ __Vtemp514;
    CData/*31:0*/ __Vtemp515;
    CData/*31:0*/ __Vtemp516;
    CData/*31:0*/ __Vtemp517;
    CData/*31:0*/ __Vtemp518;
    CData/*31:0*/ __Vtemp519;
    CData/*31:0*/ __Vtemp520;
    CData/*31:0*/ __Vtemp521;
    CData/*31:0*/ __Vtemp522;
    CData/*31:0*/ __Vtemp523;
    CData/*31:0*/ __Vtemp524;
    CData/*31:0*/ __Vtemp525;
    CData/*31:0*/ __Vtemp526;
    CData/*31:0*/ __Vtemp527;
    CData/*31:0*/ __Vtemp528;
    CData/*31:0*/ __Vtemp529;
    CData/*31:0*/ __Vtemp530;
    CData/*31:0*/ __Vtemp531;
    CData/*31:0*/ __Vtemp532;
    CData/*31:0*/ __Vtemp533;
    CData/*31:0*/ __Vtemp534;
    CData/*31:0*/ __Vtemp535;
    CData/*31:0*/ __Vtemp536;
    CData/*31:0*/ __Vtemp537;
    CData/*31:0*/ __Vtemp538;
    CData/*31:0*/ __Vtemp539;
    CData/*31:0*/ __Vtemp540;
    CData/*31:0*/ __Vtemp541;
    CData/*31:0*/ __Vtemp542;
    CData/*31:0*/ __Vtemp543;
    CData/*31:0*/ __Vtemp544;
    CData/*31:0*/ __Vtemp545;
    CData/*31:0*/ __Vtemp546;
    CData/*31:0*/ __Vtemp547;
    CData/*31:0*/ __Vtemp548;
    CData/*31:0*/ __Vtemp549;
    CData/*31:0*/ __Vtemp550;
    CData/*31:0*/ __Vtemp551;
    CData/*31:0*/ __Vtemp552;
    CData/*31:0*/ __Vtemp553;
    CData/*31:0*/ __Vtemp554;
    CData/*31:0*/ __Vtemp555;
    CData/*31:0*/ __Vtemp556;
    CData/*31:0*/ __Vtemp557;
    CData/*31:0*/ __Vtemp558;
    CData/*31:0*/ __Vtemp559;
    CData/*31:0*/ __Vtemp560;
    CData/*31:0*/ __Vtemp561;
    CData/*31:0*/ __Vtemp562;
    CData/*31:0*/ __Vtemp563;
    CData/*31:0*/ __Vtemp564;
    CData/*31:0*/ __Vtemp565;
    CData/*31:0*/ __Vtemp566;
    CData/*31:0*/ __Vtemp567;
    CData/*31:0*/ __Vtemp568;
    CData/*31:0*/ __Vtemp569;
    CData/*31:0*/ __Vtemp570;
    CData/*31:0*/ __Vtemp571;
    CData/*31:0*/ __Vtemp572;
    CData/*31:0*/ __Vtemp573;
    CData/*31:0*/ __Vtemp574;
    CData/*31:0*/ __Vtemp575;
    CData/*31:0*/ __Vtemp576;
    // Body
    __Vtemp513 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_equal, __Vtemp513);
    __Vtemp514 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_equal, __Vtemp514);
    __Vtemp515 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_equal, __Vtemp515);
    __Vtemp516 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_equal, __Vtemp516);
    __Vtemp517 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_equal, __Vtemp517);
    __Vtemp518 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_equal, __Vtemp518);
    __Vtemp519 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_equal, __Vtemp519);
    __Vtemp520 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_equal, __Vtemp520);
    __Vtemp521 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_equal, __Vtemp521);
    __Vtemp522 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_equal, __Vtemp522);
    __Vtemp523 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_equal, __Vtemp523);
    __Vtemp524 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_equal, __Vtemp524);
    __Vtemp525 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_equal, __Vtemp525);
    __Vtemp526 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_equal, __Vtemp526);
    __Vtemp527 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_equal, __Vtemp527);
    __Vtemp528 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_equal, __Vtemp528);
    __Vtemp529 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_equal, __Vtemp529);
    __Vtemp530 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_equal, __Vtemp530);
    __Vtemp531 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_equal, __Vtemp531);
    __Vtemp532 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_equal, __Vtemp532);
    __Vtemp533 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_equal, __Vtemp533);
    __Vtemp534 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_equal, __Vtemp534);
    __Vtemp535 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_equal, __Vtemp535);
    __Vtemp536 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_equal, __Vtemp536);
    __Vtemp537 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_equal, __Vtemp537);
    __Vtemp538 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_equal, __Vtemp538);
    __Vtemp539 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_equal, __Vtemp539);
    __Vtemp540 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_equal, __Vtemp540);
    __Vtemp541 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_equal, __Vtemp541);
    __Vtemp542 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_equal, __Vtemp542);
    __Vtemp543 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_equal, __Vtemp543);
    __Vtemp544 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_equal, __Vtemp544);
    __Vtemp545 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x20U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_less, __Vtemp545);
    __Vtemp546 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1fU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_less, __Vtemp546);
    __Vtemp547 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1eU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_less, __Vtemp547);
    __Vtemp548 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1dU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_less, __Vtemp548);
    __Vtemp549 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1cU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_less, __Vtemp549);
    __Vtemp550 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1bU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_less, __Vtemp550);
    __Vtemp551 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1aU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_less, __Vtemp551);
    __Vtemp552 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x19U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_less, __Vtemp552);
    __Vtemp553 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x18U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_less, __Vtemp553);
    __Vtemp554 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x17U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_less, __Vtemp554);
    __Vtemp555 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x16U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_less, __Vtemp555);
    __Vtemp556 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x15U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_less, __Vtemp556);
    __Vtemp557 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x14U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_less, __Vtemp557);
    __Vtemp558 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x13U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_less, __Vtemp558);
    __Vtemp559 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x12U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_less, __Vtemp559);
    __Vtemp560 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x11U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_less, __Vtemp560);
    __Vtemp561 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x10U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_less, __Vtemp561);
    __Vtemp562 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xfU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_less, __Vtemp562);
    __Vtemp563 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xeU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_less, __Vtemp563);
    __Vtemp564 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xdU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_less, __Vtemp564);
    __Vtemp565 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xcU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_less, __Vtemp565);
    __Vtemp566 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xbU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_less, __Vtemp566);
    __Vtemp567 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xaU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_less, __Vtemp567);
    __Vtemp568 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 9U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_less, __Vtemp568);
    __Vtemp569 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 8U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_less, __Vtemp569);
    __Vtemp570 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 7U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_less, __Vtemp570);
    __Vtemp571 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 6U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_less, __Vtemp571);
    __Vtemp572 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 5U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_less, __Vtemp572);
    __Vtemp573 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 4U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_less, __Vtemp573);
    __Vtemp574 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 3U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_less, __Vtemp574);
    __Vtemp575 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 2U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_less, __Vtemp575);
    __Vtemp576 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 1U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_less, __Vtemp576);
    this->__PVT__o_lessthan = (1U & (((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                                       ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                                      & (IData)(this->__PVT__i_signed))
                                      ? (~ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U))
                                      : VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U)));
}

void Vtestbench_comparator::_settle__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_settle__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGNBIT_QI(1,0x20U, this->__PVT__sig_less, 0U);
    VL_ASSIGNBIT_QO(1,0x20U, this->__PVT__sig_equal, 1U);
    this->__PVT__o_equal = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0U));
}

void Vtestbench_comparator::_settle__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__9(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_settle__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__9\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp641;
    CData/*31:0*/ __Vtemp642;
    CData/*31:0*/ __Vtemp643;
    CData/*31:0*/ __Vtemp644;
    CData/*31:0*/ __Vtemp645;
    CData/*31:0*/ __Vtemp646;
    CData/*31:0*/ __Vtemp647;
    CData/*31:0*/ __Vtemp648;
    CData/*31:0*/ __Vtemp649;
    CData/*31:0*/ __Vtemp650;
    CData/*31:0*/ __Vtemp651;
    CData/*31:0*/ __Vtemp652;
    CData/*31:0*/ __Vtemp653;
    CData/*31:0*/ __Vtemp654;
    CData/*31:0*/ __Vtemp655;
    CData/*31:0*/ __Vtemp656;
    CData/*31:0*/ __Vtemp657;
    CData/*31:0*/ __Vtemp658;
    CData/*31:0*/ __Vtemp659;
    CData/*31:0*/ __Vtemp660;
    CData/*31:0*/ __Vtemp661;
    CData/*31:0*/ __Vtemp662;
    CData/*31:0*/ __Vtemp663;
    CData/*31:0*/ __Vtemp664;
    CData/*31:0*/ __Vtemp665;
    CData/*31:0*/ __Vtemp666;
    CData/*31:0*/ __Vtemp667;
    CData/*31:0*/ __Vtemp668;
    CData/*31:0*/ __Vtemp669;
    CData/*31:0*/ __Vtemp670;
    CData/*31:0*/ __Vtemp671;
    CData/*31:0*/ __Vtemp672;
    CData/*31:0*/ __Vtemp673;
    CData/*31:0*/ __Vtemp674;
    CData/*31:0*/ __Vtemp675;
    CData/*31:0*/ __Vtemp676;
    CData/*31:0*/ __Vtemp677;
    CData/*31:0*/ __Vtemp678;
    CData/*31:0*/ __Vtemp679;
    CData/*31:0*/ __Vtemp680;
    CData/*31:0*/ __Vtemp681;
    CData/*31:0*/ __Vtemp682;
    CData/*31:0*/ __Vtemp683;
    CData/*31:0*/ __Vtemp684;
    CData/*31:0*/ __Vtemp685;
    CData/*31:0*/ __Vtemp686;
    CData/*31:0*/ __Vtemp687;
    CData/*31:0*/ __Vtemp688;
    CData/*31:0*/ __Vtemp689;
    CData/*31:0*/ __Vtemp690;
    CData/*31:0*/ __Vtemp691;
    CData/*31:0*/ __Vtemp692;
    CData/*31:0*/ __Vtemp693;
    CData/*31:0*/ __Vtemp694;
    CData/*31:0*/ __Vtemp695;
    CData/*31:0*/ __Vtemp696;
    CData/*31:0*/ __Vtemp697;
    CData/*31:0*/ __Vtemp698;
    CData/*31:0*/ __Vtemp699;
    CData/*31:0*/ __Vtemp700;
    CData/*31:0*/ __Vtemp701;
    CData/*31:0*/ __Vtemp702;
    CData/*31:0*/ __Vtemp703;
    CData/*31:0*/ __Vtemp704;
    // Body
    __Vtemp641 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_equal, __Vtemp641);
    __Vtemp642 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_equal, __Vtemp642);
    __Vtemp643 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_equal, __Vtemp643);
    __Vtemp644 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_equal, __Vtemp644);
    __Vtemp645 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_equal, __Vtemp645);
    __Vtemp646 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_equal, __Vtemp646);
    __Vtemp647 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_equal, __Vtemp647);
    __Vtemp648 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_equal, __Vtemp648);
    __Vtemp649 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_equal, __Vtemp649);
    __Vtemp650 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_equal, __Vtemp650);
    __Vtemp651 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_equal, __Vtemp651);
    __Vtemp652 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_equal, __Vtemp652);
    __Vtemp653 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_equal, __Vtemp653);
    __Vtemp654 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_equal, __Vtemp654);
    __Vtemp655 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_equal, __Vtemp655);
    __Vtemp656 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_equal, __Vtemp656);
    __Vtemp657 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_equal, __Vtemp657);
    __Vtemp658 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_equal, __Vtemp658);
    __Vtemp659 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_equal, __Vtemp659);
    __Vtemp660 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_equal, __Vtemp660);
    __Vtemp661 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_equal, __Vtemp661);
    __Vtemp662 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_equal, __Vtemp662);
    __Vtemp663 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_equal, __Vtemp663);
    __Vtemp664 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_equal, __Vtemp664);
    __Vtemp665 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_equal, __Vtemp665);
    __Vtemp666 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_equal, __Vtemp666);
    __Vtemp667 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_equal, __Vtemp667);
    __Vtemp668 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_equal, __Vtemp668);
    __Vtemp669 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_equal, __Vtemp669);
    __Vtemp670 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_equal, __Vtemp670);
    __Vtemp671 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_equal, __Vtemp671);
    __Vtemp672 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_equal, __Vtemp672);
    __Vtemp673 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x20U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_less, __Vtemp673);
    __Vtemp674 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1fU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_less, __Vtemp674);
    __Vtemp675 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1eU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_less, __Vtemp675);
    __Vtemp676 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1dU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_less, __Vtemp676);
    __Vtemp677 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1cU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_less, __Vtemp677);
    __Vtemp678 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1bU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_less, __Vtemp678);
    __Vtemp679 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1aU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_less, __Vtemp679);
    __Vtemp680 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x19U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_less, __Vtemp680);
    __Vtemp681 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x18U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_less, __Vtemp681);
    __Vtemp682 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x17U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_less, __Vtemp682);
    __Vtemp683 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x16U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_less, __Vtemp683);
    __Vtemp684 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x15U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_less, __Vtemp684);
    __Vtemp685 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x14U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_less, __Vtemp685);
    __Vtemp686 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x13U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_less, __Vtemp686);
    __Vtemp687 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x12U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_less, __Vtemp687);
    __Vtemp688 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x11U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_less, __Vtemp688);
    __Vtemp689 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x10U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_less, __Vtemp689);
    __Vtemp690 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xfU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_less, __Vtemp690);
    __Vtemp691 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xeU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_less, __Vtemp691);
    __Vtemp692 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xdU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_less, __Vtemp692);
    __Vtemp693 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xcU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_less, __Vtemp693);
    __Vtemp694 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xbU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_less, __Vtemp694);
    __Vtemp695 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xaU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_less, __Vtemp695);
    __Vtemp696 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 9U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_less, __Vtemp696);
    __Vtemp697 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 8U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_less, __Vtemp697);
    __Vtemp698 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 7U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_less, __Vtemp698);
    __Vtemp699 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 6U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_less, __Vtemp699);
    __Vtemp700 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 5U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_less, __Vtemp700);
    __Vtemp701 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 4U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_less, __Vtemp701);
    __Vtemp702 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 3U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_less, __Vtemp702);
    __Vtemp703 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 2U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_less, __Vtemp703);
    __Vtemp704 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 1U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_less, __Vtemp704);
    this->__PVT__o_lessthan = (1U & (((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                                       ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                                      & (IData)(this->__PVT__i_signed))
                                      ? (~ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U))
                                      : VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U)));
}

void Vtestbench_comparator::_settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGNBIT_QI(1,0x20U, this->__PVT__sig_less, 0U);
    VL_ASSIGNBIT_QO(1,0x20U, this->__PVT__sig_equal, 1U);
    this->__PVT__o_equal = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0U));
}

void Vtestbench_comparator::_settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__8(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__8\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp769;
    CData/*31:0*/ __Vtemp770;
    CData/*31:0*/ __Vtemp771;
    CData/*31:0*/ __Vtemp772;
    CData/*31:0*/ __Vtemp773;
    CData/*31:0*/ __Vtemp774;
    CData/*31:0*/ __Vtemp775;
    CData/*31:0*/ __Vtemp776;
    CData/*31:0*/ __Vtemp777;
    CData/*31:0*/ __Vtemp778;
    CData/*31:0*/ __Vtemp779;
    CData/*31:0*/ __Vtemp780;
    CData/*31:0*/ __Vtemp781;
    CData/*31:0*/ __Vtemp782;
    CData/*31:0*/ __Vtemp783;
    CData/*31:0*/ __Vtemp784;
    CData/*31:0*/ __Vtemp785;
    CData/*31:0*/ __Vtemp786;
    CData/*31:0*/ __Vtemp787;
    CData/*31:0*/ __Vtemp788;
    CData/*31:0*/ __Vtemp789;
    CData/*31:0*/ __Vtemp790;
    CData/*31:0*/ __Vtemp791;
    CData/*31:0*/ __Vtemp792;
    CData/*31:0*/ __Vtemp793;
    CData/*31:0*/ __Vtemp794;
    CData/*31:0*/ __Vtemp795;
    CData/*31:0*/ __Vtemp796;
    CData/*31:0*/ __Vtemp797;
    CData/*31:0*/ __Vtemp798;
    CData/*31:0*/ __Vtemp799;
    CData/*31:0*/ __Vtemp800;
    CData/*31:0*/ __Vtemp801;
    CData/*31:0*/ __Vtemp802;
    CData/*31:0*/ __Vtemp803;
    CData/*31:0*/ __Vtemp804;
    CData/*31:0*/ __Vtemp805;
    CData/*31:0*/ __Vtemp806;
    CData/*31:0*/ __Vtemp807;
    CData/*31:0*/ __Vtemp808;
    CData/*31:0*/ __Vtemp809;
    CData/*31:0*/ __Vtemp810;
    CData/*31:0*/ __Vtemp811;
    CData/*31:0*/ __Vtemp812;
    CData/*31:0*/ __Vtemp813;
    CData/*31:0*/ __Vtemp814;
    CData/*31:0*/ __Vtemp815;
    CData/*31:0*/ __Vtemp816;
    CData/*31:0*/ __Vtemp817;
    CData/*31:0*/ __Vtemp818;
    CData/*31:0*/ __Vtemp819;
    CData/*31:0*/ __Vtemp820;
    CData/*31:0*/ __Vtemp821;
    CData/*31:0*/ __Vtemp822;
    CData/*31:0*/ __Vtemp823;
    CData/*31:0*/ __Vtemp824;
    CData/*31:0*/ __Vtemp825;
    CData/*31:0*/ __Vtemp826;
    CData/*31:0*/ __Vtemp827;
    CData/*31:0*/ __Vtemp828;
    CData/*31:0*/ __Vtemp829;
    CData/*31:0*/ __Vtemp830;
    CData/*31:0*/ __Vtemp831;
    CData/*31:0*/ __Vtemp832;
    // Body
    __Vtemp769 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_equal, __Vtemp769);
    __Vtemp770 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_equal, __Vtemp770);
    __Vtemp771 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_equal, __Vtemp771);
    __Vtemp772 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_equal, __Vtemp772);
    __Vtemp773 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_equal, __Vtemp773);
    __Vtemp774 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_equal, __Vtemp774);
    __Vtemp775 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_equal, __Vtemp775);
    __Vtemp776 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_equal, __Vtemp776);
    __Vtemp777 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_equal, __Vtemp777);
    __Vtemp778 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_equal, __Vtemp778);
    __Vtemp779 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_equal, __Vtemp779);
    __Vtemp780 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_equal, __Vtemp780);
    __Vtemp781 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_equal, __Vtemp781);
    __Vtemp782 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_equal, __Vtemp782);
    __Vtemp783 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_equal, __Vtemp783);
    __Vtemp784 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_equal, __Vtemp784);
    __Vtemp785 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_equal, __Vtemp785);
    __Vtemp786 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_equal, __Vtemp786);
    __Vtemp787 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_equal, __Vtemp787);
    __Vtemp788 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_equal, __Vtemp788);
    __Vtemp789 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_equal, __Vtemp789);
    __Vtemp790 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_equal, __Vtemp790);
    __Vtemp791 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_equal, __Vtemp791);
    __Vtemp792 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_equal, __Vtemp792);
    __Vtemp793 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_equal, __Vtemp793);
    __Vtemp794 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_equal, __Vtemp794);
    __Vtemp795 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_equal, __Vtemp795);
    __Vtemp796 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_equal, __Vtemp796);
    __Vtemp797 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_equal, __Vtemp797);
    __Vtemp798 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_equal, __Vtemp798);
    __Vtemp799 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_equal, __Vtemp799);
    __Vtemp800 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_equal, __Vtemp800);
    __Vtemp801 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x20U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_less, __Vtemp801);
    __Vtemp802 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1fU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_less, __Vtemp802);
    __Vtemp803 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1eU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_less, __Vtemp803);
    __Vtemp804 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1dU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_less, __Vtemp804);
    __Vtemp805 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1cU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_less, __Vtemp805);
    __Vtemp806 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1bU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_less, __Vtemp806);
    __Vtemp807 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1aU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_less, __Vtemp807);
    __Vtemp808 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x19U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_less, __Vtemp808);
    __Vtemp809 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x18U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_less, __Vtemp809);
    __Vtemp810 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x17U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_less, __Vtemp810);
    __Vtemp811 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x16U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_less, __Vtemp811);
    __Vtemp812 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x15U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_less, __Vtemp812);
    __Vtemp813 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x14U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_less, __Vtemp813);
    __Vtemp814 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x13U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_less, __Vtemp814);
    __Vtemp815 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x12U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_less, __Vtemp815);
    __Vtemp816 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x11U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_less, __Vtemp816);
    __Vtemp817 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x10U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_less, __Vtemp817);
    __Vtemp818 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xfU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_less, __Vtemp818);
    __Vtemp819 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xeU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_less, __Vtemp819);
    __Vtemp820 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xdU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_less, __Vtemp820);
    __Vtemp821 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xcU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_less, __Vtemp821);
    __Vtemp822 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xbU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_less, __Vtemp822);
    __Vtemp823 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xaU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_less, __Vtemp823);
    __Vtemp824 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 9U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_less, __Vtemp824);
    __Vtemp825 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 8U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_less, __Vtemp825);
    __Vtemp826 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 7U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_less, __Vtemp826);
    __Vtemp827 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 6U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_less, __Vtemp827);
    __Vtemp828 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 5U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_less, __Vtemp828);
    __Vtemp829 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 4U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_less, __Vtemp829);
    __Vtemp830 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 3U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_less, __Vtemp830);
    __Vtemp831 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 2U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_less, __Vtemp831);
    __Vtemp832 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 1U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_less, __Vtemp832);
    this->__PVT__o_lessthan = (1U & (((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                                       ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                                      & (IData)(this->__PVT__i_signed))
                                      ? (~ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U))
                                      : VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U)));
}

void Vtestbench_comparator::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_ctor_var_reset\n"); );
    // Body
    __PVT__i_a = VL_RAND_RESET_I(32);
    __PVT__i_b = VL_RAND_RESET_I(32);
    __PVT__i_signed = VL_RAND_RESET_I(1);
    __PVT__o_lessthan = VL_RAND_RESET_I(1);
    __PVT__o_equal = VL_RAND_RESET_I(1);
    __PVT__sig_less = VL_RAND_RESET_Q(33);
    __PVT__sig_equal = VL_RAND_RESET_Q(33);
}
