// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconv1d_tb_wrapper.h for the primary calling header

#include "Vconv1d_tb_wrapper___024root.h"
#include "Vconv1d_tb_wrapper__Syms.h"

//==========


void Vconv1d_tb_wrapper___024root___ctor_var_reset(Vconv1d_tb_wrapper___024root* vlSelf);

Vconv1d_tb_wrapper___024root::Vconv1d_tb_wrapper___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vconv1d_tb_wrapper___024root___ctor_var_reset(this);
}

void Vconv1d_tb_wrapper___024root::__Vconfigure(Vconv1d_tb_wrapper__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vconv1d_tb_wrapper___024root::~Vconv1d_tb_wrapper___024root() {
}

void Vconv1d_tb_wrapper___024root___initial__TOP__1(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___initial__TOP__1\n"); );
    // Variables
    CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1;
    // Body
    conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1 
        = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i = 0U;
    while ((0x80U > vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i)) {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i)] 
            = (((~ ((IData)(1U) << (0x1fU & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                             << 5U)))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i)]) 
               | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                  << (0x1fU & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                               << 5U))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(1U) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(1U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                          << 5U)) >> 5U))]) 
               | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                  << (0x1fU & ((IData)(1U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                              << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(2U) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(2U) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(2U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                          << 5U)) >> 5U))]) 
               | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                  << (0x1fU & ((IData)(2U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                              << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(3U) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(3U) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(3U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                          << 5U)) >> 5U))]) 
               | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                  << (0x1fU & ((IData)(3U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                              << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(4U) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(4U) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(4U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                          << 5U)) >> 5U))]) 
               | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                  << (0x1fU & ((IData)(4U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                              << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(5U) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(5U) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(5U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                          << 5U)) >> 5U))]) 
               | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                  << (0x1fU & ((IData)(5U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                              << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(6U) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(6U) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(6U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                          << 5U)) >> 5U))]) 
               | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                  << (0x1fU & ((IData)(6U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                              << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(7U) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(7U) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(7U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                          << 5U)) >> 5U))]) 
               | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                  << (0x1fU & ((IData)(7U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                              << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(8U) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(8U) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(8U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                          << 5U)) >> 5U))]) 
               | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                  << (0x1fU & ((IData)(8U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                              << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(9U) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(9U) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(9U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                          << 5U)) >> 5U))]) 
               | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                  << (0x1fU & ((IData)(9U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                              << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0xaU) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0xaU) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0xaU) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                            << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0xaU) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0xbU) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0xbU) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0xbU) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                            << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0xbU) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0xcU) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0xcU) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0xcU) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                            << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0xcU) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0xdU) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0xdU) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0xdU) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                            << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0xdU) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0xeU) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0xeU) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0xeU) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                            << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0xeU) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0xfU) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0xfU) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0xfU) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                            << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0xfU) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0x10U) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x10U) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0x10U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                             << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0x10U) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0x11U) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x11U) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0x11U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                             << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0x11U) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0x12U) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x12U) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0x12U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                             << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0x12U) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0x13U) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x13U) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0x13U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                             << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0x13U) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0x14U) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x14U) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0x14U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                             << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0x14U) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0x15U) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x15U) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0x15U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                             << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0x15U) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0x16U) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x16U) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0x16U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                             << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0x16U) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x17U) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0x17U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                             << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0x17U) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0x18U) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x18U) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0x18U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                             << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0x18U) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0x19U) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x19U) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0x19U) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                             << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0x19U) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0x1aU) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x1aU) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0x1aU) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                             << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0x1aU) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0x1bU) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x1bU) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0x1bU) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                             << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0x1bU) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0x1cU) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x1cU) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0x1cU) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                             << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0x1cU) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0x1dU) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x1dU) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0x1dU) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                             << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0x1dU) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0x1eU) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x1eU) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0x1eU) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                             << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0x1eU) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[(0x7fU 
                                                                                & (((IData)(0x1fU) 
                                                                                + 
                                                                                (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                                                << 5U)) 
                                                                                >> 5U))] 
            = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x1fU) 
                                             + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                                << 5U))))) 
                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                (0x7fU & (((IData)(0x1fU) + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                             << 5U)) 
                          >> 5U))]) | ((IData)(conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vxrand1) 
                                       << (0x1fU & 
                                           ((IData)(0x1fU) 
                                            + (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
                                               << 5U)))));
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0x20U;
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i);
    }
}

