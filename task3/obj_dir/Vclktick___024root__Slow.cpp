// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclktick.h for the primary calling header

#include "verilated.h"

#include "Vclktick__Syms.h"
#include "Vclktick___024root.h"

void Vclktick___024root___ctor_var_reset(Vclktick___024root* vlSelf);

Vclktick___024root::Vclktick___024root(Vclktick__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vclktick___024root___ctor_var_reset(this);
}

void Vclktick___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vclktick___024root::~Vclktick___024root() {
}
