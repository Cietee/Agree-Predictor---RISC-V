// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_BRANCH_CONTROL_UNIT_H_
#define _VTESTBENCH_BRANCH_CONTROL_UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;
class Vtestbench_comparator;


//----------

VL_MODULE(Vtestbench_branch_control_unit) {
  public:
    // CELLS
    Vtestbench_comparator* __PVT__branch_compare;
    
    // PORTS
    VL_OUT8(__PVT__o_branch_taken,0,0);
    VL_OUT8(__PVT__o_is_branch,0,0);
    VL_IN(__PVT__i_instr,31,0);
    VL_IN(__PVT__i_rs1_data,31,0);
    VL_IN(__PVT__i_rs2_data,31,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__br_un;
    CData/*0:0*/ __PVT__br_less;
    CData/*0:0*/ __PVT__br_equal;
    CData/*6:0*/ __PVT__opcode;
    CData/*2:0*/ __PVT__funct3;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_branch_control_unit);  ///< Copying not allowed
  public:
    Vtestbench_branch_control_unit(const char* name = "TOP");
    ~Vtestbench_branch_control_unit();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__5(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__6(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__7(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__8(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__3(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__4(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
