// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench.h"
#include "Vtestbench__Syms.h"

//==========

void Vtestbench::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtestbench::eval\n"); );
    Vtestbench__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top_riscv_test/testbench.sv", 2, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtestbench::_eval_initial_loop(Vtestbench__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top_riscv_test/testbench.sv", 2, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtestbench::_combo__TOP__4(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_combo__TOP__4\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench.i_rst_n = vlTOPp->i_rst_n;
    vlSymsp->TOP__testbench.i_clk = vlTOPp->i_clk;
}

VL_INLINE_OPT void Vtestbench::_sequent__TOP__6(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_sequent__TOP__6\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->o_print_signal = vlSymsp->TOP__testbench.o_print_signal;
}

VL_INLINE_OPT void Vtestbench::_sequent__TOP__7(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_sequent__TOP__7\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->o_misprediction_cnt = vlSymsp->TOP__testbench.o_misprediction_cnt;
    vlTOPp->o_branch_count = vlSymsp->TOP__testbench.o_branch_count;
    vlTOPp->o_counter = vlSymsp->TOP__testbench.o_counter;
    vlTOPp->o_instr_cnt = vlSymsp->TOP__testbench.o_instr_cnt;
}

VL_INLINE_OPT void Vtestbench::_combo__TOP__8(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_combo__TOP__8\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->o_EXMEM_instruction = vlSymsp->TOP__testbench.o_EXMEM_instruction;
    vlTOPp->o_lsu_addr = vlSymsp->TOP__testbench.o_lsu_addr;
    vlTOPp->o_lsu_data = vlSymsp->TOP__testbench.o_lsu_data;
    vlTOPp->o_lsu_wren = vlSymsp->TOP__testbench.o_lsu_wren;
    vlTOPp->o_instr_vld = vlSymsp->TOP__testbench.o_instr_vld;
}

