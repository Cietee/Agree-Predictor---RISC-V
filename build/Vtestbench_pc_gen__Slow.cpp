// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_pc_gen.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_pc_gen) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_pc_gen::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_pc_gen::~Vtestbench_pc_gen() {
}

void Vtestbench_pc_gen::_settle__TOP__testbench__TAGE__fetch_unit__pc_generator__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_pc_gen::_settle__TOP__testbench__TAGE__fetch_unit__pc_generator__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__o_pc 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__pc;
}

void Vtestbench_pc_gen::_settle__TOP__testbench__TAGE__fetch_unit__pc_generator__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_pc_gen::_settle__TOP__testbench__TAGE__fetch_unit__pc_generator__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__next_pc 
        = ((IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__i_pc_sel)
            ? vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__i_fixed_pc
            : ((1U & (VL_BITSEL_IQII(1,34,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__o_branch_predict_bus, 0U) 
                      & VL_BITSEL_IQII(1,34,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__o_branch_predict_bus, 0x21U)))
                ? VL_SEL_IQII(32,34,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__o_branch_predict_bus, 1U, 0x20U)
                : ((IData)(4U) + vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__pc)));
}

void Vtestbench_pc_gen::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_pc_gen::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__i_pc_sel = VL_RAND_RESET_I(1);
    __PVT__i_pc_en = VL_RAND_RESET_I(1);
    __PVT__i_fixed_pc = VL_RAND_RESET_I(32);
    __PVT__o_pc = VL_RAND_RESET_I(32);
    __PVT__o_branch_predict_bus = VL_RAND_RESET_Q(34);
    __PVT__next_pc = VL_RAND_RESET_I(32);
    __PVT__pc = VL_RAND_RESET_I(32);
    __Vdly__pc = VL_RAND_RESET_I(32);
}
