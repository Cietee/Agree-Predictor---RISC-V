// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_BLOCK_WRITE_BACK_H_
#define _VTESTBENCH_BLOCK_WRITE_BACK_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;
class Vtestbench_sign_extend;
class Vtestbench_full_adder_nbit;


//----------

VL_MODULE(Vtestbench_block_WRITE_BACK) {
  public:
    // CELLS
    Vtestbench_sign_extend* __PVT__mask_module;
    Vtestbench_full_adder_nbit* __PVT__PCplus4;
    
    // PORTS
    VL_IN8(__PVT__i_bit_mask,1,0);
    VL_IN8(__PVT__i_signed_op,0,0);
    VL_IN8(__PVT__i_wb_sel,1,0);
    VL_IN(__PVT__i_lsu_data,31,0);
    VL_IN(__PVT__i_alu_data,31,0);
    VL_IN(__PVT__i_pc,31,0);
    VL_OUT(__PVT__o_wb_data,31,0);
    
    // LOCAL SIGNALS
    IData/*31:0*/ __PVT__pc4;
    IData/*31:0*/ __PVT__lsu_data;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_block_WRITE_BACK);  ///< Copying not allowed
  public:
    Vtestbench_block_WRITE_BACK(const char* name = "TOP");
    ~Vtestbench_block_WRITE_BACK();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__writeback_unit__4(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__testbench__TAGE__writeback_unit__5(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _settle__TOP__testbench__TAGE__writeback_unit__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__writeback_unit__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__testbench__TAGE__writeback_unit__3(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
