`include "./include/my_riscv_defs.svh"
`include "./include/riscv_bus.svh"
module driver (
  input  logic i_clk, i_rst_n,
  output  logic [XLEN-1:0] i_io_sw // Input from switches
);

logic [XLEN*2-1:0] counter;

  always @(posedge i_clk) begin
    if (!i_rst_n) begin
      counter <= 'd0;
    end
    else begin
      counter <= counter + 1;
    end
  end

  always_comb begin
    i_io_sw = (counter > 'd2) ? 32'hA5A5A5A5 : 32'h0;
  end

endmodule