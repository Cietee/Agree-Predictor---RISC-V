// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_IO_OUTPUT_BUFFER_H_
#define _VTESTBENCH_IO_OUTPUT_BUFFER_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;
class Vtestbench_comparator;


//----------

VL_MODULE(Vtestbench_io_output_buffer) {
  public:
    // CELLS
    Vtestbench_comparator* __PVT__LEDR_BASEcmp;
    
    // PORTS
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_IN8(__PVT__i_lsu_wren,0,0);
    VL_IN8(__PVT__i_bit_mask,1,0);
    VL_OUT8(__PVT__o_output_buffer_select,0,0);
    VL_IN(__PVT__i_lsu_addr,31,0);
    VL_IN(__PVT__i_st_data,31,0);
    VL_OUT(__PVT__o_io_ledr,31,0);
    VL_OUT(__PVT__o_output_buffer_data,31,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__ledr_select;
    IData/*31:0*/ __PVT__bit_masked_data;
    IData/*31:0*/ __PVT__ledrd;
    IData/*31:0*/ __PVT__ledr;
    
    // LOCAL VARIABLES
    IData/*31:0*/ __Vdly__ledr;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_io_output_buffer);  ///< Copying not allowed
  public:
    Vtestbench_io_output_buffer(const char* name = "TOP");
    ~Vtestbench_io_output_buffer();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__lsu_unit__output_buffer_module__4(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__lsu_unit__output_buffer_module__6(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__testbench__TAGE__lsu_unit__output_buffer_module__5(Vtestbench__Syms* __restrict vlSymsp);
    static void _settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__lsu_unit__output_buffer_module__3(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
