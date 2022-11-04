// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vchallenge__Syms.h"


void Vchallenge___024root__trace_chg_sub_0(Vchallenge___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vchallenge___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root__trace_chg_top_0\n"); );
    // Init
    Vchallenge___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vchallenge___024root*>(voidSelf);
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vchallenge___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vchallenge___024root__trace_chg_sub_0(Vchallenge___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgBit(oldp+2,(vlSelf->en));
    bufp->chgSData(oldp+3,(vlSelf->N),16);
    bufp->chgCData(oldp+4,(vlSelf->out),8);
    bufp->chgBit(oldp+5,(vlSelf->challenge__DOT__tick));
    bufp->chgSData(oldp+6,(vlSelf->challenge__DOT__myclk__DOT__count),16);
    bufp->chgIData(oldp+7,(vlSelf->challenge__DOT__myfsm__DOT__current_state),32);
    bufp->chgIData(oldp+8,(vlSelf->challenge__DOT__myfsm__DOT__next_state),32);
}

void Vchallenge___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root__trace_cleanup\n"); );
    // Init
    Vchallenge___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vchallenge___024root*>(voidSelf);
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
