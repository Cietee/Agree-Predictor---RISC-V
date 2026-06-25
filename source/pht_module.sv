`include "./include/filelist.svh"
module pht_module(
    input  logic                   i_clk,
    input  logic                   i_rst_n,
// Prediction
    input  logic [INDEX_BITS-1:0]       pht_index,
    output logic                   o_prediction, o_pht_weak_state,
// Update
    input  logic                   i_update_direct_en,
    input  logic [INDEX_BITS-1:0]  update_pht_index,
    input  logic                   i_update_taken
);
localparam TABLE_SIZE = 1 << INDEX_BITS;
logic [1:0] pht_counter [0:TABLE_SIZE-1];
logic [INDEX_BITS-1:0] index_pred, index_update;
logic mis_agree;
assign index_pred = pht_index;
assign mis_agree  = !(i_update_taken == pht_counter[update_pht_index][1]);
always_comb begin
    o_prediction = pht_counter[index_pred][1];
end

assign o_pht_weak_state = ((pht_counter[index_pred] == 2'b01) | (pht_counter[index_pred]== 2'b10));
always_ff @(posedge i_clk) begin
    if (!i_rst_n) begin
        for (int i = 0; i < TABLE_SIZE; ++i)
            pht_counter[i] = 2'b11;
    end else if (i_update_direct_en) begin
        if (i_update_taken && pht_counter[update_pht_index] != 2'b11) begin
                pht_counter[update_pht_index] <= pht_counter[update_pht_index] + 1;
        end else if( i_update_taken && pht_counter[update_pht_index] != 2'b00) begin
                pht_counter[update_pht_index] <= pht_counter[update_pht_index] - 1;
        end
    end
end

endmodule
