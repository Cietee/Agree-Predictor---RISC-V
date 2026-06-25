// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_SRL_MODULE_H_
#define _VTESTBENCH_SRL_MODULE_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;


//----------

VL_MODULE(Vtestbench_srl_module) {
  public:
    
    // PORTS
    VL_IN8(__PVT__i_imme,4,0);
    VL_IN(__PVT__i_data,31,0);
    VL_OUT(__PVT__o_data,31,0);
    
    // LOCAL SIGNALS
    IData/*31:0*/ __PVT__stage[5];
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_srl_module);  ///< Copying not allowed
  public:
    Vtestbench_srl_module(const char* name = "TOP");
    ~Vtestbench_srl_module();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__execute_unit__alu_module__srl_module__2(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _settle__TOP__testbench__TAGE__execute_unit__alu_module__srl_module__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
