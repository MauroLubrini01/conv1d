// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vconv1d_tb_wrapper.h"
#include "Vconv1d_tb_wrapper__Syms.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vconv1d_tb_wrapper::Vconv1d_tb_wrapper(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vconv1d_tb_wrapper__Syms(_vcontextp__, _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , obi_req_i{vlSymsp->TOP.obi_req_i}
    , obi_we_i{vlSymsp->TOP.obi_we_i}
    , obi_be_i{vlSymsp->TOP.obi_be_i}
    , obi_addr_i{vlSymsp->TOP.obi_addr_i}
    , obi_wdata_i{vlSymsp->TOP.obi_wdata_i}
    , obi_gnt_o{vlSymsp->TOP.obi_gnt_o}
    , obi_rvalid_o{vlSymsp->TOP.obi_rvalid_o}
    , obi_rdata_o{vlSymsp->TOP.obi_rdata_o}
    , reg_valid_i{vlSymsp->TOP.reg_valid_i}
    , reg_write_i{vlSymsp->TOP.reg_write_i}
    , reg_wstrb_i{vlSymsp->TOP.reg_wstrb_i}
    , reg_addr_i{vlSymsp->TOP.reg_addr_i}
    , reg_wdata_i{vlSymsp->TOP.reg_wdata_i}
    , reg_error_o{vlSymsp->TOP.reg_error_o}
    , reg_ready_o{vlSymsp->TOP.reg_ready_o}
    , reg_rdata_o{vlSymsp->TOP.reg_rdata_o}
    , done_int_o{vlSymsp->TOP.done_int_o}
    , __PVT__conv1d_control_reg_pkg{vlSymsp->TOP.__PVT__conv1d_control_reg_pkg}
    , rootp{&(vlSymsp->TOP)}
{
}

Vconv1d_tb_wrapper::Vconv1d_tb_wrapper(const char* _vcname__)
    : Vconv1d_tb_wrapper(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vconv1d_tb_wrapper::~Vconv1d_tb_wrapper() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vconv1d_tb_wrapper___024root___eval_initial(Vconv1d_tb_wrapper___024root* vlSelf);
void Vconv1d_tb_wrapper___024root___eval_settle(Vconv1d_tb_wrapper___024root* vlSelf);
void Vconv1d_tb_wrapper___024root___eval(Vconv1d_tb_wrapper___024root* vlSelf);
QData Vconv1d_tb_wrapper___024root___change_request(Vconv1d_tb_wrapper___024root* vlSelf);
#ifdef VL_DEBUG
void Vconv1d_tb_wrapper___024root___eval_debug_assertions(Vconv1d_tb_wrapper___024root* vlSelf);
#endif  // VL_DEBUG
void Vconv1d_tb_wrapper___024root___final(Vconv1d_tb_wrapper___024root* vlSelf);

static void _eval_initial_loop(Vconv1d_tb_wrapper__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vconv1d_tb_wrapper___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vconv1d_tb_wrapper___024root___eval_settle(&(vlSymsp->TOP));
        Vconv1d_tb_wrapper___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vconv1d_tb_wrapper___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../../../tb/conv1d_tb_wrapper.sv", 17, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vconv1d_tb_wrapper___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vconv1d_tb_wrapper::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vconv1d_tb_wrapper::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vconv1d_tb_wrapper___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vconv1d_tb_wrapper___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vconv1d_tb_wrapper___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../../../tb/conv1d_tb_wrapper.sv", 17, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vconv1d_tb_wrapper___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vconv1d_tb_wrapper::final() {
    Vconv1d_tb_wrapper___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vconv1d_tb_wrapper::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vconv1d_tb_wrapper::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vconv1d_tb_wrapper___024root__traceInitTop(Vconv1d_tb_wrapper___024root* vlSelf, VerilatedFst* tracep);

static void traceInit(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vconv1d_tb_wrapper___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconv1d_tb_wrapper___024root*>(voidSelf);
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vconv1d_tb_wrapper___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vconv1d_tb_wrapper___024root__traceRegister(Vconv1d_tb_wrapper___024root* vlSelf, VerilatedFst* tracep);

void Vconv1d_tb_wrapper::trace(VerilatedFstC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vconv1d_tb_wrapper___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
