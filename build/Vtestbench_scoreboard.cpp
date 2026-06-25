// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench_scoreboard.h"
#include "Vtestbench__Syms.h"

//==========

VL_INLINE_OPT void Vtestbench_scoreboard::_sequent__TOP__testbench__scoreboard__2(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_scoreboard::_sequent__TOP__testbench__scoreboard__2\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((((((((4U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug) 
               | (0x20U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
              | (0x108U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
             | (0x200U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
            | (0x2e4U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
           | (0x3ccU == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
          | (0x4b4U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
         | (0x57cU == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
        if (VL_UNLIKELY((4U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
            VL_WRITEF("TEST for ISA\n");
            vlSymsp->TOP__testbench__scoreboard.__PVT__instr_vld = 1U;
        } else {
            if (VL_UNLIKELY((0x20U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                VL_WRITEF("[%9t]:: 1::ADD...............",
                          64,VL_TIME_UNITED_Q(1));
            } else {
                if (VL_UNLIKELY((0x108U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                    if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                        VL_WRITEF("PASSED\n");
                    } else {
                        VL_WRITEF("FAILED\n");
                    }
                    VL_WRITEF("[%9t]:: 2::SUB...............",
                              64,VL_TIME_UNITED_Q(1));
                } else {
                    if (VL_UNLIKELY((0x200U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                        if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                            VL_WRITEF("PASSED\n");
                        } else {
                            VL_WRITEF("FAILED\n");
                        }
                        VL_WRITEF("[%9t]:: 3::XOR...............",
                                  64,VL_TIME_UNITED_Q(1));
                    } else {
                        if (VL_UNLIKELY((0x2e4U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                            if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                VL_WRITEF("PASSED\n");
                            } else {
                                VL_WRITEF("FAILED\n");
                            }
                            VL_WRITEF("[%9t]:: 4::OR................",
                                      64,VL_TIME_UNITED_Q(1));
                        } else {
                            if (VL_UNLIKELY((0x3ccU 
                                             == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                                if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                    VL_WRITEF("PASSED\n");
                                } else {
                                    VL_WRITEF("FAILED\n");
                                }
                                VL_WRITEF("[%9t]:: 5::AND...............",
                                          64,VL_TIME_UNITED_Q(1));
                            } else {
                                if ((0x4b4U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) {
                                    if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                        VL_WRITEF("PASSED\n");
                                    } else {
                                        VL_WRITEF("FAILED\n");
                                    }
                                    VL_WRITEF("[%9t]:: 6::SLL...............",
                                              64,VL_TIME_UNITED_Q(1));
                                } else {
                                    if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                        VL_WRITEF("PASSED\n");
                                    } else {
                                        VL_WRITEF("FAILED\n");
                                    }
                                    VL_WRITEF("[%9t]:: 7::SRL...............",
                                              64,VL_TIME_UNITED_Q(1));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (((((((((0x660U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug) 
                   | (0x73cU == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                  | (0x808U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                 | (0x8d4U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                | (0x964U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
               | (0x9f4U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
              | (0xa80U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
             | (0xb04U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
            if (VL_UNLIKELY((0x660U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                    VL_WRITEF("PASSED\n");
                } else {
                    VL_WRITEF("FAILED\n");
                }
                VL_WRITEF("[%9t]:: 8::SRA...............",
                          64,VL_TIME_UNITED_Q(1));
            } else {
                if (VL_UNLIKELY((0x73cU == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                    if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                        VL_WRITEF("PASSED\n");
                    } else {
                        VL_WRITEF("FAILED\n");
                    }
                    VL_WRITEF("[%9t]:: 9::SLT...............",
                              64,VL_TIME_UNITED_Q(1));
                } else {
                    if (VL_UNLIKELY((0x808U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                        if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                            VL_WRITEF("PASSED\n");
                        } else {
                            VL_WRITEF("FAILED\n");
                        }
                        VL_WRITEF("[%9t]::10::SLTU..............",
                                  64,VL_TIME_UNITED_Q(1));
                    } else {
                        if (VL_UNLIKELY((0x8d4U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                            if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                VL_WRITEF("PASSED\n");
                            } else {
                                VL_WRITEF("FAILED\n");
                            }
                            VL_WRITEF("[%9t]::11::ADDI..............",
                                      64,VL_TIME_UNITED_Q(1));
                        } else {
                            if (VL_UNLIKELY((0x964U 
                                             == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                                if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                    VL_WRITEF("PASSED\n");
                                } else {
                                    VL_WRITEF("FAILED\n");
                                }
                                VL_WRITEF("[%9t]::12::XORI..............",
                                          64,VL_TIME_UNITED_Q(1));
                            } else {
                                if (VL_UNLIKELY((0x9f4U 
                                                 == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                                    if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                        VL_WRITEF("PASSED\n");
                                    } else {
                                        VL_WRITEF("FAILED\n");
                                    }
                                    VL_WRITEF("[%9t]::13::ORI...............",
                                              64,VL_TIME_UNITED_Q(1));
                                } else {
                                    if ((0xa80U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) {
                                        if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                            VL_WRITEF("PASSED\n");
                                        } else {
                                            VL_WRITEF("FAILED\n");
                                        }
                                        VL_WRITEF("[%9t]::14::ANDI..............",
                                                  64,
                                                  VL_TIME_UNITED_Q(1));
                                    } else {
                                        if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                            VL_WRITEF("PASSED\n");
                                        } else {
                                            VL_WRITEF("FAILED\n");
                                        }
                                        VL_WRITEF("[%9t]::15::SLLI..............",
                                                  64,
                                                  VL_TIME_UNITED_Q(1));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (((((((((0xb94U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug) 
                       | (0xc34U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                      | (0xcd8U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                     | (0xd50U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                    | (0xdc8U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                   | (0xe34U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                  | (0xe80U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                 | (0xf34U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                if (VL_UNLIKELY((0xb94U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                    if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                        VL_WRITEF("PASSED\n");
                    } else {
                        VL_WRITEF("FAILED\n");
                    }
                    VL_WRITEF("[%9t]::16::SRLI..............",
                              64,VL_TIME_UNITED_Q(1));
                } else {
                    if (VL_UNLIKELY((0xc34U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                        if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                            VL_WRITEF("PASSED\n");
                        } else {
                            VL_WRITEF("FAILED\n");
                        }
                        VL_WRITEF("[%9t]::17::SRAI..............",
                                  64,VL_TIME_UNITED_Q(1));
                    } else {
                        if (VL_UNLIKELY((0xcd8U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                            if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                VL_WRITEF("PASSED\n");
                            } else {
                                VL_WRITEF("FAILED\n");
                            }
                            VL_WRITEF("[%9t]::18::SLTI..............",
                                      64,VL_TIME_UNITED_Q(1));
                        } else {
                            if (VL_UNLIKELY((0xd50U 
                                             == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                                if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                    VL_WRITEF("PASSED\n");
                                } else {
                                    VL_WRITEF("FAILED\n");
                                }
                                VL_WRITEF("[%9t]::19::SLTIU.............",
                                          64,VL_TIME_UNITED_Q(1));
                            } else {
                                if (VL_UNLIKELY((0xdc8U 
                                                 == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                                    if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                        VL_WRITEF("PASSED\n");
                                    } else {
                                        VL_WRITEF("FAILED\n");
                                    }
                                    VL_WRITEF("[%9t]::20::LUI...............",
                                              64,VL_TIME_UNITED_Q(1));
                                } else {
                                    if (VL_UNLIKELY(
                                                    (0xe34U 
                                                     == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                                        if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                            VL_WRITEF("PASSED\n");
                                        } else {
                                            VL_WRITEF("FAILED\n");
                                        }
                                        VL_WRITEF("[%9t]::21::AUIPC.............",
                                                  64,
                                                  VL_TIME_UNITED_Q(1));
                                    } else {
                                        if ((0xe80U 
                                             == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) {
                                            if ((1U 
                                                 == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                                VL_WRITEF("PASSED\n");
                                            } else {
                                                VL_WRITEF("FAILED\n");
                                            }
                                            VL_WRITEF("[%9t]::22::LW................",
                                                      64,
                                                      VL_TIME_UNITED_Q(1));
                                        } else {
                                            if ((1U 
                                                 == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                                VL_WRITEF("PASSED\n");
                                            } else {
                                                VL_WRITEF("FAILED\n");
                                            }
                                            VL_WRITEF("[%9t]::23::LH................",
                                                      64,
                                                      VL_TIME_UNITED_Q(1));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (((((((((0xfb4U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug) 
                           | (0x1024U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                          | (0x10a8U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                         | (0x1118U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                        | (0x1180U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                       | (0x1210U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                      | (0x1298U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                     | (0x12f0U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                    if (VL_UNLIKELY((0xfb4U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                        if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                            VL_WRITEF("PASSED\n");
                        } else {
                            VL_WRITEF("FAILED\n");
                        }
                        VL_WRITEF("[%9t]::24::LB................",
                                  64,VL_TIME_UNITED_Q(1));
                    } else {
                        if (VL_UNLIKELY((0x1024U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                            if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                VL_WRITEF("PASSED\n");
                            } else {
                                VL_WRITEF("FAILED\n");
                            }
                            VL_WRITEF("[%9t]::25::LHU...............",
                                      64,VL_TIME_UNITED_Q(1));
                        } else {
                            if (VL_UNLIKELY((0x10a8U 
                                             == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                                if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                    VL_WRITEF("PASSED\n");
                                } else {
                                    VL_WRITEF("FAILED\n");
                                }
                                VL_WRITEF("[%9t]::26::LBU...............",
                                          64,VL_TIME_UNITED_Q(1));
                            } else {
                                if (VL_UNLIKELY((0x1118U 
                                                 == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                                    if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                        VL_WRITEF("PASSED\n");
                                    } else {
                                        VL_WRITEF("FAILED\n");
                                    }
                                    VL_WRITEF("[%9t]::27::SW................",
                                              64,VL_TIME_UNITED_Q(1));
                                } else {
                                    if (VL_UNLIKELY(
                                                    (0x1180U 
                                                     == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                                        if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                            VL_WRITEF("PASSED\n");
                                        } else {
                                            VL_WRITEF("FAILED\n");
                                        }
                                        VL_WRITEF("[%9t]::28::SH................",
                                                  64,
                                                  VL_TIME_UNITED_Q(1));
                                    } else {
                                        if (VL_UNLIKELY(
                                                        (0x1210U 
                                                         == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                                            if ((1U 
                                                 == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                                VL_WRITEF("PASSED\n");
                                            } else {
                                                VL_WRITEF("FAILED\n");
                                            }
                                            VL_WRITEF("[%9t]::29::SB................",
                                                      64,
                                                      VL_TIME_UNITED_Q(1));
                                        } else {
                                            if ((0x1298U 
                                                 == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) {
                                                if (
                                                    (1U 
                                                     == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                                    VL_WRITEF("PASSED\n");
                                                } else {
                                                    VL_WRITEF("FAILED\n");
                                                }
                                                VL_WRITEF("[%9t]::30::misaligned........",
                                                          64,
                                                          VL_TIME_UNITED_Q(1));
                                            } else {
                                                if (
                                                    (1U 
                                                     == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                                    VL_WRITEF("PASSED\n");
                                                } else {
                                                    VL_WRITEF("FAILED\n");
                                                }
                                                VL_WRITEF("[%9t]::31::BEQ...............",
                                                          64,
                                                          VL_TIME_UNITED_Q(1));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (((((((((0x1328U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug) 
                               | (0x1360U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                              | (0x13c8U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                             | (0x1434U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                            | (0x149cU == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                           | (0x1508U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                          | (0x15c4U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) 
                         | (0x1664U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                        if (VL_UNLIKELY((0x1328U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                            if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                VL_WRITEF("PASSED\n");
                            } else {
                                VL_WRITEF("FAILED\n");
                            }
                            VL_WRITEF("[%9t]::32::BNE...............",
                                      64,VL_TIME_UNITED_Q(1));
                        } else {
                            if (VL_UNLIKELY((0x1360U 
                                             == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                                if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                    VL_WRITEF("PASSED\n");
                                } else {
                                    VL_WRITEF("FAILED\n");
                                }
                                VL_WRITEF("[%9t]::33::BLT...............",
                                          64,VL_TIME_UNITED_Q(1));
                            } else {
                                if (VL_UNLIKELY((0x13c8U 
                                                 == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                                    if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                        VL_WRITEF("PASSED\n");
                                    } else {
                                        VL_WRITEF("FAILED\n");
                                    }
                                    VL_WRITEF("[%9t]::34::BGE...............",
                                              64,VL_TIME_UNITED_Q(1));
                                } else {
                                    if (VL_UNLIKELY(
                                                    (0x1434U 
                                                     == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                                        if ((1U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                            VL_WRITEF("PASSED\n");
                                        } else {
                                            VL_WRITEF("FAILED\n");
                                        }
                                        VL_WRITEF("[%9t]::35::BLTU..............",
                                                  64,
                                                  VL_TIME_UNITED_Q(1));
                                    } else {
                                        if (VL_UNLIKELY(
                                                        (0x149cU 
                                                         == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                                            if ((1U 
                                                 == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                                VL_WRITEF("PASSED\n");
                                            } else {
                                                VL_WRITEF("FAILED\n");
                                            }
                                            VL_WRITEF("[%9t]::36::BGEU..............",
                                                      64,
                                                      VL_TIME_UNITED_Q(1));
                                        } else {
                                            if (VL_UNLIKELY(
                                                            (0x1508U 
                                                             == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                                                if (
                                                    (1U 
                                                     == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                                    VL_WRITEF("PASSED\n");
                                                } else {
                                                    VL_WRITEF("FAILED\n");
                                                }
                                                VL_WRITEF("[%9t]::37::JAL...............",
                                                          64,
                                                          VL_TIME_UNITED_Q(1));
                                            } else {
                                                if (
                                                    (0x15c4U 
                                                     == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) {
                                                    if (
                                                        (1U 
                                                         == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                                        VL_WRITEF("PASSED\n");
                                                    } else {
                                                        VL_WRITEF("FAILED\n");
                                                    }
                                                    VL_WRITEF("[%9t]::38::JALR..............",
                                                              64,
                                                              VL_TIME_UNITED_Q(1));
                                                } else {
                                                    if (
                                                        (1U 
                                                         == vlSymsp->TOP__testbench__scoreboard.__PVT__o_io_ledr)) {
                                                        VL_WRITEF("PASSED\n");
                                                    } else {
                                                        VL_WRITEF("FAILED\n");
                                                    }
                                                    VL_WRITEF("[%9t]::39::illegal_insn......",
                                                              64,
                                                              VL_TIME_UNITED_Q(1));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((0x166cU == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) {
                            if (vlSymsp->TOP__testbench__scoreboard.__PVT__o_instr_vld) {
                                vlSymsp->TOP__testbench__scoreboard.__PVT__instr_vld = 0U;
                            }
                        } else {
                            if ((0x1674U == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug)) {
                                if (vlSymsp->TOP__testbench__scoreboard.__PVT__o_instr_vld) {
                                    vlSymsp->TOP__testbench__scoreboard.__PVT__instr_vld = 0U;
                                }
                            } else {
                                if (VL_UNLIKELY((0x1680U 
                                                 == vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug))) {
                                    if (vlSymsp->TOP__testbench__scoreboard.__PVT__instr_vld) {
                                        VL_WRITEF("PASSED\n");
                                    } else {
                                        VL_WRITEF("FAILED\n");
                                    }
                                    VL_WRITEF("Cycle count %20#\n",
                                              64,vlSymsp->TOP__testbench__scoreboard.__PVT__o_counter);
                                    VL_WRITEF("Instruction count %20#\n",
                                              64,vlSymsp->TOP__testbench__scoreboard.__PVT__o_instr_cnt);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vtestbench_scoreboard::_combo__TOP__testbench__scoreboard__3(Vtestbench__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtestbench_scoreboard::_combo__TOP__testbench__scoreboard__3\n"); );
    Vtestbench* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__testbench__scoreboard.__PVT__pc_debug 
        = ((IData)(vlSymsp->TOP__testbench__scoreboard.__PVT__o_instr_vld)
            ? vlSymsp->TOP__testbench__scoreboard.__PVT__o_pc_debug
            : 0U);
}
