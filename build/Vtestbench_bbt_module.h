// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_BBT_MODULE_H_
#define _VTESTBENCH_BBT_MODULE_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;


//----------

VL_MODULE(Vtestbench_bbt_module) {
  public:
    
    // PORTS
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_OUT8(__PVT__biasing_bit_out,0,0);
    VL_IN8(__PVT__i_update_en,0,0);
    VL_IN8(__PVT__i_actual_taken,0,0);
    VL_IN8(__PVT__pht_is_weak,0,0);
    VL_IN16(__PVT__bbt_index,9,0);
    VL_IN16(__PVT__update_bbt_index,9,0);
    
    // LOCAL SIGNALS
    IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
    CData/*1:0*/ __PVT__bbt_table[1024];
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vdlyvval__bbt_table__v0;
    CData/*0:0*/ __Vdlyvset__bbt_table__v0;
    SData/*9:0*/ __Vdlyvdim0__bbt_table__v0;
    SData/*9:0*/ __Vdlyvdim0__bbt_table__v1;
    IData/*31:0*/ __Vdlyvlsb__bbt_table__v0;
    IData/*31:0*/ __Vdlyvlsb__bbt_table__v1;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_bbt_module);  ///< Copying not allowed
  public:
    Vtestbench_bbt_module(const char* name = "TOP");
    ~Vtestbench_bbt_module();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table__3(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table__2(Vtestbench__Syms* __restrict vlSymsp);
    static void _settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
