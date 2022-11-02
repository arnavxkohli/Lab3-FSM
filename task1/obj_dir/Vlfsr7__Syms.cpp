// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vlfsr7__Syms.h"
#include "Vlfsr7.h"
#include "Vlfsr7___024root.h"

// FUNCTIONS
Vlfsr7__Syms::~Vlfsr7__Syms()
{
}

Vlfsr7__Syms::Vlfsr7__Syms(VerilatedContext* contextp, const char* namep, Vlfsr7* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
