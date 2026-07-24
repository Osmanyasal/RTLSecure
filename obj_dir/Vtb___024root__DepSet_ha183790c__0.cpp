// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    // Body
    Vtb___024root___eval_initial__TOP(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelf->tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__out_valid__0 
        = vlSelf->tb__DOT__out_valid;
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/tmp/chacha20_tbo7KL.sv", 
                                           25);
        vlSelf->tb__DOT__clk = (1U & (~ (IData)(vlSelf->tb__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb___024root___act_comb__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb__DOT__dut__DOT__next_state = vlSelf->tb__DOT__dut__DOT__state;
    if ((2U & (IData)(vlSelf->tb__DOT__dut__DOT__state))) {
        vlSelf->tb__DOT__dut__DOT__next_state = ((1U 
                                                  & (IData)(vlSelf->tb__DOT__dut__DOT__state))
                                                  ? 0U
                                                  : 3U);
    } else if ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__state))) {
        if ((0x13U == vlSelf->tb__DOT__dut__DOT__step_counter)) {
            vlSelf->tb__DOT__dut__DOT__next_state = 2U;
        }
    } else if (vlSelf->tb__DOT__in_valid) {
        vlSelf->tb__DOT__dut__DOT__next_state = 1U;
    }
    vlSelf->tb__DOT__dut__DOT__input_state[4U] = vlSelf->tb__DOT__in_key[0U];
    vlSelf->tb__DOT__dut__DOT__input_state[5U] = vlSelf->tb__DOT__in_key[1U];
    vlSelf->tb__DOT__dut__DOT__input_state[6U] = vlSelf->tb__DOT__in_key[2U];
    vlSelf->tb__DOT__dut__DOT__input_state[7U] = vlSelf->tb__DOT__in_key[3U];
    vlSelf->tb__DOT__dut__DOT__input_state[8U] = vlSelf->tb__DOT__in_key[4U];
    vlSelf->tb__DOT__dut__DOT__input_state[9U] = vlSelf->tb__DOT__in_key[5U];
    vlSelf->tb__DOT__dut__DOT__input_state[0xaU] = 
        vlSelf->tb__DOT__in_key[6U];
    vlSelf->tb__DOT__dut__DOT__input_state[0xbU] = 
        vlSelf->tb__DOT__in_key[7U];
    vlSelf->tb__DOT__dut__DOT__input_state[0xcU] = vlSelf->tb__DOT__counter;
    vlSelf->tb__DOT__dut__DOT__input_state[0xdU] = 
        vlSelf->tb__DOT__in_nonce[0U];
    vlSelf->tb__DOT__dut__DOT__input_state[0xeU] = 
        vlSelf->tb__DOT__in_nonce[1U];
    vlSelf->tb__DOT__dut__DOT__input_state[0xfU] = 
        vlSelf->tb__DOT__in_nonce[2U];
}

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    // Body
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlWide<16>/*511:0*/ Vtb__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__0__KET____DOT__qr__out_d;
    tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__0__KET____DOT__qr__out_d = 0;
    IData/*31:0*/ tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__1__KET____DOT__qr__out_d;
    tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__1__KET____DOT__qr__out_d = 0;
    IData/*31:0*/ tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__2__KET____DOT__qr__out_d;
    tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__2__KET____DOT__qr__out_d = 0;
    IData/*31:0*/ tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__3__KET____DOT__qr__out_d;
    tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__3__KET____DOT__qr__out_d = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__a1;
    tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__a1 = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__b1;
    tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__b1 = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__c1;
    tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__c1 = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__d1;
    tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__d1 = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__a1_din_xor;
    tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__a1_din_xor = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__bin_c1_xor;
    tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__bin_c1_xor = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__a2_d1_xor;
    tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__a2_d1_xor = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__b1_c2_xor;
    tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__b1_c2_xor = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__a1;
    tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__a1 = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__b1;
    tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__b1 = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__c1;
    tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__c1 = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__d1;
    tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__d1 = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__a1_din_xor;
    tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__a1_din_xor = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__bin_c1_xor;
    tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__bin_c1_xor = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__a2_d1_xor;
    tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__a2_d1_xor = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__b1_c2_xor;
    tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__b1_c2_xor = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__a1;
    tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__a1 = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__b1;
    tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__b1 = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__c1;
    tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__c1 = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__d1;
    tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__d1 = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__a1_din_xor;
    tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__a1_din_xor = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__bin_c1_xor;
    tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__bin_c1_xor = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__a2_d1_xor;
    tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__a2_d1_xor = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__b1_c2_xor;
    tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__b1_c2_xor = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__a1;
    tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__a1 = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__b1;
    tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__b1 = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__c1;
    tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__c1 = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__d1;
    tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__d1 = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__a1_din_xor;
    tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__a1_din_xor = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__bin_c1_xor;
    tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__bin_c1_xor = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__a2_d1_xor;
    tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__a2_d1_xor = 0;
    IData/*31:0*/ tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__b1_c2_xor;
    tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__b1_c2_xor = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__dut__DOT__state_words__v0;
    __Vdlyvset__tb__DOT__dut__DOT__state_words__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__dut__DOT__state_words__v1;
    __Vdlyvset__tb__DOT__dut__DOT__state_words__v1 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v16;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v16 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__dut__DOT__state_words__v16;
    __Vdlyvset__tb__DOT__dut__DOT__state_words__v16 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v17;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v17 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v18;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v18 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v19;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v19 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v20;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v20 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v21;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v21 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v22;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v22 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v23;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v23 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v24;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v24 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v25;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v25 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v26;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v26 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v27;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v27 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v28;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v28 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v29;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v29 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v30;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v30 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v31;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v31 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v32;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v32 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__dut__DOT__state_words__v32;
    __Vdlyvset__tb__DOT__dut__DOT__state_words__v32 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v33;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v33 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v34;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v34 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v35;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v35 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v36;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v36 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v37;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v37 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v38;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v38 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v39;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v39 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v40;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v40 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v41;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v41 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v42;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v42 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v43;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v43 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v44;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v44 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v45;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v45 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v46;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v46 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v47;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v47 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v48;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v48 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__dut__DOT__state_words__v48;
    __Vdlyvset__tb__DOT__dut__DOT__state_words__v48 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v49;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v49 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v50;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v50 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v51;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v51 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v52;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v52 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v53;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v53 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v54;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v54 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v55;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v55 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v56;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v56 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v57;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v57 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v58;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v58 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v59;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v59 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v60;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v60 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v61;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v61 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v62;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v62 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__state_words__v63;
    __Vdlyvval__tb__DOT__dut__DOT__state_words__v63 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__dut__DOT__initial_state__v0;
    __Vdlyvset__tb__DOT__dut__DOT__initial_state__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__initial_state__v16;
    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v16 = 0;
    CData/*0:0*/ __Vdlyvset__tb__DOT__dut__DOT__initial_state__v16;
    __Vdlyvset__tb__DOT__dut__DOT__initial_state__v16 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__initial_state__v17;
    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v17 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__initial_state__v18;
    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v18 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__initial_state__v19;
    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v19 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__initial_state__v20;
    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v20 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__initial_state__v21;
    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v21 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__initial_state__v22;
    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v22 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__initial_state__v23;
    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v23 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__initial_state__v24;
    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v24 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__initial_state__v25;
    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v25 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__initial_state__v26;
    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v26 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__initial_state__v27;
    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v27 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__initial_state__v28;
    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v28 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__initial_state__v29;
    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v29 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__initial_state__v30;
    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v30 = 0;
    IData/*31:0*/ __Vdlyvval__tb__DOT__dut__DOT__initial_state__v31;
    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v31 = 0;
    IData/*31:0*/ __Vdly__tb__DOT__dut__DOT__step_counter;
    __Vdly__tb__DOT__dut__DOT__step_counter = 0;
    // Body
    __Vdlyvset__tb__DOT__dut__DOT__initial_state__v0 = 0U;
    __Vdlyvset__tb__DOT__dut__DOT__initial_state__v16 = 0U;
    __Vdly__tb__DOT__dut__DOT__step_counter = vlSelf->tb__DOT__dut__DOT__step_counter;
    __Vdlyvset__tb__DOT__dut__DOT__state_words__v0 = 0U;
    __Vdlyvset__tb__DOT__dut__DOT__state_words__v1 = 0U;
    __Vdlyvset__tb__DOT__dut__DOT__state_words__v16 = 0U;
    __Vdlyvset__tb__DOT__dut__DOT__state_words__v32 = 0U;
    __Vdlyvset__tb__DOT__dut__DOT__state_words__v48 = 0U;
    if (vlSelf->tb__DOT__rst) {
        __Vdlyvset__tb__DOT__dut__DOT__initial_state__v0 = 1U;
        __Vdly__tb__DOT__dut__DOT__step_counter = 0U;
        vlSelf->tb__DOT__out_valid = 0U;
        __Vdlyvset__tb__DOT__dut__DOT__state_words__v0 = 1U;
        vlSelf->tb__DOT__out_matrix[0U] = Vtb__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->tb__DOT__out_matrix[1U] = Vtb__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->tb__DOT__out_matrix[2U] = Vtb__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->tb__DOT__out_matrix[3U] = Vtb__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->tb__DOT__out_matrix[4U] = Vtb__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->tb__DOT__out_matrix[5U] = Vtb__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->tb__DOT__out_matrix[6U] = Vtb__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->tb__DOT__out_matrix[7U] = Vtb__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->tb__DOT__out_matrix[8U] = Vtb__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->tb__DOT__out_matrix[9U] = Vtb__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->tb__DOT__out_matrix[0xaU] = Vtb__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->tb__DOT__out_matrix[0xbU] = Vtb__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->tb__DOT__out_matrix[0xcU] = Vtb__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->tb__DOT__out_matrix[0xdU] = Vtb__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->tb__DOT__out_matrix[0xeU] = Vtb__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->tb__DOT__out_matrix[0xfU] = Vtb__ConstPool__CONST_h93e1b771_0[0xfU];
        __Vdlyvset__tb__DOT__dut__DOT__state_words__v1 = 1U;
        vlSelf->tb__DOT__dut__DOT__state = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->tb__DOT__dut__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->tb__DOT__dut__DOT__state)))) {
                if (vlSelf->tb__DOT__in_valid) {
                    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v16 
                        = vlSelf->tb__DOT__dut__DOT__input_state
                        [0U];
                    __Vdlyvset__tb__DOT__dut__DOT__initial_state__v16 = 1U;
                    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v17 
                        = vlSelf->tb__DOT__dut__DOT__input_state
                        [1U];
                    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v18 
                        = vlSelf->tb__DOT__dut__DOT__input_state
                        [2U];
                    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v19 
                        = vlSelf->tb__DOT__dut__DOT__input_state
                        [3U];
                    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v20 
                        = vlSelf->tb__DOT__dut__DOT__input_state
                        [4U];
                    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v21 
                        = vlSelf->tb__DOT__dut__DOT__input_state
                        [5U];
                    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v22 
                        = vlSelf->tb__DOT__dut__DOT__input_state
                        [6U];
                    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v23 
                        = vlSelf->tb__DOT__dut__DOT__input_state
                        [7U];
                    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v24 
                        = vlSelf->tb__DOT__dut__DOT__input_state
                        [8U];
                    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v25 
                        = vlSelf->tb__DOT__dut__DOT__input_state
                        [9U];
                    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v26 
                        = vlSelf->tb__DOT__dut__DOT__input_state
                        [0xaU];
                    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v27 
                        = vlSelf->tb__DOT__dut__DOT__input_state
                        [0xbU];
                    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v28 
                        = vlSelf->tb__DOT__dut__DOT__input_state
                        [0xcU];
                    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v29 
                        = vlSelf->tb__DOT__dut__DOT__input_state
                        [0xdU];
                    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v30 
                        = vlSelf->tb__DOT__dut__DOT__input_state
                        [0xeU];
                    __Vdlyvval__tb__DOT__dut__DOT__initial_state__v31 
                        = vlSelf->tb__DOT__dut__DOT__input_state
                        [0xfU];
                }
            }
            if ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__state))) {
                if ((0x13U != vlSelf->tb__DOT__dut__DOT__step_counter)) {
                    __Vdly__tb__DOT__dut__DOT__step_counter 
                        = ((IData)(1U) + vlSelf->tb__DOT__dut__DOT__step_counter);
                }
            } else if (vlSelf->tb__DOT__in_valid) {
                __Vdly__tb__DOT__dut__DOT__step_counter = 0U;
            }
        }
        vlSelf->tb__DOT__out_valid = 0U;
        if ((2U & (IData)(vlSelf->tb__DOT__dut__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__state))) {
                vlSelf->tb__DOT__out_valid = 1U;
                vlSelf->tb__DOT__out_matrix[0U] = vlSelf->tb__DOT__dut__DOT__state_words
                    [0xfU];
                vlSelf->tb__DOT__out_matrix[1U] = vlSelf->tb__DOT__dut__DOT__state_words
                    [0xeU];
                vlSelf->tb__DOT__out_matrix[2U] = vlSelf->tb__DOT__dut__DOT__state_words
                    [0xdU];
                vlSelf->tb__DOT__out_matrix[3U] = vlSelf->tb__DOT__dut__DOT__state_words
                    [0xcU];
                vlSelf->tb__DOT__out_matrix[4U] = vlSelf->tb__DOT__dut__DOT__state_words
                    [0xbU];
                vlSelf->tb__DOT__out_matrix[5U] = vlSelf->tb__DOT__dut__DOT__state_words
                    [0xaU];
                vlSelf->tb__DOT__out_matrix[6U] = vlSelf->tb__DOT__dut__DOT__state_words
                    [9U];
                vlSelf->tb__DOT__out_matrix[7U] = vlSelf->tb__DOT__dut__DOT__state_words
                    [8U];
                vlSelf->tb__DOT__out_matrix[8U] = vlSelf->tb__DOT__dut__DOT__state_words
                    [7U];
                vlSelf->tb__DOT__out_matrix[9U] = vlSelf->tb__DOT__dut__DOT__state_words
                    [6U];
                vlSelf->tb__DOT__out_matrix[0xaU] = 
                    vlSelf->tb__DOT__dut__DOT__state_words
                    [5U];
                vlSelf->tb__DOT__out_matrix[0xbU] = 
                    vlSelf->tb__DOT__dut__DOT__state_words
                    [4U];
                vlSelf->tb__DOT__out_matrix[0xcU] = 
                    vlSelf->tb__DOT__dut__DOT__state_words
                    [3U];
                vlSelf->tb__DOT__out_matrix[0xdU] = 
                    vlSelf->tb__DOT__dut__DOT__state_words
                    [2U];
                vlSelf->tb__DOT__out_matrix[0xeU] = (IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->tb__DOT__dut__DOT__state_words
                                                                              [0U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->tb__DOT__dut__DOT__state_words
                                                                               [1U]))));
                vlSelf->tb__DOT__out_matrix[0xfU] = (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->tb__DOT__dut__DOT__state_words
                                                                               [0U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->tb__DOT__dut__DOT__state_words
                                                                                [1U]))) 
                                                             >> 0x20U));
            } else {
                __Vdlyvval__tb__DOT__dut__DOT__state_words__v16 
                    = (vlSelf->tb__DOT__dut__DOT__state_words
                       [0U] + vlSelf->tb__DOT__dut__DOT__initial_state
                       [0U]);
                __Vdlyvset__tb__DOT__dut__DOT__state_words__v16 = 1U;
                __Vdlyvval__tb__DOT__dut__DOT__state_words__v17 
                    = (vlSelf->tb__DOT__dut__DOT__state_words
                       [1U] + vlSelf->tb__DOT__dut__DOT__initial_state
                       [1U]);
                __Vdlyvval__tb__DOT__dut__DOT__state_words__v18 
                    = (vlSelf->tb__DOT__dut__DOT__state_words
                       [2U] + vlSelf->tb__DOT__dut__DOT__initial_state
                       [2U]);
                __Vdlyvval__tb__DOT__dut__DOT__state_words__v19 
                    = (vlSelf->tb__DOT__dut__DOT__state_words
                       [3U] + vlSelf->tb__DOT__dut__DOT__initial_state
                       [3U]);
                __Vdlyvval__tb__DOT__dut__DOT__state_words__v20 
                    = (vlSelf->tb__DOT__dut__DOT__state_words
                       [4U] + vlSelf->tb__DOT__dut__DOT__initial_state
                       [4U]);
                __Vdlyvval__tb__DOT__dut__DOT__state_words__v21 
                    = (vlSelf->tb__DOT__dut__DOT__state_words
                       [5U] + vlSelf->tb__DOT__dut__DOT__initial_state
                       [5U]);
                __Vdlyvval__tb__DOT__dut__DOT__state_words__v22 
                    = (vlSelf->tb__DOT__dut__DOT__state_words
                       [6U] + vlSelf->tb__DOT__dut__DOT__initial_state
                       [6U]);
                __Vdlyvval__tb__DOT__dut__DOT__state_words__v23 
                    = (vlSelf->tb__DOT__dut__DOT__state_words
                       [7U] + vlSelf->tb__DOT__dut__DOT__initial_state
                       [7U]);
                __Vdlyvval__tb__DOT__dut__DOT__state_words__v24 
                    = (vlSelf->tb__DOT__dut__DOT__state_words
                       [8U] + vlSelf->tb__DOT__dut__DOT__initial_state
                       [8U]);
                __Vdlyvval__tb__DOT__dut__DOT__state_words__v25 
                    = (vlSelf->tb__DOT__dut__DOT__state_words
                       [9U] + vlSelf->tb__DOT__dut__DOT__initial_state
                       [9U]);
                __Vdlyvval__tb__DOT__dut__DOT__state_words__v26 
                    = (vlSelf->tb__DOT__dut__DOT__state_words
                       [0xaU] + vlSelf->tb__DOT__dut__DOT__initial_state
                       [0xaU]);
                __Vdlyvval__tb__DOT__dut__DOT__state_words__v27 
                    = (vlSelf->tb__DOT__dut__DOT__state_words
                       [0xbU] + vlSelf->tb__DOT__dut__DOT__initial_state
                       [0xbU]);
                __Vdlyvval__tb__DOT__dut__DOT__state_words__v28 
                    = (vlSelf->tb__DOT__dut__DOT__state_words
                       [0xcU] + vlSelf->tb__DOT__dut__DOT__initial_state
                       [0xcU]);
                __Vdlyvval__tb__DOT__dut__DOT__state_words__v29 
                    = (vlSelf->tb__DOT__dut__DOT__state_words
                       [0xdU] + vlSelf->tb__DOT__dut__DOT__initial_state
                       [0xdU]);
                __Vdlyvval__tb__DOT__dut__DOT__state_words__v30 
                    = (vlSelf->tb__DOT__dut__DOT__state_words
                       [0xeU] + vlSelf->tb__DOT__dut__DOT__initial_state
                       [0xeU]);
                __Vdlyvval__tb__DOT__dut__DOT__state_words__v31 
                    = (vlSelf->tb__DOT__dut__DOT__state_words
                       [0xfU] + vlSelf->tb__DOT__dut__DOT__initial_state
                       [0xfU]);
            }
        } else if ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__state))) {
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v32 
                = vlSelf->tb__DOT__dut__DOT__next_state_words
                [0U];
            __Vdlyvset__tb__DOT__dut__DOT__state_words__v32 = 1U;
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v33 
                = vlSelf->tb__DOT__dut__DOT__next_state_words
                [1U];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v34 
                = vlSelf->tb__DOT__dut__DOT__next_state_words
                [2U];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v35 
                = vlSelf->tb__DOT__dut__DOT__next_state_words
                [3U];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v36 
                = vlSelf->tb__DOT__dut__DOT__next_state_words
                [4U];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v37 
                = vlSelf->tb__DOT__dut__DOT__next_state_words
                [5U];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v38 
                = vlSelf->tb__DOT__dut__DOT__next_state_words
                [6U];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v39 
                = vlSelf->tb__DOT__dut__DOT__next_state_words
                [7U];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v40 
                = vlSelf->tb__DOT__dut__DOT__next_state_words
                [8U];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v41 
                = vlSelf->tb__DOT__dut__DOT__next_state_words
                [9U];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v42 
                = vlSelf->tb__DOT__dut__DOT__next_state_words
                [0xaU];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v43 
                = vlSelf->tb__DOT__dut__DOT__next_state_words
                [0xbU];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v44 
                = vlSelf->tb__DOT__dut__DOT__next_state_words
                [0xcU];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v45 
                = vlSelf->tb__DOT__dut__DOT__next_state_words
                [0xdU];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v46 
                = vlSelf->tb__DOT__dut__DOT__next_state_words
                [0xeU];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v47 
                = vlSelf->tb__DOT__dut__DOT__next_state_words
                [0xfU];
        } else if (vlSelf->tb__DOT__in_valid) {
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v48 
                = vlSelf->tb__DOT__dut__DOT__input_state
                [0U];
            __Vdlyvset__tb__DOT__dut__DOT__state_words__v48 = 1U;
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v49 
                = vlSelf->tb__DOT__dut__DOT__input_state
                [1U];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v50 
                = vlSelf->tb__DOT__dut__DOT__input_state
                [2U];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v51 
                = vlSelf->tb__DOT__dut__DOT__input_state
                [3U];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v52 
                = vlSelf->tb__DOT__dut__DOT__input_state
                [4U];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v53 
                = vlSelf->tb__DOT__dut__DOT__input_state
                [5U];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v54 
                = vlSelf->tb__DOT__dut__DOT__input_state
                [6U];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v55 
                = vlSelf->tb__DOT__dut__DOT__input_state
                [7U];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v56 
                = vlSelf->tb__DOT__dut__DOT__input_state
                [8U];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v57 
                = vlSelf->tb__DOT__dut__DOT__input_state
                [9U];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v58 
                = vlSelf->tb__DOT__dut__DOT__input_state
                [0xaU];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v59 
                = vlSelf->tb__DOT__dut__DOT__input_state
                [0xbU];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v60 
                = vlSelf->tb__DOT__dut__DOT__input_state
                [0xcU];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v61 
                = vlSelf->tb__DOT__dut__DOT__input_state
                [0xdU];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v62 
                = vlSelf->tb__DOT__dut__DOT__input_state
                [0xeU];
            __Vdlyvval__tb__DOT__dut__DOT__state_words__v63 
                = vlSelf->tb__DOT__dut__DOT__input_state
                [0xfU];
        }
        vlSelf->tb__DOT__dut__DOT__state = vlSelf->tb__DOT__dut__DOT__next_state;
    }
    vlSelf->tb__DOT__dut__DOT__step_counter = __Vdly__tb__DOT__dut__DOT__step_counter;
    if (__Vdlyvset__tb__DOT__dut__DOT__initial_state__v0) {
        vlSelf->tb__DOT__dut__DOT__initial_state[0U] = 0U;
        vlSelf->tb__DOT__dut__DOT__initial_state[1U] = 0U;
        vlSelf->tb__DOT__dut__DOT__initial_state[2U] = 0U;
        vlSelf->tb__DOT__dut__DOT__initial_state[3U] = 0U;
        vlSelf->tb__DOT__dut__DOT__initial_state[4U] = 0U;
        vlSelf->tb__DOT__dut__DOT__initial_state[5U] = 0U;
        vlSelf->tb__DOT__dut__DOT__initial_state[6U] = 0U;
        vlSelf->tb__DOT__dut__DOT__initial_state[7U] = 0U;
        vlSelf->tb__DOT__dut__DOT__initial_state[8U] = 0U;
        vlSelf->tb__DOT__dut__DOT__initial_state[9U] = 0U;
        vlSelf->tb__DOT__dut__DOT__initial_state[0xaU] = 0U;
        vlSelf->tb__DOT__dut__DOT__initial_state[0xbU] = 0U;
        vlSelf->tb__DOT__dut__DOT__initial_state[0xcU] = 0U;
        vlSelf->tb__DOT__dut__DOT__initial_state[0xdU] = 0U;
        vlSelf->tb__DOT__dut__DOT__initial_state[0xeU] = 0U;
        vlSelf->tb__DOT__dut__DOT__initial_state[0xfU] = 0U;
    }
    if (__Vdlyvset__tb__DOT__dut__DOT__initial_state__v16) {
        vlSelf->tb__DOT__dut__DOT__initial_state[0U] 
            = __Vdlyvval__tb__DOT__dut__DOT__initial_state__v16;
        vlSelf->tb__DOT__dut__DOT__initial_state[1U] 
            = __Vdlyvval__tb__DOT__dut__DOT__initial_state__v17;
        vlSelf->tb__DOT__dut__DOT__initial_state[2U] 
            = __Vdlyvval__tb__DOT__dut__DOT__initial_state__v18;
        vlSelf->tb__DOT__dut__DOT__initial_state[3U] 
            = __Vdlyvval__tb__DOT__dut__DOT__initial_state__v19;
        vlSelf->tb__DOT__dut__DOT__initial_state[4U] 
            = __Vdlyvval__tb__DOT__dut__DOT__initial_state__v20;
        vlSelf->tb__DOT__dut__DOT__initial_state[5U] 
            = __Vdlyvval__tb__DOT__dut__DOT__initial_state__v21;
        vlSelf->tb__DOT__dut__DOT__initial_state[6U] 
            = __Vdlyvval__tb__DOT__dut__DOT__initial_state__v22;
        vlSelf->tb__DOT__dut__DOT__initial_state[7U] 
            = __Vdlyvval__tb__DOT__dut__DOT__initial_state__v23;
        vlSelf->tb__DOT__dut__DOT__initial_state[8U] 
            = __Vdlyvval__tb__DOT__dut__DOT__initial_state__v24;
        vlSelf->tb__DOT__dut__DOT__initial_state[9U] 
            = __Vdlyvval__tb__DOT__dut__DOT__initial_state__v25;
        vlSelf->tb__DOT__dut__DOT__initial_state[0xaU] 
            = __Vdlyvval__tb__DOT__dut__DOT__initial_state__v26;
        vlSelf->tb__DOT__dut__DOT__initial_state[0xbU] 
            = __Vdlyvval__tb__DOT__dut__DOT__initial_state__v27;
        vlSelf->tb__DOT__dut__DOT__initial_state[0xcU] 
            = __Vdlyvval__tb__DOT__dut__DOT__initial_state__v28;
        vlSelf->tb__DOT__dut__DOT__initial_state[0xdU] 
            = __Vdlyvval__tb__DOT__dut__DOT__initial_state__v29;
        vlSelf->tb__DOT__dut__DOT__initial_state[0xeU] 
            = __Vdlyvval__tb__DOT__dut__DOT__initial_state__v30;
        vlSelf->tb__DOT__dut__DOT__initial_state[0xfU] 
            = __Vdlyvval__tb__DOT__dut__DOT__initial_state__v31;
    }
    if (__Vdlyvset__tb__DOT__dut__DOT__state_words__v0) {
        vlSelf->tb__DOT__dut__DOT__state_words[0U] = 0U;
    }
    if (__Vdlyvset__tb__DOT__dut__DOT__state_words__v1) {
        vlSelf->tb__DOT__dut__DOT__state_words[1U] = 0U;
        vlSelf->tb__DOT__dut__DOT__state_words[2U] = 0U;
        vlSelf->tb__DOT__dut__DOT__state_words[3U] = 0U;
        vlSelf->tb__DOT__dut__DOT__state_words[4U] = 0U;
        vlSelf->tb__DOT__dut__DOT__state_words[5U] = 0U;
        vlSelf->tb__DOT__dut__DOT__state_words[6U] = 0U;
        vlSelf->tb__DOT__dut__DOT__state_words[7U] = 0U;
        vlSelf->tb__DOT__dut__DOT__state_words[8U] = 0U;
        vlSelf->tb__DOT__dut__DOT__state_words[9U] = 0U;
        vlSelf->tb__DOT__dut__DOT__state_words[0xaU] = 0U;
        vlSelf->tb__DOT__dut__DOT__state_words[0xbU] = 0U;
        vlSelf->tb__DOT__dut__DOT__state_words[0xcU] = 0U;
        vlSelf->tb__DOT__dut__DOT__state_words[0xdU] = 0U;
        vlSelf->tb__DOT__dut__DOT__state_words[0xeU] = 0U;
        vlSelf->tb__DOT__dut__DOT__state_words[0xfU] = 0U;
    }
    if (__Vdlyvset__tb__DOT__dut__DOT__state_words__v16) {
        vlSelf->tb__DOT__dut__DOT__state_words[0U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v16;
        vlSelf->tb__DOT__dut__DOT__state_words[1U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v17;
        vlSelf->tb__DOT__dut__DOT__state_words[2U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v18;
        vlSelf->tb__DOT__dut__DOT__state_words[3U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v19;
        vlSelf->tb__DOT__dut__DOT__state_words[4U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v20;
        vlSelf->tb__DOT__dut__DOT__state_words[5U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v21;
        vlSelf->tb__DOT__dut__DOT__state_words[6U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v22;
        vlSelf->tb__DOT__dut__DOT__state_words[7U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v23;
        vlSelf->tb__DOT__dut__DOT__state_words[8U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v24;
        vlSelf->tb__DOT__dut__DOT__state_words[9U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v25;
        vlSelf->tb__DOT__dut__DOT__state_words[0xaU] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v26;
        vlSelf->tb__DOT__dut__DOT__state_words[0xbU] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v27;
        vlSelf->tb__DOT__dut__DOT__state_words[0xcU] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v28;
        vlSelf->tb__DOT__dut__DOT__state_words[0xdU] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v29;
        vlSelf->tb__DOT__dut__DOT__state_words[0xeU] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v30;
        vlSelf->tb__DOT__dut__DOT__state_words[0xfU] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v31;
    }
    if (__Vdlyvset__tb__DOT__dut__DOT__state_words__v32) {
        vlSelf->tb__DOT__dut__DOT__state_words[0U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v32;
        vlSelf->tb__DOT__dut__DOT__state_words[1U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v33;
        vlSelf->tb__DOT__dut__DOT__state_words[2U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v34;
        vlSelf->tb__DOT__dut__DOT__state_words[3U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v35;
        vlSelf->tb__DOT__dut__DOT__state_words[4U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v36;
        vlSelf->tb__DOT__dut__DOT__state_words[5U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v37;
        vlSelf->tb__DOT__dut__DOT__state_words[6U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v38;
        vlSelf->tb__DOT__dut__DOT__state_words[7U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v39;
        vlSelf->tb__DOT__dut__DOT__state_words[8U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v40;
        vlSelf->tb__DOT__dut__DOT__state_words[9U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v41;
        vlSelf->tb__DOT__dut__DOT__state_words[0xaU] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v42;
        vlSelf->tb__DOT__dut__DOT__state_words[0xbU] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v43;
        vlSelf->tb__DOT__dut__DOT__state_words[0xcU] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v44;
        vlSelf->tb__DOT__dut__DOT__state_words[0xdU] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v45;
        vlSelf->tb__DOT__dut__DOT__state_words[0xeU] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v46;
        vlSelf->tb__DOT__dut__DOT__state_words[0xfU] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v47;
    }
    if (__Vdlyvset__tb__DOT__dut__DOT__state_words__v48) {
        vlSelf->tb__DOT__dut__DOT__state_words[0U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v48;
        vlSelf->tb__DOT__dut__DOT__state_words[1U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v49;
        vlSelf->tb__DOT__dut__DOT__state_words[2U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v50;
        vlSelf->tb__DOT__dut__DOT__state_words[3U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v51;
        vlSelf->tb__DOT__dut__DOT__state_words[4U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v52;
        vlSelf->tb__DOT__dut__DOT__state_words[5U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v53;
        vlSelf->tb__DOT__dut__DOT__state_words[6U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v54;
        vlSelf->tb__DOT__dut__DOT__state_words[7U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v55;
        vlSelf->tb__DOT__dut__DOT__state_words[8U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v56;
        vlSelf->tb__DOT__dut__DOT__state_words[9U] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v57;
        vlSelf->tb__DOT__dut__DOT__state_words[0xaU] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v58;
        vlSelf->tb__DOT__dut__DOT__state_words[0xbU] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v59;
        vlSelf->tb__DOT__dut__DOT__state_words[0xcU] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v60;
        vlSelf->tb__DOT__dut__DOT__state_words[0xdU] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v61;
        vlSelf->tb__DOT__dut__DOT__state_words[0xeU] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v62;
        vlSelf->tb__DOT__dut__DOT__state_words[0xfU] 
            = __Vdlyvval__tb__DOT__dut__DOT__state_words__v63;
    }
    if ((1U & vlSelf->tb__DOT__dut__DOT__step_counter)) {
        vlSelf->tb__DOT__dut__DOT__qr_in_c[0U] = vlSelf->tb__DOT__dut__DOT__state_words
            [0xaU];
        vlSelf->tb__DOT__dut__DOT__qr_in_c[1U] = vlSelf->tb__DOT__dut__DOT__state_words
            [0xbU];
        vlSelf->tb__DOT__dut__DOT__qr_in_c[2U] = vlSelf->tb__DOT__dut__DOT__state_words
            [8U];
        vlSelf->tb__DOT__dut__DOT__qr_in_c[3U] = vlSelf->tb__DOT__dut__DOT__state_words
            [9U];
        vlSelf->tb__DOT__dut__DOT__qr_in_d[0U] = vlSelf->tb__DOT__dut__DOT__state_words
            [0xfU];
        vlSelf->tb__DOT__dut__DOT__qr_in_d[1U] = vlSelf->tb__DOT__dut__DOT__state_words
            [0xcU];
        vlSelf->tb__DOT__dut__DOT__qr_in_d[2U] = vlSelf->tb__DOT__dut__DOT__state_words
            [0xdU];
        vlSelf->tb__DOT__dut__DOT__qr_in_d[3U] = vlSelf->tb__DOT__dut__DOT__state_words
            [0xeU];
        vlSelf->tb__DOT__dut__DOT__qr_in_a[0U] = vlSelf->tb__DOT__dut__DOT__state_words
            [0U];
        vlSelf->tb__DOT__dut__DOT__qr_in_a[1U] = vlSelf->tb__DOT__dut__DOT__state_words
            [1U];
        vlSelf->tb__DOT__dut__DOT__qr_in_a[2U] = vlSelf->tb__DOT__dut__DOT__state_words
            [2U];
        vlSelf->tb__DOT__dut__DOT__qr_in_a[3U] = vlSelf->tb__DOT__dut__DOT__state_words
            [3U];
        vlSelf->tb__DOT__dut__DOT__qr_in_b[0U] = vlSelf->tb__DOT__dut__DOT__state_words
            [5U];
        vlSelf->tb__DOT__dut__DOT__qr_in_b[1U] = vlSelf->tb__DOT__dut__DOT__state_words
            [6U];
        vlSelf->tb__DOT__dut__DOT__qr_in_b[2U] = vlSelf->tb__DOT__dut__DOT__state_words
            [7U];
        vlSelf->tb__DOT__dut__DOT__qr_in_b[3U] = vlSelf->tb__DOT__dut__DOT__state_words
            [4U];
    } else {
        vlSelf->tb__DOT__dut__DOT__qr_in_c[0U] = vlSelf->tb__DOT__dut__DOT__state_words
            [8U];
        vlSelf->tb__DOT__dut__DOT__qr_in_c[1U] = vlSelf->tb__DOT__dut__DOT__state_words
            [9U];
        vlSelf->tb__DOT__dut__DOT__qr_in_c[2U] = vlSelf->tb__DOT__dut__DOT__state_words
            [0xaU];
        vlSelf->tb__DOT__dut__DOT__qr_in_c[3U] = vlSelf->tb__DOT__dut__DOT__state_words
            [0xbU];
        vlSelf->tb__DOT__dut__DOT__qr_in_d[0U] = vlSelf->tb__DOT__dut__DOT__state_words
            [0xcU];
        vlSelf->tb__DOT__dut__DOT__qr_in_d[1U] = vlSelf->tb__DOT__dut__DOT__state_words
            [0xdU];
        vlSelf->tb__DOT__dut__DOT__qr_in_d[2U] = vlSelf->tb__DOT__dut__DOT__state_words
            [0xeU];
        vlSelf->tb__DOT__dut__DOT__qr_in_d[3U] = vlSelf->tb__DOT__dut__DOT__state_words
            [0xfU];
        vlSelf->tb__DOT__dut__DOT__qr_in_a[0U] = vlSelf->tb__DOT__dut__DOT__state_words
            [0U];
        vlSelf->tb__DOT__dut__DOT__qr_in_a[1U] = vlSelf->tb__DOT__dut__DOT__state_words
            [1U];
        vlSelf->tb__DOT__dut__DOT__qr_in_a[2U] = vlSelf->tb__DOT__dut__DOT__state_words
            [2U];
        vlSelf->tb__DOT__dut__DOT__qr_in_a[3U] = vlSelf->tb__DOT__dut__DOT__state_words
            [3U];
        vlSelf->tb__DOT__dut__DOT__qr_in_b[0U] = vlSelf->tb__DOT__dut__DOT__state_words
            [4U];
        vlSelf->tb__DOT__dut__DOT__qr_in_b[1U] = vlSelf->tb__DOT__dut__DOT__state_words
            [5U];
        vlSelf->tb__DOT__dut__DOT__qr_in_b[2U] = vlSelf->tb__DOT__dut__DOT__state_words
            [6U];
        vlSelf->tb__DOT__dut__DOT__qr_in_b[3U] = vlSelf->tb__DOT__dut__DOT__state_words
            [7U];
    }
    tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__a1 
        = (vlSelf->tb__DOT__dut__DOT__qr_in_a[0U] + 
           vlSelf->tb__DOT__dut__DOT__qr_in_b[0U]);
    tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__a1 
        = (vlSelf->tb__DOT__dut__DOT__qr_in_a[1U] + 
           vlSelf->tb__DOT__dut__DOT__qr_in_b[1U]);
    tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__a1 
        = (vlSelf->tb__DOT__dut__DOT__qr_in_a[2U] + 
           vlSelf->tb__DOT__dut__DOT__qr_in_b[2U]);
    tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__a1 
        = (vlSelf->tb__DOT__dut__DOT__qr_in_a[3U] + 
           vlSelf->tb__DOT__dut__DOT__qr_in_b[3U]);
    tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__a1_din_xor 
        = (vlSelf->tb__DOT__dut__DOT__qr_in_d[0U] ^ tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__a1);
    tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__a1_din_xor 
        = (vlSelf->tb__DOT__dut__DOT__qr_in_d[1U] ^ tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__a1);
    tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__a1_din_xor 
        = (vlSelf->tb__DOT__dut__DOT__qr_in_d[2U] ^ tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__a1);
    tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__a1_din_xor 
        = (vlSelf->tb__DOT__dut__DOT__qr_in_d[3U] ^ tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__a1);
    tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__d1 
        = ((tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__a1_din_xor 
            << 0x10U) | (tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__a1_din_xor 
                         >> 0x10U));
    tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__d1 
        = ((tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__a1_din_xor 
            << 0x10U) | (tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__a1_din_xor 
                         >> 0x10U));
    tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__d1 
        = ((tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__a1_din_xor 
            << 0x10U) | (tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__a1_din_xor 
                         >> 0x10U));
    tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__d1 
        = ((tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__a1_din_xor 
            << 0x10U) | (tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__a1_din_xor 
                         >> 0x10U));
    tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__c1 
        = (vlSelf->tb__DOT__dut__DOT__qr_in_c[0U] + tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__d1);
    tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__c1 
        = (vlSelf->tb__DOT__dut__DOT__qr_in_c[1U] + tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__d1);
    tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__c1 
        = (vlSelf->tb__DOT__dut__DOT__qr_in_c[2U] + tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__d1);
    tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__c1 
        = (vlSelf->tb__DOT__dut__DOT__qr_in_c[3U] + tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__d1);
    tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__bin_c1_xor 
        = (vlSelf->tb__DOT__dut__DOT__qr_in_b[0U] ^ tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__c1);
    tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__bin_c1_xor 
        = (vlSelf->tb__DOT__dut__DOT__qr_in_b[1U] ^ tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__c1);
    tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__bin_c1_xor 
        = (vlSelf->tb__DOT__dut__DOT__qr_in_b[2U] ^ tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__c1);
    tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__bin_c1_xor 
        = (vlSelf->tb__DOT__dut__DOT__qr_in_b[3U] ^ tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__c1);
    tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__b1 
        = ((tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__bin_c1_xor 
            << 0xcU) | (tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__bin_c1_xor 
                        >> 0x14U));
    tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__b1 
        = ((tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__bin_c1_xor 
            << 0xcU) | (tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__bin_c1_xor 
                        >> 0x14U));
    tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__b1 
        = ((tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__bin_c1_xor 
            << 0xcU) | (tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__bin_c1_xor 
                        >> 0x14U));
    tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__b1 
        = ((tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__bin_c1_xor 
            << 0xcU) | (tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__bin_c1_xor 
                        >> 0x14U));
    vlSelf->tb__DOT__dut__DOT__qr_out_a[0U] = (tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__a1 
                                               + tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__b1);
    tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__a2_d1_xor 
        = (tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__d1 
           ^ (tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__a1 
              + tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__b1));
    vlSelf->tb__DOT__dut__DOT__qr_out_a[1U] = (tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__a1 
                                               + tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__b1);
    tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__a2_d1_xor 
        = (tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__d1 
           ^ (tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__a1 
              + tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__b1));
    vlSelf->tb__DOT__dut__DOT__qr_out_a[2U] = (tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__a1 
                                               + tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__b1);
    tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__a2_d1_xor 
        = (tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__d1 
           ^ (tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__a1 
              + tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__b1));
    vlSelf->tb__DOT__dut__DOT__qr_out_a[3U] = (tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__a1 
                                               + tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__b1);
    tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__a2_d1_xor 
        = (tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__d1 
           ^ (tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__a1 
              + tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__b1));
    vlSelf->tb__DOT__dut__DOT__qr_out_d[0U] = ((tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__a2_d1_xor 
                                                << 8U) 
                                               | (tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__a2_d1_xor 
                                                  >> 0x18U));
    tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__0__KET____DOT__qr__out_d 
        = ((tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__a2_d1_xor 
            << 8U) | (tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__a2_d1_xor 
                      >> 0x18U));
    vlSelf->tb__DOT__dut__DOT__qr_out_d[1U] = ((tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__a2_d1_xor 
                                                << 8U) 
                                               | (tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__a2_d1_xor 
                                                  >> 0x18U));
    tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__1__KET____DOT__qr__out_d 
        = ((tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__a2_d1_xor 
            << 8U) | (tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__a2_d1_xor 
                      >> 0x18U));
    vlSelf->tb__DOT__dut__DOT__qr_out_d[2U] = ((tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__a2_d1_xor 
                                                << 8U) 
                                               | (tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__a2_d1_xor 
                                                  >> 0x18U));
    tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__2__KET____DOT__qr__out_d 
        = ((tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__a2_d1_xor 
            << 8U) | (tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__a2_d1_xor 
                      >> 0x18U));
    vlSelf->tb__DOT__dut__DOT__qr_out_d[3U] = ((tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__a2_d1_xor 
                                                << 8U) 
                                               | (tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__a2_d1_xor 
                                                  >> 0x18U));
    tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__3__KET____DOT__qr__out_d 
        = ((tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__a2_d1_xor 
            << 8U) | (tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__a2_d1_xor 
                      >> 0x18U));
    vlSelf->tb__DOT__dut__DOT__qr_out_c[0U] = (tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__c1 
                                               + tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__0__KET____DOT__qr__out_d);
    tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__b1_c2_xor 
        = (tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__b1 
           ^ (tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__c1 
              + tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__0__KET____DOT__qr__out_d));
    vlSelf->tb__DOT__dut__DOT__qr_out_c[1U] = (tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__c1 
                                               + tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__1__KET____DOT__qr__out_d);
    tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__b1_c2_xor 
        = (tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__b1 
           ^ (tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__c1 
              + tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__1__KET____DOT__qr__out_d));
    vlSelf->tb__DOT__dut__DOT__qr_out_c[2U] = (tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__c1 
                                               + tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__2__KET____DOT__qr__out_d);
    tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__b1_c2_xor 
        = (tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__b1 
           ^ (tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__c1 
              + tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__2__KET____DOT__qr__out_d));
    vlSelf->tb__DOT__dut__DOT__qr_out_c[3U] = (tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__c1 
                                               + tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__3__KET____DOT__qr__out_d);
    tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__b1_c2_xor 
        = (tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__b1 
           ^ (tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__c1 
              + tb__DOT__dut__DOT____Vcellout__gen_qr__BRA__3__KET____DOT__qr__out_d));
    vlSelf->tb__DOT__dut__DOT__qr_out_b[0U] = ((tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__b1_c2_xor 
                                                << 7U) 
                                               | (tb__DOT__dut__DOT__gen_qr__BRA__0__KET____DOT__qr__DOT__b1_c2_xor 
                                                  >> 0x19U));
    vlSelf->tb__DOT__dut__DOT__qr_out_b[1U] = ((tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__b1_c2_xor 
                                                << 7U) 
                                               | (tb__DOT__dut__DOT__gen_qr__BRA__1__KET____DOT__qr__DOT__b1_c2_xor 
                                                  >> 0x19U));
    vlSelf->tb__DOT__dut__DOT__qr_out_b[2U] = ((tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__b1_c2_xor 
                                                << 7U) 
                                               | (tb__DOT__dut__DOT__gen_qr__BRA__2__KET____DOT__qr__DOT__b1_c2_xor 
                                                  >> 0x19U));
    vlSelf->tb__DOT__dut__DOT__qr_out_b[3U] = ((tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__b1_c2_xor 
                                                << 7U) 
                                               | (tb__DOT__dut__DOT__gen_qr__BRA__3__KET____DOT__qr__DOT__b1_c2_xor 
                                                  >> 0x19U));
    vlSelf->tb__DOT__dut__DOT__next_state_words[0U] 
        = vlSelf->tb__DOT__dut__DOT__state_words[0U];
    vlSelf->tb__DOT__dut__DOT__next_state_words[1U] 
        = vlSelf->tb__DOT__dut__DOT__state_words[1U];
    vlSelf->tb__DOT__dut__DOT__next_state_words[2U] 
        = vlSelf->tb__DOT__dut__DOT__state_words[2U];
    vlSelf->tb__DOT__dut__DOT__next_state_words[3U] 
        = vlSelf->tb__DOT__dut__DOT__state_words[3U];
    vlSelf->tb__DOT__dut__DOT__next_state_words[4U] 
        = vlSelf->tb__DOT__dut__DOT__state_words[4U];
    vlSelf->tb__DOT__dut__DOT__next_state_words[5U] 
        = vlSelf->tb__DOT__dut__DOT__state_words[5U];
    vlSelf->tb__DOT__dut__DOT__next_state_words[6U] 
        = vlSelf->tb__DOT__dut__DOT__state_words[6U];
    vlSelf->tb__DOT__dut__DOT__next_state_words[7U] 
        = vlSelf->tb__DOT__dut__DOT__state_words[7U];
    vlSelf->tb__DOT__dut__DOT__next_state_words[8U] 
        = vlSelf->tb__DOT__dut__DOT__state_words[8U];
    vlSelf->tb__DOT__dut__DOT__next_state_words[9U] 
        = vlSelf->tb__DOT__dut__DOT__state_words[9U];
    vlSelf->tb__DOT__dut__DOT__next_state_words[0xaU] 
        = vlSelf->tb__DOT__dut__DOT__state_words[0xaU];
    vlSelf->tb__DOT__dut__DOT__next_state_words[0xbU] 
        = vlSelf->tb__DOT__dut__DOT__state_words[0xbU];
    vlSelf->tb__DOT__dut__DOT__next_state_words[0xcU] 
        = vlSelf->tb__DOT__dut__DOT__state_words[0xcU];
    vlSelf->tb__DOT__dut__DOT__next_state_words[0xdU] 
        = vlSelf->tb__DOT__dut__DOT__state_words[0xdU];
    vlSelf->tb__DOT__dut__DOT__next_state_words[0xeU] 
        = vlSelf->tb__DOT__dut__DOT__state_words[0xeU];
    vlSelf->tb__DOT__dut__DOT__next_state_words[0xfU] 
        = vlSelf->tb__DOT__dut__DOT__state_words[0xfU];
    if ((1U & vlSelf->tb__DOT__dut__DOT__step_counter)) {
        vlSelf->tb__DOT__dut__DOT__next_state_words[0U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_a[0U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[5U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_b[0U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[0xaU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_c[0U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[0xfU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_d[0U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[1U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_a[1U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[6U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_b[1U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[0xbU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_c[1U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[0xcU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_d[1U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[2U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_a[2U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[7U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_b[2U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[8U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_c[2U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[0xdU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_d[2U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[3U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_a[3U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[4U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_b[3U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[9U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_c[3U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[0xeU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_d[3U];
    } else {
        vlSelf->tb__DOT__dut__DOT__next_state_words[0U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_a[0U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[4U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_b[0U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[8U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_c[0U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[0xcU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_d[0U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[1U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_a[1U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[5U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_b[1U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[9U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_c[1U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[0xdU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_d[1U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[2U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_a[2U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[6U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_b[2U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[0xaU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_c[2U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[0xeU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_d[2U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[3U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_a[3U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[7U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_b[3U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[0xbU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_c[3U];
        vlSelf->tb__DOT__dut__DOT__next_state_words[0xfU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_d[3U];
    }
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb__DOT__dut__DOT__input_state[4U] = vlSelf->tb__DOT__in_key[0U];
    vlSelf->tb__DOT__dut__DOT__input_state[5U] = vlSelf->tb__DOT__in_key[1U];
    vlSelf->tb__DOT__dut__DOT__input_state[6U] = vlSelf->tb__DOT__in_key[2U];
    vlSelf->tb__DOT__dut__DOT__input_state[7U] = vlSelf->tb__DOT__in_key[3U];
    vlSelf->tb__DOT__dut__DOT__input_state[8U] = vlSelf->tb__DOT__in_key[4U];
    vlSelf->tb__DOT__dut__DOT__input_state[9U] = vlSelf->tb__DOT__in_key[5U];
    vlSelf->tb__DOT__dut__DOT__input_state[0xaU] = 
        vlSelf->tb__DOT__in_key[6U];
    vlSelf->tb__DOT__dut__DOT__input_state[0xbU] = 
        vlSelf->tb__DOT__in_key[7U];
    vlSelf->tb__DOT__dut__DOT__input_state[0xcU] = vlSelf->tb__DOT__counter;
    vlSelf->tb__DOT__dut__DOT__input_state[0xdU] = 
        vlSelf->tb__DOT__in_nonce[0U];
    vlSelf->tb__DOT__dut__DOT__input_state[0xeU] = 
        vlSelf->tb__DOT__in_nonce[1U];
    vlSelf->tb__DOT__dut__DOT__input_state[0xfU] = 
        vlSelf->tb__DOT__in_nonce[2U];
    vlSelf->tb__DOT__dut__DOT__next_state = vlSelf->tb__DOT__dut__DOT__state;
    if ((2U & (IData)(vlSelf->tb__DOT__dut__DOT__state))) {
        vlSelf->tb__DOT__dut__DOT__next_state = ((1U 
                                                  & (IData)(vlSelf->tb__DOT__dut__DOT__state))
                                                  ? 0U
                                                  : 3U);
    } else if ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__state))) {
        if ((0x13U == vlSelf->tb__DOT__dut__DOT__step_counter)) {
            vlSelf->tb__DOT__dut__DOT__next_state = 2U;
        }
    } else if (vlSelf->tb__DOT__in_valid) {
        vlSelf->tb__DOT__dut__DOT__next_state = 1U;
    }
}

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8aadc0b9__0.resume("@(posedge tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h54f9e22e__0.resume("@([changed] tb.out_valid)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb___024root___timing_commit(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8aadc0b9__0.commit("@(posedge tb.clk)");
    }
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h54f9e22e__0.commit("@([changed] tb.out_valid)");
    }
}

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf);

bool Vtb___024root___eval_phase__act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb___024root___eval_triggers__act(vlSelf);
    Vtb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb___024root___timing_resume(vlSelf);
        Vtb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb___024root___eval_phase__nba(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__nba(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/tmp/chacha20_tbo7KL.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/tmp/chacha20_tbo7KL.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
