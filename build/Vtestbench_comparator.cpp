// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_comparator.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_comparator::_combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__21(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__21\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__o_equal = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0U));
}

VL_INLINE_OPT void Vtestbench_comparator::_combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__26(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__26\n"); );
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
    __Vtemp65 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_equal, __Vtemp65);
    __Vtemp66 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_equal, __Vtemp66);
    __Vtemp67 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_equal, __Vtemp67);
    __Vtemp68 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_equal, __Vtemp68);
    __Vtemp69 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_equal, __Vtemp69);
    __Vtemp70 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_equal, __Vtemp70);
    __Vtemp71 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_equal, __Vtemp71);
    __Vtemp72 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_equal, __Vtemp72);
    __Vtemp73 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_equal, __Vtemp73);
    __Vtemp74 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_equal, __Vtemp74);
    __Vtemp75 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_equal, __Vtemp75);
    __Vtemp76 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_equal, __Vtemp76);
    __Vtemp77 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_equal, __Vtemp77);
    __Vtemp78 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_equal, __Vtemp78);
    __Vtemp79 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_equal, __Vtemp79);
    __Vtemp80 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_equal, __Vtemp80);
    __Vtemp81 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_equal, __Vtemp81);
    __Vtemp82 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_equal, __Vtemp82);
    __Vtemp83 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_equal, __Vtemp83);
    __Vtemp84 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_equal, __Vtemp84);
    __Vtemp85 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_equal, __Vtemp85);
    __Vtemp86 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_equal, __Vtemp86);
    __Vtemp87 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_equal, __Vtemp87);
    __Vtemp88 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_equal, __Vtemp88);
    __Vtemp89 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_equal, __Vtemp89);
    __Vtemp90 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_equal, __Vtemp90);
    __Vtemp91 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_equal, __Vtemp91);
    __Vtemp92 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_equal, __Vtemp92);
    __Vtemp93 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_equal, __Vtemp93);
    __Vtemp94 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_equal, __Vtemp94);
    __Vtemp95 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_equal, __Vtemp95);
    __Vtemp96 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                       & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                             ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_equal, __Vtemp96);
    __Vtemp97 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x20U) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_less, __Vtemp97);
    __Vtemp98 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1fU) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_less, __Vtemp98);
    __Vtemp99 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1eU) 
                       | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                           & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU))) 
                          & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_less, __Vtemp99);
    __Vtemp100 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1dU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_less, __Vtemp100);
    __Vtemp101 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1cU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_less, __Vtemp101);
    __Vtemp102 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1bU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_less, __Vtemp102);
    __Vtemp103 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1aU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_less, __Vtemp103);
    __Vtemp104 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x19U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_less, __Vtemp104);
    __Vtemp105 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x18U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_less, __Vtemp105);
    __Vtemp106 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x17U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_less, __Vtemp106);
    __Vtemp107 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x16U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_less, __Vtemp107);
    __Vtemp108 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x15U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_less, __Vtemp108);
    __Vtemp109 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x14U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_less, __Vtemp109);
    __Vtemp110 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x13U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_less, __Vtemp110);
    __Vtemp111 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x12U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_less, __Vtemp111);
    __Vtemp112 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x11U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_less, __Vtemp112);
    __Vtemp113 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x10U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_less, __Vtemp113);
    __Vtemp114 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xfU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_less, __Vtemp114);
    __Vtemp115 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xeU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_less, __Vtemp115);
    __Vtemp116 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xdU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_less, __Vtemp116);
    __Vtemp117 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xcU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_less, __Vtemp117);
    __Vtemp118 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xbU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_less, __Vtemp118);
    __Vtemp119 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xaU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_less, __Vtemp119);
    __Vtemp120 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 9U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_less, __Vtemp120);
    __Vtemp121 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 8U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_less, __Vtemp121);
    __Vtemp122 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 7U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_less, __Vtemp122);
    __Vtemp123 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 6U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_less, __Vtemp123);
    __Vtemp124 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 5U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_less, __Vtemp124);
    __Vtemp125 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 4U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_less, __Vtemp125);
    __Vtemp126 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 3U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_less, __Vtemp126);
    __Vtemp127 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 2U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_less, __Vtemp127);
    __Vtemp128 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 1U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_less, __Vtemp128);
    this->__PVT__o_lessthan = (1U & (((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                                       ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                                      & (IData)(this->__PVT__i_signed))
                                      ? (~ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U))
                                      : VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U)));
}

VL_INLINE_OPT void Vtestbench_comparator::_combo__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__15(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_combo__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__15\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__o_equal = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0U));
}

