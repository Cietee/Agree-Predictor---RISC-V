`include "./include/filelist.svh"
// Branch History Register
module bhr_module (
    input logic i_clk,
    input logic i_rst_n,
    input logic i_update_en,
    input logic i_actual_taken, // 1=Taken, 0=Not Taken
    
    output logic [GHR_BITS-1:0] bhr_out
);

    logic [GHR_BITS-1:0] global_bhr;

    always_ff @(posedge i_clk or negedge i_rst_n) begin
        if (!i_rst_n) begin
            global_bhr <= '0;
        end else if (i_update_en) begin
            global_bhr <= {global_bhr[GHR_BITS-2:0], i_actual_taken};
        end
    end

    assign bhr_out = global_bhr;
endmodule