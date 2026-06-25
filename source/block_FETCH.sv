  
  `include "./include/filelist.svh"
  module block_FETCH #(
    parameter A_BBT = 7,
    parameter A_PHT = 8
)(
    input  logic i_clk, i_rst_n,
    input  logic i_pc_sel, i_pc_en,
    input  logic [XLEN-1:0] i_alu_data,
    input  logic [XLEN-1:0] i_IDEX_pc,
    output logic [XLEN-1:0] o_pc,
    output logic [XLEN-1:0] o_instr,
    output logic            o_predict_direct,
// agree index
    input  logic [A_BBT-1:0]    update_bbt_index,
    input  logic [A_PHT-1:0]    update_pht_index,
    output logic [A_BBT-1:0] o_pht_index,
    output logic [A_PHT-1:0] o_bbt_index,

    input  branch_predict_bus_i i_branch_predict_bus
  );
  branch_predict_bus_i branch_predict_bus;
  logic [XLEN-1:0] pc, fixed_pc;
  logic pc_sel;
  branch_predict_bus_o o_branch_predict_bus;
  always_comb begin
   if (i_branch_predict_bus.mispredict_direct) begin 
     if (i_branch_predict_bus.update_taken== '1) fixed_pc = i_alu_data ;
     else fixed_pc = i_IDEX_pc + 32'h4;
     pc_sel = 1'b1;
   end
   else  begin
    fixed_pc = i_alu_data;
    pc_sel = i_pc_sel;
   end
  end

  assign branch_predict_bus.update_en = i_branch_predict_bus.update_en;
  assign branch_predict_bus.update_pc = i_branch_predict_bus.update_pc;
  assign branch_predict_bus.update_target_pc = i_alu_data; // Assuming no target PC update for BTB
  assign branch_predict_bus.update_taken = i_branch_predict_bus.update_taken; // Connect output to input of pc_gen
  assign branch_predict_bus.mispredict_direct = i_branch_predict_bus.mispredict_direct;
  assign branch_predict_bus.mispredict_target = i_branch_predict_bus.mispredict_target;
 
  pc_gen pc_generator(
    .i_clk     (i_clk),
    .i_rst_n   (i_rst_n),
    .i_pc_sel  (pc_sel),
    .i_pc_en   (i_pc_en),
    .i_fixed_pc(fixed_pc),
    .o_pc (pc),
    .o_branch_predict_bus//input
  );
 
  instruction_mem instruction_memory(
    .i_raddr (pc),
    .o_rdata (o_instr)
  );

  branch_prediction_top branch_predictor (
    .i_clk(i_clk),
    .i_rst_n(i_rst_n),
    .i_pc(pc),
    .o_pht_index,
    .o_bbt_index,
    .i_branch_predict_bus(branch_predict_bus),
    .o_branch_predict_bus(o_branch_predict_bus),//output
    .update_pht_index,
    .update_bbt_index
  );
 assign o_predict_direct = o_branch_predict_bus.prediction;
 assign o_pc = pc;
  endmodule
