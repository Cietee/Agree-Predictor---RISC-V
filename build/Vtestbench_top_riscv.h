// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_TOP_RISCV_H_
#define _VTESTBENCH_TOP_RISCV_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;
class Vtestbench_block_FETCH;
class Vtestbench_pipe_IFID;
class Vtestbench_harzard_detection;
class Vtestbench_block_DECODE;
class Vtestbench_pipe_IDEX;
class Vtestbench_forwarding_unit;
class Vtestbench_block_EXECUTE;
class Vtestbench_pipe_EXMEM;
class Vtestbench_lsu;
class Vtestbench_pipe_MEMWB;
class Vtestbench_block_WRITE_BACK;


//----------

VL_MODULE(Vtestbench_top_riscv) {
  public:
    // CELLS
    Vtestbench_block_FETCH* __PVT__fetch_unit;
    Vtestbench_pipe_IFID* __PVT__ifid_pipe_unit;
    Vtestbench_harzard_detection* __PVT__harzard_detection_unit;
    Vtestbench_block_DECODE* __PVT__decode_unit;
    Vtestbench_pipe_IDEX* __PVT__idex_pipe_unit;
    Vtestbench_forwarding_unit* __PVT__forwarding_unit;
    Vtestbench_block_EXECUTE* __PVT__execute_unit;
    Vtestbench_pipe_EXMEM* __PVT__exmem_pipe_unit;
    Vtestbench_lsu* __PVT__lsu_unit;
    Vtestbench_pipe_MEMWB* __PVT__memwb_pipe_unit;
    Vtestbench_block_WRITE_BACK* __PVT__writeback_unit;
    
    // PORTS
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_OUT8(__PVT__o_instr_vld,0,0);
    VL_OUT8(__PVT__o_misprediction,0,0);
    VL_OUT8(__PVT__o_lsu_wren,0,0);
    VL_IN(__PVT__i_io_sw,31,0);
    VL_OUT(__PVT__o_io_ledr,31,0);
    VL_OUT(__PVT__o_lsu_addr,31,0);
    VL_OUT(__PVT__o_lsu_data,31,0);
    VL_OUT(__PVT__o_pc_debug,31,0);
    VL_OUT(__PVT__o_EXMEM_instruction,31,0);
    
    // LOCAL SIGNALS
    CData/*1:0*/ __PVT__o_fwa;
    CData/*1:0*/ __PVT__o_fwb;
    CData/*5:0*/ __PVT__o_harzard_bus;
    CData/*0:0*/ __PVT__predict_direct;
    CData/*0:0*/ __PVT__o_IFID_predict_direct;
    CData/*0:0*/ __PVT__IFID_is_mispredict;
    CData/*0:0*/ __PVT__check_predict_direct;
    CData/*4:0*/ __PVT__check_rs1_addr;
    CData/*4:0*/ __PVT__check_rs2_addr;
    CData/*4:0*/ __PVT__check_rd_addr;
    CData/*0:0*/ __PVT__check_rd_wren;
    CData/*0:0*/ __PVT__check_is_branch_taken;
    CData/*0:0*/ __PVT__check_sign_bit;
    CData/*1:0*/ __PVT__check_wb_sel;
    CData/*1:0*/ __PVT__check_bit_mask;
    SData/*13:0*/ __PVT__ctrl_bus;
    SData/*9:0*/ __PVT__bbt_index_FD;
    SData/*9:0*/ __PVT__bbt_index_DE;
    SData/*9:0*/ __PVT__o_bbt_index;
    SData/*9:0*/ __PVT__pht_index_FD;
    SData/*9:0*/ __PVT__pht_index_DE;
    SData/*9:0*/ __PVT__o_pht_index;
    IData/*31:0*/ __PVT__fetch_pc;
    IData/*31:0*/ __PVT__fetch_instr;
    IData/*31:0*/ __PVT__IFID_pc;
    IData/*31:0*/ __PVT__IFID_instr;
    IData/*31:0*/ __PVT__nop_instr_mux;
    IData/*31:0*/ __PVT__fw_data_a;
    IData/*31:0*/ __PVT__fw_data_b;
    IData/*31:0*/ __PVT__lsu_data;
    IData/*31:0*/ __PVT__MEMWB_lsu_data;
    IData/*31:0*/ __PVT__WB_rd_data;
    IData/*31:0*/ __PVT__actual_target_1;
    IData/*31:0*/ __PVT__check_rs1_data;
    IData/*31:0*/ __PVT__check_rs2_data;
    IData/*31:0*/ __PVT__check_rd_data;
    IData/*31:0*/ __PVT__check_imme;
    IData/*31:0*/ __PVT__check_alu_data;
    WData/*189:0*/ __PVT__o_IDEX_bus[6];
    WData/*110:0*/ __PVT__decode_bus[4];
    WData/*189:0*/ __PVT__decode_stage_bus[6];
    WData/*65:0*/ __PVT__o_execute_bus[3];
    WData/*255:0*/ __PVT__o_EXMEM_bus[8];
    WData/*255:0*/ __PVT__o_MEMWB_bus[8];
    WData/*67:0*/ __PVT__i_branch_predict_bus[3];
    WData/*130:0*/ __PVT__i_harzard_bus[5];
    
    // LOCAL VARIABLES
    CData/*6:0*/ __Vcellinp__fetch_unit__update_bbt_index;
    CData/*7:0*/ __Vcellinp__fetch_unit__update_pht_index;
    CData/*7:0*/ __Vcellout__fetch_unit__o_bbt_index;
    CData/*6:0*/ __Vcellout__fetch_unit__o_pht_index;
    CData/*0:0*/ __Vcellinp__fetch_unit__i_pc_en;
    CData/*0:0*/ __Vcellinp__fetch_unit__i_pc_sel;
    CData/*0:0*/ __Vcellinp__ifid_pipe_unit__i_is_mispredict;
    CData/*4:0*/ __Vcellinp__decode_unit__i_rd_addr;
    CData/*0:0*/ __Vcellinp__decode_unit__i_rd_wren;
    CData/*4:0*/ __Vcellinp__forwarding_unit__IDEX_rs2_addr;
    CData/*4:0*/ __Vcellinp__forwarding_unit__IDEX_rs1_addr;
    CData/*4:0*/ __Vcellinp__forwarding_unit__MEMWB_rd_addr;
    CData/*0:0*/ __Vcellinp__forwarding_unit__MEMWB_rd_wren;
    CData/*4:0*/ __Vcellinp__forwarding_unit__EXMEM_rd_addr;
    CData/*0:0*/ __Vcellinp__forwarding_unit__EXMEM_rd_wren;
    CData/*3:0*/ __Vcellinp__execute_unit__i_alu_op;
    CData/*0:0*/ __Vcellinp__execute_unit__i_opb_sel;
    CData/*0:0*/ __Vcellinp__execute_unit__i_opa_sel;
    CData/*1:0*/ __Vcellinp__lsu_unit__i_bit_mask;
    CData/*0:0*/ __Vcellinp__lsu_unit__i_lsu_wren;
    CData/*1:0*/ __Vcellinp__writeback_unit__i_wb_sel;
    CData/*0:0*/ __Vcellinp__writeback_unit__i_signed_op;
    CData/*1:0*/ __Vcellinp__writeback_unit__i_bit_mask;
    CData/*0:0*/ __Vdly__check_is_branch_taken;
    CData/*0:0*/ __Vdly__o_misprediction;
    CData/*0:0*/ __Vdly__check_predict_direct;
    SData/*9:0*/ __Vdly__pht_index_FD;
    SData/*9:0*/ __Vdly__bbt_index_FD;
    SData/*9:0*/ __Vdly__pht_index_DE;
    SData/*9:0*/ __Vdly__bbt_index_DE;
    IData/*31:0*/ __Vcellinp__fetch_unit__i_IDEX_pc;
    IData/*31:0*/ __Vcellinp__fetch_unit__i_alu_data;
    IData/*31:0*/ __Vcellinp__execute_unit__i_imme_data;
    IData/*31:0*/ __Vcellinp__execute_unit__i_pc;
    IData/*31:0*/ __Vcellinp__execute_unit__i_instr;
    IData/*31:0*/ __Vcellinp__lsu_unit__i_st_data;
    IData/*31:0*/ __Vcellinp__lsu_unit__i_lsu_addr;
    IData/*31:0*/ __Vcellinp__writeback_unit__i_pc;
    IData/*31:0*/ __Vcellinp__writeback_unit__i_alu_data;
    IData/*31:0*/ __Vdly__check_rs1_data;
    IData/*31:0*/ __Vdly__check_rs2_data;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_top_riscv);  ///< Copying not allowed
  public:
    Vtestbench_top_riscv(const char* name = "TOP");
    ~Vtestbench_top_riscv();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__15(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__16(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__17(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__18(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__19(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__20(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__7(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__testbench__TAGE__10(Vtestbench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__testbench__TAGE__11(Vtestbench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__testbench__TAGE__12(Vtestbench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__testbench__TAGE__13(Vtestbench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__testbench__TAGE__14(Vtestbench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__testbench__TAGE__21(Vtestbench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__testbench__TAGE__22(Vtestbench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__testbench__TAGE__9(Vtestbench__Syms* __restrict vlSymsp);
    static void _settle__TOP__testbench__TAGE__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__3(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__4(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__5(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__6(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__8(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
