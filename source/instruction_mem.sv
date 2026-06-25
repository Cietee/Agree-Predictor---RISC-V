  `include "./include/filelist.svh"
  module instruction_mem (
    input  logic [XLEN-1:0] i_raddr,
    output logic [XLEN-1:0] o_rdata
  );
    logic [3:0][7:0] imem [2**12-1:0];
    initial begin
     $readmemh("../test_c/test3.hex", imem);
    
    end
    assign o_rdata = imem[i_raddr[XLEN-1:2]];
// test1
// my_riscv_test
// HaiCao_riscv_test
  endmodule
