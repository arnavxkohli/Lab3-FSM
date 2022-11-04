rm -rf obj_dir
rm -f challenge.vcd
verilator -Wall --cc --trace challenge.sv --exe challenge_tb.cpp
make -j -C obj_dir/ -f Vchallenge.mk Vchallenge
obj_dir/Vchallenge