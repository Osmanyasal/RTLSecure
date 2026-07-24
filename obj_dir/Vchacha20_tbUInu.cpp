// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vchacha20_tbUInu__pch.h"

//============================================================
// Constructors

Vchacha20_tbUInu::Vchacha20_tbUInu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vchacha20_tbUInu__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vchacha20_tbUInu::Vchacha20_tbUInu(const char* _vcname__)
    : Vchacha20_tbUInu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vchacha20_tbUInu::~Vchacha20_tbUInu() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vchacha20_tbUInu___024root___eval_debug_assertions(Vchacha20_tbUInu___024root* vlSelf);
#endif  // VL_DEBUG
void Vchacha20_tbUInu___024root___eval_static(Vchacha20_tbUInu___024root* vlSelf);
void Vchacha20_tbUInu___024root___eval_initial(Vchacha20_tbUInu___024root* vlSelf);
void Vchacha20_tbUInu___024root___eval_settle(Vchacha20_tbUInu___024root* vlSelf);
void Vchacha20_tbUInu___024root___eval(Vchacha20_tbUInu___024root* vlSelf);

void Vchacha20_tbUInu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vchacha20_tbUInu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vchacha20_tbUInu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vchacha20_tbUInu___024root___eval_static(&(vlSymsp->TOP));
        Vchacha20_tbUInu___024root___eval_initial(&(vlSymsp->TOP));
        Vchacha20_tbUInu___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vchacha20_tbUInu___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vchacha20_tbUInu::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vchacha20_tbUInu::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vchacha20_tbUInu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vchacha20_tbUInu___024root___eval_final(Vchacha20_tbUInu___024root* vlSelf);

VL_ATTR_COLD void Vchacha20_tbUInu::final() {
    Vchacha20_tbUInu___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vchacha20_tbUInu::hierName() const { return vlSymsp->name(); }
const char* Vchacha20_tbUInu::modelName() const { return "Vchacha20_tbUInu"; }
unsigned Vchacha20_tbUInu::threads() const { return 1; }
void Vchacha20_tbUInu::prepareClone() const { contextp()->prepareClone(); }
void Vchacha20_tbUInu::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vchacha20_tbUInu::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vchacha20_tbUInu::trace()' called on model that was Verilated without --trace option");
}
