// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_sign_extend.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_sign_extend) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_sign_extend::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_sign_extend::~Vtestbench_sign_extend() {
}

void Vtestbench_sign_extend::_settle__TOP__testbench__TAGE__writeback_unit__mask_module__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_sign_extend::_settle__TOP__testbench__TAGE__writeback_unit__mask_module__1\n"); );
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

void Vtestbench_sign_extend::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_sign_extend::_ctor_var_reset\n"); );
    // Body
    __PVT__i_data = VL_RAND_RESET_I(32);
    __PVT__i_bit_mask = VL_RAND_RESET_I(2);
    __PVT__i_signed_flag = VL_RAND_RESET_I(1);
    __PVT__o_data = VL_RAND_RESET_I(32);
}
