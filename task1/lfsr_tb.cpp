#include "Vlfsr7.h"
#include "verilated.h"
#include "verilated_vcd_c.h" 
#include "vbuddy.cpp" 

int main(int argc,char **argv, char **env){
    int i;
    int clk;
    int count;

    Verilated::commandArgs(argc, argv);
    //init top verilog instance 
    Vlfsr7* top = new Vlfsr7;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp= new VerilatedVcdC;
    top->trace (tfp,99);
    tfp->open ("lfsr7.vcd");


    // init Vbuddy
    if (vbdOpen()!=1) return(-1);
    vbdHeader("L3T1: Challenge");

    // initialize simulation inputs
    top->clk = 1;
    top->en = vbdFlag();
    top->rst = 1;

    vbdSetMode(1);

    //run simulation for many clock cycles
    for (i=0; i<300; i++){ // clock cycles
            //dump variables into VCD file and toggle clock
            for (clk=0; clk<2; clk++) {
                tfp->dump (2*i+clk);
                top->clk = !top->clk;
                top->eval();
            }

            // ++++ Send count value to Vbuddy
            // vbdHex(4, (int(top->count) >> 16) & 0XF);
            // vbdHex(3, (int(top->bcd) >> 8) & 0XF);
            vbdHex(2, (int(top->data_out) >> 4) & 0XF);
            vbdHex(1, int(top->data_out) & 0XF);

            vbdBar(top->data_out & 0xFF);

            vbdCycle(i+1);

            // having issues with the led display, uncomment the vbdBar line above to check.

            //---- end of Vbuddy output section

            // change input stimuli
            top->en = vbdFlag();
            top->rst = false;   
            //(step1) top->vbdVal = vbdValue();
            if ((Verilated::gotFinish()) || (vbdGetkey()=='q')) 
            exit(0);
    }

    vbdClose(); //++++
    tfp->close();
    exit(0);
}
