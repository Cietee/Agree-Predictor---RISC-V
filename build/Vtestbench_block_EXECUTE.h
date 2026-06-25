// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_BLOCK_EXECUTE_H_
#define _VTESTBENCH_BLOCK_EXECUTE_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;
class Vtestbench_branch_control_unit;
class Vtestbench_alu;


//----------

VL_MODULE(Vtestbench_block_EXECUTE) {
  public:
    // CELLS
    Vtestbench_branch_control_unit* __PVT__branch_control_unit;
    Vtestbench_alu* __PVT__alu_module;
    
    // PORTS
    VL_IN8(__PVT__i_opa_sel,0,0);
    VL_IN8(__PVT__i_opb_sel,0,0);
    VL_IN8(__PVT__i_alu_op,3,0);
    VL_IN(__PVT__i_instr,31,0);
    VL_IN(__PVT__i_pc,31,0);
    VL_IN(__PVT__i_imme_data,31,0);
    VL_IN(__PVT__i_rs1_data,31,0);
    VL_IN(__PVT__i_rs2_data,31,0);
    VL_OUTW(__PVT__o_execute_bus,65,0,3);
    
    // LOCAL SIGNALS
    IData/*31:0*/ __PVT__operand_a;
    IData/*31:0*/ __PVT__operand_b;
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vcellout__branch_control_unit__o_is_branch;
    CData/*0:0*/ __Vcellout__branch_control_unit__o_branch_taken;
    IData/*31:0*/ __Vcellout__alu_module__o_alu_data;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_block_EXECUTE);  ///< Copying not allowed
  public:
    Vtestbench_block_EXECUTE(const char* name = "TOP");
    ~Vtestbench_block_EXECUTE();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__execute_unit__5(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__execute_unit__6(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__execute_unit__7(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__execute_unit__8(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _settle__TOP__testbench__TAGE__execute_unit__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__execute_unit__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__execute_unit__3(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__execute_unit__4(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
