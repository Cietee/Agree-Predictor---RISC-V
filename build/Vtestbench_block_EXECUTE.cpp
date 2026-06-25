// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_block_EXECUTE.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_block_EXECUTE::_combo__TOP__testbench__TAGE__execute_unit__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_EXECUTE::_combo__TOP__testbench__TAGE__execute_unit__5\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op 
        = vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_alu_op;
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__i_instr 
        = vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_instr;
}

VL_INLINE_OPT void Vtestbench_block_EXECUTE::_combo__TOP__testbench__TAGE__execute_unit__6(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_EXECUTE::_combo__TOP__testbench__TAGE__execute_unit__6\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit.__Vcellout__branch_control_unit__o_is_branch 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__o_is_branch;
    VL_ASSIGNBIT_WI(1,0U, vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__o_execute_bus, vlSymsp->TOP__testbench__TAGE__execute_unit.__Vcellout__branch_control_unit__o_is_branch);
}

VL_INLINE_OPT void Vtestbench_block_EXECUTE::_combo__TOP__testbench__TAGE__execute_unit__7(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_EXECUTE::_combo__TOP__testbench__TAGE__execute_unit__7\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__i_rs1_data 
        = vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_rs1_data;
    vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__operand_a 
        = ((IData)(vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_opa_sel)
            ? vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_rs1_data
            : vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_pc);
    VL_ASSIGNSEL_WIII(32,2U, vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__o_execute_bus, vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_rs2_data);
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__i_rs2_data 
        = vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_rs2_data;
    vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__operand_b 
        = ((IData)(vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_opb_sel)
            ? vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_rs2_data
            : vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_imme_data);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_a 
        = vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__operand_a;
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_operand_b 
        = vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__operand_b;
}

VL_INLINE_OPT void Vtestbench_block_EXECUTE::_combo__TOP__testbench__TAGE__execute_unit__8(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_EXECUTE::_combo__TOP__testbench__TAGE__execute_unit__8\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit.__Vcellout__branch_control_unit__o_branch_taken 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__o_branch_taken;
    vlSymsp->TOP__testbench__TAGE__execute_unit.__Vcellout__alu_module__o_alu_data 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__o_alu_data;
    VL_ASSIGNBIT_WI(1,1U, vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__o_execute_bus, vlSymsp->TOP__testbench__TAGE__execute_unit.__Vcellout__branch_control_unit__o_branch_taken);
    VL_ASSIGNSEL_WIII(32,0x22U, vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__o_execute_bus, vlSymsp->TOP__testbench__TAGE__execute_unit.__Vcellout__alu_module__o_alu_data);
}
