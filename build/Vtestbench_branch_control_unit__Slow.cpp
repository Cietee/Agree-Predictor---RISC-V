// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_branch_control_unit.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_branch_control_unit) {
    VL_CELL(__PVT__branch_compare, Vtestbench_comparator);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_branch_control_unit::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_branch_control_unit::~Vtestbench_branch_control_unit() {
}

void Vtestbench_branch_control_unit::_settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_branch_control_unit::_settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__br_equal 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare.__PVT__o_equal;
}

void Vtestbench_branch_control_unit::_settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_branch_control_unit::_settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__2\n"); );
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

void Vtestbench_branch_control_unit::_settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_branch_control_unit::_settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare.__PVT__i_a 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__i_rs1_data;
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare.__PVT__i_b 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__i_rs2_data;
}

void Vtestbench_branch_control_unit::_settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_branch_control_unit::_settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__4\n"); );
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

void Vtestbench_branch_control_unit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_branch_control_unit::_ctor_var_reset\n"); );
    // Body
    __PVT__i_instr = VL_RAND_RESET_I(32);
    __PVT__i_rs1_data = VL_RAND_RESET_I(32);
    __PVT__i_rs2_data = VL_RAND_RESET_I(32);
    __PVT__o_branch_taken = VL_RAND_RESET_I(1);
    __PVT__o_is_branch = VL_RAND_RESET_I(1);
    __PVT__br_un = VL_RAND_RESET_I(1);
    __PVT__br_less = VL_RAND_RESET_I(1);
    __PVT__br_equal = VL_RAND_RESET_I(1);
    __PVT__opcode = VL_RAND_RESET_I(7);
    __PVT__funct3 = VL_RAND_RESET_I(3);
}
