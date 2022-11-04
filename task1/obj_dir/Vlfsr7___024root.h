// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlfsr7.h for the primary calling header

#ifndef VERILATED_VLFSR7___024ROOT_H_
#define VERILATED_VLFSR7___024ROOT_H_  // guard

#include "verilated.h"

class Vlfsr7__Syms;

class Vlfsr7___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(data_out,7,1);
    CData/*6:0*/ lfsr7__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;

    // INTERNAL VARIABLES
    Vlfsr7__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlfsr7___024root(Vlfsr7__Syms* symsp, const char* name);
    ~Vlfsr7___024root();
    VL_UNCOPYABLE(Vlfsr7___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
