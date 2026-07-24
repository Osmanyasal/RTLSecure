// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchacha20_tbUInu.h for the primary calling header

#include "Vchacha20_tbUInu__pch.h"
#include "Vchacha20_tbUInu__Syms.h"
#include "Vchacha20_tbUInu___024root.h"

void Vchacha20_tbUInu___024root___ctor_var_reset(Vchacha20_tbUInu___024root* vlSelf);

Vchacha20_tbUInu___024root::Vchacha20_tbUInu___024root(Vchacha20_tbUInu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vchacha20_tbUInu___024root___ctor_var_reset(this);
}

void Vchacha20_tbUInu___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vchacha20_tbUInu___024root::~Vchacha20_tbUInu___024root() {
}
