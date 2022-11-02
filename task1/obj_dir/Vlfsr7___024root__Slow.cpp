// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr7.h for the primary calling header

#include "verilated.h"

#include "Vlfsr7__Syms.h"
#include "Vlfsr7___024root.h"

void Vlfsr7___024root___ctor_var_reset(Vlfsr7___024root* vlSelf);

Vlfsr7___024root::Vlfsr7___024root(Vlfsr7__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlfsr7___024root___ctor_var_reset(this);
}

void Vlfsr7___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vlfsr7___024root::~Vlfsr7___024root() {
}
