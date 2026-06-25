`include "./include/filelist.svh"
module pipe_IDEX (
    input  logic      i_clk, i_rst_n, i_IDEX_en, i_IDEX_predict_direct,
    input  IDEX_bus   i_decode_stage_bus,
    output IDEX_bus   o_IDEX_bus
);

  logic [   XLEN-1:0] rs1_data, rs2_data, imme_data, pc, instruction;
  logic [REG_ADDR_W-1:0] rd_addr, rs1_addr, rs2_addr;
  logic [ALU_OP_W-1:0] alu_op;
  logic rd_wren, lsu_wren, signed_flag, opa_sel, opb_sel, instr_vld; 
  logic [1:0] wb_sel, bit_mask;
  logic IDEX_predict_direct;
  always_ff @(posedge i_clk) begin
    if (~i_rst_n) begin
      instr_vld   <= '0;
      rs1_data    <= '0;
      rs2_data    <= '0;
      imme_data   <= '0;
      pc          <= '0;
      instruction <= '0;
      rd_addr     <= '0;
      rs1_addr    <= '0;
      rs2_addr    <= '0;
      alu_op      <= '0;
      rd_wren     <= '0;
      lsu_wren    <= '0;
      signed_flag <= '0;
      opa_sel     <= '0;
      opb_sel     <= '0;
      wb_sel      <= '0;
      bit_mask    <= '0;
      IDEX_predict_direct <='0;
    end else if (i_IDEX_en) begin
      pc          <= i_decode_stage_bus.pc;
      instruction <= i_decode_stage_bus.instr;
      
      rs1_data    <= i_decode_stage_bus.decode_bus.rs1_data;
      rs2_data    <= i_decode_stage_bus.decode_bus.rs2_data;
      imme_data   <= i_decode_stage_bus.decode_bus.imme_data;
      rd_addr     <= i_decode_stage_bus.decode_bus.rd_addr;
      rs1_addr    <= i_decode_stage_bus.decode_bus.rs1_addr;
      rs2_addr    <= i_decode_stage_bus.decode_bus.rs2_addr;

      instr_vld   <= i_decode_stage_bus.ctrl_bus.instr_vld;
      wb_sel      <= i_decode_stage_bus.ctrl_bus.wb_sel;
      rd_wren     <= i_decode_stage_bus.ctrl_bus.rd_wren;
      lsu_wren    <= i_decode_stage_bus.ctrl_bus.lsu_wren;
      signed_flag <= i_decode_stage_bus.ctrl_bus.signed_flag;
      bit_mask    <= i_decode_stage_bus.ctrl_bus.bit_mask;
      opa_sel     <= i_decode_stage_bus.ctrl_bus.opa_sel;
      opb_sel     <= i_decode_stage_bus.ctrl_bus.opb_sel;
      alu_op      <= i_decode_stage_bus.ctrl_bus.alu_op;
      IDEX_predict_direct <= i_IDEX_predict_direct;
    end
  end
  always_comb begin
      o_IDEX_bus.instr                  = instruction;//
      o_IDEX_bus.pc                     = pc;//
      o_IDEX_bus.predict_direct         = IDEX_predict_direct;

      o_IDEX_bus.decode_bus.rs1_addr    = rs1_addr;
      o_IDEX_bus.decode_bus.rs2_addr    = rs2_addr;
      o_IDEX_bus.decode_bus.rs1_data    = rs1_data;
      o_IDEX_bus.decode_bus.rs2_data    = rs2_data;
      o_IDEX_bus.decode_bus.imme_data   = imme_data;
      o_IDEX_bus.decode_bus.rd_addr     = rd_addr;//
      
      o_IDEX_bus.ctrl_bus.instr_vld   = instr_vld;
      o_IDEX_bus.ctrl_bus.wb_sel      = wb_sel;//
      o_IDEX_bus.ctrl_bus.rd_wren     = rd_wren;//
      o_IDEX_bus.ctrl_bus.lsu_wren    = lsu_wren;//
      o_IDEX_bus.ctrl_bus.signed_flag = signed_flag;//
      o_IDEX_bus.ctrl_bus.bit_mask    = bit_mask;//
      o_IDEX_bus.ctrl_bus.opa_sel     = opa_sel;
      o_IDEX_bus.ctrl_bus.opb_sel     = opb_sel;
      o_IDEX_bus.ctrl_bus.alu_op      = alu_op;
  end  
endmodule
