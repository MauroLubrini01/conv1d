// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconv1d_tb_wrapper.h for the primary calling header

#include "Vconv1d_tb_wrapper___024root.h"
#include "Vconv1d_tb_wrapper__Syms.h"

//==========

VL_INLINE_OPT void Vconv1d_tb_wrapper___024root___sequent__TOP__2(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*0:0*/ __Vdlyvval__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_obi_bridge__DOT__obi_rvalid__v0;
    // Body
    if (vlSelf->rst_ni) {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk10__DOT__i = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j = 1U;
    }
    if (vlSelf->rst_ni) {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk8__DOT__i = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->rst_ni)))) {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk6__DOT__i = 1U;
    }
    if (vlSelf->rst_ni) {
        if ((0x20U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
            if ((0x10U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j = 0x20U;
            }
        }
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_status_done__DOT__qe 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__status_done_we));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_status_running__DOT__qe 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__status_done_we));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_control_rst__DOT__qe 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__control_rst_we));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_control_start__DOT__qe 
        = ((IData)(vlSelf->rst_ni) & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__control_rst_we));
    __Vdlyvval__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_obi_bridge__DOT__obi_rvalid__v0 
        = ((IData)(vlSelf->rst_ni) & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_obi_bridge__DOT__obi_rvalid
           [0U]);
    if (vlSelf->rst_ni) {
        if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__control_rst_we) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_control_rst__q 
                = ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__control_rst_we) 
                   & (vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U] 
                      >> 1U));
        }
    } else {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_control_rst__q = 0U;
    }
    if (vlSelf->rst_ni) {
        if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__control_rst_we) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_control_start__q 
                = ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__control_rst_we) 
                   & vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U]);
        }
    } else {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_control_start__q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__status_done_we) 
                   | (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg)))) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_status_done__q 
                = (1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__status_done_we)
                          ? (vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U] 
                             >> 1U) : ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                                       >> 1U)));
        }
    } else {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_status_done__q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__status_done_we) 
                   | ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                      >> 2U)))) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_status_running__q 
                = (1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__status_done_we)
                          ? vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U]
                          : ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                             >> 3U)));
        }
    } else {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_status_running__q = 0U;
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_obi_bridge__DOT__obi_rvalid[1U] 
        = __Vdlyvval__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_obi_bridge__DOT__obi_rvalid__v0;
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__reg2hw 
        = (((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_control_start__q) 
            << 3U) | (((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_control_rst__q) 
                       << 2U) | (((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_status_running__q) 
                                  << 1U) | (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_status_done__q))));
}

VL_INLINE_OPT void Vconv1d_tb_wrapper___024root___sequent__TOP__4(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___sequent__TOP__4\n"); );
    // Body
    if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n) {
        if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_ld) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A3_B 
                = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A3_out;
        }
    } else {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A3_B = 0U;
    }
}

VL_INLINE_OPT void Vconv1d_tb_wrapper___024root___combo__TOP__5(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___combo__TOP__5\n"); );
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

VL_INLINE_OPT void Vconv1d_tb_wrapper___024root___sequent__TOP__7(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___sequent__TOP__7\n"); );
    // Variables
    IData/*31:0*/ __Vdly__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_out_o;
    // Body
    __Vdly__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_out_o 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_out_o;
    if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n) {
        if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_en) {
            __Vdly__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_out_o 
                = ((IData)(1U) + vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_out_o);
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__out_tc127 
                = (0x7dU == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_out_o);
        }
    } else {
        __Vdly__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_out_o = 0x6cU;
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__out_tc127 = 0U;
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_out_o 
        = __Vdly__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_out_o;
}

VL_INLINE_OPT void Vconv1d_tb_wrapper___024root___sequent__TOP__8(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___sequent__TOP__8\n"); );
    // Variables
    IData/*31:0*/ __Vdly__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_ker_o;
    // Body
    __Vdly__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_ker_o 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_ker_o;
    if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n) {
        if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_en) {
            __Vdly__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_ker_o 
                = ((IData)(1U) + vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_ker_o);
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__ker_tc4 
                = (3U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_ker_o);
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__ker_tc20 
                = (0x13U == vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_ker_o);
        }
    } else {
        __Vdly__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_ker_o = 0U;
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__ker_tc4 = 0U;
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__ker_tc20 = 0U;
    }
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_ker_o 
        = __Vdly__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_ker_o;
}

