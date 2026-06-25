// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_top_riscv.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_top_riscv) {
    VL_CELL(__PVT__fetch_unit, Vtestbench_block_FETCH);
    VL_CELL(__PVT__ifid_pipe_unit, Vtestbench_pipe_IFID);
    VL_CELL(__PVT__harzard_detection_unit, Vtestbench_harzard_detection);
    VL_CELL(__PVT__decode_unit, Vtestbench_block_DECODE);
    VL_CELL(__PVT__idex_pipe_unit, Vtestbench_pipe_IDEX);
    VL_CELL(__PVT__forwarding_unit, Vtestbench_forwarding_unit);
    VL_CELL(__PVT__execute_unit, Vtestbench_block_EXECUTE);
    VL_CELL(__PVT__exmem_pipe_unit, Vtestbench_pipe_EXMEM);
    VL_CELL(__PVT__lsu_unit, Vtestbench_lsu);
    VL_CELL(__PVT__memwb_pipe_unit, Vtestbench_pipe_MEMWB);
    VL_CELL(__PVT__writeback_unit, Vtestbench_block_WRITE_BACK);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_top_riscv::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_top_riscv::~Vtestbench_top_riscv() {
}

void Vtestbench_top_riscv::_settle__TOP__testbench__TAGE__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_top_riscv::_settle__TOP__testbench__TAGE__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE.__PVT__o_harzard_bus 
        = vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__o_harzard_bus;
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__i_IFID_en = 1U;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_IDEX_en = 1U;
    vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__PVT__i_EXMEM_en = 1U;
    vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__i_MEMWB_en = 1U;
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__fetch_unit__update_bbt_index 
        = (0x7fU & VL_SEL_IIII(7,10,32,32, (IData)(vlSymsp->TOP__testbench__TAGE.__PVT__bbt_index_DE), 0U, 7U));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__fetch_unit__update_pht_index 
        = (0xffU & VL_SEL_IIII(8,10,32,32, (IData)(vlSymsp->TOP__testbench__TAGE.__PVT__pht_index_DE), 0U, 8U));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__ifid_pipe_unit__i_is_mispredict 
        = (1U & VL_BITSEL_IIII(1,6,32,32, (IData)(vlSymsp->TOP__testbench__TAGE.__PVT__o_harzard_bus), 0U));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__fetch_unit__i_pc_en 
        = (1U & VL_BITSEL_IIII(1,6,32,32, (IData)(vlSymsp->TOP__testbench__TAGE.__PVT__o_harzard_bus), 3U));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__fetch_unit__i_pc_sel 
        = (1U & VL_BITSEL_IIII(1,6,32,32, (IData)(vlSymsp->TOP__testbench__TAGE.__PVT__o_harzard_bus), 4U));
    VL_ASSIGNBIT_WI(1,1U, vlSymsp->TOP__testbench__TAGE.__PVT__i_branch_predict_bus, 
                    (1U & VL_BITSEL_IIII(1,6,32,32, (IData)(vlSymsp->TOP__testbench__TAGE.__PVT__o_harzard_bus), 2U)));
    VL_ASSIGNBIT_WI(1,0U, vlSymsp->TOP__testbench__TAGE.__PVT__i_branch_predict_bus, 
                    (1U & VL_BITSEL_IIII(1,6,32,32, (IData)(vlSymsp->TOP__testbench__TAGE.__PVT__o_harzard_bus), 1U)));
    vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__update_bbt_index 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__fetch_unit__update_bbt_index;
    vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__update_pht_index 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__fetch_unit__update_pht_index;
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__i_is_mispredict 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__ifid_pipe_unit__i_is_mispredict;
    vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_pc_en 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__fetch_unit__i_pc_en;
    vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_pc_sel 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__fetch_unit__i_pc_sel;
}

