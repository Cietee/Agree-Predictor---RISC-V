// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_full_adder_nbit.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_full_adder_nbit::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__9(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_adder_nbit::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__9\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__o_carry = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x20U));
}

VL_INLINE_OPT void Vtestbench_full_adder_nbit::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__14(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_adder_nbit::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__14\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    __Vtemp33 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_carry, __Vtemp33);
    __Vtemp34 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 1U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_carry, __Vtemp34);
    __Vtemp35 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 2U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_carry, __Vtemp35);
    __Vtemp36 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 3U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_carry, __Vtemp36);
    __Vtemp37 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 4U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_carry, __Vtemp37);
    __Vtemp38 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 5U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_carry, __Vtemp38);
    __Vtemp39 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 6U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_carry, __Vtemp39);
    __Vtemp40 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 7U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_carry, __Vtemp40);
    __Vtemp41 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 8U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_carry, __Vtemp41);
    __Vtemp42 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 9U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_carry, __Vtemp42);
    __Vtemp43 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xaU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_carry, __Vtemp43);
    __Vtemp44 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xbU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_carry, __Vtemp44);
    __Vtemp45 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xcU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_carry, __Vtemp45);
    __Vtemp46 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xdU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_carry, __Vtemp46);
    __Vtemp47 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xeU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_carry, __Vtemp47);
    __Vtemp48 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xfU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_carry, __Vtemp48);
    __Vtemp49 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x10U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_carry, __Vtemp49);
    __Vtemp50 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x11U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_carry, __Vtemp50);
    __Vtemp51 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x12U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_carry, __Vtemp51);
    __Vtemp52 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x13U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_carry, __Vtemp52);
    __Vtemp53 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x14U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_carry, __Vtemp53);
    __Vtemp54 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x15U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_carry, __Vtemp54);
    __Vtemp55 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x16U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_carry, __Vtemp55);
    __Vtemp56 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x17U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_carry, __Vtemp56);
    __Vtemp57 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x18U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_carry, __Vtemp57);
    __Vtemp58 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x19U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_carry, __Vtemp58);
    __Vtemp59 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1aU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_carry, __Vtemp59);
    __Vtemp60 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1bU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_carry, __Vtemp60);
    __Vtemp61 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1cU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_carry, __Vtemp61);
    __Vtemp62 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1dU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_carry, __Vtemp62);
    __Vtemp63 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1eU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_carry, __Vtemp63);
    __Vtemp64 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1fU) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x20U, this->__PVT__sig_carry, __Vtemp64);
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

VL_INLINE_OPT void Vtestbench_full_adder_nbit::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__10(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_adder_nbit::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__10\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__o_carry = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x20U));
}

