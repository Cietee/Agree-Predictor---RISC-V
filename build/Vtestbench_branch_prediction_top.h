// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_BRANCH_PREDICTION_TOP_H_
#define _VTESTBENCH_BRANCH_PREDICTION_TOP_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;
class Vtestbench_agree_predict;
class Vtestbench_btb;


//----------

VL_MODULE(Vtestbench_branch_prediction_top) {
  public:
    // CELLS
    Vtestbench_agree_predict* __PVT__agree_unit;
    Vtestbench_btb* __PVT__btb_unit;
    
    // PORTS
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_IN8(__PVT__update_bbt_index,6,0);
    VL_IN8(__PVT__update_pht_index,7,0);
    VL_OUT8(__PVT__o_pht_index,6,0);
    VL_OUT8(__PVT__o_bbt_index,7,0);
    VL_IN(__PVT__i_pc,31,0);
    VL_INW(__PVT__i_branch_predict_bus,67,0,3);
    VL_OUT64(__PVT__o_branch_predict_bus,33,0);
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vcellinp__agree_unit__i_mispredict_direct;
    CData/*0:0*/ __Vcellinp__agree_unit__i_update_taken;
    CData/*0:0*/ __Vcellinp__agree_unit__i_update_en;
    CData/*0:0*/ __Vcellout__agree_unit__o_prediction;
    CData/*0:0*/ __Vcellout__btb_unit__o_btb_hit;
    CData/*0:0*/ __Vcellinp__btb_unit__i_update_target_en;
    SData/*9:0*/ __Vcellinp__agree_unit__update_bbt_index;
    SData/*9:0*/ __Vcellinp__agree_unit__update_pht_index;
    SData/*9:0*/ __Vcellout__agree_unit__o_bbt_index;
    SData/*9:0*/ __Vcellout__agree_unit__o_pht_index;
    IData/*31:0*/ __Vcellinp__agree_unit__i_update_pc;
    IData/*31:0*/ __Vcellout__btb_unit__o_target_pc;
    IData/*31:0*/ __Vcellinp__btb_unit__i_update_target_pc;
    IData/*31:0*/ __Vcellinp__btb_unit__i_update_pc;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_branch_prediction_top);  ///< Copying not allowed
  public:
    Vtestbench_branch_prediction_top(const char* name = "TOP");
    ~Vtestbench_branch_prediction_top();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__5(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__6(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__7(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__8(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__9(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__3(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__4(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
