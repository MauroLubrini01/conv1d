// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCONV1D_TB_WRAPPER__SYMS_H_
#define VERILATED_VCONV1D_TB_WRAPPER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vconv1d_tb_wrapper.h"

// INCLUDE MODULE CLASSES
#include "Vconv1d_tb_wrapper___024root.h"
#include "Vconv1d_tb_wrapper___024unit.h"
#include "Vconv1d_tb_wrapper_conv1d_control_reg_pkg.h"

// SYMS CLASS (contains all model state)
class Vconv1d_tb_wrapper__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vconv1d_tb_wrapper* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vconv1d_tb_wrapper___024root   TOP;
    Vconv1d_tb_wrapper_conv1d_control_reg_pkg TOP__conv1d_control_reg_pkg;

    // SCOPE NAMES
    VerilatedScope __Vscope_conv1d_tb_wrapper__u_conv1d_obi__u_conv1d_control_reg__u_conv1d_control_reg_top;

    // CONSTRUCTORS
    Vconv1d_tb_wrapper__Syms(VerilatedContext* contextp, const char* namep, Vconv1d_tb_wrapper* modelp);
    ~Vconv1d_tb_wrapper__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
