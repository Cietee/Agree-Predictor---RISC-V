// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_sign_extend.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_sign_extend::_combo__TOP__testbench__TAGE__writeback_unit__mask_module__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_sign_extend::_combo__TOP__testbench__TAGE__writeback_unit__mask_module__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__writeback_unit__mask_module.__PVT__o_data 
        = ((0U == (IData)(vlSymsp->TOP__testbench__TAGE__writeback_unit__mask_module.__PVT__i_bit_mask))
            ? ((IData)(vlSymsp->TOP__testbench__TAGE__writeback_unit__mask_module.__PVT__i_signed_flag)
                ? VL_CONCAT_III(32,24,8, (0xffffffU 
                                          & VL_REPLICATE_IOI(24,1,32,
                                                             (1U 
                                                              & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__writeback_unit__mask_module.__PVT__i_data, 7U)), 0x18U)), 
                                (0xffU & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__testbench__TAGE__writeback_unit__mask_module.__PVT__i_data, 0U, 8U)))
                : VL_EXTEND_II(32,8, (0xffU & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__testbench__TAGE__writeback_unit__mask_module.__PVT__i_data, 0U, 8U))))
            : ((1U == (IData)(vlSymsp->TOP__testbench__TAGE__writeback_unit__mask_module.__PVT__i_bit_mask))
                ? ((IData)(vlSymsp->TOP__testbench__TAGE__writeback_unit__mask_module.__PVT__i_signed_flag)
                    ? VL_CONCAT_III(32,16,16, (0xffffU 
                                               & VL_REPLICATE_IOI(16,1,32,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__writeback_unit__mask_module.__PVT__i_data, 0xfU)), 0x10U)), 
                                    (0xffffU & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__testbench__TAGE__writeback_unit__mask_module.__PVT__i_data, 0U, 0x10U)))
                    : VL_EXTEND_II(32,16, (0xffffU 
                                           & VL_SEL_IIII(16,32,5,32, vlSymsp->TOP__testbench__TAGE__writeback_unit__mask_module.__PVT__i_data, 0U, 0x10U))))
                : ((2U == (IData)(vlSymsp->TOP__testbench__TAGE__writeback_unit__mask_module.__PVT__i_bit_mask))
                    ? vlSymsp->TOP__testbench__TAGE__writeback_unit__mask_module.__PVT__i_data
                    : 0U)));
}
