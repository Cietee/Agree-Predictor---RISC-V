// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_full_adder_nbit__W20.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_full_adder_nbit__W20::_combo__TOP__testbench__TAGE__execute_unit__alu_module__full_adder__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_adder_nbit__W20::_combo__TOP__testbench__TAGE__execute_unit__alu_module__full_adder__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__o_carry 
        = (1U & VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x20U));
}

VL_INLINE_OPT void Vtestbench_full_adder_nbit__W20::_combo__TOP__testbench__TAGE__execute_unit__alu_module__full_adder__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_full_adder_nbit__W20::_combo__TOP__testbench__TAGE__execute_unit__alu_module__full_adder__4\n"); );
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
    __Vtemp33 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,1U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp33);
    __Vtemp34 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 1U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 1U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 1U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 1U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,2U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp34);
    __Vtemp35 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 2U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 2U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 2U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 2U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,3U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp35);
    __Vtemp36 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 3U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 3U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 3U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 3U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,4U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp36);
    __Vtemp37 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 4U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 4U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 4U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 4U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,5U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp37);
    __Vtemp38 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 5U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 5U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 5U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 5U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,6U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp38);
    __Vtemp39 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 6U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 6U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 6U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 6U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,7U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp39);
    __Vtemp40 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 7U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 7U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 7U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 7U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,8U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp40);
    __Vtemp41 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 8U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 8U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 8U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 8U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,9U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp41);
    __Vtemp42 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 9U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 9U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 9U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 9U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,0xaU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp42);
    __Vtemp43 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0xaU) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0xaU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0xaU) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0xaU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xbU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp43);
    __Vtemp44 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0xbU) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0xbU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0xbU) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0xbU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xcU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp44);
    __Vtemp45 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0xcU) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0xcU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0xcU) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0xcU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xdU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp45);
    __Vtemp46 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0xdU) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0xdU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0xdU) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0xdU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xeU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp46);
    __Vtemp47 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0xeU) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0xeU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0xeU) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0xeU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xfU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp47);
    __Vtemp48 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0xfU) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0xfU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0xfU) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0xfU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0x10U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp48);
    __Vtemp49 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x10U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x10U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x10U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x10U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x11U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp49);
    __Vtemp50 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x11U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x11U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x11U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x11U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x12U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp50);
    __Vtemp51 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x12U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x12U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x12U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x12U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x13U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp51);
    __Vtemp52 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x13U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x13U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x13U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x13U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x14U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp52);
    __Vtemp53 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x14U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x14U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x14U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x14U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x15U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp53);
    __Vtemp54 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x15U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x15U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x15U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x15U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x16U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp54);
    __Vtemp55 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x16U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x16U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x16U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x16U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x17U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp55);
    __Vtemp56 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x17U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x17U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x17U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x17U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x18U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp56);
    __Vtemp57 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x18U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x18U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x18U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x18U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x19U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp57);
    __Vtemp58 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x19U) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x19U)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x19U) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x19U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x1aU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp58);
    __Vtemp59 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x1aU) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x1aU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x1aU) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x1aU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp59);
    __Vtemp60 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x1bU) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x1bU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x1bU) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x1bU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp60);
    __Vtemp61 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x1cU) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x1cU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x1cU) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x1cU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp61);
    __Vtemp62 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x1dU) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x1dU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x1dU) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x1dU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp62);
    __Vtemp63 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x1eU) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x1eU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x1eU) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x1eU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp63);
    __Vtemp64 = (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x1fU) 
                        & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x1fU)) 
                       | (VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x1fU) 
                          & (VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x1fU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x20U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, __Vtemp64);
    VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0U))));
    VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 1U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 1U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 1U))));
    VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 2U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 2U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 2U))));
    VL_ASSIGNBIT_II(1,3U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 3U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 3U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 3U))));
    VL_ASSIGNBIT_II(1,4U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 4U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 4U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 4U))));
    VL_ASSIGNBIT_II(1,5U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 5U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 5U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 5U))));
    VL_ASSIGNBIT_II(1,6U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 6U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 6U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 6U))));
    VL_ASSIGNBIT_II(1,7U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 7U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 7U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 7U))));
    VL_ASSIGNBIT_II(1,8U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 8U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 8U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 8U))));
    VL_ASSIGNBIT_II(1,9U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 9U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 9U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 9U))));
    VL_ASSIGNBIT_II(1,0xaU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0xaU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0xaU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0xaU))));
    VL_ASSIGNBIT_II(1,0xbU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0xbU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0xbU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0xbU))));
    VL_ASSIGNBIT_II(1,0xcU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0xcU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0xcU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0xcU))));
    VL_ASSIGNBIT_II(1,0xdU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0xdU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0xdU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0xdU))));
    VL_ASSIGNBIT_II(1,0xeU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0xeU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0xeU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0xeU))));
    VL_ASSIGNBIT_II(1,0xfU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0xfU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0xfU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0xfU))));
    VL_ASSIGNBIT_II(1,0x10U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x10U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x10U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x10U))));
    VL_ASSIGNBIT_II(1,0x11U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x11U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x11U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x11U))));
    VL_ASSIGNBIT_II(1,0x12U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x12U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x12U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x12U))));
    VL_ASSIGNBIT_II(1,0x13U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x13U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x13U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x13U))));
    VL_ASSIGNBIT_II(1,0x14U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x14U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x14U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x14U))));
    VL_ASSIGNBIT_II(1,0x15U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x15U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x15U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x15U))));
    VL_ASSIGNBIT_II(1,0x16U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x16U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x16U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x16U))));
    VL_ASSIGNBIT_II(1,0x17U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x17U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x17U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x17U))));
    VL_ASSIGNBIT_II(1,0x18U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x18U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x18U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x18U))));
    VL_ASSIGNBIT_II(1,0x19U, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x19U) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x19U)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x19U))));
    VL_ASSIGNBIT_II(1,0x1aU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x1aU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x1aU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x1aU))));
    VL_ASSIGNBIT_II(1,0x1bU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x1bU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x1bU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x1bU))));
    VL_ASSIGNBIT_II(1,0x1cU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x1cU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x1cU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x1cU))));
    VL_ASSIGNBIT_II(1,0x1dU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x1dU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x1dU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x1dU))));
    VL_ASSIGNBIT_II(1,0x1eU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x1eU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x1eU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x1eU))));
    VL_ASSIGNBIT_II(1,0x1fU, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum, 
                    (1U & ((VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a, 0x1fU) 
                            ^ VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b, 0x1fU)) 
                           ^ VL_BITSEL_IQII(1,33,6,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry, 0x1fU))));
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__o_sum 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sum;
}
