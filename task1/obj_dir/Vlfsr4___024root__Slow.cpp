// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr4.h for the primary calling header

#include "verilated.h"

#include "Vlfsr4__Syms.h"
#include "Vlfsr4___024root.h"

void Vlfsr4___024root___ctor_var_reset(Vlfsr4___024root* vlSelf);

Vlfsr4___024root::Vlfsr4___024root(Vlfsr4__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlfsr4___024root___ctor_var_reset(this);
}

void Vlfsr4___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vlfsr4___024root::~Vlfsr4___024root() {
}
