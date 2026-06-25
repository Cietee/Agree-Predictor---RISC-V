// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_PIPE_IFID_H_
#define _VTESTBENCH_PIPE_IFID_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;


//----------

VL_MODULE(Vtestbench_pipe_IFID) {
  public:
    
    // PORTS
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_IN8(__PVT__i_IFID_en,0,0);
    VL_IN8(__PVT__i_predict_direct,0,0);
    VL_IN8(__PVT__i_is_mispredict,0,0);
    VL_OUT8(__PVT__o_IFID_predict_direct,0,0);
    VL_OUT8(__PVT__o_IFID_is_mispredict,0,0);
    VL_IN(__PVT__i_pc,31,0);
    VL_IN(__PVT__i_instr,31,0);
    VL_OUT(__PVT__o_IFID_pc,31,0);
    VL_OUT(__PVT__o_IFID_instr,31,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__predict_direct;
    CData/*0:0*/ __PVT__misprediction;
    IData/*31:0*/ __PVT__pc;
    IData/*31:0*/ __PVT__instr;
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vdly__predict_direct;
    CData/*0:0*/ __Vdly__misprediction;
    IData/*31:0*/ __Vdly__instr;
    IData/*31:0*/ __Vdly__pc;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_pipe_IFID);  ///< Copying not allowed
  public:
    Vtestbench_pipe_IFID(const char* name = "TOP");
    ~Vtestbench_pipe_IFID();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__testbench__TAGE__ifid_pipe_unit__2(Vtestbench__Syms* __restrict vlSymsp);
    static void _settle__TOP__testbench__TAGE__ifid_pipe_unit__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
