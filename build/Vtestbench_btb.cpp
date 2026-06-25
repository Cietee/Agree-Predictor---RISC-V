// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_btb.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_btb::_sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_btb::_sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vtemp1;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__Vdlyvset__btb_table__v0 = 0U;
    if (vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__i_rst_n) {
        if (vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__i_update_target_en) {
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__Vdlyvset__btb_table__v0 = 1U;
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__Vdlyvlsb__btb_table__v0 = 0x36U;
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__Vdlyvdim0__btb_table__v0 
                = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__update_index;
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__Vdlyvval__btb_table__v1 
                = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__update_tag;
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__Vdlyvlsb__btb_table__v1 = 0x20U;
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__Vdlyvdim0__btb_table__v1 
                = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__update_index;
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__Vdlyvval__btb_table__v2 
                = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__i_update_target_pc;
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__Vdlyvlsb__btb_table__v2 = 0U;
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__Vdlyvdim0__btb_table__v2 
                = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__update_index;
        }
    } else {
        vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(1,32,32, 0x400U, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__unnamedblk1__DOT__i)) {
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__btb_table[(0x3ffU 
                                                                                & VL_SEL_IIII(10,32,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__unnamedblk1__DOT__i, 0U, 0xaU))] = 0ULL;
            __Vtemp1 = ((IData)(1U) + vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__unnamedblk1__DOT__i);
            vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__unnamedblk1__DOT__i 
                = __Vtemp1;
        }
    }
    if (vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__Vdlyvset__btb_table__v0) {
        VL_ASSIGNBIT_QO(1,vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__Vdlyvlsb__btb_table__v0, 
                        vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__btb_table
                        [vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__Vdlyvdim0__btb_table__v0], 1U);
        VL_ASSIGNSEL_QIII(22,vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__Vdlyvlsb__btb_table__v1, 
                          vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__btb_table
                          [vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__Vdlyvdim0__btb_table__v1], vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__Vdlyvval__btb_table__v1);
        VL_ASSIGNSEL_QIII(32,vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__Vdlyvlsb__btb_table__v2, 
                          vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__btb_table
                          [vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__Vdlyvdim0__btb_table__v2], vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__Vdlyvval__btb_table__v2);
    }
}

VL_INLINE_OPT void Vtestbench_btb::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_btb::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__4\n"); );
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

VL_INLINE_OPT void Vtestbench_btb::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vtestbench_btb::_combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__5\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__update_index 
        = (0x3ffU & VL_SEL_IIII(10,32,5,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__i_update_pc, 2U, 0xaU));
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__update_tag 
        = VL_EXTEND_II(22,20, (0xfffffU & VL_SEL_IIII(20,32,5,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__i_update_pc, 0xcU, 0x14U)));
}