void Vtestbench_top_riscv::_settle__TOP__testbench__TAGE__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_top_riscv::_settle__TOP__testbench__TAGE__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE.__PVT__i_clk;
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE.__PVT__i_clk;
    vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE.__PVT__i_clk;
    vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE.__PVT__i_clk;
    vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE.__PVT__i_clk;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE.__PVT__i_clk;
    vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE.__PVT__i_clk;
    vlSymsp->TOP__testbench__TAGE.__PVT__o_IFID_predict_direct 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__o_IFID_predict_direct;
    vlSymsp->TOP__testbench__TAGE.__PVT__IFID_pc = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__o_IFID_pc;
    vlSymsp->TOP__testbench__TAGE.__PVT__IFID_instr 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__o_IFID_instr;
    vlSymsp->TOP__testbench__TAGE.__PVT__IFID_is_mispredict 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__o_IFID_is_mispredict;
    VL_ASSIGN_W(256,vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__PVT__o_EXMEM_bus);
    VL_ASSIGN_W(190,vlSymsp->TOP__testbench__TAGE.__PVT__o_IDEX_bus, vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__o_IDEX_bus);
    vlSymsp->TOP__testbench__TAGE.__PVT__MEMWB_lsu_data 
        = vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__o_MEMWB_lsu_data;
    VL_ASSIGN_W(256,vlSymsp->TOP__testbench__TAGE.__PVT__o_MEMWB_bus, vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__o_MEMWB_bus);
    vlSymsp->TOP__testbench__TAGE.__PVT__fetch_pc = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__o_pc;
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_IDEX_predict_direct 
        = vlSymsp->TOP__testbench__TAGE.__PVT__o_IFID_predict_direct;
    VL_ASSIGNSEL_WIII(32,0x7eU, vlSymsp->TOP__testbench__TAGE.__PVT__decode_stage_bus, vlSymsp->TOP__testbench__TAGE.__PVT__IFID_pc);
    VL_ASSIGNSEL_WIII(32,0x20U, vlSymsp->TOP__testbench__TAGE.__PVT__i_harzard_bus, vlSymsp->TOP__testbench__TAGE.__PVT__IFID_pc);
    vlSymsp->TOP__testbench__TAGE.__PVT__nop_instr_mux 
        = ((1U & (VL_BITSEL_IIII(1,6,32,32, (IData)(vlSymsp->TOP__testbench__TAGE.__PVT__o_harzard_bus), 5U) 
                  | (IData)(vlSymsp->TOP__testbench__TAGE.__PVT__IFID_is_mispredict)))
            ? 0x13U : vlSymsp->TOP__testbench__TAGE.__PVT__IFID_instr);
    VL_ASSIGN_W(256,vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__i_EXMEM_bus, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus);
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__lsu_unit__i_lsu_wren 
        = (1U & VL_BITSEL_IWII(1,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 6U));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__lsu_unit__i_bit_mask 
        = (3U & VL_SEL_IWII(2,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 4U, 2U));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__lsu_unit__i_st_data 
        = VL_SEL_IWII(32,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 0xc0U, 0x20U);
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__lsu_unit__i_lsu_addr 
        = VL_SEL_IWII(32,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 0xe0U, 0x20U);
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__forwarding_unit__EXMEM_rd_addr 
        = (0x1fU & VL_SEL_IWII(5,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 0x79U, 5U));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__forwarding_unit__EXMEM_rd_wren 
        = (1U & VL_BITSEL_IWII(1,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 0xeU));
    VL_ASSIGN_W(190,vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__PVT__i_IDEX_bus, vlSymsp->TOP__testbench__TAGE.__PVT__o_IDEX_bus);
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__fetch_unit__i_IDEX_pc 
        = VL_SEL_IWII(32,190,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_IDEX_bus, 0x7eU, 0x20U);
    VL_ASSIGNBIT_WI(1,0x80U, vlSymsp->TOP__testbench__TAGE.__PVT__i_harzard_bus, 
                    (1U & VL_BITSEL_IWII(1,190,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_IDEX_bus, 0U)));
    VL_ASSIGNSEL_WIII(32,0x60U, vlSymsp->TOP__testbench__TAGE.__PVT__i_harzard_bus, 
                      VL_SEL_IWII(32,190,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_IDEX_bus, 0x9eU, 0x20U));
    VL_ASSIGNSEL_WIII(32,0x23U, vlSymsp->TOP__testbench__TAGE.__PVT__i_branch_predict_bus, 
                      VL_SEL_IWII(32,190,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_IDEX_bus, 0x7eU, 0x20U));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__execute_unit__i_alu_op 
        = (0xfU & VL_SEL_IWII(4,190,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_IDEX_bus, 7U, 4U));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__execute_unit__i_instr 
        = VL_SEL_IWII(32,190,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_IDEX_bus, 0x9eU, 0x20U);
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__execute_unit__i_pc 
        = VL_SEL_IWII(32,190,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_IDEX_bus, 0x7eU, 0x20U);
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__execute_unit__i_opa_sel 
        = (1U & VL_BITSEL_IWII(1,190,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_IDEX_bus, 0xcU));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__execute_unit__i_imme_data 
        = VL_SEL_IWII(32,190,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_IDEX_bus, 0x19U, 0x20U);
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__execute_unit__i_opb_sel 
        = (1U & VL_BITSEL_IWII(1,190,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_IDEX_bus, 0xbU));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__forwarding_unit__IDEX_rs2_addr 
        = (0x1fU & VL_SEL_IWII(5,190,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_IDEX_bus, 0xfU, 5U));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__forwarding_unit__IDEX_rs1_addr 
        = (0x1fU & VL_SEL_IWII(5,190,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_IDEX_bus, 0x14U, 5U));
    vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__i_lsu_data 
        = vlSymsp->TOP__testbench__TAGE.__PVT__MEMWB_lsu_data;
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__decode_unit__i_rd_wren 
        = (1U & VL_BITSEL_IWII(1,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_MEMWB_bus, 0xeU));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__decode_unit__i_rd_addr 
        = (0x1fU & VL_SEL_IWII(5,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_MEMWB_bus, 0x79U, 5U));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__writeback_unit__i_alu_data 
        = VL_SEL_IWII(32,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_MEMWB_bus, 0xe0U, 0x20U);
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__writeback_unit__i_wb_sel 
        = (3U & VL_SEL_IWII(2,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_MEMWB_bus, 2U, 2U));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__forwarding_unit__MEMWB_rd_addr 
        = (0x1fU & VL_SEL_IWII(5,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_MEMWB_bus, 0x79U, 5U));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__forwarding_unit__MEMWB_rd_wren 
        = (1U & VL_BITSEL_IWII(1,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_MEMWB_bus, 0xeU));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__writeback_unit__i_signed_op 
        = (1U & VL_BITSEL_IWII(1,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_MEMWB_bus, 1U));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__writeback_unit__i_bit_mask 
        = (3U & VL_SEL_IWII(2,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_MEMWB_bus, 4U, 2U));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__writeback_unit__i_pc 
        = VL_SEL_IWII(32,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_MEMWB_bus, 0x7eU, 0x20U);
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__i_pc 
        = vlSymsp->TOP__testbench__TAGE.__PVT__fetch_pc;
    VL_ASSIGNSEL_WIII(32,0x9eU, vlSymsp->TOP__testbench__TAGE.__PVT__decode_stage_bus, vlSymsp->TOP__testbench__TAGE.__PVT__nop_instr_mux);
    VL_ASSIGNSEL_WIII(32,0x40U, vlSymsp->TOP__testbench__TAGE.__PVT__i_harzard_bus, vlSymsp->TOP__testbench__TAGE.__PVT__nop_instr_mux);
    vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__i_instr 
        = vlSymsp->TOP__testbench__TAGE.__PVT__nop_instr_mux;
    vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_lsu_wren 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__lsu_unit__i_lsu_wren;
    vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_bit_mask 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__lsu_unit__i_bit_mask;
    vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_st_data 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__lsu_unit__i_st_data;
    vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_lsu_addr 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__lsu_unit__i_lsu_addr;
    vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__EXMEM_rd_addr 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__forwarding_unit__EXMEM_rd_addr;
    vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__EXMEM_rd_wren 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__forwarding_unit__EXMEM_rd_wren;
    vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_IDEX_pc 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__fetch_unit__i_IDEX_pc;
    vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_alu_op 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__execute_unit__i_alu_op;
    vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_instr 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__execute_unit__i_instr;
    vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_pc 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__execute_unit__i_pc;
    vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_opa_sel 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__execute_unit__i_opa_sel;
    vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_imme_data 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__execute_unit__i_imme_data;
    vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_opb_sel 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__execute_unit__i_opb_sel;
    vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__IDEX_rs2_addr 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__forwarding_unit__IDEX_rs2_addr;
    vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__IDEX_rs1_addr 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__forwarding_unit__IDEX_rs1_addr;
    vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__i_rd_wren 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__decode_unit__i_rd_wren;
    vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__i_rd_addr 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__decode_unit__i_rd_addr;
    vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__i_alu_data 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__writeback_unit__i_alu_data;
    vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__i_wb_sel 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__writeback_unit__i_wb_sel;
    vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__MEMWB_rd_addr 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__forwarding_unit__MEMWB_rd_addr;
    vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__MEMWB_rd_wren 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__forwarding_unit__MEMWB_rd_wren;
    vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__i_signed_op 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__writeback_unit__i_signed_op;
    vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__i_bit_mask 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__writeback_unit__i_bit_mask;
    vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__i_pc 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__writeback_unit__i_pc;
}

