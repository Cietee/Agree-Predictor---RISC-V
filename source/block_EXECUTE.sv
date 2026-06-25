`include "./include/filelist.svh"

module block_EXECUTE (
  input  logic                 i_opa_sel,
  input  logic                 i_opb_sel,
  input  logic [    XLEN-1:0]  i_instr,
                               i_pc,
                               i_imme_data ,
                               i_rs1_data,
                               i_rs2_data,
  input  logic [ALU_OP_W-1:0]  i_alu_op,
  output execute_bus_o         o_execute_bus
);
  logic [XLEN-1:0] operand_a, operand_b;
  assign operand_a = i_opa_sel? i_rs1_data: i_pc;
  assign operand_b = i_opb_sel? i_rs2_data: i_imme_data;
  branch_control_unit branch_control_unit (
    .i_instr        (i_instr),
    .i_rs1_data     (i_rs1_data),
    .i_rs2_data     (i_rs2_data),
    .o_branch_taken (o_execute_bus.branch_taken), // Output branch taken signal
    .o_is_branch    (o_execute_bus.is_branch) // Output is branch signal
  );
  alu alu_module (
    .i_operand_a (operand_a), 
    .i_operand_b (operand_b),
    .i_alu_op    (i_alu_op), // [4]: instruction[30], [3:1] instruction[14:12]
    .o_alu_data  (o_execute_bus.alu_data)
  );
 assign o_execute_bus.lsu_write_data = i_rs2_data;

 endmodule
