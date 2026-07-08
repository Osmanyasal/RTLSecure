// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchacha20_tbUInu.h for the primary calling header

#include "Vchacha20_tbUInu__pch.h"
#include "Vchacha20_tbUInu__Syms.h"
#include "Vchacha20_tbUInu___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vchacha20_tbUInu___024root___dump_triggers__stl(Vchacha20_tbUInu___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vchacha20_tbUInu___024root___eval_triggers__stl(Vchacha20_tbUInu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vchacha20_tbUInu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchacha20_tbUInu___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vchacha20_tbUInu___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