void Vtestbench_top_riscv::_settle__TOP__testbench__TAGE__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_top_riscv::_settle__TOP__testbench__TAGE__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__i_io_sw 
        = vlSymsp->TOP__testbench__TAGE.__PVT__i_io_sw;
    vlSymsp->TOP__testbench__TAGE.__PVT__o_io_ledr 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__o_io_ledr;
    vlSymsp->TOP__testbench__TAGE.__PVT__o_fwa = vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__o_fwa;
    vlSymsp->TOP__testbench__TAGE.__PVT__o_fwb = vlSymsp->TOP__testbench__TAGE__forwarding_unit.__PVT__o_fwb;
}

void Vtestbench_top_riscv::_settle__TOP__testbench__TAGE__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_top_riscv::_settle__TOP__testbench__TAGE__4\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE.__PVT__ctrl_bus = vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__o_ctrl_bus;
    VL_ASSIGN_W(111,vlSymsp->TOP__testbench__TAGE.__PVT__decode_bus, vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__o_decode_bus);
    vlSymsp->TOP__testbench__TAGE.__Vcellout__fetch_unit__o_bbt_index 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__o_bbt_index;
    vlSymsp->TOP__testbench__TAGE.__Vcellout__fetch_unit__o_pht_index 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__o_pht_index;
    vlSymsp->TOP__testbench__TAGE.__PVT__WB_rd_data 
        = vlSymsp->TOP__testbench__TAGE__writeback_unit.__PVT__o_wb_data;
    VL_ASSIGNSEL_WIII(14,1U, vlSymsp->TOP__testbench__TAGE.__PVT__decode_stage_bus, vlSymsp->TOP__testbench__TAGE.__PVT__ctrl_bus);
    VL_ASSIGNSEL_WIIW(111,0xfU, vlSymsp->TOP__testbench__TAGE.__PVT__decode_stage_bus, vlSymsp->TOP__testbench__TAGE.__PVT__decode_bus);
    vlSymsp->TOP__testbench__TAGE.__PVT__o_bbt_index 
        = VL_EXTEND_II(10,8, (IData)(vlSymsp->TOP__testbench__TAGE.__Vcellout__fetch_unit__o_bbt_index));
    vlSymsp->TOP__testbench__TAGE.__PVT__o_pht_index 
        = VL_EXTEND_II(10,7, (IData)(vlSymsp->TOP__testbench__TAGE.__Vcellout__fetch_unit__o_pht_index));
    vlSymsp->TOP__testbench__TAGE__decode_unit.__PVT__i_rd_data 
        = vlSymsp->TOP__testbench__TAGE.__PVT__WB_rd_data;
    vlSymsp->TOP__testbench__TAGE.__PVT__fw_data_a 
        = ((2U == (IData)(vlSymsp->TOP__testbench__TAGE.__PVT__o_fwa))
            ? VL_SEL_IWII(32,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 0xe0U, 0x20U)
            : ((3U == (IData)(vlSymsp->TOP__testbench__TAGE.__PVT__o_fwa))
                ? vlSymsp->TOP__testbench__TAGE.__PVT__WB_rd_data
                : VL_SEL_IWII(32,190,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_IDEX_bus, 0x59U, 0x20U)));
    vlSymsp->TOP__testbench__TAGE.__PVT__fw_data_b 
        = ((2U == (IData)(vlSymsp->TOP__testbench__TAGE.__PVT__o_fwb))
            ? VL_SEL_IWII(32,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 0xe0U, 0x20U)
            : ((3U == (IData)(vlSymsp->TOP__testbench__TAGE.__PVT__o_fwb))
                ? vlSymsp->TOP__testbench__TAGE.__PVT__WB_rd_data
                : VL_SEL_IWII(32,190,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_IDEX_bus, 0x39U, 0x20U)));
    VL_ASSIGN_W(190,vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_decode_stage_bus, vlSymsp->TOP__testbench__TAGE.__PVT__decode_stage_bus);
    vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_rs1_data 
        = vlSymsp->TOP__testbench__TAGE.__PVT__fw_data_a;
    vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__i_rs2_data 
        = vlSymsp->TOP__testbench__TAGE.__PVT__fw_data_b;
}

