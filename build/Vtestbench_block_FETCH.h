// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_BLOCK_FETCH_H_
#define _VTESTBENCH_BLOCK_FETCH_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;
class Vtestbench_pc_gen;
class Vtestbench_instruction_mem;
class Vtestbench_branch_prediction_top;


//----------

VL_MODULE(Vtestbench_block_FETCH) {
  public:
    // CELLS
    Vtestbench_pc_gen* __PVT__pc_generator;
    Vtestbench_instruction_mem* __PVT__instruction_memory;
    Vtestbench_branch_prediction_top* __PVT__branch_predictor;
    
    // PORTS
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_IN8(__PVT__i_pc_sel,0,0);
    VL_IN8(__PVT__i_pc_en,0,0);
    VL_OUT8(__PVT__o_predict_direct,0,0);
    VL_IN8(__PVT__update_bbt_index,6,0);
    VL_IN8(__PVT__update_pht_index,7,0);
    VL_OUT8(__PVT__o_pht_index,6,0);
    VL_OUT8(__PVT__o_bbt_index,7,0);
    VL_IN(__PVT__i_alu_data,31,0);
    VL_IN(__PVT__i_IDEX_pc,31,0);
    VL_OUT(__PVT__o_pc,31,0);
    VL_OUT(__PVT__o_instr,31,0);
    VL_INW(__PVT__i_branch_predict_bus,67,0,3);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__pc_sel;
    IData/*31:0*/ __PVT__pc;
    IData/*31:0*/ __PVT__fixed_pc;
    WData/*67:0*/ __PVT__branch_predict_bus[3];
    QData/*33:0*/ __PVT__o_branch_predict_bus;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_block_FETCH);  ///< Copying not allowed
  public:
    Vtestbench_block_FETCH(const char* name = "TOP");
    ~Vtestbench_block_FETCH();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__fetch_unit__10(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__fetch_unit__11(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__fetch_unit__12(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__fetch_unit__13(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__fetch_unit__6(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__fetch_unit__9(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__testbench__TAGE__fetch_unit__8(Vtestbench__Syms* __restrict vlSymsp);
    static void _settle__TOP__testbench__TAGE__fetch_unit__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__fetch_unit__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__fetch_unit__3(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__fetch_unit__4(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__fetch_unit__5(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__fetch_unit__7(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
