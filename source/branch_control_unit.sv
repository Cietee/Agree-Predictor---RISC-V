
`include "./include/filelist.svh"
module branch_control_unit #(
  parameter WIDTH = XLEN
)(
  input  logic [WIDTH-1:0] i_instr, i_rs1_data, i_rs2_data, 
  output logic             o_branch_taken, o_is_branch
);
  

  logic      br_un, br_less, br_equal;

  logic [6:0] opcode;
  logic [2:0] funct3;
  assign opcode = i_instr[6:0];
  assign funct3 = i_instr[14:12];
  always_comb begin
    if (opcode == `OPCODE_BRANCH)
        br_un = (funct3==`FUNCT3_BLTU||funct3==`FUNCT3_BGEU)?`UNSIGNED_FLAG:`SIGNED_FLAG;
    else br_un = `SIGNED_FLAG;
  end
  comparator branch_compare (
    .i_a       (i_rs1_data), 
    .i_b       (i_rs2_data), 
    .i_signed  (br_un),
    .o_lessthan(br_less), 
    .o_equal   (br_equal)
  );   
  always_comb begin
    if (opcode == `OPCODE_BRANCH) begin
      unique case (funct3)
        `FUNCT3_BEQ    : o_branch_taken = br_equal;
        `FUNCT3_BNE    : o_branch_taken = ~br_equal;
        `FUNCT3_BLT    : o_branch_taken = br_less;
        `FUNCT3_BGE    : o_branch_taken = ~(br_less|br_equal);
        `FUNCT3_BLTU   : o_branch_taken = br_less;
        `FUNCT3_BGEU   : o_branch_taken = ~br_less|br_equal;
        default: o_branch_taken = `BRANCH_NOT_TAKEN;
      endcase
    end else o_branch_taken = opcode==`OPCODE_JAL||opcode==`OPCODE_JALR;
  end
  assign o_is_branch = opcode==`OPCODE_BRANCH||opcode==`OPCODE_JAL||opcode==`OPCODE_JALR;

  endmodule
  
