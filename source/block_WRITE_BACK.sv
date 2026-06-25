
`include "./include/filelist.svh"
module block_WRITE_BACK (
  input  logic [XLEN-1:0] i_lsu_data,
  input  logic [     1:0] i_bit_mask,
  input  logic            i_signed_op,
  input  logic [     1:0] i_wb_sel,
  input  logic [XLEN-1:0] i_alu_data, i_pc,                           
  output logic [XLEN-1:0] o_wb_data
);

  logic [XLEN-1:0] pc4, lsu_data; 
  sign_extend mask_module(
    .i_data    (i_lsu_data),
    .i_bit_mask(i_bit_mask),
    .i_signed_flag  (i_signed_op),
    .o_data    (lsu_data)
  );
  full_adder_nbit PCplus4(
    .i_a(i_pc),
    .i_b(32'h4),
    .o_sum(pc4),
    .o_carry()
  );
  always_comb begin
    case(i_wb_sel)
      `WB_SEL_PC4 : o_wb_data = pc4;
      `WB_SEL_ALU : o_wb_data = i_alu_data;
      `WB_SEL_LSU : o_wb_data = lsu_data;
      default    : o_wb_data = 32'b0;
    endcase
  end
endmodule