VL_INLINE_OPT void Vtestbench_full_adder_nbit::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__15(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_adder_nbit::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__15\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp97;
    CData/*31:0*/ __Vtemp98;
    CData/*31:0*/ __Vtemp99;
    CData/*31:0*/ __Vtemp100;
    CData/*31:0*/ __Vtemp101;
    CData/*31:0*/ __Vtemp102;
    CData/*31:0*/ __Vtemp103;
    CData/*31:0*/ __Vtemp104;
    CData/*31:0*/ __Vtemp105;
    CData/*31:0*/ __Vtemp106;
    CData/*31:0*/ __Vtemp107;
    CData/*31:0*/ __Vtemp108;
    CData/*31:0*/ __Vtemp109;
    CData/*31:0*/ __Vtemp110;
    CData/*31:0*/ __Vtemp111;
    CData/*31:0*/ __Vtemp112;
    CData/*31:0*/ __Vtemp113;
    CData/*31:0*/ __Vtemp114;
    CData/*31:0*/ __Vtemp115;
    CData/*31:0*/ __Vtemp116;
    CData/*31:0*/ __Vtemp117;
    CData/*31:0*/ __Vtemp118;
    CData/*31:0*/ __Vtemp119;
    CData/*31:0*/ __Vtemp120;
    CData/*31:0*/ __Vtemp121;
    CData/*31:0*/ __Vtemp122;
    CData/*31:0*/ __Vtemp123;
    CData/*31:0*/ __Vtemp124;
    CData/*31:0*/ __Vtemp125;
    CData/*31:0*/ __Vtemp126;
    CData/*31:0*/ __Vtemp127;
    CData/*31:0*/ __Vtemp128;
    // Body
    __Vtemp97 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_carry, __Vtemp97);
    __Vtemp98 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 1U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_carry, __Vtemp98);
    __Vtemp99 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                        & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 2U) 
                          & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_carry, __Vtemp99);
    __Vtemp100 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 3U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_carry, __Vtemp100);
    __Vtemp101 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 4U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_carry, __Vtemp101);
    __Vtemp102 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 5U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_carry, __Vtemp102);
    __Vtemp103 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 6U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_carry, __Vtemp103);
    __Vtemp104 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 7U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_carry, __Vtemp104);
    __Vtemp105 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 8U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_carry, __Vtemp105);
    __Vtemp106 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 9U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_carry, __Vtemp106);
    __Vtemp107 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xaU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_carry, __Vtemp107);
    __Vtemp108 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xbU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_carry, __Vtemp108);
    __Vtemp109 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xcU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_carry, __Vtemp109);
    __Vtemp110 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xdU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_carry, __Vtemp110);
    __Vtemp111 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xeU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_carry, __Vtemp111);
    __Vtemp112 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xfU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_carry, __Vtemp112);
    __Vtemp113 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x10U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_carry, __Vtemp113);
    __Vtemp114 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x11U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_carry, __Vtemp114);
    __Vtemp115 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x12U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_carry, __Vtemp115);
    __Vtemp116 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x13U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_carry, __Vtemp116);
    __Vtemp117 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x14U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_carry, __Vtemp117);
    __Vtemp118 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x15U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_carry, __Vtemp118);
    __Vtemp119 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x16U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_carry, __Vtemp119);
    __Vtemp120 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x17U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_carry, __Vtemp120);
    __Vtemp121 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x18U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_carry, __Vtemp121);
    __Vtemp122 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x19U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_carry, __Vtemp122);
    __Vtemp123 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1aU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_carry, __Vtemp123);
    __Vtemp124 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1bU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_carry, __Vtemp124);
    __Vtemp125 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1cU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_carry, __Vtemp125);
    __Vtemp126 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1dU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_carry, __Vtemp126);
    __Vtemp127 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1eU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_carry, __Vtemp127);
    __Vtemp128 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1fU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x20U, this->__PVT__sig_carry, __Vtemp128);
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

VL_INLINE_OPT void Vtestbench_full_adder_nbit::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__11(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_adder_nbit::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__11\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__o_carry = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x20U));
}

VL_INLINE_OPT void Vtestbench_full_adder_nbit::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__16(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_adder_nbit::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__16\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    __Vtemp161 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_carry, __Vtemp161);
    __Vtemp162 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 1U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_carry, __Vtemp162);
    __Vtemp163 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 2U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_carry, __Vtemp163);
    __Vtemp164 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 3U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_carry, __Vtemp164);
    __Vtemp165 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 4U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_carry, __Vtemp165);
    __Vtemp166 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 5U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_carry, __Vtemp166);
    __Vtemp167 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 6U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_carry, __Vtemp167);
    __Vtemp168 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 7U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_carry, __Vtemp168);
    __Vtemp169 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 8U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_carry, __Vtemp169);
    __Vtemp170 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 9U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_carry, __Vtemp170);
    __Vtemp171 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xaU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_carry, __Vtemp171);
    __Vtemp172 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xbU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_carry, __Vtemp172);
    __Vtemp173 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xcU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_carry, __Vtemp173);
    __Vtemp174 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xdU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_carry, __Vtemp174);
    __Vtemp175 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xeU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_carry, __Vtemp175);
    __Vtemp176 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xfU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_carry, __Vtemp176);
    __Vtemp177 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x10U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_carry, __Vtemp177);
    __Vtemp178 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x11U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_carry, __Vtemp178);
    __Vtemp179 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x12U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_carry, __Vtemp179);
    __Vtemp180 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x13U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_carry, __Vtemp180);
    __Vtemp181 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x14U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_carry, __Vtemp181);
    __Vtemp182 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x15U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_carry, __Vtemp182);
    __Vtemp183 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x16U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_carry, __Vtemp183);
    __Vtemp184 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x17U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_carry, __Vtemp184);
    __Vtemp185 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x18U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_carry, __Vtemp185);
    __Vtemp186 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x19U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_carry, __Vtemp186);
    __Vtemp187 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1aU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_carry, __Vtemp187);
    __Vtemp188 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1bU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_carry, __Vtemp188);
    __Vtemp189 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1cU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_carry, __Vtemp189);
    __Vtemp190 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1dU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_carry, __Vtemp190);
    __Vtemp191 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1eU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_carry, __Vtemp191);
    __Vtemp192 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1fU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x20U, this->__PVT__sig_carry, __Vtemp192);
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

