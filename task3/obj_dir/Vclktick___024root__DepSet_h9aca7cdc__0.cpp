// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclktick.h for the primary calling header

#include "verilated.h"

#include "Vclktick___024root.h"

VL_INLINE_OPT void Vclktick___024root___sequent__TOP__0(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__clktick__DOT__count;
    // Body
    __Vdly__clktick__DOT__count = vlSelf->clktick__DOT__count;
    if (vlSelf->rst) {
        vlSelf->tick = 0U;
        __Vdly__clktick__DOT__count = vlSelf->N;
    } else if (vlSelf->en) {
        if ((0U == (IData)(vlSelf->clktick__DOT__count))) {
            vlSelf->tick = 1U;
            __Vdly__clktick__DOT__count = vlSelf->N;
        } else {
            __Vdly__clktick__DOT__count = (0xffffU 
                                           & ((IData)(vlSelf->clktick__DOT__count) 
                                              - (IData)(1U)));
            vlSelf->tick = 0U;
        }
    }
    vlSelf->clktick__DOT__count = __Vdly__clktick__DOT__count;
}

void Vclktick___024root___eval(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vclktick___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vclktick___024root___eval_debug_assertions(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