void Vconv1d_tb_wrapper___024root___settle__TOP__6(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___settle__TOP__6\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp14;
    // Body
    vlSelf->conv1d_tb_wrapper__DOT__obi_req[0U] = (IData)(
                                                          (((QData)((IData)(vlSelf->obi_addr_i)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->obi_wdata_i))));
    vlSelf->conv1d_tb_wrapper__DOT__obi_req[1U] = (IData)(
                                                          ((((QData)((IData)(vlSelf->obi_addr_i)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->obi_wdata_i))) 
                                                           >> 0x20U));
    vlSelf->conv1d_tb_wrapper__DOT__obi_req[2U] = (
                                                   ((IData)(vlSelf->obi_req_i) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->obi_we_i) 
                                                       << 4U) 
                                                      | (IData)(vlSelf->obi_be_i)));
    vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U] = (IData)(
                                                          (((QData)((IData)(vlSelf->reg_addr_i)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->reg_wdata_i))));
    vlSelf->conv1d_tb_wrapper__DOT__reg_req[1U] = (IData)(
                                                          ((((QData)((IData)(vlSelf->reg_addr_i)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlSelf->reg_wdata_i))) 
                                                           >> 0x20U));
    vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U] = (
                                                   ((IData)(vlSelf->reg_valid_i) 
                                                    << 5U) 
                                                   | (((IData)(vlSelf->reg_write_i) 
                                                       << 4U) 
                                                      | (IData)(vlSelf->reg_wstrb_i)));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n = 1U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n = 0U;
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n = 1U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n = 1U;
        }
    } else if ((1U & (~ ((((((((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
                               | (8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                              | (9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                             | (0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                            | (0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                           | (0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                          | (0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                         | (0xeU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))))) {
        if ((0xfU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((0x10U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((0x11U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n = 0U;
                }
            }
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n = 1U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n = 0U;
        }
    } else if ((1U & (~ ((((((((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
                               | (8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                              | (9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                             | (0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                            | (0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                           | (0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                          | (0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                         | (0xeU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))))) {
        if ((0xfU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((0x10U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n = 0U;
            }
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n = 1U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n = 0U;
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n = 1U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n = 0U;
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_ld = 0U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_ld = 0U;
        }
    } else if ((1U & (~ ((((((((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
                               | (8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                              | (9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                             | (0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                            | (0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                           | (0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                          | (0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                         | (0xeU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))))) {
        if ((0xfU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((0x10U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_ld = 1U;
            }
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_in_ld = 0U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_in_ld = 0U;
        } else if ((0U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((1U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((2U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_in_ld = 1U;
                    }
                }
            }
        }
    } else if (((((((((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
                      | (8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                     | (9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                    | (0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                   | (0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                  | (0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                 | (0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                | (0xeU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((7U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_in_ld = 1U;
            } else if ((9U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((0xaU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((0xbU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        if ((0xcU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                            if ((0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                                vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_in_ld = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_ker_ld = 0U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_ker_ld = 0U;
        } else if ((0U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_ker_ld = 1U;
            } else if ((2U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((3U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((4U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        if ((5U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_ker_ld = 1U;
                        }
                    }
                }
            }
        }
    } else if (((((((((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
                      | (8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                     | (9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                    | (0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                   | (0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                  | (0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                 | (0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                | (0xeU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((7U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((8U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((9U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((0xaU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        if ((0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_ker_ld = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_ld = 0U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_ld = 0U;
        } else if ((0U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((1U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((2U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((3U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        if ((4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_ld = 1U;
                        }
                    }
                }
            }
        }
    } else if (((((((((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
                      | (8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                     | (9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                    | (0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                   | (0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                  | (0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                 | (0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                | (0xeU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((7U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((8U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_ld = 1U;
                } else if ((0xaU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((0xbU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        if ((0xcU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                            if ((0xdU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                                vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_ld = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_en = 0U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((0U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((1U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_en = 1U;
                    }
                }
            }
        }
    } else if (((((((((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
                      | (8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                     | (9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                    | (0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                   | (0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                  | (0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                 | (0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                | (0xeU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_en = 1U;
        } else if ((8U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((9U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((0xaU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((0xbU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        if ((0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_en = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_en = 0U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((0U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((1U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_en = 1U;
                    }
                }
            }
        }
    } else if (((((((((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
                      | (8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                     | (9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                    | (0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                   | (0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                  | (0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                 | (0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                | (0xeU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_en = 1U;
        } else if ((8U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((9U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((0xaU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((0xbU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        if ((0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_en = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_en = 0U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_en = 0U;
        }
    } else if ((1U & (~ ((((((((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
                               | (8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                              | (9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                             | (0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                            | (0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                           | (0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                          | (0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                         | (0xeU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))))) {
        if ((0xfU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((0x10U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((0x11U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_en = 1U;
                }
            }
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running_e = 0U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running_e = 1U;
        } else if ((0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running_e = 1U;
        }
    } else if ((1U & (~ ((((((((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
                               | (8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                              | (9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                             | (0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                            | (0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                           | (0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                          | (0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                         | (0xeU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))))) {
        if ((0xfU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((0x10U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((0x11U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((0x12U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        if ((0x13U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running_e = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running = 1U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running = 0U;
        } else if ((0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running = 1U;
        }
    } else if ((1U & (~ ((((((((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
                               | (8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                              | (9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                             | (0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                            | (0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                           | (0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                          | (0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                         | (0xeU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))))) {
        if ((0xfU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((0x10U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((0x11U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((0x12U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        if ((0x13U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running = 0U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__done_e = 0U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__done_e = 1U;
            }
        }
    } else if ((1U & (~ ((((((((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
                               | (8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                              | (9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                             | (0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                            | (0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                           | (0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                          | (0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                         | (0xeU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))))) {
        if ((0xfU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((0x10U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((0x11U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((0x12U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        if ((0x13U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__done_e = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__done = 0U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__done = 0U;
            }
        }
    } else if ((1U & (~ ((((((((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
                               | (8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                              | (9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                             | (0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                            | (0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                           | (0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                          | (0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                         | (0xeU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))))) {
        if ((0xfU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((0x10U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((0x11U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((0x12U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        if ((0x13U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__done = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out 
        = (0x3ffffU & ((0x1ffffU & ((0xffffU & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_A) 
                                                * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_B))) 
                                    + (0xffffU & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_A) 
                                                  * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_B))))) 
                       + (0x1ffffU & ((0xffffU & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_A) 
                                                  * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_B))) 
                                      + (0xffffU & 
                                         ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_A) 
                                          * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_B)))))));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__reg2hw 
        = (((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_control_start__q) 
            << 3U) | (((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_control_rst__q) 
                       << 2U) | (((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_status_running__q) 
                                  << 1U) | (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_status_done__q))));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_req = 0U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_req = 0U;
        } else if ((0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_req = 1U;
        } else if ((1U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_req = 1U;
            } else if ((3U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((4U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_req = 1U;
                    }
                }
            }
        }
    } else if (((((((((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
                      | (8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                     | (9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                    | (0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                   | (0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                  | (0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                 | (0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                | (0xeU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_req = 1U;
        } else if ((8U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((9U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_req = 1U;
                } else if ((0xbU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_req = 1U;
                    }
                }
            }
        }
    } else if ((0xfU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_req = 1U;
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_we = 0U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_we = 0U;
        } else if ((0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_we = 0U;
        } else if ((1U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_we = 0U;
            } else if ((3U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((4U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_we = 0U;
                    }
                }
            }
        }
    } else if (((((((((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
                      | (8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                     | (9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                    | (0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                   | (0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                  | (0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                 | (0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                | (0xeU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_we = 0U;
        } else if ((8U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((9U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_we = 0U;
                } else if ((0xbU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_we = 0U;
                    }
                }
            }
        }
    } else if ((0xfU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_we = 1U;
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel = 0U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel = 0U;
        } else if ((0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel = 0U;
        } else if ((1U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel = 1U;
            } else if ((3U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((4U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel = 0U;
                    }
                }
            }
        }
    } else if (((((((((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
                      | (8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                     | (9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                    | (0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                   | (0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                  | (0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                 | (0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                | (0xeU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel = 1U;
        } else if ((8U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((9U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                if ((0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel = 0U;
                } else if ((0xbU != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                    if ((0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel = 1U;
                    }
                }
            }
        }
    } else if ((0xfU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel = 2U;
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__ext_mem_gnt = 0U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__ext_mem_gnt = 1U;
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n = 1U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n = 0U;
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_ld = 0U;
    if (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
               | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
           | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
          | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
         | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_ld = 0U;
        }
    } else if (((((((((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
                      | (8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                     | (9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                    | (0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                   | (0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                  | (0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                 | (0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                | (0xeU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))) {
        if ((7U != vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
            if ((8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) {
                vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_ld = 1U;
            }
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_obi_bridge__DOT__obi_rvalid[0U] 
        = (1U & (vlSelf->conv1d_tb_wrapper__DOT__obi_req[2U] 
                 >> 5U));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_we 
        = (1U & ((vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U] 
                  >> 5U) & (vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U] 
                            >> 4U)));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__addr_hit 
        = (((4U == (7U & vlSelf->conv1d_tb_wrapper__DOT__reg_req[1U])) 
            << 1U) | (0U == (7U & vlSelf->conv1d_tb_wrapper__DOT__reg_req[1U])));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg 
        = (((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running) 
            << 3U) | (((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running_e) 
                       << 2U) | (((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__done) 
                                  << 1U) | (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__done_e))));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A3_out 
        = (((0x20000U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out)
             ? (0xfffc0000U | vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out)
             : vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out) 
           + vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A3_B);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n 
        = (1U & (~ ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__reg2hw) 
                    >> 2U)));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__next_state 
        = (((((((((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
                  | (0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                 | (1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                | (2U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
               | (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
              | (4U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
             | (5U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
            | (6U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))
            ? ((0x14U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)
                ? ((8U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__reg2hw))
                    ? 0U : 0x14U) : ((0U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)
                                      ? 1U : ((1U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)
                                               ? 2U
                                               : ((2U 
                                                   == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)
                                                     ? 
                                                    ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__ker_tc4)
                                                      ? 0xaU
                                                      : 5U)
                                                     : 
                                                    ((5U 
                                                      == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)
                                                      ? 6U
                                                      : 7U)))))))
            : (((((((((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state) 
                      | (8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                     | (9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                    | (0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                   | (0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                  | (0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                 | (0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)) 
                | (0xeU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state))
                ? ((7U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)
                    ? 8U : ((8U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)
                             ? 9U : ((9U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)
                                      ? ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__ker_tc4)
                                          ? 0xaU : 5U)
                                      : ((0xaU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)
                                          ? 0xbU : 
                                         ((0xbU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)
                                           ? 0xcU : 
                                          ((0xcU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)
                                            ? 0xdU : 
                                           ((0xdU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)
                                             ? 0xeU
                                             : ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__ker_tc20)
                                                 ? 0xfU
                                                 : 0xaU))))))))
                : ((0xfU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)
                    ? 0x10U : ((0x10U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)
                                ? 0x11U : ((0x11U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)
                                            ? 0x12U
                                            : ((0x12U 
                                                == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state)
                                                ? ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__out_tc127)
                                                    ? 0x13U
                                                    : 5U)
                                                : 0x14U))))));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2U] 
        = ((0xfU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2U]) 
           | (0x30U & (((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_req) 
                        << 5U) | ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_we) 
                                  << 4U))));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[0U] 
        = (IData)((((QData)((IData)(((2U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel))
                                      ? ((1U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel))
                                          ? 0U : vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_out_o)
                                      : ((1U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel))
                                          ? vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_inp_o
                                          : vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_ker_o)))) 
                    << 0x20U) | (QData)((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A3_B))));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[1U] 
        = (IData)(((((QData)((IData)(((2U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel))
                                       ? ((1U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel))
                                           ? 0U : vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_out_o)
                                       : ((1U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel))
                                           ? vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_inp_o
                                           : vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_ker_o)))) 
                     << 0x20U) | (QData)((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A3_B))) 
                   >> 0x20U));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__u_obi_bridge__obi_rsp_o 
        = (((QData)((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__ext_mem_gnt)) 
            << 0x21U) | (((QData)((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_obi_bridge__DOT__obi_rvalid
                                          [1U])) << 0x20U) 
                         | (QData)((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q))));
    if ((1U & (~ VL_ONEHOT0_I((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__addr_hit))))) {
        if (VL_UNLIKELY(vlSymsp->_vm_contextp__->assertOn())) {
            VL_WRITEF("[%0t] %%Error: conv1d_control_reg_top.sv:226: Assertion failed in %Nconv1d_tb_wrapper.u_conv1d_obi.u_conv1d_control_reg.u_conv1d_control_reg_top: synthesis parallel_case, but multiple matches found\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
            VL_STOP_MT("../../../hw/control-reg/rtl/conv1d_control_reg_top.sv", 226, "");
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_rdata_next = 0U;
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_rdata_next 
        = ((1U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__addr_hit))
            ? ((0xfffffffcU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_rdata_next) 
               | (((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_control_rst__q) 
                   << 1U) | (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_control_start__q)))
            : ((2U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__addr_hit))
                ? ((0xfffffffcU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_rdata_next) 
                   | (((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_status_done__q) 
                       << 1U) | (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_status_running__q)))
                : 0xffffffffU));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__wr_err 
        = ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_we) 
           & (((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__addr_hit) 
               & (0U != (1U & (~ vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U])))) 
              | (((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__addr_hit) 
                  >> 1U) & (0U != (1U & (~ vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U]))))));
    __Vtemp14[1U] = (IData)(((((QData)((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[0U]))) 
                             >> 0x20U));
    __Vtemp14[2U] = (0xfU | (0x30U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2U]));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[0U] 
        = (IData)((((QData)((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[0U]))));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[1U] 
        = __Vtemp14[1U];
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2U] 
        = __Vtemp14[2U];
    if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__ext_mem_gnt) {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
            = vlSelf->conv1d_tb_wrapper__DOT__obi_req[0U];
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
            = vlSelf->conv1d_tb_wrapper__DOT__obi_req[1U];
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U] 
            = vlSelf->conv1d_tb_wrapper__DOT__obi_req[2U];
    } else {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
            = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[0U];
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
            = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[1U];
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U] 
            = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2U];
    }
    vlSelf->obi_gnt_o = (1U & (IData)((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__u_obi_bridge__obi_rsp_o 
                                       >> 0x21U)));
    vlSelf->obi_rvalid_o = (1U & (IData)((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__u_obi_bridge__obi_rsp_o 
                                          >> 0x20U)));
    vlSelf->obi_rdata_o = (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__u_obi_bridge__obi_rsp_o);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__control_rst_we 
        = (((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__addr_hit) 
            & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_we)) 
           & (~ (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__wr_err)));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__status_done_we 
        = ((((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__addr_hit) 
             >> 1U) & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_we)) 
           & (~ (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__wr_err)));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_intf_rsp 
        = (0x100000000ULL | (((QData)((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__wr_err)) 
                              << 0x21U) | (QData)((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_rdata_next))));
    vlSelf->reg_error_o = (1U & (IData)((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_intf_rsp 
                                         >> 0x21U)));
    vlSelf->reg_ready_o = (1U & (IData)((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_intf_rsp 
                                         >> 0x20U)));
    vlSelf->reg_rdata_o = (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_intf_rsp);
}

void Vconv1d_tb_wrapper_conv1d_control_reg_pkg___initial__TOP__conv1d_control_reg_pkg__1(Vconv1d_tb_wrapper_conv1d_control_reg_pkg* vlSelf) VL_ATTR_COLD;

void Vconv1d_tb_wrapper___024root___eval_initial(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___eval_initial\n"); );
    // Body
    Vconv1d_tb_wrapper_conv1d_control_reg_pkg___initial__TOP__conv1d_control_reg_pkg__1((&vlSymsp->TOP__conv1d_control_reg_pkg));
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vconv1d_tb_wrapper___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n 
        = vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n 
        = vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n 
        = vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n 
        = vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n 
        = vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n 
        = vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n 
        = vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n;
}

void Vconv1d_tb_wrapper___024root___eval_settle(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___eval_settle\n"); );
    // Body
    Vconv1d_tb_wrapper___024root___settle__TOP__6(vlSelf);
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vconv1d_tb_wrapper___024root___final(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___final\n"); );
}

void Vconv1d_tb_wrapper___024root___ctor_var_reset(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->obi_req_i = VL_RAND_RESET_I(1);
    vlSelf->obi_we_i = VL_RAND_RESET_I(1);
    vlSelf->obi_be_i = VL_RAND_RESET_I(4);
    vlSelf->obi_addr_i = VL_RAND_RESET_I(32);
    vlSelf->obi_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->obi_gnt_o = VL_RAND_RESET_I(1);
    vlSelf->obi_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->obi_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->reg_valid_i = VL_RAND_RESET_I(1);
    vlSelf->reg_write_i = VL_RAND_RESET_I(1);
    vlSelf->reg_wstrb_i = VL_RAND_RESET_I(4);
    vlSelf->reg_addr_i = VL_RAND_RESET_I(32);
    vlSelf->reg_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->reg_error_o = VL_RAND_RESET_I(1);
    vlSelf->reg_ready_o = VL_RAND_RESET_I(1);
    vlSelf->reg_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->done_int_o = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(70, vlSelf->conv1d_tb_wrapper__DOT__obi_req);
    VL_RAND_RESET_W(70, vlSelf->conv1d_tb_wrapper__DOT__reg_req);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__done_e = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running_e = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(70, vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req);
    VL_RAND_RESET_W(70, vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__ext_mem_gnt = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_we = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_req = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__u_obi_bridge__obi_rsp_o = VL_RAND_RESET_Q(34);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_en = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_ld = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_ld = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_en = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_en = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__ker_tc4 = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__ker_tc20 = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__out_tc127 = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_ker_ld = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_in_ld = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_ld = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel = VL_RAND_RESET_I(2);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__reg_out = VL_RAND_RESET_I(32);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_ker_o = VL_RAND_RESET_I(32);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_inp_o = VL_RAND_RESET_I(32);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_out_o = VL_RAND_RESET_I(32);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_A = VL_RAND_RESET_I(8);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_B = VL_RAND_RESET_I(8);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_A = VL_RAND_RESET_I(8);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_B = VL_RAND_RESET_I(8);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_A = VL_RAND_RESET_I(8);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_B = VL_RAND_RESET_I(8);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_A = VL_RAND_RESET_I(8);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_B = VL_RAND_RESET_I(8);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out = VL_RAND_RESET_I(18);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A3_B = VL_RAND_RESET_I(32);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A3_out = VL_RAND_RESET_I(32);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state = 0;
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__next_state = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_obi_bridge__DOT__obi_rvalid[__Vi0] = VL_RAND_RESET_I(1);
    }
    VL_RAND_RESET_W(4096, vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(4096, vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j = 0;
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j = 0;
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j = 0;
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vlvbound10 = VL_RAND_RESET_I(7);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__reg2hw = VL_RAND_RESET_I(4);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg = VL_RAND_RESET_I(4);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_we = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__wr_err = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_rdata_next = VL_RAND_RESET_I(32);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_intf_rsp = VL_RAND_RESET_Q(34);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__control_rst_we = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__status_done_we = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_control_start__q = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_control_rst__q = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_status_running__q = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_status_done__q = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__addr_hit = VL_RAND_RESET_I(2);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_control_start__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_control_rst__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_status_running__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_status_done__DOT__qe = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_inp_o = VL_RAND_RESET_I(32);
    vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(70, vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req);
    vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