void Vtestbench::_eval(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_eval\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1._combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__9(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2._combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__10(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3._combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__11(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__writeback_unit__PCplus4._combo__TOP__testbench__TAGE__writeback_unit__PCplus4__12(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder._combo__TOP__testbench__TAGE__execute_unit__alu_module__full_adder__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor._combo__TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare._combo__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__15(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__signed_compare._combo__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__16(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp._combo__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__17(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp._combo__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__18(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp._combo__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__19(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp._combo__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__20(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare._combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__21(vlSymsp);
    vlSymsp->TOP__testbench._combo__TOP__testbench__5(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module._combo__TOP__testbench__TAGE__execute_unit__alu_module__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module._combo__TOP__testbench__TAGE__lsu_unit__output_buffer_module__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module._combo__TOP__testbench__TAGE__lsu_unit__input_buffer_module__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block._combo__TOP__testbench__TAGE__lsu_unit__memory_block__5(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit._combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__5(vlSymsp);
    vlSymsp->TOP__testbench__TAGE._combo__TOP__testbench__TAGE__7(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit._combo__TOP__testbench__TAGE__lsu_unit__5(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit._combo__TOP__testbench__TAGE__fetch_unit__6(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__decode_unit._combo__TOP__testbench__TAGE__decode_unit__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor._combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__5(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit._combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__6(vlSymsp);
    if (((IData)(vlSymsp->TOP__testbench__scoreboard.__PVT__i_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__scoreboard____PVT__i_clk)))) {
        vlSymsp->TOP__testbench__scoreboard._sequent__TOP__testbench__scoreboard__2(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__testbench__readResultUnit.__PVT__i_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__readResultUnit____PVT__i_clk)))) {
        vlSymsp->TOP__testbench__readResultUnit._sequent__TOP__testbench__readResultUnit__3(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
        vlSymsp->TOP__testbench._sequent__TOP__testbench__7(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__testbench__driverUnit.__PVT__i_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__driverUnit____PVT__i_clk)))) {
        vlSymsp->TOP__testbench__driverUnit._sequent__TOP__testbench__driverUnit__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
        vlSymsp->TOP__testbench._sequent__TOP__testbench__8(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__testbench__cycleCountUnit.__PVT__i_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__cycleCountUnit____PVT__i_clk)))) {
        vlSymsp->TOP__testbench__cycleCountUnit._sequent__TOP__testbench__cycleCountUnit__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[4U] = 1U;
        vlSymsp->TOP__testbench._sequent__TOP__testbench__9(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__testbench__TAGE.__PVT__i_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__TAGE____PVT__i_clk)))) {
        vlSymsp->TOP__testbench__TAGE._sequent__TOP__testbench__TAGE__9(vlSymsp);
        vlTOPp->__Vm_traceActivity[5U] = 1U;
        vlSymsp->TOP__testbench._sequent__TOP__testbench__10(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__i_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__TAGE__ifid_pipe_unit____PVT__i_clk)))) {
        vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit._sequent__TOP__testbench__TAGE__ifid_pipe_unit__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[6U] = 1U;
        vlSymsp->TOP__testbench__TAGE._sequent__TOP__testbench__TAGE__10(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__PVT__i_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__TAGE__exmem_pipe_unit____PVT__i_clk)))) {
        vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit._sequent__TOP__testbench__TAGE__exmem_pipe_unit__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[7U] = 1U;
        vlSymsp->TOP__testbench__TAGE._sequent__TOP__testbench__TAGE__11(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__testbench__TAGE__idex_pipe_unit.__PVT__i_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__TAGE__idex_pipe_unit____PVT__i_clk)))) {
        vlSymsp->TOP__testbench__TAGE__idex_pipe_unit._sequent__TOP__testbench__TAGE__idex_pipe_unit__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[8U] = 1U;
        vlSymsp->TOP__testbench__TAGE._sequent__TOP__testbench__TAGE__12(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit.__PVT__i_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__TAGE__memwb_pipe_unit____PVT__i_clk)))) {
        vlSymsp->TOP__testbench__TAGE__memwb_pipe_unit._sequent__TOP__testbench__TAGE__memwb_pipe_unit__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[9U] = 1U;
        vlSymsp->TOP__testbench__TAGE._sequent__TOP__testbench__TAGE__13(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module.__PVT__i_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__TAGE__lsu_unit__input_buffer_module____PVT__i_clk)))) {
        vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module._sequent__TOP__testbench__TAGE__lsu_unit__input_buffer_module__5(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module.__PVT__i_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__TAGE__lsu_unit__output_buffer_module____PVT__i_clk)))) {
        vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module._sequent__TOP__testbench__TAGE__lsu_unit__output_buffer_module__5(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xaU] = 1U;
        vlSymsp->TOP__testbench__TAGE__lsu_unit._sequent__TOP__testbench__TAGE__lsu_unit__6(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block.__PVT__i_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__TAGE__lsu_unit__memory_block____PVT__i_clk)))) {
        vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block._sequent__TOP__testbench__TAGE__lsu_unit__memory_block__6(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator.__PVT__i_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__TAGE__fetch_unit__pc_generator____PVT__i_clk)))) {
        vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator._sequent__TOP__testbench__TAGE__fetch_unit__pc_generator__3(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xbU] = 1U;
        vlSymsp->TOP__testbench__TAGE__fetch_unit._sequent__TOP__testbench__TAGE__fetch_unit__8(vlSymsp);
        vlSymsp->TOP__testbench__TAGE._sequent__TOP__testbench__TAGE__14(vlSymsp);
    }
    if ((((~ (IData)(vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_clk)) 
          & (IData)(vlTOPp->__Vclklast__TOP__testbench__TAGE__decode_unit__instr_decode0____PVT__i_clk)) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__testbench__TAGE__decode_unit__instr_decode0____PVT__i_rst_n)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__testbench__TAGE__decode_unit__instr_decode0____PVT__i_rst_n)))) {
        vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0._sequent__TOP__testbench__TAGE__decode_unit__instr_decode0__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xcU] = 1U;
    }
    if (((IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit.__PVT__i_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit____PVT__i_clk)))) {
        vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit._sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__3(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit.__PVT__i_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit____PVT__i_clk)))) {
        vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit._sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__7(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__i_clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table____PVT__i_clk))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table____PVT__i_rst_n)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table____PVT__i_rst_n)))) {
        vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table._sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table__2(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table.__PVT__i_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table____PVT__i_clk)))) {
        vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table._sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table__3(vlSymsp);
    }
    if ((((IData)(vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__i_clk) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg____PVT__i_clk))) 
         | ((~ (IData)(vlTOPp->__VinpClk__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg____PVT__i_rst_n)) 
            & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg____PVT__i_rst_n)))) {
        vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg._sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xdU] = 1U;
        vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit._sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__8(vlSymsp);
    }
    vlSymsp->TOP__testbench._combo__TOP__testbench__11(vlSymsp);
    vlSymsp->TOP__testbench__TAGE._combo__TOP__testbench__TAGE__15(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit._combo__TOP__testbench__TAGE__fetch_unit__9(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit._combo__TOP__testbench__TAGE__lsu_unit__7(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit._combo__TOP__testbench__TAGE__execute_unit__5(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__writeback_unit._combo__TOP__testbench__TAGE__writeback_unit__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__decode_unit._combo__TOP__testbench__TAGE__decode_unit__5(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__forwarding_unit._combo__TOP__testbench__TAGE__forwarding_unit__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module._combo__TOP__testbench__TAGE__lsu_unit__input_buffer_module__6(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module._combo__TOP__testbench__TAGE__lsu_unit__output_buffer_module__6(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__instruction_memory._combo__TOP__testbench__TAGE__fetch_unit__instruction_memory__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor._combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__6(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit._combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__9(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block._combo__TOP__testbench__TAGE__lsu_unit__memory_block__7(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit._combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__6(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__writeback_unit__mask_module._combo__TOP__testbench__TAGE__writeback_unit__mask_module__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__writeback_unit__PCplus4._combo__TOP__testbench__TAGE__writeback_unit__PCplus4__13(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode1._combo__TOP__testbench__TAGE__decode_unit__instr_decode1__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode2._combo__TOP__testbench__TAGE__decode_unit__instr_decode2__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0._combo__TOP__testbench__TAGE__decode_unit__instr_decode0__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE._combo__TOP__testbench__TAGE__16(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit._combo__TOP__testbench__TAGE__lsu_unit__8(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp._combo__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__22(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp._combo__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__23(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit._combo__TOP__testbench__TAGE__fetch_unit__10(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit._combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor._combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__7(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table._combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table._combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp._combo__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__24(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp._combo__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__25(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1._combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__14(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2._combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__15(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3._combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__16(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit._combo__TOP__testbench__TAGE__execute_unit__6(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__writeback_unit._combo__TOP__testbench__TAGE__writeback_unit__5(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__decode_unit._combo__TOP__testbench__TAGE__decode_unit__6(vlSymsp);
    vlSymsp->TOP__testbench__TAGE._combo__TOP__testbench__TAGE__17(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit._combo__TOP__testbench__TAGE__fetch_unit__11(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit._combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__10(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block._combo__TOP__testbench__TAGE__lsu_unit__memory_block__8(vlSymsp);
    vlSymsp->TOP__testbench._combo__TOP__testbench__12(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__decode_unit._combo__TOP__testbench__TAGE__decode_unit__7(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit._combo__TOP__testbench__TAGE__execute_unit__7(vlSymsp);
    vlSymsp->TOP__testbench__TAGE._combo__TOP__testbench__TAGE__18(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor._combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__8(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__lsu_unit._combo__TOP__testbench__TAGE__lsu_unit__9(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit._combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__7(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module._combo__TOP__testbench__TAGE__execute_unit__alu_module__5(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit._combo__TOP__testbench__TAGE__fetch_unit__12(vlSymsp);
    vlSymsp->TOP__testbench__TAGE._combo__TOP__testbench__TAGE__19(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare._combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__26(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare._combo__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__27(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__signed_compare._combo__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__28(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder._combo__TOP__testbench__TAGE__execute_unit__alu_module__full_adder__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor._combo__TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__srl_module._combo__TOP__testbench__TAGE__execute_unit__alu_module__srl_module__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sra_module._combo__TOP__testbench__TAGE__execute_unit__alu_module__sra_module__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__sll_module._combo__TOP__testbench__TAGE__execute_unit__alu_module__sll_module__2(vlSymsp);
    vlSymsp->TOP__testbench._combo__TOP__testbench__13(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit._combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__8(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module._combo__TOP__testbench__TAGE__execute_unit__alu_module__6(vlSymsp);
    vlTOPp->_combo__TOP__8(vlSymsp);
    vlSymsp->TOP__testbench__scoreboard._combo__TOP__testbench__scoreboard__3(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__execute_unit._combo__TOP__testbench__TAGE__execute_unit__8(vlSymsp);
    vlSymsp->TOP__testbench__TAGE._combo__TOP__testbench__TAGE__20(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__harzard_detection_unit._combo__TOP__testbench__TAGE__harzard_detection_unit__2(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit._combo__TOP__testbench__TAGE__fetch_unit__13(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__pc_generator._combo__TOP__testbench__TAGE__fetch_unit__pc_generator__4(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor._combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__9(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit._combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__5(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit._combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__11(vlSymsp);
    vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table._combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table__5(vlSymsp);
    if (((IData)(vlSymsp->TOP__testbench__TAGE__ifid_pipe_unit.__PVT__i_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__TAGE__ifid_pipe_unit____PVT__i_clk)))) {
        vlSymsp->TOP__testbench__TAGE._sequent__TOP__testbench__TAGE__21(vlSymsp);
    }
    if (((IData)(vlSymsp->TOP__testbench__TAGE__exmem_pipe_unit.__PVT__i_clk) 
         & (~ (IData)(vlTOPp->__Vclklast__TOP__testbench__TAGE__exmem_pipe_unit____PVT__i_clk)))) {
        vlSymsp->TOP__testbench__TAGE._sequent__TOP__testbench__TAGE__22(vlSymsp);
        vlTOPp->__Vm_traceActivity[0xeU] = 1U;
    }
    // Final
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
    vlTOPp->__VinpClk__TOP__testbench__TAGE__decode_unit__instr_decode0____PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rst_n;
    vlTOPp->__VinpClk__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table____PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__i_rst_n;
    vlTOPp->__VinpClk__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg____PVT__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__i_rst_n;
}

VL_INLINE_OPT QData Vtestbench::_change_request(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_change_request\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtestbench::_change_request_1(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_change_request_1\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__o_harzard_bus ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__harzard_detection_unit__o_harzard_bus)
         | (vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rst_n ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__decode_unit__instr_decode0__i_rst_n)
         | (vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare.__PVT__sig_less ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__sig_less)
         | (vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare.__PVT__sig_equal ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__sig_equal)
         | (vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare.__PVT__sig_less ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__sig_less)
         | (vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare.__PVT__sig_equal ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__sig_equal)
         | (vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__signed_compare.__PVT__sig_less ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__sig_less)
         | (vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__signed_compare.__PVT__sig_equal ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__sig_equal)
         | (vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp.__PVT__sig_less ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__sig_less)
         | (vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp.__PVT__sig_equal ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__sig_equal)
        || (vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp.__PVT__sig_less ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__sig_less)
         | (vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp.__PVT__sig_equal ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__sig_equal)
         | (vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp.__PVT__sig_less ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__sig_less)
         | (vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp.__PVT__sig_equal ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__sig_equal)
         | (vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp.__PVT__sig_less ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__sig_less)
         | (vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp.__PVT__sig_equal ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__sig_equal)
         | (vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1.__PVT__sig_carry ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__sig_carry)
         | (vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2.__PVT__sig_carry ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__sig_carry)
         | (vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3.__PVT__sig_carry ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__sig_carry)
         | (vlSymsp->TOP__testbench__TAGE__writeback_unit__PCplus4.__PVT__sig_carry ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__writeback_unit__PCplus4__sig_carry)
        || (vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__full_adder__sig_carry)
         | (vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor__sig_borrow)
         | (vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__i_rst_n ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table__i_rst_n)
         | (vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__i_rst_n ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg__i_rst_n));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__o_harzard_bus ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__harzard_detection_unit__o_harzard_bus))) VL_DBG_MSGF("        CHANGE: source/harzard_detection.sv:4: o_harzard_bus\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rst_n ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__decode_unit__instr_decode0__i_rst_n))) VL_DBG_MSGF("        CHANGE: source/regfile.sv:3: i_rst_n\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare.__PVT__sig_less ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__sig_less))) VL_DBG_MSGF("        CHANGE: source/comparator.sv:11: sig_less\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare.__PVT__sig_equal ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__sig_equal))) VL_DBG_MSGF("        CHANGE: source/comparator.sv:11: sig_equal\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare.__PVT__sig_less ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__sig_less))) VL_DBG_MSGF("        CHANGE: source/comparator.sv:11: sig_less\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare.__PVT__sig_equal ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__sig_equal))) VL_DBG_MSGF("        CHANGE: source/comparator.sv:11: sig_equal\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__signed_compare.__PVT__sig_less ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__sig_less))) VL_DBG_MSGF("        CHANGE: source/comparator.sv:11: sig_less\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__signed_compare.__PVT__sig_equal ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__sig_equal))) VL_DBG_MSGF("        CHANGE: source/comparator.sv:11: sig_equal\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp.__PVT__sig_less ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__sig_less))) VL_DBG_MSGF("        CHANGE: source/comparator.sv:11: sig_less\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp.__PVT__sig_equal ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__sig_equal))) VL_DBG_MSGF("        CHANGE: source/comparator.sv:11: sig_equal\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp.__PVT__sig_less ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__sig_less))) VL_DBG_MSGF("        CHANGE: source/comparator.sv:11: sig_less\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp.__PVT__sig_equal ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__sig_equal))) VL_DBG_MSGF("        CHANGE: source/comparator.sv:11: sig_equal\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp.__PVT__sig_less ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__sig_less))) VL_DBG_MSGF("        CHANGE: source/comparator.sv:11: sig_less\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp.__PVT__sig_equal ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__sig_equal))) VL_DBG_MSGF("        CHANGE: source/comparator.sv:11: sig_equal\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp.__PVT__sig_less ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__sig_less))) VL_DBG_MSGF("        CHANGE: source/comparator.sv:11: sig_less\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp.__PVT__sig_equal ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__sig_equal))) VL_DBG_MSGF("        CHANGE: source/comparator.sv:11: sig_equal\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1.__PVT__sig_carry ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__sig_carry))) VL_DBG_MSGF("        CHANGE: source/full_adder_nbit.sv:10: sig_carry\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2.__PVT__sig_carry ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__sig_carry))) VL_DBG_MSGF("        CHANGE: source/full_adder_nbit.sv:10: sig_carry\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3.__PVT__sig_carry ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__sig_carry))) VL_DBG_MSGF("        CHANGE: source/full_adder_nbit.sv:10: sig_carry\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__writeback_unit__PCplus4.__PVT__sig_carry ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__writeback_unit__PCplus4__sig_carry))) VL_DBG_MSGF("        CHANGE: source/full_adder_nbit.sv:10: sig_carry\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__full_adder__sig_carry))) VL_DBG_MSGF("        CHANGE: source/full_adder_nbit.sv:10: sig_carry\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor__sig_borrow))) VL_DBG_MSGF("        CHANGE: source/full_subtractor_nbit.sv:10: sig_borrow\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__i_rst_n ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table__i_rst_n))) VL_DBG_MSGF("        CHANGE: source/bbt_module.sv:4: i_rst_n\n"); );
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__i_rst_n ^ vlTOPp->__Vchglast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg__i_rst_n))) VL_DBG_MSGF("        CHANGE: source/bhr_module.sv:5: i_rst_n\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__testbench__TAGE__harzard_detection_unit__o_harzard_bus 
        = vlSymsp->TOP__testbench__TAGE__harzard_detection_unit.__PVT__o_harzard_bus;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__decode_unit__instr_decode0__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__decode_unit__instr_decode0.__PVT__i_rst_n;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__sig_less 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare.__PVT__sig_less;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__sig_equal 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare.__PVT__sig_equal;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__sig_less 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare.__PVT__sig_less;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__sig_equal 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare.__PVT__sig_equal;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__sig_less 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__signed_compare.__PVT__sig_less;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__sig_equal 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__signed_compare.__PVT__sig_equal;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__sig_less 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp.__PVT__sig_less;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__sig_equal 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp.__PVT__sig_equal;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__sig_less 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp.__PVT__sig_less;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__sig_equal 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp.__PVT__sig_equal;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__sig_less 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp.__PVT__sig_less;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__sig_equal 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp.__PVT__sig_equal;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__sig_less 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp.__PVT__sig_less;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__sig_equal 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp.__PVT__sig_equal;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__sig_carry 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1.__PVT__sig_carry;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__sig_carry 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2.__PVT__sig_carry;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__sig_carry 
        = vlSymsp->TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3.__PVT__sig_carry;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__writeback_unit__PCplus4__sig_carry 
        = vlSymsp->TOP__testbench__TAGE__writeback_unit__PCplus4.__PVT__sig_carry;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__full_adder__sig_carry 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_adder.__PVT__sig_carry;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor__sig_borrow 
        = vlSymsp->TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor.__PVT__sig_borrow;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table.__PVT__i_rst_n;
    vlTOPp->__Vchglast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg__i_rst_n 
        = vlSymsp->TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg.__PVT__i_rst_n;
    return __req;
}

#ifdef VL_DEBUG
void Vtestbench::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((i_rst_n & 0xfeU))) {
        Verilated::overWidthError("i_rst_n");}
}
#endif  // VL_DEBUG
