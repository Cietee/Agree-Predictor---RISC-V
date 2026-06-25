`include "./include/filelist.svh"

module forwarding_unit #(
  parameter SizeAddr = REG_ADDR_W
)(
  input  logic [SizeAddr-1:0] IDEX_rd_addr, EXMEM_rd_addr, MEMWB_rd_addr,
  input  logic                IDEX_rd_wren, EXMEM_rd_wren, MEMWB_rd_wren,
  input  logic [SizeAddr-1:0] IDEX_rs1_addr, IDEX_rs2_addr,
  output logic [         1:0] o_fwa, o_fwb
);

  always_comb begin 
    // Default forwarding values (no forwarding)
    o_fwa = `FW_MUX_RS;
    o_fwb = `FW_MUX_RS;

    // Forwarding for rs1
    if (EXMEM_rd_wren && (EXMEM_rd_addr == IDEX_rs1_addr) && (EXMEM_rd_addr != 0)) begin
      o_fwa = `FW_MUX_EXMEM_ALU; // Forward from MEM stage
    end else if (MEMWB_rd_wren && (MEMWB_rd_addr != 0) && (MEMWB_rd_addr == IDEX_rs1_addr) ) begin
      o_fwa = `FW_MUX_WB; // Forward from WB stage
    end

    // Forwarding for rs2
    if (EXMEM_rd_wren && (EXMEM_rd_addr == IDEX_rs2_addr) && (EXMEM_rd_addr != 0)) begin
      o_fwb = `FW_MUX_EXMEM_ALU; // Forward from MEM stage
    end else if (MEMWB_rd_wren && (MEMWB_rd_addr != 0) && (MEMWB_rd_addr == IDEX_rs2_addr) ) begin
      o_fwb = `FW_MUX_WB; // Forward from WB stage
    end
  end
  endmodule
