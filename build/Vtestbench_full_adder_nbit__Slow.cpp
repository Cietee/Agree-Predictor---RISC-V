// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_full_adder_nbit.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_full_adder_nbit) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_full_adder_nbit::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_full_adder_nbit::~Vtestbench_full_adder_nbit() {
}

void Vtestbench_full_adder_nbit::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_adder_nbit::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_carry, 0U);
    this->__PVT__o_carry = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x20U));
}

void Vtestbench_full_adder_nbit::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__6(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_adder_nbit::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__6\n"); );
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
    __Vtemp1 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                       & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)) 
                      | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0U) 
                         & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_carry, __Vtemp1);
    __Vtemp2 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                       & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)) 
                      | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 1U) 
                         & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_carry, __Vtemp2);
    __Vtemp3 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                       & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)) 
                      | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 2U) 
                         & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_carry, __Vtemp3);
    __Vtemp4 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                       & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)) 
                      | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 3U) 
                         & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_carry, __Vtemp4);
    __Vtemp5 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                       & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)) 
                      | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 4U) 
                         & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_carry, __Vtemp5);
    __Vtemp6 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                       & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)) 
                      | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 5U) 
                         & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_carry, __Vtemp6);
    __Vtemp7 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                       & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)) 
                      | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 6U) 
                         & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_carry, __Vtemp7);
    __Vtemp8 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                       & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)) 
                      | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 7U) 
                         & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_carry, __Vtemp8);
    __Vtemp9 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                       & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)) 
                      | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 8U) 
                         & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_carry, __Vtemp9);
    __Vtemp10 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 9U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_carry, __Vtemp10);
    __Vtemp11 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xaU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_carry, __Vtemp11);
    __Vtemp12 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xbU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_carry, __Vtemp12);
    __Vtemp13 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xcU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_carry, __Vtemp13);
    __Vtemp14 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xdU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_carry, __Vtemp14);
    __Vtemp15 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xeU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_carry, __Vtemp15);
    __Vtemp16 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xfU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_carry, __Vtemp16);
    __Vtemp17 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x10U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_carry, __Vtemp17);
    __Vtemp18 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x11U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_carry, __Vtemp18);
    __Vtemp19 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x12U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_carry, __Vtemp19);
    __Vtemp20 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x13U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_carry, __Vtemp20);
    __Vtemp21 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x14U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_carry, __Vtemp21);
    __Vtemp22 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x15U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_carry, __Vtemp22);
    __Vtemp23 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x16U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_carry, __Vtemp23);
    __Vtemp24 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x17U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_carry, __Vtemp24);
    __Vtemp25 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x18U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_carry, __Vtemp25);
    __Vtemp26 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x19U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_carry, __Vtemp26);
    __Vtemp27 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1aU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_carry, __Vtemp27);
    __Vtemp28 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1bU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_carry, __Vtemp28);
    __Vtemp29 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1cU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_carry, __Vtemp29);
    __Vtemp30 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1dU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_carry, __Vtemp30);
    __Vtemp31 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1eU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_carry, __Vtemp31);
    __Vtemp32 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1fU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x20U, this->__PVT__sig_carry, __Vtemp32);
    VL_ASSIGNBIT_II(1,0U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0U))));
    VL_ASSIGNBIT_II(1,1U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 1U))));
    VL_ASSIGNBIT_II(1,2U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 2U))));
    VL_ASSIGNBIT_II(1,3U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 3U))));
    VL_ASSIGNBIT_II(1,4U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 4U))));
    VL_ASSIGNBIT_II(1,5U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 5U))));
    VL_ASSIGNBIT_II(1,6U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 6U))));
    VL_ASSIGNBIT_II(1,7U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 7U))));
    VL_ASSIGNBIT_II(1,8U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 8U))));
    VL_ASSIGNBIT_II(1,9U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 9U))));
    VL_ASSIGNBIT_II(1,0xaU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xaU))));
    VL_ASSIGNBIT_II(1,0xbU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xbU))));
    VL_ASSIGNBIT_II(1,0xcU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xcU))));
    VL_ASSIGNBIT_II(1,0xdU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xdU))));
    VL_ASSIGNBIT_II(1,0xeU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xeU))));
    VL_ASSIGNBIT_II(1,0xfU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xfU))));
    VL_ASSIGNBIT_II(1,0x10U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x10U))));
    VL_ASSIGNBIT_II(1,0x11U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x11U))));
    VL_ASSIGNBIT_II(1,0x12U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x12U))));
    VL_ASSIGNBIT_II(1,0x13U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x13U))));
    VL_ASSIGNBIT_II(1,0x14U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x14U))));
    VL_ASSIGNBIT_II(1,0x15U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x15U))));
    VL_ASSIGNBIT_II(1,0x16U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x16U))));
    VL_ASSIGNBIT_II(1,0x17U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x17U))));
    VL_ASSIGNBIT_II(1,0x18U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x18U))));
    VL_ASSIGNBIT_II(1,0x19U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x19U))));
    VL_ASSIGNBIT_II(1,0x1aU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1aU))));
    VL_ASSIGNBIT_II(1,0x1bU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1bU))));
    VL_ASSIGNBIT_II(1,0x1cU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1cU))));
    VL_ASSIGNBIT_II(1,0x1dU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1dU))));
    VL_ASSIGNBIT_II(1,0x1eU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1eU))));
    VL_ASSIGNBIT_II(1,0x1fU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1fU))));
    this->__PVT__o_sum = this->__PVT__sum;
}

