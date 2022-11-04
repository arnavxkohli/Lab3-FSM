// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchallenge.h for the primary calling header

#include "verilated.h"

#include "Vchallenge___024root.h"

VL_INLINE_OPT void Vchallenge___024root___sequent__TOP__0(Vchallenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__challenge__DOT__myclk__DOT__count;
    // Body
    __Vdly__challenge__DOT__myclk__DOT__count = vlSelf->challenge__DOT__myclk__DOT__count;
    if (vlSelf->rst) {
        vlSelf->challenge__DOT__tick = 0U;
        __Vdly__challenge__DOT__myclk__DOT__count = vlSelf->N;
    } else if (vlSelf->en) {
        if ((0U == (IData)(vlSelf->challenge__DOT__myclk__DOT__count))) {
            vlSelf->challenge__DOT__tick = 1U;
            __Vdly__challenge__DOT__myclk__DOT__count 
                = vlSelf->N;
        } else {
            __Vdly__challenge__DOT__myclk__DOT__count 
                = (0xffffU & ((IData)(vlSelf->challenge__DOT__myclk__DOT__count) 
                              - (IData)(1U)));
            vlSelf->challenge__DOT__tick = 0U;
        }
    }
    vlSelf->challenge__DOT__myclk__DOT__count = __Vdly__challenge__DOT__myclk__DOT__count;
}

VL_INLINE_OPT void Vchallenge___024root___sequent__TOP__1(Vchallenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->challenge__DOT__myfsm__DOT__current_state 
        = ((IData)(vlSelf->rst) ? 0U : vlSelf->challenge__DOT__myfsm__DOT__next_state);
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

void Vchallenge___024root___eval(Vchallenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vchallenge___024root___sequent__TOP__0(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vchallenge___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vchallenge___024root___eval_debug_assertions(Vchallenge___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
