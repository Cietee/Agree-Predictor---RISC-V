// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_DRIVER_H_
#define _VTESTBENCH_DRIVER_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;


//----------

VL_MODULE(Vtestbench_driver) {
  public:
    
    // PORTS
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_OUT(__PVT__i_io_sw,31,0);
    
    // LOCAL SIGNALS
    QData/*63:0*/ __PVT__counter;
    
    // LOCAL VARIABLES
    QData/*63:0*/ __Vdly__counter;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_driver);  ///< Copying not allowed
  public:
    Vtestbench_driver(const char* name = "TOP");
    ~Vtestbench_driver();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__testbench__driverUnit__2(Vtestbench__Syms* __restrict vlSymsp);
    static void _settle__TOP__testbench__driverUnit__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