VL_INLINE_OPT void Vconv1d_tb_wrapper___024root___sequent__TOP__9(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___sequent__TOP__9\n"); );
    // Body
    vlSelf->__Vdly__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_inp_o 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_inp_o;
    if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n) {
        if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_ld) {
            vlSelf->__Vdly__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_inp_o 
                = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__reg_out;
        } else if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_en) {
            vlSelf->__Vdly__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_inp_o 
                = ((IData)(1U) + vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_inp_o);
        }
    } else {
        vlSelf->__Vdly__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_inp_o = 0x14U;
    }
}

VL_INLINE_OPT void Vconv1d_tb_wrapper___024root___sequent__TOP__10(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___sequent__TOP__10\n"); );
    // Body
    if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n) {
        if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_ker_ld) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_B 
                = (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q 
                   >> 0x18U);
        }
    } else {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_B = 0U;
    }
    if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n) {
        if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_ker_ld) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_B 
                = (0xffU & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q 
                            >> 0x10U));
        }
    } else {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_B = 0U;
    }
    if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n) {
        if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_ker_ld) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_B 
                = (0xffU & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q 
                            >> 8U));
        }
    } else {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_B = 0U;
    }
    if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n) {
        if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_ker_ld) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_B 
                = (0xffU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q);
        }
    } else {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_B = 0U;
    }
    if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n) {
        if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_in_ld) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_A 
                = (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q 
                   >> 0x18U);
        }
    } else {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_A = 0U;
    }
    if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n) {
        if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_in_ld) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_A 
                = (0xffU & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q 
                            >> 0x10U));
        }
    } else {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_A = 0U;
    }
    if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n) {
        if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_in_ld) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_A 
                = (0xffU & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q 
                            >> 8U));
        }
    } else {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_A = 0U;
    }
    if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n) {
        if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_in_ld) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_A 
                = (0xffU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q);
        }
    } else {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_A = 0U;
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
}

VL_INLINE_OPT void Vconv1d_tb_wrapper___024root___sequent__TOP__11(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___sequent__TOP__11\n"); );
    // Body
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state 
        = ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n)
            ? vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__next_state
            : 0x14U);
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
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg 
        = (((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running) 
            << 3U) | (((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running_e) 
                       << 2U) | (((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__done) 
                                  << 1U) | (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__done_e))));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2U] 
        = ((0xfU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2U]) 
           | (0x30U & (((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_req) 
                        << 5U) | ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_we) 
                                  << 4U))));
}

VL_INLINE_OPT void Vconv1d_tb_wrapper___024root___sequent__TOP__12(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___sequent__TOP__12\n"); );
    // Body
    if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n) {
        if (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_ld) {
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__reg_out 
                = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_inp_o;
        }
    } else {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__reg_out = 0U;
    }
}

