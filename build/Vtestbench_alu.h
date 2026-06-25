// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_ALU_H_
#define _VTESTBENCH_ALU_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;
class Vtestbench_full_adder_nbit__W20;
class Vtestbench_full_subtractor_nbit;
class Vtestbench_comparator;
class Vtestbench_srl_module;
class Vtestbench_sra_module;
class Vtestbench_sll_module;


//----------

VL_MODULE(Vtestbench_alu) {
  public:
    // CELLS
    Vtestbench_full_adder_nbit__W20* __PVT__full_adder;
    Vtestbench_full_subtractor_nbit* __PVT__full_subtractor;
    Vtestbench_comparator* __PVT__unsigned_compare;
    Vtestbench_comparator* __PVT__signed_compare;
    Vtestbench_srl_module* __PVT__srl_module;
    Vtestbench_sra_module* __PVT__sra_module;
    Vtestbench_sll_module* __PVT__sll_module;
    
    // PORTS
    VL_IN8(__PVT__i_alu_op,3,0);
    VL_IN(__PVT__i_operand_a,31,0);
    VL_IN(__PVT__i_operand_b,31,0);
    VL_OUT(__PVT__o_alu_data,31,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__equal;
    CData/*0:0*/ __PVT__less;
    CData/*0:0*/ __PVT__u_equal;
    CData/*0:0*/ __PVT__u_less;
    IData/*31:0*/ __PVT__sll_data;
    IData/*31:0*/ __PVT__sra_data;
    IData/*31:0*/ __PVT__srl_data;
    IData/*31:0*/ __PVT__sum;
    IData/*31:0*/ __PVT__diff;
    
    // LOCAL VARIABLES
    CData/*4:0*/ __Vcellinp__srl_module__i_imme;
    CData/*4:0*/ __Vcellinp__sra_module__i_imme;
    CData/*4:0*/ __Vcellinp__sll_module__i_imme;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_alu);  ///< Copying not allowed
  public:
    Vtestbench_alu(const char* name = "TOP");
    ~Vtestbench_alu();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__execute_unit__alu_module__4(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__execute_unit__alu_module__5(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__execute_unit__alu_module__6(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _settle__TOP__testbench__TAGE__execute_unit__alu_module__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__execute_unit__alu_module__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__execute_unit__alu_module__3(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
