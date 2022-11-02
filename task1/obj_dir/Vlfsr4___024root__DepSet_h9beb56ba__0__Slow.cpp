// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlfsr4.h for the primary calling header

#include "verilated.h"

#include "Vlfsr4___024root.h"

VL_ATTR_COLD void Vlfsr4___024root___settle__TOP__0(Vlfsr4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr4___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->data_out = vlSelf->lfsr4__DOT__sreg;
}

VL_ATTR_COLD void Vlfsr4___024root___eval_initial(Vlfsr4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr4___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vlfsr4___024root___eval_settle(Vlfsr4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr4___024root___eval_settle\n"); );
    // Body
    Vlfsr4___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vlfsr4___024root___final(Vlfsr4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr4___024root___final\n"); );
}

VL_ATTR_COLD void Vlfsr4___024root___ctor_var_reset(Vlfsr4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlfsr4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlfsr4___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(4);
    vlSelf->lfsr4__DOT__sreg = VL_RAND_RESET_I(4);
}
