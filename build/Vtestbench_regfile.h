// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef _VTESTBENCH_REGFILE_H_
#define _VTESTBENCH_REGFILE_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;


//----------

VL_MODULE(Vtestbench_regfile) {
  public:
    
    // PORTS
    VL_IN8(__PVT__i_clk,0,0);
    VL_IN8(__PVT__i_rst_n,0,0);
    VL_IN8(__PVT__i_rd_wren,0,0);
    VL_IN8(__PVT__i_rs1_addr,4,0);
    VL_IN8(__PVT__i_rs2_addr,4,0);
    VL_IN(__PVT__i_rd_addr,31,0);
    VL_IN(__PVT__i_rd_data,31,0);
    VL_OUT(__PVT__o_rs1_data,31,0);
    VL_OUT(__PVT__o_rs2_data,31,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__reg0;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
    IData/*31:0*/ __PVT__registers[32];
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vdlyvset__registers__v0;
    CData/*4:0*/ __Vdlyvdim0__registers__v1;
    CData/*0:0*/ __Vdlyvset__registers__v1;
    CData/*0:0*/ __Vdlyvset__registers__v2;
    CData/*0:0*/ __Vdlyvset__registers__v3;
    CData/*0:0*/ __Vdlyvset__registers__v4;
    CData/*0:0*/ __Vdlyvset__registers__v5;
    CData/*0:0*/ __Vdlyvset__registers__v6;
    CData/*0:0*/ __Vdlyvset__registers__v7;
    CData/*0:0*/ __Vdlyvset__registers__v8;
    CData/*0:0*/ __Vdlyvset__registers__v9;
    CData/*0:0*/ __Vdlyvset__registers__v10;
    CData/*0:0*/ __Vdlyvset__registers__v11;
    CData/*0:0*/ __Vdlyvset__registers__v12;
    CData/*0:0*/ __Vdlyvset__registers__v13;
    CData/*0:0*/ __Vdlyvset__registers__v14;
    CData/*0:0*/ __Vdlyvset__registers__v15;
    CData/*0:0*/ __Vdlyvset__registers__v16;
    CData/*0:0*/ __Vdlyvset__registers__v17;
    CData/*0:0*/ __Vdlyvset__registers__v18;
    CData/*0:0*/ __Vdlyvset__registers__v19;
    CData/*0:0*/ __Vdlyvset__registers__v20;
    CData/*0:0*/ __Vdlyvset__registers__v21;
    CData/*0:0*/ __Vdlyvset__registers__v22;
    CData/*0:0*/ __Vdlyvset__registers__v23;
    CData/*0:0*/ __Vdlyvset__registers__v24;
    CData/*0:0*/ __Vdlyvset__registers__v25;
    CData/*0:0*/ __Vdlyvset__registers__v26;
    CData/*0:0*/ __Vdlyvset__registers__v27;
    CData/*0:0*/ __Vdlyvset__registers__v28;
    CData/*0:0*/ __Vdlyvset__registers__v29;
    CData/*0:0*/ __Vdlyvset__registers__v30;
    CData/*0:0*/ __Vdlyvset__registers__v31;
    CData/*0:0*/ __Vdlyvset__registers__v32;
    IData/*31:0*/ __Vdlyvval__registers__v1;
    
    // INTERNAL VARIABLES
  private:
    Vtestbench__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench_regfile);  ///< Copying not allowed
  public:
    Vtestbench_regfile(const char* name = "TOP");
    ~Vtestbench_regfile();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
    static void _combo__TOP__testbench__TAGE__decode_unit__instr_decode0__3(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__testbench__TAGE__decode_unit__instr_decode0__2(Vtestbench__Syms* __restrict vlSymsp);
    static void _settle__TOP__testbench__TAGE__decode_unit__instr_decode0__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
