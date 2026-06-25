// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_branch_control_unit.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_branch_control_unit::_combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_branch_control_unit::_combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__5\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__br_equal 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare.__PVT__o_equal;
}

VL_INLINE_OPT void Vtestbench_branch_control_unit::_combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__6(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_branch_control_unit::_combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__6\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__funct3 
        = (7U & VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__i_instr, 0xcU, 3U));
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__opcode 
        = (0x7fU & VL_SEL_IIII(7,32,5,32, vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__i_instr, 0U, 7U));
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__o_is_branch 
        = (((0x63U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__opcode)) 
            | (0x6fU == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__opcode))) 
           | (0x67U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__opcode)));
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__br_un 
        = (1U & ((0x63U != (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__opcode)) 
                 | (~ ((6U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__funct3)) 
                       | (7U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__funct3))))));
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare.__PVT__i_signed 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__br_un;
}

VL_INLINE_OPT void Vtestbench_branch_control_unit::_combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__7(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_branch_control_unit::_combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__7\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare.__PVT__i_a 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__i_rs1_data;
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare.__PVT__i_b 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__i_rs2_data;
}

VL_INLINE_OPT void Vtestbench_branch_control_unit::_combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__8(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_branch_control_unit::_combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__8\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__br_less 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare.__PVT__o_lessthan;
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__o_branch_taken 
        = (1U & ((0x63U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__opcode))
                  ? ((0U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__funct3))
                      ? (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__br_equal)
                      : ((1U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__funct3))
                          ? (~ (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__br_equal))
                          : ((4U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__funct3))
                              ? (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__br_less)
                              : ((5U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__funct3))
                                  ? (~ ((IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__br_less) 
                                        | (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__br_equal)))
                                  : ((6U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__funct3))
                                      ? (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__br_less)
                                      : ((7U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__funct3)) 
                                         & ((~ (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__br_less)) 
                                            | (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__br_equal))))))))
                  : ((0x6fU == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__opcode)) 
                     | (0x67U == (IData)(vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__opcode)))));
}
