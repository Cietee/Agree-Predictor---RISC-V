// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_pipe_MEMWB.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_pipe_MEMWB) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_pipe_MEMWB::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_pipe_MEMWB::~Vtestbench_pipe_MEMWB() {
}

void Vtestbench_pipe_MEMWB::_settle__TOP__testbench__TAGE__memwb_pipe_unit__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_pipe_MEMWB::_settle__TOP__testbench__TAGE__memwb_pipe_unit__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGN_W(256,vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__o_MEMWB_bus, vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__MEMWB_reg);
    vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__o_MEMWB_lsu_data 
        = vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__lsu_data_reg;
}

void Vtestbench_pipe_MEMWB::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_pipe_MEMWB::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__i_MEMWB_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, __PVT__i_EXMEM_bus);
    __PVT__i_lsu_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, __PVT__o_MEMWB_bus);
    __PVT__o_MEMWB_lsu_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, __PVT__MEMWB_reg);
    __PVT__lsu_data_reg = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, __Vdly__MEMWB_reg);
    __Vdly__lsu_data_reg = VL_RAND_RESET_I(32);
}
