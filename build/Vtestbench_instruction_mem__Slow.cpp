// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_instruction_mem.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_instruction_mem) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_instruction_mem::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_instruction_mem::~Vtestbench_instruction_mem() {
}

void Vtestbench_instruction_mem::_initial__TOP__testbench__TAGE__fetch_unit__instruction_memory__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_instruction_mem::_initial__TOP__testbench__TAGE__fetch_unit__instruction_memory__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*159:0*/ __Vtemp1[5];
    // Body
    VL_CONST_W_5X(152,__Vtemp1,0x002e2e2f,0x74657374,0x5f632f74,0x65737433,0x2e686578);
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(5, __Vtemp1)
                 , vlSymsp->TOP__testbench__TAGE__fetch_unit__instruction_memory.__PVT__imem
                 , 0, ~0ULL);
}

void Vtestbench_instruction_mem::_settle__TOP__testbench__TAGE__fetch_unit__instruction_memory__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_instruction_mem::_settle__TOP__testbench__TAGE__fetch_unit__instruction_memory__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__instruction_memory.__PVT__o_rdata 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__instruction_memory.__PVT__imem
        [(0xfffU & VL_SEL_IIII(12,32,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit__instruction_memory.__PVT__i_raddr, 2U, 0xcU))];
}

void Vtestbench_instruction_mem::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_instruction_mem::_ctor_var_reset\n"); );
    // Body
    __PVT__i_raddr = VL_RAND_RESET_I(32);
    __PVT__o_rdata = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
            __PVT__imem[__Vi0] = VL_RAND_RESET_I(32);
    }}
}
