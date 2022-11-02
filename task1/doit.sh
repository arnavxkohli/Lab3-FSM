rm -rf obj_dir
rm -f lfsr7.vcd
verilator -Wall --cc --trace lfsr7.sv --exe lfsr_tb.cpp
make -j -C obj_dir/ -f Vlfsr7.mk Vlfsr7
obj_dir/Vlfsr7