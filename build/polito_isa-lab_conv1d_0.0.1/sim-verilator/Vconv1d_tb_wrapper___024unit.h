// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconv1d_tb_wrapper.h for the primary calling header

#ifndef VERILATED_VCONV1D_TB_WRAPPER___024UNIT_H_
#define VERILATED_VCONV1D_TB_WRAPPER___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vconv1d_tb_wrapper__Syms;
class Vconv1d_tb_wrapper_VerilatedFst;


//----------

VL_MODULE(Vconv1d_tb_wrapper___024unit) {
  public:

    // INTERNAL VARIABLES
    Vconv1d_tb_wrapper__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vconv1d_tb_wrapper___024unit);  ///< Copying not allowed
  public:
    Vconv1d_tb_wrapper___024unit(const char* name);
    ~Vconv1d_tb_wrapper___024unit();

    // INTERNAL METHODS
    void __Vconfigure(Vconv1d_tb_wrapper__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
