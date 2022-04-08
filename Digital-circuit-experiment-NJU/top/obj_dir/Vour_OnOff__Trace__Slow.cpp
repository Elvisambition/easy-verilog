// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vour_OnOff__Syms.h"


void Vour_OnOff___024root__traceInitSub0(Vour_OnOff___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vour_OnOff___024root__traceInitTop(Vour_OnOff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vour_OnOff___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vour_OnOff___024root__traceInitSub0(Vour_OnOff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a", false,-1);
        tracep->declBit(c+2,"b", false,-1);
        tracep->declBit(c+3,"f", false,-1);
        tracep->declBit(c+1,"our_OnOff a", false,-1);
        tracep->declBit(c+2,"our_OnOff b", false,-1);
        tracep->declBit(c+3,"our_OnOff f", false,-1);
    }
}

void Vour_OnOff___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vour_OnOff___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vour_OnOff___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vour_OnOff___024root__traceRegister(Vour_OnOff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vour_OnOff___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vour_OnOff___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vour_OnOff___024root__traceCleanup, vlSelf);
    }
}

void Vour_OnOff___024root__traceFullSub0(Vour_OnOff___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vour_OnOff___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vour_OnOff___024root* const __restrict vlSelf = static_cast<Vour_OnOff___024root*>(voidSelf);
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vour_OnOff___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vour_OnOff___024root__traceFullSub0(Vour_OnOff___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vour_OnOff__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->a));
        tracep->fullBit(oldp+2,(vlSelf->b));
        tracep->fullBit(oldp+3,(vlSelf->f));
    }
}
