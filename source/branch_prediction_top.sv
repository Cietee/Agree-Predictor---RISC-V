`include "./include/filelist.svh"
module branch_prediction_top #(
    parameter A_BBT = 7,
    parameter A_PHT = 8
) (
    input  logic                i_clk,
    input  logic                i_rst_n,
    input  logic [31:0]         i_pc,
    input  logic [A_BBT-1:0]    update_bbt_index,
    input  logic [A_PHT-1:0]    update_pht_index,
    input  branch_predict_bus_i i_branch_predict_bus,
    output branch_predict_bus_o o_branch_predict_bus,
    output logic [A_BBT-1:0] o_pht_index,
    output logic [A_PHT-1:0] o_bbt_index
);

agree_predict agree_unit (
    .i_clk,
    .i_rst_n,
    .i_pc,
    .o_pht_index,
    .o_bbt_index,
    .o_prediction(o_branch_predict_bus.prediction),
    .i_update_en(i_branch_predict_bus.update_en),
    .i_update_pc(i_branch_predict_bus.update_pc),
    .i_update_taken(i_branch_predict_bus.update_taken),
    .i_mispredict_direct(i_branch_predict_bus.mispredict_direct),
    .update_pht_index,
    .update_bbt_index
);

btb btb_unit (
    .i_clk,
    .i_rst_n,
    .i_pc,
    .i_update_target_en(i_branch_predict_bus.mispredict_target&i_branch_predict_bus.update_en),
    .i_update_pc(i_branch_predict_bus.update_pc),
    .i_update_target_pc(i_branch_predict_bus.update_target_pc), // Assuming no target PC update for BTB
    .o_target_pc(o_branch_predict_bus.predict_target_pc),
    .o_btb_hit  (o_branch_predict_bus.btb_hit)
);
endmodule