VL_INLINE_OPT void Vtestbench_comparator::_combo__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__27(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_combo__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__27\n"); );
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
    __Vtemp193 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_equal, __Vtemp193);
    __Vtemp194 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_equal, __Vtemp194);
    __Vtemp195 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_equal, __Vtemp195);
    __Vtemp196 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_equal, __Vtemp196);
    __Vtemp197 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_equal, __Vtemp197);
    __Vtemp198 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_equal, __Vtemp198);
    __Vtemp199 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_equal, __Vtemp199);
    __Vtemp200 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_equal, __Vtemp200);
    __Vtemp201 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_equal, __Vtemp201);
    __Vtemp202 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_equal, __Vtemp202);
    __Vtemp203 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_equal, __Vtemp203);
    __Vtemp204 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_equal, __Vtemp204);
    __Vtemp205 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_equal, __Vtemp205);
    __Vtemp206 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_equal, __Vtemp206);
    __Vtemp207 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_equal, __Vtemp207);
    __Vtemp208 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_equal, __Vtemp208);
    __Vtemp209 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_equal, __Vtemp209);
    __Vtemp210 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_equal, __Vtemp210);
    __Vtemp211 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_equal, __Vtemp211);
    __Vtemp212 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_equal, __Vtemp212);
    __Vtemp213 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_equal, __Vtemp213);
    __Vtemp214 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_equal, __Vtemp214);
    __Vtemp215 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_equal, __Vtemp215);
    __Vtemp216 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_equal, __Vtemp216);
    __Vtemp217 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_equal, __Vtemp217);
    __Vtemp218 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_equal, __Vtemp218);
    __Vtemp219 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_equal, __Vtemp219);
    __Vtemp220 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_equal, __Vtemp220);
    __Vtemp221 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_equal, __Vtemp221);
    __Vtemp222 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_equal, __Vtemp222);
    __Vtemp223 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_equal, __Vtemp223);
    __Vtemp224 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_equal, __Vtemp224);
    __Vtemp225 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x20U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_less, __Vtemp225);
    __Vtemp226 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1fU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_less, __Vtemp226);
    __Vtemp227 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1eU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_less, __Vtemp227);
    __Vtemp228 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1dU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_less, __Vtemp228);
    __Vtemp229 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1cU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_less, __Vtemp229);
    __Vtemp230 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1bU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_less, __Vtemp230);
    __Vtemp231 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1aU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_less, __Vtemp231);
    __Vtemp232 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x19U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_less, __Vtemp232);
    __Vtemp233 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x18U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_less, __Vtemp233);
    __Vtemp234 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x17U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_less, __Vtemp234);
    __Vtemp235 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x16U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_less, __Vtemp235);
    __Vtemp236 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x15U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_less, __Vtemp236);
    __Vtemp237 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x14U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_less, __Vtemp237);
    __Vtemp238 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x13U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_less, __Vtemp238);
    __Vtemp239 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x12U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_less, __Vtemp239);
    __Vtemp240 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x11U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_less, __Vtemp240);
    __Vtemp241 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x10U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_less, __Vtemp241);
    __Vtemp242 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xfU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_less, __Vtemp242);
    __Vtemp243 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xeU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_less, __Vtemp243);
    __Vtemp244 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xdU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_less, __Vtemp244);
    __Vtemp245 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xcU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_less, __Vtemp245);
    __Vtemp246 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xbU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_less, __Vtemp246);
    __Vtemp247 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xaU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_less, __Vtemp247);
    __Vtemp248 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 9U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_less, __Vtemp248);
    __Vtemp249 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 8U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_less, __Vtemp249);
    __Vtemp250 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 7U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_less, __Vtemp250);
    __Vtemp251 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 6U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_less, __Vtemp251);
    __Vtemp252 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 5U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_less, __Vtemp252);
    __Vtemp253 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 4U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_less, __Vtemp253);
    __Vtemp254 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 3U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_less, __Vtemp254);
    __Vtemp255 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 2U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_less, __Vtemp255);
    __Vtemp256 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 1U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_less, __Vtemp256);
    this->__PVT__o_lessthan = (1U & (((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                                       ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                                      & (IData)(this->__PVT__i_signed))
                                      ? (~ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U))
                                      : VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U)));
}

VL_INLINE_OPT void Vtestbench_comparator::_combo__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__16(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_combo__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__16\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__o_equal = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0U));
}

VL_INLINE_OPT void Vtestbench_comparator::_combo__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__28(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_combo__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__28\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp321;
    CData/*31:0*/ __Vtemp322;
    CData/*31:0*/ __Vtemp323;
    CData/*31:0*/ __Vtemp324;
    CData/*31:0*/ __Vtemp325;
    CData/*31:0*/ __Vtemp326;
    CData/*31:0*/ __Vtemp327;
    CData/*31:0*/ __Vtemp328;
    CData/*31:0*/ __Vtemp329;
    CData/*31:0*/ __Vtemp330;
    CData/*31:0*/ __Vtemp331;
    CData/*31:0*/ __Vtemp332;
    CData/*31:0*/ __Vtemp333;
    CData/*31:0*/ __Vtemp334;
    CData/*31:0*/ __Vtemp335;
    CData/*31:0*/ __Vtemp336;
    CData/*31:0*/ __Vtemp337;
    CData/*31:0*/ __Vtemp338;
    CData/*31:0*/ __Vtemp339;
    CData/*31:0*/ __Vtemp340;
    CData/*31:0*/ __Vtemp341;
    CData/*31:0*/ __Vtemp342;
    CData/*31:0*/ __Vtemp343;
    CData/*31:0*/ __Vtemp344;
    CData/*31:0*/ __Vtemp345;
    CData/*31:0*/ __Vtemp346;
    CData/*31:0*/ __Vtemp347;
    CData/*31:0*/ __Vtemp348;
    CData/*31:0*/ __Vtemp349;
    CData/*31:0*/ __Vtemp350;
    CData/*31:0*/ __Vtemp351;
    CData/*31:0*/ __Vtemp352;
    CData/*31:0*/ __Vtemp353;
    CData/*31:0*/ __Vtemp354;
    CData/*31:0*/ __Vtemp355;
    CData/*31:0*/ __Vtemp356;
    CData/*31:0*/ __Vtemp357;
    CData/*31:0*/ __Vtemp358;
    CData/*31:0*/ __Vtemp359;
    CData/*31:0*/ __Vtemp360;
    CData/*31:0*/ __Vtemp361;
    CData/*31:0*/ __Vtemp362;
    CData/*31:0*/ __Vtemp363;
    CData/*31:0*/ __Vtemp364;
    CData/*31:0*/ __Vtemp365;
    CData/*31:0*/ __Vtemp366;
    CData/*31:0*/ __Vtemp367;
    CData/*31:0*/ __Vtemp368;
    CData/*31:0*/ __Vtemp369;
    CData/*31:0*/ __Vtemp370;
    CData/*31:0*/ __Vtemp371;
    CData/*31:0*/ __Vtemp372;
    CData/*31:0*/ __Vtemp373;
    CData/*31:0*/ __Vtemp374;
    CData/*31:0*/ __Vtemp375;
    CData/*31:0*/ __Vtemp376;
    CData/*31:0*/ __Vtemp377;
    CData/*31:0*/ __Vtemp378;
    CData/*31:0*/ __Vtemp379;
    CData/*31:0*/ __Vtemp380;
    CData/*31:0*/ __Vtemp381;
    CData/*31:0*/ __Vtemp382;
    CData/*31:0*/ __Vtemp383;
    CData/*31:0*/ __Vtemp384;
    // Body
    __Vtemp321 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_equal, __Vtemp321);
    __Vtemp322 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_equal, __Vtemp322);
    __Vtemp323 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_equal, __Vtemp323);
    __Vtemp324 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_equal, __Vtemp324);
    __Vtemp325 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_equal, __Vtemp325);
    __Vtemp326 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_equal, __Vtemp326);
    __Vtemp327 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_equal, __Vtemp327);
    __Vtemp328 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_equal, __Vtemp328);
    __Vtemp329 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_equal, __Vtemp329);
    __Vtemp330 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_equal, __Vtemp330);
    __Vtemp331 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_equal, __Vtemp331);
    __Vtemp332 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_equal, __Vtemp332);
    __Vtemp333 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_equal, __Vtemp333);
    __Vtemp334 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_equal, __Vtemp334);
    __Vtemp335 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_equal, __Vtemp335);
    __Vtemp336 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_equal, __Vtemp336);
    __Vtemp337 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_equal, __Vtemp337);
    __Vtemp338 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_equal, __Vtemp338);
    __Vtemp339 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_equal, __Vtemp339);
    __Vtemp340 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_equal, __Vtemp340);
    __Vtemp341 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_equal, __Vtemp341);
    __Vtemp342 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_equal, __Vtemp342);
    __Vtemp343 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_equal, __Vtemp343);
    __Vtemp344 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_equal, __Vtemp344);
    __Vtemp345 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_equal, __Vtemp345);
    __Vtemp346 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_equal, __Vtemp346);
    __Vtemp347 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_equal, __Vtemp347);
    __Vtemp348 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_equal, __Vtemp348);
    __Vtemp349 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_equal, __Vtemp349);
    __Vtemp350 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_equal, __Vtemp350);
    __Vtemp351 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_equal, __Vtemp351);
    __Vtemp352 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_equal, __Vtemp352);
    __Vtemp353 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x20U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_less, __Vtemp353);
    __Vtemp354 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1fU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_less, __Vtemp354);
    __Vtemp355 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1eU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_less, __Vtemp355);
    __Vtemp356 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1dU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_less, __Vtemp356);
    __Vtemp357 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1cU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_less, __Vtemp357);
    __Vtemp358 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1bU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_less, __Vtemp358);
    __Vtemp359 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1aU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_less, __Vtemp359);
    __Vtemp360 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x19U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_less, __Vtemp360);
    __Vtemp361 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x18U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_less, __Vtemp361);
    __Vtemp362 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x17U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_less, __Vtemp362);
    __Vtemp363 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x16U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_less, __Vtemp363);
    __Vtemp364 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x15U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_less, __Vtemp364);
    __Vtemp365 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x14U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_less, __Vtemp365);
    __Vtemp366 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x13U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_less, __Vtemp366);
    __Vtemp367 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x12U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_less, __Vtemp367);
    __Vtemp368 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x11U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_less, __Vtemp368);
    __Vtemp369 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x10U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_less, __Vtemp369);
    __Vtemp370 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xfU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_less, __Vtemp370);
    __Vtemp371 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xeU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_less, __Vtemp371);
    __Vtemp372 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xdU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_less, __Vtemp372);
    __Vtemp373 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xcU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_less, __Vtemp373);
    __Vtemp374 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xbU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_less, __Vtemp374);
    __Vtemp375 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xaU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_less, __Vtemp375);
    __Vtemp376 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 9U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_less, __Vtemp376);
    __Vtemp377 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 8U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_less, __Vtemp377);
    __Vtemp378 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 7U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_less, __Vtemp378);
    __Vtemp379 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 6U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_less, __Vtemp379);
    __Vtemp380 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 5U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_less, __Vtemp380);
    __Vtemp381 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 4U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_less, __Vtemp381);
    __Vtemp382 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 3U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_less, __Vtemp382);
    __Vtemp383 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 2U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_less, __Vtemp383);
    __Vtemp384 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 1U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_less, __Vtemp384);
    this->__PVT__o_lessthan = (1U & (((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                                       ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                                      & (IData)(this->__PVT__i_signed))
                                      ? (~ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U))
                                      : VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U)));
}

