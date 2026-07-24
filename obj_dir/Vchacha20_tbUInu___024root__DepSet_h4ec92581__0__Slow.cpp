// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchacha20_tbUInu.h for the primary calling header

#include "Vchacha20_tbUInu__pch.h"
#include "Vchacha20_tbUInu___024root.h"

VL_ATTR_COLD void Vchacha20_tbUInu___024root___eval_static__TOP(Vchacha20_tbUInu___024root* vlSelf);

VL_ATTR_COLD void Vchacha20_tbUInu___024root___eval_static(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___eval_static\n"); );
    // Body
    Vchacha20_tbUInu___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vchacha20_tbUInu___024root___eval_static__TOP(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb__DOT__clk = 0U;
    vlSelf->tb__DOT__rst = 1U;
    vlSelf->tb__DOT__in_valid = 0U;
}

VL_ATTR_COLD void Vchacha20_tbUInu___024root___eval_final(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchacha20_tbUInu___024root___dump_triggers__stl(Vchacha20_tbUInu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vchacha20_tbUInu___024root___eval_phase__stl(Vchacha20_tbUInu___024root* vlSelf);

VL_ATTR_COLD void Vchacha20_tbUInu___024root___eval_settle(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vchacha20_tbUInu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/tmp/chacha20_tbUInu.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vchacha20_tbUInu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchacha20_tbUInu___024root___dump_triggers__stl(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vchacha20_tbUInu___024root___stl_sequent__TOP__0(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___stl_sequent__TOP__0\n"); );
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

VL_ATTR_COLD void Vchacha20_tbUInu___024root___eval_stl(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vchacha20_tbUInu___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vchacha20_tbUInu___024root___eval_triggers__stl(Vchacha20_tbUInu___024root* vlSelf);

VL_ATTR_COLD bool Vchacha20_tbUInu___024root___eval_phase__stl(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vchacha20_tbUInu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vchacha20_tbUInu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchacha20_tbUInu___024root___dump_triggers__act(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] tb.out_valid)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchacha20_tbUInu___024root___dump_triggers__nba(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] tb.out_valid)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vchacha20_tbUInu___024root___ctor_var_reset(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb__DOT__in_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->tb__DOT__in_key);
    vlSelf->tb__DOT__counter = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96, vlSelf->tb__DOT__in_nonce);
    VL_RAND_RESET_W(512, vlSelf->tb__DOT__out_matrix);
    vlSelf->tb__DOT__out_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->tb__DOT__dut__DOT__in_state_matrix);
    VL_RAND_RESET_W(512, vlSelf->tb__DOT__dut__DOT__state_matrix);
    VL_RAND_RESET_W(512, vlSelf->tb__DOT__dut__DOT__next_state_matrix);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__qr_in_a[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__qr_in_b[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__qr_in_c[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__qr_in_d[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__qr_out_a[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__qr_out_b[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__qr_out_c[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb__DOT__dut__DOT__qr_out_d[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb__DOT__dut__DOT__step_counter = VL_RAND_RESET_I(32);
    vlSelf->tb__DOT__dut__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->tb__DOT__dut__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__out_valid__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
