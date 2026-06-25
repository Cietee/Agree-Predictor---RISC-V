// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_PC_GEN_H_
#define _VTESTBENCH_PC_GEN_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;


//----------

VL_MODULE(Vtestbench_pc_gen) {
  public:
    
    // PORTS
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_IN8(__PVT__i_pc_sel,0,0);
    VL_IN8(__PVT__i_pc_en,0,0);
    VL_IN(__PVT__i_fixed_pc,31,0);
    VL_OUT(__PVT__o_pc,31,0);
    VL_IN64(__PVT__o_branch_predict_bus,33,0);
    
    // LOCAL SIGNALS
    IData/*31:0*/ __PVT__next_pc;
    IData/*31:0*/ __PVT__pc;
    
    // LOCAL VARIABLES
    IData/*31:0*/ __Vdly__pc;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_pc_gen);  ///< Copying not allowed
  public:
    Vtestbench_pc_gen(const char* name = "TOP");
    ~Vtestbench_pc_gen();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__fetch_unit__pc_generator__4(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__testbench__TAGE__fetch_unit__pc_generator__3(Vtestbench__Syms* __restrict vlSymsp);
    static void _settle__TOP__testbench__TAGE__fetch_unit__pc_generator__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__fetch_unit__pc_generator__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