void Vtestbench_full_adder_nbit::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_adder_nbit::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_carry, 0U);
    this->__PVT__o_carry = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x20U));
}

void Vtestbench_full_adder_nbit::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__7(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_adder_nbit::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__7\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp65;
    CData/*31:0*/ __Vtemp66;
    CData/*31:0*/ __Vtemp67;
    CData/*31:0*/ __Vtemp68;
    CData/*31:0*/ __Vtemp69;
    CData/*31:0*/ __Vtemp70;
    CData/*31:0*/ __Vtemp71;
    CData/*31:0*/ __Vtemp72;
    CData/*31:0*/ __Vtemp73;
    CData/*31:0*/ __Vtemp74;
    CData/*31:0*/ __Vtemp75;
    CData/*31:0*/ __Vtemp76;
    CData/*31:0*/ __Vtemp77;
    CData/*31:0*/ __Vtemp78;
    CData/*31:0*/ __Vtemp79;
    CData/*31:0*/ __Vtemp80;
    CData/*31:0*/ __Vtemp81;
    CData/*31:0*/ __Vtemp82;
    CData/*31:0*/ __Vtemp83;
    CData/*31:0*/ __Vtemp84;
    CData/*31:0*/ __Vtemp85;
    CData/*31:0*/ __Vtemp86;
    CData/*31:0*/ __Vtemp87;
    CData/*31:0*/ __Vtemp88;
    CData/*31:0*/ __Vtemp89;
    CData/*31:0*/ __Vtemp90;
    CData/*31:0*/ __Vtemp91;
    CData/*31:0*/ __Vtemp92;
    CData/*31:0*/ __Vtemp93;
    CData/*31:0*/ __Vtemp94;
    CData/*31:0*/ __Vtemp95;
    CData/*31:0*/ __Vtemp96;
    // Body
    __Vtemp65 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_carry, __Vtemp65);
    __Vtemp66 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 1U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_carry, __Vtemp66);
    __Vtemp67 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 2U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_carry, __Vtemp67);
    __Vtemp68 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 3U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_carry, __Vtemp68);
    __Vtemp69 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 4U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_carry, __Vtemp69);
    __Vtemp70 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 5U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_carry, __Vtemp70);
    __Vtemp71 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 6U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_carry, __Vtemp71);
    __Vtemp72 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 7U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_carry, __Vtemp72);
    __Vtemp73 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 8U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_carry, __Vtemp73);
    __Vtemp74 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 9U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_carry, __Vtemp74);
    __Vtemp75 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xaU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_carry, __Vtemp75);
    __Vtemp76 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xbU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_carry, __Vtemp76);
    __Vtemp77 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xcU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_carry, __Vtemp77);
    __Vtemp78 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xdU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_carry, __Vtemp78);
    __Vtemp79 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xeU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_carry, __Vtemp79);
    __Vtemp80 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xfU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_carry, __Vtemp80);
    __Vtemp81 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x10U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_carry, __Vtemp81);
    __Vtemp82 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x11U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_carry, __Vtemp82);
    __Vtemp83 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x12U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_carry, __Vtemp83);
    __Vtemp84 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x13U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_carry, __Vtemp84);
    __Vtemp85 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x14U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_carry, __Vtemp85);
    __Vtemp86 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x15U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_carry, __Vtemp86);
    __Vtemp87 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x16U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_carry, __Vtemp87);
    __Vtemp88 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x17U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_carry, __Vtemp88);
    __Vtemp89 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x18U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_carry, __Vtemp89);
    __Vtemp90 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x19U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_carry, __Vtemp90);
    __Vtemp91 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1aU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_carry, __Vtemp91);
    __Vtemp92 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1bU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_carry, __Vtemp92);
    __Vtemp93 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1cU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_carry, __Vtemp93);
    __Vtemp94 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1dU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_carry, __Vtemp94);
    __Vtemp95 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1eU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_carry, __Vtemp95);
    __Vtemp96 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1fU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x20U, this->__PVT__sig_carry, __Vtemp96);
    VL_ASSIGNBIT_II(1,0U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0U))));
    VL_ASSIGNBIT_II(1,1U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 1U))));
    VL_ASSIGNBIT_II(1,2U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 2U))));
    VL_ASSIGNBIT_II(1,3U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 3U))));
    VL_ASSIGNBIT_II(1,4U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 4U))));
    VL_ASSIGNBIT_II(1,5U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 5U))));
    VL_ASSIGNBIT_II(1,6U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 6U))));
    VL_ASSIGNBIT_II(1,7U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 7U))));
    VL_ASSIGNBIT_II(1,8U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 8U))));
    VL_ASSIGNBIT_II(1,9U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 9U))));
    VL_ASSIGNBIT_II(1,0xaU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xaU))));
    VL_ASSIGNBIT_II(1,0xbU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xbU))));
    VL_ASSIGNBIT_II(1,0xcU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xcU))));
    VL_ASSIGNBIT_II(1,0xdU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xdU))));
    VL_ASSIGNBIT_II(1,0xeU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xeU))));
    VL_ASSIGNBIT_II(1,0xfU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xfU))));
    VL_ASSIGNBIT_II(1,0x10U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x10U))));
    VL_ASSIGNBIT_II(1,0x11U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x11U))));
    VL_ASSIGNBIT_II(1,0x12U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x12U))));
    VL_ASSIGNBIT_II(1,0x13U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x13U))));
    VL_ASSIGNBIT_II(1,0x14U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x14U))));
    VL_ASSIGNBIT_II(1,0x15U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x15U))));
    VL_ASSIGNBIT_II(1,0x16U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x16U))));
    VL_ASSIGNBIT_II(1,0x17U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x17U))));
    VL_ASSIGNBIT_II(1,0x18U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x18U))));
    VL_ASSIGNBIT_II(1,0x19U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x19U))));
    VL_ASSIGNBIT_II(1,0x1aU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1aU))));
    VL_ASSIGNBIT_II(1,0x1bU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1bU))));
    VL_ASSIGNBIT_II(1,0x1cU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1cU))));
    VL_ASSIGNBIT_II(1,0x1dU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1dU))));
    VL_ASSIGNBIT_II(1,0x1eU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1eU))));
    VL_ASSIGNBIT_II(1,0x1fU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1fU))));
    this->__PVT__o_sum = this->__PVT__sum;
}

