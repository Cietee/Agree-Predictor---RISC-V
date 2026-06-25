// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_forwarding_unit.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_forwarding_unit) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_forwarding_unit::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_forwarding_unit::~Vtestbench_forwarding_unit() {
}

void Vtestbench_forwarding_unit::_settle__TOP__testbench__TAGE__forwarding_unit__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_forwarding_unit::_settle__TOP__testbench__TAGE__forwarding_unit__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__o_fwa = 1U;
    vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__o_fwb = 1U;
    if ((((IData)(vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__EXMEM_rd_wren) 
          & ((IData)(vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__EXMEM_rd_addr) 
             == (IData)(vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__IDEX_rs1_addr))) 
         & (0U != (IData)(vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__EXMEM_rd_addr)))) {
        vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__o_fwa = 2U;
    } else {
        if ((((IData)(vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__MEMWB_rd_wren) 
              & (0U != (IData)(vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__MEMWB_rd_addr))) 
             & ((IData)(vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__MEMWB_rd_addr) 
                == (IData)(vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__IDEX_rs1_addr)))) {
            vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__o_fwa = 3U;
        }
    }
    if ((((IData)(vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__EXMEM_rd_wren) 
          & ((IData)(vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__EXMEM_rd_addr) 
             == (IData)(vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__IDEX_rs2_addr))) 
         & (0U != (IData)(vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__EXMEM_rd_addr)))) {
        vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__o_fwb = 2U;
    } else {
        if ((((IData)(vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__MEMWB_rd_wren) 
              & (0U != (IData)(vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__MEMWB_rd_addr))) 
             & ((IData)(vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__MEMWB_rd_addr) 
                == (IData)(vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__IDEX_rs2_addr)))) {
            vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__o_fwb = 3U;
        }
    }
}

void Vtestbench_forwarding_unit::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_forwarding_unit::_ctor_var_reset\n"); );
    // Body
    __PVT__IDEX_rd_addr = VL_RAND_RESET_I(5);
    __PVT__EXMEM_rd_addr = VL_RAND_RESET_I(5);
    __PVT__MEMWB_rd_addr = VL_RAND_RESET_I(5);
    __PVT__IDEX_rd_wren = VL_RAND_RESET_I(1);
    __PVT__EXMEM_rd_wren = VL_RAND_RESET_I(1);
    __PVT__MEMWB_rd_wren = VL_RAND_RESET_I(1);
    __PVT__IDEX_rs1_addr = VL_RAND_RESET_I(5);
    __PVT__IDEX_rs2_addr = VL_RAND_RESET_I(5);
    __PVT__o_fwa = VL_RAND_RESET_I(2);
    __PVT__o_fwb = VL_RAND_RESET_I(2);
}
