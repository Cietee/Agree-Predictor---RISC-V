// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_FULL_SUBTRACTOR_NBIT_H_
#define _VTESTBENCH_FULL_SUBTRACTOR_NBIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;


//----------

VL_MODULE(Vtestbench_full_subtractor_nbit) {
  public:
    
    // PORTS
    VL_OUT8(__PVT__o_borrow,0,0);
    VL_IN(__PVT__i_a,31,0);
    VL_IN(__PVT__i_b,31,0);
    VL_OUT(__PVT__o_diff,31,0);
    
    // LOCAL SIGNALS
    IData/*31:0*/ __PVT__diff;
    QData/*32:0*/ __PVT__sig_borrow;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_full_subtractor_nbit);  ///< Copying not allowed
  public:
    Vtestbench_full_subtractor_nbit(const char* name = "TOP");
    ~Vtestbench_full_subtractor_nbit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor__3(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor__4(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _settle__TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
