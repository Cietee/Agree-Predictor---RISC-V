// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench.h"
#include "Vtestbench__Syms.h"

//==========

VL_CTOR_IMP(Vtestbench) {
    Vtestbench__Syms* __restrict vlSymsp = __VlSymsp = new Vtestbench__Syms(this, name());
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(__PVT__testbench, Vtestbench_testbench);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtestbench::__Vconfigure(Vtestbench__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vtestbench::~Vtestbench() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtestbench::_settle__TOP__1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_settle__TOP__1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench.i_rst_n = vlTOPp->i_rst_n;
    vlSymsp->TOP__testbench.i_clk = vlTOPp->i_clk;
}

void Vtestbench::_settle__TOP__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_settle__TOP__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->o_misprediction_cnt = vlSymsp->TOP__testbench.o_misprediction_cnt;
    vlTOPp->o_branch_count = vlSymsp->TOP__testbench.o_branch_count;
    vlTOPp->o_counter = vlSymsp->TOP__testbench.o_counter;
    vlTOPp->o_instr_cnt = vlSymsp->TOP__testbench.o_instr_cnt;
}

void Vtestbench::_settle__TOP__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_settle__TOP__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->o_EXMEM_instruction = vlSymsp->TOP__testbench.o_EXMEM_instruction;
    vlTOPp->o_lsu_addr = vlSymsp->TOP__testbench.o_lsu_addr;
    vlTOPp->o_lsu_data = vlSymsp->TOP__testbench.o_lsu_data;
    vlTOPp->o_lsu_wren = vlSymsp->TOP__testbench.o_lsu_wren;
    vlTOPp->o_instr_vld = vlSymsp->TOP__testbench.o_instr_vld;
}

void Vtestbench::_settle__TOP__5(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_settle__TOP__5\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->o_print_signal = vlSymsp->TOP__testbench.o_print_signal;
}

void Vtestbench::_eval_initial(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_eval_initial\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__fetch_unit__instruction_memory._initial__TOP__testbench__TAGE__fetch_unit__instruction_memory__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[0xeU] = 1U;
    vlTOPp->__Vm_traceActivity[0xdU] = 1U;
    vlTOPp->__Vm_traceActivity[0xcU] = 1U;
    vlTOPp->__Vm_traceActivity[0xbU] = 1U;
    vlTOPp->__Vm_traceActivity[0xaU] = 1U;
    vlTOPp->__Vm_traceActivity[9U] = 1U;
    vlTOPp->__Vm_traceActivity[8U] = 1U;
    vlTOPp->__Vm_traceActivity[7U] = 1U;
    vlTOPp->__Vm_traceActivity[6U] = 1U;
    vlTOPp->__Vm_traceActivity[5U] = 1U;
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlSymsp->TOP__testbench__readResultUnit._initial__TOP__testbench__readResultUnit__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__testbench__scoreboard____PVT__i_clk 
        = vlSymsp->TOP__testbench__scoreboard.__PVT__i_clk;
    vlTOPp->__Vclklast__TOP__testbench__readResultUnit____PVT__i_clk 
        = vlSymsp->TOP__testbench__readResultUnit.__PVT__i_clk;
    vlTOPp->__Vclklast__TOP__testbench__driverUnit____PVT__i_clk 
        = vlSymsp->TOP__testbench__driverUnit.__PVT__i_clk;
    vlTOPp->__Vclklast__TOP__testbench__cycleCountUnit____PVT__i_clk 
        = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__i_clk;
    vlTOPp->__Vclklast__TOP__testbench__TAGE____PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE.__PVT__i_clk;
    vlTOPp->__Vclklast__TOP__testbench__TAGE__ifid_pipe_unit____PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__i_clk;
    vlTOPp->__Vclklast__TOP__testbench__TAGE__exmem_pipe_unit____PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__PVT__i_clk;
    vlTOPp->__Vclklast__TOP__testbench__TAGE__idex_pipe_unit____PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_clk;
    vlTOPp->__Vclklast__TOP__testbench__TAGE__memwb_pipe_unit____PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__i_clk;
    vlTOPp->__Vclklast__TOP__testbench__TAGE__lsu_unit__input_buffer_module____PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__i_clk;
    vlTOPp->__Vclklast__TOP__testbench__TAGE__lsu_unit__output_buffer_module____PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_clk;
    vlTOPp->__Vclklast__TOP__testbench__TAGE__lsu_unit__memory_block____PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_clk;
    vlTOPp->__Vclklast__TOP__testbench__TAGE__fetch_unit__pc_generator____PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__i_clk;
    vlTOPp->__Vclklast__TOP__testbench__TAGE__decode_unit__instr_decode0____PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__testbench__TAGE__decode_unit__instr_decode0____PVT__i_rst_n 
        = vlTOPp->__VinpClk__TOP__testbench__TAGE__decode_unit__instr_decode0____PVT__i_rst_n;
    vlTOPp->__Vclklast__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit____PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__i_clk;
    vlTOPp->__Vclklast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit____PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_clk;
    vlTOPp->__Vclklast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table____PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__i_clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table____PVT__i_rst_n 
        = vlTOPp->__VinpClk__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table____PVT__i_rst_n;
    vlTOPp->__Vclklast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table____PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__i_clk;
    vlTOPp->__Vclklast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg____PVT__i_clk 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__i_clk;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg____PVT__i_rst_n 
        = vlTOPp->__VinpClk__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg____PVT__i_rst_n;
}

