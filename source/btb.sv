`include "./include/filelist.svh"
module btb (
    input  logic i_clk,
    input  logic i_rst_n,
    input  logic [XLEN-1:0] i_pc,
    input  logic i_update_target_en,
    input  logic [XLEN-1:0] i_update_pc, i_update_target_pc, 

    output logic [XLEN-1:0] o_target_pc,
    output logic            o_btb_hit
);
localparam NUM_ENTRIES = 1 << INDEX_BITS;

typedef struct packed {
  logic                 valid;
  logic [TAG_BITS-1:0]  tag;
  logic [31:0]          target;
} btb_entry_t;

btb_entry_t btb_table [NUM_ENTRIES];
logic [TAG_BITS-1:0] tag, update_tag;
logic [INDEX_BITS-1:0] index, update_index;
assign index = i_pc[INDEX_BITS+1:2]; //2 bit alignment
assign tag   = i_pc[XLEN-1:INDEX_BITS+2];
/* [31      ...       24][23      ...      12][11     ...    2][1:0]
   |                           TAG (22 bits)  |  INDEX (10b)  |  00|       */

always_comb begin
  if (btb_table[index].valid && btb_table[index].tag == tag) begin
    o_btb_hit    = 1;
    o_target_pc = btb_table[index].target;
  end else begin
    o_btb_hit    = 0;
    o_target_pc = 32'b0;
  end
end
assign update_index = i_update_pc[INDEX_BITS+1:2];
assign update_tag   = i_update_pc[XLEN-1 : INDEX_BITS+2];

always_ff @(posedge i_clk) begin
  if (!i_rst_n) begin
    for (int i = 0; i < NUM_ENTRIES; i++) begin
      btb_table[i] = 'b0;
    end
  end else if (i_update_target_en) begin
    btb_table[update_index].valid  <= 'b1;
    btb_table[update_index].tag    <= update_tag;
    btb_table[update_index].target <= i_update_target_pc;
  end
end

endmodule