VL_INLINE_OPT void Vtestbench_comparator::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__19(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__19\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__o_equal = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0U));
}

VL_INLINE_OPT void Vtestbench_comparator::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__24(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__24\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp449;
    CData/*31:0*/ __Vtemp450;
    CData/*31:0*/ __Vtemp451;
    CData/*31:0*/ __Vtemp452;
    CData/*31:0*/ __Vtemp453;
    CData/*31:0*/ __Vtemp454;
    CData/*31:0*/ __Vtemp455;
    CData/*31:0*/ __Vtemp456;
    CData/*31:0*/ __Vtemp457;
    CData/*31:0*/ __Vtemp458;
    CData/*31:0*/ __Vtemp459;
    CData/*31:0*/ __Vtemp460;
    CData/*31:0*/ __Vtemp461;
    CData/*31:0*/ __Vtemp462;
    CData/*31:0*/ __Vtemp463;
    CData/*31:0*/ __Vtemp464;
    CData/*31:0*/ __Vtemp465;
    CData/*31:0*/ __Vtemp466;
    CData/*31:0*/ __Vtemp467;
    CData/*31:0*/ __Vtemp468;
    CData/*31:0*/ __Vtemp469;
    CData/*31:0*/ __Vtemp470;
    CData/*31:0*/ __Vtemp471;
    CData/*31:0*/ __Vtemp472;
    CData/*31:0*/ __Vtemp473;
    CData/*31:0*/ __Vtemp474;
    CData/*31:0*/ __Vtemp475;
    CData/*31:0*/ __Vtemp476;
    CData/*31:0*/ __Vtemp477;
    CData/*31:0*/ __Vtemp478;
    CData/*31:0*/ __Vtemp479;
    CData/*31:0*/ __Vtemp480;
    CData/*31:0*/ __Vtemp481;
    CData/*31:0*/ __Vtemp482;
    CData/*31:0*/ __Vtemp483;
    CData/*31:0*/ __Vtemp484;
    CData/*31:0*/ __Vtemp485;
    CData/*31:0*/ __Vtemp486;
    CData/*31:0*/ __Vtemp487;
    CData/*31:0*/ __Vtemp488;
    CData/*31:0*/ __Vtemp489;
    CData/*31:0*/ __Vtemp490;
    CData/*31:0*/ __Vtemp491;
    CData/*31:0*/ __Vtemp492;
    CData/*31:0*/ __Vtemp493;
    CData/*31:0*/ __Vtemp494;
    CData/*31:0*/ __Vtemp495;
    CData/*31:0*/ __Vtemp496;
    CData/*31:0*/ __Vtemp497;
    CData/*31:0*/ __Vtemp498;
    CData/*31:0*/ __Vtemp499;
    CData/*31:0*/ __Vtemp500;
    CData/*31:0*/ __Vtemp501;
    CData/*31:0*/ __Vtemp502;
    CData/*31:0*/ __Vtemp503;
    CData/*31:0*/ __Vtemp504;
    CData/*31:0*/ __Vtemp505;
    CData/*31:0*/ __Vtemp506;
    CData/*31:0*/ __Vtemp507;
    CData/*31:0*/ __Vtemp508;
    CData/*31:0*/ __Vtemp509;
    CData/*31:0*/ __Vtemp510;
    CData/*31:0*/ __Vtemp511;
    CData/*31:0*/ __Vtemp512;
    // Body
    __Vtemp449 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_equal, __Vtemp449);
    __Vtemp450 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_equal, __Vtemp450);
    __Vtemp451 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_equal, __Vtemp451);
    __Vtemp452 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_equal, __Vtemp452);
    __Vtemp453 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_equal, __Vtemp453);
    __Vtemp454 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_equal, __Vtemp454);
    __Vtemp455 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_equal, __Vtemp455);
    __Vtemp456 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_equal, __Vtemp456);
    __Vtemp457 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_equal, __Vtemp457);
    __Vtemp458 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_equal, __Vtemp458);
    __Vtemp459 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_equal, __Vtemp459);
    __Vtemp460 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_equal, __Vtemp460);
    __Vtemp461 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_equal, __Vtemp461);
    __Vtemp462 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_equal, __Vtemp462);
    __Vtemp463 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_equal, __Vtemp463);
    __Vtemp464 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_equal, __Vtemp464);
    __Vtemp465 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_equal, __Vtemp465);
    __Vtemp466 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_equal, __Vtemp466);
    __Vtemp467 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_equal, __Vtemp467);
    __Vtemp468 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_equal, __Vtemp468);
    __Vtemp469 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_equal, __Vtemp469);
    __Vtemp470 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_equal, __Vtemp470);
    __Vtemp471 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_equal, __Vtemp471);
    __Vtemp472 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_equal, __Vtemp472);
    __Vtemp473 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_equal, __Vtemp473);
    __Vtemp474 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_equal, __Vtemp474);
    __Vtemp475 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_equal, __Vtemp475);
    __Vtemp476 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_equal, __Vtemp476);
    __Vtemp477 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_equal, __Vtemp477);
    __Vtemp478 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_equal, __Vtemp478);
    __Vtemp479 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_equal, __Vtemp479);
    __Vtemp480 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_equal, __Vtemp480);
    __Vtemp481 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x20U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_less, __Vtemp481);
    __Vtemp482 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1fU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_less, __Vtemp482);
    __Vtemp483 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1eU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_less, __Vtemp483);
    __Vtemp484 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1dU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_less, __Vtemp484);
    __Vtemp485 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1cU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_less, __Vtemp485);
    __Vtemp486 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1bU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_less, __Vtemp486);
    __Vtemp487 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1aU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_less, __Vtemp487);
    __Vtemp488 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x19U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_less, __Vtemp488);
    __Vtemp489 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x18U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_less, __Vtemp489);
    __Vtemp490 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x17U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_less, __Vtemp490);
    __Vtemp491 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x16U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_less, __Vtemp491);
    __Vtemp492 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x15U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_less, __Vtemp492);
    __Vtemp493 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x14U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_less, __Vtemp493);
    __Vtemp494 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x13U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_less, __Vtemp494);
    __Vtemp495 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x12U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_less, __Vtemp495);
    __Vtemp496 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x11U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_less, __Vtemp496);
    __Vtemp497 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x10U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_less, __Vtemp497);
    __Vtemp498 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xfU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_less, __Vtemp498);
    __Vtemp499 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xeU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_less, __Vtemp499);
    __Vtemp500 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xdU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_less, __Vtemp500);
    __Vtemp501 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xcU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_less, __Vtemp501);
    __Vtemp502 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xbU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_less, __Vtemp502);
    __Vtemp503 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xaU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_less, __Vtemp503);
    __Vtemp504 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 9U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_less, __Vtemp504);
    __Vtemp505 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 8U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_less, __Vtemp505);
    __Vtemp506 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 7U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_less, __Vtemp506);
    __Vtemp507 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 6U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_less, __Vtemp507);
    __Vtemp508 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 5U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_less, __Vtemp508);
    __Vtemp509 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 4U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_less, __Vtemp509);
    __Vtemp510 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 3U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_less, __Vtemp510);
    __Vtemp511 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 2U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_less, __Vtemp511);
    __Vtemp512 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 1U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_less, __Vtemp512);
    this->__PVT__o_lessthan = (1U & (((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                                       ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                                      & (IData)(this->__PVT__i_signed))
                                      ? (~ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U))
                                      : VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U)));
}

