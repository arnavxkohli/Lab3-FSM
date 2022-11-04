// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchallenge.h for the primary calling header

#include "verilated.h"

#include "Vchallenge___024root.h"

VL_ATTR_COLD void Vchallenge___024root___settle__TOP__0(Vchallenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->challenge__DOT__myfsm__DOT__current_state) 
               | (1U == vlSelf->challenge__DOT__myfsm__DOT__current_state)) 
              | (2U == vlSelf->challenge__DOT__myfsm__DOT__current_state)) 
             | (3U == vlSelf->challenge__DOT__myfsm__DOT__current_state)) 
            | (4U == vlSelf->challenge__DOT__myfsm__DOT__current_state)) 
           | (5U == vlSelf->challenge__DOT__myfsm__DOT__current_state)) 
          | (6U == vlSelf->challenge__DOT__myfsm__DOT__current_state)) 
         | (7U == vlSelf->challenge__DOT__myfsm__DOT__current_state))) {
        if ((0U == vlSelf->challenge__DOT__myfsm__DOT__current_state)) {
            vlSelf->out = 0U;
            vlSelf->challenge__DOT__myfsm__DOT__next_state 
                = ((IData)(vlSelf->challenge__DOT__tick)
                    ? 1U : vlSelf->challenge__DOT__myfsm__DOT__current_state);
        } else if ((1U == vlSelf->challenge__DOT__myfsm__DOT__current_state)) {
            vlSelf->out = 1U;
            vlSelf->challenge__DOT__myfsm__DOT__next_state 
                = ((IData)(vlSelf->challenge__DOT__tick)
                    ? 2U : vlSelf->challenge__DOT__myfsm__DOT__current_state);
        } else if ((2U == vlSelf->challenge__DOT__myfsm__DOT__current_state)) {
            vlSelf->out = 3U;
            vlSelf->challenge__DOT__myfsm__DOT__next_state 
                = ((IData)(vlSelf->challenge__DOT__tick)
                    ? 3U : vlSelf->challenge__DOT__myfsm__DOT__current_state);
        } else if ((3U == vlSelf->challenge__DOT__myfsm__DOT__current_state)) {
            vlSelf->out = 7U;
            vlSelf->challenge__DOT__myfsm__DOT__next_state 
                = ((IData)(vlSelf->challenge__DOT__tick)
                    ? 4U : vlSelf->challenge__DOT__myfsm__DOT__current_state);
        } else if ((4U == vlSelf->challenge__DOT__myfsm__DOT__current_state)) {
            vlSelf->out = 0xfU;
            vlSelf->challenge__DOT__myfsm__DOT__next_state 
                = ((IData)(vlSelf->challenge__DOT__tick)
                    ? 5U : vlSelf->challenge__DOT__myfsm__DOT__current_state);
        } else if ((5U == vlSelf->challenge__DOT__myfsm__DOT__current_state)) {
            vlSelf->out = 0x1fU;
            vlSelf->challenge__DOT__myfsm__DOT__next_state 
                = ((IData)(vlSelf->challenge__DOT__tick)
                    ? 6U : vlSelf->challenge__DOT__myfsm__DOT__current_state);
        } else if ((6U == vlSelf->challenge__DOT__myfsm__DOT__current_state)) {
            vlSelf->out = 0x3fU;
            vlSelf->challenge__DOT__myfsm__DOT__next_state 
                = ((IData)(vlSelf->challenge__DOT__tick)
                    ? 7U : vlSelf->challenge__DOT__myfsm__DOT__current_state);
        } else {
            vlSelf->out = 0x7fU;
            vlSelf->challenge__DOT__myfsm__DOT__next_state 
                = ((IData)(vlSelf->challenge__DOT__tick)
                    ? 8U : vlSelf->challenge__DOT__myfsm__DOT__current_state);
        }
    } else if ((8U == vlSelf->challenge__DOT__myfsm__DOT__current_state)) {
        vlSelf->out = 0xffU;
        vlSelf->challenge__DOT__myfsm__DOT__next_state 
            = ((IData)(vlSelf->challenge__DOT__tick)
                ? 0U : vlSelf->challenge__DOT__myfsm__DOT__current_state);
    } else {
        vlSelf->out = 0U;
        vlSelf->challenge__DOT__myfsm__DOT__next_state = 0U;
    }
}

VL_ATTR_COLD void Vchallenge___024root___eval_initial(Vchallenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vchallenge___024root___eval_settle(Vchallenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root___eval_settle\n"); );
    // Body
    Vchallenge___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vchallenge___024root___final(Vchallenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root___final\n"); );
}

VL_ATTR_COLD void Vchallenge___024root___ctor_var_reset(Vchallenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->out = VL_RAND_RESET_I(8);
    vlSelf->challenge__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->challenge__DOT__myclk__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->challenge__DOT__myfsm__DOT__current_state = 0;
    vlSelf->challenge__DOT__myfsm__DOT__next_state = 0;
}
