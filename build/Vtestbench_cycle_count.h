// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_CYCLE_COUNT_H_
#define _VTESTBENCH_CYCLE_COUNT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;


//----------

VL_MODULE(Vtestbench_cycle_count) {
  public:
    
    // PORTS
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_IN8(__PVT__o_instr_vld,0,0);
    VL_IN8(__PVT__o_misprediction,0,0);
    VL_IN8(__PVT__i_lsu_wren,0,0);
    VL_IN(__PVT__o_EXMEM_instruction,31,0);
    VL_IN(__PVT__i_lsu_addr,31,0);
    VL_IN(__PVT__i_lsu_data,31,0);
    VL_IN(__PVT__o_pc_debug,31,0);
    VL_OUT64(__PVT__o_counter,63,0);
    VL_OUT64(__PVT__o_instr_cnt,63,0);
    VL_OUT64(__PVT__o_branch_count,63,0);
    VL_OUT64(__PVT__o_misprediction_cnt,63,0);
    
    // LOCAL SIGNALS
    QData/*63:0*/ __PVT__counter;
    QData/*63:0*/ __PVT__instruction_count;
    QData/*63:0*/ __PVT__misprediction_count;
    QData/*63:0*/ __PVT__branch_count;
    
    // LOCAL VARIABLES
    QData/*63:0*/ __Vdly__counter;
    QData/*63:0*/ __Vdly__branch_count;
    QData/*63:0*/ __Vdly__instruction_count;
    QData/*63:0*/ __Vdly__misprediction_count;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_cycle_count);  ///< Copying not allowed
  public:
    Vtestbench_cycle_count(const char* name = "TOP");
    ~Vtestbench_cycle_count();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__testbench__cycleCountUnit__2(Vtestbench__Syms* __restrict vlSymsp);
    static void _settle__TOP__testbench__cycleCountUnit__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
