// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_harzard_detection.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_harzard_detection::_combo__TOP__testbench__TAGE__harzard_detection_unit__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_harzard_detection::_combo__TOP__testbench__TAGE__harzard_detection_unit__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__is_IFID_load 
        = (3U == (0x7fU & VL_SEL_IWII(7,131,32,32, vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__i_harzard_bus, 0x40U, 7U)));
    vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__is_IDEX_load 
        = (3U == (0x7fU & VL_SEL_IWII(7,131,32,32, vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__i_harzard_bus, 0x60U, 7U)));
    vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__is_branch_jump 
        = (1U & (VL_BITSEL_IWII(1,131,32,32, vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__i_harzard_bus, 0x82U) 
                 & VL_BITSEL_IWII(1,131,32,32, vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__i_harzard_bus, 0x81U)));
    if ((1U & VL_BITSEL_IWII(1,131,32,32, vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__i_harzard_bus, 0x81U))) {
        vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__mispredict_direct 
            = ((1U & VL_BITSEL_IWII(1,131,32,32, vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__i_harzard_bus, 0x80U)) 
               != (1U & VL_BITSEL_IWII(1,131,32,32, vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__i_harzard_bus, 0x82U)));
        vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__mispredict_target 
            = (VL_SEL_IWII(32,131,32,32, vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__i_harzard_bus, 0x20U, 0x20U) 
               != VL_SEL_IWII(32,131,32,32, vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__i_harzard_bus, 0U, 0x20U));
    } else {
        vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__mispredict_direct = 0U;
        vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__mispredict_target = 0U;
    }
    vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__is_mispredict 
        = ((IData)(vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__mispredict_direct) 
           | (IData)(vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__mispredict_target));
    VL_ASSIGNBIT_II(1,3U, vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__o_harzard_bus, 
                    (1U & VL_BITSEL_IIII(1,32,32,32, 
                                         (((IData)(vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__is_branch_jump) 
                                           & (IData)(vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__is_mispredict))
                                           ? 1U : (
                                                   ((IData)(vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__is_IFID_load) 
                                                    & (~ (IData)(vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__mispredict_direct)))
                                                    ? 0U
                                                    : 1U)), 0U)));
    VL_ASSIGNBIT_II(1,4U, vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__o_harzard_bus, 
                    ((IData)(vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__is_branch_jump) 
                     & (IData)(vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__is_mispredict)));
    VL_ASSIGNBIT_II(1,5U, vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__o_harzard_bus, 
                    ((IData)(vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__is_IDEX_load) 
                     | (VL_BITSEL_IWII(1,131,32,32, vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__i_harzard_bus, 0x81U) 
                        & (IData)(vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__mispredict_direct))));
    VL_ASSIGNBIT_II(1,2U, vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__o_harzard_bus, vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__mispredict_direct);
    VL_ASSIGNBIT_II(1,1U, vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__o_harzard_bus, vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__mispredict_target);
    VL_ASSIGNBIT_II(1,0U, vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__o_harzard_bus, 
                    (VL_BITSEL_IWII(1,131,32,32, vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__i_harzard_bus, 0x81U) 
                     & (IData)(vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__mispredict_direct)));
}
