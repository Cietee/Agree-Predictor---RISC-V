// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_pc_gen.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_pc_gen::_sequent__TOP__testbench__TAGE__fetch_unit__pc_generator__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_pc_gen::_sequent__TOP__testbench__TAGE__fetch_unit__pc_generator__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__Vdly__pc 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__pc;
    if (vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__i_rst_n) {
        if (vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__i_pc_en) {
            vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__Vdly__pc 
                = vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__next_pc;
        }
    } else {
        vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__Vdly__pc = 0U;
    }
    vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__pc 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__Vdly__pc;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__o_pc 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__pc;
}

VL_INLINE_OPT void Vtestbench_pc_gen::_combo__TOP__testbench__TAGE__fetch_unit__pc_generator__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_pc_gen::_combo__TOP__testbench__TAGE__fetch_unit__pc_generator__4\n"); );
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
