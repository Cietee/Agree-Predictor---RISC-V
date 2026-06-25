`include "./include/filelist.svh"
module full_adder_nbit #(
  parameter WIDTH = XLEN
)(
  input  logic [WIDTH-1:0] i_a, i_b, 
  output logic [WIDTH-1:0] o_sum,
  output logic             o_carry
);
  
logic [WIDTH:0]   sig_carry;
logic [WIDTH-1:0] sum;
assign sig_carry[0] = 1'b0;
  
generate 
  genvar j;
  for (j = 0; j < WIDTH; j++) begin : proc_add
    assign sum[j]  = ( i_a[j] ^ i_b[j] ) ^ sig_carry[j];
    assign sig_carry[j+1]  = (  i_a[j] & i_b[j] ) | ( sig_carry[j]  &  ( i_a[j] ^ i_b[j] ));
  end: proc_add
endgenerate

assign o_sum = sum ;
assign o_carry  = sig_carry[WIDTH];
endmodule