VL_INLINE_OPT void Vtestbench_full_adder_nbit::_combo__TOP__testbench__TAGE__writeback_unit__PCplus4__12(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_adder_nbit::_combo__TOP__testbench__TAGE__writeback_unit__PCplus4__12\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__o_carry = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x20U));
}

VL_INLINE_OPT void Vtestbench_full_adder_nbit::_combo__TOP__testbench__TAGE__writeback_unit__PCplus4__13(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_adder_nbit::_combo__TOP__testbench__TAGE__writeback_unit__PCplus4__13\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp225;
    CData/*31:0*/ __Vtemp226;
    CData/*31:0*/ __Vtemp227;
    CData/*31:0*/ __Vtemp228;
    CData/*31:0*/ __Vtemp229;
    CData/*31:0*/ __Vtemp230;
    CData/*31:0*/ __Vtemp231;
    CData/*31:0*/ __Vtemp232;
    CData/*31:0*/ __Vtemp233;
    CData/*31:0*/ __Vtemp234;
    CData/*31:0*/ __Vtemp235;
    CData/*31:0*/ __Vtemp236;
    CData/*31:0*/ __Vtemp237;
    CData/*31:0*/ __Vtemp238;
    CData/*31:0*/ __Vtemp239;
    CData/*31:0*/ __Vtemp240;
    CData/*31:0*/ __Vtemp241;
    CData/*31:0*/ __Vtemp242;
    CData/*31:0*/ __Vtemp243;
    CData/*31:0*/ __Vtemp244;
    CData/*31:0*/ __Vtemp245;
    CData/*31:0*/ __Vtemp246;
    CData/*31:0*/ __Vtemp247;
    CData/*31:0*/ __Vtemp248;
    CData/*31:0*/ __Vtemp249;
    CData/*31:0*/ __Vtemp250;
    CData/*31:0*/ __Vtemp251;
    CData/*31:0*/ __Vtemp252;
    CData/*31:0*/ __Vtemp253;
    CData/*31:0*/ __Vtemp254;
    CData/*31:0*/ __Vtemp255;
    CData/*31:0*/ __Vtemp256;
    // Body
    __Vtemp225 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_carry, __Vtemp225);
    __Vtemp226 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 1U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_carry, __Vtemp226);
    __Vtemp227 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 2U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_carry, __Vtemp227);
    __Vtemp228 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 3U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_carry, __Vtemp228);
    __Vtemp229 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 4U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_carry, __Vtemp229);
    __Vtemp230 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 5U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_carry, __Vtemp230);
    __Vtemp231 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 6U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_carry, __Vtemp231);
    __Vtemp232 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 7U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_carry, __Vtemp232);
    __Vtemp233 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 8U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_carry, __Vtemp233);
    __Vtemp234 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 9U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_carry, __Vtemp234);
    __Vtemp235 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xaU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_carry, __Vtemp235);
    __Vtemp236 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xbU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_carry, __Vtemp236);
    __Vtemp237 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xcU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_carry, __Vtemp237);
    __Vtemp238 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xdU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_carry, __Vtemp238);
    __Vtemp239 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xeU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_carry, __Vtemp239);
    __Vtemp240 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0xfU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_carry, __Vtemp240);
    __Vtemp241 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x10U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_carry, __Vtemp241);
    __Vtemp242 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x11U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_carry, __Vtemp242);
    __Vtemp243 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x12U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_carry, __Vtemp243);
    __Vtemp244 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x13U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_carry, __Vtemp244);
    __Vtemp245 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x14U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_carry, __Vtemp245);
    __Vtemp246 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x15U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_carry, __Vtemp246);
    __Vtemp247 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x16U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_carry, __Vtemp247);
    __Vtemp248 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x17U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_carry, __Vtemp248);
    __Vtemp249 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x18U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_carry, __Vtemp249);
    __Vtemp250 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x19U) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_carry, __Vtemp250);
    __Vtemp251 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1aU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_carry, __Vtemp251);
    __Vtemp252 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1bU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_carry, __Vtemp252);
    __Vtemp253 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1cU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_carry, __Vtemp253);
    __Vtemp254 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1dU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_carry, __Vtemp254);
    __Vtemp255 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1eU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_carry, __Vtemp255);
    __Vtemp256 = (1U & ((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                         & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                        | (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_carry, 0x1fU) 
                           & (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x20U, this->__PVT__sig_carry, __Vtemp256);
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
