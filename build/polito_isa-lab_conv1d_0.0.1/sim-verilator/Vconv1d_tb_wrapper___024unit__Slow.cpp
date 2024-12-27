// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconv1d_tb_wrapper.h for the primary calling header

#include "Vconv1d_tb_wrapper___024unit.h"
#include "Vconv1d_tb_wrapper__Syms.h"

//==========


void Vconv1d_tb_wrapper___024unit___ctor_var_reset(Vconv1d_tb_wrapper___024unit* vlSelf);

Vconv1d_tb_wrapper___024unit::Vconv1d_tb_wrapper___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vconv1d_tb_wrapper___024unit___ctor_var_reset(this);
}

void Vconv1d_tb_wrapper___024unit::__Vconfigure(Vconv1d_tb_wrapper__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vconv1d_tb_wrapper___024unit::~Vconv1d_tb_wrapper___024unit() {
}

void Vconv1d_tb_wrapper___024unit___ctor_var_reset(Vconv1d_tb_wrapper___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vconv1d_tb_wrapper___024unit___ctor_var_reset\n"); );
}
