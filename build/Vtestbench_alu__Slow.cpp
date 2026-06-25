// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_alu.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_alu) {
    VL_CELL(__PVT__full_adder, Vtestbench_full_adder_nbit__W20);
    VL_CELL(__PVT__full_subtractor, Vtestbench_full_subtractor_nbit);
    VL_CELL(__PVT__unsigned_compare, Vtestbench_comparator);
    VL_CELL(__PVT__signed_compare, Vtestbench_comparator);
    VL_CELL(__PVT__srl_module, Vtestbench_srl_module);
    VL_CELL(__PVT__sra_module, Vtestbench_sra_module);
    VL_CELL(__PVT__sll_module, Vtestbench_sll_module);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_alu::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_alu::~Vtestbench_alu() {
}

void Vtestbench_alu::_settle__TOP__testbench__TAGE__execute_unit__alu_module__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_alu::_settle__TOP__testbench__TAGE__execute_unit__alu_module__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare.__PVT__i_signed = 0U;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__signed_compare.__PVT__i_signed = 1U;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__u_equal 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare.__PVT__o_equal;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__equal 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__signed_compare.__PVT__o_equal;
}

void Vtestbench_alu::_settle__TOP__testbench__TAGE__execute_unit__alu_module__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_alu::_settle__TOP__testbench__TAGE__execute_unit__alu_module__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__i_data 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_a;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sra_module.__PVT__i_data 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_a;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__i_data 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_a;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare.__PVT__i_a 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_a;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__signed_compare.__PVT__i_a 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_a;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_a 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_a;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_a 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_a;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare.__PVT__i_b 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_b;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__signed_compare.__PVT__i_b 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_b;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__Vcellinp__srl_module__i_imme 
        = (0x1fU & VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_b, 0U, 5U));
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__Vcellinp__sra_module__i_imme 
        = (0x1fU & VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_b, 0U, 5U));
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__Vcellinp__sll_module__i_imme 
        = (0x1fU & VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_b, 0U, 5U));
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__i_b 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_b;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__i_b 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_b;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__i_imme 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__Vcellinp__srl_module__i_imme;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sra_module.__PVT__i_imme 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__Vcellinp__sra_module__i_imme;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__i_imme 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__Vcellinp__sll_module__i_imme;
}

void Vtestbench_alu::_settle__TOP__testbench__TAGE__execute_unit__alu_module__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_alu::_settle__TOP__testbench__TAGE__execute_unit__alu_module__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__u_less 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare.__PVT__o_lessthan;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__less 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__signed_compare.__PVT__o_lessthan;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__sum 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__o_sum;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__diff 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__o_diff;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__srl_data 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module.__PVT__o_data;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__sra_data 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sra_module.__PVT__o_data;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__sll_data 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module.__PVT__o_data;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__o_alu_data 
        = (((((((((9U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op)) 
                  | (0xaU == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op))) 
                 | (0U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op))) 
                | (8U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op))) 
               | (1U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op))) 
              | (2U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op))) 
             | (3U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op))) 
            | (4U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op)))
            ? ((9U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op))
                ? vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_b
                : ((0xaU == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op))
                    ? vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__sum
                    : ((0U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op))
                        ? vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__sum
                        : ((8U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op))
                            ? vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__diff
                            : ((1U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op))
                                ? vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__sll_data
                                : ((2U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op))
                                    ? VL_EXTEND_II(32,1, (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__less))
                                    : ((3U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op))
                                        ? VL_EXTEND_II(32,1, (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__u_less))
                                        : (vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_a 
                                           ^ vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_b))))))))
            : ((5U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op))
                ? vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__srl_data
                : ((0xdU == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op))
                    ? vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__sra_data
                    : ((6U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op))
                        ? (vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_a 
                           | vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_b)
                        : ((7U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op))
                            ? (vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_a 
                               & vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_b)
                            : 0U)))));
}

void Vtestbench_alu::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_alu::_ctor_var_reset\n"); );
    // Body
    __PVT__i_operand_a = VL_RAND_RESET_I(32);
    __PVT__i_operand_b = VL_RAND_RESET_I(32);
    __PVT__i_alu_op = VL_RAND_RESET_I(4);
    __PVT__o_alu_data = VL_RAND_RESET_I(32);
    __PVT__sll_data = VL_RAND_RESET_I(32);
    __PVT__sra_data = VL_RAND_RESET_I(32);
    __PVT__srl_data = VL_RAND_RESET_I(32);
    __PVT__sum = VL_RAND_RESET_I(32);
    __PVT__diff = VL_RAND_RESET_I(32);
    __PVT__equal = VL_RAND_RESET_I(1);
    __PVT__less = VL_RAND_RESET_I(1);
    __PVT__u_equal = VL_RAND_RESET_I(1);
    __PVT__u_less = VL_RAND_RESET_I(1);
    __Vcellinp__srl_module__i_imme = VL_RAND_RESET_I(5);
    __Vcellinp__sra_module__i_imme = VL_RAND_RESET_I(5);
    __Vcellinp__sll_module__i_imme = VL_RAND_RESET_I(5);
}
