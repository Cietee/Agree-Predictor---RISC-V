# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtestbench.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (from --threads, --trace-threads or use of classes)
VM_C11 = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtestbench \
	Vtestbench_testbench \
	Vtestbench___024unit \
	Vtestbench_top_riscv \
	Vtestbench_cycle_count \
	Vtestbench_driver \
	Vtestbench_read_result \
	Vtestbench_scoreboard \
	Vtestbench_block_DECODE \
	Vtestbench_block_EXECUTE \
	Vtestbench_block_FETCH \
	Vtestbench_block_WRITE_BACK \
	Vtestbench_forwarding_unit \
	Vtestbench_harzard_detection \
	Vtestbench_lsu \
	Vtestbench_pipe_EXMEM \
	Vtestbench_pipe_IDEX \
	Vtestbench_pipe_IFID \
	Vtestbench_pipe_MEMWB \
	Vtestbench_alu \
	Vtestbench_branch_control_unit \
	Vtestbench_branch_prediction_top \
	Vtestbench_control_unit \
	Vtestbench_data_memory \
	Vtestbench_immediate_gen \
	Vtestbench_instruction_mem \
	Vtestbench_io_input_buffer \
	Vtestbench_io_output_buffer \
	Vtestbench_pc_gen \
	Vtestbench_regfile \
	Vtestbench_sign_extend \
	Vtestbench_agree_predict \
	Vtestbench_btb \
	Vtestbench_comparator \
	Vtestbench_full_adder_nbit \
	Vtestbench_full_adder_nbit__W20 \
	Vtestbench_full_subtractor_nbit \
	Vtestbench_sll_module \
	Vtestbench_sra_module \
	Vtestbench_srl_module \
	Vtestbench_bbt_module \
	Vtestbench_bhr_module \
	Vtestbench_pht_module \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtestbench__Slow \
	Vtestbench_testbench__Slow \
	Vtestbench___024unit__Slow \
	Vtestbench_top_riscv__Slow \
	Vtestbench_cycle_count__Slow \
	Vtestbench_driver__Slow \
	Vtestbench_read_result__Slow \
	Vtestbench_scoreboard__Slow \
	Vtestbench_block_DECODE__Slow \
	Vtestbench_block_EXECUTE__Slow \
	Vtestbench_block_FETCH__Slow \
	Vtestbench_block_WRITE_BACK__Slow \
	Vtestbench_forwarding_unit__Slow \
	Vtestbench_harzard_detection__Slow \
	Vtestbench_lsu__Slow \
	Vtestbench_pipe_EXMEM__Slow \
	Vtestbench_pipe_IDEX__Slow \
	Vtestbench_pipe_IFID__Slow \
	Vtestbench_pipe_MEMWB__Slow \
	Vtestbench_alu__Slow \
	Vtestbench_branch_control_unit__Slow \
	Vtestbench_branch_prediction_top__Slow \
	Vtestbench_control_unit__Slow \
	Vtestbench_data_memory__Slow \
	Vtestbench_immediate_gen__Slow \
	Vtestbench_instruction_mem__Slow \
	Vtestbench_io_input_buffer__Slow \
	Vtestbench_io_output_buffer__Slow \
	Vtestbench_pc_gen__Slow \
	Vtestbench_regfile__Slow \
	Vtestbench_sign_extend__Slow \
	Vtestbench_agree_predict__Slow \
	Vtestbench_btb__Slow \
	Vtestbench_comparator__Slow \
	Vtestbench_full_adder_nbit__Slow \
	Vtestbench_full_adder_nbit__W20__Slow \
	Vtestbench_full_subtractor_nbit__Slow \
	Vtestbench_sll_module__Slow \
	Vtestbench_sra_module__Slow \
	Vtestbench_srl_module__Slow \
	Vtestbench_bbt_module__Slow \
	Vtestbench_bhr_module__Slow \
	Vtestbench_pht_module__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtestbench__Trace \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtestbench__Syms \
	Vtestbench__Trace__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
