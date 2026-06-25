// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_regfile.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_regfile) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_regfile::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_regfile::~Vtestbench_regfile() {
}

void Vtestbench_regfile::_settle__TOP__testbench__TAGE__decode_unit__instr_decode0__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_regfile::_settle__TOP__testbench__TAGE__decode_unit__instr_decode0__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__o_rs1_data 
        = vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers
        [vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rs1_addr];
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__o_rs2_data 
        = vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers
        [vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rs2_addr];
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__reg0 
        = VL_REDOR_I(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rd_addr);
}

void Vtestbench_regfile::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_regfile::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__i_rd_wren = VL_RAND_RESET_I(1);
    __PVT__i_rd_addr = VL_RAND_RESET_I(32);
    __PVT__i_rd_data = VL_RAND_RESET_I(32);
    __PVT__i_rs1_addr = VL_RAND_RESET_I(5);
    __PVT__i_rs2_addr = VL_RAND_RESET_I(5);
    __PVT__o_rs1_data = VL_RAND_RESET_I(32);
    __PVT__o_rs2_data = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            __PVT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__reg0 = VL_RAND_RESET_I(1);
    __PVT__unnamedblk1__DOT__i = 0;
    __Vdlyvset__registers__v0 = 0;
    __Vdlyvdim0__registers__v1 = 0;
    __Vdlyvval__registers__v1 = VL_RAND_RESET_I(32);
    __Vdlyvset__registers__v1 = 0;
    __Vdlyvset__registers__v2 = 0;
    __Vdlyvset__registers__v3 = 0;
    __Vdlyvset__registers__v4 = 0;
    __Vdlyvset__registers__v5 = 0;
    __Vdlyvset__registers__v6 = 0;
    __Vdlyvset__registers__v7 = 0;
    __Vdlyvset__registers__v8 = 0;
    __Vdlyvset__registers__v9 = 0;
    __Vdlyvset__registers__v10 = 0;
    __Vdlyvset__registers__v11 = 0;
    __Vdlyvset__registers__v12 = 0;
    __Vdlyvset__registers__v13 = 0;
    __Vdlyvset__registers__v14 = 0;
    __Vdlyvset__registers__v15 = 0;
    __Vdlyvset__registers__v16 = 0;
    __Vdlyvset__registers__v17 = 0;
    __Vdlyvset__registers__v18 = 0;
    __Vdlyvset__registers__v19 = 0;
    __Vdlyvset__registers__v20 = 0;
    __Vdlyvset__registers__v21 = 0;
    __Vdlyvset__registers__v22 = 0;
    __Vdlyvset__registers__v23 = 0;
    __Vdlyvset__registers__v24 = 0;
    __Vdlyvset__registers__v25 = 0;
    __Vdlyvset__registers__v26 = 0;
    __Vdlyvset__registers__v27 = 0;
    __Vdlyvset__registers__v28 = 0;
    __Vdlyvset__registers__v29 = 0;
    __Vdlyvset__registers__v30 = 0;
    __Vdlyvset__registers__v31 = 0;
    __Vdlyvset__registers__v32 = 0;
}
