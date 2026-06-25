  `include "./include/filelist.svh"
  module alu (
    input  logic [  XLEN-1:0] i_operand_a, i_operand_b,
    input  logic [ALU_OP_W-1:0] i_alu_op,  // [4]: instruction[30], [3:1] instruction[14:12]
    output logic [  XLEN-1:0] o_alu_data
  );
  
  logic [XLEN-1:0]  sll_data, sra_data, srl_data, sum, diff;
  logic              equal, less,
                     u_equal, u_less;


  full_adder_nbit #(.WIDTH(XLEN)) full_adder(
    .i_a(i_operand_a),
    .i_b(i_operand_b), 
    .o_sum(sum),
    .o_carry() 
  );

  full_subtractor_nbit full_subtractor(
    .i_a(i_operand_a),
    .i_b(i_operand_b), 
    .o_diff(diff),
    .o_borrow() 
  );
  
  comparator unsigned_compare (
    .i_a(i_operand_a), 
    .i_b(i_operand_b),
    .i_signed(1'b0), 
    .o_lessthan(u_less),
    .o_equal(u_equal)       // 1 - less than
  );

  comparator signed_compare (
    .i_a(i_operand_a), 
    .i_b(i_operand_b),
    .i_signed(1'b1), 
    .o_lessthan(less),
    .o_equal(equal)       // 1 - less than
  );
 
  srl_module srl_module(
    .i_data(i_operand_a),
    .i_imme(i_operand_b[4:0]),
    .o_data(srl_data)
  );
  sra_module sra_module(
    .i_data(i_operand_a),
    .i_imme(i_operand_b[4:0]),
    .o_data(sra_data)
  );
  sll_module sll_module(
    .i_data(i_operand_a),
    .i_imme(i_operand_b[4:0]),
    .o_data(sll_data)
  );

  always_comb begin 
    case (i_alu_op)
      `ALU_LUI  : o_alu_data = i_operand_b;
      `ALU_AUI  : o_alu_data = sum;
      `ALU_ADD  : o_alu_data = sum;
      `ALU_SUB  : o_alu_data = diff;
      `ALU_SLL  : o_alu_data = sll_data;
      `ALU_SLT  : o_alu_data = {31'b0, less};
      `ALU_SLTU : o_alu_data = {31'b0, u_less};
      `ALU_XOR  : o_alu_data = i_operand_a^i_operand_b;
      `ALU_SRL  : o_alu_data = srl_data;
      `ALU_SRA  : o_alu_data = sra_data;
      `ALU_OR   : o_alu_data = i_operand_a|i_operand_b;
      `ALU_AND  : o_alu_data = i_operand_a&i_operand_b;
      default  : o_alu_data = 32'b0;
    endcase
  end
  endmodule
      
