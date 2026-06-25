// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_TESTBENCH_H_
#define _VTESTBENCH_TESTBENCH_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;
class Vtestbench_driver;
class Vtestbench_top_riscv;
class Vtestbench_cycle_count;
class Vtestbench_read_result;
class Vtestbench_scoreboard;


//----------

VL_MODULE(Vtestbench_testbench) {
  public:
    // CELLS
    Vtestbench_driver* __PVT__driverUnit;
    Vtestbench_top_riscv* __PVT__TAGE;
    Vtestbench_cycle_count* __PVT__cycleCountUnit;
    Vtestbench_read_result* __PVT__readResultUnit;
    Vtestbench_scoreboard* __PVT__scoreboard;
    
    // PORTS
    VL_IN8(i_clk,0,0);
    VL_IN8(i_rst_n,0,0);
    VL_OUT8(o_instr_vld,0,0);
    VL_OUT8(o_lsu_wren,0,0);
    VL_OUT(o_EXMEM_instruction,31,0);
    VL_OUT(o_lsu_addr,31,0);
    VL_OUT(o_lsu_data,31,0);
    VL_OUT64(o_misprediction_cnt,63,0);
    VL_OUT64(o_instr_cnt,63,0);
    VL_OUT64(o_counter,63,0);
    VL_OUT64(o_branch_count,63,0);
    VL_OUT64(o_print_signal,63,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__o_misprediction;
    IData/*31:0*/ __PVT__i_io_sw;
    IData/*31:0*/ __PVT__o_io_ledr;
    IData/*31:0*/ __PVT__o_pc_debug;
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vcellout__readResultUnit__o_print_signal;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_testbench);  ///< Copying not allowed
  public:
    Vtestbench_testbench(const char* name = "TOP");
    ~Vtestbench_testbench();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__11(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__12(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__13(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__5(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__testbench__10(Vtestbench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__testbench__7(Vtestbench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__testbench__8(Vtestbench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__testbench__9(Vtestbench__Syms* __restrict vlSymsp);
    static void _settle__TOP__testbench__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__3(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__4(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__6(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
