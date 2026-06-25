`include "./include/filelist.svh"
  module io_input_buffer (
    input  logic             i_clk, 
                             i_rst_n,
    input  logic [XLEN-1:0] i_lsu_addr,
    input  logic [XLEN-1:0] i_io_sw, 
    output logic [XLEN-1:0] o_input_buffer_data,
    output logic             o_input_buffer_select
  );

  
  localparam SWITCH_BASE   = 32'h7800;
  logic switch_select;
  logic [XLEN-1:0] switch_mem;
  
  comparator SWITCH_BASEcmp (
    .i_a        (i_lsu_addr), 
    .i_b        (SWITCH_BASE), 
    .i_signed   (1'b0),
    .o_lessthan (), 
    .o_equal    (switch_select)
  );

  always_ff @(posedge i_clk) begin
      switch_mem <= i_io_sw;
  end
  always_comb begin
    o_input_buffer_data   = switch_mem;
    o_input_buffer_select = switch_select;
  end

  endmodule
