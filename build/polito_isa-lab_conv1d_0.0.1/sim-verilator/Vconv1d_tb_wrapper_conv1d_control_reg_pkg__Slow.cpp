// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconv1d_tb_wrapper.h for the primary calling header

#include "Vconv1d_tb_wrapper_conv1d_control_reg_pkg.h"
#include "Vconv1d_tb_wrapper__Syms.h"

//==========


void Vconv1d_tb_wrapper_conv1d_control_reg_pkg___ctor_var_reset(Vconv1d_tb_wrapper_conv1d_control_reg_pkg* vlSelf);

Vconv1d_tb_wrapper_conv1d_control_reg_pkg::Vconv1d_tb_wrapper_conv1d_control_reg_pkg(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vconv1d_tb_wrapper_conv1d_control_reg_pkg___ctor_var_reset(this);
}

void Vconv1d_tb_wrapper_conv1d_control_reg_pkg::__Vconfigure(Vconv1d_tb_wrapper__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vconv1d_tb_wrapper_conv1d_control_reg_pkg::~Vconv1d_tb_wrapper_conv1d_control_reg_pkg() {
}

void Vconv1d_tb_wrapper_conv1d_control_reg_pkg___initial__TOP__conv1d_control_reg_pkg__1(Vconv1d_tb_wrapper_conv1d_control_reg_pkg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vconv1d_tb_wrapper_conv1d_control_reg_pkg___initial__TOP__conv1d_control_reg_pkg__1\n"); );
    // Body
    vlSelf->__PVT__CONV1D_CONTROL_PERMIT[0U] = 1U;
    vlSelf->__PVT__CONV1D_CONTROL_PERMIT[1U] = 1U;
}

void Vconv1d_tb_wrapper_conv1d_control_reg_pkg___ctor_var_reset(Vconv1d_tb_wrapper_conv1d_control_reg_pkg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vconv1d_tb_wrapper_conv1d_control_reg_pkg___ctor_var_reset\n"); );
    // Body
}
