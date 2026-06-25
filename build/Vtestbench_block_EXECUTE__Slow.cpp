// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_block_EXECUTE.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_block_EXECUTE) {
    VL_CELL(__PVT__branch_control_unit, Vtestbench_branch_control_unit);
    VL_CELL(__PVT__alu_module, Vtestbench_alu);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_block_EXECUTE::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_block_EXECUTE::~Vtestbench_block_EXECUTE() {
}

void Vtestbench_block_EXECUTE::_settle__TOP__testbench__TAGE__execute_unit__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_EXECUTE::_settle__TOP__testbench__TAGE__execute_unit__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__i_alu_op 
        = vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_alu_op;
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__i_instr 
        = vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_instr;
}

void Vtestbench_block_EXECUTE::_settle__TOP__testbench__TAGE__execute_unit__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_EXECUTE::_settle__TOP__testbench__TAGE__execute_unit__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit.__Vcellout__branch_control_unit__o_is_branch 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__o_is_branch;
    VL_ASSIGNBIT_WI(1,0U, vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__o_execute_bus, vlSymsp->TOP__testbench__TAGE__execute_unit.__Vcellout__branch_control_unit__o_is_branch);
}

void Vtestbench_block_EXECUTE::_settle__TOP__testbench__TAGE__execute_unit__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_EXECUTE::_settle__TOP__testbench__TAGE__execute_unit__3\n"); );
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

void Vtestbench_block_EXECUTE::_settle__TOP__testbench__TAGE__execute_unit__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_EXECUTE::_settle__TOP__testbench__TAGE__execute_unit__4\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__execute_unit.__Vcellout__branch_control_unit__o_branch_taken 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit.__PVT__o_branch_taken;
    vlSymsp->TOP__testbench__TAGE__execute_unit.__Vcellout__alu_module__o_alu_data 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module.__PVT__o_alu_data;
    VL_ASSIGNBIT_WI(1,1U, vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__o_execute_bus, vlSymsp->TOP__testbench__TAGE__execute_unit.__Vcellout__branch_control_unit__o_branch_taken);
    VL_ASSIGNSEL_WIII(32,0x22U, vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__o_execute_bus, vlSymsp->TOP__testbench__TAGE__execute_unit.__Vcellout__alu_module__o_alu_data);
}

void Vtestbench_block_EXECUTE::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_EXECUTE::_ctor_var_reset\n"); );
    // Body
    __PVT__i_opa_sel = VL_RAND_RESET_I(1);
    __PVT__i_opb_sel = VL_RAND_RESET_I(1);
    __PVT__i_instr = VL_RAND_RESET_I(32);
    __PVT__i_pc = VL_RAND_RESET_I(32);
    __PVT__i_imme_data = VL_RAND_RESET_I(32);
    __PVT__i_rs1_data = VL_RAND_RESET_I(32);
    __PVT__i_rs2_data = VL_RAND_RESET_I(32);
    __PVT__i_alu_op = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(66, __PVT__o_execute_bus);
    __PVT__operand_a = VL_RAND_RESET_I(32);
    __PVT__operand_b = VL_RAND_RESET_I(32);
    __Vcellout__branch_control_unit__o_is_branch = VL_RAND_RESET_I(1);
    __Vcellout__branch_control_unit__o_branch_taken = VL_RAND_RESET_I(1);
    __Vcellout__alu_module__o_alu_data = VL_RAND_RESET_I(32);
}