void Vtestbench_full_adder_nbit::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_adder_nbit::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_carry, 0U);
    this->__PVT__o_carry = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x20U));
}

void Vtestbench_full_adder_nbit::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__8(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_adder_nbit::_settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__8\n"); );
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
    // Body
    __Vtemp129 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_carry, __Vtemp129);
    __Vtemp130 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 1U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_carry, __Vtemp130);
    __Vtemp131 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 2U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_carry, __Vtemp131);
    __Vtemp132 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 3U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_carry, __Vtemp132);
    __Vtemp133 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 4U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_carry, __Vtemp133);
    __Vtemp134 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 5U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_carry, __Vtemp134);
    __Vtemp135 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 6U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_carry, __Vtemp135);
    __Vtemp136 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 7U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_carry, __Vtemp136);
    __Vtemp137 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 8U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_carry, __Vtemp137);
    __Vtemp138 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 9U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_carry, __Vtemp138);
    __Vtemp139 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xaU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_carry, __Vtemp139);
    __Vtemp140 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xbU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_carry, __Vtemp140);
    __Vtemp141 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xcU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_carry, __Vtemp141);
    __Vtemp142 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xdU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_carry, __Vtemp142);
    __Vtemp143 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xeU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_carry, __Vtemp143);
    __Vtemp144 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xfU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_carry, __Vtemp144);
    __Vtemp145 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x10U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_carry, __Vtemp145);
    __Vtemp146 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x11U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_carry, __Vtemp146);
    __Vtemp147 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x12U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_carry, __Vtemp147);
    __Vtemp148 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x13U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_carry, __Vtemp148);
    __Vtemp149 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x14U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_carry, __Vtemp149);
    __Vtemp150 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x15U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_carry, __Vtemp150);
    __Vtemp151 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x16U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_carry, __Vtemp151);
    __Vtemp152 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x17U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_carry, __Vtemp152);
    __Vtemp153 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x18U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_carry, __Vtemp153);
    __Vtemp154 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x19U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_carry, __Vtemp154);
    __Vtemp155 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1aU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_carry, __Vtemp155);
    __Vtemp156 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1bU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_carry, __Vtemp156);
    __Vtemp157 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1cU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_carry, __Vtemp157);
    __Vtemp158 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1dU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_carry, __Vtemp158);
    __Vtemp159 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1eU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_carry, __Vtemp159);
    __Vtemp160 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1fU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x20U, this->__PVT__sig_carry, __Vtemp160);
    VL_ASSIGNBIT_II(1,0U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0U))));
    VL_ASSIGNBIT_II(1,1U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 1U))));
    VL_ASSIGNBIT_II(1,2U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 2U))));
    VL_ASSIGNBIT_II(1,3U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 3U))));
    VL_ASSIGNBIT_II(1,4U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 4U))));
    VL_ASSIGNBIT_II(1,5U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 5U))));
    VL_ASSIGNBIT_II(1,6U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 6U))));
    VL_ASSIGNBIT_II(1,7U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 7U))));
    VL_ASSIGNBIT_II(1,8U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 8U))));
    VL_ASSIGNBIT_II(1,9U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 9U))));
    VL_ASSIGNBIT_II(1,0xaU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xaU))));
    VL_ASSIGNBIT_II(1,0xbU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xbU))));
    VL_ASSIGNBIT_II(1,0xcU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xcU))));
    VL_ASSIGNBIT_II(1,0xdU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xdU))));
    VL_ASSIGNBIT_II(1,0xeU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xeU))));
    VL_ASSIGNBIT_II(1,0xfU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xfU))));
    VL_ASSIGNBIT_II(1,0x10U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x10U))));
    VL_ASSIGNBIT_II(1,0x11U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x11U))));
    VL_ASSIGNBIT_II(1,0x12U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x12U))));
    VL_ASSIGNBIT_II(1,0x13U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x13U))));
    VL_ASSIGNBIT_II(1,0x14U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x14U))));
    VL_ASSIGNBIT_II(1,0x15U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x15U))));
    VL_ASSIGNBIT_II(1,0x16U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x16U))));
    VL_ASSIGNBIT_II(1,0x17U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x17U))));
    VL_ASSIGNBIT_II(1,0x18U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x18U))));
    VL_ASSIGNBIT_II(1,0x19U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x19U))));
    VL_ASSIGNBIT_II(1,0x1aU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1aU))));
    VL_ASSIGNBIT_II(1,0x1bU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1bU))));
    VL_ASSIGNBIT_II(1,0x1cU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1cU))));
    VL_ASSIGNBIT_II(1,0x1dU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1dU))));
    VL_ASSIGNBIT_II(1,0x1eU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1eU))));
    VL_ASSIGNBIT_II(1,0x1fU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1fU))));
    this->__PVT__o_sum = this->__PVT__sum;
}

