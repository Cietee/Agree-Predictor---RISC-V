// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_INSTRUCTION_MEM_H_
#define _VTESTBENCH_INSTRUCTION_MEM_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;


//----------

VL_MODULE(Vtestbench_instruction_mem) {
  public:
    
    // PORTS
    VL_IN(__PVT__i_raddr,31,0);
    VL_OUT(__PVT__o_rdata,31,0);
    
    // LOCAL SIGNALS
    IData/*31:0*/ __PVT__imem[4096];
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_instruction_mem);  ///< Copying not allowed
  public:
    Vtestbench_instruction_mem(const char* name = "TOP");
    ~Vtestbench_instruction_mem();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__fetch_unit__instruction_memory__3(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__testbench__TAGE__fetch_unit__instruction_memory__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__fetch_unit__instruction_memory__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
