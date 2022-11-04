// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vchallenge.h"
#include "Vchallenge__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vchallenge::Vchallenge(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vchallenge__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , out{vlSymsp->TOP.out}
    , N{vlSymsp->TOP.N}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vchallenge::Vchallenge(const char* _vcname__)
    : Vchallenge(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vchallenge::~Vchallenge() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vchallenge___024root___eval_initial(Vchallenge___024root* vlSelf);
void Vchallenge___024root___eval_settle(Vchallenge___024root* vlSelf);
void Vchallenge___024root___eval(Vchallenge___024root* vlSelf);
#ifdef VL_DEBUG
void Vchallenge___024root___eval_debug_assertions(Vchallenge___024root* vlSelf);
#endif  // VL_DEBUG
void Vchallenge___024root___final(Vchallenge___024root* vlSelf);

static void _eval_initial_loop(Vchallenge__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vchallenge___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vchallenge___024root___eval_settle(&(vlSymsp->TOP));
        Vchallenge___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vchallenge::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vchallenge::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vchallenge___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vchallenge___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vchallenge::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vchallenge::final() {
    Vchallenge___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vchallenge::hierName() const { return vlSymsp->name(); }
const char* Vchallenge::modelName() const { return "Vchallenge"; }
unsigned Vchallenge::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vchallenge::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vchallenge___024root__trace_init_top(Vchallenge___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vchallenge___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vchallenge___024root*>(voidSelf);
    Vchallenge__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vchallenge___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vchallenge___024root__trace_register(Vchallenge___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vchallenge::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vchallenge___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
