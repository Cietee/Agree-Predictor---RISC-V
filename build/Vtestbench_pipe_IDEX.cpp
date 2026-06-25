// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_pipe_IDEX.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_pipe_IDEX::_sequent__TOP__testbench__TAGE__idex_pipe_unit__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_pipe_IDEX::_sequent__TOP__testbench__TAGE__idex_pipe_unit__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__IDEX_predict_direct 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__IDEX_predict_direct;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__alu_op 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__alu_op;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__opb_sel 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__opb_sel;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__opa_sel 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__opa_sel;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__bit_mask 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__bit_mask;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__signed_flag 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__signed_flag;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__lsu_wren 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__lsu_wren;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rd_wren 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rd_wren;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__wb_sel 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__wb_sel;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__instr_vld 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__instr_vld;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rs2_addr 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rs2_addr;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rs1_addr 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rs1_addr;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rd_addr 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rd_addr;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__imme_data 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__imme_data;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rs2_data 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rs2_data;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rs1_data 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rs1_data;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__instruction 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__instruction;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__pc 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__pc;
    if (vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_rst_n) {
        if (vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_IDEX_en) {
            vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__pc 
                = VL_SEL_IWII(32,190,32,32, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_decode_stage_bus, 0x7eU, 0x20U);
            vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__instruction 
                = VL_SEL_IWII(32,190,32,32, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_decode_stage_bus, 0x9eU, 0x20U);
            vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rs1_data 
                = VL_SEL_IWII(32,190,32,32, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_decode_stage_bus, 0x59U, 0x20U);
            vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rs2_data 
                = VL_SEL_IWII(32,190,32,32, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_decode_stage_bus, 0x39U, 0x20U);
            vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__imme_data 
                = VL_SEL_IWII(32,190,32,32, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_decode_stage_bus, 0x19U, 0x20U);
            vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rd_addr 
                = (0x1fU & VL_SEL_IWII(5,190,32,32, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_decode_stage_bus, 0x79U, 5U));
            vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rs1_addr 
                = (0x1fU & VL_SEL_IWII(5,190,32,32, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_decode_stage_bus, 0x14U, 5U));
            vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rs2_addr 
                = (0x1fU & VL_SEL_IWII(5,190,32,32, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_decode_stage_bus, 0xfU, 5U));
            vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__instr_vld 
                = (1U & VL_BITSEL_IWII(1,190,32,32, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_decode_stage_bus, 0xdU));
            vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__wb_sel 
                = (3U & VL_SEL_IWII(2,190,32,32, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_decode_stage_bus, 2U, 2U));
            vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rd_wren 
                = (1U & VL_BITSEL_IWII(1,190,32,32, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_decode_stage_bus, 0xeU));
            vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__lsu_wren 
                = (1U & VL_BITSEL_IWII(1,190,32,32, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_decode_stage_bus, 6U));
            vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__signed_flag 
                = (1U & VL_BITSEL_IWII(1,190,32,32, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_decode_stage_bus, 1U));
            vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__bit_mask 
                = (3U & VL_SEL_IWII(2,190,32,32, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_decode_stage_bus, 4U, 2U));
            vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__opa_sel 
                = (1U & VL_BITSEL_IWII(1,190,32,32, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_decode_stage_bus, 0xcU));
            vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__opb_sel 
                = (1U & VL_BITSEL_IWII(1,190,32,32, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_decode_stage_bus, 0xbU));
            vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__alu_op 
                = (0xfU & VL_SEL_IWII(4,190,32,32, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_decode_stage_bus, 7U, 4U));
            vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__IDEX_predict_direct 
                = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_IDEX_predict_direct;
        }
    } else {
        vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__instr_vld = 0U;
        vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rs1_data = 0U;
        vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rs2_data = 0U;
        vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__imme_data = 0U;
        vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__pc = 0U;
        vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__instruction = 0U;
        vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rd_addr = 0U;
        vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rs1_addr = 0U;
        vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rs2_addr = 0U;
        vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__alu_op = 0U;
        vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rd_wren = 0U;
        vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__lsu_wren = 0U;
        vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__signed_flag = 0U;
        vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__opa_sel = 0U;
        vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__opb_sel = 0U;
        vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__wb_sel = 0U;
        vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__bit_mask = 0U;
        vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__IDEX_predict_direct = 0U;
    }
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__pc 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__pc;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__instruction 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__instruction;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rs1_data 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rs1_data;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rs2_data 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rs2_data;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__imme_data 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__imme_data;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rd_addr 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rd_addr;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rs1_addr 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rs1_addr;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rs2_addr 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rs2_addr;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__instr_vld 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__instr_vld;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__wb_sel 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__wb_sel;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rd_wren 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__rd_wren;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__lsu_wren 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__lsu_wren;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__signed_flag 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__signed_flag;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__bit_mask 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__bit_mask;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__opa_sel 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__opa_sel;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__opb_sel 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__opb_sel;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__alu_op 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__alu_op;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__IDEX_predict_direct 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__Vdly__IDEX_predict_direct;
    VL_ASSIGNSEL_WIII(32,0x9eU, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__instruction);
    VL_ASSIGNSEL_WIII(32,0x7eU, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__pc);
    VL_ASSIGNBIT_WI(1,0U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__IDEX_predict_direct);
    VL_ASSIGNSEL_WIII(5,0x14U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rs1_addr);
    VL_ASSIGNSEL_WIII(5,0xfU, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rs2_addr);
    VL_ASSIGNSEL_WIII(32,0x59U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rs1_data);
    VL_ASSIGNSEL_WIII(32,0x39U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rs2_data);
    VL_ASSIGNSEL_WIII(32,0x19U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__imme_data);
    VL_ASSIGNSEL_WIII(5,0x79U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rd_addr);
    VL_ASSIGNBIT_WI(1,0xdU, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__instr_vld);
    VL_ASSIGNSEL_WIII(2,2U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__wb_sel);
    VL_ASSIGNBIT_WI(1,0xeU, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__rd_wren);
    VL_ASSIGNBIT_WI(1,6U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__lsu_wren);
    VL_ASSIGNBIT_WI(1,1U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__signed_flag);
    VL_ASSIGNSEL_WIII(2,4U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__bit_mask);
    VL_ASSIGNBIT_WI(1,0xcU, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__opa_sel);
    VL_ASSIGNBIT_WI(1,0xbU, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__opb_sel);
    VL_ASSIGNSEL_WIII(4,7U, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__alu_op);
}
