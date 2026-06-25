`include "./include/filelist.svh"
module pc_gen(
  input  logic i_clk, i_rst_n,
               i_pc_sel, i_pc_en,
  input  logic [XLEN-1:0] i_fixed_pc,
  output logic [XLEN-1:0] o_pc,
  input  branch_predict_bus_o o_branch_predict_bus
);

logic [XLEN-1:0] next_pc, pc;

    // Combinational logic for next PC selection
    always_comb begin
        if (i_pc_sel==`PC_SEL_ALU) begin
            // On mispredict: reload with correct PC
            next_pc = i_fixed_pc;
        end else begin
            // Normal operation: use prediction if valid
            if (o_branch_predict_bus.btb_hit && o_branch_predict_bus.prediction) begin
                next_pc = o_branch_predict_bus.predict_target_pc; // Use target PC from BTB if hit
            end else begin
                next_pc = pc + 4;
            end
        end
    end

    // Sequential PC register update
    always_ff @(posedge i_clk) begin
        if (!i_rst_n) begin
            pc <= '0;
        end else if (i_pc_en) begin
            pc <= next_pc;
        end
    end
    always_comb begin
        o_pc = pc;
    end

endmodule : pc_gen