void Vtestbench::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::final\n"); );
    // Variables
    Vtestbench__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtestbench::_eval_settle(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_eval_settle\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module._settle__TOP__testbench__TAGE__lsu_unit__input_buffer_module__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[0xeU] = 1U;
    vlTOPp->__Vm_traceActivity[0xdU] = 1U;
    vlTOPp->__Vm_traceActivity[0xcU] = 1U;
    vlTOPp->__Vm_traceActivity[0xbU] = 1U;
    vlTOPp->__Vm_traceActivity[0xaU] = 1U;
    vlTOPp->__Vm_traceActivity[9U] = 1U;
    vlTOPp->__Vm_traceActivity[8U] = 1U;
    vlTOPp->__Vm_traceActivity[7U] = 1U;
    vlTOPp->__Vm_traceActivity[6U] = 1U;
    vlTOPp->__Vm_traceActivity[5U] = 1U;
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module._settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp._settle__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp._settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare._settle__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__signed_compare._settle__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block._settle__TOP__testbench__TAGE__lsu_unit__memory_block__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp._settle__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__5(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp._settle__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__6(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1._settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2._settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3._settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module._settle__TOP__testbench__TAGE__execute_unit__alu_module__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare._settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__7(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder._settle__TOP__testbench__TAGE__execute_unit__alu_module__full_adder__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor._settle__TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__writeback_unit._settle__TOP__testbench__TAGE__writeback_unit__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__writeback_unit__PCplus4._settle__TOP__testbench__TAGE__writeback_unit__PCplus4__4(vlSymsp);
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE._settle__TOP__testbench__TAGE__1(vlSymsp);
    vlSymsp->TOP__testbench._settle__TOP__testbench__1(vlSymsp);
    vlSymsp->TOP__testbench__driverUnit._settle__TOP__testbench__driverUnit__1(vlSymsp);
    vlSymsp->TOP__testbench__cycleCountUnit._settle__TOP__testbench__cycleCountUnit__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit._settle__TOP__testbench__TAGE__ifid_pipe_unit__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit._settle__TOP__testbench__TAGE__exmem_pipe_unit__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__idex_pipe_unit._settle__TOP__testbench__TAGE__idex_pipe_unit__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit._settle__TOP__testbench__TAGE__memwb_pipe_unit__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator._settle__TOP__testbench__TAGE__fetch_unit__pc_generator__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit._settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg._settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit._settle__TOP__testbench__TAGE__lsu_unit__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module._settle__TOP__testbench__TAGE__lsu_unit__input_buffer_module__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module._settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block._settle__TOP__testbench__TAGE__lsu_unit__memory_block__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit._settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit._settle__TOP__testbench__TAGE__fetch_unit__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE._settle__TOP__testbench__TAGE__2(vlSymsp);
    vlSymsp->TOP__testbench._settle__TOP__testbench__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit._settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit._settle__TOP__testbench__TAGE__lsu_unit__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor._settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__decode_unit._settle__TOP__testbench__TAGE__decode_unit__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit._settle__TOP__testbench__TAGE__fetch_unit__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__writeback_unit._settle__TOP__testbench__TAGE__writeback_unit__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit._settle__TOP__testbench__TAGE__execute_unit__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__forwarding_unit._settle__TOP__testbench__TAGE__forwarding_unit__1(vlSymsp);
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE._settle__TOP__testbench__TAGE__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module._settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module._settle__TOP__testbench__TAGE__lsu_unit__input_buffer_module__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block._settle__TOP__testbench__TAGE__lsu_unit__memory_block__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit._settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit._settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1._settle__TOP__testbench__TAGE__decode_unit__instr_decode1__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2._settle__TOP__testbench__TAGE__decode_unit__instr_decode2__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0._settle__TOP__testbench__TAGE__decode_unit__instr_decode0__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor._settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__writeback_unit__mask_module._settle__TOP__testbench__TAGE__writeback_unit__mask_module__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__writeback_unit__PCplus4._settle__TOP__testbench__TAGE__writeback_unit__PCplus4__5(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit._settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit._settle__TOP__testbench__TAGE__lsu_unit__3(vlSymsp);
    vlSymsp->TOP__testbench._settle__TOP__testbench__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp._settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__8(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp._settle__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__9(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp._settle__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__10(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp._settle__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__11(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1._settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__6(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2._settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__7(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3._settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__8(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table._settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table._settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__decode_unit._settle__TOP__testbench__TAGE__decode_unit__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit._settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit._settle__TOP__testbench__TAGE__fetch_unit__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__writeback_unit._settle__TOP__testbench__TAGE__writeback_unit__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit._settle__TOP__testbench__TAGE__execute_unit__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block._settle__TOP__testbench__TAGE__lsu_unit__memory_block__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE._settle__TOP__testbench__TAGE__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor._settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit._settle__TOP__testbench__TAGE__lsu_unit__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__decode_unit._settle__TOP__testbench__TAGE__decode_unit__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit._settle__TOP__testbench__TAGE__execute_unit__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit._settle__TOP__testbench__TAGE__fetch_unit__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE._settle__TOP__testbench__TAGE__5(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit._settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module._settle__TOP__testbench__TAGE__execute_unit__alu_module__2(vlSymsp);
    vlSymsp->TOP__testbench._settle__TOP__testbench__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare._settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__12(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare._settle__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__13(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__signed_compare._settle__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__14(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder._settle__TOP__testbench__TAGE__execute_unit__alu_module__full_adder__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor._settle__TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module._settle__TOP__testbench__TAGE__execute_unit__alu_module__srl_module__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sra_module._settle__TOP__testbench__TAGE__execute_unit__alu_module__sra_module__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module._settle__TOP__testbench__TAGE__execute_unit__alu_module__sll_module__1(vlSymsp);
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlSymsp->TOP__testbench__scoreboard._settle__TOP__testbench__scoreboard__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit._settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module._settle__TOP__testbench__TAGE__execute_unit__alu_module__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit._settle__TOP__testbench__TAGE__execute_unit__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE._settle__TOP__testbench__TAGE__6(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__harzard_detection_unit._settle__TOP__testbench__TAGE__harzard_detection_unit__1(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit._settle__TOP__testbench__TAGE__fetch_unit__5(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator._settle__TOP__testbench__TAGE__fetch_unit__pc_generator__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor._settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit._settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit._settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__5(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table._settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__instruction_memory._settle__TOP__testbench__TAGE__fetch_unit__instruction_memory__2(vlSymsp);
    vlSymsp->TOP__testbench__readResultUnit._settle__TOP__testbench__readResultUnit__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit._settle__TOP__testbench__TAGE__fetch_unit__7(vlSymsp);
    vlSymsp->TOP__testbench._settle__TOP__testbench__6(vlSymsp);
    vlSymsp->TOP__testbench__TAGE._settle__TOP__testbench__TAGE__8(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
}

void Vtestbench::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_ctor_var_reset\n"); );
    // Body
    i_clk = VL_RAND_RESET_I(1);
    i_rst_n = VL_RAND_RESET_I(1);
    o_EXMEM_instruction = VL_RAND_RESET_I(32);
    o_instr_vld = VL_RAND_RESET_I(1);
    o_misprediction_cnt = VL_RAND_RESET_Q(64);
    o_instr_cnt = VL_RAND_RESET_Q(64);
    o_counter = VL_RAND_RESET_Q(64);
    o_branch_count = VL_RAND_RESET_Q(64);
    o_print_signal = VL_RAND_RESET_Q(64);
    o_lsu_addr = VL_RAND_RESET_I(32);
    o_lsu_data = VL_RAND_RESET_I(32);
    o_lsu_wren = VL_RAND_RESET_I(1);
    __VinpClk__TOP__testbench__TAGE__decode_unit__instr_decode0____PVT__i_rst_n = VL_RAND_RESET_I(1);
    __VinpClk__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table____PVT__i_rst_n = VL_RAND_RESET_I(1);
    __VinpClk__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg____PVT__i_rst_n = VL_RAND_RESET_I(1);
    __Vchglast__TOP__testbench__TAGE__harzard_detection_unit__o_harzard_bus = VL_RAND_RESET_I(6);
    __Vchglast__TOP__testbench__TAGE__decode_unit__instr_decode0__i_rst_n = VL_RAND_RESET_I(1);
    __Vchglast__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__sig_less = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__sig_equal = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__sig_less = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__sig_equal = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__sig_less = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__sig_equal = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__sig_less = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__sig_equal = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__sig_less = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__sig_equal = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__sig_less = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__sig_equal = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__sig_less = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__sig_equal = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__sig_carry = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__sig_carry = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__sig_carry = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__writeback_unit__PCplus4__sig_carry = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__full_adder__sig_carry = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor__sig_borrow = VL_RAND_RESET_Q(33);
    __Vchglast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table__i_rst_n = VL_RAND_RESET_I(1);
    __Vchglast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg__i_rst_n = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<15; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