VL_INLINE_OPT void Vconv1d_tb_wrapper___024root___sequent__TOP__13(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___sequent__TOP__13\n"); );
    // Body
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n 
        = (1U & (~ ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__reg2hw) 
                    >> 2U)));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q 
        = ((IData)(vlSelf->rst_ni) ? ((1U & ((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U] 
                                              >> 5U) 
                                             & (~ (
                                                   vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U] 
                                                   >> 4U))))
                                       ? vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                                      (0x7fU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U])]
                                       : (((0U == (0x1fU 
                                                   & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q) 
                                                      << 5U)))
                                            ? 0U : 
                                           (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                                            (((IData)(0x1fU) 
                                              + (0xfffU 
                                                 & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q) 
                                                    << 5U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q) 
                                                      << 5U))))) 
                                          | (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                                             (0x7fU 
                                              & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q))] 
                                             >> (0x1fU 
                                                 & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q) 
                                                    << 5U)))))
            : vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0U]);
    if (vlSelf->rst_ni) {
        if ((0x20U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
            if ((1U & (~ (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U] 
                          >> 4U)))) {
                vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vlvbound10 
                    = (0x7fU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U]);
                vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q 
                    = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vlvbound10;
            }
        }
    } else {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q = 0U;
    }
    if (vlSelf->rst_ni) {
        if ((0x20U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
            if ((0x10U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                if ((1U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U])] 
                        = ((0xfffffffeU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U])]) 
                           | (1U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U]));
                }
                if ((1U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(1U) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(1U) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 1U)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(1U) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((1U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(2U) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(2U) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(2U) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 2U)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((1U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(3U) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(3U) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(3U) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 3U)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((1U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(4U) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(4U) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(4U) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 4U)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(4U) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((1U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(5U) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(5U) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(5U) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 5U)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(5U) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((1U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(6U) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(6U) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(6U) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 6U)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(6U) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((1U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(7U) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(7U) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(7U) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 7U)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(7U) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((2U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(8U) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(8U) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(8U) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 8U)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(8U) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((2U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(9U) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(9U) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(9U) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 9U)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(9U) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((2U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0xaU) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0xaU) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0xaU) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0xaU)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0xaU) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((2U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0xbU) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0xbU) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0xbU) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0xbU)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0xbU) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((2U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0xcU) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0xcU) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0xcU) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0xcU)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0xcU) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((2U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0xdU) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0xdU) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0xdU) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0xdU)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0xdU) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((2U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0xeU) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0xeU) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0xeU) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0xeU)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0xeU) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((2U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0xfU) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0xfU) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0xfU) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0xfU)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0xfU) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((4U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0x10U) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x10U) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0x10U) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0x10U)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0x10U) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((4U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0x11U) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x11U) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0x11U) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0x11U)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0x11U) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((4U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0x12U) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x12U) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0x12U) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0x12U)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0x12U) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((4U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0x13U) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x13U) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0x13U) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0x13U)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0x13U) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((4U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0x14U) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x14U) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0x14U) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0x14U)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0x14U) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((4U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0x15U) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x15U) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0x15U) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0x15U)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0x15U) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((4U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0x16U) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x16U) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0x16U) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0x16U)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0x16U) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((4U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0x17U) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x17U) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0x17U) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0x17U)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0x17U) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((8U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0x18U) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x18U) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0x18U) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0x18U)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0x18U) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((8U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0x19U) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x19U) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0x19U) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0x19U)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0x19U) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((8U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0x1aU) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x1aU) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0x1aU) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0x1aU)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0x1aU) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((8U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0x1bU) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x1bU) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0x1bU) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0x1bU)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0x1bU) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((8U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0x1cU) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x1cU) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0x1cU) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0x1cU)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0x1cU) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((8U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0x1dU) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x1dU) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0x1dU) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0x1dU)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0x1dU) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((8U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0x1eU) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x1eU) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0x1eU) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (1U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                       >> 0x1eU)) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0x1eU) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
                if ((8U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])) {
                    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[(0x7fU 
                                                                                & (((IData)(0x1fU) 
                                                                                + 
                                                                                (0xfe0U 
                                                                                & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                                                << 5U))) 
                                                                                >> 5U))] 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & ((IData)(0x1fU) 
                                                   + 
                                                   (0xfe0U 
                                                    & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                       << 5U)))))) 
                            & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                            (0x7fU & (((IData)(0x1fU) 
                                       + (0xfe0U & 
                                          (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                           << 5U))) 
                                      >> 5U))]) | (
                                                   (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U] 
                                                    >> 0x1fU) 
                                                   << 
                                                   (0x1fU 
                                                    & ((IData)(0x1fU) 
                                                       + 
                                                       (0xfe0U 
                                                        & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U] 
                                                           << 5U))))));
                }
            }
        }
    } else {
        vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk5__DOT__i = 0U;
        while ((0x80U > vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk5__DOT__i)) {
            VL_ASSIGNSEL_WIII(4096,32,(0xfffU & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk5__DOT__i 
                                                 << 5U)), vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram, 
                              (((0U == (0x1fU & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk5__DOT__i 
                                                 << 5U)))
                                 ? 0U : (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                                         (((IData)(0x1fU) 
                                           + (0xfffU 
                                              & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk5__DOT__i 
                                                 << 5U))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk5__DOT__i 
                                                << 5U))))) 
                               | (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[
                                  (0x7fU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk5__DOT__i)] 
                                  >> (0x1fU & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk5__DOT__i 
                                               << 5U)))));
            vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk5__DOT__i 
                = ((IData)(1U) + vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk5__DOT__i);
        }
    }
}

