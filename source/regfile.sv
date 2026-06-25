`include "./include/filelist.svh"
module regfile (
    input  logic                 i_clk, i_rst_n,
    input  logic                 i_rd_wren,  
    input  logic [XLEN-1:0]      i_rd_addr, i_rd_data,
    input  logic [REG_ADDR_W-1:0] i_rs1_addr, i_rs2_addr,
    output logic [      XLEN-1:0] o_rs1_data, o_rs2_data
);

  logic [XLEN-1:0] registers [XLEN-1:0]; 
  logic reg0;
  assign reg0 = (|i_rd_addr); // Rd equal 0 : reg0 = 0
  // Register write logic
  always_ff @(negedge i_clk or negedge i_rst_n) begin
    registers[0] <= '0;  // x0 is always zero
    if (!i_rst_n) begin
      for (int i = 1; i < XLEN; i++) begin
        registers[i] <= '0;
      end
    end else if (i_rd_wren && reg0) begin
        registers[i_rd_addr] <= i_rd_data;
    end
   end
   
  // Register read logic
  always_comb begin
    o_rs1_data = registers[i_rs1_addr] ;  // Read data from the register file for rs1
    o_rs2_data = registers[i_rs2_addr] ;  // Read data from the register file for rs2
  end
endmodule

