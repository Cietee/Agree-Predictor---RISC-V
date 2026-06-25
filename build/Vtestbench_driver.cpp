// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_driver.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_driver::_sequent__TOP__testbench__driverUnit__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_driver::_sequent__TOP__testbench__driverUnit__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__driverUnit.__Vdly__counter 
        = vlSymsp->TOP__testbench__driverUnit.__PVT__counter;
    vlSymsp->TOP__testbench__driverUnit.__Vdly__counter 
        = ((IData)(vlSymsp->TOP__testbench__driverUnit.__PVT__i_rst_n)
            ? (1ULL + vlSymsp->TOP__testbench__driverUnit.__PVT__counter)
            : 0ULL);
    vlSymsp->TOP__testbench__driverUnit.__PVT__counter 
        = vlSymsp->TOP__testbench__driverUnit.__Vdly__counter;
    vlSymsp->TOP__testbench__driverUnit.__PVT__i_io_sw 
        = ((2ULL < vlSymsp->TOP__testbench__driverUnit.__PVT__counter)
            ? 0xa5a5a5a5U : 0U);
}
