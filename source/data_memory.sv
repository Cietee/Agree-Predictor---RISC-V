  `include "./include/filelist.svh"
  module data_memory (
    input  logic             i_clk, 
                             i_rst_n,
    input  logic [XLEN-1:0] i_lsu_addr, i_st_data,
    input  logic             i_lsu_wren,
    input  logic [      1:0] i_bit_mask,
    output logic [XLEN-1:0] o_memory_data,
    output logic             o_memory_select
  );

  logic [7:0] memory [MEM_SIZE-1:0];
  localparam MEM_BASE  = 32'h0000;
  localparam MEM_RANGE = 32'h3FFF;// 16KB memory range

  logic mem_base_eq, mem_base_gt, mem_range_lt, mem_range_eq, mem_select;
  logic [3:0][7:0] bit_masked_data;
  logic [XLEN-1:0] addr1, addr2, addr3;
  comparator MEM_BASEcmp (
    .i_a        (i_lsu_addr), 
    .i_b        (MEM_BASE), 
    .i_signed   (`UNSIGNED_FLAG),
    .o_lessthan (mem_base_gt), 
    .o_equal    (mem_base_eq)
  );
  comparator MEM_RANGEcmp (
    .i_a        (i_lsu_addr), 
    .i_b        (MEM_RANGE), 
    .i_signed   (`UNSIGNED_FLAG),
    .o_lessthan (mem_range_lt), 
    .o_equal    (mem_range_eq)
  );
  assign mem_select = ((~mem_base_gt)&mem_range_lt)|mem_base_eq|mem_range_eq;
  always_comb begin
    unique case (i_bit_mask)
      `BIT_MASK_BYTE    : begin
        bit_masked_data[0] = i_st_data[7:0];
        bit_masked_data[1] = memory[addr1];
        bit_masked_data[2] = memory[addr2];
        bit_masked_data[3] = memory[addr3];
      end
      `BIT_MASK_HALFWORD: begin
        bit_masked_data[0] = i_st_data[7:0];
        bit_masked_data[1] = i_st_data[15:8];
        bit_masked_data[2] = memory[addr2];
        bit_masked_data[3] = memory[addr3];
      end
      `BIT_MASK_WORD    : bit_masked_data = i_st_data;
      default : bit_masked_data = 32'b0;
    endcase
  end
  full_adder_nbit MemPlus1 (
    .i_a(i_lsu_addr),
    .i_b(32'h1),
    .o_sum(addr1),
    .o_carry()
  );
  full_adder_nbit MemPlus2 (
    .i_a(i_lsu_addr),
    .i_b(32'h2),
    .o_sum(addr2),
    .o_carry()
  );
  full_adder_nbit MemPlus3 (
    .i_a(i_lsu_addr),
    .i_b(32'h3),
    .o_sum(addr3),
    .o_carry()
  );
  always_ff @(posedge i_clk) begin
    if (!i_rst_n) begin
      for (int i = 0; i < MEM_SIZE; i++) begin
        memory[i] = '0;
      end
    end else if (i_lsu_wren && mem_select) begin
        memory[i_lsu_addr]  <= bit_masked_data[0];
        memory[     addr1]  <= bit_masked_data[1];
        memory[     addr2]  <= bit_masked_data[2];
        memory[     addr3]  <= bit_masked_data[3]; 
    end
  end
  always_comb begin
    o_memory_data = {memory[addr3], memory[addr2],
                     memory[addr1], memory[i_lsu_addr]} ;
    o_memory_select = mem_select;
  end

  endmodule
