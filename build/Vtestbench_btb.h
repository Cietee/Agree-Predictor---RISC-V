// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_BTB_H_
#define _VTESTBENCH_BTB_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;


//----------

VL_MODULE(Vtestbench_btb) {
  public:
    
    // PORTS
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_IN8(__PVT__i_update_target_en,0,0);
    VL_OUT8(__PVT__o_btb_hit,0,0);
    VL_IN(__PVT__i_pc,31,0);
    VL_IN(__PVT__i_update_pc,31,0);
    VL_IN(__PVT__i_update_target_pc,31,0);
    VL_OUT(__PVT__o_target_pc,31,0);
    
    // LOCAL SIGNALS
    SData/*9:0*/ __PVT__index;
    SData/*9:0*/ __PVT__update_index;
    IData/*21:0*/ __PVT__tag;
    IData/*21:0*/ __PVT__update_tag;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
    QData/*54:0*/ __PVT__btb_table[1024];
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vdlyvset__btb_table__v0;
    SData/*9:0*/ __Vdlyvdim0__btb_table__v0;
    SData/*9:0*/ __Vdlyvdim0__btb_table__v1;
    SData/*9:0*/ __Vdlyvdim0__btb_table__v2;
    IData/*31:0*/ __Vdlyvlsb__btb_table__v0;
    IData/*31:0*/ __Vdlyvlsb__btb_table__v1;
    IData/*21:0*/ __Vdlyvval__btb_table__v1;
    IData/*31:0*/ __Vdlyvlsb__btb_table__v2;
    IData/*31:0*/ __Vdlyvval__btb_table__v2;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_btb);  ///< Copying not allowed
  public:
    Vtestbench_btb(const char* name = "TOP");
    ~Vtestbench_btb();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__4(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__5(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__3(Vtestbench__Syms* __restrict vlSymsp);
    static void _settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