void Vtestbench_top_riscv::_settle__TOP__testbench__TAGE__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_top_riscv::_settle__TOP__testbench__TAGE__5\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE.__PVT__lsu_data = vlSymsp->TOP__testbench__TAGE__lsu_unit.__PVT__o_lsu_data;
    vlSymsp->TOP__testbench__TAGE.__PVT__predict_direct 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__o_predict_direct;
    vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__i_lsu_data 
        = vlSymsp->TOP__testbench__TAGE.__PVT__lsu_data;
    vlSymsp->TOP__testbench__TAGE.__PVT__check_imme 
        = VL_SEL_IWII(32,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 0x19U, 0x20U);
    vlSymsp->TOP__testbench__TAGE.__PVT__check_rd_data 
        = ((0U == (3U & VL_SEL_IWII(2,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 2U, 2U)))
            ? VL_SEL_IWII(32,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 0x7eU, 0x20U)
            : ((1U == (3U & VL_SEL_IWII(2,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 2U, 2U)))
                ? VL_SEL_IWII(32,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 0xe0U, 0x20U)
                : ((2U == (3U & VL_SEL_IWII(2,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 2U, 2U)))
                    ? vlSymsp->TOP__testbench__TAGE.__PVT__lsu_data
                    : 0U)));
    vlSymsp->TOP__testbench__TAGE.__PVT__check_rs1_addr 
        = (0x1fU & VL_SEL_IWII(5,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 0x14U, 5U));
    vlSymsp->TOP__testbench__TAGE.__PVT__check_rs2_addr 
        = (0x1fU & VL_SEL_IWII(5,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 0xfU, 5U));
    vlSymsp->TOP__testbench__TAGE.__PVT__check_rd_addr 
        = (0x1fU & VL_SEL_IWII(5,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 0x79U, 5U));
    vlSymsp->TOP__testbench__TAGE.__PVT__check_rd_wren 
        = (1U & VL_BITSEL_IWII(1,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 0xeU));
    vlSymsp->TOP__testbench__TAGE.__PVT__check_alu_data 
        = VL_SEL_IWII(32,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 0xe0U, 0x20U);
    vlSymsp->TOP__testbench__TAGE.__PVT__check_sign_bit 
        = (1U & VL_BITSEL_IWII(1,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 1U));
    vlSymsp->TOP__testbench__TAGE.__PVT__check_wb_sel 
        = (3U & VL_SEL_IWII(2,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 2U, 2U));
    vlSymsp->TOP__testbench__TAGE.__PVT__check_bit_mask 
        = (3U & VL_SEL_IWII(2,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 4U, 2U));
    vlSymsp->TOP__testbench__TAGE.__PVT__o_pc_debug 
        = VL_SEL_IWII(32,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 0x7eU, 0x20U);
    vlSymsp->TOP__testbench__TAGE.__PVT__o_instr_vld 
        = (1U & VL_BITSEL_IWII(1,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 0xdU));
    vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_instruction 
        = VL_SEL_IWII(32,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 0x9eU, 0x20U);
    vlSymsp->TOP__testbench__TAGE.__PVT__o_lsu_addr 
        = VL_SEL_IWII(32,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 0xe0U, 0x20U);
    vlSymsp->TOP__testbench__TAGE.__PVT__o_lsu_data 
        = vlSymsp->TOP__testbench__TAGE.__PVT__lsu_data;
    vlSymsp->TOP__testbench__TAGE.__PVT__o_lsu_wren 
        = (1U & VL_BITSEL_IWII(1,256,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_EXMEM_bus, 6U));
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__i_predict_direct 
        = vlSymsp->TOP__testbench__TAGE.__PVT__predict_direct;
}

