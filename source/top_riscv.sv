`include "./include/filelist.svh"
module top_riscv(
  input  logic i_clk, i_rst_n,
  input  logic [XLEN-1:0] i_io_sw, // Input from switches
  output logic [XLEN-1:0] o_io_ledr,
  output logic o_instr_vld,
  output logic o_misprediction,
  output logic [XLEN-1:0] o_lsu_addr,
  output logic [XLEN-1:0] o_lsu_data,
  output logic            o_lsu_wren,
  output logic [XLEN-1:0] o_pc_debug,
  output logic [XLEN-1:0] o_EXMEM_instruction


);

// Internal signals
logic [XLEN-1:0] fetch_pc, fetch_instr;
logic [XLEN-1:0] IFID_pc, IFID_instr;
IDEX_bus o_IDEX_bus;
decode_bus_o decode_bus;
logic [XLEN-1:0] nop_instr_mux;
control_unit_bus_o ctrl_bus;
IDEX_bus decode_stage_bus;
logic [1:0] o_fwa, o_fwb; // Forwarding signals for rs1 and rs2
logic [XLEN-1:0] fw_data_a, fw_data_b;
execute_bus_o o_execute_bus;
EXMEM_bus o_EXMEM_bus;
logic [XLEN-1:0] lsu_data;
EXMEM_bus o_MEMWB_bus;
logic [XLEN-1:0] MEMWB_lsu_data;
logic [XLEN-1:0] WB_rd_data;
branch_predict_bus_i i_branch_predict_bus;
harzard_bus_i i_harzard_bus;
harzard_bus_o o_harzard_bus;
logic predict_direct, o_IFID_predict_direct,IFID_is_mispredict;
logic check_predict_direct;

logic [INDEX_BITS-1:0] bbt_index_FD, bbt_index_DE, o_bbt_index;
logic [INDEX_BITS-1:0] pht_index_FD, pht_index_DE, o_pht_index;
// Fetch stage
block_FETCH fetch_unit (
  .i_clk     (i_clk),
  .i_rst_n   (i_rst_n),
  .i_pc_sel  (o_harzard_bus.pc_sel), // Default PC selection
  .i_pc_en   (o_harzard_bus.pc_en), // Enable PC update
  .i_alu_data(o_execute_bus.alu_data), // Use instruction from IFID stage as ALU data
  .i_IDEX_pc (o_IDEX_bus.pc),
  .o_pc      (fetch_pc),
  .o_instr   (fetch_instr),
  .o_predict_direct (predict_direct),
  .i_branch_predict_bus(i_branch_predict_bus),
  .o_pht_index,
  .o_bbt_index,
  .update_pht_index(pht_index_DE),
  .update_bbt_index(bbt_index_DE)
);
assign i_branch_predict_bus.update_en = o_execute_bus.is_branch;
assign i_branch_predict_bus.update_pc = o_IDEX_bus.pc;
assign i_branch_predict_bus.update_taken = o_execute_bus.branch_taken; // Update taken status
assign i_branch_predict_bus.update_target_pc = o_execute_bus.alu_data; // Update target PC for BTB
assign i_branch_predict_bus.mispredict_direct = o_harzard_bus.mispredict_direct;
assign i_branch_predict_bus.mispredict_target = o_harzard_bus.mispredict_target;
pipe_IFID  ifid_pipe_unit (
  .i_clk      (i_clk),
  .i_rst_n    (i_rst_n),
  .i_IFID_en  (1'b1), // Enable IFID stage
  .i_pc       (fetch_pc),
  .i_instr    (fetch_instr),
  .i_predict_direct (predict_direct),
  .i_is_mispredict (o_harzard_bus.misprediction),
  .o_IFID_pc  (IFID_pc), // Output to next stage
  .o_IFID_instr(IFID_instr), // Output to next stage
  .o_IFID_predict_direct (o_IFID_predict_direct),
  .o_IFID_is_mispredict (IFID_is_mispredict)
);

always_ff @(posedge i_clk) begin
  pht_index_FD <= o_pht_index;
  bbt_index_FD <= o_bbt_index;
end

assign i_harzard_bus.branch_taken = o_execute_bus.branch_taken;
assign i_harzard_bus.is_branch = o_execute_bus.is_branch;
assign i_harzard_bus.IDEX_predict_direct = o_IDEX_bus.predict_direct;
assign i_harzard_bus.IDEX_instruction = o_IDEX_bus.instr;
assign i_harzard_bus.IFID_instruction = nop_instr_mux;
assign i_harzard_bus.predict_target = IFID_pc;
assign i_harzard_bus.actual_target = o_execute_bus.alu_data;

logic [31:0] actual_target_1;
assign actual_target_1 = o_execute_bus.alu_data;
harzard_detection harzard_detection_unit (
  .i_harzard_bus,
  .o_harzard_bus
);

assign nop_instr_mux = o_harzard_bus.nop_sel|IFID_is_mispredict? 32'h0000_0013 : IFID_instr; // NOP instruction
block_DECODE decode_unit (
  .i_clk      (i_clk),
  .i_rst_n    (i_rst_n),
  .i_instr    (nop_instr_mux),
  .i_rd_wren  (o_MEMWB_bus.IDEX_pipe_bus.ctrl_bus.rd_wren), // Register write enable from MEMWB stage
  .i_rd_addr  (o_MEMWB_bus.IDEX_pipe_bus.decode_bus.rd_addr),
  .i_rd_data  (WB_rd_data) , // Register destination bus from writeback stage
  .o_ctrl_bus (ctrl_bus), // Control signals output
  .o_decode_bus   (decode_bus) // Output to next stage
);


 assign decode_stage_bus.decode_bus = decode_bus;
 assign decode_stage_bus.instr = nop_instr_mux;
 assign decode_stage_bus.pc = IFID_pc;  
 assign decode_stage_bus.ctrl_bus = ctrl_bus;
pipe_IDEX idex_pipe_unit (
  .i_clk         (i_clk),
  .i_rst_n       (i_rst_n),
  .i_IDEX_en     (1'b1), // Enable IDEX stage
  .i_IDEX_predict_direct(o_IFID_predict_direct),
  .i_decode_stage_bus(decode_stage_bus),
  .o_IDEX_bus        (o_IDEX_bus) // Output to next stage
);
always_ff @(posedge i_clk) begin
  pht_index_DE <= pht_index_FD;
  bbt_index_DE <= bbt_index_FD;
end
forwarding_unit forwarding_unit (
  .EXMEM_rd_wren(o_EXMEM_bus.IDEX_pipe_bus.ctrl_bus.rd_wren),//
  .EXMEM_rd_addr(o_EXMEM_bus.IDEX_pipe_bus.decode_bus.rd_addr),//
  .MEMWB_rd_wren(o_MEMWB_bus.IDEX_pipe_bus.ctrl_bus.rd_wren),//
  .MEMWB_rd_addr(o_MEMWB_bus.IDEX_pipe_bus.decode_bus.rd_addr),//
  .IDEX_rs1_addr(o_IDEX_bus.decode_bus.rs1_addr),
  .IDEX_rs2_addr(o_IDEX_bus.decode_bus.rs2_addr),
  .o_fwa(o_fwa), // Forwarding for rs1
  .o_fwb(o_fwb)  // Forwarding for rs2
);
//forwarding MUX

always_comb begin
  // Forwarding logic for rs1 and rs2
  fw_data_a = (o_fwa == `FW_MUX_EXMEM_ALU) ? o_EXMEM_bus.execute_bus.alu_data :
              (o_fwa == `FW_MUX_WB) ? WB_rd_data : o_IDEX_bus.decode_bus.rs1_data;
  fw_data_b = (o_fwb == `FW_MUX_EXMEM_ALU) ? o_EXMEM_bus.execute_bus.alu_data :
              (o_fwb == `FW_MUX_WB) ? WB_rd_data : o_IDEX_bus.decode_bus.rs2_data;
end


block_EXECUTE execute_unit (
  .i_opa_sel      (o_IDEX_bus.ctrl_bus.opa_sel),
  .i_opb_sel      (o_IDEX_bus.ctrl_bus.opb_sel),
  .i_instr        (o_IDEX_bus.instr),
  .i_pc           (o_IDEX_bus.pc),
  .i_imme_data    (o_IDEX_bus.decode_bus.imme_data),
  .i_rs1_data     (fw_data_a),
  .i_rs2_data     (fw_data_b),
  .i_alu_op       (o_IDEX_bus.ctrl_bus.alu_op),
  .o_execute_bus  (o_execute_bus)
);


pipe_EXMEM exmem_pipe_unit (
  .i_clk           (i_clk),
  .i_rst_n         (i_rst_n),
  .i_EXMEM_en      (1'b1), // Enable EXMEM stage
  .i_IDEX_bus      (o_IDEX_bus),
  .i_execute_bus   (o_execute_bus),
  .o_EXMEM_bus     (o_EXMEM_bus) // Output to next stage
);

lsu lsu_unit (
  .i_clk           (i_clk),
  .i_rst_n         (i_rst_n),
  .i_lsu_addr      (o_EXMEM_bus.execute_bus.alu_data),
  .i_st_data       (o_EXMEM_bus.execute_bus.lsu_write_data),
  .i_lsu_wren      (o_EXMEM_bus.IDEX_pipe_bus.ctrl_bus.lsu_wren),
  .i_bit_mask      (o_EXMEM_bus.IDEX_pipe_bus.ctrl_bus.bit_mask),
  .o_lsu_data      (lsu_data), // Output data to writeback stage
  .i_io_sw         (i_io_sw), // Input from switches
  .o_io_ledr       (o_io_ledr) // Output address for LSU
);

pipe_MEMWB memwb_pipe_unit (
  .i_clk           (i_clk),
  .i_rst_n         (i_rst_n),
  .i_MEMWB_en      (1'b1), // Enable MEMWB stage
  .i_EXMEM_bus     (o_EXMEM_bus),
  .i_lsu_data      (lsu_data),
  .o_MEMWB_bus     (o_MEMWB_bus), // Output to next stage
  .o_MEMWB_lsu_data(MEMWB_lsu_data) // Output LSU data to writeback stage
);

block_WRITE_BACK writeback_unit (
  .i_lsu_data      (MEMWB_lsu_data), // LSU data from MEMWB stage
  .i_bit_mask      (o_MEMWB_bus.IDEX_pipe_bus.ctrl_bus.bit_mask),
  .i_signed_op     (o_MEMWB_bus.IDEX_pipe_bus.ctrl_bus.signed_flag),
  .i_wb_sel        (o_MEMWB_bus.IDEX_pipe_bus.ctrl_bus.wb_sel),
  .i_alu_data      (o_MEMWB_bus.execute_bus.alu_data), // ALU data from execute stage
  .i_pc            (o_MEMWB_bus.IDEX_pipe_bus.pc), // PC from EXMEM stage
  .o_wb_data       (WB_rd_data) // Output to register file
);
logic [XLEN-1:0] check_rs1_data, check_rs2_data, check_rd_data, check_imme;
logic [REG_ADDR_W-1:0] check_rs1_addr, check_rs2_addr, check_rd_addr;
logic check_rd_wren, check_is_branch_taken;
logic [XLEN-1:0] check_alu_data;
logic check_sign_bit;
logic [1:0] check_wb_sel, check_bit_mask;

always_ff @(posedge i_clk) begin
  check_is_branch_taken <= o_execute_bus.is_branch;
  o_misprediction <= o_harzard_bus.misprediction;
  check_rs1_data <= fw_data_a;
  check_rs2_data <= fw_data_b;
  check_predict_direct <= o_IDEX_bus.predict_direct;
end
always_comb begin
  check_imme     = o_EXMEM_bus.IDEX_pipe_bus.decode_bus.imme_data;
  check_rd_data  = (o_EXMEM_bus.IDEX_pipe_bus.ctrl_bus.wb_sel==`WB_SEL_PC4)? o_EXMEM_bus.IDEX_pipe_bus.pc:
                   (o_EXMEM_bus.IDEX_pipe_bus.ctrl_bus.wb_sel==`WB_SEL_ALU)? o_EXMEM_bus.execute_bus.alu_data:
                   (o_EXMEM_bus.IDEX_pipe_bus.ctrl_bus.wb_sel==`WB_SEL_LSU)? lsu_data: 'b0;
  check_rs1_addr = o_EXMEM_bus.IDEX_pipe_bus.decode_bus.rs1_addr ;
  check_rs2_addr = o_EXMEM_bus.IDEX_pipe_bus.decode_bus.rs2_addr ;
  check_rd_addr  = o_EXMEM_bus.IDEX_pipe_bus.decode_bus.rd_addr;
  check_rd_wren  = o_EXMEM_bus.IDEX_pipe_bus.ctrl_bus.rd_wren;
  check_alu_data = o_EXMEM_bus.execute_bus.alu_data;
  check_sign_bit = o_EXMEM_bus.IDEX_pipe_bus.ctrl_bus.signed_flag;
  check_wb_sel   = o_EXMEM_bus.IDEX_pipe_bus.ctrl_bus.wb_sel;
  check_bit_mask = o_EXMEM_bus.IDEX_pipe_bus.ctrl_bus.bit_mask;
end

always_comb begin
   o_pc_debug = o_EXMEM_bus.IDEX_pipe_bus.pc; // Output debug PC
   o_instr_vld = o_EXMEM_bus.IDEX_pipe_bus.ctrl_bus.instr_vld; // Output 
   o_EXMEM_instruction = o_EXMEM_bus.IDEX_pipe_bus.instr; // Output instruction
   o_lsu_addr = o_EXMEM_bus.execute_bus.alu_data; // Output LSU address
   o_lsu_data = lsu_data; // Output LSU data
   o_lsu_wren = o_EXMEM_bus.IDEX_pipe_bus.ctrl_bus.lsu_wren; // Output LSU write enable
end
endmodule
