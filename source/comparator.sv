
  `include "./include/filelist.svh"
  module comparator #(
    parameter WIDTH = XLEN
  )(
    input  logic [WIDTH-1:0] i_a, i_b, 
    input  logic             i_signed,  // 1- signed
    output logic             o_lessthan, o_equal
  );

  logic [WIDTH:0] sig_less, sig_equal ;
  assign sig_less[WIDTH] = 1'b0;
  assign sig_equal[WIDTH] = 1'b1; 
  generate
    genvar j;
    for (j= WIDTH-1; j>=0; j=j-1) begin : proc_compare
      assign sig_less[j] = sig_less[j+1]|(sig_equal[j+1]&(~i_a[j])&i_b[j]);
      assign sig_equal[j] = sig_equal[j+1]&(~(i_a[j]^i_b[j]));
    end: proc_compare
  endgenerate
 
  assign o_lessthan = ((i_a[WIDTH-1]^i_b[WIDTH-1])&i_signed)?~sig_less[0]:sig_less[0];
  assign o_equal = sig_equal[0];
  endmodule
