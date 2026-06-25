
`include "./include/my_riscv_defs.svh"
`ifndef RISCV_BUS_SVH
`define RISCV_BUS_SVH

// ==========[ Control Unit Bus ]==========
typedef struct packed {
  logic             rd_wren; // Register write enable       0
  logic             instr_vld; // Instruction valid signal  1
  logic             opa_sel; // Operand A selection         2
  logic             opb_sel; // Operand B selection         3
  logic [ALU_OP_W-1:0] alu_op; // ALU operation code        4 5 6 7
  logic             lsu_wren; // LSU write enable           8
  logic [1:0]       bit_mask; // Bit mask for LSU operations9 10
  logic [1:0]       wb_sel; // Write-back selection         11 12
  logic             signed_flag; // Sign extension flag     13
} control_unit_bus_o;

// ==========[ Decode Bus ]==========
// This bus carries the decoded instruction and register data
// to the execution stage.
// It includes control signals, register addresses, and data.
// It is used to pass information from the decode stage to the execute stage.
// for DECODE.sv, IDEX_pipe.sv
typedef struct packed {
    logic [REG_ADDR_W-1:0] rd_addr;
    logic [XLEN-1:0]       rs1_data;
    logic [XLEN-1:0]       rs2_data;
    logic [XLEN-1:0]       imme_data;
    logic [REG_ADDR_W-1:0] rs1_addr;
    logic [REG_ADDR_W-1:0] rs2_addr;
} decode_bus_o;
// ==========[ EXECUTE Bus ]==========
typedef struct packed {
    logic [XLEN-1:0] alu_data;
    logic [XLEN-1:0] lsu_write_data;
    logic            branch_taken;
    logic            is_branch;
} execute_bus_o;

// ==========[ IDEX Bus ]==========
typedef struct packed {
    logic [XLEN-1:0]   instr; // Instruction to execute
    logic [XLEN-1:0]   pc; // Program counter
    decode_bus_o       decode_bus; // Decoded instruction bus
    control_unit_bus_o ctrl_bus; // Control signals
    logic              predict_direct;
} IDEX_bus;

typedef struct packed {
    execute_bus_o execute_bus; // Execute stage bus
    IDEX_bus      IDEX_pipe_bus; // IDEX stage bus
} EXMEM_bus;

typedef struct packed {
    logic            update_en;
    logic [XLEN-1:0] update_pc;
    logic            update_taken;
    logic [XLEN-1:0] update_target_pc;
    logic            mispredict_direct;
    logic            mispredict_target;
} branch_predict_bus_i;

typedef struct packed {
    logic            prediction;
    logic [XLEN-1:0] predict_target_pc;
    logic            btb_hit;
} branch_predict_bus_o;

typedef struct packed {
    logic            branch_taken;
    logic            is_branch;
    logic            IDEX_predict_direct;
    logic [XLEN-1:0] IDEX_instruction;
    logic [XLEN-1:0] IFID_instruction;
    logic [XLEN-1:0] predict_target;
    logic [XLEN-1:0] actual_target;
} harzard_bus_i;

typedef struct packed {
    logic nop_sel;
    logic pc_sel;
    logic pc_en;
    logic mispredict_direct;
    logic mispredict_target;
    logic misprediction;
} harzard_bus_o;
`endif // RISCV_BUS_SVH
