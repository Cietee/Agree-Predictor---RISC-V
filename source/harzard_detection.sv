`include "./include/filelist.svh"
module harzard_detection ( 
  input  harzard_bus_i i_harzard_bus,
  output harzard_bus_o o_harzard_bus          
);
  logic is_IDEX_load, is_branch_jump, is_IFID_load;
  logic is_mispredict, mispredict_direct, mispredict_target;
  always_comb begin
    is_IFID_load = i_harzard_bus.IFID_instruction[6:0]==`OPCODE_LOAD;
    is_IDEX_load = i_harzard_bus.IDEX_instruction[6:0]==`OPCODE_LOAD;
    is_branch_jump = i_harzard_bus.branch_taken & i_harzard_bus.is_branch;
    if (i_harzard_bus.is_branch) begin
      mispredict_direct = (i_harzard_bus.IDEX_predict_direct != i_harzard_bus.branch_taken)? `MIS_PREDICT: `NOT_MIS_PREDICT;
      mispredict_target = (i_harzard_bus.predict_target != i_harzard_bus.actual_target)? `MIS_PREDICT: `NOT_MIS_PREDICT;
    end else begin
      mispredict_direct = `NOT_MIS_PREDICT;
      mispredict_target = `NOT_MIS_PREDICT;
    end
    is_mispredict = mispredict_direct?`MIS_PREDICT:mispredict_target;
  end

  always_comb begin
    o_harzard_bus.pc_en = (is_branch_jump&is_mispredict)? 'b1: (is_IFID_load&~mispredict_direct)? 'b0 : 'b1; // stall 1cycle if load instruction in IFID or IDEX stage
    o_harzard_bus.pc_sel = is_branch_jump&is_mispredict ? `PC_SEL_ALU : `PC_SEL_PC4;
    o_harzard_bus.nop_sel = (is_IDEX_load|(i_harzard_bus.is_branch&mispredict_direct)) ? `MUX_NOP : `MUX_INSTR;  
    o_harzard_bus.mispredict_direct = mispredict_direct;
    o_harzard_bus.mispredict_target = mispredict_target;
    o_harzard_bus.misprediction = i_harzard_bus.is_branch&mispredict_direct;
  end 

  endmodule