VL_INLINE_OPT void Vtestbench_comparator::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__20(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__20\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__o_equal = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0U));
}

VL_INLINE_OPT void Vtestbench_comparator::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__25(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_combo__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__25\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp577;
    CData/*31:0*/ __Vtemp578;
    CData/*31:0*/ __Vtemp579;
    CData/*31:0*/ __Vtemp580;
    CData/*31:0*/ __Vtemp581;
    CData/*31:0*/ __Vtemp582;
    CData/*31:0*/ __Vtemp583;
    CData/*31:0*/ __Vtemp584;
    CData/*31:0*/ __Vtemp585;
    CData/*31:0*/ __Vtemp586;
    CData/*31:0*/ __Vtemp587;
    CData/*31:0*/ __Vtemp588;
    CData/*31:0*/ __Vtemp589;
    CData/*31:0*/ __Vtemp590;
    CData/*31:0*/ __Vtemp591;
    CData/*31:0*/ __Vtemp592;
    CData/*31:0*/ __Vtemp593;
    CData/*31:0*/ __Vtemp594;
    CData/*31:0*/ __Vtemp595;
    CData/*31:0*/ __Vtemp596;
    CData/*31:0*/ __Vtemp597;
    CData/*31:0*/ __Vtemp598;
    CData/*31:0*/ __Vtemp599;
    CData/*31:0*/ __Vtemp600;
    CData/*31:0*/ __Vtemp601;
    CData/*31:0*/ __Vtemp602;
    CData/*31:0*/ __Vtemp603;
    CData/*31:0*/ __Vtemp604;
    CData/*31:0*/ __Vtemp605;
    CData/*31:0*/ __Vtemp606;
    CData/*31:0*/ __Vtemp607;
    CData/*31:0*/ __Vtemp608;
    CData/*31:0*/ __Vtemp609;
    CData/*31:0*/ __Vtemp610;
    CData/*31:0*/ __Vtemp611;
    CData/*31:0*/ __Vtemp612;
    CData/*31:0*/ __Vtemp613;
    CData/*31:0*/ __Vtemp614;
    CData/*31:0*/ __Vtemp615;
    CData/*31:0*/ __Vtemp616;
    CData/*31:0*/ __Vtemp617;
    CData/*31:0*/ __Vtemp618;
    CData/*31:0*/ __Vtemp619;
    CData/*31:0*/ __Vtemp620;
    CData/*31:0*/ __Vtemp621;
    CData/*31:0*/ __Vtemp622;
    CData/*31:0*/ __Vtemp623;
    CData/*31:0*/ __Vtemp624;
    CData/*31:0*/ __Vtemp625;
    CData/*31:0*/ __Vtemp626;
    CData/*31:0*/ __Vtemp627;
    CData/*31:0*/ __Vtemp628;
    CData/*31:0*/ __Vtemp629;
    CData/*31:0*/ __Vtemp630;
    CData/*31:0*/ __Vtemp631;
    CData/*31:0*/ __Vtemp632;
    CData/*31:0*/ __Vtemp633;
    CData/*31:0*/ __Vtemp634;
    CData/*31:0*/ __Vtemp635;
    CData/*31:0*/ __Vtemp636;
    CData/*31:0*/ __Vtemp637;
    CData/*31:0*/ __Vtemp638;
    CData/*31:0*/ __Vtemp639;
    CData/*31:0*/ __Vtemp640;
    // Body
    __Vtemp577 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_equal, __Vtemp577);
    __Vtemp578 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_equal, __Vtemp578);
    __Vtemp579 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_equal, __Vtemp579);
    __Vtemp580 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_equal, __Vtemp580);
    __Vtemp581 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_equal, __Vtemp581);
    __Vtemp582 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_equal, __Vtemp582);
    __Vtemp583 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_equal, __Vtemp583);
    __Vtemp584 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_equal, __Vtemp584);
    __Vtemp585 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_equal, __Vtemp585);
    __Vtemp586 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_equal, __Vtemp586);
    __Vtemp587 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_equal, __Vtemp587);
    __Vtemp588 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_equal, __Vtemp588);
    __Vtemp589 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_equal, __Vtemp589);
    __Vtemp590 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_equal, __Vtemp590);
    __Vtemp591 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_equal, __Vtemp591);
    __Vtemp592 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_equal, __Vtemp592);
    __Vtemp593 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_equal, __Vtemp593);
    __Vtemp594 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_equal, __Vtemp594);
    __Vtemp595 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_equal, __Vtemp595);
    __Vtemp596 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_equal, __Vtemp596);
    __Vtemp597 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_equal, __Vtemp597);
    __Vtemp598 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_equal, __Vtemp598);
    __Vtemp599 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_equal, __Vtemp599);
    __Vtemp600 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_equal, __Vtemp600);
    __Vtemp601 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_equal, __Vtemp601);
    __Vtemp602 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_equal, __Vtemp602);
    __Vtemp603 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_equal, __Vtemp603);
    __Vtemp604 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_equal, __Vtemp604);
    __Vtemp605 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_equal, __Vtemp605);
    __Vtemp606 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_equal, __Vtemp606);
    __Vtemp607 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_equal, __Vtemp607);
    __Vtemp608 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_equal, __Vtemp608);
    __Vtemp609 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x20U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_less, __Vtemp609);
    __Vtemp610 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1fU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_less, __Vtemp610);
    __Vtemp611 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1eU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_less, __Vtemp611);
    __Vtemp612 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1dU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_less, __Vtemp612);
    __Vtemp613 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1cU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_less, __Vtemp613);
    __Vtemp614 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1bU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_less, __Vtemp614);
    __Vtemp615 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1aU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_less, __Vtemp615);
    __Vtemp616 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x19U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_less, __Vtemp616);
    __Vtemp617 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x18U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_less, __Vtemp617);
    __Vtemp618 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x17U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_less, __Vtemp618);
    __Vtemp619 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x16U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_less, __Vtemp619);
    __Vtemp620 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x15U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_less, __Vtemp620);
    __Vtemp621 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x14U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_less, __Vtemp621);
    __Vtemp622 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x13U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_less, __Vtemp622);
    __Vtemp623 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x12U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_less, __Vtemp623);
    __Vtemp624 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x11U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_less, __Vtemp624);
    __Vtemp625 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x10U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_less, __Vtemp625);
    __Vtemp626 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xfU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_less, __Vtemp626);
    __Vtemp627 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xeU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_less, __Vtemp627);
    __Vtemp628 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xdU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_less, __Vtemp628);
    __Vtemp629 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xcU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_less, __Vtemp629);
    __Vtemp630 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xbU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_less, __Vtemp630);
    __Vtemp631 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xaU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_less, __Vtemp631);
    __Vtemp632 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 9U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_less, __Vtemp632);
    __Vtemp633 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 8U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_less, __Vtemp633);
    __Vtemp634 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 7U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_less, __Vtemp634);
    __Vtemp635 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 6U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_less, __Vtemp635);
    __Vtemp636 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 5U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_less, __Vtemp636);
    __Vtemp637 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 4U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_less, __Vtemp637);
    __Vtemp638 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 3U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_less, __Vtemp638);
    __Vtemp639 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 2U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_less, __Vtemp639);
    __Vtemp640 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 1U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_less, __Vtemp640);
    this->__PVT__o_lessthan = (1U & (((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                                       ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                                      & (IData)(this->__PVT__i_signed))
                                      ? (~ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U))
                                      : VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U)));
}

