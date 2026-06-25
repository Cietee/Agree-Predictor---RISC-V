`ifndef MY_RISCV_DEFS_SVH
`define MY_RISCV_DEFS_SVH

// ==========[ Global Parameters ]==========
parameter XLEN        = 32;         // Register/Data width
parameter REG_ADDR_W  = 5;          // 32 registers => 5-bit address
parameter ALU_OP_W    = 4;          // Width of ALU operation encoding
parameter MEM_ADDR_W  = 14;         // Memory size 16KB => 14-bit address
parameter MEM_DATA_W  = XLEN;       // Memory data width (same as XLEN)
parameter MEM_SIZE    = 2**MEM_ADDR_W; // Memory size in bytes
parameter GHR_BITS = 10;
parameter A_PHT = 10;   // INDEX_BITS
parameter N_BHR   = 10; // GHR_BITS
parameter A_BBT   = 10;  // BIAS
// ==========[ Index and Tag bits for BTB ]==========
parameter INDEX_BITS  = 10;         // Number of entries in BTB (1024 entries)
parameter TAG_BITS    = XLEN - INDEX_BITS; // Remaining bits for tag
parameter COUNTER_BITS = 2; // BHT counter bits (2 bits for bimodal predictor)
// ==========[BRANCH PREDICT]===========
`define MIS_PREDICT 1'b1
`define NOT_MIS_PREDICT 1'b0
// ==========[ PC Generator options ]==========
`define PC_SEL_ALU 1'b1
`define PC_SEL_PC4 1'b0
// ==========[ FLAGS selections ]==========
`define OPA_RS1 1'b1
`define OPA_PC4 1'b0
`define OPB_RS2 1'b1
`define OPB_IMMEDIATE 1'b0

`define RD_WRITE 1'b1
`define RD_READ  1'b0
`define LSU_READ 1'b0
`define LSU_WRITE 1'b1

`define SIGNED_FLAG 1'b1
`define UNSIGNED_FLAG 1'b0

`define BRANCH_TAKEN 1'b1
`define BRANCH_NOT_TAKEN 1'b0

`define FW_MUX_NONE       2'b00
`define FW_MUX_RS         2'b01
`define FW_MUX_EXMEM_ALU  2'b10
`define FW_MUX_WB         2'b11

// ==========[NOP instruction and MUX selection]==========
`define NOP 32'h00000013 // NOP instruction (addi x0, x0, 0)
`define MUX_NOP 1'b1
`define MUX_INSTR 1'b0


// ==========[ Opcodes (RISC-V Base RV32I) ]==========
`define OPCODE_LUI     7'b0110111
`define OPCODE_AUIPC   7'b0010111
`define OPCODE_JAL     7'b1101111
`define OPCODE_JALR    7'b1100111
`define OPCODE_BRANCH  7'b1100011
`define OPCODE_LOAD    7'b0000011
`define OPCODE_STORE   7'b0100011
`define OPCODE_ALU_IMM 7'b0010011
`define OPCODE_ALU_REG 7'b0110011

// ==========[ Funct3 (RISC-V Base RV32I) ]==========
// Branch Function 3
`define FUNCT3_BEQ  3'b000
`define FUNCT3_BNE  3'b001
`define FUNCT3_BLT  3'b100
`define FUNCT3_BGE  3'b101
`define FUNCT3_BLTU 3'b110
`define FUNCT3_BGEU 3'b111

// ALU Function 3
`define FUNCT3_ADD_SUB  3'b000
`define FUNCT3_AND  3'b111
`define FUNCT3_OR   3'b110
`define FUNCT3_XOR  3'b100
`define FUNCT3_SLT  3'b010
`define FUNCT3_SLL  3'b001
`define FUNCT3_SRL_SRA  3'b101
`define FUNCT3_SLTU 3'b011
`define FUNCT3_SLLI 3'b001
`define FUNCT3_SRLI_SRAI 3'b101
// LOAD/STORE Function 3
`define FUNCT3_LB   3'b000
`define FUNCT3_LH   3'b001
`define FUNCT3_LW   3'b010
`define FUNCT3_LBU  3'b100
`define FUNCT3_LHU  3'b101
`define FUNCT3_SB   3'b000
`define FUNCT3_SH   3'b001
`define FUNCT3_SW   3'b010
// Function 7
`define FUNCT7_0 7'b0000000
`define FUNCT7_1 7'b0100000


// ==========[ ALU Operations ]==========
`define ALU_ADD 4'b0000
`define ALU_SUB 4'b1000
`define ALU_AND 4'b0111
`define ALU_OR  4'b0110
`define ALU_XOR 4'b0100
`define ALU_SLT 4'b0010
`define ALU_SLTU 4'b0011
`define ALU_SLL 4'b0001
`define ALU_SRL 4'b0101
`define ALU_SRA 4'b1101
`define ALU_AUI 4'b1010
`define ALU_LUI 4'b1001


// ==========[ WB Select (MUX output to WB stage) ]==========
`define WB_SEL_PC4 2'b00
`define WB_SEL_ALU 2'b01
`define WB_SEL_LSU 2'b10
`define WB_SEL_NONE 2'b11
  
// ==========[ Bit Mask ]==========
`define BIT_MASK_NONE     2'b11
`define BIT_MASK_BYTE     2'b00
`define BIT_MASK_HALFWORD 2'b01
`define BIT_MASK_WORD     2'b10

`endif // MY_RISCV_DEFS_SVH
