// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_COMPARATOR_H_
#define _VTESTBENCH_COMPARATOR_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;


//----------

VL_MODULE(Vtestbench_comparator) {
  public:
    
    // PORTS
    VL_IN8(__PVT__i_signed,0,0);
    VL_OUT8(__PVT__o_lessthan,0,0);
    VL_OUT8(__PVT__o_equal,0,0);
    VL_IN(__PVT__i_a,31,0);
    VL_IN(__PVT__i_b,31,0);
    
    // LOCAL SIGNALS
    QData/*32:0*/ __PVT__sig_less;
    QData/*32:0*/ __PVT__sig_equal;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_comparator);  ///< Copying not allowed
  public:
    Vtestbench_comparator(const char* name = "TOP");
    ~Vtestbench_comparator();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    void _combo__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__16(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__28(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__15(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__27(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__21(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__26(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__18(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__22(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__19(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__24(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__20(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__25(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__17(Vtestbench__Syms* __restrict vlSymsp);
    void _combo__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__23(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _settle__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__14(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__4(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__13(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__3(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__12(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__7(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__9(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__10(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__5(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__11(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__6(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__8(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
