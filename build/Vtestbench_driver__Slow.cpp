// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_driver.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_driver) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_driver::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_driver::~Vtestbench_driver() {
}

void Vtestbench_driver::_settle__TOP__testbench__driverUnit__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_driver::_settle__TOP__testbench__driverUnit__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__driverUnit.__PVT__i_io_sw 
        = ((2ULL < vlSymsp->TOP__testbench__driverUnit.__PVT__counter)
            ? 0xa5a5a5a5U : 0U);
}

void Vtestbench_driver::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_driver::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__i_io_sw = VL_RAND_RESET_I(32);
    __PVT__counter = VL_RAND_RESET_Q(64);
    __Vdly__counter = VL_RAND_RESET_Q(64);
}
