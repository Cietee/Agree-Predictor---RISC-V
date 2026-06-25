`include "./include/filelist.svh"// Bias Bit Table
module bbt_module(
    input logic i_clk,
    input logic i_rst_n,
        
    // Access
    input logic [INDEX_BITS-1:0] bbt_index, update_bbt_index,
    output logic biasing_bit_out,
    
    // Update
    input logic i_update_en,
    input logic i_actual_taken,
    input logic pht_is_weak
);

    localparam int BBT_SIZE = 1 << INDEX_BITS;
    typedef struct packed {
      logic bias;
      logic valid;  
    } bbt_entry;
    bbt_entry bbt_table [0:BBT_SIZE-1];
    /*
    logic Biasing_Bits [0:BBT_SIZE-1];
    logic Biasing_Bits_Count [0:BBT_SIZE-1]; */
    assign biasing_bit_out = bbt_table[bbt_index].bias;

    always_ff @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            for (int i = 0; i < BBT_SIZE; i++) begin
                bbt_table[i].bias = 1'b0;
                bbt_table[i].valid = 1'b0;
            end
        end else if (i_update_en) begin
                bbt_table[update_bbt_index].bias <= i_actual_taken;
                bbt_table[update_bbt_index].valid <= 1'b1;
        end
    end
endmodule