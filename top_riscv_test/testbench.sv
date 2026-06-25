`include "./include/filelist.svh"
module testbench (
    input  logic i_clk,
    input  logic i_rst_n,
    output logic [XLEN-1:0] o_EXMEM_instruction, // Input from switches
    output logic o_instr_vld,
    output logic [XLEN*2-1:0] o_misprediction_cnt, o_instr_cnt, o_counter, o_branch_count, o_print_signal,
    output logic [XLEN-1:0] o_lsu_addr, o_lsu_data,
    output logic            o_lsu_wren
);

  logic [31:0] i_io_sw;
  logic [31:0] o_io_ledr;
  //logic o_instr_vld;
  logic o_misprediction;
  logic [31:0] o_pc_debug;
 // logic [63:0] o_counter, o_instr_cnt, o_misprediction_cnt; // Added to capture counter output
   

  driver driverUnit(
    .i_clk,
    .i_rst_n,
    .i_io_sw // Output instruction count to LEDs
  );

  top_riscv TAGE(
    .i_clk,
    .i_rst_n,
    .i_io_sw   ,
    .o_io_ledr ,
    .o_instr_vld,
    .o_misprediction,
    .o_lsu_addr,
    .o_lsu_data,
    .o_lsu_wren,
    .o_pc_debug,
    .o_EXMEM_instruction
  );
  cycle_count cycleCountUnit(
    .i_clk,
    .i_rst_n,
    .o_instr_vld,
    .o_EXMEM_instruction,
    .o_misprediction,
    .i_lsu_addr(o_lsu_addr),
    .i_lsu_data(o_lsu_data),
    .i_lsu_wren(o_lsu_wren),
    .o_counter,
    .o_instr_cnt,
    .o_branch_count, // Output instruction count to LEDs
    .o_misprediction_cnt, // Output misprediction count to LEDs
    .o_pc_debug(o_pc_debug) // Output PC debug information
  );
  read_result readResultUnit(
    .i_clk,
    .i_rst_n,
    .i_lsu_addr(o_lsu_addr),
    .i_lsu_data(o_lsu_data),
    .i_lsu_wren(o_lsu_wren),
    .o_counter,
    .o_instr_cnt,
    .o_branch_count, // Output instruction count to LEDs
    .o_misprediction_cnt, // Output misprediction count to LEDs
    .o_pc_debug(o_pc_debug), // Output PC debug information
    .o_print_signal
  );

  scoreboard scoreboard(
    .i_io_sw   ,
    .o_io_ledr ,
    .o_pc_debug,
    .o_instr_vld,
    .i_clk,
    .i_rst_n,
    .o_counter,
    .o_instr_cnt
  );//*/
endmodule 