// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_pipe_IFID.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_pipe_IFID::_sequent__TOP__testbench__TAGE__ifid_pipe_unit__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_pipe_IFID::_sequent__TOP__testbench__TAGE__ifid_pipe_unit__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__Vdly__misprediction 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__misprediction;
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__Vdly__predict_direct 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__predict_direct;
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__Vdly__pc 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__pc;
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__Vdly__instr 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__instr;
    if (vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__i_rst_n) {
        if (vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__i_IFID_en) {
            vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__Vdly__instr 
                = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__i_instr;
            vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__Vdly__pc 
                = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__i_pc;
            vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__Vdly__predict_direct 
                = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__i_predict_direct;
            vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__Vdly__misprediction 
                = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__i_is_mispredict;
        }
    } else {
        vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__Vdly__instr = 0U;
        vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__Vdly__pc = 0U;
        vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__Vdly__predict_direct = 0U;
        vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__Vdly__misprediction = 0U;
    }
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__instr 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__Vdly__instr;
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__pc 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__Vdly__pc;
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__predict_direct 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__Vdly__predict_direct;
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__misprediction 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__Vdly__misprediction;
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__o_IFID_instr 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__instr;
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__o_IFID_pc 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__pc;
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__o_IFID_predict_direct 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__predict_direct;
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__o_IFID_is_mispredict 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__misprediction;
}
