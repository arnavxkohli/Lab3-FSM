// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vclktick.h"
#include "Vclktick__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vclktick::Vclktick(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vclktick__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , en{vlSymsp->TOP.en}
    , tick{vlSymsp->TOP.tick}
    , N{vlSymsp->TOP.N}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vclktick::Vclktick(const char* _vcname__)
    : Vclktick(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vclktick::~Vclktick() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vclktick___024root___eval_initial(Vclktick___024root* vlSelf);
void Vclktick___024root___eval_settle(Vclktick___024root* vlSelf);
void Vclktick___024root___eval(Vclktick___024root* vlSelf);
#ifdef VL_DEBUG
void Vclktick___024root___eval_debug_assertions(Vclktick___024root* vlSelf);
#endif  // VL_DEBUG
void Vclktick___024root___final(Vclktick___024root* vlSelf);

static void _eval_initial_loop(Vclktick__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vclktick___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vclktick___024root___eval_settle(&(vlSymsp->TOP));
        Vclktick___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vclktick::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vclktick::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vclktick___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vclktick___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vclktick::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vclktick::final() {
    Vclktick___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vclktick::hierName() const { return vlSymsp->name(); }
const char* Vclktick::modelName() const { return "Vclktick"; }
unsigned Vclktick::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vclktick::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vclktick___024root__trace_init_top(Vclktick___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vclktick___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclktick___024root*>(voidSelf);
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vclktick___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vclktick___024root__trace_register(Vclktick___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vclktick::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vclktick___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
