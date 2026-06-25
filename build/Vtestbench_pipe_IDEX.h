// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_PIPE_IDEX_H_
#define _VTESTBENCH_PIPE_IDEX_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;


//----------

VL_MODULE(Vtestbench_pipe_IDEX) {
  public:
    
    // PORTS
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_IN8(__PVT__i_IDEX_en,0,0);
    VL_IN8(__PVT__i_IDEX_predict_direct,0,0);
    VL_INW(__PVT__i_decode_stage_bus,189,0,6);
    VL_OUTW(__PVT__o_IDEX_bus,189,0,6);
    
    // LOCAL SIGNALS
    CData/*4:0*/ __PVT__rd_addr;
    CData/*4:0*/ __PVT__rs1_addr;
    CData/*4:0*/ __PVT__rs2_addr;
    CData/*3:0*/ __PVT__alu_op;
    CData/*0:0*/ __PVT__rd_wren;
    CData/*0:0*/ __PVT__lsu_wren;
    CData/*0:0*/ __PVT__signed_flag;
    CData/*0:0*/ __PVT__opa_sel;
    CData/*0:0*/ __PVT__opb_sel;
    CData/*0:0*/ __PVT__instr_vld;
    CData/*1:0*/ __PVT__wb_sel;
    CData/*1:0*/ __PVT__bit_mask;
    CData/*0:0*/ __PVT__IDEX_predict_direct;
    IData/*31:0*/ __PVT__rs1_data;
    IData/*31:0*/ __PVT__rs2_data;
    IData/*31:0*/ __PVT__imme_data;
    IData/*31:0*/ __PVT__pc;
    IData/*31:0*/ __PVT__instruction;
    
    // LOCAL VARIABLES
    CData/*4:0*/ __Vdly__rd_addr;
    CData/*4:0*/ __Vdly__rs1_addr;
    CData/*4:0*/ __Vdly__rs2_addr;
    CData/*0:0*/ __Vdly__instr_vld;
    CData/*1:0*/ __Vdly__wb_sel;
    CData/*0:0*/ __Vdly__rd_wren;
    CData/*0:0*/ __Vdly__lsu_wren;
    CData/*0:0*/ __Vdly__signed_flag;
    CData/*1:0*/ __Vdly__bit_mask;
    CData/*0:0*/ __Vdly__opa_sel;
    CData/*0:0*/ __Vdly__opb_sel;
    CData/*3:0*/ __Vdly__alu_op;
    CData/*0:0*/ __Vdly__IDEX_predict_direct;
    IData/*31:0*/ __Vdly__pc;
    IData/*31:0*/ __Vdly__instruction;
    IData/*31:0*/ __Vdly__rs1_data;
    IData/*31:0*/ __Vdly__rs2_data;
    IData/*31:0*/ __Vdly__imme_data;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_pipe_IDEX);  ///< Copying not allowed
  public:
    Vtestbench_pipe_IDEX(const char* name = "TOP");
    ~Vtestbench_pipe_IDEX();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__testbench__TAGE__idex_pipe_unit__2(Vtestbench__Syms* __restrict vlSymsp);
    static void _settle__TOP__testbench__TAGE__idex_pipe_unit__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
