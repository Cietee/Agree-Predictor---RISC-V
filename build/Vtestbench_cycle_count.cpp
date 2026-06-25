// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_cycle_count.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_cycle_count::_sequent__TOP__testbench__cycleCountUnit__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_cycle_count::_sequent__TOP__testbench__cycleCountUnit__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__cycleCountUnit.__Vdly__misprediction_count 
        = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__misprediction_count;
    vlSymsp->TOP__testbench__cycleCountUnit.__Vdly__instruction_count 
        = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__instruction_count;
    vlSymsp->TOP__testbench__cycleCountUnit.__Vdly__branch_count 
        = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__branch_count;
    vlSymsp->TOP__testbench__cycleCountUnit.__Vdly__counter 
        = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__counter;
    if (vlSymsp->TOP__testbench__cycleCountUnit.__PVT__i_rst_n) {
        if ((1U & (~ (((0x300U == vlSymsp->TOP__testbench__cycleCountUnit.__PVT__i_lsu_addr) 
                       & (0xdeaddeadU == vlSymsp->TOP__testbench__cycleCountUnit.__PVT__i_lsu_data)) 
                      & (~ (IData)(vlSymsp->TOP__testbench__cycleCountUnit.__PVT__i_lsu_wren)))))) {
            vlSymsp->TOP__testbench__cycleCountUnit.__Vdly__counter 
                = (1ULL + vlSymsp->TOP__testbench__cycleCountUnit.__PVT__counter);
            vlSymsp->TOP__testbench__cycleCountUnit.__Vdly__branch_count 
                = (((IData)(vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_instr_vld) 
                    & (((0x63U == (0x7fU & VL_SEL_IIII(7,32,5,32, vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_EXMEM_instruction, 0U, 7U))) 
                        | (0x67U == (0x7fU & VL_SEL_IIII(7,32,5,32, vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_EXMEM_instruction, 0U, 7U)))) 
                       | (0x6fU == (0x7fU & VL_SEL_IIII(7,32,5,32, vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_EXMEM_instruction, 0U, 7U)))))
                    ? (1ULL + vlSymsp->TOP__testbench__cycleCountUnit.__PVT__branch_count)
                    : vlSymsp->TOP__testbench__cycleCountUnit.__PVT__branch_count);
            vlSymsp->TOP__testbench__cycleCountUnit.__Vdly__instruction_count 
                = (((IData)(vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_instr_vld) 
                    & (0x13U != vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_EXMEM_instruction))
                    ? (1ULL + vlSymsp->TOP__testbench__cycleCountUnit.__PVT__instruction_count)
                    : vlSymsp->TOP__testbench__cycleCountUnit.__PVT__instruction_count);
            vlSymsp->TOP__testbench__cycleCountUnit.__Vdly__misprediction_count 
                = ((IData)(vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_misprediction)
                    ? (1ULL + vlSymsp->TOP__testbench__cycleCountUnit.__PVT__misprediction_count)
                    : vlSymsp->TOP__testbench__cycleCountUnit.__PVT__misprediction_count);
        }
    } else {
        vlSymsp->TOP__testbench__cycleCountUnit.__Vdly__counter = 0ULL;
        vlSymsp->TOP__testbench__cycleCountUnit.__Vdly__instruction_count = 0ULL;
        vlSymsp->TOP__testbench__cycleCountUnit.__Vdly__branch_count = 0ULL;
        vlSymsp->TOP__testbench__cycleCountUnit.__Vdly__misprediction_count = 0ULL;
    }
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__counter 
        = vlSymsp->TOP__testbench__cycleCountUnit.__Vdly__counter;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__branch_count 
        = vlSymsp->TOP__testbench__cycleCountUnit.__Vdly__branch_count;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__instruction_count 
        = vlSymsp->TOP__testbench__cycleCountUnit.__Vdly__instruction_count;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__misprediction_count 
        = vlSymsp->TOP__testbench__cycleCountUnit.__Vdly__misprediction_count;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_counter 
        = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__counter;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_instr_cnt 
        = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__instruction_count;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_misprediction_cnt 
        = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__misprediction_count;
    vlSymsp->TOP__testbench__cycleCountUnit.__PVT__o_branch_count 
        = vlSymsp->TOP__testbench__cycleCountUnit.__PVT__branch_count;
}
