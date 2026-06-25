// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_pipe_EXMEM.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_pipe_EXMEM) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_pipe_EXMEM::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_pipe_EXMEM::~Vtestbench_pipe_EXMEM() {
}

void Vtestbench_pipe_EXMEM::_settle__TOP__testbench__TAGE__exmem_pipe_unit__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_pipe_EXMEM::_settle__TOP__testbench__TAGE__exmem_pipe_unit__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGN_W(256,vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__PVT__o_EXMEM_bus, vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__PVT__EXMEM_reg);
}

void Vtestbench_pipe_EXMEM::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_pipe_EXMEM::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__i_EXMEM_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(190, __PVT__i_IDEX_bus);
    VL_RAND_RESET_W(66, __PVT__i_execute_bus);
    VL_RAND_RESET_W(256, __PVT__o_EXMEM_bus);
    VL_RAND_RESET_W(256, __PVT__EXMEM_reg);
    VL_RAND_RESET_W(256, __Vdly__EXMEM_reg);
}
