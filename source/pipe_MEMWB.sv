`include "./include/filelist.svh"
module pipe_MEMWB (
    input  logic            i_clk, i_rst_n, i_MEMWB_en,
    input  EXMEM_bus        i_EXMEM_bus,
    input  logic [XLEN-1:0] i_lsu_data,
    output EXMEM_bus        o_MEMWB_bus,
    output logic [XLEN-1:0] o_MEMWB_lsu_data
);
  EXMEM_bus MEMWB_reg;
  logic [XLEN-1:0] lsu_data_reg;
  always_ff @(posedge i_clk) begin
    if (~i_rst_n) begin
      MEMWB_reg  <= 'b0;
    end else if (i_MEMWB_en) begin
      MEMWB_reg <= i_EXMEM_bus;
      lsu_data_reg <= i_lsu_data;
    end
  end
  always_comb begin
    o_MEMWB_bus = MEMWB_reg;
    o_MEMWB_lsu_data = lsu_data_reg;
  end
endmodule
