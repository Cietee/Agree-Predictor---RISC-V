// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_alu.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_alu::_combo__TOP__testbench__TAGE__execute_unit__alu_module__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_alu::_combo__TOP__testbench__TAGE__execute_unit__alu_module__4\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__u_equal 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare.__PVT__o_equal;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__equal 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__signed_compare.__PVT__o_equal;
}

VL_INLINE_OPT void Vtestbench_alu::_combo__TOP__testbench__TAGE__execute_unit__alu_module__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_alu::_combo__TOP__testbench__TAGE__execute_unit__alu_module__5\n"); );
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

VL_INLINE_OPT void Vtestbench_alu::_combo__TOP__testbench__TAGE__execute_unit__alu_module__6(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_alu::_combo__TOP__testbench__TAGE__execute_unit__alu_module__6\n"); );
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
