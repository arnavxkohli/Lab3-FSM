// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vchallenge.h for the primary calling header

#ifndef VERILATED_VCHALLENGE___024ROOT_H_
#define VERILATED_VCHALLENGE___024ROOT_H_  // guard

#include "verilated.h"

class Vchallenge__Syms;

class Vchallenge___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(en,0,0);
    VL_OUT8(out,7,0);
    CData/*0:0*/ challenge__DOT__tick;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    VL_IN16(N,15,0);
    SData/*15:0*/ challenge__DOT__myclk__DOT__count;
    IData/*31:0*/ challenge__DOT__myfsm__DOT__current_state;
    IData/*31:0*/ challenge__DOT__myfsm__DOT__next_state;

    // INTERNAL VARIABLES
    Vchallenge__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vchallenge___024root(Vchallenge__Syms* symsp, const char* name);
    ~Vchallenge___024root();
    VL_UNCOPYABLE(Vchallenge___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
