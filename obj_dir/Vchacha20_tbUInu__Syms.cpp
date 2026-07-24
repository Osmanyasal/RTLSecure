// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vchacha20_tbUInu__pch.h"
#include "Vchacha20_tbUInu.h"
#include "Vchacha20_tbUInu___024root.h"

// FUNCTIONS
Vchacha20_tbUInu__Syms::~Vchacha20_tbUInu__Syms()
{
}

Vchacha20_tbUInu__Syms::Vchacha20_tbUInu__Syms(VerilatedContext* contextp, const char* namep, Vchacha20_tbUInu* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb.configure(this, name(), "tb", "tb", -9, VerilatedScope::SCOPE_OTHER);
}
