// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_read_result.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_read_result::_sequent__TOP__testbench__readResultUnit__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_read_result::_sequent__TOP__testbench__readResultUnit__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__readResultUnit.__Vdly__printed 
        = vlSymsp->TOP__testbench__readResultUnit.__PVT__printed;
    if (vlSymsp->TOP__testbench__readResultUnit.__PVT__i_rst_n) {
        if (VL_UNLIKELY(((((~ (IData)(vlSymsp->TOP__testbench__readResultUnit.__PVT__printed)) 
                           & (0x300U == vlSymsp->TOP__testbench__readResultUnit.__PVT__i_lsu_addr)) 
                          & (0xdeaddeadU == vlSymsp->TOP__testbench__readResultUnit.__PVT__i_lsu_data)) 
                         & (~ (IData)(vlSymsp->TOP__testbench__readResultUnit.__PVT__i_lsu_wren))))) {
            VL_WRITEF("---------------- Program Finished ----------------\n");
            VL_WRITEF("             x3000 check: %x\n",
                      32,vlSymsp->TOP__testbench__readResultUnit.__PVT__i_lsu_data);
            VL_WRITEF("          Finish at time: %10t\n",
                      64,VL_TIME_UNITED_Q(1));
            VL_WRITEF("     Cycle Counter Value: %10#\n",
                      64,vlSymsp->TOP__testbench__readResultUnit.__PVT__o_counter);
            VL_WRITEF("       Total Instruction: %10#\n",
                      64,vlSymsp->TOP__testbench__readResultUnit.__PVT__o_instr_cnt);
            VL_WRITEF("Branch Instruction Count: %10#\n",
                      64,vlSymsp->TOP__testbench__readResultUnit.__PVT__o_branch_count);
            VL_WRITEF("     Misprediction Count: %10#\n",
                      64,vlSymsp->TOP__testbench__readResultUnit.__PVT__o_misprediction_cnt);
            VL_WRITEF("         RESULT at x2000: %x\n",
                      32,vlSymsp->TOP__testbench__readResultUnit.__PVT__result);
            vlSymsp->TOP__testbench__readResultUnit.__Vdly__printed = 1U;
        }
    } else {
        vlSymsp->TOP__testbench__readResultUnit.__Vdly__printed = 0U;
    }
    vlSymsp->TOP__testbench__readResultUnit.__Vdly__result 
        = vlSymsp->TOP__testbench__readResultUnit.__PVT__result;
    vlSymsp->TOP__testbench__readResultUnit.__PVT__printed 
        = vlSymsp->TOP__testbench__readResultUnit.__Vdly__printed;
    if (vlSymsp->TOP__testbench__readResultUnit.__PVT__i_rst_n) {
        if ((0x200U == vlSymsp->TOP__testbench__readResultUnit.__PVT__i_lsu_addr)) {
            vlSymsp->TOP__testbench__readResultUnit.__Vdly__result 
                = vlSymsp->TOP__testbench__readResultUnit.__PVT__i_lsu_data;
        }
    } else {
        vlSymsp->TOP__testbench__readResultUnit.__Vdly__result = 0U;
    }
    vlSymsp->TOP__testbench__readResultUnit.__PVT__o_print_signal 
        = vlSymsp->TOP__testbench__readResultUnit.__PVT__printed;
    vlSymsp->TOP__testbench__readResultUnit.__PVT__result 
        = vlSymsp->TOP__testbench__readResultUnit.__Vdly__result;
}
