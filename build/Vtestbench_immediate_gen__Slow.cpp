// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_immediate_gen.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_immediate_gen) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_immediate_gen::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_immediate_gen::~Vtestbench_immediate_gen() {
}

void Vtestbench_immediate_gen::_settle__TOP__testbench__TAGE__decode_unit__instr_decode1__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_immediate_gen::_settle__TOP__testbench__TAGE__decode_unit__instr_decode1__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__o_imme_data 
        = ((0x23U == (0x7fU & VL_SEL_IIII(7,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr, 0U, 7U)))
            ? VL_CONCAT_III(32,20,12, (0xfffffU & VL_REPLICATE_IOI(20,1,32,
                                                                   (1U 
                                                                    & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr, 0x1fU)), 0x14U)), 
                            VL_CONCAT_III(12,7,5, (0x7fU 
                                                   & VL_SEL_IIII(7,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr, 0x19U, 7U)), 
                                          (0x1fU & 
                                           VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr, 7U, 5U))))
            : ((0x63U == (0x7fU & VL_SEL_IIII(7,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr, 0U, 7U)))
                ? VL_CONCAT_III(32,20,12, (0xfffffU 
                                           & VL_REPLICATE_IOI(20,1,32,
                                                              (1U 
                                                               & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr, 0x1fU)), 0x14U)), 
                                VL_CONCAT_III(12,1,11, 
                                              (1U & 
                                               VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr, 7U)), 
                                              VL_CONCAT_III(11,6,5, 
                                                            (0x3fU 
                                                             & VL_SEL_IIII(6,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr, 0x19U, 6U)), 
                                                            VL_CONCAT_III(5,4,1, 
                                                                          (0xfU 
                                                                           & VL_SEL_IIII(4,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr, 8U, 4U)), 0U))))
                : ((0x6fU == (0x7fU & VL_SEL_IIII(7,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr, 0U, 7U)))
                    ? VL_CONCAT_III(32,12,20, (0xfffU 
                                               & VL_REPLICATE_IOI(12,1,32,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr, 0x1fU)), 0xcU)), 
                                    VL_CONCAT_III(20,8,12, 
                                                  (0xffU 
                                                   & VL_SEL_IIII(8,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr, 0xcU, 8U)), 
                                                  VL_CONCAT_III(12,1,11, 
                                                                (1U 
                                                                 & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr, 0x14U)), 
                                                                VL_CONCAT_III(11,10,1, 
                                                                              (0x3ffU 
                                                                               & VL_SEL_IIII(10,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr, 0x15U, 0xaU)), 0U))))
                    : (((0x37U == (0x7fU & VL_SEL_IIII(7,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr, 0U, 7U))) 
                        | (0x17U == (0x7fU & VL_SEL_IIII(7,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr, 0U, 7U))))
                        ? VL_CONCAT_III(32,20,12, (0xfffffU 
                                                   & VL_SEL_IIII(20,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr, 0xcU, 0x14U)), 0U)
                        : VL_CONCAT_III(32,20,12, (0xfffffU 
                                                   & VL_REPLICATE_IOI(20,1,32,
                                                                      (1U 
                                                                       & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr, 0x1fU)), 0x14U)), 
                                        (0xfffU & VL_SEL_IIII(12,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr, 0x14U, 0xcU)))))));
}

void Vtestbench_immediate_gen::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_immediate_gen::_ctor_var_reset\n"); );
    // Body
    __PVT__i_instr = VL_RAND_RESET_I(32);
    __PVT__o_imme_data = VL_RAND_RESET_I(32);
}
