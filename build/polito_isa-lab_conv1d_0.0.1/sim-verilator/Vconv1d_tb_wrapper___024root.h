// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconv1d_tb_wrapper.h for the primary calling header

#ifndef VERILATED_VCONV1D_TB_WRAPPER___024ROOT_H_
#define VERILATED_VCONV1D_TB_WRAPPER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vconv1d_tb_wrapper__Syms;
class Vconv1d_tb_wrapper_VerilatedFst;
class Vconv1d_tb_wrapper_conv1d_control_reg_pkg;


//----------

VL_MODULE(Vconv1d_tb_wrapper___024root) {
  public:
    // CELLS
    Vconv1d_tb_wrapper_conv1d_control_reg_pkg* __PVT__conv1d_control_reg_pkg;

    // PORTS
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(obi_req_i,0,0);
    VL_IN8(obi_we_i,0,0);
    VL_IN8(obi_be_i,3,0);
    VL_OUT8(obi_gnt_o,0,0);
    VL_OUT8(obi_rvalid_o,0,0);
    VL_IN8(reg_valid_i,0,0);
    VL_IN8(reg_write_i,0,0);
    VL_IN8(reg_wstrb_i,3,0);
    VL_OUT8(reg_error_o,0,0);
    VL_OUT8(reg_ready_o,0,0);
    VL_OUT8(done_int_o,0,0);
    VL_IN(obi_addr_i,31,0);
    VL_IN(obi_wdata_i,31,0);
    VL_OUT(obi_rdata_o,31,0);
    VL_IN(reg_addr_i,31,0);
    VL_IN(reg_wdata_i,31,0);
    VL_OUT(reg_rdata_o,31,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__done;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__done_e;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running_e;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__ext_mem_gnt;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_en;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_ld;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_ld;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_en;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_en;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__ker_tc4;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__ker_tc20;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__out_tc127;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_ker_ld;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_in_ld;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_ld;
        CData/*1:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel;
        CData/*7:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_A;
        CData/*7:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_B;
        CData/*7:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_A;
        CData/*7:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_B;
        CData/*7:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_A;
        CData/*7:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_B;
        CData/*7:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_A;
        CData/*7:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_B;
        CData/*6:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q;
        CData/*3:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__reg2hw;
        CData/*3:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_we;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__wr_err;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__control_rst_we;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__status_done_we;
        CData/*1:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__addr_hit;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_control_start__DOT__qe;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_control_rst__DOT__qe;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_status_running__DOT__qe;
        CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_status_done__DOT__qe;
        IData/*31:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__reg_out;
        IData/*31:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_ker_o;
        IData/*31:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_inp_o;
        IData/*31:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_out_o;
        IData/*17:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out;
        IData/*31:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A3_B;
        IData/*31:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A3_out;
        IData/*31:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state;
        IData/*31:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__next_state;
        VlWide<128>/*4095:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram;
        VlWide<128>/*4095:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val;
        IData/*31:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q;
        IData/*31:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j;
        IData/*31:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk8__DOT__i;
        IData/*31:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j;
        IData/*31:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk10__DOT__i;
        IData/*31:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j;
        IData/*31:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk5__DOT__i;
        IData/*31:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk6__DOT__i;
    };
    struct {
        IData/*31:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j;
        IData/*31:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_rdata_next;
        VlWide<3>/*69:0*/ conv1d_tb_wrapper__DOT__obi_req;
        VlWide<3>/*69:0*/ conv1d_tb_wrapper__DOT__reg_req;
        VlWide<3>/*69:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req;
        VlWide<3>/*69:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req;
        QData/*33:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_intf_rsp;
        VlUnpacked<CData/*0:0*/, 2> conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_obi_bridge__DOT__obi_rvalid;
    };

    // LOCAL VARIABLES
    CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_we;
    CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_req;
    CData/*6:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT____Vlvbound10;
    CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_control_start__q;
    CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_control_rst__q;
    CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_status_running__q;
    CData/*0:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_status_done__q;
    CData/*0:0*/ __VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n;
    CData/*0:0*/ __VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n;
    CData/*0:0*/ __VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n;
    CData/*0:0*/ __VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n;
    CData/*0:0*/ __VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n;
    CData/*0:0*/ __VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n;
    CData/*0:0*/ __VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    CData/*0:0*/ __Vclklast__TOP__rst_ni;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n;
    CData/*0:0*/ __Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n;
    CData/*0:0*/ __Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n;
    CData/*0:0*/ __Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n;
    CData/*0:0*/ __Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n;
    CData/*0:0*/ __Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n;
    CData/*0:0*/ __Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n;
    CData/*0:0*/ __Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n;
    IData/*31:0*/ __Vdly__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_inp_o;
    QData/*33:0*/ conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__u_obi_bridge__obi_rsp_o;
    VlWide<3>/*69:0*/ __Vchglast__TOP__conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req;
    VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vconv1d_tb_wrapper__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vconv1d_tb_wrapper___024root);  ///< Copying not allowed
  public:
    Vconv1d_tb_wrapper___024root(const char* name);
    ~Vconv1d_tb_wrapper___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vconv1d_tb_wrapper__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
