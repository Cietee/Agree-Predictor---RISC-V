// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_FULL_ADDER_NBIT_H_
#define _VTESTBENCH_FULL_ADDER_NBIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;


//----------

VL_MODULE(Vtestbench_full_adder_nbit) {
  public:
    
    // PORTS
    VL_OUT8(__PVT__o_carry,0,0);
    VL_IN(__PVT__i_a,31,0);
    VL_IN(__PVT__i_b,31,0);
    VL_OUT(__PVT__o_sum,31,0);
    
    // LOCAL SIGNALS
    IData/*31:0*/ __PVT__sum;
    QData/*32:0*/ __PVT__sig_carry;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_full_adder_nbit);  ///< Copying not allowed
  public:
    Vtestbench_full_adder_nbit(const char* name = "TOP");
    ~Vtestbench_full_adder_nbit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    void _combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__14(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__9(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__10(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__15(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__11(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__16(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__writeback_unit__PCplus4__12(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__writeback_unit__PCplus4__13(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__6(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__7(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__3(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__8(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__writeback_unit__PCplus4__4(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__writeback_unit__PCplus4__5(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
