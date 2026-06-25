// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_block_DECODE.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_block_DECODE::_combo__TOP__testbench__TAGE__decode_unit__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_DECODE::_combo__TOP__testbench__TAGE__decode_unit__4\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__i_clk;
}

VL_INLINE_OPT void Vtestbench_block_DECODE::_combo__TOP__testbench__TAGE__decode_unit__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_DECODE::_combo__TOP__testbench__TAGE__decode_unit__5\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__decode_unit.__Vcellinp__instr_decode0__i_rd_addr 
        = VL_EXTEND_II(32,5, (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__i_rd_addr));
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rd_wren 
        = vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__i_rd_wren;
    VL_ASSIGNSEL_WIII(5,0x6aU, vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__o_decode_bus, 
                      (0x1fU & VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__i_instr, 7U, 5U)));
    VL_ASSIGNSEL_WIII(5,5U, vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__o_decode_bus, 
                      (0x1fU & VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__i_instr, 0xfU, 5U)));
    VL_ASSIGNSEL_WIII(5,0U, vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__o_decode_bus, 
                      (0x1fU & VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__i_instr, 0x14U, 5U)));
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__i_instr 
        = vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__i_instr;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__i_instr 
        = vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__i_instr;
    vlSymsp->TOP__testbench__TAGE__decode_unit.__Vcellinp__instr_decode0__i_rs2_addr 
        = (0x1fU & VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__i_instr, 0x14U, 5U));
    vlSymsp->TOP__testbench__TAGE__decode_unit.__Vcellinp__instr_decode0__i_rs1_addr 
        = (0x1fU & VL_SEL_IIII(5,32,5,32, vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__i_instr, 0xfU, 5U));
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rd_addr 
        = vlSymsp->TOP__testbench__TAGE__decode_unit.__Vcellinp__instr_decode0__i_rd_addr;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rs2_addr 
        = vlSymsp->TOP__testbench__TAGE__decode_unit.__Vcellinp__instr_decode0__i_rs2_addr;
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rs1_addr 
        = vlSymsp->TOP__testbench__TAGE__decode_unit.__Vcellinp__instr_decode0__i_rs1_addr;
}

VL_INLINE_OPT void Vtestbench_block_DECODE::_combo__TOP__testbench__TAGE__decode_unit__6(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_DECODE::_combo__TOP__testbench__TAGE__decode_unit__6\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__decode_unit.__Vcellout__instr_decode1__o_imme_data 
        = vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1.__PVT__o_imme_data;
    vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__o_ctrl_bus 
        = vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2.__PVT__o_ctrl;
    vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__rs1 
        = vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__o_rs1_data;
    vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__rs2 
        = vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__o_rs2_data;
    VL_ASSIGNSEL_WIII(32,0xaU, vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__o_decode_bus, vlSymsp->TOP__testbench__TAGE__decode_unit.__Vcellout__instr_decode1__o_imme_data);
    VL_ASSIGNSEL_WIII(32,0x4aU, vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__o_decode_bus, vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__rs1);
    VL_ASSIGNSEL_WIII(32,0x2aU, vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__o_decode_bus, vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__rs2);
}

VL_INLINE_OPT void Vtestbench_block_DECODE::_combo__TOP__testbench__TAGE__decode_unit__7(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_DECODE::_combo__TOP__testbench__TAGE__decode_unit__7\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rd_data 
        = vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__i_rd_data;
}
