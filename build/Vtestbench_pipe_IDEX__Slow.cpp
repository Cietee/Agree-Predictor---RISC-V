// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_pipe_IDEX.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_pipe_IDEX) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_pipe_IDEX::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_pipe_IDEX::~Vtestbench_pipe_IDEX() {
}

void Vtestbench_pipe_IDEX::_settle__TOP__testbench__TAGE__idex_pipe_unit__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_pipe_IDEX::_settle__TOP__testbench__TAGE__idex_pipe_unit__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGNSEL_WIII(32,0x9eU, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__instruction);
    VL_ASSIGNSEL_WIII(32,0x7eU, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__pc);
    VL_ASSIGNBIT_WI(1,0U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__IDEX_predict_direct);
    VL_ASSIGNSEL_WIII(5,0x14U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rs1_addr);
    VL_ASSIGNSEL_WIII(5,0xfU, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rs2_addr);
    VL_ASSIGNSEL_WIII(32,0x59U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rs1_data);
    VL_ASSIGNSEL_WIII(32,0x39U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rs2_data);
    VL_ASSIGNSEL_WIII(32,0x19U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__imme_data);
    VL_ASSIGNSEL_WIII(5,0x79U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rd_addr);
    VL_ASSIGNBIT_WI(1,0xdU, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__instr_vld);
    VL_ASSIGNSEL_WIII(2,2U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__wb_sel);
    VL_ASSIGNBIT_WI(1,0xeU, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rd_wren);
    VL_ASSIGNBIT_WI(1,6U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__lsu_wren);
    VL_ASSIGNBIT_WI(1,1U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__signed_flag);
    VL_ASSIGNSEL_WIII(2,4U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__bit_mask);
    VL_ASSIGNBIT_WI(1,0xcU, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__opa_sel);
    VL_ASSIGNBIT_WI(1,0xbU, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__opb_sel);
    VL_ASSIGNSEL_WIII(4,7U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__alu_op);
}

void Vtestbench_pipe_IDEX::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_pipe_IDEX::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__i_IDEX_en = VL_RAND_RESET_I(1);
    __PVT__i_IDEX_predict_direct = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(190, __PVT__i_decode_stage_bus);
    VL_RAND_RESET_W(190, __PVT__o_IDEX_bus);
    __PVT__rs1_data = VL_RAND_RESET_I(32);
    __PVT__rs2_data = VL_RAND_RESET_I(32);
    __PVT__imme_data = VL_RAND_RESET_I(32);
    __PVT__pc = VL_RAND_RESET_I(32);
    __PVT__instruction = VL_RAND_RESET_I(32);
    __PVT__rd_addr = VL_RAND_RESET_I(5);
    __PVT__rs1_addr = VL_RAND_RESET_I(5);
    __PVT__rs2_addr = VL_RAND_RESET_I(5);
    __PVT__alu_op = VL_RAND_RESET_I(4);
    __PVT__rd_wren = VL_RAND_RESET_I(1);
    __PVT__lsu_wren = VL_RAND_RESET_I(1);
    __PVT__signed_flag = VL_RAND_RESET_I(1);
    __PVT__opa_sel = VL_RAND_RESET_I(1);
    __PVT__opb_sel = VL_RAND_RESET_I(1);
    __PVT__instr_vld = VL_RAND_RESET_I(1);
    __PVT__wb_sel = VL_RAND_RESET_I(2);
    __PVT__bit_mask = VL_RAND_RESET_I(2);
    __PVT__IDEX_predict_direct = VL_RAND_RESET_I(1);
    __Vdly__pc = VL_RAND_RESET_I(32);
    __Vdly__instruction = VL_RAND_RESET_I(32);
    __Vdly__rs1_data = VL_RAND_RESET_I(32);
    __Vdly__rs2_data = VL_RAND_RESET_I(32);
    __Vdly__imme_data = VL_RAND_RESET_I(32);
    __Vdly__rd_addr = VL_RAND_RESET_I(5);
    __Vdly__rs1_addr = VL_RAND_RESET_I(5);
    __Vdly__rs2_addr = VL_RAND_RESET_I(5);
    __Vdly__instr_vld = VL_RAND_RESET_I(1);
    __Vdly__wb_sel = VL_RAND_RESET_I(2);
    __Vdly__rd_wren = VL_RAND_RESET_I(1);
    __Vdly__lsu_wren = VL_RAND_RESET_I(1);
    __Vdly__signed_flag = VL_RAND_RESET_I(1);
    __Vdly__bit_mask = VL_RAND_RESET_I(2);
    __Vdly__opa_sel = VL_RAND_RESET_I(1);
    __Vdly__opb_sel = VL_RAND_RESET_I(1);
    __Vdly__alu_op = VL_RAND_RESET_I(4);
    __Vdly__IDEX_predict_direct = VL_RAND_RESET_I(1);
}
