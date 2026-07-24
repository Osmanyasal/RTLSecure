// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final : public VerilatedModule {
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
    IData/*31:0*/ tb__DOT__dut__DOT__step_counter;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 16> tb__DOT__dut__DOT__input_state;
    VlUnpacked<IData/*31:0*/, 16> tb__DOT__dut__DOT__initial_state;
    VlUnpacked<IData/*31:0*/, 16> tb__DOT__dut__DOT__state_words;
    VlUnpacked<IData/*31:0*/, 16> tb__DOT__dut__DOT__next_state_words;
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
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
