`include "./include/filelist.svh"
module io_output_buffer (
  input  logic             i_clk, 
                           i_rst_n,
  input  logic [XLEN-1:0] i_lsu_addr, 
                           i_st_data,
  input  logic             i_lsu_wren,
  input  logic [      1:0] i_bit_mask,
  output logic [XLEN-1:0] o_io_ledr,
  output logic [XLEN-1:0] o_output_buffer_data,
  output logic             o_output_buffer_select
);

  localparam LEDR_BASE = 32'h7000;

  logic [XLEN-1: 0] bit_masked_data;
  logic ledr_select;
  logic [XLEN-1:0] ledrd;
  logic [XLEN-1:0] ledr;

  comparator LEDR_BASEcmp (
    .i_a      (i_lsu_addr),.i_b (LEDR_BASE), 
    .i_signed (1'b0)      ,.o_lessthan (), 
    .o_equal  (ledr_select)
  );
  always_comb begin
    unique case (i_bit_mask)
      `BIT_MASK_BYTE    : bit_masked_data = {{24{i_st_data[7]}} ,i_st_data[7:0]};
      `BIT_MASK_HALFWORD: bit_masked_data = {{16{i_st_data[15]}},i_st_data[15:0]};
      `BIT_MASK_WORD    : bit_masked_data = i_st_data;
      default : bit_masked_data = 32'b0;
    endcase
  end
  always_comb begin
    ledrd   = ledr_select? bit_masked_data: ledr;
  end
  always_ff @(posedge i_clk) begin
    if (!i_rst_n) begin
      ledr <= '0;
    end
    else if (i_lsu_wren) begin
      ledr <= ledrd;
    end
  end

  always_comb begin
      o_io_ledr = ledr;
      o_output_buffer_select = ledr_select;
  end
  always_comb begin
       o_output_buffer_data = ledr;
  end
  
  endmodule
