
`include "./include/filelist.svh" 

module control_unit #(
  parameter WIDTH     = XLEN
)(                   
  input  logic [WIDTH-1:0] i_instr,
  output control_unit_bus_o o_ctrl
  );

  logic [6:0] opcode, funct7;
  logic [2:0] funct3;
  assign opcode = i_instr[6:0];
  assign funct3 = i_instr[14:12];
  assign funct7 = i_instr[31:25];
  always_comb begin   
    o_ctrl.rd_wren   = `RD_READ;      
    o_ctrl.instr_vld = 1'b0;       
    o_ctrl.opa_sel   = `OPA_RS1;      
    o_ctrl.opb_sel   = `OPB_RS2;       
    o_ctrl.alu_op    = 4'b1111;   
    o_ctrl.lsu_wren  = `LSU_READ;       
    o_ctrl.bit_mask  = `BIT_MASK_NONE;   
    o_ctrl.wb_sel    = `WB_SEL_NONE;     
    o_ctrl.signed_flag = `SIGNED_FLAG;  
    case (opcode)
      `OPCODE_LUI: begin
        o_ctrl.rd_wren   = `RD_WRITE;
        o_ctrl.instr_vld = 1'b1;
        o_ctrl.opb_sel   = `OPB_IMMEDIATE;
        o_ctrl.alu_op    = `ALU_LUI;
        o_ctrl.wb_sel    = `WB_SEL_ALU;
      end
      `OPCODE_AUIPC: begin
        o_ctrl.rd_wren   = `RD_WRITE;
        o_ctrl.instr_vld = 1'b1;
        o_ctrl.opa_sel   = `OPA_PC4;
        o_ctrl.opb_sel   = `OPB_IMMEDIATE;
        o_ctrl.alu_op    = `ALU_AUI;
        o_ctrl.wb_sel    = `WB_SEL_ALU;
      end
      `OPCODE_JAL: begin
        o_ctrl.rd_wren    = `RD_WRITE;
        o_ctrl.instr_vld  = 1'b1;
        o_ctrl.opa_sel    = `OPA_PC4;
        o_ctrl.opb_sel    = `OPB_IMMEDIATE;
        o_ctrl.alu_op     = `ALU_ADD;
        o_ctrl.wb_sel     = `WB_SEL_PC4;
      end
      `OPCODE_JALR: begin
        o_ctrl.rd_wren    = `RD_WRITE;
        o_ctrl.instr_vld  = funct3==3'b000; // JALR only valid if funct3 is 000
        o_ctrl.opa_sel    = `OPA_RS1;
        o_ctrl.opb_sel    = `OPB_IMMEDIATE;
        o_ctrl.alu_op     = `ALU_ADD;
        o_ctrl.wb_sel     = `WB_SEL_PC4;
      end
      `OPCODE_BRANCH: begin
        case (funct3)
          `FUNCT3_BEQ, `FUNCT3_BNE, `FUNCT3_BLT, `FUNCT3_BGE,
          `FUNCT3_BLTU, `FUNCT3_BGEU: o_ctrl.instr_vld  = 1'b1;
           default: o_ctrl.instr_vld  = 1'b0;
        endcase
        o_ctrl.opa_sel    = `OPA_PC4;
        o_ctrl.opb_sel    = `OPB_IMMEDIATE;
        o_ctrl.alu_op     = `ALU_ADD;
      end
      `OPCODE_LOAD: begin
        o_ctrl.rd_wren    = `RD_WRITE;
        o_ctrl.opa_sel    = `OPA_RS1;
        o_ctrl.opb_sel    = `OPB_IMMEDIATE;
        o_ctrl.alu_op     = `ALU_ADD;
        o_ctrl.lsu_wren   = `LSU_READ;
        o_ctrl.wb_sel     = `WB_SEL_LSU;
        case (funct3)
          `FUNCT3_LB     : begin
            o_ctrl.bit_mask   = `BIT_MASK_BYTE;
            o_ctrl.signed_flag = `SIGNED_FLAG;
            o_ctrl.instr_vld  = 1'b1;
          end
          `FUNCT3_LH     : begin
            o_ctrl.bit_mask   = `BIT_MASK_HALFWORD;
            o_ctrl.signed_flag = `SIGNED_FLAG;
            o_ctrl.instr_vld  = 1'b1;
          end
          `FUNCT3_LW     : begin
            o_ctrl.bit_mask   = `BIT_MASK_WORD;
            o_ctrl.signed_flag = `SIGNED_FLAG;
            o_ctrl.instr_vld  = 1'b1;
          end
          `FUNCT3_LBU    : begin
            o_ctrl.bit_mask   = `BIT_MASK_BYTE;
            o_ctrl.signed_flag = `UNSIGNED_FLAG;
            o_ctrl.instr_vld  = 1'b1;
          end
          `FUNCT3_LHU    : begin
            o_ctrl.bit_mask   = `BIT_MASK_HALFWORD;
            o_ctrl.signed_flag = `UNSIGNED_FLAG;
            o_ctrl.instr_vld  = 1'b1;
          end
          default: begin
            o_ctrl.bit_mask   = `BIT_MASK_NONE;
            o_ctrl.signed_flag = `SIGNED_FLAG;
            o_ctrl.instr_vld  = 1'b0;
          end
        endcase
      end
      `OPCODE_STORE: begin
        o_ctrl.rd_wren    = `RD_READ; // Store does not write to register file
        o_ctrl.opa_sel    = `OPA_RS1;
        o_ctrl.opb_sel    = `OPB_IMMEDIATE;
        o_ctrl.alu_op     = `ALU_ADD;
        o_ctrl.lsu_wren   = `LSU_WRITE;
        o_ctrl.signed_flag= `SIGNED_FLAG;
        case (funct3)
          `FUNCT3_SB     : begin
            o_ctrl.bit_mask   = `BIT_MASK_BYTE;
            o_ctrl.instr_vld  = 1'b1;
          end
          `FUNCT3_SH     : begin
            o_ctrl.bit_mask   = `BIT_MASK_HALFWORD;
            o_ctrl.instr_vld  = 1'b1;
          end
          `FUNCT3_SW     : begin
            o_ctrl.bit_mask   = `BIT_MASK_WORD;
            o_ctrl.instr_vld  = 1'b1;
          end
          default: begin
            o_ctrl.bit_mask   = `BIT_MASK_NONE;
            o_ctrl.instr_vld  = 1'b0;
          end
        endcase
      
      end
      `OPCODE_ALU_IMM: begin
        o_ctrl.rd_wren  = `RD_WRITE; 
        o_ctrl.opa_sel  = `OPA_RS1;
        o_ctrl.opb_sel  = `OPB_IMMEDIATE;
        o_ctrl.lsu_wren = `LSU_READ;
        o_ctrl.wb_sel   = `WB_SEL_ALU;   
        case (funct3)
          `FUNCT3_SLLI: begin
            o_ctrl.alu_op = {i_instr[30], funct3};
            o_ctrl.instr_vld = funct7==`FUNCT7_0; // SLL/SRL valid if funct7 is 0000000
          end
          `FUNCT3_SRLI_SRAI: begin
            o_ctrl.alu_op = {i_instr[30], funct3}; // SRA operation
            o_ctrl.instr_vld = funct7==`FUNCT7_1||funct7==`FUNCT7_0;
          end
          `FUNCT3_ADD_SUB, `FUNCT3_AND, `FUNCT3_OR, `FUNCT3_XOR,
          `FUNCT3_SLT, `FUNCT3_SLTU: begin
            o_ctrl.alu_op    = {1'b0, funct3};
            o_ctrl.instr_vld = 1'b1;
          end
          default: begin
            o_ctrl.alu_op    = `ALU_ADD;
            o_ctrl.instr_vld = 1'b0;
          end
        endcase    
      end
      `OPCODE_ALU_REG: begin
        o_ctrl.rd_wren  = `RD_WRITE;
        o_ctrl.alu_op   = {i_instr[30], funct3};
        o_ctrl.opa_sel  = `OPA_RS1;
        o_ctrl.opb_sel  = `OPB_RS2;
        o_ctrl.lsu_wren = `LSU_READ;
        o_ctrl.wb_sel   = `WB_SEL_ALU;
        case (funct3)
          `FUNCT3_SLL, `FUNCT3_AND, `FUNCT3_OR,
          `FUNCT3_XOR, `FUNCT3_SLT, `FUNCT3_SLTU:
            o_ctrl.instr_vld = funct7==`FUNCT7_0; 
          `FUNCT3_ADD_SUB, `FUNCT3_SRL_SRA: 
            o_ctrl.instr_vld = funct7==`FUNCT7_1||funct7==`FUNCT7_0;
           default      : o_ctrl.instr_vld = 1'b0;
        endcase  
      end
      default: begin
        o_ctrl.rd_wren     = `RD_READ;      
        o_ctrl.instr_vld   = 1'b0;       
        o_ctrl.opa_sel     = `OPA_RS1;      
        o_ctrl.opb_sel     = `OPB_RS2;       
        o_ctrl.alu_op      = 4'b1111;   
        o_ctrl.lsu_wren    = `LSU_READ;       
        o_ctrl.bit_mask    = `BIT_MASK_NONE;   
        o_ctrl.wb_sel      = `WB_SEL_NONE;     
        o_ctrl.signed_flag = `SIGNED_FLAG;  
      end
    endcase
  end
endmodule
