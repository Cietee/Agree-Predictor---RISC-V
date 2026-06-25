`include "./include/filelist.svh"
  module immediate_gen #(
    parameter WIDTH= XLEN
  )(
    input  logic [WIDTH-1:0] i_instr,
    output logic [WIDTH-1:0] o_imme_data
  );
  
  always_comb begin
    case (i_instr[6:0])
      `OPCODE_STORE :  o_imme_data = {{20{i_instr[31]}}, i_instr[31:25], i_instr[11:7]}; // S-type
      `OPCODE_BRANCH:  o_imme_data = {{20{i_instr[31]}}, i_instr[7], i_instr[30:25],i_instr[11:8],1'b0}; //B-type
      `OPCODE_JAL   :  o_imme_data = {{12{i_instr[31]}}, i_instr[19:12], i_instr[20], i_instr[30:21], 1'b0}; // J-type
      `OPCODE_LUI, 
      `OPCODE_AUIPC : o_imme_data = {i_instr[31:12], 12'b0};  // U-type
      default:  o_imme_data = {{20{i_instr[31]}}, i_instr[31:20]};  // I-type
    endcase
  end
  endmodule

        
