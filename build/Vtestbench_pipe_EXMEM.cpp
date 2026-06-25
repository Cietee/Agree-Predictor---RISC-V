// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_pipe_EXMEM.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_pipe_EXMEM::_sequent__TOP__testbench__TAGE__exmem_pipe_unit__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_pipe_EXMEM::_sequent__TOP__testbench__TAGE__exmem_pipe_unit__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGN_W(256,vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__Vdly__EXMEM_reg, vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__PVT__EXMEM_reg);
    if (vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__PVT__i_rst_n) {
        if (vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__PVT__i_EXMEM_en) {
            VL_ASSIGNSEL_WIIW(66,0xbeU, vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__Vdly__EXMEM_reg, vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__PVT__i_execute_bus);
            VL_ASSIGNSEL_WIIW(190,0U, vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__Vdly__EXMEM_reg, vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__PVT__i_IDEX_bus);
        }
    } else {
        VL_CONST_W_1X(256,vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__Vdly__EXMEM_reg,0x00000000);
    }
    VL_ASSIGN_W(256,vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__PVT__EXMEM_reg, vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__Vdly__EXMEM_reg);
    VL_ASSIGN_W(256,vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__PVT__o_EXMEM_bus, vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__PVT__EXMEM_reg);
}
