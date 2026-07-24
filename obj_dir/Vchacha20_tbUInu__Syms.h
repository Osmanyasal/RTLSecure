// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCHACHA20_TBUINU__SYMS_H_
#define VERILATED_VCHACHA20_TBUINU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vchacha20_tbUInu.h"

// INCLUDE MODULE CLASSES
#include "Vchacha20_tbUInu___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vchacha20_tbUInu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vchacha20_tbUInu* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vchacha20_tbUInu___024root     TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb;

    // CONSTRUCTORS
    Vchacha20_tbUInu__Syms(VerilatedContext* contextp, const char* namep, Vchacha20_tbUInu* modelp);
    ~Vchacha20_tbUInu__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
