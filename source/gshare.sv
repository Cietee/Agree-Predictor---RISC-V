`include "./include/filelist.svh"
module gshare(
    input  logic                   i_clk,
    input  logic                   i_rst_n,
// Prediction
    input  logic [31:0]            i_pc,
    output logic                   agree_bit,
    output logic [INDEX_BITS-1:0]  o_index_pc,
// Update
    input  logic                   i_update_direct_en,
    input  logic [INDEX_BITS-1:0]  i_update_index_pc,
    input  logic                   i_update_taken,
    input  logic                   biasing_bit
);

    localparam PHT_SIZE = 1 << INDEX_BITS;

    // Pattern History Table: array of 2-bit counters
    logic [COUNTER_BITS-1:0] pht [PHT_SIZE-1:0];

    // Global History Register
    logic [GHR_BITS-1:0] ghr;
    logic [INDEX_BITS-1:0] index_pred;
    logic [GHR_BITS-1:0] ghr_next;

    // Prediction index
    assign index_pred = i_pc[INDEX_BITS+1:2] ^ ghr;
    assign agree_bit = pht[index_pred][COUNTER_BITS-1];  // MSB of counter
    assign o_index_pc = index_pred;

    // Update logic

    always_ff @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            for (int i = 0; i < PHT_SIZE; ++i)
            pht[i] = 2'b01; // Weak not taken
            ghr <= '0;
        end else begin
            if (i_update_direct_en) begin
                // Update counter
                if ( (i_update_taken) && (pht[i_update_index_pc] != 2'b11)) begin
                        pht[i_update_index_pc] <= pht[i_update_index_pc] + 1;
                end else if ((!i_update_taken) && (pht[i_update_index_pc] != 2'b00)) begin
                        pht[i_update_index_pc] <= pht[i_update_index_pc] - 1;
                end
                // Update GHR
                ghr <= {ghr[GHR_BITS-2:0], i_update_taken};
            end
        end
    end


endmodule
