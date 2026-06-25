// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTESTBENCH_H_
#define _VTESTBENCH_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtestbench__Syms;
class Vtestbench_VerilatedVcd;
class Vtestbench_testbench;


//----------

VL_MODULE(Vtestbench) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vtestbench_testbench* __PVT__testbench;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
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
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __VinpClk__TOP__testbench__TAGE__decode_unit__instr_decode0____PVT__i_rst_n;
    CData/*0:0*/ __VinpClk__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table____PVT__i_rst_n;
    CData/*0:0*/ __VinpClk__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg____PVT__i_rst_n;
    CData/*0:0*/ __Vclklast__TOP__testbench__scoreboard____PVT__i_clk;
    CData/*0:0*/ __Vclklast__TOP__testbench__readResultUnit____PVT__i_clk;
    CData/*0:0*/ __Vclklast__TOP__testbench__driverUnit____PVT__i_clk;
    CData/*0:0*/ __Vclklast__TOP__testbench__cycleCountUnit____PVT__i_clk;
    CData/*0:0*/ __Vclklast__TOP__testbench__TAGE____PVT__i_clk;
    CData/*0:0*/ __Vclklast__TOP__testbench__TAGE__ifid_pipe_unit____PVT__i_clk;
    CData/*0:0*/ __Vclklast__TOP__testbench__TAGE__exmem_pipe_unit____PVT__i_clk;
    CData/*0:0*/ __Vclklast__TOP__testbench__TAGE__idex_pipe_unit____PVT__i_clk;
    CData/*0:0*/ __Vclklast__TOP__testbench__TAGE__memwb_pipe_unit____PVT__i_clk;
    CData/*0:0*/ __Vclklast__TOP__testbench__TAGE__lsu_unit__input_buffer_module____PVT__i_clk;
    CData/*0:0*/ __Vclklast__TOP__testbench__TAGE__lsu_unit__output_buffer_module____PVT__i_clk;
    CData/*0:0*/ __Vclklast__TOP__testbench__TAGE__lsu_unit__memory_block____PVT__i_clk;
    CData/*0:0*/ __Vclklast__TOP__testbench__TAGE__fetch_unit__pc_generator____PVT__i_clk;
    CData/*0:0*/ __Vclklast__TOP__testbench__TAGE__decode_unit__instr_decode0____PVT__i_clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__testbench__TAGE__decode_unit__instr_decode0____PVT__i_rst_n;
    CData/*0:0*/ __Vclklast__TOP__testbench__TAGE__fetch_unit__branch_predictor__btb_unit____PVT__i_clk;
    CData/*0:0*/ __Vclklast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit____PVT__i_clk;
    CData/*0:0*/ __Vclklast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table____PVT__i_clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table____PVT__i_rst_n;
    CData/*0:0*/ __Vclklast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__pattern_history_table____PVT__i_clk;
    CData/*0:0*/ __Vclklast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg____PVT__i_clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg____PVT__i_rst_n;
    CData/*5:0*/ __Vchglast__TOP__testbench__TAGE__harzard_detection_unit__o_harzard_bus;
    CData/*0:0*/ __Vchglast__TOP__testbench__TAGE__decode_unit__instr_decode0__i_rst_n;
    CData/*0:0*/ __Vchglast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__bias_bit_table__i_rst_n;
    CData/*0:0*/ __Vchglast__TOP__testbench__TAGE__fetch_unit__branch_predictor__agree_unit__branch_history_reg__i_rst_n;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__sig_less;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__execute_unit__branch_control_unit__branch_compare__sig_equal;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__sig_less;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__unsigned_compare__sig_equal;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__sig_less;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__signed_compare__sig_equal;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__sig_less;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_BASEcmp__sig_equal;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__sig_less;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MEM_RANGEcmp__sig_equal;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__sig_less;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__lsu_unit__input_buffer_module__SWITCH_BASEcmp__sig_equal;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__sig_less;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__lsu_unit__output_buffer_module__LEDR_BASEcmp__sig_equal;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus1__sig_carry;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus2__sig_carry;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__lsu_unit__memory_block__MemPlus3__sig_carry;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__writeback_unit__PCplus4__sig_carry;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__full_adder__sig_carry;
    QData/*32:0*/ __Vchglast__TOP__testbench__TAGE__execute_unit__alu_module__full_subtractor__sig_borrow;
    CData/*0:0*/ __Vm_traceActivity[15];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vtestbench__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestbench);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vtestbench(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vtestbench();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vtestbench__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vtestbench__Syms* symsp, bool first);
  private:
    static QData _change_request(Vtestbench__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vtestbench__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(Vtestbench__Syms* __restrict vlSymsp);
    static void _combo__TOP__8(Vtestbench__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vtestbench__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__6(Vtestbench__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(Vtestbench__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__2(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__3(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__5(Vtestbench__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
