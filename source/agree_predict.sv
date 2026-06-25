`include "./include/filelist.svh"
module agree_predict (
    input logic i_clk,
    input logic i_rst_n,
    input logic [31:0] i_pc,
    // Update
    input logic i_mispredict_direct,
    input logic [A_PHT-1:0] update_pht_index,
    input logic [A_BBT-1:0] update_bbt_index,
    input logic i_update_en,
    input logic i_update_taken,
    input logic [31:0] i_update_pc,
    // Output
    output logic [A_PHT-1:0] o_pht_index,
    output logic [A_BBT-1:0] o_bbt_index,
    output logic o_prediction
);
    logic actual_agree, biasing_bit_D, biasing_bit_E;
    logic [GHR_BITS-1:0] bhr_data;
    logic [A_PHT-1:0] pht_index, i_update_pht_index;
    logic [A_BBT-1:0] bbt_index, i_update_bbt_index;
    logic [1:0] pht_counter_data;
    logic bias;
    logic pht_is_weak;
    logic agree_bit;
    assign actual_agree = (i_update_taken == biasing_bit_E) && i_update_en;
    assign pht_index = i_pc[A_PHT+1:2] ^ bhr_data[GHR_BITS-1:0]; 
    assign o_pht_index = pht_index;
    assign i_update_pht_index = i_update_pc[A_PHT+1:2] ^ bhr_data[GHR_BITS-1:0]; 
    assign bbt_index = i_pc[INDEX_BITS+1:2]; 
    assign i_update_bbt_index = i_update_pc[INDEX_BITS+1:2];
    assign o_bbt_index = bbt_index;

    // FIXED BHR
    bhr_module branch_history_reg (
        .i_clk(i_clk),
        .i_rst_n(i_rst_n),
        .i_update_en(i_update_en),
        .i_actual_taken(i_update_taken),
        .bhr_out(bhr_data)
    );

    // FIXED PHT
    pht_module pattern_history_table(
        .i_clk,
        .i_rst_n,
        .pht_index,
        .o_prediction(agree_bit),
        .o_pht_weak_state(pht_is_weak),
        .i_update_direct_en(i_update_en),// coi lai logic cua update en
        .update_pht_index(update_pht_index),
        .i_update_taken(actual_agree)
);//*/
/*
    gshare pht_unit(
        .i_clk,
        .i_rst_n,
        // Prediction
        .i_pc,
        .agree_bit(agree_bit),
        .o_index_pc(pht_index),
        // Update
        .i_update_direct_en(i_update_en),
        .i_update_index_pc(update_pht_index),
        .i_update_taken(actual_agree),
        .biasing_bit(biasing_bit_E)
        );
    //*/
    bbt_module bias_bit_table (
        .i_clk(i_clk),
        .i_rst_n(i_rst_n),
        .bbt_index(bbt_index),
        .update_bbt_index(update_bbt_index),
        .biasing_bit_out(bias),
        .i_update_en(i_update_en&i_mispredict_direct), // update bit
        .i_actual_taken(i_actual_taken),
        .pht_is_weak
    );
    //update bias bit
    always_ff @(posedge i_clk) begin
    biasing_bit_D <= bias;
    biasing_bit_E <= biasing_bit_D;
    end
    assign o_prediction = (agree_bit) ? bias : ~bias;
endmodule