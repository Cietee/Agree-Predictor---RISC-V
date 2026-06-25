// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VTESTBENCH__SYMS_H_
#define _VTESTBENCH__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vtestbench.h"
#include "Vtestbench_testbench.h"
#include "Vtestbench___024unit.h"
#include "Vtestbench_top_riscv.h"
#include "Vtestbench_cycle_count.h"
#include "Vtestbench_driver.h"
#include "Vtestbench_read_result.h"
#include "Vtestbench_scoreboard.h"
#include "Vtestbench_block_DECODE.h"
#include "Vtestbench_block_EXECUTE.h"
#include "Vtestbench_block_FETCH.h"
#include "Vtestbench_block_WRITE_BACK.h"
#include "Vtestbench_forwarding_unit.h"
#include "Vtestbench_harzard_detection.h"
#include "Vtestbench_lsu.h"
#include "Vtestbench_pipe_EXMEM.h"
#include "Vtestbench_pipe_IDEX.h"
#include "Vtestbench_pipe_IFID.h"
#include "Vtestbench_pipe_MEMWB.h"
#include "Vtestbench_alu.h"
#include "Vtestbench_branch_control_unit.h"
#include "Vtestbench_branch_prediction_top.h"
#include "Vtestbench_control_unit.h"
#include "Vtestbench_data_memory.h"
#include "Vtestbench_immediate_gen.h"
#include "Vtestbench_instruction_mem.h"
#include "Vtestbench_io_input_buffer.h"
#include "Vtestbench_io_output_buffer.h"
#include "Vtestbench_pc_gen.h"
#include "Vtestbench_regfile.h"
#include "Vtestbench_sign_extend.h"
#include "Vtestbench_agree_predict.h"
#include "Vtestbench_btb.h"
#include "Vtestbench_comparator.h"
#include "Vtestbench_full_adder_nbit.h"
#include "Vtestbench_full_adder_nbit__W20.h"
#include "Vtestbench_full_subtractor_nbit.h"
#include "Vtestbench_sll_module.h"
#include "Vtestbench_sra_module.h"
#include "Vtestbench_srl_module.h"
#include "Vtestbench_bbt_module.h"
#include "Vtestbench_bhr_module.h"
#include "Vtestbench_pht_module.h"

// SYMS CLASS
class Vtestbench__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vtestbench*                    TOPp;
    Vtestbench_testbench           TOP__testbench;
    Vtestbench_top_riscv           TOP__testbench__TAGE;
    Vtestbench_block_DECODE        TOP__testbench__TAGE__decode_unit;
    Vtestbench_regfile             TOP__testbench__TAGE__decode_unit__instr_decode0;
    Vtestbench_immediate_gen       TOP__testbench__TAGE__decode_unit__instr_decode1;
    Vtestbench_control_unit        TOP__testbench__TAGE__decode_unit__instr_decode2;
    Vtestbench_block_EXECUTE       TOP__testbench__TAGE__execute_unit;
    Vtestbench_alu                 TOP__testbench__TAGE__execute_unit__alu_module;
    Vtestbench_full_adder_nbit__W20 TOP__testbench__TAGE__execute_unit__alu_module__full_adder;
    Vtestbench_full_subtractor_nbit TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor;
    Vtestbench_comparator          TOP__testbench__TAGE__execute_unit__alu_module__signed_compare;
    Vtestbench_sll_module          TOP__testbench__TAGE__execute_unit__alu_module__sll_module;
    Vtestbench_sra_module          TOP__testbench__TAGE__execute_unit__alu_module__sra_module;
    Vtestbench_srl_module          TOP__testbench__TAGE__execute_unit__alu_module__srl_module;
    Vtestbench_comparator          TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare;
    Vtestbench_branch_control_unit TOP__testbench__TAGE__execute_unit__branch_control_unit;
    Vtestbench_comparator          TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare;
    Vtestbench_pipe_EXMEM          TOP__testbench__TAGE__exmem_pipe_unit;
    Vtestbench_block_FETCH         TOP__testbench__TAGE__fetch_unit;
    Vtestbench_branch_prediction_top TOP__testbench__TAGE__fetch_unit__branch_predictor;
    Vtestbench_agree_predict       TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit;
    Vtestbench_bbt_module          TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table;
    Vtestbench_bhr_module          TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg;
    Vtestbench_pht_module          TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table;
    Vtestbench_btb                 TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit;
    Vtestbench_instruction_mem     TOP__testbench__TAGE__fetch_unit__instruction_memory;
    Vtestbench_pc_gen              TOP__testbench__TAGE__fetch_unit__pc_generator;
    Vtestbench_forwarding_unit     TOP__testbench__TAGE__forwarding_unit;
    Vtestbench_harzard_detection   TOP__testbench__TAGE__harzard_detection_unit;
    Vtestbench_pipe_IDEX           TOP__testbench__TAGE__idex_pipe_unit;
    Vtestbench_pipe_IFID           TOP__testbench__TAGE__ifid_pipe_unit;
    Vtestbench_lsu                 TOP__testbench__TAGE__lsu_unit;
    Vtestbench_io_input_buffer     TOP__testbench__TAGE__lsu_unit__input_buffer_module;
    Vtestbench_comparator          TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp;
    Vtestbench_data_memory         TOP__testbench__TAGE__lsu_unit__memory_block;
    Vtestbench_comparator          TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp;
    Vtestbench_comparator          TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp;
    Vtestbench_full_adder_nbit     TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1;
    Vtestbench_full_adder_nbit     TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2;
    Vtestbench_full_adder_nbit     TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3;
    Vtestbench_io_output_buffer    TOP__testbench__TAGE__lsu_unit__output_buffer_module;
    Vtestbench_comparator          TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp;
    Vtestbench_pipe_MEMWB          TOP__testbench__TAGE__memwb_pipe_unit;
    Vtestbench_block_WRITE_BACK    TOP__testbench__TAGE__writeback_unit;
    Vtestbench_full_adder_nbit     TOP__testbench__TAGE__writeback_unit__PCplus4;
    Vtestbench_sign_extend         TOP__testbench__TAGE__writeback_unit__mask_module;
    Vtestbench_cycle_count         TOP__testbench__cycleCountUnit;
    Vtestbench_driver              TOP__testbench__driverUnit;
    Vtestbench_read_result         TOP__testbench__readResultUnit;
    Vtestbench_scoreboard          TOP__testbench__scoreboard;
    
    // CREATORS
    Vtestbench__Syms(Vtestbench* topp, const char* namep);
    ~Vtestbench__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
