  `include "./include/filelist.svh"
  module lsu (
    input  logic            i_clk, 
                            i_rst_n,
    input  logic [XLEN-1:0] i_lsu_addr, 
                            i_st_data,
    input  logic            i_lsu_wren,
    input  logic [     1:0] i_bit_mask,
    output logic [XLEN-1:0] o_lsu_data, 
    // To connect to sw and btn
    input  logic [XLEN-1:0] i_io_sw,   // get data from 17 switches
    // To connect to LED r and g
    output logic [  XLEN-1:0] o_io_ledr
  );

  logic [XLEN-1:0] memory_data, input_buffer_data, output_buffer_data;
  logic  memory_select, input_buffer_select, output_buffer_select;
  logic [3:0] select_out_ld_data;

  data_memory memory_block (
    .i_clk, 
    .i_rst_n,
    .i_lsu_addr, 
    .i_st_data,
    .i_lsu_wren,
    .i_bit_mask,
    .o_memory_data(memory_data),
    .o_memory_select(memory_select)
  );

  io_input_buffer input_buffer_module(
    .i_clk, 
    .i_rst_n,
    .i_lsu_addr,
    .i_io_sw,  
    .o_input_buffer_data(input_buffer_data),
    .o_input_buffer_select(input_buffer_select)
  );
  
  io_output_buffer output_buffer_module(
    .i_clk, 
    .i_rst_n,
    .i_lsu_addr, 
    .i_st_data,
    .i_lsu_wren,
    .i_bit_mask,
    .o_io_ledr,  
    .o_output_buffer_data(output_buffer_data),
    .o_output_buffer_select(output_buffer_select)
  );
  always_comb begin
    select_out_ld_data = {memory_select, input_buffer_select, 
                          output_buffer_select, 1'b0};
    unique case(select_out_ld_data)
      4'b1000: o_lsu_data = memory_data;
      4'b0100: o_lsu_data = input_buffer_data;
      4'b0010: o_lsu_data = output_buffer_data;
      default: o_lsu_data = memory_data;
    endcase
  end
  endmodule