VL_INLINE_OPT void Vconv1d_tb_wrapper___024root___multiclk__TOP__14(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___multiclk__TOP__14\n"); );
    // Body
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A3_out 
        = (((0x20000U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out)
             ? (0xfffc0000U | vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out)
             : vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out) 
           + vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A3_B);
}

VL_INLINE_OPT void Vconv1d_tb_wrapper___024root___multiclk__TOP__15(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___multiclk__TOP__15\n"); );
    // Body
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
}

VL_INLINE_OPT void Vconv1d_tb_wrapper___024root___sequent__TOP__16(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___sequent__TOP__16\n"); );
    // Body
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
}

VL_INLINE_OPT void Vconv1d_tb_wrapper___024root___sequent__TOP__17(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___sequent__TOP__17\n"); );
    // Body
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_inp_o 
        = vlSelf->__Vdly__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_inp_o;
}

VL_INLINE_OPT void Vconv1d_tb_wrapper___024root___combo__TOP__18(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___combo__TOP__18\n"); );
    // Body
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__u_obi_bridge__obi_rsp_o 
        = (((QData)((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__ext_mem_gnt)) 
            << 0x21U) | (((QData)((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_obi_bridge__DOT__obi_rvalid
                                          [1U])) << 0x20U) 
                         | (QData)((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q))));
    vlSelf->obi_gnt_o = (1U & (IData)((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__u_obi_bridge__obi_rsp_o 
                                       >> 0x21U)));
    vlSelf->obi_rvalid_o = (1U & (IData)((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__u_obi_bridge__obi_rsp_o 
                                          >> 0x20U)));
    vlSelf->obi_rdata_o = (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__u_obi_bridge__obi_rsp_o);
}

VL_INLINE_OPT void Vconv1d_tb_wrapper___024root___multiclk__TOP__19(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___multiclk__TOP__19\n"); );
    // Body
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
}

VL_INLINE_OPT void Vconv1d_tb_wrapper___024root___combo__TOP__20(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___combo__TOP__20\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp18;
    // Body
    __Vtemp18[1U] = (IData)(((((QData)((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[0U]))) 
                             >> 0x20U));
    __Vtemp18[2U] = (0xfU | (0x30U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2U]));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[0U] 
        = (IData)((((QData)((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[0U]))));
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[1U] 
        = __Vtemp18[1U];
    vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2U] 
        = __Vtemp18[2U];
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
}

void Vconv1d_tb_wrapper___024root___eval(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vconv1d_tb_wrapper___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n)))) {
        Vconv1d_tb_wrapper___024root___sequent__TOP__4(vlSelf);
    }
    Vconv1d_tb_wrapper___024root___combo__TOP__5(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n)))) {
        Vconv1d_tb_wrapper___024root___sequent__TOP__7(vlSelf);
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n)))) {
        Vconv1d_tb_wrapper___024root___sequent__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n)))) {
        Vconv1d_tb_wrapper___024root___sequent__TOP__9(vlSelf);
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n)))) {
        Vconv1d_tb_wrapper___024root___sequent__TOP__10(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n)))) {
        Vconv1d_tb_wrapper___024root___sequent__TOP__11(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n)))) {
        Vconv1d_tb_wrapper___024root___sequent__TOP__12(vlSelf);
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vconv1d_tb_wrapper___024root___sequent__TOP__13(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if (((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n)))) {
        Vconv1d_tb_wrapper___024root___multiclk__TOP__14(vlSelf);
    }
    if (((((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
            | ((~ (IData)(vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n)) 
               & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n))) 
           | ((~ (IData)(vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n)) 
              & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n))) 
         | ((~ (IData)(vlSelf->rst_ni)) & (IData)(vlSelf->__Vclklast__TOP__rst_ni)))) {
        Vconv1d_tb_wrapper___024root___multiclk__TOP__15(vlSelf);
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n)))) {
        Vconv1d_tb_wrapper___024root___sequent__TOP__16(vlSelf);
    }
    if ((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n)))) {
        Vconv1d_tb_wrapper___024root___sequent__TOP__17(vlSelf);
    }
    Vconv1d_tb_wrapper___024root___combo__TOP__18(vlSelf);
    if ((((((((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i))) 
             | ((~ (IData)(vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n)) 
                & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n))) 
            | ((~ (IData)(vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n)) 
               & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n))) 
           | ((~ (IData)(vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n)) 
              & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n))) 
          | ((~ (IData)(vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n)) 
             & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n)))) {
        Vconv1d_tb_wrapper___024root___multiclk__TOP__19(vlSelf);
    }
    Vconv1d_tb_wrapper___024root___combo__TOP__20(vlSelf);
    // Final
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
    vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n;
    vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n;
    vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n;
    vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n;
    vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n;
    vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n;
    vlSelf->__VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n;
}