void Vtestbench_full_adder_nbit::_settle__TOP__testbench__TAGE__writeback_unit__PCplus4__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_adder_nbit::_settle__TOP__testbench__TAGE__writeback_unit__PCplus4__4\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_carry, 0U);
    this->__PVT__o_carry = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x20U));
}

void Vtestbench_full_adder_nbit::_settle__TOP__testbench__TAGE__writeback_unit__PCplus4__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_adder_nbit::_settle__TOP__testbench__TAGE__writeback_unit__PCplus4__5\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp193;
    CData/*31:0*/ __Vtemp194;
    CData/*31:0*/ __Vtemp195;
    CData/*31:0*/ __Vtemp196;
    CData/*31:0*/ __Vtemp197;
    CData/*31:0*/ __Vtemp198;
    CData/*31:0*/ __Vtemp199;
    CData/*31:0*/ __Vtemp200;
    CData/*31:0*/ __Vtemp201;
    CData/*31:0*/ __Vtemp202;
    CData/*31:0*/ __Vtemp203;
    CData/*31:0*/ __Vtemp204;
    CData/*31:0*/ __Vtemp205;
    CData/*31:0*/ __Vtemp206;
    CData/*31:0*/ __Vtemp207;
    CData/*31:0*/ __Vtemp208;
    CData/*31:0*/ __Vtemp209;
    CData/*31:0*/ __Vtemp210;
    CData/*31:0*/ __Vtemp211;
    CData/*31:0*/ __Vtemp212;
    CData/*31:0*/ __Vtemp213;
    CData/*31:0*/ __Vtemp214;
    CData/*31:0*/ __Vtemp215;
    CData/*31:0*/ __Vtemp216;
    CData/*31:0*/ __Vtemp217;
    CData/*31:0*/ __Vtemp218;
    CData/*31:0*/ __Vtemp219;
    CData/*31:0*/ __Vtemp220;
    CData/*31:0*/ __Vtemp221;
    CData/*31:0*/ __Vtemp222;
    CData/*31:0*/ __Vtemp223;
    CData/*31:0*/ __Vtemp224;
    // Body
    __Vtemp193 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_carry, __Vtemp193);
    __Vtemp194 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 1U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_carry, __Vtemp194);
    __Vtemp195 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 2U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_carry, __Vtemp195);
    __Vtemp196 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 3U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_carry, __Vtemp196);
    __Vtemp197 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 4U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_carry, __Vtemp197);
    __Vtemp198 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 5U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_carry, __Vtemp198);
    __Vtemp199 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 6U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_carry, __Vtemp199);
    __Vtemp200 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 7U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_carry, __Vtemp200);
    __Vtemp201 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 8U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_carry, __Vtemp201);
    __Vtemp202 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 9U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_carry, __Vtemp202);
    __Vtemp203 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xaU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_carry, __Vtemp203);
    __Vtemp204 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xbU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_carry, __Vtemp204);
    __Vtemp205 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xcU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_carry, __Vtemp205);
    __Vtemp206 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xdU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_carry, __Vtemp206);
    __Vtemp207 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xeU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_carry, __Vtemp207);
    __Vtemp208 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xfU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_carry, __Vtemp208);
    __Vtemp209 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x10U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_carry, __Vtemp209);
    __Vtemp210 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x11U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_carry, __Vtemp210);
    __Vtemp211 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x12U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_carry, __Vtemp211);
    __Vtemp212 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x13U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_carry, __Vtemp212);
    __Vtemp213 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x14U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_carry, __Vtemp213);
    __Vtemp214 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x15U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_carry, __Vtemp214);
    __Vtemp215 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x16U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_carry, __Vtemp215);
    __Vtemp216 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x17U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_carry, __Vtemp216);
    __Vtemp217 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x18U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_carry, __Vtemp217);
    __Vtemp218 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x19U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_carry, __Vtemp218);
    __Vtemp219 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1aU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_carry, __Vtemp219);
    __Vtemp220 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1bU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_carry, __Vtemp220);
    __Vtemp221 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1cU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_carry, __Vtemp221);
    __Vtemp222 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1dU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_carry, __Vtemp222);
    __Vtemp223 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1eU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_carry, __Vtemp223);
    __Vtemp224 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1fU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x20U, this->__PVT__sig_carry, __Vtemp224);
    VL_ASSIGNBIT_II(1,0U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0U))));
    VL_ASSIGNBIT_II(1,1U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 1U))));
    VL_ASSIGNBIT_II(1,2U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 2U))));
    VL_ASSIGNBIT_II(1,3U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 3U))));
    VL_ASSIGNBIT_II(1,4U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 4U))));
    VL_ASSIGNBIT_II(1,5U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 5U))));
    VL_ASSIGNBIT_II(1,6U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 6U))));
    VL_ASSIGNBIT_II(1,7U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 7U))));
    VL_ASSIGNBIT_II(1,8U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 8U))));
    VL_ASSIGNBIT_II(1,9U, this->__PVT__sum, (1U & (
                                                   (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 9U))));
    VL_ASSIGNBIT_II(1,0xaU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xaU))));
    VL_ASSIGNBIT_II(1,0xbU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xbU))));
    VL_ASSIGNBIT_II(1,0xcU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xcU))));
    VL_ASSIGNBIT_II(1,0xdU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xdU))));
    VL_ASSIGNBIT_II(1,0xeU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xeU))));
    VL_ASSIGNBIT_II(1,0xfU, this->__PVT__sum, (1U & 
                                               ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                                                 ^ 
                                                 VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)) 
                                                ^ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xfU))));
    VL_ASSIGNBIT_II(1,0x10U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x10U))));
    VL_ASSIGNBIT_II(1,0x11U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x11U))));
    VL_ASSIGNBIT_II(1,0x12U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x12U))));
    VL_ASSIGNBIT_II(1,0x13U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x13U))));
    VL_ASSIGNBIT_II(1,0x14U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x14U))));
    VL_ASSIGNBIT_II(1,0x15U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x15U))));
    VL_ASSIGNBIT_II(1,0x16U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x16U))));
    VL_ASSIGNBIT_II(1,0x17U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x17U))));
    VL_ASSIGNBIT_II(1,0x18U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x18U))));
    VL_ASSIGNBIT_II(1,0x19U, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x19U))));
    VL_ASSIGNBIT_II(1,0x1aU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1aU))));
    VL_ASSIGNBIT_II(1,0x1bU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1bU))));
    VL_ASSIGNBIT_II(1,0x1cU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1cU))));
    VL_ASSIGNBIT_II(1,0x1dU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1dU))));
    VL_ASSIGNBIT_II(1,0x1eU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1eU))));
    VL_ASSIGNBIT_II(1,0x1fU, this->__PVT__sum, (1U 
                                                & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                                                    ^ 
                                                    VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                                                   ^ 
                                                   VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1fU))));
    this->__PVT__o_sum = this->__PVT__sum;
}

void Vtestbench_full_adder_nbit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_adder_nbit::_ctor_var_reset\n"); );
    // Body
    __PVT__i_a = VL_RAND_RESET_I(32);
    __PVT__i_b = VL_RAND_RESET_I(32);
    __PVT__o_sum = VL_RAND_RESET_I(32);
    __PVT__o_carry = VL_RAND_RESET_I(1);
    __PVT__sig_carry = VL_RAND_RESET_Q(33);
    __PVT__sum = VL_RAND_RESET_I(32);
}
