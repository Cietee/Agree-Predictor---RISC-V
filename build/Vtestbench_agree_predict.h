// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_AGREE_PREDICT_H_
#define _VTESTBENCH_AGREE_PREDICT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;
class Vtestbench_bhr_module;
class Vtestbench_pht_module;
class Vtestbench_bbt_module;


//----------

VL_MODULE(Vtestbench_agree_predict) {
  public:
    // CELLS
    Vtestbench_bhr_module* __PVT__branch_history_reg;
    Vtestbench_pht_module* __PVT__pattern_history_table;
    Vtestbench_bbt_module* __PVT__bias_bit_table;
    
    // PORTS
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_IN8(__PVT__i_mispredict_direct,0,0);
    VL_IN8(__PVT__i_update_en,0,0);
    VL_IN8(__PVT__i_update_taken,0,0);
    VL_OUT8(__PVT__o_prediction,0,0);
    VL_IN16(__PVT__update_pht_index,9,0);
    VL_IN16(__PVT__update_bbt_index,9,0);
    VL_OUT16(__PVT__o_pht_index,9,0);
    VL_OUT16(__PVT__o_bbt_index,9,0);
    VL_IN(__PVT__i_pc,31,0);
    VL_IN(__PVT__i_update_pc,31,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__actual_agree;
    CData/*0:0*/ __PVT__biasing_bit_D;
    CData/*0:0*/ __PVT__biasing_bit_E;
    CData/*1:0*/ __PVT__pht_counter_data;
    CData/*0:0*/ __PVT__bias;
    CData/*0:0*/ __PVT__pht_is_weak;
    CData/*0:0*/ __PVT__agree_bit;
    CData/*0:0*/ __PVT__i_actual_taken;
    SData/*9:0*/ __PVT__bhr_data;
    SData/*9:0*/ __PVT__pht_index;
    SData/*9:0*/ __PVT__i_update_pht_index;
    SData/*9:0*/ __PVT__bbt_index;
    SData/*9:0*/ __PVT__i_update_bbt_index;
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vcellinp__bias_bit_table__i_update_en;
    CData/*0:0*/ __Vdly__biasing_bit_D;
    CData/*0:0*/ __Vdly__biasing_bit_E;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_agree_predict);  ///< Copying not allowed
  public:
    Vtestbench_agree_predict(const char* name = "TOP");
    ~Vtestbench_agree_predict();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__10(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__11(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__6(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__9(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__7(Vtestbench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__8(Vtestbench__Syms* __restrict vlSymsp);
    static void _settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__3(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__4(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__5(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
