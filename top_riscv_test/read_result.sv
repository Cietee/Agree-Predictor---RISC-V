`include "./include/my_riscv_defs.svh"
`include "./include/riscv_bus.svh"
module read_result (
  input  logic i_clk, i_rst_n,
  input logic [XLEN-1:0] i_lsu_addr,
  input logic [XLEN-1:0] i_lsu_data,
  input logic i_lsu_wren,
  input logic [XLEN*2-1:0] o_counter, o_instr_cnt, o_branch_count, // Output to LEDs
  input logic [XLEN*2-1:0] o_misprediction_cnt, // Output misprediction count to LEDs
  input logic [XLEN-1:0] o_pc_debug,
  output logic o_print_signal
);
  logic printed;
  assign printed = 'b0;
  logic [XLEN-1:0] result; // Dummy signal to avoid synthesis warnings
  always_ff  @(posedge i_clk) begin
    // Display the LSU address, data, and write enable status on LEDs
    if (!i_rst_n) result <= 'd0; // Prevent synthesis warnings about unused input
    else if (i_lsu_addr==32'h0200) result <= i_lsu_data; // Example usage to avoid warning
  end
  always_ff @(posedge i_clk) begin
    // Display the LSU address, data, and write enable status on LEDs
    if (!i_rst_n) begin
      printed <= 1'b0; // Reset printed flag
    end
    else if (!printed && i_lsu_addr=='h0300 && i_lsu_data=='hDEADDEAD && i_lsu_wren==`LSU_READ) begin
    $display("---------------- Program Finished ----------------");
    $display("             x3000 check: %h", i_lsu_data);
    $display("          Finish at time: %10t" , $time); 
    $display("     Cycle Counter Value: %10d", o_counter);
    $display("       Total Instruction: %10d", o_instr_cnt);
    $display("Branch Instruction Count: %10d", o_branch_count);
    $display("     Misprediction Count: %10d", o_misprediction_cnt);
    $display("         RESULT at x2000: %h", result);
    printed <= 1'b1; // Set printed flag to true
    end
    else if (printed) begin
      // Do nothing, already printed
    end
    // Display the counter values
    
  end
  assign o_print_signal = printed;

endmodule   
