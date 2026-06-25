`include "./include/filelist.svh"
module pipe_EXMEM (
    input  logic           i_clk, i_rst_n, i_EXMEM_en,
    input  IDEX_bus        i_IDEX_bus,
    input  execute_bus_o   i_execute_bus,
    output EXMEM_bus       o_EXMEM_bus
);
  EXMEM_bus EXMEM_reg;
  always_ff @(posedge i_clk) begin
    if (~i_rst_n) begin
      EXMEM_reg  <= 'b0;
    end else if (i_EXMEM_en) begin
      EXMEM_reg.execute_bus   <= i_execute_bus;
      EXMEM_reg.IDEX_pipe_bus <= i_IDEX_bus;
    end
  end
  always_comb begin
    o_EXMEM_bus = EXMEM_reg;
  end
endmodule
