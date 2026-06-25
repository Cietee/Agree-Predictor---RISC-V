// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_BLOCK_DECODE_H_
#define _VTESTBENCH_BLOCK_DECODE_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;
class Vtestbench_regfile;
class Vtestbench_immediate_gen;
class Vtestbench_control_unit;


//----------

VL_MODULE(Vtestbench_block_DECODE) {
  public:
    // CELLS
    Vtestbench_regfile* __PVT__instr_decode0;
    Vtestbench_immediate_gen* __PVT__instr_decode1;
    Vtestbench_control_unit* __PVT__instr_decode2;
    
    // PORTS
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_IN8(__PVT__i_rd_wren,0,0);
    VL_IN8(__PVT__i_rd_addr,4,0);
    VL_OUT16(__PVT__o_ctrl_bus,13,0);
    VL_IN(__PVT__i_instr,31,0);
    VL_IN(__PVT__i_rd_data,31,0);
    VL_OUTW(__PVT__o_decode_bus,110,0,4);
    
    // LOCAL SIGNALS
    IData/*31:0*/ __PVT__rs1;
    IData/*31:0*/ __PVT__rs2;
    
    // LOCAL VARIABLES
    CData/*4:0*/ __Vcellinp__instr_decode0__i_rs2_addr;
    CData/*4:0*/ __Vcellinp__instr_decode0__i_rs1_addr;
    IData/*31:0*/ __Vcellinp__instr_decode0__i_rd_addr;
    IData/*31:0*/ __Vcellout__instr_decode1__o_imme_data;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_block_DECODE);  ///< Copying not allowed
  public:
    Vtestbench_block_DECODE(const char* name = "TOP");
    ~Vtestbench_block_DECODE();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__decode_unit__4(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__decode_unit__5(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__decode_unit__6(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__decode_unit__7(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _settle__TOP__testbench__TAGE__decode_unit__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__decode_unit__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__decode_unit__3(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
