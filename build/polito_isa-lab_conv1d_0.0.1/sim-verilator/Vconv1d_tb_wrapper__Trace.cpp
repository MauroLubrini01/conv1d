// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vconv1d_tb_wrapper__Syms.h"


void Vconv1d_tb_wrapper___024root__traceChgSub0(Vconv1d_tb_wrapper___024root* vlSelf, VerilatedFst* tracep);

void Vconv1d_tb_wrapper___024root__traceChgTop0(void* voidSelf, VerilatedFst* tracep) {
    Vconv1d_tb_wrapper___024root* const __restrict vlSelf = static_cast<Vconv1d_tb_wrapper___024root*>(voidSelf);
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vconv1d_tb_wrapper___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vconv1d_tb_wrapper___024root__traceChgSub0(Vconv1d_tb_wrapper___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0U]),32);
            tracep->chgIData(oldp+1,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[1U]),32);
            tracep->chgIData(oldp+2,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[2U]),32);
            tracep->chgIData(oldp+3,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[3U]),32);
            tracep->chgIData(oldp+4,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[4U]),32);
            tracep->chgIData(oldp+5,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[5U]),32);
            tracep->chgIData(oldp+6,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[6U]),32);
            tracep->chgIData(oldp+7,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[7U]),32);
            tracep->chgIData(oldp+8,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[8U]),32);
            tracep->chgIData(oldp+9,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[9U]),32);
            tracep->chgIData(oldp+10,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0xaU]),32);
            tracep->chgIData(oldp+11,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0xbU]),32);
            tracep->chgIData(oldp+12,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0xcU]),32);
            tracep->chgIData(oldp+13,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0xdU]),32);
            tracep->chgIData(oldp+14,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0xeU]),32);
            tracep->chgIData(oldp+15,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0xfU]),32);
            tracep->chgIData(oldp+16,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x10U]),32);
            tracep->chgIData(oldp+17,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x11U]),32);
            tracep->chgIData(oldp+18,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x12U]),32);
            tracep->chgIData(oldp+19,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x13U]),32);
            tracep->chgIData(oldp+20,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x14U]),32);
            tracep->chgIData(oldp+21,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x15U]),32);
            tracep->chgIData(oldp+22,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x16U]),32);
            tracep->chgIData(oldp+23,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x17U]),32);
            tracep->chgIData(oldp+24,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x18U]),32);
            tracep->chgIData(oldp+25,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x19U]),32);
            tracep->chgIData(oldp+26,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x1aU]),32);
            tracep->chgIData(oldp+27,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x1bU]),32);
            tracep->chgIData(oldp+28,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x1cU]),32);
            tracep->chgIData(oldp+29,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x1dU]),32);
            tracep->chgIData(oldp+30,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x1eU]),32);
            tracep->chgIData(oldp+31,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x1fU]),32);
            tracep->chgIData(oldp+32,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x20U]),32);
            tracep->chgIData(oldp+33,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x21U]),32);
            tracep->chgIData(oldp+34,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x22U]),32);
            tracep->chgIData(oldp+35,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x23U]),32);
            tracep->chgIData(oldp+36,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x24U]),32);
            tracep->chgIData(oldp+37,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x25U]),32);
            tracep->chgIData(oldp+38,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x26U]),32);
            tracep->chgIData(oldp+39,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x27U]),32);
            tracep->chgIData(oldp+40,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x28U]),32);
            tracep->chgIData(oldp+41,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x29U]),32);
            tracep->chgIData(oldp+42,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x2aU]),32);
            tracep->chgIData(oldp+43,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x2bU]),32);
            tracep->chgIData(oldp+44,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x2cU]),32);
            tracep->chgIData(oldp+45,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x2dU]),32);
            tracep->chgIData(oldp+46,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x2eU]),32);
            tracep->chgIData(oldp+47,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x2fU]),32);
            tracep->chgIData(oldp+48,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x30U]),32);
            tracep->chgIData(oldp+49,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x31U]),32);
            tracep->chgIData(oldp+50,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x32U]),32);
            tracep->chgIData(oldp+51,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x33U]),32);
            tracep->chgIData(oldp+52,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x34U]),32);
            tracep->chgIData(oldp+53,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x35U]),32);
            tracep->chgIData(oldp+54,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x36U]),32);
            tracep->chgIData(oldp+55,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x37U]),32);
            tracep->chgIData(oldp+56,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x38U]),32);
            tracep->chgIData(oldp+57,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x39U]),32);
            tracep->chgIData(oldp+58,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x3aU]),32);
            tracep->chgIData(oldp+59,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x3bU]),32);
            tracep->chgIData(oldp+60,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x3cU]),32);
            tracep->chgIData(oldp+61,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x3dU]),32);
            tracep->chgIData(oldp+62,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x3eU]),32);
            tracep->chgIData(oldp+63,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x3fU]),32);
            tracep->chgIData(oldp+64,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x40U]),32);
            tracep->chgIData(oldp+65,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x41U]),32);
            tracep->chgIData(oldp+66,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x42U]),32);
            tracep->chgIData(oldp+67,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x43U]),32);
            tracep->chgIData(oldp+68,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x44U]),32);
            tracep->chgIData(oldp+69,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x45U]),32);
            tracep->chgIData(oldp+70,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x46U]),32);
            tracep->chgIData(oldp+71,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x47U]),32);
            tracep->chgIData(oldp+72,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x48U]),32);
            tracep->chgIData(oldp+73,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x49U]),32);
            tracep->chgIData(oldp+74,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x4aU]),32);
            tracep->chgIData(oldp+75,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x4bU]),32);
            tracep->chgIData(oldp+76,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x4cU]),32);
            tracep->chgIData(oldp+77,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x4dU]),32);
            tracep->chgIData(oldp+78,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x4eU]),32);
            tracep->chgIData(oldp+79,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x4fU]),32);
            tracep->chgIData(oldp+80,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x50U]),32);
            tracep->chgIData(oldp+81,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x51U]),32);
            tracep->chgIData(oldp+82,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x52U]),32);
            tracep->chgIData(oldp+83,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x53U]),32);
            tracep->chgIData(oldp+84,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x54U]),32);
            tracep->chgIData(oldp+85,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x55U]),32);
            tracep->chgIData(oldp+86,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x56U]),32);
            tracep->chgIData(oldp+87,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x57U]),32);
            tracep->chgIData(oldp+88,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x58U]),32);
            tracep->chgIData(oldp+89,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x59U]),32);
            tracep->chgIData(oldp+90,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x5aU]),32);
            tracep->chgIData(oldp+91,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x5bU]),32);
            tracep->chgIData(oldp+92,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x5cU]),32);
            tracep->chgIData(oldp+93,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x5dU]),32);
            tracep->chgIData(oldp+94,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x5eU]),32);
            tracep->chgIData(oldp+95,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x5fU]),32);
            tracep->chgIData(oldp+96,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x60U]),32);
            tracep->chgIData(oldp+97,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x61U]),32);
            tracep->chgIData(oldp+98,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x62U]),32);
            tracep->chgIData(oldp+99,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x63U]),32);
            tracep->chgIData(oldp+100,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x64U]),32);
            tracep->chgIData(oldp+101,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x65U]),32);
            tracep->chgIData(oldp+102,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x66U]),32);
            tracep->chgIData(oldp+103,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x67U]),32);
            tracep->chgIData(oldp+104,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x68U]),32);
            tracep->chgIData(oldp+105,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x69U]),32);
            tracep->chgIData(oldp+106,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x6aU]),32);
            tracep->chgIData(oldp+107,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x6bU]),32);
            tracep->chgIData(oldp+108,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x6cU]),32);
            tracep->chgIData(oldp+109,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x6dU]),32);
            tracep->chgIData(oldp+110,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x6eU]),32);
            tracep->chgIData(oldp+111,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x6fU]),32);
            tracep->chgIData(oldp+112,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x70U]),32);
            tracep->chgIData(oldp+113,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x71U]),32);
            tracep->chgIData(oldp+114,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x72U]),32);
            tracep->chgIData(oldp+115,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x73U]),32);
            tracep->chgIData(oldp+116,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x74U]),32);
            tracep->chgIData(oldp+117,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x75U]),32);
            tracep->chgIData(oldp+118,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x76U]),32);
            tracep->chgIData(oldp+119,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x77U]),32);
            tracep->chgIData(oldp+120,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x78U]),32);
            tracep->chgIData(oldp+121,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x79U]),32);
            tracep->chgIData(oldp+122,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x7aU]),32);
            tracep->chgIData(oldp+123,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x7bU]),32);
            tracep->chgIData(oldp+124,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x7cU]),32);
            tracep->chgIData(oldp+125,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x7dU]),32);
            tracep->chgIData(oldp+126,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x7eU]),32);
            tracep->chgIData(oldp+127,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x7fU]),32);
            tracep->chgIData(oldp+128,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+129,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
            tracep->chgCData(oldp+130,(vlSymsp->TOP__conv1d_control_reg_pkg.__PVT__CONV1D_CONTROL_PERMIT[0]),4);
            tracep->chgCData(oldp+131,(vlSymsp->TOP__conv1d_control_reg_pkg.__PVT__CONV1D_CONTROL_PERMIT[1]),4);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+132,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__reg2hw) 
                                            >> 3U))));
            tracep->chgIData(oldp+133,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk8__DOT__i),32);
            tracep->chgIData(oldp+134,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j),32);
            tracep->chgIData(oldp+135,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk10__DOT__i),32);
            tracep->chgIData(oldp+136,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j),32);
            tracep->chgIData(oldp+137,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk6__DOT__i),32);
            tracep->chgIData(oldp+138,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j),32);
            tracep->chgBit(oldp+139,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__reg2hw) 
                                            >> 3U))));
            tracep->chgBit(oldp+140,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__reg2hw) 
                                            >> 2U))));
            tracep->chgBit(oldp+141,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__reg2hw) 
                                            >> 1U))));
            tracep->chgBit(oldp+142,((1U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__reg2hw))));
            tracep->chgBit(oldp+143,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_control_start__q));
            tracep->chgBit(oldp+144,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_control_rst__q));
            tracep->chgBit(oldp+145,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_status_running__q));
            tracep->chgBit(oldp+146,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_status_done__q));
            tracep->chgBit(oldp+147,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_control_start__DOT__qe));
            tracep->chgBit(oldp+148,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_control_rst__DOT__qe));
            tracep->chgBit(oldp+149,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_status_running__DOT__qe));
            tracep->chgBit(oldp+150,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_status_done__DOT__qe));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+151,((1U & (vlSelf->conv1d_tb_wrapper__DOT__obi_req[2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+152,((1U & (vlSelf->conv1d_tb_wrapper__DOT__obi_req[2U] 
                                            >> 4U))));
            tracep->chgCData(oldp+153,((0xfU & vlSelf->conv1d_tb_wrapper__DOT__obi_req[2U])),4);
            tracep->chgIData(oldp+154,(vlSelf->conv1d_tb_wrapper__DOT__obi_req[1U]),32);
            tracep->chgIData(oldp+155,(vlSelf->conv1d_tb_wrapper__DOT__obi_req[0U]),32);
            tracep->chgBit(oldp+156,((1U & (IData)(
                                                   (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__u_obi_bridge__obi_rsp_o 
                                                    >> 0x21U)))));
            tracep->chgBit(oldp+157,((1U & (IData)(
                                                   (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__u_obi_bridge__obi_rsp_o 
                                                    >> 0x20U)))));
            tracep->chgIData(oldp+158,((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__u_obi_bridge__obi_rsp_o)),32);
            tracep->chgBit(oldp+159,((1U & (vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+160,((1U & (vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U] 
                                            >> 4U))));
            tracep->chgCData(oldp+161,((0xfU & vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U])),4);
            tracep->chgIData(oldp+162,(vlSelf->conv1d_tb_wrapper__DOT__reg_req[1U]),32);
            tracep->chgIData(oldp+163,(vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U]),32);
            tracep->chgBit(oldp+164,((1U & (IData)(
                                                   (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_intf_rsp 
                                                    >> 0x21U)))));
            tracep->chgBit(oldp+165,((1U & (IData)(
                                                   (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_intf_rsp 
                                                    >> 0x20U)))));
            tracep->chgIData(oldp+166,((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_intf_rsp)),32);
            tracep->chgBit(oldp+167,((1U & (vlSelf->conv1d_tb_wrapper__DOT__obi_req[2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+168,((1U & (vlSelf->conv1d_tb_wrapper__DOT__obi_req[2U] 
                                            >> 4U))));
            tracep->chgCData(oldp+169,((0xfU & vlSelf->conv1d_tb_wrapper__DOT__obi_req[2U])),4);
            tracep->chgIData(oldp+170,(vlSelf->conv1d_tb_wrapper__DOT__obi_req[1U]),32);
            tracep->chgIData(oldp+171,(vlSelf->conv1d_tb_wrapper__DOT__obi_req[0U]),32);
            tracep->chgBit(oldp+172,((1U & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+173,((1U & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U] 
                                            >> 4U))));
            tracep->chgCData(oldp+174,((0xfU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])),4);
            tracep->chgIData(oldp+175,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U]),32);
            tracep->chgIData(oldp+176,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U]),32);
            tracep->chgBit(oldp+177,((1U & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+178,((1U & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U] 
                                            >> 4U))));
            tracep->chgCData(oldp+179,((0x7fU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U])),7);
            tracep->chgIData(oldp+180,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U]),32);
            tracep->chgCData(oldp+181,((0xfU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])),4);
            tracep->chgCData(oldp+182,((0x7fU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U])),7);
            tracep->chgIData(oldp+183,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U]),32);
            tracep->chgCData(oldp+184,((0xfU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])),4);
            tracep->chgBit(oldp+185,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_we));
            tracep->chgBit(oldp+186,((1U & ((vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U] 
                                             >> 5U) 
                                            & (~ (vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U] 
                                                  >> 4U))))));
            tracep->chgCData(oldp+187,((7U & vlSelf->conv1d_tb_wrapper__DOT__reg_req[1U])),3);
            tracep->chgIData(oldp+188,(vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U]),32);
            tracep->chgCData(oldp+189,((0xfU & vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U])),4);
            tracep->chgIData(oldp+190,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_rdata_next),32);
            tracep->chgBit(oldp+191,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__wr_err));
            tracep->chgBit(oldp+192,((1U & ((((vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U] 
                                               >> 5U) 
                                              & (~ 
                                                 (vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U] 
                                                  >> 4U))) 
                                             | (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_we)) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__addr_hit))))))));
            tracep->chgBit(oldp+193,((1U & vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U])));
            tracep->chgBit(oldp+194,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__control_rst_we));
            tracep->chgBit(oldp+195,((1U & (vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+196,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__status_done_we));
            tracep->chgCData(oldp+197,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__addr_hit),2);
            tracep->chgBit(oldp+198,((1U & VL_REDXOR_32(
                                                        vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U]))));
            tracep->chgBit(oldp+199,((1U & VL_REDXOR_32(
                                                        (0xfU 
                                                         & vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U])))));
            tracep->chgBit(oldp+200,(((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__control_rst_we) 
                                      & vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U])));
            tracep->chgBit(oldp+201,(((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__control_rst_we) 
                                      & (vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U] 
                                         >> 1U))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+202,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__ker_tc4));
            tracep->chgBit(oldp+203,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__ker_tc20));
            tracep->chgIData(oldp+204,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_ker_o),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgCData(oldp+205,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_A),8);
            tracep->chgCData(oldp+206,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_B),8);
            tracep->chgCData(oldp+207,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_A),8);
            tracep->chgCData(oldp+208,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_B),8);
            tracep->chgCData(oldp+209,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_A),8);
            tracep->chgCData(oldp+210,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_B),8);
            tracep->chgCData(oldp+211,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_A),8);
            tracep->chgCData(oldp+212,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_B),8);
            tracep->chgSData(oldp+213,((0xffffU & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_A) 
                                                   * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_B)))),16);
            tracep->chgSData(oldp+214,((0xffffU & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_A) 
                                                   * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_B)))),16);
            tracep->chgSData(oldp+215,((0xffffU & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_A) 
                                                   * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_B)))),16);
            tracep->chgSData(oldp+216,((0xffffU & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_A) 
                                                   * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_B)))),16);
            tracep->chgIData(oldp+217,((0x1ffffU & 
                                        ((0xffffU & 
                                          ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_A) 
                                           * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_B))) 
                                         + (0xffffU 
                                            & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_A) 
                                               * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_B)))))),17);
            tracep->chgIData(oldp+218,((0x1ffffU & 
                                        ((0xffffU & 
                                          ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_A) 
                                           * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_B))) 
                                         + (0xffffU 
                                            & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_A) 
                                               * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_B)))))),17);
            tracep->chgIData(oldp+219,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out),18);
            tracep->chgIData(oldp+220,(((0x20000U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out)
                                         ? (0xfffc0000U 
                                            | vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out)
                                         : vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out)),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+221,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__done));
            tracep->chgBit(oldp+222,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__done_e));
            tracep->chgBit(oldp+223,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running));
            tracep->chgBit(oldp+224,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running_e));
            tracep->chgBit(oldp+225,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__ext_mem_gnt));
            tracep->chgBit(oldp+226,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_req));
            tracep->chgBit(oldp+227,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_we));
            tracep->chgBit(oldp+228,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_en));
            tracep->chgBit(oldp+229,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n));
            tracep->chgBit(oldp+230,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_ld));
            tracep->chgBit(oldp+231,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_en));
            tracep->chgBit(oldp+232,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n));
            tracep->chgBit(oldp+233,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_en));
            tracep->chgBit(oldp+234,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n));
            tracep->chgBit(oldp+235,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n));
            tracep->chgBit(oldp+236,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_ker_ld));
            tracep->chgBit(oldp+237,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_in_ld));
            tracep->chgBit(oldp+238,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_ld));
            tracep->chgBit(oldp+239,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n));
            tracep->chgCData(oldp+240,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel),2);
            tracep->chgIData(oldp+241,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state),32);
            tracep->chgBit(oldp+242,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                                            >> 3U))));
            tracep->chgBit(oldp+243,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                                            >> 2U))));
            tracep->chgBit(oldp+244,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                                            >> 1U))));
            tracep->chgBit(oldp+245,((1U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg))));
            tracep->chgBit(oldp+246,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                                            >> 2U))));
            tracep->chgBit(oldp+247,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                                            >> 3U))));
            tracep->chgBit(oldp+248,((1U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg))));
            tracep->chgBit(oldp+249,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                                            >> 1U))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+250,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n));
            tracep->chgIData(oldp+251,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q),32);
            tracep->chgCData(oldp+252,((0xffU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q)),8);
            tracep->chgCData(oldp+253,((0xffU & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+254,((0xffU & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q 
                                                 >> 0x10U))),8);
            tracep->chgCData(oldp+255,((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q 
                                        >> 0x18U)),8);
            tracep->chgIData(oldp+256,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q),32);
            tracep->chgIData(oldp+257,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0U]),32);
            tracep->chgIData(oldp+258,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[1U]),32);
            tracep->chgIData(oldp+259,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[2U]),32);
            tracep->chgIData(oldp+260,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[3U]),32);
            tracep->chgIData(oldp+261,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[4U]),32);
            tracep->chgIData(oldp+262,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[5U]),32);
            tracep->chgIData(oldp+263,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[6U]),32);
            tracep->chgIData(oldp+264,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[7U]),32);
            tracep->chgIData(oldp+265,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[8U]),32);
            tracep->chgIData(oldp+266,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[9U]),32);
            tracep->chgIData(oldp+267,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0xaU]),32);
            tracep->chgIData(oldp+268,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0xbU]),32);
            tracep->chgIData(oldp+269,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0xcU]),32);
            tracep->chgIData(oldp+270,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0xdU]),32);
            tracep->chgIData(oldp+271,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0xeU]),32);
            tracep->chgIData(oldp+272,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0xfU]),32);
            tracep->chgIData(oldp+273,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x10U]),32);
            tracep->chgIData(oldp+274,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x11U]),32);
            tracep->chgIData(oldp+275,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x12U]),32);
            tracep->chgIData(oldp+276,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x13U]),32);
            tracep->chgIData(oldp+277,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x14U]),32);
            tracep->chgIData(oldp+278,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x15U]),32);
            tracep->chgIData(oldp+279,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x16U]),32);
            tracep->chgIData(oldp+280,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x17U]),32);
            tracep->chgIData(oldp+281,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x18U]),32);
            tracep->chgIData(oldp+282,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x19U]),32);
            tracep->chgIData(oldp+283,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x1aU]),32);
            tracep->chgIData(oldp+284,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x1bU]),32);
            tracep->chgIData(oldp+285,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x1cU]),32);
            tracep->chgIData(oldp+286,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x1dU]),32);
            tracep->chgIData(oldp+287,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x1eU]),32);
            tracep->chgIData(oldp+288,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x1fU]),32);
            tracep->chgIData(oldp+289,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x20U]),32);
            tracep->chgIData(oldp+290,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x21U]),32);
            tracep->chgIData(oldp+291,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x22U]),32);
            tracep->chgIData(oldp+292,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x23U]),32);
            tracep->chgIData(oldp+293,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x24U]),32);
            tracep->chgIData(oldp+294,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x25U]),32);
            tracep->chgIData(oldp+295,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x26U]),32);
            tracep->chgIData(oldp+296,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x27U]),32);
            tracep->chgIData(oldp+297,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x28U]),32);
            tracep->chgIData(oldp+298,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x29U]),32);
            tracep->chgIData(oldp+299,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x2aU]),32);
            tracep->chgIData(oldp+300,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x2bU]),32);
            tracep->chgIData(oldp+301,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x2cU]),32);
            tracep->chgIData(oldp+302,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x2dU]),32);
            tracep->chgIData(oldp+303,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x2eU]),32);
            tracep->chgIData(oldp+304,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x2fU]),32);
            tracep->chgIData(oldp+305,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x30U]),32);
            tracep->chgIData(oldp+306,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x31U]),32);
            tracep->chgIData(oldp+307,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x32U]),32);
            tracep->chgIData(oldp+308,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x33U]),32);
            tracep->chgIData(oldp+309,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x34U]),32);
            tracep->chgIData(oldp+310,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x35U]),32);
            tracep->chgIData(oldp+311,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x36U]),32);
            tracep->chgIData(oldp+312,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x37U]),32);
            tracep->chgIData(oldp+313,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x38U]),32);
            tracep->chgIData(oldp+314,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x39U]),32);
            tracep->chgIData(oldp+315,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x3aU]),32);
            tracep->chgIData(oldp+316,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x3bU]),32);
            tracep->chgIData(oldp+317,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x3cU]),32);
            tracep->chgIData(oldp+318,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x3dU]),32);
            tracep->chgIData(oldp+319,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x3eU]),32);
            tracep->chgIData(oldp+320,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x3fU]),32);
            tracep->chgIData(oldp+321,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x40U]),32);
            tracep->chgIData(oldp+322,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x41U]),32);
            tracep->chgIData(oldp+323,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x42U]),32);
            tracep->chgIData(oldp+324,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x43U]),32);
            tracep->chgIData(oldp+325,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x44U]),32);
            tracep->chgIData(oldp+326,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x45U]),32);
            tracep->chgIData(oldp+327,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x46U]),32);
            tracep->chgIData(oldp+328,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x47U]),32);
            tracep->chgIData(oldp+329,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x48U]),32);
            tracep->chgIData(oldp+330,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x49U]),32);
            tracep->chgIData(oldp+331,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x4aU]),32);
            tracep->chgIData(oldp+332,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x4bU]),32);
            tracep->chgIData(oldp+333,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x4cU]),32);
            tracep->chgIData(oldp+334,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x4dU]),32);
            tracep->chgIData(oldp+335,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x4eU]),32);
            tracep->chgIData(oldp+336,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x4fU]),32);
            tracep->chgIData(oldp+337,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x50U]),32);
            tracep->chgIData(oldp+338,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x51U]),32);
            tracep->chgIData(oldp+339,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x52U]),32);
            tracep->chgIData(oldp+340,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x53U]),32);
            tracep->chgIData(oldp+341,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x54U]),32);
            tracep->chgIData(oldp+342,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x55U]),32);
            tracep->chgIData(oldp+343,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x56U]),32);
            tracep->chgIData(oldp+344,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x57U]),32);
            tracep->chgIData(oldp+345,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x58U]),32);
            tracep->chgIData(oldp+346,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x59U]),32);
            tracep->chgIData(oldp+347,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x5aU]),32);
            tracep->chgIData(oldp+348,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x5bU]),32);
            tracep->chgIData(oldp+349,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x5cU]),32);
            tracep->chgIData(oldp+350,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x5dU]),32);
            tracep->chgIData(oldp+351,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x5eU]),32);
            tracep->chgIData(oldp+352,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x5fU]),32);
            tracep->chgIData(oldp+353,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x60U]),32);
            tracep->chgIData(oldp+354,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x61U]),32);
            tracep->chgIData(oldp+355,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x62U]),32);
            tracep->chgIData(oldp+356,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x63U]),32);
            tracep->chgIData(oldp+357,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x64U]),32);
            tracep->chgIData(oldp+358,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x65U]),32);
            tracep->chgIData(oldp+359,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x66U]),32);
            tracep->chgIData(oldp+360,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x67U]),32);
            tracep->chgIData(oldp+361,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x68U]),32);
            tracep->chgIData(oldp+362,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x69U]),32);
            tracep->chgIData(oldp+363,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x6aU]),32);
            tracep->chgIData(oldp+364,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x6bU]),32);
            tracep->chgIData(oldp+365,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x6cU]),32);
            tracep->chgIData(oldp+366,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x6dU]),32);
            tracep->chgIData(oldp+367,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x6eU]),32);
            tracep->chgIData(oldp+368,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x6fU]),32);
            tracep->chgIData(oldp+369,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x70U]),32);
            tracep->chgIData(oldp+370,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x71U]),32);
            tracep->chgIData(oldp+371,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x72U]),32);
            tracep->chgIData(oldp+372,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x73U]),32);
            tracep->chgIData(oldp+373,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x74U]),32);
            tracep->chgIData(oldp+374,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x75U]),32);
            tracep->chgIData(oldp+375,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x76U]),32);
            tracep->chgIData(oldp+376,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x77U]),32);
            tracep->chgIData(oldp+377,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x78U]),32);
            tracep->chgIData(oldp+378,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x79U]),32);
            tracep->chgIData(oldp+379,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x7aU]),32);
            tracep->chgIData(oldp+380,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x7bU]),32);
            tracep->chgIData(oldp+381,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x7cU]),32);
            tracep->chgIData(oldp+382,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x7dU]),32);
            tracep->chgIData(oldp+383,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x7eU]),32);
            tracep->chgIData(oldp+384,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x7fU]),32);
            tracep->chgCData(oldp+385,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q),7);
            tracep->chgIData(oldp+386,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk5__DOT__i),32);
        }
        tracep->chgBit(oldp+387,(vlSelf->clk_i));
        tracep->chgBit(oldp+388,(vlSelf->rst_ni));
        tracep->chgBit(oldp+389,(vlSelf->obi_req_i));
        tracep->chgBit(oldp+390,(vlSelf->obi_we_i));
        tracep->chgCData(oldp+391,(vlSelf->obi_be_i),4);
        tracep->chgIData(oldp+392,(vlSelf->obi_addr_i),32);
        tracep->chgIData(oldp+393,(vlSelf->obi_wdata_i),32);
        tracep->chgBit(oldp+394,(vlSelf->obi_gnt_o));
        tracep->chgBit(oldp+395,(vlSelf->obi_rvalid_o));
        tracep->chgIData(oldp+396,(vlSelf->obi_rdata_o),32);
        tracep->chgBit(oldp+397,(vlSelf->reg_valid_i));
        tracep->chgBit(oldp+398,(vlSelf->reg_write_i));
        tracep->chgCData(oldp+399,(vlSelf->reg_wstrb_i),4);
        tracep->chgIData(oldp+400,(vlSelf->reg_addr_i),32);
        tracep->chgIData(oldp+401,(vlSelf->reg_wdata_i),32);
        tracep->chgBit(oldp+402,(vlSelf->reg_error_o));
        tracep->chgBit(oldp+403,(vlSelf->reg_ready_o));
        tracep->chgIData(oldp+404,(vlSelf->reg_rdata_o),32);
        tracep->chgBit(oldp+405,(vlSelf->done_int_o));
        tracep->chgBit(oldp+406,((1U & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2U] 
                                        >> 5U))));
        tracep->chgBit(oldp+407,((1U & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2U] 
                                        >> 4U))));
        tracep->chgCData(oldp+408,((0xfU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2U])),4);
        tracep->chgIData(oldp+409,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[1U]),32);
        tracep->chgIData(oldp+410,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[0U]),32);
        tracep->chgIData(oldp+411,(((2U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel))
                                     ? ((1U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel))
                                         ? 0U : vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_out_o)
                                     : ((1U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel))
                                         ? vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_inp_o
                                         : vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_ker_o))),32);
        tracep->chgIData(oldp+412,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A3_B),32);
        tracep->chgBit(oldp+413,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_ld));
        tracep->chgBit(oldp+414,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n));
        tracep->chgBit(oldp+415,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__out_tc127));
        tracep->chgIData(oldp+416,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_inp_o),32);
        tracep->chgIData(oldp+417,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__reg_out),32);
        tracep->chgIData(oldp+418,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_out_o),32);
        tracep->chgIData(oldp+419,((((0x20000U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out)
                                      ? (0xfffc0000U 
                                         | vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out)
                                      : vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out) 
                                    + vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A3_B)),32);
        tracep->chgIData(oldp+420,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__next_state),32);
        tracep->chgBit(oldp+421,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_obi_bridge__DOT__obi_rvalid[0]));
        tracep->chgBit(oldp+422,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_obi_bridge__DOT__obi_rvalid[1]));
        tracep->chgIData(oldp+423,(((1U & ((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U] 
                                            >> 5U) 
                                           & (~ (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U] 
                                                 >> 4U))))
                                     ? vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                                    (0x7fU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U])]
                                     : (((0U == (0x1fU 
                                                 & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q) 
                                                    << 5U)))
                                          ? 0U : (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                                                  (((IData)(0x1fU) 
                                                    + 
                                                    (0xfffU 
                                                     & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q) 
                                                        << 5U))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q) 
                                                       << 5U))))) 
                                        | (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                                           (0x7fU & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q))] 
                                           >> (0x1fU 
                                               & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q) 
                                                  << 5U)))))),32);
        tracep->chgBit(oldp+424,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__status_done_we) 
                                        | ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                                           >> 2U)))));
        tracep->chgBit(oldp+425,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__status_done_we)
                                         ? vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U]
                                         : ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                                            >> 3U)))));
        tracep->chgBit(oldp+426,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__status_done_we) 
                                        | (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg)))));
        tracep->chgBit(oldp+427,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__status_done_we)
                                         ? (vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U] 
                                            >> 1U) : 
                                        ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                                         >> 1U)))));
    }
}

void Vconv1d_tb_wrapper___024root__traceCleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    Vconv1d_tb_wrapper___024root* const __restrict vlSelf = static_cast<Vconv1d_tb_wrapper___024root*>(voidSelf);
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    }
}
