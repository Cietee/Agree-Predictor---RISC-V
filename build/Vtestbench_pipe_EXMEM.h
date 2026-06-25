// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_PIPE_EXMEM_H_
#define _VTESTBENCH_PIPE_EXMEM_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;


//----------

VL_MODULE(Vtestbench_pipe_EXMEM) {
  public:
    
    // PORTS
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_IN8(__PVT__i_EXMEM_en,0,0);
    VL_INW(__PVT__i_IDEX_bus,189,0,6);
    VL_INW(__PVT__i_execute_bus,65,0,3);
    VL_OUTW(__PVT__o_EXMEM_bus,255,0,8);
    
    // LOCAL SIGNALS
    WData/*255:0*/ __PVT__EXMEM_reg[8];
    
    // LOCAL VARIABLES
    WData/*255:0*/ __Vdly__EXMEM_reg[8];
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_pipe_EXMEM);  ///< Copying not allowed
  public:
    Vtestbench_pipe_EXMEM(const char* name = "TOP");
    ~Vtestbench_pipe_EXMEM();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__testbench__TAGE__exmem_pipe_unit__2(Vtestbench__Syms* __restrict vlSymsp);
    static void _settle__TOP__testbench__TAGE__exmem_pipe_unit__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
