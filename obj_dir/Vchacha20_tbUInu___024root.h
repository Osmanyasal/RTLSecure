// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vchacha20_tbUInu.h for the primary calling header

#ifndef VERILATED_VCHACHA20_TBUINU___024ROOT_H_
#define VERILATED_VCHACHA20_TBUINU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vchacha20_tbUInu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vchacha20_tbUInu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb__DOT__clk;
    CData/*0:0*/ tb__DOT__rst;
    CData/*0:0*/ tb__DOT__in_valid;
    CData/*0:0*/ tb__DOT__out_valid;
    CData/*1:0*/ tb__DOT__dut__DOT__state;
    CData/*1:0*/ tb__DOT__dut__DOT__next_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb__DOT__out_valid__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VlWide<8>/*255:0*/ tb__DOT__in_key;
    IData/*31:0*/ tb__DOT__counter;
    VlWide<3>/*95:0*/ tb__DOT__in_nonce;
    VlWide<16>/*511:0*/ tb__DOT__out_matrix;
    VlWide<16>/*511:0*/ tb__DOT__dut__DOT__in_state_matrix;
    VlWide<16>/*511:0*/ tb__DOT__dut__DOT__state_matrix;
    VlWide<16>/*511:0*/ tb__DOT__dut__DOT__next_state_matrix;
    IData/*31:0*/ tb__DOT__dut__DOT__step_counter;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 4> tb__DOT__dut__DOT__qr_in_a;
    VlUnpacked<IData/*31:0*/, 4> tb__DOT__dut__DOT__qr_in_b;
    VlUnpacked<IData/*31:0*/, 4> tb__DOT__dut__DOT__qr_in_c;
    VlUnpacked<IData/*31:0*/, 4> tb__DOT__dut__DOT__qr_in_d;
    VlUnpacked<IData/*31:0*/, 4> tb__DOT__dut__DOT__qr_out_a;
    VlUnpacked<IData/*31:0*/, 4> tb__DOT__dut__DOT__qr_out_b;
    VlUnpacked<IData/*31:0*/, 4> tb__DOT__dut__DOT__qr_out_c;
    VlUnpacked<IData/*31:0*/, 4> tb__DOT__dut__DOT__qr_out_d;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h8aadc0b9__0;
    VlTriggerScheduler __VtrigSched_h54f9e22e__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vchacha20_tbUInu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vchacha20_tbUInu___024root(Vchacha20_tbUInu__Syms* symsp, const char* v__name);
    ~Vchacha20_tbUInu___024root();
    VL_UNCOPYABLE(Vchacha20_tbUInu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
