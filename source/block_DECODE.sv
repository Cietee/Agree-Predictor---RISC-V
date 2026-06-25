 `include "./include/filelist.svh"

  module block_DECODE (
    input  logic   i_clk, i_rst_n,
    input  logic [XLEN-1:0] i_instr,
    input  logic            i_rd_wren,  
    input  logic [REG_ADDR_W-1:0] i_rd_addr, 
    input  logic [XLEN-1:0] i_rd_data,
    output control_unit_bus_o o_ctrl_bus,
    output decode_bus_o o_decode_bus
  );
  logic [XLEN-1:0] rs1, rs2;

  regfile instr_decode0 (
    .i_clk      (i_clk), 
    .i_rst_n    (i_rst_n), 
    .i_rd_wren  (i_rd_wren),
    .i_rd_addr  (i_rd_addr),
    .i_rd_data  (i_rd_data),
    .i_rs1_addr (i_instr[19:15]), 
    .i_rs2_addr (i_instr[24:20]), 
    .o_rs1_data (rs1), 
    .o_rs2_data (rs2)
  );
  
  immediate_gen instr_decode1 (
    .i_instr   (i_instr),
    .o_imme_data(o_decode_bus.imme_data)
  );
  control_unit instr_decode2 (
    .i_instr   (i_instr),
    .o_ctrl    (o_ctrl_bus)
  );
  assign o_decode_bus.rd_addr  = i_instr[11:7];
  assign o_decode_bus.rs1_data = rs1;
  assign o_decode_bus.rs2_data = rs2;
  assign o_decode_bus.rs1_addr = i_instr[19:15];
  assign o_decode_bus.rs2_addr = i_instr[24:20];
  endmodule
