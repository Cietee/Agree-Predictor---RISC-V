# -*- makefile -*-
# Cấu hình dự án - Thay đổi theo project của bạn
TOP_MODULE     = testbench
VERILOG_SRC   := $(wildcard source/*.sv) $(wildcard top_riscv_test/*.sv)
CPP_TESTBENCH := top_riscv_test/tb_top_riscv.cpp
#SV_TESTBENCH  := sim/tb.sv  # (Optional) Cho testbench hybrid
WORK_DIR      := build

# Tùy chọn Verilator
VERILATOR      = verilator
VERILATOR_OPTS += --cc
VERILATOR_OPTS += --top-module $(TOP_MODULE)
VERILATOR_OPTS += -Wall -Wno-fatal
VERILATOR_OPTS += --MMD --build
VERILATOR_OPTS += --trace  # Bật waveform tracing
VERILATOR_OPTS += -CFLAGS "-std=c++17"
VERILATOR_OPTS += -LDFLAGS "-pthread"

# Tối ưu hóa (bật khi release)
OPTIMIZE     ?= 0
THREADS      ?= 0
DEBUG        ?= 0
COVERAGE     ?= 0

ifeq ($(OPTIMIZE),1)
    VERILATOR_OPTS += -O3 --x-assign fast --x-initial fast
else
    VERILATOR_OPTS += -O0
endif

ifeq ($(THREADS),1)
    VERILATOR_OPTS += --threads 4
endif

ifeq ($(DEBUG),1)
    VERILATOR_OPTS += -ggdb
    CPPFLAGS       += -DDEBUG_ENABLE
endif

ifeq ($(COVERAGE),1)
    VERILATOR_OPTS += --coverage
    CXXFLAGS       += -fprofile-arcs -ftest-coverage
    LDFLAGS        += -lgcov
endif

# Cấu hình trình biên dịch C++
CXX          = g++
CXXFLAGS    += -std=c++17
CXXFLAGS    += -I$(WORK_DIR)
CXXFLAGS    += -I$(VERILATOR_ROOT)/include
CXXFLAGS    += -Iinclude
LDLIBS      += -lstdc++fs

# Tự động thêm testbench SystemVerilog nếu tồn tại
ifneq ("$(wildcard $(SV_TESTBENCH))","")
    VERILATOR_OPTS += --sv $(SV_TESTBENCH)
endif

# Mục tiêu chính
all: $(WORK_DIR)/V$(TOP_MODULE)

# Biên dịch mô phỏng
$(WORK_DIR)/V$(TOP_MODULE): $(VERILOG_SRC) $(CPP_TESTBENCH) $(SV_TESTBENCH)
	$(VERILATOR) $(VERILATOR_OPTS) \
		$(VERILOG_SRC) \
		--exe $(CPP_TESTBENCH) \
		--Mdir $(WORK_DIR)
	$(MAKE) -C $(WORK_DIR) -f V$(TOP_MODULE).mk \
		CXX="$(CXX)" \
		CFLAGS="$(CXXFLAGS)" \
		LDFLAGS="$(LDLIBS) $(LDFLAGS)"

# Chạy mô phỏng
run: $(WORK_DIR)/V$(TOP_MODULE)
	@echo "🚀 Starting simulation..."
	$(WORK_DIR)/V$(TOP_MODULE) +verilator+rand+reset+2

# Xem waveform
wave: $(TOP_MODULE).vcd
	gtkwave $< &

# Tạo coverage report (nếu bật)
coverage: run
	lcov --capture --directory $(WORK_DIR) --output-file coverage.info
	genhtml coverage.info --output-directory coverage_report
	@echo "📊 Coverage report: file://$(PWD)/coverage_report/index.html"

# Dọn dẹp
clean:
	rm -rf $(WORK_DIR) *.vcd *.log coverage.info coverage_report

# Include file phụ thuộc
-include $(wildcard $(WORK_DIR)/*.d)

.PHONY: all run wave clean coverage