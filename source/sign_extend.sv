`include "./include/filelist.svh"
  module sign_extend (
    input  logic [XLEN-1:0] i_data,
    input  logic [     1:0] i_bit_mask,
    input  logic            i_signed_flag,
    output logic [XLEN-1:0] o_data
  ); 

  always_comb begin
    case(i_bit_mask)
      `BIT_MASK_BYTE    :  o_data = i_signed_flag ? {{24{i_data[7]}} ,i_data[7:0]}  : {24'b0,i_data[7:0]};
      `BIT_MASK_HALFWORD:  o_data = i_signed_flag ? {{16{i_data[15]}},i_data[15:0]} : {16'b0,i_data[15:0]};
      `BIT_MASK_WORD    :  o_data = i_data;
      default :  o_data = 32'b0;
    endcase
  end
  endmodule
  