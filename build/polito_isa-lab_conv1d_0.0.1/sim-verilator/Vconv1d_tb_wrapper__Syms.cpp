// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vconv1d_tb_wrapper__Syms.h"
#include "Vconv1d_tb_wrapper.h"
#include "Vconv1d_tb_wrapper___024root.h"
#include "Vconv1d_tb_wrapper___024unit.h"
#include "Vconv1d_tb_wrapper_conv1d_control_reg_pkg.h"

// FUNCTIONS
Vconv1d_tb_wrapper__Syms::~Vconv1d_tb_wrapper__Syms()
{
}

Vconv1d_tb_wrapper__Syms::Vconv1d_tb_wrapper__Syms(VerilatedContext* contextp, const char* namep,Vconv1d_tb_wrapper* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
    , TOP__conv1d_control_reg_pkg(Verilated::catName(namep, "conv1d_control_reg_pkg"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__conv1d_control_reg_pkg = &TOP__conv1d_control_reg_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__conv1d_control_reg_pkg.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_conv1d_tb_wrapper__u_conv1d_obi__u_conv1d_control_reg__u_conv1d_control_reg_top.configure(this, name(), "conv1d_tb_wrapper.u_conv1d_obi.u_conv1d_control_reg.u_conv1d_control_reg_top", "u_conv1d_control_reg_top", -12, VerilatedScope::SCOPE_OTHER);
}
