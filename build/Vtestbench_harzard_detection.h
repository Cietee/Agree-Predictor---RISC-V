// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_HARZARD_DETECTION_H_
#define _VTESTBENCH_HARZARD_DETECTION_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;


//----------

VL_MODULE(Vtestbench_harzard_detection) {
  public:
    
    // PORTS
    VL_OUT8(__PVT__o_harzard_bus,5,0);
    VL_INW(__PVT__i_harzard_bus,130,0,5);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__is_IDEX_load;
    CData/*0:0*/ __PVT__is_branch_jump;
    CData/*0:0*/ __PVT__is_IFID_load;
    CData/*0:0*/ __PVT__is_mispredict;
    CData/*0:0*/ __PVT__mispredict_direct;
    CData/*0:0*/ __PVT__mispredict_target;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_harzard_detection);  ///< Copying not allowed
  public:
    Vtestbench_harzard_detection(const char* name = "TOP");
    ~Vtestbench_harzard_detection();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__harzard_detection_unit__2(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _settle__TOP__testbench__TAGE__harzard_detection_unit__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