void Vtestbench_top_riscv::_settle__TOP__testbench__TAGE__6(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_top_riscv::_settle__TOP__testbench__TAGE__6\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGN_W(66,vlSymsp->TOP__testbench__TAGE.__PVT__o_execute_bus, vlSymsp->TOP__testbench__TAGE__execute_unit.__PVT__o_execute_bus);
    vlSymsp->TOP__testbench__TAGE.__PVT__actual_target_1 
        = VL_SEL_IWII(32,66,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_execute_bus, 0x22U, 0x20U);
    VL_ASSIGN_W(66,vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__PVT__i_execute_bus, vlSymsp->TOP__testbench__TAGE.__PVT__o_execute_bus);
    VL_ASSIGNBIT_WI(1,0x82U, vlSymsp->TOP__testbench__TAGE.__PVT__i_harzard_bus, 
                    (1U & VL_BITSEL_IWII(1,66,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_execute_bus, 1U)));
    VL_ASSIGNBIT_WI(1,0x81U, vlSymsp->TOP__testbench__TAGE.__PVT__i_harzard_bus, 
                    (1U & VL_BITSEL_IWII(1,66,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_execute_bus, 0U)));
    VL_ASSIGNSEL_WIII(32,0U, vlSymsp->TOP__testbench__TAGE.__PVT__i_harzard_bus, 
                      VL_SEL_IWII(32,66,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_execute_bus, 0x22U, 0x20U));
    vlSymsp->TOP__testbench__TAGE.__Vcellinp__fetch_unit__i_alu_data 
        = VL_SEL_IWII(32,66,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_execute_bus, 0x22U, 0x20U);
    VL_ASSIGNBIT_WI(1,0x43U, vlSymsp->TOP__testbench__TAGE.__PVT__i_branch_predict_bus, 
                    (1U & VL_BITSEL_IWII(1,66,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_execute_bus, 0U)));
    VL_ASSIGNBIT_WI(1,0x22U, vlSymsp->TOP__testbench__TAGE.__PVT__i_branch_predict_bus, 
                    (1U & VL_BITSEL_IWII(1,66,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_execute_bus, 1U)));
    VL_ASSIGNSEL_WIII(32,2U, vlSymsp->TOP__testbench__TAGE.__PVT__i_branch_predict_bus, 
                      VL_SEL_IWII(32,66,32,32, vlSymsp->TOP__testbench__TAGE.__PVT__o_execute_bus, 0x22U, 0x20U));
    VL_ASSIGN_W(131,vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__i_harzard_bus, vlSymsp->TOP__testbench__TAGE.__PVT__i_harzard_bus);
    vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_alu_data 
        = vlSymsp->TOP__testbench__TAGE.__Vcellinp__fetch_unit__i_alu_data;
    VL_ASSIGN_W(68,vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_branch_predict_bus, vlSymsp->TOP__testbench__TAGE.__PVT__i_branch_predict_bus);
}

