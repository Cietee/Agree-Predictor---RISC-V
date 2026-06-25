// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_DATA_MEMORY_H_
#define _VTESTBENCH_DATA_MEMORY_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;
class Vtestbench_comparator;
class Vtestbench_full_adder_nbit;


//----------

VL_MODULE(Vtestbench_data_memory) {
  public:
    // CELLS
    Vtestbench_comparator* __PVT__MEM_BASEcmp;
    Vtestbench_comparator* __PVT__MEM_RANGEcmp;
    Vtestbench_full_adder_nbit* __PVT__MemPlus1;
    Vtestbench_full_adder_nbit* __PVT__MemPlus2;
    Vtestbench_full_adder_nbit* __PVT__MemPlus3;
    
    // PORTS
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_IN8(__PVT__i_lsu_wren,0,0);
    VL_IN8(__PVT__i_bit_mask,1,0);
    VL_OUT8(__PVT__o_memory_select,0,0);
    VL_IN(__PVT__i_lsu_addr,31,0);
    VL_IN(__PVT__i_st_data,31,0);
    VL_OUT(__PVT__o_memory_data,31,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__mem_base_eq;
    CData/*0:0*/ __PVT__mem_base_gt;
    CData/*0:0*/ __PVT__mem_range_lt;
    CData/*0:0*/ __PVT__mem_range_eq;
    CData/*0:0*/ __PVT__mem_select;
    IData/*31:0*/ __PVT__bit_masked_data;
    IData/*31:0*/ __PVT__addr1;
    IData/*31:0*/ __PVT__addr2;
    IData/*31:0*/ __PVT__addr3;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
    CData/*7:0*/ __PVT__memory[16384];
    
    // LOCAL VARIABLES
    CData/*7:0*/ __Vdlyvval__memory__v0;
    CData/*0:0*/ __Vdlyvset__memory__v0;
    CData/*7:0*/ __Vdlyvval__memory__v1;
    CData/*7:0*/ __Vdlyvval__memory__v2;
    CData/*7:0*/ __Vdlyvval__memory__v3;
    SData/*13:0*/ __Vdlyvdim0__memory__v0;
    SData/*13:0*/ __Vdlyvdim0__memory__v1;
    SData/*13:0*/ __Vdlyvdim0__memory__v2;
    SData/*13:0*/ __Vdlyvdim0__memory__v3;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_data_memory);  ///< Copying not allowed
  public:
    Vtestbench_data_memory(const char* name = "TOP");
    ~Vtestbench_data_memory();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__lsu_unit__memory_block__5(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__lsu_unit__memory_block__7(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__lsu_unit__memory_block__8(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__testbench__TAGE__lsu_unit__memory_block__6(Vtestbench__Syms* __restrict vlSymsp);
    static void _settle__TOP__testbench__TAGE__lsu_unit__memory_block__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__lsu_unit__memory_block__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__lsu_unit__memory_block__3(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__lsu_unit__memory_block__4(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
