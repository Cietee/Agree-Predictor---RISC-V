// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_block_FETCH.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench_block_FETCH) {
    VL_CELL(__PVT__pc_generator, Vtestbench_pc_gen);
    VL_CELL(__PVT__instruction_memory, Vtestbench_instruction_mem);
    VL_CELL(__PVT__branch_predictor, Vtestbench_branch_prediction_top);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench_block_FETCH::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestbench_block_FETCH::~Vtestbench_block_FETCH() {
}

void Vtestbench_block_FETCH::_settle__TOP__testbench__TAGE__fetch_unit__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_FETCH::_settle__TOP__testbench__TAGE__fetch_unit__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__update_bbt_index 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__update_bbt_index;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__update_pht_index 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__update_pht_index;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__i_pc_en 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_pc_en;
    vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__pc 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__o_pc;
    vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__o_pc 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__pc;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__instruction_memory.__PVT__i_raddr 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__pc;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__i_pc 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__pc;
}

void Vtestbench_block_FETCH::_settle__TOP__testbench__TAGE__fetch_unit__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_FETCH::_settle__TOP__testbench__TAGE__fetch_unit__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_rst_n;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_clk;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_clk;
}

void Vtestbench_block_FETCH::_settle__TOP__testbench__TAGE__fetch_unit__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_FETCH::_settle__TOP__testbench__TAGE__fetch_unit__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__o_bbt_index 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__o_bbt_index;
    vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__o_pht_index 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__o_pht_index;
}

void Vtestbench_block_FETCH::_settle__TOP__testbench__TAGE__fetch_unit__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_FETCH::_settle__TOP__testbench__TAGE__fetch_unit__4\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__o_branch_predict_bus 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__o_branch_predict_bus;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__o_branch_predict_bus 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__o_branch_predict_bus;
    vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__o_predict_direct 
        = (1U & VL_BITSEL_IQII(1,34,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__o_branch_predict_bus, 0x21U));
}

void Vtestbench_block_FETCH::_settle__TOP__testbench__TAGE__fetch_unit__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_FETCH::_settle__TOP__testbench__TAGE__fetch_unit__5\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    VL_ASSIGNSEL_WIII(32,2U, vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__branch_predict_bus, vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_alu_data);
    if ((1U & VL_BITSEL_IWII(1,68,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_branch_predict_bus, 1U))) {
        vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__fixed_pc 
            = ((1U & VL_BITSEL_IWII(1,68,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_branch_predict_bus, 0x22U))
                ? vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_alu_data
                : ((IData)(4U) + vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_IDEX_pc));
        vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__pc_sel = 1U;
    } else {
        vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__fixed_pc 
            = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_alu_data;
        vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__pc_sel 
            = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_pc_sel;
    }
    VL_ASSIGNBIT_WI(1,0x43U, vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__branch_predict_bus, 
                    (1U & VL_BITSEL_IWII(1,68,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_branch_predict_bus, 0x43U)));
    VL_ASSIGNSEL_WIII(32,0x23U, vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__branch_predict_bus, 
                      VL_SEL_IWII(32,68,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_branch_predict_bus, 0x23U, 0x20U));
    VL_ASSIGNBIT_WI(1,0x22U, vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__branch_predict_bus, 
                    (1U & VL_BITSEL_IWII(1,68,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_branch_predict_bus, 0x22U)));
    VL_ASSIGNBIT_WI(1,1U, vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__branch_predict_bus, 
                    (1U & VL_BITSEL_IWII(1,68,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_branch_predict_bus, 1U)));
    VL_ASSIGNBIT_WI(1,0U, vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__branch_predict_bus, 
                    (1U & VL_BITSEL_IWII(1,68,32,32, vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__i_branch_predict_bus, 0U)));
    vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__i_fixed_pc 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__fixed_pc;
    vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__i_pc_sel 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__pc_sel;
    VL_ASSIGN_W(68,vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor.__PVT__i_branch_predict_bus, vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__branch_predict_bus);
}

void Vtestbench_block_FETCH::_settle__TOP__testbench__TAGE__fetch_unit__7(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_FETCH::_settle__TOP__testbench__TAGE__fetch_unit__7\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit.__PVT__o_instr 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__instruction_memory.__PVT__o_rdata;
}

void Vtestbench_block_FETCH::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtestbench_block_FETCH::_ctor_var_reset\n"); );
    // Body
    __PVT__i_clk = VL_RAND_RESET_I(1);
    __PVT__i_rst_n = VL_RAND_RESET_I(1);
    __PVT__i_pc_sel = VL_RAND_RESET_I(1);
    __PVT__i_pc_en = VL_RAND_RESET_I(1);
    __PVT__i_alu_data = VL_RAND_RESET_I(32);
    __PVT__i_IDEX_pc = VL_RAND_RESET_I(32);
    __PVT__o_pc = VL_RAND_RESET_I(32);
    __PVT__o_instr = VL_RAND_RESET_I(32);
    __PVT__o_predict_direct = VL_RAND_RESET_I(1);
    __PVT__update_bbt_index = VL_RAND_RESET_I(7);
    __PVT__update_pht_index = VL_RAND_RESET_I(8);
    __PVT__o_pht_index = VL_RAND_RESET_I(7);
    __PVT__o_bbt_index = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(68, __PVT__i_branch_predict_bus);
    VL_RAND_RESET_W(68, __PVT__branch_predict_bus);
    __PVT__pc = VL_RAND_RESET_I(32);
    __PVT__fixed_pc = VL_RAND_RESET_I(32);
    __PVT__pc_sel = VL_RAND_RESET_I(1);
    __PVT__o_branch_predict_bus = VL_RAND_RESET_Q(34);
}
