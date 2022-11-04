// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vchallenge__Syms.h"


VL_ATTR_COLD void Vchallenge___024root__trace_init_sub__TOP__0(Vchallenge___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"N", false,-1, 15,0);
    tracep->declBus(c+5,"out", false,-1, 7,0);
    tracep->pushNamePrefix("challenge ");
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"N", false,-1, 15,0);
    tracep->declBus(c+5,"out", false,-1, 7,0);
    tracep->declBit(c+6,"tick", false,-1);
    tracep->pushNamePrefix("myclk ");
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"N", false,-1, 15,0);
    tracep->declBit(c+6,"tick", false,-1);
    tracep->declBus(c+7,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myfsm ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+6,"en", false,-1);
    tracep->declBus(c+5,"out", false,-1, 7,0);
    tracep->declBus(c+8,"current_state", false,-1, 31,0);
    tracep->declBus(c+9,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vchallenge___024root__trace_init_top(Vchallenge___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root__trace_init_top\n"); );
    // Body
    Vchallenge___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vchallenge___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vchallenge___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vchallenge___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vchallenge___024root__trace_register(Vchallenge___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vchallenge___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vchallenge___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vchallenge___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vchallenge___024root__trace_full_sub_0(Vchallenge___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vchallenge___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root__trace_full_top_0\n"); );
    // Init
    Vchallenge___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vchallenge___024root*>(voidSelf);
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vchallenge___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vchallenge___024root__trace_full_sub_0(Vchallenge___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchallenge___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullBit(oldp+3,(vlSelf->en));
    bufp->fullSData(oldp+4,(vlSelf->N),16);
    bufp->fullCData(oldp+5,(vlSelf->out),8);
    bufp->fullBit(oldp+6,(vlSelf->challenge__DOT__tick));
    bufp->fullSData(oldp+7,(vlSelf->challenge__DOT__myclk__DOT__count),16);
    bufp->fullIData(oldp+8,(vlSelf->challenge__DOT__myfsm__DOT__current_state),32);
    bufp->fullIData(oldp+9,(vlSelf->challenge__DOT__myfsm__DOT__next_state),32);
    bufp->fullIData(oldp+10,(0x10U),32);
}
