// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchacha20_tbUInu.h for the primary calling header

#include "Vchacha20_tbUInu__pch.h"
#include "Vchacha20_tbUInu__Syms.h"
#include "Vchacha20_tbUInu___024root.h"

extern const VlWide<8>/*255:0*/ Vchacha20_tbUInu__ConstPool__CONST_hcbeeadec_0;
extern const VlWide<16>/*511:0*/ Vchacha20_tbUInu__ConstPool__CONST_hf7af2097_0;

VL_INLINE_OPT VlCoroutine Vchacha20_tbUInu___024root___eval_initial__TOP__Vtiming__0(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->tb__DOT__in_key[0U] = Vchacha20_tbUInu__ConstPool__CONST_hcbeeadec_0[0U];
    vlSelf->tb__DOT__in_key[1U] = Vchacha20_tbUInu__ConstPool__CONST_hcbeeadec_0[1U];
    vlSelf->tb__DOT__in_key[2U] = Vchacha20_tbUInu__ConstPool__CONST_hcbeeadec_0[2U];
    vlSelf->tb__DOT__in_key[3U] = Vchacha20_tbUInu__ConstPool__CONST_hcbeeadec_0[3U];
    vlSelf->tb__DOT__in_key[4U] = Vchacha20_tbUInu__ConstPool__CONST_hcbeeadec_0[4U];
    vlSelf->tb__DOT__in_key[5U] = Vchacha20_tbUInu__ConstPool__CONST_hcbeeadec_0[5U];
    vlSelf->tb__DOT__in_key[6U] = Vchacha20_tbUInu__ConstPool__CONST_hcbeeadec_0[6U];
    vlSelf->tb__DOT__in_key[7U] = Vchacha20_tbUInu__ConstPool__CONST_hcbeeadec_0[7U];
    vlSelf->tb__DOT__counter = 1U;
    vlSelf->tb__DOT__in_nonce[0U] = 9U;
    vlSelf->tb__DOT__in_nonce[1U] = 0x4aU;
    vlSelf->tb__DOT__in_nonce[2U] = 0U;
    co_await vlSelf->__VtrigSched_h8aadc0b9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "/tmp/chacha20_tbUInu.sv", 
                                                       31);
    co_await vlSelf->__VtrigSched_h8aadc0b9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "/tmp/chacha20_tbUInu.sv", 
                                                       31);
    vlSelf->tb__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h8aadc0b9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "/tmp/chacha20_tbUInu.sv", 
                                                       33);
    vlSelf->tb__DOT__in_valid = 1U;
    co_await vlSelf->__VtrigSched_h8aadc0b9__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb.clk)", 
                                                       "/tmp/chacha20_tbUInu.sv", 
                                                       35);
    vlSelf->tb__DOT__in_valid = 0U;
    while ((1U & (~ (IData)(vlSelf->tb__DOT__out_valid)))) {
        co_await vlSelf->__VtrigSched_h54f9e22e__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb.out_valid)", 
                                                           "/tmp/chacha20_tbUInu.sv", 
                                                           37);
    }
    if (VL_UNLIKELY((0U != ((((((((((((((((Vchacha20_tbUInu__ConstPool__CONST_hf7af2097_0[0U] 
                                           ^ vlSelf->tb__DOT__out_matrix[0U]) 
                                          | (Vchacha20_tbUInu__ConstPool__CONST_hf7af2097_0[1U] 
                                             ^ vlSelf->tb__DOT__out_matrix[1U])) 
                                         | (Vchacha20_tbUInu__ConstPool__CONST_hf7af2097_0[2U] 
                                            ^ vlSelf->tb__DOT__out_matrix[2U])) 
                                        | (Vchacha20_tbUInu__ConstPool__CONST_hf7af2097_0[3U] 
                                           ^ vlSelf->tb__DOT__out_matrix[3U])) 
                                       | (Vchacha20_tbUInu__ConstPool__CONST_hf7af2097_0[4U] 
                                          ^ vlSelf->tb__DOT__out_matrix[4U])) 
                                      | (Vchacha20_tbUInu__ConstPool__CONST_hf7af2097_0[5U] 
                                         ^ vlSelf->tb__DOT__out_matrix[5U])) 
                                     | (Vchacha20_tbUInu__ConstPool__CONST_hf7af2097_0[6U] 
                                        ^ vlSelf->tb__DOT__out_matrix[6U])) 
                                    | (Vchacha20_tbUInu__ConstPool__CONST_hf7af2097_0[7U] 
                                       ^ vlSelf->tb__DOT__out_matrix[7U])) 
                                   | (Vchacha20_tbUInu__ConstPool__CONST_hf7af2097_0[8U] 
                                      ^ vlSelf->tb__DOT__out_matrix[8U])) 
                                  | (Vchacha20_tbUInu__ConstPool__CONST_hf7af2097_0[9U] 
                                     ^ vlSelf->tb__DOT__out_matrix[9U])) 
                                 | (Vchacha20_tbUInu__ConstPool__CONST_hf7af2097_0[0xaU] 
                                    ^ vlSelf->tb__DOT__out_matrix[0xaU])) 
                                | (Vchacha20_tbUInu__ConstPool__CONST_hf7af2097_0[0xbU] 
                                   ^ vlSelf->tb__DOT__out_matrix[0xbU])) 
                               | (Vchacha20_tbUInu__ConstPool__CONST_hf7af2097_0[0xcU] 
                                  ^ vlSelf->tb__DOT__out_matrix[0xcU])) 
                              | (Vchacha20_tbUInu__ConstPool__CONST_hf7af2097_0[0xdU] 
                                 ^ vlSelf->tb__DOT__out_matrix[0xdU])) 
                             | (Vchacha20_tbUInu__ConstPool__CONST_hf7af2097_0[0xeU] 
                                ^ vlSelf->tb__DOT__out_matrix[0xeU])) 
                            | (Vchacha20_tbUInu__ConstPool__CONST_hf7af2097_0[0xfU] 
                               ^ vlSelf->tb__DOT__out_matrix[0xfU]))))) {
        VL_WRITEF("FAIL out_matrix=%x\nFAIL expected =e4e7f11015593bd11fdd0f50c47120a3c7f4d1c70368c0339aaa22044e6cd4c3466482d209aa9f0705d7c214a2028bd9d19c12b5b94e16dee883d0cb4e3c50a2\n[%0t] %%Fatal: chacha20_tbUInu.sv:41: Assertion failed in %Ntb\n",
                  512,vlSelf->tb__DOT__out_matrix.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/tmp/chacha20_tbUInu.sv", 41, "");
    }
    VL_WRITEF("PASS\n");
    VL_FINISH_MT("/tmp/chacha20_tbUInu.sv", 44, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchacha20_tbUInu___024root___dump_triggers__act(Vchacha20_tbUInu___024root* vlSelf);
#endif  // VL_DEBUG

void Vchacha20_tbUInu___024root___eval_triggers__act(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->tb__DOT__out_valid) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__tb__DOT__out_valid__0)));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelf->tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb__DOT__out_valid__0 
        = vlSelf->tb__DOT__out_valid;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vchacha20_tbUInu___024root___dump_triggers__act(vlSelf);
    }
#endif
}
