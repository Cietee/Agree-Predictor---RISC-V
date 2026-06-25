// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_btb.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_btb) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_btb::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_btb::~Vtestbench_btb() {
}

void Vtestbench_btb::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_btb::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__index 
        = (0x3ffU & VL_SEL_IIII(10,32,5,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__i_pc, 2U, 0xaU));
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__tag 
        = VL_EXTEND_II(22,20, (0xfffffU & VL_SEL_IIII(20,32,5,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__i_pc, 0xcU, 0x14U)));
    if ((VL_BITSEL_IQII(1,55,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__btb_table
                        [vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__index], 0x36U) 
         & ((0x3fffffU & VL_SEL_IQII(22,55,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__btb_table
                                     [vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__index], 0x20U, 0x16U)) 
            == vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__tag))) {
        vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__o_btb_hit = 1U;
        vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__o_target_pc 
            = VL_SEL_IQII(32,55,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__btb_table
                          [vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__index], 0U, 0x20U);
    } else {
        vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__o_btb_hit = 0U;
        vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__o_target_pc = 0U;
    }
}

void Vtestbench_btb::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_btb::_settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__update_index 
        = (0x3ffU & VL_SEL_IIII(10,32,5,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__i_update_pc, 2U, 0xaU));
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__update_tag 
        = VL_EXTEND_II(22,20, (0xfffffU & VL_SEL_IIII(20,32,5,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__i_update_pc, 0xcU, 0x14U)));
}

void Vtestbench_btb::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_btb::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__i_pc = VL_RAND_RESET_I(32);
    __PVT__i_update_target_en = VL_RAND_RESET_I(1);
    __PVT__i_update_pc = VL_RAND_RESET_I(32);
    __PVT__i_update_target_pc = VL_RAND_RESET_I(32);
    __PVT__o_target_pc = VL_RAND_RESET_I(32);
    __PVT__o_btb_hit = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            __PVT__btb_table[__Vi0] = VL_RAND_RESET_Q(55);
    }}
    __PVT__tag = VL_RAND_RESET_I(22);
    __PVT__update_tag = VL_RAND_RESET_I(22);
    __PVT__index = VL_RAND_RESET_I(10);
    __PVT__update_index = VL_RAND_RESET_I(10);
    __PVT__unnamedblk1__DOT__i = 0;
    __Vdlyvdim0__btb_table__v0 = 0;
    __Vdlyvlsb__btb_table__v0 = 0;
    __Vdlyvset__btb_table__v0 = 0;
    __Vdlyvdim0__btb_table__v1 = 0;
    __Vdlyvlsb__btb_table__v1 = 0;
    __Vdlyvval__btb_table__v1 = VL_RAND_RESET_I(22);
    __Vdlyvdim0__btb_table__v2 = 0;
    __Vdlyvlsb__btb_table__v2 = 0;
    __Vdlyvval__btb_table__v2 = VL_RAND_RESET_I(32);
}
