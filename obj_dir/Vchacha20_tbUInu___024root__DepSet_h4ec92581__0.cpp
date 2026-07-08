// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchacha20_tbUInu.h for the primary calling header

#include "Vchacha20_tbUInu__pch.h"
#include "Vchacha20_tbUInu___024root.h"

VlCoroutine Vchacha20_tbUInu___024root___eval_initial__TOP__Vtiming__0(Vchacha20_tbUInu___024root* vlSelf);
VlCoroutine Vchacha20_tbUInu___024root___eval_initial__TOP__Vtiming__1(Vchacha20_tbUInu___024root* vlSelf);

void Vchacha20_tbUInu___024root___eval_initial(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___eval_initial\n"); );
    // Body
    Vchacha20_tbUInu___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vchacha20_tbUInu___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelf->tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__out_valid__0 
        = vlSelf->tb__DOT__out_valid;
}

VL_INLINE_OPT VlCoroutine Vchacha20_tbUInu___024root___eval_initial__TOP__Vtiming__1(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "/tmp/chacha20_tbUInu.sv", 
                                           25);
        vlSelf->tb__DOT__clk = (1U & (~ (IData)(vlSelf->tb__DOT__clk)));
    }
}

VL_INLINE_OPT void Vchacha20_tbUInu___024root___act_comb__TOP__0(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___act_comb__TOP__0\n"); );
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
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[0U] = 0x61707865U;
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[1U] = 0x3320646eU;
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[2U] = 0x79622d32U;
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[3U] = 0x6b206574U;
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[4U] 
        = vlSelf->tb__DOT__in_key[0U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[5U] 
        = vlSelf->tb__DOT__in_key[1U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[6U] 
        = vlSelf->tb__DOT__in_key[2U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[7U] 
        = vlSelf->tb__DOT__in_key[3U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[8U] 
        = vlSelf->tb__DOT__in_key[4U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[9U] 
        = vlSelf->tb__DOT__in_key[5U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xaU] 
        = vlSelf->tb__DOT__in_key[6U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xbU] 
        = vlSelf->tb__DOT__in_key[7U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xcU] 
        = vlSelf->tb__DOT__counter;
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xdU] 
        = vlSelf->tb__DOT__in_nonce[0U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xeU] 
        = vlSelf->tb__DOT__in_nonce[1U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xfU] 
        = vlSelf->tb__DOT__in_nonce[2U];
}

void Vchacha20_tbUInu___024root___eval_act(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___eval_act\n"); );
    // Body
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vchacha20_tbUInu___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlWide<16>/*511:0*/ Vchacha20_tbUInu__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vchacha20_tbUInu___024root___nba_sequent__TOP__0(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___nba_sequent__TOP__0\n"); );
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
    VlWide<16>/*511:0*/ __Vdly__tb__DOT__dut__DOT__state_matrix;
    VL_ZERO_W(512, __Vdly__tb__DOT__dut__DOT__state_matrix);
    IData/*31:0*/ __Vdly__tb__DOT__dut__DOT__step_counter;
    __Vdly__tb__DOT__dut__DOT__step_counter = 0;
    // Body
    __Vdly__tb__DOT__dut__DOT__step_counter = vlSelf->tb__DOT__dut__DOT__step_counter;
    __Vdly__tb__DOT__dut__DOT__state_matrix[0U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0U];
    __Vdly__tb__DOT__dut__DOT__state_matrix[1U] = vlSelf->tb__DOT__dut__DOT__state_matrix[1U];
    __Vdly__tb__DOT__dut__DOT__state_matrix[2U] = vlSelf->tb__DOT__dut__DOT__state_matrix[2U];
    __Vdly__tb__DOT__dut__DOT__state_matrix[3U] = vlSelf->tb__DOT__dut__DOT__state_matrix[3U];
    __Vdly__tb__DOT__dut__DOT__state_matrix[4U] = vlSelf->tb__DOT__dut__DOT__state_matrix[4U];
    __Vdly__tb__DOT__dut__DOT__state_matrix[5U] = vlSelf->tb__DOT__dut__DOT__state_matrix[5U];
    __Vdly__tb__DOT__dut__DOT__state_matrix[6U] = vlSelf->tb__DOT__dut__DOT__state_matrix[6U];
    __Vdly__tb__DOT__dut__DOT__state_matrix[7U] = vlSelf->tb__DOT__dut__DOT__state_matrix[7U];
    __Vdly__tb__DOT__dut__DOT__state_matrix[8U] = vlSelf->tb__DOT__dut__DOT__state_matrix[8U];
    __Vdly__tb__DOT__dut__DOT__state_matrix[9U] = vlSelf->tb__DOT__dut__DOT__state_matrix[9U];
    __Vdly__tb__DOT__dut__DOT__state_matrix[0xaU] = 
        vlSelf->tb__DOT__dut__DOT__state_matrix[0xaU];
    __Vdly__tb__DOT__dut__DOT__state_matrix[0xbU] = 
        vlSelf->tb__DOT__dut__DOT__state_matrix[0xbU];
    __Vdly__tb__DOT__dut__DOT__state_matrix[0xcU] = 
        vlSelf->tb__DOT__dut__DOT__state_matrix[0xcU];
    __Vdly__tb__DOT__dut__DOT__state_matrix[0xdU] = 
        vlSelf->tb__DOT__dut__DOT__state_matrix[0xdU];
    __Vdly__tb__DOT__dut__DOT__state_matrix[0xeU] = 
        vlSelf->tb__DOT__dut__DOT__state_matrix[0xeU];
    __Vdly__tb__DOT__dut__DOT__state_matrix[0xfU] = 
        vlSelf->tb__DOT__dut__DOT__state_matrix[0xfU];
    if (vlSelf->tb__DOT__rst) {
        __Vdly__tb__DOT__dut__DOT__step_counter = 0U;
        vlSelf->tb__DOT__out_valid = 0U;
        __Vdly__tb__DOT__dut__DOT__state_matrix[0U] 
            = vlSelf->tb__DOT__dut__DOT__in_state_matrix[0U];
        __Vdly__tb__DOT__dut__DOT__state_matrix[1U] 
            = vlSelf->tb__DOT__dut__DOT__in_state_matrix[1U];
        __Vdly__tb__DOT__dut__DOT__state_matrix[2U] 
            = vlSelf->tb__DOT__dut__DOT__in_state_matrix[2U];
        __Vdly__tb__DOT__dut__DOT__state_matrix[3U] 
            = vlSelf->tb__DOT__dut__DOT__in_state_matrix[3U];
        __Vdly__tb__DOT__dut__DOT__state_matrix[4U] 
            = vlSelf->tb__DOT__dut__DOT__in_state_matrix[4U];
        __Vdly__tb__DOT__dut__DOT__state_matrix[5U] 
            = vlSelf->tb__DOT__dut__DOT__in_state_matrix[5U];
        __Vdly__tb__DOT__dut__DOT__state_matrix[6U] 
            = vlSelf->tb__DOT__dut__DOT__in_state_matrix[6U];
        __Vdly__tb__DOT__dut__DOT__state_matrix[7U] 
            = vlSelf->tb__DOT__dut__DOT__in_state_matrix[7U];
        __Vdly__tb__DOT__dut__DOT__state_matrix[8U] 
            = vlSelf->tb__DOT__dut__DOT__in_state_matrix[8U];
        __Vdly__tb__DOT__dut__DOT__state_matrix[9U] 
            = vlSelf->tb__DOT__dut__DOT__in_state_matrix[9U];
        __Vdly__tb__DOT__dut__DOT__state_matrix[0xaU] 
            = vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xaU];
        __Vdly__tb__DOT__dut__DOT__state_matrix[0xbU] 
            = vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xbU];
        __Vdly__tb__DOT__dut__DOT__state_matrix[0xcU] 
            = vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xcU];
        __Vdly__tb__DOT__dut__DOT__state_matrix[0xdU] 
            = vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xdU];
        __Vdly__tb__DOT__dut__DOT__state_matrix[0xeU] 
            = vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xeU];
        __Vdly__tb__DOT__dut__DOT__state_matrix[0xfU] 
            = vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xfU];
        vlSelf->tb__DOT__out_matrix[0U] = Vchacha20_tbUInu__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->tb__DOT__out_matrix[1U] = Vchacha20_tbUInu__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->tb__DOT__out_matrix[2U] = Vchacha20_tbUInu__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->tb__DOT__out_matrix[3U] = Vchacha20_tbUInu__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->tb__DOT__out_matrix[4U] = Vchacha20_tbUInu__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->tb__DOT__out_matrix[5U] = Vchacha20_tbUInu__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->tb__DOT__out_matrix[6U] = Vchacha20_tbUInu__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->tb__DOT__out_matrix[7U] = Vchacha20_tbUInu__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->tb__DOT__out_matrix[8U] = Vchacha20_tbUInu__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->tb__DOT__out_matrix[9U] = Vchacha20_tbUInu__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->tb__DOT__out_matrix[0xaU] = Vchacha20_tbUInu__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->tb__DOT__out_matrix[0xbU] = Vchacha20_tbUInu__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->tb__DOT__out_matrix[0xcU] = Vchacha20_tbUInu__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->tb__DOT__out_matrix[0xdU] = Vchacha20_tbUInu__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->tb__DOT__out_matrix[0xeU] = Vchacha20_tbUInu__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->tb__DOT__out_matrix[0xfU] = Vchacha20_tbUInu__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelf->tb__DOT__dut__DOT__state = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->tb__DOT__dut__DOT__state) 
                      >> 1U)))) {
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
                vlSelf->tb__DOT__out_matrix[0U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0xfU];
                vlSelf->tb__DOT__out_matrix[1U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0xeU];
                vlSelf->tb__DOT__out_matrix[2U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0xdU];
                vlSelf->tb__DOT__out_matrix[3U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0xcU];
                vlSelf->tb__DOT__out_matrix[4U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0xbU];
                vlSelf->tb__DOT__out_matrix[5U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0xaU];
                vlSelf->tb__DOT__out_matrix[6U] = vlSelf->tb__DOT__dut__DOT__state_matrix[9U];
                vlSelf->tb__DOT__out_matrix[7U] = vlSelf->tb__DOT__dut__DOT__state_matrix[8U];
                vlSelf->tb__DOT__out_matrix[8U] = vlSelf->tb__DOT__dut__DOT__state_matrix[7U];
                vlSelf->tb__DOT__out_matrix[9U] = vlSelf->tb__DOT__dut__DOT__state_matrix[6U];
                vlSelf->tb__DOT__out_matrix[0xaU] = 
                    vlSelf->tb__DOT__dut__DOT__state_matrix[5U];
                vlSelf->tb__DOT__out_matrix[0xbU] = 
                    vlSelf->tb__DOT__dut__DOT__state_matrix[4U];
                vlSelf->tb__DOT__out_matrix[0xcU] = 
                    vlSelf->tb__DOT__dut__DOT__state_matrix[3U];
                vlSelf->tb__DOT__out_matrix[0xdU] = 
                    vlSelf->tb__DOT__dut__DOT__state_matrix[2U];
                vlSelf->tb__DOT__out_matrix[0xeU] = (IData)(
                                                            (((QData)((IData)(
                                                                              vlSelf->tb__DOT__dut__DOT__state_matrix[0U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->tb__DOT__dut__DOT__state_matrix[1U]))));
                vlSelf->tb__DOT__out_matrix[0xfU] = (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->tb__DOT__dut__DOT__state_matrix[0U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->tb__DOT__dut__DOT__state_matrix[1U]))) 
                                                             >> 0x20U));
            } else {
                __Vdly__tb__DOT__dut__DOT__state_matrix[0U] 
                    = (IData)((((QData)((IData)((vlSelf->tb__DOT__dut__DOT__state_matrix[1U] 
                                                 + 
                                                 vlSelf->tb__DOT__dut__DOT__in_state_matrix[1U]))) 
                                << 0x20U) | (QData)((IData)(
                                                            (vlSelf->tb__DOT__dut__DOT__state_matrix[0U] 
                                                             + 
                                                             vlSelf->tb__DOT__dut__DOT__in_state_matrix[0U])))));
                __Vdly__tb__DOT__dut__DOT__state_matrix[1U] 
                    = (IData)(((((QData)((IData)((vlSelf->tb__DOT__dut__DOT__state_matrix[1U] 
                                                  + 
                                                  vlSelf->tb__DOT__dut__DOT__in_state_matrix[1U]))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (vlSelf->tb__DOT__dut__DOT__state_matrix[0U] 
                                                              + 
                                                              vlSelf->tb__DOT__dut__DOT__in_state_matrix[0U])))) 
                               >> 0x20U));
                __Vdly__tb__DOT__dut__DOT__state_matrix[2U] 
                    = (IData)((((QData)((IData)((vlSelf->tb__DOT__dut__DOT__state_matrix[3U] 
                                                 + 
                                                 vlSelf->tb__DOT__dut__DOT__in_state_matrix[3U]))) 
                                << 0x20U) | (QData)((IData)(
                                                            (vlSelf->tb__DOT__dut__DOT__state_matrix[2U] 
                                                             + 
                                                             vlSelf->tb__DOT__dut__DOT__in_state_matrix[2U])))));
                __Vdly__tb__DOT__dut__DOT__state_matrix[3U] 
                    = (IData)(((((QData)((IData)((vlSelf->tb__DOT__dut__DOT__state_matrix[3U] 
                                                  + 
                                                  vlSelf->tb__DOT__dut__DOT__in_state_matrix[3U]))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (vlSelf->tb__DOT__dut__DOT__state_matrix[2U] 
                                                              + 
                                                              vlSelf->tb__DOT__dut__DOT__in_state_matrix[2U])))) 
                               >> 0x20U));
                __Vdly__tb__DOT__dut__DOT__state_matrix[4U] 
                    = (IData)((((QData)((IData)((vlSelf->tb__DOT__dut__DOT__state_matrix[5U] 
                                                 + 
                                                 vlSelf->tb__DOT__dut__DOT__in_state_matrix[5U]))) 
                                << 0x20U) | (QData)((IData)(
                                                            (vlSelf->tb__DOT__dut__DOT__state_matrix[4U] 
                                                             + 
                                                             vlSelf->tb__DOT__dut__DOT__in_state_matrix[4U])))));
                __Vdly__tb__DOT__dut__DOT__state_matrix[5U] 
                    = (IData)(((((QData)((IData)((vlSelf->tb__DOT__dut__DOT__state_matrix[5U] 
                                                  + 
                                                  vlSelf->tb__DOT__dut__DOT__in_state_matrix[5U]))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (vlSelf->tb__DOT__dut__DOT__state_matrix[4U] 
                                                              + 
                                                              vlSelf->tb__DOT__dut__DOT__in_state_matrix[4U])))) 
                               >> 0x20U));
                __Vdly__tb__DOT__dut__DOT__state_matrix[6U] 
                    = (IData)((((QData)((IData)((vlSelf->tb__DOT__dut__DOT__state_matrix[7U] 
                                                 + 
                                                 vlSelf->tb__DOT__dut__DOT__in_state_matrix[7U]))) 
                                << 0x20U) | (QData)((IData)(
                                                            (vlSelf->tb__DOT__dut__DOT__state_matrix[6U] 
                                                             + 
                                                             vlSelf->tb__DOT__dut__DOT__in_state_matrix[6U])))));
                __Vdly__tb__DOT__dut__DOT__state_matrix[7U] 
                    = (IData)(((((QData)((IData)((vlSelf->tb__DOT__dut__DOT__state_matrix[7U] 
                                                  + 
                                                  vlSelf->tb__DOT__dut__DOT__in_state_matrix[7U]))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (vlSelf->tb__DOT__dut__DOT__state_matrix[6U] 
                                                              + 
                                                              vlSelf->tb__DOT__dut__DOT__in_state_matrix[6U])))) 
                               >> 0x20U));
                __Vdly__tb__DOT__dut__DOT__state_matrix[8U] 
                    = (IData)((((QData)((IData)((vlSelf->tb__DOT__dut__DOT__state_matrix[9U] 
                                                 + 
                                                 vlSelf->tb__DOT__dut__DOT__in_state_matrix[9U]))) 
                                << 0x20U) | (QData)((IData)(
                                                            (vlSelf->tb__DOT__dut__DOT__state_matrix[8U] 
                                                             + 
                                                             vlSelf->tb__DOT__dut__DOT__in_state_matrix[8U])))));
                __Vdly__tb__DOT__dut__DOT__state_matrix[9U] 
                    = (IData)(((((QData)((IData)((vlSelf->tb__DOT__dut__DOT__state_matrix[9U] 
                                                  + 
                                                  vlSelf->tb__DOT__dut__DOT__in_state_matrix[9U]))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (vlSelf->tb__DOT__dut__DOT__state_matrix[8U] 
                                                              + 
                                                              vlSelf->tb__DOT__dut__DOT__in_state_matrix[8U])))) 
                               >> 0x20U));
                __Vdly__tb__DOT__dut__DOT__state_matrix[0xaU] 
                    = (IData)((((QData)((IData)((vlSelf->tb__DOT__dut__DOT__state_matrix[0xbU] 
                                                 + 
                                                 vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xbU]))) 
                                << 0x20U) | (QData)((IData)(
                                                            (vlSelf->tb__DOT__dut__DOT__state_matrix[0xaU] 
                                                             + 
                                                             vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xaU])))));
                __Vdly__tb__DOT__dut__DOT__state_matrix[0xbU] 
                    = (IData)(((((QData)((IData)((vlSelf->tb__DOT__dut__DOT__state_matrix[0xbU] 
                                                  + 
                                                  vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xbU]))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (vlSelf->tb__DOT__dut__DOT__state_matrix[0xaU] 
                                                              + 
                                                              vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xaU])))) 
                               >> 0x20U));
                __Vdly__tb__DOT__dut__DOT__state_matrix[0xcU] 
                    = (IData)((((QData)((IData)((vlSelf->tb__DOT__dut__DOT__state_matrix[0xdU] 
                                                 + 
                                                 vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xdU]))) 
                                << 0x20U) | (QData)((IData)(
                                                            (vlSelf->tb__DOT__dut__DOT__state_matrix[0xcU] 
                                                             + 
                                                             vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xcU])))));
                __Vdly__tb__DOT__dut__DOT__state_matrix[0xdU] 
                    = (IData)(((((QData)((IData)((vlSelf->tb__DOT__dut__DOT__state_matrix[0xdU] 
                                                  + 
                                                  vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xdU]))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (vlSelf->tb__DOT__dut__DOT__state_matrix[0xcU] 
                                                              + 
                                                              vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xcU])))) 
                               >> 0x20U));
                __Vdly__tb__DOT__dut__DOT__state_matrix[0xeU] 
                    = (IData)((((QData)((IData)((vlSelf->tb__DOT__dut__DOT__state_matrix[0xfU] 
                                                 + 
                                                 vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xfU]))) 
                                << 0x20U) | (QData)((IData)(
                                                            (vlSelf->tb__DOT__dut__DOT__state_matrix[0xeU] 
                                                             + 
                                                             vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xeU])))));
                __Vdly__tb__DOT__dut__DOT__state_matrix[0xfU] 
                    = (IData)(((((QData)((IData)((vlSelf->tb__DOT__dut__DOT__state_matrix[0xfU] 
                                                  + 
                                                  vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xfU]))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (vlSelf->tb__DOT__dut__DOT__state_matrix[0xeU] 
                                                              + 
                                                              vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xeU])))) 
                               >> 0x20U));
            }
        } else if ((1U & (IData)(vlSelf->tb__DOT__dut__DOT__state))) {
            __Vdly__tb__DOT__dut__DOT__state_matrix[0U] 
                = vlSelf->tb__DOT__dut__DOT__next_state_matrix[0U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[1U] 
                = vlSelf->tb__DOT__dut__DOT__next_state_matrix[1U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[2U] 
                = vlSelf->tb__DOT__dut__DOT__next_state_matrix[2U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[3U] 
                = vlSelf->tb__DOT__dut__DOT__next_state_matrix[3U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[4U] 
                = vlSelf->tb__DOT__dut__DOT__next_state_matrix[4U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[5U] 
                = vlSelf->tb__DOT__dut__DOT__next_state_matrix[5U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[6U] 
                = vlSelf->tb__DOT__dut__DOT__next_state_matrix[6U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[7U] 
                = vlSelf->tb__DOT__dut__DOT__next_state_matrix[7U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[8U] 
                = vlSelf->tb__DOT__dut__DOT__next_state_matrix[8U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[9U] 
                = vlSelf->tb__DOT__dut__DOT__next_state_matrix[9U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[0xaU] 
                = vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xaU];
            __Vdly__tb__DOT__dut__DOT__state_matrix[0xbU] 
                = vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xbU];
            __Vdly__tb__DOT__dut__DOT__state_matrix[0xcU] 
                = vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xcU];
            __Vdly__tb__DOT__dut__DOT__state_matrix[0xdU] 
                = vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xdU];
            __Vdly__tb__DOT__dut__DOT__state_matrix[0xeU] 
                = vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xeU];
            __Vdly__tb__DOT__dut__DOT__state_matrix[0xfU] 
                = vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xfU];
        } else if (vlSelf->tb__DOT__in_valid) {
            __Vdly__tb__DOT__dut__DOT__state_matrix[0U] 
                = vlSelf->tb__DOT__dut__DOT__in_state_matrix[0U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[1U] 
                = vlSelf->tb__DOT__dut__DOT__in_state_matrix[1U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[2U] 
                = vlSelf->tb__DOT__dut__DOT__in_state_matrix[2U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[3U] 
                = vlSelf->tb__DOT__dut__DOT__in_state_matrix[3U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[4U] 
                = vlSelf->tb__DOT__dut__DOT__in_state_matrix[4U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[5U] 
                = vlSelf->tb__DOT__dut__DOT__in_state_matrix[5U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[6U] 
                = vlSelf->tb__DOT__dut__DOT__in_state_matrix[6U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[7U] 
                = vlSelf->tb__DOT__dut__DOT__in_state_matrix[7U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[8U] 
                = vlSelf->tb__DOT__dut__DOT__in_state_matrix[8U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[9U] 
                = vlSelf->tb__DOT__dut__DOT__in_state_matrix[9U];
            __Vdly__tb__DOT__dut__DOT__state_matrix[0xaU] 
                = vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xaU];
            __Vdly__tb__DOT__dut__DOT__state_matrix[0xbU] 
                = vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xbU];
            __Vdly__tb__DOT__dut__DOT__state_matrix[0xcU] 
                = vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xcU];
            __Vdly__tb__DOT__dut__DOT__state_matrix[0xdU] 
                = vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xdU];
            __Vdly__tb__DOT__dut__DOT__state_matrix[0xeU] 
                = vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xeU];
            __Vdly__tb__DOT__dut__DOT__state_matrix[0xfU] 
                = vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xfU];
        }
        vlSelf->tb__DOT__dut__DOT__state = vlSelf->tb__DOT__dut__DOT__next_state;
    }
    vlSelf->tb__DOT__dut__DOT__step_counter = __Vdly__tb__DOT__dut__DOT__step_counter;
    vlSelf->tb__DOT__dut__DOT__state_matrix[0U] = __Vdly__tb__DOT__dut__DOT__state_matrix[0U];
    vlSelf->tb__DOT__dut__DOT__state_matrix[1U] = __Vdly__tb__DOT__dut__DOT__state_matrix[1U];
    vlSelf->tb__DOT__dut__DOT__state_matrix[2U] = __Vdly__tb__DOT__dut__DOT__state_matrix[2U];
    vlSelf->tb__DOT__dut__DOT__state_matrix[3U] = __Vdly__tb__DOT__dut__DOT__state_matrix[3U];
    vlSelf->tb__DOT__dut__DOT__state_matrix[4U] = __Vdly__tb__DOT__dut__DOT__state_matrix[4U];
    vlSelf->tb__DOT__dut__DOT__state_matrix[5U] = __Vdly__tb__DOT__dut__DOT__state_matrix[5U];
    vlSelf->tb__DOT__dut__DOT__state_matrix[6U] = __Vdly__tb__DOT__dut__DOT__state_matrix[6U];
    vlSelf->tb__DOT__dut__DOT__state_matrix[7U] = __Vdly__tb__DOT__dut__DOT__state_matrix[7U];
    vlSelf->tb__DOT__dut__DOT__state_matrix[8U] = __Vdly__tb__DOT__dut__DOT__state_matrix[8U];
    vlSelf->tb__DOT__dut__DOT__state_matrix[9U] = __Vdly__tb__DOT__dut__DOT__state_matrix[9U];
    vlSelf->tb__DOT__dut__DOT__state_matrix[0xaU] = 
        __Vdly__tb__DOT__dut__DOT__state_matrix[0xaU];
    vlSelf->tb__DOT__dut__DOT__state_matrix[0xbU] = 
        __Vdly__tb__DOT__dut__DOT__state_matrix[0xbU];
    vlSelf->tb__DOT__dut__DOT__state_matrix[0xcU] = 
        __Vdly__tb__DOT__dut__DOT__state_matrix[0xcU];
    vlSelf->tb__DOT__dut__DOT__state_matrix[0xdU] = 
        __Vdly__tb__DOT__dut__DOT__state_matrix[0xdU];
    vlSelf->tb__DOT__dut__DOT__state_matrix[0xeU] = 
        __Vdly__tb__DOT__dut__DOT__state_matrix[0xeU];
    vlSelf->tb__DOT__dut__DOT__state_matrix[0xfU] = 
        __Vdly__tb__DOT__dut__DOT__state_matrix[0xfU];
    if ((1U & vlSelf->tb__DOT__dut__DOT__step_counter)) {
        vlSelf->tb__DOT__dut__DOT__qr_in_c[0U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0xaU];
        vlSelf->tb__DOT__dut__DOT__qr_in_c[1U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0xbU];
        vlSelf->tb__DOT__dut__DOT__qr_in_c[2U] = vlSelf->tb__DOT__dut__DOT__state_matrix[8U];
        vlSelf->tb__DOT__dut__DOT__qr_in_c[3U] = vlSelf->tb__DOT__dut__DOT__state_matrix[9U];
        vlSelf->tb__DOT__dut__DOT__qr_in_d[0U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0xfU];
        vlSelf->tb__DOT__dut__DOT__qr_in_d[1U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0xcU];
        vlSelf->tb__DOT__dut__DOT__qr_in_d[2U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0xdU];
        vlSelf->tb__DOT__dut__DOT__qr_in_d[3U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0xeU];
        vlSelf->tb__DOT__dut__DOT__qr_in_a[0U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0U];
        vlSelf->tb__DOT__dut__DOT__qr_in_a[1U] = vlSelf->tb__DOT__dut__DOT__state_matrix[1U];
        vlSelf->tb__DOT__dut__DOT__qr_in_a[2U] = vlSelf->tb__DOT__dut__DOT__state_matrix[2U];
        vlSelf->tb__DOT__dut__DOT__qr_in_a[3U] = vlSelf->tb__DOT__dut__DOT__state_matrix[3U];
        vlSelf->tb__DOT__dut__DOT__qr_in_b[0U] = vlSelf->tb__DOT__dut__DOT__state_matrix[5U];
        vlSelf->tb__DOT__dut__DOT__qr_in_b[1U] = vlSelf->tb__DOT__dut__DOT__state_matrix[6U];
        vlSelf->tb__DOT__dut__DOT__qr_in_b[2U] = vlSelf->tb__DOT__dut__DOT__state_matrix[7U];
        vlSelf->tb__DOT__dut__DOT__qr_in_b[3U] = vlSelf->tb__DOT__dut__DOT__state_matrix[4U];
    } else {
        vlSelf->tb__DOT__dut__DOT__qr_in_c[0U] = vlSelf->tb__DOT__dut__DOT__state_matrix[8U];
        vlSelf->tb__DOT__dut__DOT__qr_in_c[1U] = vlSelf->tb__DOT__dut__DOT__state_matrix[9U];
        vlSelf->tb__DOT__dut__DOT__qr_in_c[2U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0xaU];
        vlSelf->tb__DOT__dut__DOT__qr_in_c[3U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0xbU];
        vlSelf->tb__DOT__dut__DOT__qr_in_d[0U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0xcU];
        vlSelf->tb__DOT__dut__DOT__qr_in_d[1U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0xdU];
        vlSelf->tb__DOT__dut__DOT__qr_in_d[2U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0xeU];
        vlSelf->tb__DOT__dut__DOT__qr_in_d[3U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0xfU];
        vlSelf->tb__DOT__dut__DOT__qr_in_a[0U] = vlSelf->tb__DOT__dut__DOT__state_matrix[0U];
        vlSelf->tb__DOT__dut__DOT__qr_in_a[1U] = vlSelf->tb__DOT__dut__DOT__state_matrix[1U];
        vlSelf->tb__DOT__dut__DOT__qr_in_a[2U] = vlSelf->tb__DOT__dut__DOT__state_matrix[2U];
        vlSelf->tb__DOT__dut__DOT__qr_in_a[3U] = vlSelf->tb__DOT__dut__DOT__state_matrix[3U];
        vlSelf->tb__DOT__dut__DOT__qr_in_b[0U] = vlSelf->tb__DOT__dut__DOT__state_matrix[4U];
        vlSelf->tb__DOT__dut__DOT__qr_in_b[1U] = vlSelf->tb__DOT__dut__DOT__state_matrix[5U];
        vlSelf->tb__DOT__dut__DOT__qr_in_b[2U] = vlSelf->tb__DOT__dut__DOT__state_matrix[6U];
        vlSelf->tb__DOT__dut__DOT__qr_in_b[3U] = vlSelf->tb__DOT__dut__DOT__state_matrix[7U];
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
    vlSelf->tb__DOT__dut__DOT__next_state_matrix[0U] 
        = vlSelf->tb__DOT__dut__DOT__state_matrix[0U];
    vlSelf->tb__DOT__dut__DOT__next_state_matrix[1U] 
        = vlSelf->tb__DOT__dut__DOT__state_matrix[1U];
    vlSelf->tb__DOT__dut__DOT__next_state_matrix[2U] 
        = vlSelf->tb__DOT__dut__DOT__state_matrix[2U];
    vlSelf->tb__DOT__dut__DOT__next_state_matrix[3U] 
        = vlSelf->tb__DOT__dut__DOT__state_matrix[3U];
    vlSelf->tb__DOT__dut__DOT__next_state_matrix[4U] 
        = vlSelf->tb__DOT__dut__DOT__state_matrix[4U];
    vlSelf->tb__DOT__dut__DOT__next_state_matrix[5U] 
        = vlSelf->tb__DOT__dut__DOT__state_matrix[5U];
    vlSelf->tb__DOT__dut__DOT__next_state_matrix[6U] 
        = vlSelf->tb__DOT__dut__DOT__state_matrix[6U];
    vlSelf->tb__DOT__dut__DOT__next_state_matrix[7U] 
        = vlSelf->tb__DOT__dut__DOT__state_matrix[7U];
    vlSelf->tb__DOT__dut__DOT__next_state_matrix[8U] 
        = vlSelf->tb__DOT__dut__DOT__state_matrix[8U];
    vlSelf->tb__DOT__dut__DOT__next_state_matrix[9U] 
        = vlSelf->tb__DOT__dut__DOT__state_matrix[9U];
    vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xaU] 
        = vlSelf->tb__DOT__dut__DOT__state_matrix[0xaU];
    vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xbU] 
        = vlSelf->tb__DOT__dut__DOT__state_matrix[0xbU];
    vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xcU] 
        = vlSelf->tb__DOT__dut__DOT__state_matrix[0xcU];
    vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xdU] 
        = vlSelf->tb__DOT__dut__DOT__state_matrix[0xdU];
    vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xeU] 
        = vlSelf->tb__DOT__dut__DOT__state_matrix[0xeU];
    vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xfU] 
        = vlSelf->tb__DOT__dut__DOT__state_matrix[0xfU];
    if ((1U & vlSelf->tb__DOT__dut__DOT__step_counter)) {
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[0U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_a[0U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[5U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_b[0U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xaU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_c[0U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xfU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_d[0U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[1U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_a[1U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[6U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_b[1U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xbU] 
            = (IData)((((QData)((IData)(vlSelf->tb__DOT__dut__DOT__qr_out_d
                                        [1U])) << 0x20U) 
                       | (QData)((IData)(vlSelf->tb__DOT__dut__DOT__qr_out_c
                                         [1U]))));
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xcU] 
            = (IData)(((((QData)((IData)(vlSelf->tb__DOT__dut__DOT__qr_out_d
                                         [1U])) << 0x20U) 
                        | (QData)((IData)(vlSelf->tb__DOT__dut__DOT__qr_out_c
                                          [1U]))) >> 0x20U));
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[2U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_a[2U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[7U] 
            = (IData)((((QData)((IData)(vlSelf->tb__DOT__dut__DOT__qr_out_c
                                        [2U])) << 0x20U) 
                       | (QData)((IData)(vlSelf->tb__DOT__dut__DOT__qr_out_b
                                         [2U]))));
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[8U] 
            = (IData)(((((QData)((IData)(vlSelf->tb__DOT__dut__DOT__qr_out_c
                                         [2U])) << 0x20U) 
                        | (QData)((IData)(vlSelf->tb__DOT__dut__DOT__qr_out_b
                                          [2U]))) >> 0x20U));
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xdU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_d[2U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[3U] 
            = (IData)((((QData)((IData)(vlSelf->tb__DOT__dut__DOT__qr_out_b
                                        [3U])) << 0x20U) 
                       | (QData)((IData)(vlSelf->tb__DOT__dut__DOT__qr_out_a
                                         [3U]))));
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[4U] 
            = (IData)(((((QData)((IData)(vlSelf->tb__DOT__dut__DOT__qr_out_b
                                         [3U])) << 0x20U) 
                        | (QData)((IData)(vlSelf->tb__DOT__dut__DOT__qr_out_a
                                          [3U]))) >> 0x20U));
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[9U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_c[3U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xeU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_d[3U];
    } else {
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[0U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_a[0U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[4U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_b[0U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[8U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_c[0U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xcU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_d[0U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[1U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_a[1U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[5U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_b[1U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[9U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_c[1U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xdU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_d[1U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[2U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_a[2U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[6U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_b[2U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xaU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_c[2U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xeU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_d[2U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[3U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_a[3U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[7U] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_b[3U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xbU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_c[3U];
        vlSelf->tb__DOT__dut__DOT__next_state_matrix[0xfU] 
            = vlSelf->tb__DOT__dut__DOT__qr_out_d[3U];
    }
}

VL_INLINE_OPT void Vchacha20_tbUInu___024root___nba_comb__TOP__0(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[0U] = 0x61707865U;
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[1U] = 0x3320646eU;
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[2U] = 0x79622d32U;
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[3U] = 0x6b206574U;
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[4U] 
        = vlSelf->tb__DOT__in_key[0U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[5U] 
        = vlSelf->tb__DOT__in_key[1U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[6U] 
        = vlSelf->tb__DOT__in_key[2U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[7U] 
        = vlSelf->tb__DOT__in_key[3U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[8U] 
        = vlSelf->tb__DOT__in_key[4U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[9U] 
        = vlSelf->tb__DOT__in_key[5U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xaU] 
        = vlSelf->tb__DOT__in_key[6U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xbU] 
        = vlSelf->tb__DOT__in_key[7U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xcU] 
        = vlSelf->tb__DOT__counter;
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xdU] 
        = vlSelf->tb__DOT__in_nonce[0U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xeU] 
        = vlSelf->tb__DOT__in_nonce[1U];
    vlSelf->tb__DOT__dut__DOT__in_state_matrix[0xfU] 
        = vlSelf->tb__DOT__in_nonce[2U];
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

void Vchacha20_tbUInu___024root___eval_nba(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchacha20_tbUInu___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vchacha20_tbUInu___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vchacha20_tbUInu___024root___timing_resume(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___timing_resume\n"); );
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

void Vchacha20_tbUInu___024root___timing_commit(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8aadc0b9__0.commit("@(posedge tb.clk)");
    }
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h54f9e22e__0.commit("@([changed] tb.out_valid)");
    }
}

void Vchacha20_tbUInu___024root___eval_triggers__act(Vchacha20_tbUInu___024root* vlSelf);

bool Vchacha20_tbUInu___024root___eval_phase__act(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vchacha20_tbUInu___024root___eval_triggers__act(vlSelf);
    Vchacha20_tbUInu___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vchacha20_tbUInu___024root___timing_resume(vlSelf);
        Vchacha20_tbUInu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vchacha20_tbUInu___024root___eval_phase__nba(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vchacha20_tbUInu___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchacha20_tbUInu___024root___dump_triggers__nba(Vchacha20_tbUInu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vchacha20_tbUInu___024root___dump_triggers__act(Vchacha20_tbUInu___024root* vlSelf);
#endif  // VL_DEBUG

void Vchacha20_tbUInu___024root___eval(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vchacha20_tbUInu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/tmp/chacha20_tbUInu.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vchacha20_tbUInu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/tmp/chacha20_tbUInu.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vchacha20_tbUInu___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vchacha20_tbUInu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vchacha20_tbUInu___024root___eval_debug_assertions(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
