`include "./include/filelist.svh"
module pipe_IFID(
    input  logic  i_clk, i_rst_n, i_IFID_en, 
    input  logic [XLEN-1:0] i_pc,
    input  logic [XLEN-1:0] i_instr,
    input  logic            i_predict_direct, i_is_mispredict,
    output logic [XLEN-1:0] o_IFID_pc,
    output logic [XLEN-1:0] o_IFID_instr,
    output logic            o_IFID_predict_direct, o_IFID_is_mispredict
  );
  logic [XLEN-1:0] pc, instr;
  logic predict_direct, misprediction;

  always_ff @(posedge i_clk) begin
    if (~i_rst_n) begin
      instr  <= 'b0;
      pc     <= 'b0;
      predict_direct <= 'b0;
      misprediction <= 'b0;
    end else if (i_IFID_en) begin
      instr  <= i_instr;
      pc     <= i_pc;
      predict_direct <= i_predict_direct;
      misprediction <= i_is_mispredict;
    end
  end
  always_comb begin
    o_IFID_instr = instr;
    o_IFID_pc    = pc;
    o_IFID_predict_direct = predict_direct;
    o_IFID_is_mispredict = misprediction;
  end  
  endmodule
