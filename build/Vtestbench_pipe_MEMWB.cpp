// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_pipe_MEMWB.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_pipe_MEMWB::_sequent__TOP__testbench__TAGE__memwb_pipe_unit__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_pipe_MEMWB::_sequent__TOP__testbench__TAGE__memwb_pipe_unit__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__Vdly__lsu_data_reg 
        = vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__lsu_data_reg;
    VL_ASSIGN_W(256,vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__Vdly__MEMWB_reg, vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__MEMWB_reg);
    if (vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__i_rst_n) {
        if (vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__i_MEMWB_en) {
            VL_ASSIGN_W(256,vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__Vdly__MEMWB_reg, vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__i_EXMEM_bus);
            vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__Vdly__lsu_data_reg 
                = vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__i_lsu_data;
        }
    } else {
        VL_CONST_W_1X(256,vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__Vdly__MEMWB_reg,0x00000000);
    }
    VL_ASSIGN_W(256,vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__MEMWB_reg, vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__Vdly__MEMWB_reg);
    vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__lsu_data_reg 
        = vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__Vdly__lsu_data_reg;
    VL_ASSIGN_W(256,vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__o_MEMWB_bus, vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__MEMWB_reg);
    vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__o_MEMWB_lsu_data 
        = vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__lsu_data_reg;
}
