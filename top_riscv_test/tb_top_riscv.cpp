#include "Vtestbench.h"        // Thay bằng tên thực tế của module bạn đang test, ví dụ: Vpipeline
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>

#define RESETPERIOD 5
#define FINISH      100000

vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vtestbench* top = new Vtestbench;

    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("testbench.vcd");

    // Init signals
    top->i_clk = 0;
    top->i_rst_n = 0;
    uint64_t instr_count = 0;
    uint64_t cycle_count = 0;
    while (!Verilated::gotFinish() && main_time < FINISH) {
        // Toggle clock
        top->i_clk = !top->i_clk;

        // Deassert reset sau RESETPERIOD cycles
        if (main_time > RESETPERIOD) {
            top->i_rst_n = 1;
        }
        top->eval();         // Đánh giá thiết kế
        tfp->dump(main_time); // Ghi vào VCD

        main_time++;
    }
    tfp->close();
    delete tfp;
    delete top;
    return 0;
}