QData Vconv1d_tb_wrapper___024root___change_request_1(Vconv1d_tb_wrapper___024root* vlSelf);

VL_INLINE_OPT QData Vconv1d_tb_wrapper___024root___change_request(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___change_request\n"); );
    // Body
    return (Vconv1d_tb_wrapper___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vconv1d_tb_wrapper___024root___change_request_1(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n)
         | (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[0] ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[0]) | (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[1] ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[1]) | (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2] ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2])
         | (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n)
         | (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n)
         | (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n)
         | (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n)
         | (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n)
         | (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n));
    VL_DEBUG_IF( if(__req && ((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n))) VL_DBG_MSGF("        CHANGE: ../../../hw/conv1d_obi.sv:43: conv1d_tb_wrapper.u_conv1d_obi.rst_n\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[0] ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[0]) | (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[1] ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[1]) | (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2] ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2]))) VL_DBG_MSGF("        CHANGE: ../../../hw/conv1d.sv:46: conv1d_tb_wrapper.u_conv1d_obi.u_conv1d.int_mem_req\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n))) VL_DBG_MSGF("        CHANGE: ../../../hw/hw_accel-comp/accel.sv:19: conv1d_tb_wrapper.u_conv1d_obi.u_conv1d.hw_accellerator.cnt_ker_rst_n\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n))) VL_DBG_MSGF("        CHANGE: ../../../hw/hw_accel-comp/accel.sv:21: conv1d_tb_wrapper.u_conv1d_obi.u_conv1d.hw_accellerator.reg_init_cnt_inp_rst_n\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n))) VL_DBG_MSGF("        CHANGE: ../../../hw/hw_accel-comp/accel.sv:24: conv1d_tb_wrapper.u_conv1d_obi.u_conv1d.hw_accellerator.cnt_inp_rst_n\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n))) VL_DBG_MSGF("        CHANGE: ../../../hw/hw_accel-comp/accel.sv:26: conv1d_tb_wrapper.u_conv1d_obi.u_conv1d.hw_accellerator.cnt_out_rst_n\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n))) VL_DBG_MSGF("        CHANGE: ../../../hw/hw_accel-comp/accel.sv:30: conv1d_tb_wrapper.u_conv1d_obi.u_conv1d.hw_accellerator.alu_rst_n\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n ^ vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n))) VL_DBG_MSGF("        CHANGE: ../../../hw/hw_accel-comp/accel.sv:34: conv1d_tb_wrapper.u_conv1d_obi.u_conv1d.hw_accellerator.reg_sum_rst_n\n"); );
    // Final
    vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n;
    vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[0U] 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[0U];
    vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[1U] 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[1U];
    vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2U] 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2U];
    vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n;
    vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n;
    vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n;
    vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n;
    vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n;
    vlSelf->__Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n 
        = vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n;
    return __req;
}

#ifdef VL_DEBUG
void Vconv1d_tb_wrapper___024root___eval_debug_assertions(Vconv1d_tb_wrapper___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv1d_tb_wrapper___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->obi_req_i & 0xfeU))) {
        Verilated::overWidthError("obi_req_i");}
    if (VL_UNLIKELY((vlSelf->obi_we_i & 0xfeU))) {
        Verilated::overWidthError("obi_we_i");}
    if (VL_UNLIKELY((vlSelf->obi_be_i & 0xf0U))) {
        Verilated::overWidthError("obi_be_i");}
    if (VL_UNLIKELY((vlSelf->reg_valid_i & 0xfeU))) {
        Verilated::overWidthError("reg_valid_i");}
    if (VL_UNLIKELY((vlSelf->reg_write_i & 0xfeU))) {
        Verilated::overWidthError("reg_write_i");}
    if (VL_UNLIKELY((vlSelf->reg_wstrb_i & 0xf0U))) {
        Verilated::overWidthError("reg_wstrb_i");}
}
#endif  // VL_DEBUG