void Vtestbench_top_riscv::_settle__TOP__testbench__TAGE__8(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_top_riscv::_settle__TOP__testbench__TAGE__8\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE.__PVT__fetch_instr 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__o_instr;
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__i_instr 
        = vlSymsp->TOP__testbench__TAGE.__PVT__fetch_instr;
}

void Vtestbench_top_riscv::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_top_riscv::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__i_io_sw = VL_RAND_RESET_I(32);
    __PVT__o_io_ledr = VL_RAND_RESET_I(32);
    __PVT__o_instr_vld = VL_RAND_RESET_I(1);
    __PVT__o_misprediction = VL_RAND_RESET_I(1);
    __PVT__o_lsu_addr = VL_RAND_RESET_I(32);
    __PVT__o_lsu_data = VL_RAND_RESET_I(32);
    __PVT__o_lsu_wren = VL_RAND_RESET_I(1);
    __PVT__o_pc_debug = VL_RAND_RESET_I(32);
    __PVT__o_EXMEM_instruction = VL_RAND_RESET_I(32);
    __PVT__fetch_pc = VL_RAND_RESET_I(32);
    __PVT__fetch_instr = VL_RAND_RESET_I(32);
    __PVT__IFID_pc = VL_RAND_RESET_I(32);
    __PVT__IFID_instr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(190, __PVT__o_IDEX_bus);
    VL_RAND_RESET_W(111, __PVT__decode_bus);
    __PVT__nop_instr_mux = VL_RAND_RESET_I(32);
    __PVT__ctrl_bus = VL_RAND_RESET_I(14);
    VL_RAND_RESET_W(190, __PVT__decode_stage_bus);
    __PVT__o_fwa = VL_RAND_RESET_I(2);
    __PVT__o_fwb = VL_RAND_RESET_I(2);
    __PVT__fw_data_a = VL_RAND_RESET_I(32);
    __PVT__fw_data_b = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(66, __PVT__o_execute_bus);
    VL_RAND_RESET_W(256, __PVT__o_EXMEM_bus);
    __PVT__lsu_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, __PVT__o_MEMWB_bus);
    __PVT__MEMWB_lsu_data = VL_RAND_RESET_I(32);
    __PVT__WB_rd_data = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(68, __PVT__i_branch_predict_bus);
    VL_RAND_RESET_W(131, __PVT__i_harzard_bus);
    __PVT__o_harzard_bus = VL_RAND_RESET_I(6);
    __PVT__predict_direct = VL_RAND_RESET_I(1);
    __PVT__o_IFID_predict_direct = VL_RAND_RESET_I(1);
    __PVT__IFID_is_mispredict = VL_RAND_RESET_I(1);
    __PVT__check_predict_direct = VL_RAND_RESET_I(1);
    __PVT__bbt_index_FD = VL_RAND_RESET_I(10);
    __PVT__bbt_index_DE = VL_RAND_RESET_I(10);
    __PVT__o_bbt_index = VL_RAND_RESET_I(10);
    __PVT__pht_index_FD = VL_RAND_RESET_I(10);
    __PVT__pht_index_DE = VL_RAND_RESET_I(10);
    __PVT__o_pht_index = VL_RAND_RESET_I(10);
    __Vcellinp__fetch_unit__update_bbt_index = VL_RAND_RESET_I(7);
    __Vcellinp__fetch_unit__update_pht_index = VL_RAND_RESET_I(8);
    __Vcellout__fetch_unit__o_bbt_index = VL_RAND_RESET_I(8);
    __Vcellout__fetch_unit__o_pht_index = VL_RAND_RESET_I(7);
    __Vcellinp__fetch_unit__i_IDEX_pc = VL_RAND_RESET_I(32);
    __Vcellinp__fetch_unit__i_alu_data = VL_RAND_RESET_I(32);
    __Vcellinp__fetch_unit__i_pc_en = VL_RAND_RESET_I(1);
    __Vcellinp__fetch_unit__i_pc_sel = VL_RAND_RESET_I(1);
    __Vcellinp__ifid_pipe_unit__i_is_mispredict = VL_RAND_RESET_I(1);
    __PVT__actual_target_1 = VL_RAND_RESET_I(32);
    __Vcellinp__decode_unit__i_rd_addr = VL_RAND_RESET_I(5);
    __Vcellinp__decode_unit__i_rd_wren = VL_RAND_RESET_I(1);
    __Vcellinp__forwarding_unit__IDEX_rs2_addr = VL_RAND_RESET_I(5);
    __Vcellinp__forwarding_unit__IDEX_rs1_addr = VL_RAND_RESET_I(5);
    __Vcellinp__forwarding_unit__MEMWB_rd_addr = VL_RAND_RESET_I(5);
    __Vcellinp__forwarding_unit__MEMWB_rd_wren = VL_RAND_RESET_I(1);
    __Vcellinp__forwarding_unit__EXMEM_rd_addr = VL_RAND_RESET_I(5);
    __Vcellinp__forwarding_unit__EXMEM_rd_wren = VL_RAND_RESET_I(1);
    __Vcellinp__execute_unit__i_alu_op = VL_RAND_RESET_I(4);
    __Vcellinp__execute_unit__i_imme_data = VL_RAND_RESET_I(32);
    __Vcellinp__execute_unit__i_pc = VL_RAND_RESET_I(32);
    __Vcellinp__execute_unit__i_instr = VL_RAND_RESET_I(32);
    __Vcellinp__execute_unit__i_opb_sel = VL_RAND_RESET_I(1);
    __Vcellinp__execute_unit__i_opa_sel = VL_RAND_RESET_I(1);
    __Vcellinp__lsu_unit__i_bit_mask = VL_RAND_RESET_I(2);
    __Vcellinp__lsu_unit__i_lsu_wren = VL_RAND_RESET_I(1);
    __Vcellinp__lsu_unit__i_st_data = VL_RAND_RESET_I(32);
    __Vcellinp__lsu_unit__i_lsu_addr = VL_RAND_RESET_I(32);
    __Vcellinp__writeback_unit__i_pc = VL_RAND_RESET_I(32);
    __Vcellinp__writeback_unit__i_alu_data = VL_RAND_RESET_I(32);
    __Vcellinp__writeback_unit__i_wb_sel = VL_RAND_RESET_I(2);
    __Vcellinp__writeback_unit__i_signed_op = VL_RAND_RESET_I(1);
    __Vcellinp__writeback_unit__i_bit_mask = VL_RAND_RESET_I(2);
    __PVT__check_rs1_data = VL_RAND_RESET_I(32);
    __PVT__check_rs2_data = VL_RAND_RESET_I(32);
    __PVT__check_rd_data = VL_RAND_RESET_I(32);
    __PVT__check_imme = VL_RAND_RESET_I(32);
    __PVT__check_rs1_addr = VL_RAND_RESET_I(5);
    __PVT__check_rs2_addr = VL_RAND_RESET_I(5);
    __PVT__check_rd_addr = VL_RAND_RESET_I(5);
    __PVT__check_rd_wren = VL_RAND_RESET_I(1);
    __PVT__check_is_branch_taken = VL_RAND_RESET_I(1);
    __PVT__check_alu_data = VL_RAND_RESET_I(32);
    __PVT__check_sign_bit = VL_RAND_RESET_I(1);
    __PVT__check_wb_sel = VL_RAND_RESET_I(2);
    __PVT__check_bit_mask = VL_RAND_RESET_I(2);
    __Vdly__pht_index_FD = VL_RAND_RESET_I(10);
    __Vdly__bbt_index_FD = VL_RAND_RESET_I(10);
    __Vdly__pht_index_DE = VL_RAND_RESET_I(10);
    __Vdly__bbt_index_DE = VL_RAND_RESET_I(10);
    __Vdly__check_is_branch_taken = VL_RAND_RESET_I(1);
    __Vdly__o_misprediction = VL_RAND_RESET_I(1);
    __Vdly__check_rs1_data = VL_RAND_RESET_I(32);
    __Vdly__check_rs2_data = VL_RAND_RESET_I(32);
    __Vdly__check_predict_direct = VL_RAND_RESET_I(1);
}
