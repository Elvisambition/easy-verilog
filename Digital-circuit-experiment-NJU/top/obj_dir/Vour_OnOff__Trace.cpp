// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vour_OnOff__Syms.h"


void Vour_OnOff___024root__traceChgSub0(Vour_OnOff___024root* vlSelf, VerilatedVcd* tracep);

void Vour_OnOff___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vour_OnOff___024root* const __restrict vlSelf = static_cast<Vour_OnOff___024root*>(voidSelf);
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vour_OnOff___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vour_OnOff___024root__traceChgSub0(Vour_OnOff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlSelf->a));
        tracep->chgBit(oldp+1,(vlSelf->b));
        tracep->chgBit(oldp+2,(vlSelf->f));
    }
}

void Vour_OnOff___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    Vour_OnOff___024root* const __restrict vlSelf = static_cast<Vour_OnOff___024root*>(voidSelf);
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
