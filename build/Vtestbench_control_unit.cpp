// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_control_unit.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_control_unit::_combo__TOP__testbench__TAGE__decode_unit__instr_decode2__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_control_unit::_combo__TOP__testbench__TAGE__decode_unit__instr_decode2__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__opcode 
        = (0x7fU & VL_SEL_IIII(7,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__i_instr, 0U, 7U));
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3 
        = (7U & VL_SEL_IIII(3,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__i_instr, 0xcU, 3U));
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct7 
        = (0x7fU & VL_SEL_IIII(7,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__i_instr, 0x19U, 7U));
    VL_ASSIGNBIT_II(1,0xdU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
    VL_ASSIGNBIT_II(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
    VL_ASSIGNBIT_IO(1,0xbU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
    VL_ASSIGNBIT_IO(1,0xaU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
    VL_ASSIGNSEL_IIII(4,6U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0xfU);
    VL_ASSIGNBIT_II(1,5U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
    VL_ASSIGNSEL_IIII(2,3U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 3U);
    VL_ASSIGNSEL_IIII(2,1U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 3U);
    VL_ASSIGNBIT_IO(1,0U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
    if (((((((((0x37U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__opcode)) 
               | (0x17U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__opcode))) 
              | (0x6fU == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__opcode))) 
             | (0x67U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__opcode))) 
            | (0x63U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__opcode))) 
           | (3U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__opcode))) 
          | (0x23U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__opcode))) 
         | (0x13U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__opcode)))) {
        if ((0x37U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__opcode))) {
            VL_ASSIGNBIT_IO(1,0xdU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
            VL_ASSIGNBIT_IO(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
            VL_ASSIGNBIT_II(1,0xaU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
            VL_ASSIGNSEL_IIII(4,6U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 9U);
            VL_ASSIGNSEL_IIII(2,1U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
        } else {
            if ((0x17U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__opcode))) {
                VL_ASSIGNBIT_IO(1,0xdU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                VL_ASSIGNBIT_IO(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                VL_ASSIGNBIT_II(1,0xbU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                VL_ASSIGNBIT_II(1,0xaU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                VL_ASSIGNSEL_IIII(4,6U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0xaU);
                VL_ASSIGNSEL_IIII(2,1U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
            } else {
                if ((0x6fU == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__opcode))) {
                    VL_ASSIGNBIT_IO(1,0xdU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                    VL_ASSIGNBIT_IO(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                    VL_ASSIGNBIT_II(1,0xbU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                    VL_ASSIGNBIT_II(1,0xaU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                    VL_ASSIGNSEL_IIII(4,6U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                    VL_ASSIGNSEL_IIII(2,1U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                } else {
                    if ((0x67U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__opcode))) {
                        VL_ASSIGNBIT_IO(1,0xdU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                        VL_ASSIGNBIT_II(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 
                                        (0U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3)));
                        VL_ASSIGNBIT_IO(1,0xbU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                        VL_ASSIGNBIT_II(1,0xaU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                        VL_ASSIGNSEL_IIII(4,6U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                        VL_ASSIGNSEL_IIII(2,1U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                    } else {
                        if ((0x63U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__opcode))) {
                            VL_ASSIGNBIT_II(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 
                                            ((((((0U 
                                                  == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3)) 
                                                 | (1U 
                                                    == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) 
                                                | (4U 
                                                   == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) 
                                               | (5U 
                                                  == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) 
                                              | (6U 
                                                 == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) 
                                             | (7U 
                                                == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))));
                            VL_ASSIGNBIT_II(1,0xbU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                            VL_ASSIGNBIT_II(1,0xaU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                            VL_ASSIGNSEL_IIII(4,6U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                        } else {
                            if ((3U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__opcode))) {
                                VL_ASSIGNBIT_IO(1,0xdU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                VL_ASSIGNBIT_IO(1,0xbU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                VL_ASSIGNBIT_II(1,0xaU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                                VL_ASSIGNSEL_IIII(4,6U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                                VL_ASSIGNBIT_II(1,5U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                                VL_ASSIGNSEL_IIII(2,1U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 2U);
                                if ((0U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) {
                                    VL_ASSIGNSEL_IIII(2,3U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                                    VL_ASSIGNBIT_IO(1,0U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                    VL_ASSIGNBIT_IO(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                } else {
                                    if ((1U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) {
                                        VL_ASSIGNSEL_IIII(2,3U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                        VL_ASSIGNBIT_IO(1,0U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                        VL_ASSIGNBIT_IO(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                    } else {
                                        if ((2U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) {
                                            VL_ASSIGNSEL_IIII(2,3U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 2U);
                                            VL_ASSIGNBIT_IO(1,0U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                            VL_ASSIGNBIT_IO(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                        } else {
                                            if ((4U 
                                                 == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) {
                                                VL_ASSIGNSEL_IIII(2,3U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                                                VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                                                VL_ASSIGNBIT_IO(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                            } else {
                                                if (
                                                    (5U 
                                                     == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) {
                                                    VL_ASSIGNSEL_IIII(2,3U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                                    VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                                                    VL_ASSIGNBIT_IO(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                                } else {
                                                    VL_ASSIGNSEL_IIII(2,3U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 3U);
                                                    VL_ASSIGNBIT_IO(1,0U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                                    VL_ASSIGNBIT_II(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if ((0x23U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__opcode))) {
                                    VL_ASSIGNBIT_II(1,0xdU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                                    VL_ASSIGNBIT_IO(1,0xbU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                    VL_ASSIGNBIT_II(1,0xaU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                                    VL_ASSIGNSEL_IIII(4,6U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                                    VL_ASSIGNBIT_IO(1,5U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                    VL_ASSIGNBIT_IO(1,0U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                    if ((0U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) {
                                        VL_ASSIGNSEL_IIII(2,3U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                                        VL_ASSIGNBIT_IO(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                    } else {
                                        if ((1U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) {
                                            VL_ASSIGNSEL_IIII(2,3U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                            VL_ASSIGNBIT_IO(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                        } else {
                                            if ((2U 
                                                 == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) {
                                                VL_ASSIGNSEL_IIII(2,3U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 2U);
                                                VL_ASSIGNBIT_IO(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                            } else {
                                                VL_ASSIGNSEL_IIII(2,3U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 3U);
                                                VL_ASSIGNBIT_II(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                                            }
                                        }
                                    }
                                } else {
                                    VL_ASSIGNBIT_IO(1,0xdU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                    VL_ASSIGNBIT_IO(1,0xbU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                    VL_ASSIGNBIT_II(1,0xaU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                                    VL_ASSIGNBIT_II(1,5U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                                    VL_ASSIGNSEL_IIII(2,1U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                    if ((1U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) {
                                        VL_ASSIGNSEL_IIII(4,6U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 
                                                          VL_CONCAT_III(4,1,3, 
                                                                        (1U 
                                                                         & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__i_instr, 0x1eU)), (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3)));
                                        VL_ASSIGNBIT_II(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 
                                                        (0U 
                                                         == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct7)));
                                    } else {
                                        if ((5U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) {
                                            VL_ASSIGNSEL_IIII(4,6U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 
                                                              VL_CONCAT_III(4,1,3, 
                                                                            (1U 
                                                                             & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__i_instr, 0x1eU)), (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3)));
                                            VL_ASSIGNBIT_II(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 
                                                            ((0x20U 
                                                              == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct7)) 
                                                             | (0U 
                                                                == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct7))));
                                        } else {
                                            if ((((
                                                   (((0U 
                                                      == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3)) 
                                                     | (7U 
                                                        == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) 
                                                    | (6U 
                                                       == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) 
                                                   | (4U 
                                                      == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) 
                                                  | (2U 
                                                     == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) 
                                                 | (3U 
                                                    == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3)))) {
                                                VL_ASSIGNSEL_IIII(4,6U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 
                                                                  VL_EXTEND_II(4,3, (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3)));
                                                VL_ASSIGNBIT_IO(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
                                            } else {
                                                VL_ASSIGNSEL_IIII(4,6U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                                                VL_ASSIGNBIT_II(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((0x33U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__opcode))) {
            VL_ASSIGNBIT_IO(1,0xdU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
            VL_ASSIGNSEL_IIII(4,6U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 
                              VL_CONCAT_III(4,1,3, 
                                            (1U & VL_BITSEL_IIII(1,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__i_instr, 0x1eU)), (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3)));
            VL_ASSIGNBIT_IO(1,0xbU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
            VL_ASSIGNBIT_IO(1,0xaU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
            VL_ASSIGNBIT_II(1,5U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
            VL_ASSIGNSEL_IIII(2,1U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
            VL_ASSIGNBIT_II(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 
                            (((((((1U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3)) 
                                  | (7U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) 
                                 | (6U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) 
                                | (4U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) 
                               | (2U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) 
                              | (3U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3)))
                              ? (0U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct7))
                              : (((0U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3)) 
                                  | (5U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct3))) 
                                 & ((0x20U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct7)) 
                                    | (0U == (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__funct7))))));
        } else {
            VL_ASSIGNBIT_II(1,0xdU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
            VL_ASSIGNBIT_II(1,0xcU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
            VL_ASSIGNBIT_IO(1,0xbU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
            VL_ASSIGNBIT_IO(1,0xaU, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
            VL_ASSIGNSEL_IIII(4,6U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0xfU);
            VL_ASSIGNBIT_II(1,5U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 0U);
            VL_ASSIGNSEL_IIII(2,3U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 3U);
            VL_ASSIGNSEL_IIII(2,1U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 3U);
            VL_ASSIGNBIT_IO(1,0U, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl, 1U);
        }
    }
}
