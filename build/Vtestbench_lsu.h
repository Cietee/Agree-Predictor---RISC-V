// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_LSU_H_
#define _VTESTBENCH_LSU_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;
class Vtestbench_data_memory;
class Vtestbench_io_input_buffer;
class Vtestbench_io_output_buffer;


//----------

VL_MODULE(Vtestbench_lsu) {
  public:
    // CELLS
    Vtestbench_data_memory* __PVT__memory_block;
    Vtestbench_io_input_buffer* __PVT__input_buffer_module;
    Vtestbench_io_output_buffer* __PVT__output_buffer_module;
    
    // PORTS
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_IN8(__PVT__i_lsu_wren,0,0);
    VL_IN8(__PVT__i_bit_mask,1,0);
    VL_IN(__PVT__i_lsu_addr,31,0);
    VL_IN(__PVT__i_st_data,31,0);
    VL_OUT(__PVT__o_lsu_data,31,0);
    VL_IN(__PVT__i_io_sw,31,0);
    VL_OUT(__PVT__o_io_ledr,31,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__memory_select;
    CData/*0:0*/ __PVT__input_buffer_select;
    CData/*0:0*/ __PVT__output_buffer_select;
    CData/*3:0*/ __PVT__select_out_ld_data;
    IData/*31:0*/ __PVT__memory_data;
    IData/*31:0*/ __PVT__input_buffer_data;
    IData/*31:0*/ __PVT__output_buffer_data;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_lsu);  ///< Copying not allowed
  public:
    Vtestbench_lsu(const char* name = "TOP");
    ~Vtestbench_lsu();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__lsu_unit__5(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__lsu_unit__7(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__lsu_unit__8(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__lsu_unit__9(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__testbench__TAGE__lsu_unit__6(Vtestbench__Syms* __restrict vlSymsp);
    static void _settle__TOP__testbench__TAGE__lsu_unit__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__lsu_unit__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__lsu_unit__3(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__lsu_unit__4(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
