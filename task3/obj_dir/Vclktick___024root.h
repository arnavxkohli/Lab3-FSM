// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vclktick.h for the primary calling header

#ifndef VERILATED_VCLKTICK___024ROOT_H_
#define VERILATED_VCLKTICK___024ROOT_H_  // guard

#include "verilated.h"

class Vclktick__Syms;

class Vclktick___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(tick,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN16(N,15,0);
    SData/*15:0*/ clktick__DOT__count;

    // INTERNAL VARIABLES
    Vclktick__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vclktick___024root(Vclktick__Syms* symsp, const char* name);
    ~Vclktick___024root();
    VL_UNCOPYABLE(Vclktick___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
