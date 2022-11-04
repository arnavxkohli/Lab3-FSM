// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vclktick__Syms.h"


VL_ATTR_COLD void Vclktick___024root__trace_init_sub__TOP__0(Vclktick___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"N", false,-1, 15,0);
    tracep->declBit(c+5,"tick", false,-1);
    tracep->pushNamePrefix("clktick ");
    tracep->declBus(c+7,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"N", false,-1, 15,0);
    tracep->declBit(c+5,"tick", false,-1);
    tracep->declBus(c+6,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vclktick___024root__trace_init_top(Vclktick___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root__trace_init_top\n"); );
    // Body
    Vclktick___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vclktick___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vclktick___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vclktick___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vclktick___024root__trace_register(Vclktick___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vclktick___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vclktick___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vclktick___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vclktick___024root__trace_full_sub_0(Vclktick___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vclktick___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root__trace_full_top_0\n"); );
    // Init
    Vclktick___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclktick___024root*>(voidSelf);
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vclktick___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vclktick___024root__trace_full_sub_0(Vclktick___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullBit(oldp+3,(vlSelf->en));
    bufp->fullSData(oldp+4,(vlSelf->N),16);
    bufp->fullBit(oldp+5,(vlSelf->tick));
    bufp->fullSData(oldp+6,(vlSelf->clktick__DOT__count),16);
    bufp->fullIData(oldp+7,(0x10U),32);
}
