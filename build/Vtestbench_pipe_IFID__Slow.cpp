// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_pipe_IFID.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_pipe_IFID) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_pipe_IFID::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_pipe_IFID::~Vtestbench_pipe_IFID() {
}

void Vtestbench_pipe_IFID::_settle__TOP__testbench__TAGE__ifid_pipe_unit__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_pipe_IFID::_settle__TOP__testbench__TAGE__ifid_pipe_unit__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__o_IFID_instr 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__instr;
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__o_IFID_pc 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__pc;
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__o_IFID_predict_direct 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__predict_direct;
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__o_IFID_is_mispredict 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__misprediction;
}

void Vtestbench_pipe_IFID::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_pipe_IFID::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__i_IFID_en = VL_RAND_RESET_I(1);
    __PVT__i_pc = VL_RAND_RESET_I(32);
    __PVT__i_instr = VL_RAND_RESET_I(32);
    __PVT__i_predict_direct = VL_RAND_RESET_I(1);
    __PVT__i_is_mispredict = VL_RAND_RESET_I(1);
    __PVT__o_IFID_pc = VL_RAND_RESET_I(32);
    __PVT__o_IFID_instr = VL_RAND_RESET_I(32);
    __PVT__o_IFID_predict_direct = VL_RAND_RESET_I(1);
    __PVT__o_IFID_is_mispredict = VL_RAND_RESET_I(1);
    __PVT__pc = VL_RAND_RESET_I(32);
    __PVT__instr = VL_RAND_RESET_I(32);
    __PVT__predict_direct = VL_RAND_RESET_I(1);
    __PVT__misprediction = VL_RAND_RESET_I(1);
    __Vdly__instr = VL_RAND_RESET_I(32);
    __Vdly__pc = VL_RAND_RESET_I(32);
    __Vdly__predict_direct = VL_RAND_RESET_I(1);
    __Vdly__misprediction = VL_RAND_RESET_I(1);
}
