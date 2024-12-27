// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconv1d_tb_wrapper.h for the primary calling header

#ifndef VERILATED_VCONV1D_TB_WRAPPER_CONV1D_CONTROL_REG_PKG_H_
#define VERILATED_VCONV1D_TB_WRAPPER_CONV1D_CONTROL_REG_PKG_H_  // guard

#include "verilated_heavy.h"

//==========

class Vconv1d_tb_wrapper__Syms;
class Vconv1d_tb_wrapper_VerilatedFst;


//----------

VL_MODULE(Vconv1d_tb_wrapper_conv1d_control_reg_pkg) {
  public:

    // INTERNAL VARIABLES
    Vconv1d_tb_wrapper__Syms* vlSymsp;  // Symbol table

    // PARAMETERS
    VlUnpacked<CData/*3:0*/, 2> __PVT__CONV1D_CONTROL_PERMIT;

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vconv1d_tb_wrapper_conv1d_control_reg_pkg);  ///< Copying not allowed
  public:
    Vconv1d_tb_wrapper_conv1d_control_reg_pkg(const char* name);
    ~Vconv1d_tb_wrapper_conv1d_control_reg_pkg();

    // INTERNAL METHODS
    void __Vconfigure(Vconv1d_tb_wrapper__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
