// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_FORWARDING_UNIT_H_
#define _VTESTBENCH_FORWARDING_UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;


//----------

VL_MODULE(Vtestbench_forwarding_unit) {
  public:
    
    // PORTS
    VL_IN8(__PVT__IDEX_rd_addr,4,0);
    VL_IN8(__PVT__EXMEM_rd_addr,4,0);
    VL_IN8(__PVT__MEMWB_rd_addr,4,0);
    VL_IN8(__PVT__IDEX_rd_wren,0,0);
    VL_IN8(__PVT__EXMEM_rd_wren,0,0);
    VL_IN8(__PVT__MEMWB_rd_wren,0,0);
    VL_IN8(__PVT__IDEX_rs1_addr,4,0);
    VL_IN8(__PVT__IDEX_rs2_addr,4,0);
    VL_OUT8(__PVT__o_fwa,1,0);
    VL_OUT8(__PVT__o_fwb,1,0);
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_forwarding_unit);  ///< Copying not allowed
  public:
    Vtestbench_forwarding_unit(const char* name = "TOP");
    ~Vtestbench_forwarding_unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__forwarding_unit__2(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _settle__TOP__testbench__TAGE__forwarding_unit__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
