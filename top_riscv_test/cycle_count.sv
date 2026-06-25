`include "./include/my_riscv_defs.svh"
`include "./include/riscv_bus.svh"
module cycle_count (
  input  logic i_clk, i_rst_n,
  input logic o_instr_vld,
  input logic [XLEN-1:0] o_EXMEM_instruction, // Output to
  input logic o_misprediction, // Output to debug PC
  input logic [XLEN-1:0] i_lsu_addr,
  input logic [XLEN-1:0] i_lsu_data,
  input logic i_lsu_wren,
  output logic [XLEN*2-1:0] o_counter, o_instr_cnt, o_branch_count, // Output to LEDs
  output logic [XLEN*2-1:0] o_misprediction_cnt, // Output misprediction count to LEDs
  input logic [XLEN-1:0] o_pc_debug
);

logic [XLEN*2-1:0] counter, instruction_count, misprediction_count, branch_count;

  always_ff @(posedge i_clk) begin
    if (!i_rst_n) begin
      counter <= 'd0;
      instruction_count <= 'd0;
      branch_count <= 'd0;
      misprediction_count <= 'd0; // Initialize misprediction count
    end
    else if(!(i_lsu_addr=='h0300 && i_lsu_data=='hDEADDEAD && i_lsu_wren==`LSU_READ)) begin
      counter <= counter + 1;
      branch_count <= o_instr_vld&&(o_EXMEM_instruction[6:0]==7'b1100011||o_EXMEM_instruction[6:0]==7'b1100111
                           ||o_EXMEM_instruction[6:0]==7'b1101111) ? branch_count + 1 : branch_count; // Increment on branch instruction
      instruction_count <= o_instr_vld&&(o_EXMEM_instruction!=32'h0000_0013) ? instruction_count + 1 : instruction_count;
      misprediction_count <= o_misprediction ? misprediction_count + 1 : misprediction_count; // Increment on misprediction
    end
  end

  always_comb begin
    o_counter = counter; 
    o_instr_cnt = instruction_count; // Output the instruction count to LEDs
    o_misprediction_cnt = misprediction_count; // Output the misprediction count to LEDs
    o_branch_count = branch_count; // Output the branch count to LEDs
  end

endmodule