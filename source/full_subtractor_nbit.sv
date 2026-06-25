`include "./include/filelist.svh"
module full_subtractor_nbit #(
  parameter WIDTH = XLEN
)(
  input  logic [WIDTH-1:0] i_a, i_b, 
  output logic [WIDTH-1:0] o_diff,
  output logic             o_borrow
);
 
logic [WIDTH:0]   sig_borrow;
logic [WIDTH-1:0] diff;
assign sig_borrow[0] = 1'b0;
generate 
  genvar j;
  for (j = 0; j < WIDTH; j++) begin : proc_sub
    assign diff[j] = ( i_a[j] ^ i_b[j] ) ^ sig_borrow[j];
    assign sig_borrow[j+1] = ( ~i_a[j] & i_b[j] ) | ( sig_borrow[j] & ~( i_a[j] ^ i_b[j] ));
  end: proc_sub
endgenerate
assign o_diff = diff;  
assign o_borrow = sig_borrow[WIDTH];
endmodule
