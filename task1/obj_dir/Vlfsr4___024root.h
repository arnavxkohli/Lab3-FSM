// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlfsr4.h for the primary calling header

#ifndef VERILATED_VLFSR4___024ROOT_H_
#define VERILATED_VLFSR4___024ROOT_H_  // guard

#include "verilated.h"

class Vlfsr4__Syms;

class Vlfsr4___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(data_out,4,1);
    CData/*3:0*/ lfsr4__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;

    // INTERNAL VARIABLES
    Vlfsr4__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlfsr4___024root(Vlfsr4__Syms* symsp, const char* name);
    ~Vlfsr4___024root();
    VL_UNCOPYABLE(Vlfsr4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
