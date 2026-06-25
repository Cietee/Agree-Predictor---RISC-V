// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_regfile.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_regfile::_sequent__TOP__testbench__TAGE__decode_unit__instr_decode0__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_regfile::_sequent__TOP__testbench__TAGE__decode_unit__instr_decode0__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v0 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v1 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v2 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v3 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v4 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v5 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v6 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v7 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v8 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v9 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v10 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v11 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v12 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v13 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v14 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v15 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v16 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v17 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v18 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v19 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v20 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v21 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v22 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v23 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v24 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v25 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v26 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v27 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v28 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v29 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v30 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v31 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v32 = 0U;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v0 = 1U;
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rst_n) {
        if (((IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rd_wren) 
             & (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__reg0))) {
            vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvval__registers__v1 
                = vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rd_data;
            vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v1 = 1U;
            vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvdim0__registers__v1 
                = (0x1fU & VL_SEL_IIII(5,32,32,32, vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rd_addr, 0U, 5U));
        }
    } else {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v2 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 2U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v3 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 3U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v4 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 4U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v5 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 5U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v6 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 6U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v7 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 7U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v8 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 8U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v9 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 9U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v10 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0xaU;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v11 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0xbU;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v12 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0xcU;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v13 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0xdU;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v14 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0xeU;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v15 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0xfU;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v16 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0x10U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v17 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0x11U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v18 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0x12U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v19 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0x13U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v20 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0x14U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v21 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0x15U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v22 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0x16U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v23 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0x17U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v24 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0x18U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v25 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0x19U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v26 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0x1aU;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v27 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0x1bU;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v28 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0x1cU;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v29 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0x1dU;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v30 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0x1eU;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v31 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0x1fU;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v32 = 1U;
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__unnamedblk1__DOT__i = 0x20U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v0) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v1) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvdim0__registers__v1] 
            = vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvval__registers__v1;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v2) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[1U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v3) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[2U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v4) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[3U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v5) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[4U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v6) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[5U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v7) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[6U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v8) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[7U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v9) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[8U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v10) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[9U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v11) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0xaU] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v12) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0xbU] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v13) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0xcU] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v14) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0xdU] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v15) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0xeU] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v16) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0xfU] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v17) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0x10U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v18) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0x11U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v19) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0x12U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v20) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0x13U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v21) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0x14U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v22) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0x15U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v23) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0x16U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v24) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0x17U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v25) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0x18U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v26) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0x19U] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v27) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0x1aU] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v28) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0x1bU] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v29) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0x1cU] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v30) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0x1dU] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v31) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0x1eU] = 0U;
    }
    if (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__Vdlyvset__registers__v32) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers[0x1fU] = 0U;
    }
}

VL_INLINE_OPT void Vtestbench_regfile::_combo__TOP__testbench__TAGE__decode_unit__instr_decode0__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtestbench_regfile::_combo__TOP__testbench__TAGE__decode_unit__instr_decode0__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__reg0 
        = VL_REDOR_I(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rd_addr);
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__o_rs1_data 
        = vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers
        [vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rs1_addr];
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__o_rs2_data 
        = vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__registers
        [vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rs2_addr];
}
