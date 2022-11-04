// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchallenge.h for the primary calling header

#include "verilated.h"

#include "Vchallenge__Syms.h"
#include "Vchallenge___024root.h"

void Vchallenge___024root___ctor_var_reset(Vchallenge___024root* vlSelf);

Vchallenge___024root::Vchallenge___024root(Vchallenge__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vchallenge___024root___ctor_var_reset(this);
}

void Vchallenge___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vchallenge___024root::~Vchallenge___024root() {
}