VL_INLINE_OPT void Vtestbench_comparator::_combo__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__18(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_combo__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__18\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__o_equal = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0U));
}

VL_INLINE_OPT void Vtestbench_comparator::_combo__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__22(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_combo__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__22\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp705;
    CData/*31:0*/ __Vtemp706;
    CData/*31:0*/ __Vtemp707;
    CData/*31:0*/ __Vtemp708;
    CData/*31:0*/ __Vtemp709;
    CData/*31:0*/ __Vtemp710;
    CData/*31:0*/ __Vtemp711;
    CData/*31:0*/ __Vtemp712;
    CData/*31:0*/ __Vtemp713;
    CData/*31:0*/ __Vtemp714;
    CData/*31:0*/ __Vtemp715;
    CData/*31:0*/ __Vtemp716;
    CData/*31:0*/ __Vtemp717;
    CData/*31:0*/ __Vtemp718;
    CData/*31:0*/ __Vtemp719;
    CData/*31:0*/ __Vtemp720;
    CData/*31:0*/ __Vtemp721;
    CData/*31:0*/ __Vtemp722;
    CData/*31:0*/ __Vtemp723;
    CData/*31:0*/ __Vtemp724;
    CData/*31:0*/ __Vtemp725;
    CData/*31:0*/ __Vtemp726;
    CData/*31:0*/ __Vtemp727;
    CData/*31:0*/ __Vtemp728;
    CData/*31:0*/ __Vtemp729;
    CData/*31:0*/ __Vtemp730;
    CData/*31:0*/ __Vtemp731;
    CData/*31:0*/ __Vtemp732;
    CData/*31:0*/ __Vtemp733;
    CData/*31:0*/ __Vtemp734;
    CData/*31:0*/ __Vtemp735;
    CData/*31:0*/ __Vtemp736;
    CData/*31:0*/ __Vtemp737;
    CData/*31:0*/ __Vtemp738;
    CData/*31:0*/ __Vtemp739;
    CData/*31:0*/ __Vtemp740;
    CData/*31:0*/ __Vtemp741;
    CData/*31:0*/ __Vtemp742;
    CData/*31:0*/ __Vtemp743;
    CData/*31:0*/ __Vtemp744;
    CData/*31:0*/ __Vtemp745;
    CData/*31:0*/ __Vtemp746;
    CData/*31:0*/ __Vtemp747;
    CData/*31:0*/ __Vtemp748;
    CData/*31:0*/ __Vtemp749;
    CData/*31:0*/ __Vtemp750;
    CData/*31:0*/ __Vtemp751;
    CData/*31:0*/ __Vtemp752;
    CData/*31:0*/ __Vtemp753;
    CData/*31:0*/ __Vtemp754;
    CData/*31:0*/ __Vtemp755;
    CData/*31:0*/ __Vtemp756;
    CData/*31:0*/ __Vtemp757;
    CData/*31:0*/ __Vtemp758;
    CData/*31:0*/ __Vtemp759;
    CData/*31:0*/ __Vtemp760;
    CData/*31:0*/ __Vtemp761;
    CData/*31:0*/ __Vtemp762;
    CData/*31:0*/ __Vtemp763;
    CData/*31:0*/ __Vtemp764;
    CData/*31:0*/ __Vtemp765;
    CData/*31:0*/ __Vtemp766;
    CData/*31:0*/ __Vtemp767;
    CData/*31:0*/ __Vtemp768;
    // Body
    __Vtemp705 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_equal, __Vtemp705);
    __Vtemp706 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_equal, __Vtemp706);
    __Vtemp707 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_equal, __Vtemp707);
    __Vtemp708 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_equal, __Vtemp708);
    __Vtemp709 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_equal, __Vtemp709);
    __Vtemp710 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_equal, __Vtemp710);
    __Vtemp711 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_equal, __Vtemp711);
    __Vtemp712 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_equal, __Vtemp712);
    __Vtemp713 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_equal, __Vtemp713);
    __Vtemp714 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_equal, __Vtemp714);
    __Vtemp715 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_equal, __Vtemp715);
    __Vtemp716 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_equal, __Vtemp716);
    __Vtemp717 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_equal, __Vtemp717);
    __Vtemp718 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_equal, __Vtemp718);
    __Vtemp719 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_equal, __Vtemp719);
    __Vtemp720 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_equal, __Vtemp720);
    __Vtemp721 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_equal, __Vtemp721);
    __Vtemp722 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_equal, __Vtemp722);
    __Vtemp723 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_equal, __Vtemp723);
    __Vtemp724 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_equal, __Vtemp724);
    __Vtemp725 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_equal, __Vtemp725);
    __Vtemp726 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_equal, __Vtemp726);
    __Vtemp727 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_equal, __Vtemp727);
    __Vtemp728 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_equal, __Vtemp728);
    __Vtemp729 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_equal, __Vtemp729);
    __Vtemp730 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_equal, __Vtemp730);
    __Vtemp731 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_equal, __Vtemp731);
    __Vtemp732 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_equal, __Vtemp732);
    __Vtemp733 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_equal, __Vtemp733);
    __Vtemp734 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_equal, __Vtemp734);
    __Vtemp735 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_equal, __Vtemp735);
    __Vtemp736 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_equal, __Vtemp736);
    __Vtemp737 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x20U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_less, __Vtemp737);
    __Vtemp738 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1fU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_less, __Vtemp738);
    __Vtemp739 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1eU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_less, __Vtemp739);
    __Vtemp740 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1dU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_less, __Vtemp740);
    __Vtemp741 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1cU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_less, __Vtemp741);
    __Vtemp742 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1bU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_less, __Vtemp742);
    __Vtemp743 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1aU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_less, __Vtemp743);
    __Vtemp744 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x19U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_less, __Vtemp744);
    __Vtemp745 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x18U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_less, __Vtemp745);
    __Vtemp746 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x17U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_less, __Vtemp746);
    __Vtemp747 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x16U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_less, __Vtemp747);
    __Vtemp748 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x15U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_less, __Vtemp748);
    __Vtemp749 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x14U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_less, __Vtemp749);
    __Vtemp750 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x13U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_less, __Vtemp750);
    __Vtemp751 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x12U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_less, __Vtemp751);
    __Vtemp752 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x11U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_less, __Vtemp752);
    __Vtemp753 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x10U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_less, __Vtemp753);
    __Vtemp754 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xfU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_less, __Vtemp754);
    __Vtemp755 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xeU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_less, __Vtemp755);
    __Vtemp756 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xdU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_less, __Vtemp756);
    __Vtemp757 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xcU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_less, __Vtemp757);
    __Vtemp758 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xbU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_less, __Vtemp758);
    __Vtemp759 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xaU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_less, __Vtemp759);
    __Vtemp760 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 9U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_less, __Vtemp760);
    __Vtemp761 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 8U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_less, __Vtemp761);
    __Vtemp762 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 7U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_less, __Vtemp762);
    __Vtemp763 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 6U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_less, __Vtemp763);
    __Vtemp764 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 5U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_less, __Vtemp764);
    __Vtemp765 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 4U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_less, __Vtemp765);
    __Vtemp766 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 3U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_less, __Vtemp766);
    __Vtemp767 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 2U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_less, __Vtemp767);
    __Vtemp768 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 1U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_less, __Vtemp768);
    this->__PVT__o_lessthan = (1U & (((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                                       ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                                      & (IData)(this->__PVT__i_signed))
                                      ? (~ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U))
                                      : VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U)));
}

