  `include "./include/filelist.svh"
  module srl_module #(
    parameter WIDTH   = 32,
    parameter IMMSIZE = 5
  )(
    input  logic [  WIDTH-1:0] i_data,
    input  logic [IMMSIZE-1:0] i_imme,
    output logic [  WIDTH-1:0] o_data
  );
  logic [WIDTH-1:0] stage [4:0];
  always_comb begin
    stage[0] = i_imme[0]? {1'b0, i_data[WIDTH-1:1]}: i_data;
    stage[1] = i_imme[1]? {2'b0, stage[0][WIDTH-1:2]}: stage[0];
    stage[2] = i_imme[2]? {4'b0, stage[1][WIDTH-1:4]}: stage[1];
    stage[3] = i_imme[3]? {8'b0, stage[2][WIDTH-1:8]}: stage[2];
    stage[4] = i_imme[4]? {16'b0, stage[3][WIDTH-1:16]}: stage[3];
    o_data   = stage[4];
  end
  endmodule
  