VL_INLINE_OPT void Vtestbench_comparator::_combo__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__17(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_combo__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__17\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__o_equal = (1U & VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0U));
}

VL_INLINE_OPT void Vtestbench_comparator::_combo__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__23(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_comparator::_combo__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__23\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*31:0*/ __Vtemp833;
    CData/*31:0*/ __Vtemp834;
    CData/*31:0*/ __Vtemp835;
    CData/*31:0*/ __Vtemp836;
    CData/*31:0*/ __Vtemp837;
    CData/*31:0*/ __Vtemp838;
    CData/*31:0*/ __Vtemp839;
    CData/*31:0*/ __Vtemp840;
    CData/*31:0*/ __Vtemp841;
    CData/*31:0*/ __Vtemp842;
    CData/*31:0*/ __Vtemp843;
    CData/*31:0*/ __Vtemp844;
    CData/*31:0*/ __Vtemp845;
    CData/*31:0*/ __Vtemp846;
    CData/*31:0*/ __Vtemp847;
    CData/*31:0*/ __Vtemp848;
    CData/*31:0*/ __Vtemp849;
    CData/*31:0*/ __Vtemp850;
    CData/*31:0*/ __Vtemp851;
    CData/*31:0*/ __Vtemp852;
    CData/*31:0*/ __Vtemp853;
    CData/*31:0*/ __Vtemp854;
    CData/*31:0*/ __Vtemp855;
    CData/*31:0*/ __Vtemp856;
    CData/*31:0*/ __Vtemp857;
    CData/*31:0*/ __Vtemp858;
    CData/*31:0*/ __Vtemp859;
    CData/*31:0*/ __Vtemp860;
    CData/*31:0*/ __Vtemp861;
    CData/*31:0*/ __Vtemp862;
    CData/*31:0*/ __Vtemp863;
    CData/*31:0*/ __Vtemp864;
    CData/*31:0*/ __Vtemp865;
    CData/*31:0*/ __Vtemp866;
    CData/*31:0*/ __Vtemp867;
    CData/*31:0*/ __Vtemp868;
    CData/*31:0*/ __Vtemp869;
    CData/*31:0*/ __Vtemp870;
    CData/*31:0*/ __Vtemp871;
    CData/*31:0*/ __Vtemp872;
    CData/*31:0*/ __Vtemp873;
    CData/*31:0*/ __Vtemp874;
    CData/*31:0*/ __Vtemp875;
    CData/*31:0*/ __Vtemp876;
    CData/*31:0*/ __Vtemp877;
    CData/*31:0*/ __Vtemp878;
    CData/*31:0*/ __Vtemp879;
    CData/*31:0*/ __Vtemp880;
    CData/*31:0*/ __Vtemp881;
    CData/*31:0*/ __Vtemp882;
    CData/*31:0*/ __Vtemp883;
    CData/*31:0*/ __Vtemp884;
    CData/*31:0*/ __Vtemp885;
    CData/*31:0*/ __Vtemp886;
    CData/*31:0*/ __Vtemp887;
    CData/*31:0*/ __Vtemp888;
    CData/*31:0*/ __Vtemp889;
    CData/*31:0*/ __Vtemp890;
    CData/*31:0*/ __Vtemp891;
    CData/*31:0*/ __Vtemp892;
    CData/*31:0*/ __Vtemp893;
    CData/*31:0*/ __Vtemp894;
    CData/*31:0*/ __Vtemp895;
    CData/*31:0*/ __Vtemp896;
    // Body
    __Vtemp833 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_equal, __Vtemp833);
    __Vtemp834 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU)))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_equal, __Vtemp834);
    __Vtemp835 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU)))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_equal, __Vtemp835);
    __Vtemp836 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU)))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_equal, __Vtemp836);
    __Vtemp837 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU)))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_equal, __Vtemp837);
    __Vtemp838 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU)))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_equal, __Vtemp838);
    __Vtemp839 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U)))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_equal, __Vtemp839);
    __Vtemp840 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U)))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_equal, __Vtemp840);
    __Vtemp841 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U)))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_equal, __Vtemp841);
    __Vtemp842 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U)))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_equal, __Vtemp842);
    __Vtemp843 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U)))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_equal, __Vtemp843);
    __Vtemp844 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U)))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_equal, __Vtemp844);
    __Vtemp845 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U)))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_equal, __Vtemp845);
    __Vtemp846 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U)))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_equal, __Vtemp846);
    __Vtemp847 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U)))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_equal, __Vtemp847);
    __Vtemp848 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U)))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_equal, __Vtemp848);
    __Vtemp849 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU)))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_equal, __Vtemp849);
    __Vtemp850 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU)))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_equal, __Vtemp850);
    __Vtemp851 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU)))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_equal, __Vtemp851);
    __Vtemp852 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU)))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_equal, __Vtemp852);
    __Vtemp853 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU)))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_equal, __Vtemp853);
    __Vtemp854 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU)))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_equal, __Vtemp854);
    __Vtemp855 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U)))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_equal, __Vtemp855);
    __Vtemp856 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U)))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_equal, __Vtemp856);
    __Vtemp857 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U)))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_equal, __Vtemp857);
    __Vtemp858 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U)))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_equal, __Vtemp858);
    __Vtemp859 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U)))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_equal, __Vtemp859);
    __Vtemp860 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U)))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_equal, __Vtemp860);
    __Vtemp861 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U)))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_equal, __Vtemp861);
    __Vtemp862 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U)))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_equal, __Vtemp862);
    __Vtemp863 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U)))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_equal, __Vtemp863);
    __Vtemp864 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                        & (~ (VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U) 
                              ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U)))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_equal, __Vtemp864);
    __Vtemp865 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x20U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x20U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU))));
    VL_ASSIGNBIT_QI(1,0x1fU, this->__PVT__sig_less, __Vtemp865);
    __Vtemp866 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1fU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1fU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1eU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1eU))));
    VL_ASSIGNBIT_QI(1,0x1eU, this->__PVT__sig_less, __Vtemp866);
    __Vtemp867 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1eU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1eU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1dU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1dU))));
    VL_ASSIGNBIT_QI(1,0x1dU, this->__PVT__sig_less, __Vtemp867);
    __Vtemp868 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1dU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1dU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1cU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1cU))));
    VL_ASSIGNBIT_QI(1,0x1cU, this->__PVT__sig_less, __Vtemp868);
    __Vtemp869 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1cU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1cU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1bU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1bU))));
    VL_ASSIGNBIT_QI(1,0x1bU, this->__PVT__sig_less, __Vtemp869);
    __Vtemp870 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1bU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1bU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1aU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1aU))));
    VL_ASSIGNBIT_QI(1,0x1aU, this->__PVT__sig_less, __Vtemp870);
    __Vtemp871 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x1aU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x1aU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x19U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x19U))));
    VL_ASSIGNBIT_QI(1,0x19U, this->__PVT__sig_less, __Vtemp871);
    __Vtemp872 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x19U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x19U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x18U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x18U))));
    VL_ASSIGNBIT_QI(1,0x18U, this->__PVT__sig_less, __Vtemp872);
    __Vtemp873 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x18U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x18U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x17U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x17U))));
    VL_ASSIGNBIT_QI(1,0x17U, this->__PVT__sig_less, __Vtemp873);
    __Vtemp874 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x17U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x17U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x16U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x16U))));
    VL_ASSIGNBIT_QI(1,0x16U, this->__PVT__sig_less, __Vtemp874);
    __Vtemp875 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x16U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x16U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x15U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x15U))));
    VL_ASSIGNBIT_QI(1,0x15U, this->__PVT__sig_less, __Vtemp875);
    __Vtemp876 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x15U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x15U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x14U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x14U))));
    VL_ASSIGNBIT_QI(1,0x14U, this->__PVT__sig_less, __Vtemp876);
    __Vtemp877 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x14U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x14U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x13U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x13U))));
    VL_ASSIGNBIT_QI(1,0x13U, this->__PVT__sig_less, __Vtemp877);
    __Vtemp878 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x13U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x13U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x12U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x12U))));
    VL_ASSIGNBIT_QI(1,0x12U, this->__PVT__sig_less, __Vtemp878);
    __Vtemp879 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x12U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x12U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x11U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x11U))));
    VL_ASSIGNBIT_QI(1,0x11U, this->__PVT__sig_less, __Vtemp879);
    __Vtemp880 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x11U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x11U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x10U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x10U))));
    VL_ASSIGNBIT_QI(1,0x10U, this->__PVT__sig_less, __Vtemp880);
    __Vtemp881 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0x10U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0x10U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xfU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xfU))));
    VL_ASSIGNBIT_QI(1,0xfU, this->__PVT__sig_less, __Vtemp881);
    __Vtemp882 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xfU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xfU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xeU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xeU))));
    VL_ASSIGNBIT_QI(1,0xeU, this->__PVT__sig_less, __Vtemp882);
    __Vtemp883 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xeU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xeU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xdU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xdU))));
    VL_ASSIGNBIT_QI(1,0xdU, this->__PVT__sig_less, __Vtemp883);
    __Vtemp884 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xdU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xdU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xcU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xcU))));
    VL_ASSIGNBIT_QI(1,0xcU, this->__PVT__sig_less, __Vtemp884);
    __Vtemp885 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xcU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xcU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xbU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xbU))));
    VL_ASSIGNBIT_QI(1,0xbU, this->__PVT__sig_less, __Vtemp885);
    __Vtemp886 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xbU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xbU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0xaU))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0xaU))));
    VL_ASSIGNBIT_QI(1,0xaU, this->__PVT__sig_less, __Vtemp886);
    __Vtemp887 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0xaU) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 0xaU) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 9U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 9U))));
    VL_ASSIGNBIT_QI(1,9U, this->__PVT__sig_less, __Vtemp887);
    __Vtemp888 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 9U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 9U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 8U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 8U))));
    VL_ASSIGNBIT_QI(1,8U, this->__PVT__sig_less, __Vtemp888);
    __Vtemp889 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 8U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 8U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 7U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 7U))));
    VL_ASSIGNBIT_QI(1,7U, this->__PVT__sig_less, __Vtemp889);
    __Vtemp890 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 7U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 7U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 6U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 6U))));
    VL_ASSIGNBIT_QI(1,6U, this->__PVT__sig_less, __Vtemp890);
    __Vtemp891 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 6U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 6U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 5U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 5U))));
    VL_ASSIGNBIT_QI(1,5U, this->__PVT__sig_less, __Vtemp891);
    __Vtemp892 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 5U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 5U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 4U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 4U))));
    VL_ASSIGNBIT_QI(1,4U, this->__PVT__sig_less, __Vtemp892);
    __Vtemp893 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 4U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 4U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 3U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 3U))));
    VL_ASSIGNBIT_QI(1,3U, this->__PVT__sig_less, __Vtemp893);
    __Vtemp894 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 3U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 3U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 2U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 2U))));
    VL_ASSIGNBIT_QI(1,2U, this->__PVT__sig_less, __Vtemp894);
    __Vtemp895 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 2U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 2U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 1U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 1U))));
    VL_ASSIGNBIT_QI(1,1U, this->__PVT__sig_less, __Vtemp895);
    __Vtemp896 = (1U & (VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 1U) 
                        | ((VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_equal, 1U) 
                            & (~ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0U))) 
                           & VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0U))));
    VL_ASSIGNBIT_QI(1,0U, this->__PVT__sig_less, __Vtemp896);
    this->__PVT__o_lessthan = (1U & (((VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_a, 0x1fU) 
                                       ^ VL_BITSEL_IIII(1,32,5,32, this->__PVT__i_b, 0x1fU)) 
                                      & (IData)(this->__PVT__i_signed))
                                      ? (~ VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U))
                                      : VL_BITSEL_IQII(1,33,6,32, this->__PVT__sig_less, 0U)));
}
