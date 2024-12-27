// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vconv1d_tb_wrapper__Syms.h"


void Vconv1d_tb_wrapper___024root__traceInitSub0(Vconv1d_tb_wrapper___024root* vlSelf, VerilatedFst* tracep) VL_ATTR_COLD;

void Vconv1d_tb_wrapper___024root__traceInitTop(Vconv1d_tb_wrapper___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vconv1d_tb_wrapper___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vconv1d_tb_wrapper___024root__traceInitSub0(Vconv1d_tb_wrapper___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+388,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+389,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+390,"obi_req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+391,"obi_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+392,"obi_be_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+393,"obi_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+394,"obi_wdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+395,"obi_gnt_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+396,"obi_rvalid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+397,"obi_rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+398,"reg_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+399,"reg_write_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+400,"reg_wstrb_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+401,"reg_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+402,"reg_wdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+403,"reg_error_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+404,"reg_ready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+405,"reg_rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+406,"done_int_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+388,"conv1d_tb_wrapper clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+389,"conv1d_tb_wrapper rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+390,"conv1d_tb_wrapper obi_req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+391,"conv1d_tb_wrapper obi_we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+392,"conv1d_tb_wrapper obi_be_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+393,"conv1d_tb_wrapper obi_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+394,"conv1d_tb_wrapper obi_wdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+395,"conv1d_tb_wrapper obi_gnt_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+396,"conv1d_tb_wrapper obi_rvalid_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+397,"conv1d_tb_wrapper obi_rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+398,"conv1d_tb_wrapper reg_valid_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+399,"conv1d_tb_wrapper reg_write_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+400,"conv1d_tb_wrapper reg_wstrb_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+401,"conv1d_tb_wrapper reg_addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+402,"conv1d_tb_wrapper reg_wdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+403,"conv1d_tb_wrapper reg_error_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+404,"conv1d_tb_wrapper reg_ready_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+405,"conv1d_tb_wrapper reg_rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+406,"conv1d_tb_wrapper done_int_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+152,"conv1d_tb_wrapper obi_req\206 req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+153,"conv1d_tb_wrapper obi_req\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+154,"conv1d_tb_wrapper obi_req\206 be",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+155,"conv1d_tb_wrapper obi_req\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+156,"conv1d_tb_wrapper obi_req\206 wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+157,"conv1d_tb_wrapper obi_rsp\206 gnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+158,"conv1d_tb_wrapper obi_rsp\206 rvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+159,"conv1d_tb_wrapper obi_rsp\206 rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+160,"conv1d_tb_wrapper reg_req\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+161,"conv1d_tb_wrapper reg_req\206 write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+162,"conv1d_tb_wrapper reg_req\206 wstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+163,"conv1d_tb_wrapper reg_req\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+164,"conv1d_tb_wrapper reg_req\206 wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+165,"conv1d_tb_wrapper reg_rsp\206 error",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+166,"conv1d_tb_wrapper reg_rsp\206 ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+167,"conv1d_tb_wrapper reg_rsp\206 rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+389,"conv1d_tb_wrapper u_conv1d_obi rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+152,"conv1d_tb_wrapper u_conv1d_obi obi_req_i\206 req",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+153,"conv1d_tb_wrapper u_conv1d_obi obi_req_i\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+154,"conv1d_tb_wrapper u_conv1d_obi obi_req_i\206 be",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+155,"conv1d_tb_wrapper u_conv1d_obi obi_req_i\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+156,"conv1d_tb_wrapper u_conv1d_obi obi_req_i\206 wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+157,"conv1d_tb_wrapper u_conv1d_obi obi_rsp_o\206 gnt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+158,"conv1d_tb_wrapper u_conv1d_obi obi_rsp_o\206 rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+159,"conv1d_tb_wrapper u_conv1d_obi obi_rsp_o\206 rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+160,"conv1d_tb_wrapper u_conv1d_obi reg_req_i\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+161,"conv1d_tb_wrapper u_conv1d_obi reg_req_i\206 write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+162,"conv1d_tb_wrapper u_conv1d_obi reg_req_i\206 wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+163,"conv1d_tb_wrapper u_conv1d_obi reg_req_i\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+164,"conv1d_tb_wrapper u_conv1d_obi reg_req_i\206 wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+165,"conv1d_tb_wrapper u_conv1d_obi reg_rsp_o\206 error",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+166,"conv1d_tb_wrapper u_conv1d_obi reg_rsp_o\206 ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+167,"conv1d_tb_wrapper u_conv1d_obi reg_rsp_o\206 rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+406,"conv1d_tb_wrapper u_conv1d_obi done_int_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+222,"conv1d_tb_wrapper u_conv1d_obi done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+223,"conv1d_tb_wrapper u_conv1d_obi done_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+224,"conv1d_tb_wrapper u_conv1d_obi running",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+225,"conv1d_tb_wrapper u_conv1d_obi running_e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+133,"conv1d_tb_wrapper u_conv1d_obi start",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+251,"conv1d_tb_wrapper u_conv1d_obi rst_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+389,"conv1d_tb_wrapper u_conv1d_obi u_conv1d rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+152,"conv1d_tb_wrapper u_conv1d_obi u_conv1d mem_req_i\206 req",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+153,"conv1d_tb_wrapper u_conv1d_obi u_conv1d mem_req_i\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+154,"conv1d_tb_wrapper u_conv1d_obi u_conv1d mem_req_i\206 be",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+155,"conv1d_tb_wrapper u_conv1d_obi u_conv1d mem_req_i\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+156,"conv1d_tb_wrapper u_conv1d_obi u_conv1d mem_req_i\206 wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+157,"conv1d_tb_wrapper u_conv1d_obi u_conv1d mem_rsp_o\206 gnt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+158,"conv1d_tb_wrapper u_conv1d_obi u_conv1d mem_rsp_o\206 rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+159,"conv1d_tb_wrapper u_conv1d_obi u_conv1d mem_rsp_o\206 rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+133,"conv1d_tb_wrapper u_conv1d_obi u_conv1d start",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+251,"conv1d_tb_wrapper u_conv1d_obi u_conv1d rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+222,"conv1d_tb_wrapper u_conv1d_obi u_conv1d done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+223,"conv1d_tb_wrapper u_conv1d_obi u_conv1d done_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+224,"conv1d_tb_wrapper u_conv1d_obi u_conv1d running",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+225,"conv1d_tb_wrapper u_conv1d_obi u_conv1d running_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+429,"conv1d_tb_wrapper u_conv1d_obi u_conv1d NumWords",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+430,"conv1d_tb_wrapper u_conv1d_obi u_conv1d AddrWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+407,"conv1d_tb_wrapper u_conv1d_obi u_conv1d int_mem_req\206 req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+408,"conv1d_tb_wrapper u_conv1d_obi u_conv1d int_mem_req\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+409,"conv1d_tb_wrapper u_conv1d_obi u_conv1d int_mem_req\206 be",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+410,"conv1d_tb_wrapper u_conv1d_obi u_conv1d int_mem_req\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+411,"conv1d_tb_wrapper u_conv1d_obi u_conv1d int_mem_req\206 wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+168,"conv1d_tb_wrapper u_conv1d_obi u_conv1d ext_mem_req\206 req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+169,"conv1d_tb_wrapper u_conv1d_obi u_conv1d ext_mem_req\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+170,"conv1d_tb_wrapper u_conv1d_obi u_conv1d ext_mem_req\206 be",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+171,"conv1d_tb_wrapper u_conv1d_obi u_conv1d ext_mem_req\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+172,"conv1d_tb_wrapper u_conv1d_obi u_conv1d ext_mem_req\206 wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+173,"conv1d_tb_wrapper u_conv1d_obi u_conv1d mem_req\206 req",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+174,"conv1d_tb_wrapper u_conv1d_obi u_conv1d mem_req\206 we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+175,"conv1d_tb_wrapper u_conv1d_obi u_conv1d mem_req\206 be",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+176,"conv1d_tb_wrapper u_conv1d_obi u_conv1d mem_req\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+177,"conv1d_tb_wrapper u_conv1d_obi u_conv1d mem_req\206 wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+252,"conv1d_tb_wrapper u_conv1d_obi u_conv1d mem_rsp\206 rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+226,"conv1d_tb_wrapper u_conv1d_obi u_conv1d ext_mem_gnt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+133,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator accel_start",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+251,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+252,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator accel_in_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+222,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator accel_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+223,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator accel_done_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+224,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator accel_running",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+225,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator accel_running_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+227,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator accel_mem_req",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+228,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator accel_mem_we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+226,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator accel_ext_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+412,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator accel_addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+413,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator accel_result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+229,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator cnt_ker_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+230,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator cnt_ker_rst_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+414,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator reg_init_cnt_inp_ld",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+415,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator reg_init_cnt_inp_rst_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+231,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator cnt_inp_ld",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+232,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator cnt_inp_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+233,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator cnt_inp_rst_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+234,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator cnt_out_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+235,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator cnt_out_rst_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+203,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator ker_tc4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+204,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator ker_tc20",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+416,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator out_tc127",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+236,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu_rst_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+237,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator reg_ker_ld",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+238,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator reg_in_ld",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+239,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator reg_sum_ld",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+240,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator reg_sum_rst_n",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+241,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator mux_addr_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+229,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr cnt_ker_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+230,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr cnt_ker_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+414,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr reg_init_cnt_inp_ld",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+415,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr reg_init_cnt_inp_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+231,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr cnt_inp_ld",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+232,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr cnt_inp_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+233,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr cnt_inp_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+234,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr cnt_out_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+235,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr cnt_out_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+241,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr mux_addr_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        tracep->declBit(c+203,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr ker_tc4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+204,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr ker_tc20",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+416,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr out_tc127",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+412,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+417,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr reg_in",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+418,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr reg_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+205,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr cnt_ker_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+417,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr cnt_inp_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+419,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator pointr cnt_out_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+252,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu in_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+238,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in_ld",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+237,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker_ld",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+239,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_sum_ld",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+236,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu alu_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+240,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_sum_rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+413,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu result",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+206,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu m0_A",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+207,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu m0_B",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+208,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu m1_A",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+209,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu m1_B",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+210,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu m2_A",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+211,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu m2_B",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+212,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu m3_A",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+213,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu m3_B",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+214,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu m0_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
        tracep->declBus(c+215,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu m1_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
        tracep->declBus(c+216,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu m2_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
        tracep->declBus(c+217,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu m3_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 15,0);
        tracep->declBus(c+218,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu A0_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 16,0);
        tracep->declBus(c+219,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu A1_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 16,0);
        tracep->declBus(c+220,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu A2_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 17,0);
        tracep->declBus(c+221,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu A3_A",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+413,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu A3_B",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+420,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu A3_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+431,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in0 N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+253,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in0 reg_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in0 clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+238,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in0 ld",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+236,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in0 rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+206,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in0 reg_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+431,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in1 N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+254,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in1 reg_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in1 clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+238,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in1 ld",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+236,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in1 rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+208,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in1 reg_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+431,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in2 N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+255,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in2 reg_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in2 clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+238,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in2 ld",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+236,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in2 rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+210,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in2 reg_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+431,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in3 N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+256,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in3 reg_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in3 clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+238,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in3 ld",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+236,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in3 rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+212,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_in3 reg_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+431,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker0 N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+253,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker0 reg_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker0 clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+237,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker0 ld",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+236,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker0 rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+207,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker0 reg_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+431,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker1 N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+254,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker1 reg_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker1 clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+237,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker1 ld",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+236,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker1 rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+209,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker1 reg_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+431,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker2 N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+255,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker2 reg_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker2 clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+237,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker2 ld",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+236,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker2 rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+211,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker2 reg_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+431,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker3 N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+256,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker3 reg_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker3 clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+237,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker3 ld",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+236,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker3 rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+213,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_ker3 reg_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+432,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_sum N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+420,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_sum reg_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_sum clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+239,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_sum ld",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+240,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_sum rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+413,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu reg_sum reg_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+431,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu mult0 N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+206,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu mult0 a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+207,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu mult0 b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+214,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu mult0 p",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBus(c+431,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu mult1 N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+208,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu mult1 a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+209,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu mult1 b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+215,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu mult1 p",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBus(c+431,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu mult2 N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+210,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu mult2 a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+211,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu mult2 b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+216,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu mult2 p",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBus(c+431,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu mult3 N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+212,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu mult3 a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+213,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu mult3 b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+217,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu mult3 p",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBus(c+433,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu add0 N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+214,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu add0 a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBus(c+215,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu add0 b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBus(c+218,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu add0 s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
        tracep->declBus(c+433,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu add1 N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+216,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu add1 a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBus(c+217,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu add1 b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 15,0);
        tracep->declBus(c+219,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu add1 s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
        tracep->declBus(c+434,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu add2 N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+218,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu add2 a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
        tracep->declBus(c+219,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu add2 b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 16,0);
        tracep->declBus(c+220,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu add2 s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
        tracep->declBus(c+432,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu add3 N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+221,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu add3 a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+413,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu add3 b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+420,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu add3 s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+435,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu s_ext N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+220,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu s_ext data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
        tracep->declBus(c+221,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator alu s_ext data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+251,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit rst_n",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+133,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit start",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+203,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit ker_tc4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+204,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit ker_tc20",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+416,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit out_tc127",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+222,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+223,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit done_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+224,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit running",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+225,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit running_e",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+226,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit ext_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+227,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit mem_req",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+228,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit mem_we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+236,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit alu_rst_n",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+237,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit reg_ker_ld",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+238,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit reg_in_ld",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+239,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit reg_sum_ld",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+240,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit reg_sum_rst_n",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+414,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit reg_init_cnt_inp_ld",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+415,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit reg_init_cnt_inp_rst_n",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+232,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit cnt_inp_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+231,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit cnt_inp_ld",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+233,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit cnt_inp_rst_n",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+229,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit cnt_ker_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+230,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit cnt_ker_rst_n",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+234,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit cnt_out_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+235,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit cnt_out_rst_n",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+241,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit mux_addr_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
        {
            const char* __VenumItemNames[]
            = {"STATE_0", "STATE_1", "STATE_2", "STATE_3", 
                                                "STATE_3b", 
                                                "STATE_4", 
                                                "STATE_5", 
                                                "STATE_6", 
                                                "STATE_7", 
                                                "STATE_7b", 
                                                "STATE_8", 
                                                "STATE_9", 
                                                "STATE_10", 
                                                "STATE_11", 
                                                "STATE_11b", 
                                                "STATE_12", 
                                                "STATE_13", 
                                                "STATE_14", 
                                                "STATE_14b", 
                                                "STATE_15", 
                                                "IDLE"};
            const char* __VenumItemValues[]
            = {"0", "1", "10", "11", "100", "101", 
                                                "110", 
                                                "111", 
                                                "1000", 
                                                "1001", 
                                                "1010", 
                                                "1011", 
                                                "1100", 
                                                "1101", 
                                                "1110", 
                                                "1111", 
                                                "10000", 
                                                "10001", 
                                                "10010", 
                                                "10011", 
                                                "10100"};
            tracep->declDTypeEnum(1, "$unit::state", 21, 32, __VenumItemNames, __VenumItemValues);
        }
        tracep->declBus(c+242,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit cur_state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+421,"conv1d_tb_wrapper u_conv1d_obi u_conv1d hw_accellerator control_unit next_state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+436,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_obi_bridge DELAY",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_obi_bridge clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+389,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_obi_bridge rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+152,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_obi_bridge obi_req_i\206 req",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+153,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_obi_bridge obi_req_i\206 we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+154,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_obi_bridge obi_req_i\206 be",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+155,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_obi_bridge obi_req_i\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+156,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_obi_bridge obi_req_i\206 wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+157,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_obi_bridge obi_rsp_o\206 gnt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+158,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_obi_bridge obi_rsp_o\206 rvalid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+159,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_obi_bridge obi_rsp_o\206 rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+168,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_obi_bridge sram_req_o\206 req",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+169,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_obi_bridge sram_req_o\206 we",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+170,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_obi_bridge sram_req_o\206 be",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+171,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_obi_bridge sram_req_o\206 addr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+172,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_obi_bridge sram_req_o\206 wdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+226,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_obi_bridge sram_gnt_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+252,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_obi_bridge sram_rsp_i\206 rdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBit(c+422+i*1,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_obi_bridge obi_rvalid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0));}}
        tracep->declBus(c+429,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem NUM_WORDS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+437,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem DATA_WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+430,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem AddrWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+389,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+178,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+179,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+180,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+181,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem wdata_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+182,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem be_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+252,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem rdata_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+429,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram NumWords",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+437,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram DataWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+438,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram ByteWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+436,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram NumPorts",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+436,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram Latency",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+439,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram SimInit",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+440,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram PrintSimCfg",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1);
        tracep->declBus(c+430,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram AddrWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+441,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram BeWidth",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+389,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+178,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram req_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBus(c+179,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram we_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBus(c+183,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram addr_i(0)",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
        tracep->declBus(c+184,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram wdata_i(0)",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+185,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram be_i(0)",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+257,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram rdata_o(0)",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+258,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+259,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+260,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+261,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+262,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(4)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+263,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(5)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+264,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(6)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+265,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(7)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+266,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(8)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+267,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(9)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+268,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(10)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+269,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(11)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+270,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(12)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+271,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(13)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+272,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(14)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+273,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(15)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+274,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(16)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+275,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(17)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+276,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(18)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+277,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(19)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+278,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(20)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+279,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(21)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+280,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(22)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+281,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(23)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+282,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(24)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+283,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(25)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+284,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(26)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+285,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(27)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+286,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(28)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+287,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(29)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+288,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(30)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+289,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(31)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+290,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(32)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+291,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(33)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+292,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(34)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+293,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(35)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+294,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(36)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+295,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(37)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+296,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(38)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+297,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(39)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+298,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(40)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+299,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(41)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+300,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(42)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+301,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(43)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+302,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(44)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+303,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(45)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+304,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(46)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+305,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(47)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+306,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(48)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+307,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(49)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+308,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(50)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+309,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(51)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+310,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(52)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+311,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(53)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+312,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(54)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+313,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(55)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+314,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(56)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+315,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(57)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+316,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(58)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+317,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(59)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+318,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(60)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+319,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(61)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+320,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(62)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+321,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(63)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+322,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(64)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+323,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(65)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+324,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(66)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+325,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(67)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+326,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(68)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+327,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(69)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+328,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(70)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+329,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(71)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+330,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(72)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+331,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(73)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+332,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(74)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+333,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(75)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+334,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(76)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+335,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(77)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+336,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(78)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+337,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(79)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+338,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(80)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+339,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(81)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+340,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(82)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+341,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(83)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+342,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(84)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+343,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(85)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+344,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(86)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+345,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(87)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+346,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(88)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+347,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(89)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+348,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(90)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+349,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(91)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+350,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(92)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+351,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(93)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+352,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(94)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+353,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(95)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+354,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(96)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+355,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(97)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+356,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(98)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+357,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(99)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+358,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(100)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+359,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(101)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+360,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(102)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+361,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(103)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+362,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(104)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+363,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(105)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+364,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(106)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+365,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(107)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+366,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(108)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+367,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(109)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+368,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(110)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+369,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(111)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+370,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(112)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+371,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(113)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+372,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(114)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+373,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(115)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+374,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(116)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+375,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(117)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+376,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(118)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+377,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(119)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+378,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(120)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+379,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(121)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+380,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(122)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+381,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(123)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+382,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(124)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+383,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(125)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+384,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(126)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+385,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram sram(127)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+386,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram r_addr_q(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
        tracep->declBus(c+1,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+2,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(1)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+3,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(2)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+4,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(3)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+5,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(4)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+6,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(5)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+7,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(6)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+8,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(7)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+9,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(8)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+10,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(9)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+11,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(10)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+12,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(11)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+13,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(12)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+14,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(13)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+15,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(14)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+16,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(15)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+17,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(16)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+18,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(17)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+19,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(18)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+20,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(19)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+21,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(20)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+22,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(21)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+23,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(22)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+24,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(23)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+25,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(24)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+26,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(25)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+27,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(26)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+28,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(27)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+29,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(28)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+30,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(29)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+31,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(30)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+32,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(31)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+33,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(32)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+34,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(33)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+35,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(34)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+36,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(35)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+37,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(36)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+38,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(37)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+39,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(38)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+40,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(39)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+41,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(40)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+42,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(41)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+43,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(42)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+44,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(43)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+45,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(44)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+46,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(45)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+47,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(46)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+48,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(47)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+49,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(48)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+50,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(49)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+51,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(50)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+52,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(51)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+53,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(52)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+54,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(53)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+55,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(54)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+56,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(55)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+57,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(56)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+58,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(57)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+59,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(58)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+60,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(59)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+61,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(60)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+62,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(61)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+63,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(62)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+64,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(63)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+65,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(64)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+66,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(65)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+67,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(66)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+68,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(67)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+69,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(68)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+70,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(69)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+71,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(70)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+72,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(71)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+73,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(72)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+74,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(73)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+75,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(74)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+76,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(75)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+77,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(76)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+78,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(77)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+79,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(78)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+80,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(79)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+81,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(80)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+82,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(81)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+83,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(82)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+84,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(83)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+85,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(84)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+86,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(85)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+87,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(86)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+88,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(87)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+89,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(88)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+90,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(89)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+91,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(90)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+92,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(91)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+93,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(92)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+94,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(93)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+95,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(94)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+96,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(95)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+97,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(96)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+98,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(97)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+99,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(98)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+100,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(99)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+101,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(100)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+102,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(101)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+103,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(102)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+104,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(103)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+105,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(104)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+106,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(105)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+107,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(106)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+108,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(107)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+109,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(108)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+110,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(109)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+111,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(110)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+112,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(111)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+113,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(112)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+114,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(113)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+115,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(114)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+116,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(115)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+117,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(116)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+118,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(117)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+119,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(118)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+120,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(119)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+121,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(120)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+122,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(121)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+123,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(122)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+124,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(123)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+125,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(124)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+126,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(125)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+127,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(126)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+128,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram init_val(127)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+257,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram rdata_q(0)(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+424,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram rdata_d(0)(0)",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+129,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram proc_sram_init unnamedblk1 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+130,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram proc_sram_init unnamedblk1 unnamedblk2 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+436,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram gen_read_lat unnamedblk3 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+442,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram gen_read_lat unnamedblk3 unnamedblk4 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+134,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram unnamedblk8 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+135,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram unnamedblk8 unnamedblk9 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+136,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram unnamedblk10 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+137,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram unnamedblk10 unnamedblk11 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+387,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram unnamedblk5 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+138,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram unnamedblk6 i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBus(c+139,"conv1d_tb_wrapper u_conv1d_obi u_conv1d u_internal_mem u_tc_sram unnamedblk6 unnamedblk7 j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+389,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+160,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg req_i\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+161,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg req_i\206 write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+162,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg req_i\206 wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+163,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg req_i\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+164,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg req_i\206 wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+165,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg rsp_o\206 error",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+166,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg rsp_o\206 ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+167,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg rsp_o\206 rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+224,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg running",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+225,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg running_e",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+222,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg done",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+223,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg done_e",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+133,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg start",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+251,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg rst_n",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+140,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg reg2hw\206 control\206 start\206 q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+141,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg reg2hw\206 control\206 rst\206 q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+142,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg reg2hw\206 status\206 running\206 q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+143,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg reg2hw\206 status\206 done\206 q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+243,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg hw2reg\206 status\206 running\206 d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+244,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg hw2reg\206 status\206 running\206 de",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+245,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg hw2reg\206 status\206 done\206 d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+246,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg hw2reg\206 status\206 done\206 de",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+443,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top AW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+389,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+160,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_req_i\206 valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+161,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_req_i\206 write",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+162,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_req_i\206 wstrb",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
        tracep->declBus(c+163,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_req_i\206 addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBus(c+164,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_req_i\206 wdata",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+165,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_rsp_o\206 error",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+166,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_rsp_o\206 ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+167,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_rsp_o\206 rdata",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
        tracep->declBit(c+140,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg2hw\206 control\206 start\206 q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+141,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg2hw\206 control\206 rst\206 q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+142,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg2hw\206 status\206 running\206 q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+143,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg2hw\206 status\206 done\206 q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+243,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top hw2reg\206 status\206 running\206 d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+244,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top hw2reg\206 status\206 running\206 de",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+245,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top hw2reg\206 status\206 done\206 d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+246,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top hw2reg\206 status\206 done\206 de",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+444,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top devmode_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+445,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top DW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+446,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top DBW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBit(c+186,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+187,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_re",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+188,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
        tracep->declBus(c+189,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+190,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_be",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+191,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+192,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_error",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+193,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top addrmiss",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+192,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top wr_err",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+191,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_rdata_next",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+160,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_intf_req\206 valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+161,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_intf_req\206 write",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+162,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_intf_req\206 wstrb",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
        tracep->declBus(c+163,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_intf_req\206 addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBus(c+164,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_intf_req\206 wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+165,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_intf_rsp\206 error",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+166,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_intf_rsp\206 ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+167,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top reg_intf_rsp\206 rdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
        tracep->declBit(c+144,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top control_start_qs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+194,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top control_start_wd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+195,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top control_start_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+145,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top control_rst_qs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+196,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top control_rst_wd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+195,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top control_rst_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+146,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top status_running_qs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+194,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top status_running_wd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+197,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top status_running_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+147,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top status_done_qs",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+196,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top status_done_wd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+197,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top status_done_we",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+198,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top addr_hit",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
        tracep->declBit(c+199,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top unused_wdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBit(c+200,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top unused_be",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+447,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start DW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+448,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start SWACCESS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+449,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+389,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+195,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+194,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start wd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+444,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start de",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+444,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+148,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start qe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+144,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBus(c+144,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start qs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+195,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start wr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+201,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start wr_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
        tracep->declBus(c+447,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start wr_en_data_arb DW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+448,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start wr_en_data_arb SWACCESS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBit(c+195,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start wr_en_data_arb we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+194,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start wr_en_data_arb wd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+444,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start wr_en_data_arb de",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+444,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start wr_en_data_arb d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBus(c+144,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start wr_en_data_arb q",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+195,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start wr_en_data_arb wr_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+201,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start wr_en_data_arb wr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBus(c+144,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_start wr_en_data_arb gen_w unused_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
        tracep->declBus(c+447,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst DW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+448,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst SWACCESS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+449,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+389,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+195,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+196,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst wd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+444,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst de",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+444,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+149,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst qe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+145,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBus(c+145,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst qs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+195,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst wr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+202,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst wr_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
        tracep->declBus(c+447,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst wr_en_data_arb DW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+448,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst wr_en_data_arb SWACCESS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBit(c+195,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst wr_en_data_arb we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+196,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst wr_en_data_arb wd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+444,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst wr_en_data_arb de",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+444,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst wr_en_data_arb d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBus(c+145,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst wr_en_data_arb q",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+195,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst wr_en_data_arb wr_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+202,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst wr_en_data_arb wr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBus(c+145,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_control_rst wr_en_data_arb gen_w unused_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
        tracep->declBus(c+447,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running DW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+448,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running SWACCESS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+449,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+389,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+197,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+194,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running wd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+247,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running de",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+248,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+150,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running qe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+146,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBus(c+146,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running qs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+425,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running wr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+426,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running wr_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
        tracep->declBus(c+447,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running wr_en_data_arb DW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+448,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running wr_en_data_arb SWACCESS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBit(c+197,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running wr_en_data_arb we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+194,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running wr_en_data_arb wd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+247,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running wr_en_data_arb de",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+248,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running wr_en_data_arb d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBus(c+146,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running wr_en_data_arb q",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+425,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running wr_en_data_arb wr_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+426,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running wr_en_data_arb wr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBus(c+146,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_running wr_en_data_arb gen_w unused_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
        tracep->declBus(c+447,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done DW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+448,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done SWACCESS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBus(c+449,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done RESVAL",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 0,0);
        tracep->declBit(c+388,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+389,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+197,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+196,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done wd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+249,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done de",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+250,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+151,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done qe",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+147,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBus(c+147,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done qs",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+427,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done wr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
        tracep->declBus(c+428,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done wr_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
        tracep->declBus(c+447,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done wr_en_data_arb DW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+448,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done wr_en_data_arb SWACCESS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 15,0);
        tracep->declBit(c+197,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done wr_en_data_arb we",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+196,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done wr_en_data_arb wd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+249,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done wr_en_data_arb de",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+250,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done wr_en_data_arb d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBus(c+147,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done wr_en_data_arb q",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBit(c+427,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done wr_en_data_arb wr_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+428,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done wr_en_data_arb wr_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 0,0);
        tracep->declBus(c+147,"conv1d_tb_wrapper u_conv1d_obi u_conv1d_control_reg u_conv1d_control_reg_top u_status_done wr_en_data_arb gen_w unused_q",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 0,0);
        tracep->declBus(c+443,"conv1d_control_reg_pkg BlockAw",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
        tracep->declBus(c+450,"conv1d_control_reg_pkg CONV1D_CONTROL_CONTROL_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        tracep->declBus(c+451,"conv1d_control_reg_pkg CONV1D_CONTROL_STATUS_OFFSET",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+131+i*1,"conv1d_control_reg_pkg CONV1D_CONTROL_PERMIT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, true,(i+0), 3,0);}}
    }
}

void Vconv1d_tb_wrapper___024root__traceFullTop0(void* voidSelf, VerilatedFst* tracep) VL_ATTR_COLD;
void Vconv1d_tb_wrapper___024root__traceChgTop0(void* voidSelf, VerilatedFst* tracep);
void Vconv1d_tb_wrapper___024root__traceCleanup(void* voidSelf, VerilatedFst* /*unused*/);

void Vconv1d_tb_wrapper___024root__traceRegister(Vconv1d_tb_wrapper___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vconv1d_tb_wrapper___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vconv1d_tb_wrapper___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vconv1d_tb_wrapper___024root__traceCleanup, vlSelf);
    }
}

void Vconv1d_tb_wrapper___024root__traceFullSub0(Vconv1d_tb_wrapper___024root* vlSelf, VerilatedFst* tracep) VL_ATTR_COLD;

void Vconv1d_tb_wrapper___024root__traceFullTop0(void* voidSelf, VerilatedFst* tracep) {
    Vconv1d_tb_wrapper___024root* const __restrict vlSelf = static_cast<Vconv1d_tb_wrapper___024root*>(voidSelf);
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vconv1d_tb_wrapper___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vconv1d_tb_wrapper___024root__traceFullSub0(Vconv1d_tb_wrapper___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv1d_tb_wrapper__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0U]),32);
        tracep->fullIData(oldp+2,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[1U]),32);
        tracep->fullIData(oldp+3,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[2U]),32);
        tracep->fullIData(oldp+4,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[3U]),32);
        tracep->fullIData(oldp+5,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[4U]),32);
        tracep->fullIData(oldp+6,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[5U]),32);
        tracep->fullIData(oldp+7,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[6U]),32);
        tracep->fullIData(oldp+8,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[7U]),32);
        tracep->fullIData(oldp+9,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[8U]),32);
        tracep->fullIData(oldp+10,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[9U]),32);
        tracep->fullIData(oldp+11,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0xaU]),32);
        tracep->fullIData(oldp+12,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0xbU]),32);
        tracep->fullIData(oldp+13,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0xcU]),32);
        tracep->fullIData(oldp+14,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0xdU]),32);
        tracep->fullIData(oldp+15,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0xeU]),32);
        tracep->fullIData(oldp+16,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0xfU]),32);
        tracep->fullIData(oldp+17,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x10U]),32);
        tracep->fullIData(oldp+18,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x11U]),32);
        tracep->fullIData(oldp+19,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x12U]),32);
        tracep->fullIData(oldp+20,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x13U]),32);
        tracep->fullIData(oldp+21,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x14U]),32);
        tracep->fullIData(oldp+22,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x15U]),32);
        tracep->fullIData(oldp+23,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x16U]),32);
        tracep->fullIData(oldp+24,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x17U]),32);
        tracep->fullIData(oldp+25,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x18U]),32);
        tracep->fullIData(oldp+26,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x19U]),32);
        tracep->fullIData(oldp+27,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x1aU]),32);
        tracep->fullIData(oldp+28,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x1bU]),32);
        tracep->fullIData(oldp+29,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x1cU]),32);
        tracep->fullIData(oldp+30,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x1dU]),32);
        tracep->fullIData(oldp+31,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x1eU]),32);
        tracep->fullIData(oldp+32,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x1fU]),32);
        tracep->fullIData(oldp+33,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x20U]),32);
        tracep->fullIData(oldp+34,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x21U]),32);
        tracep->fullIData(oldp+35,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x22U]),32);
        tracep->fullIData(oldp+36,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x23U]),32);
        tracep->fullIData(oldp+37,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x24U]),32);
        tracep->fullIData(oldp+38,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x25U]),32);
        tracep->fullIData(oldp+39,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x26U]),32);
        tracep->fullIData(oldp+40,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x27U]),32);
        tracep->fullIData(oldp+41,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x28U]),32);
        tracep->fullIData(oldp+42,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x29U]),32);
        tracep->fullIData(oldp+43,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x2aU]),32);
        tracep->fullIData(oldp+44,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x2bU]),32);
        tracep->fullIData(oldp+45,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x2cU]),32);
        tracep->fullIData(oldp+46,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x2dU]),32);
        tracep->fullIData(oldp+47,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x2eU]),32);
        tracep->fullIData(oldp+48,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x2fU]),32);
        tracep->fullIData(oldp+49,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x30U]),32);
        tracep->fullIData(oldp+50,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x31U]),32);
        tracep->fullIData(oldp+51,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x32U]),32);
        tracep->fullIData(oldp+52,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x33U]),32);
        tracep->fullIData(oldp+53,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x34U]),32);
        tracep->fullIData(oldp+54,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x35U]),32);
        tracep->fullIData(oldp+55,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x36U]),32);
        tracep->fullIData(oldp+56,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x37U]),32);
        tracep->fullIData(oldp+57,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x38U]),32);
        tracep->fullIData(oldp+58,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x39U]),32);
        tracep->fullIData(oldp+59,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x3aU]),32);
        tracep->fullIData(oldp+60,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x3bU]),32);
        tracep->fullIData(oldp+61,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x3cU]),32);
        tracep->fullIData(oldp+62,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x3dU]),32);
        tracep->fullIData(oldp+63,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x3eU]),32);
        tracep->fullIData(oldp+64,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x3fU]),32);
        tracep->fullIData(oldp+65,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x40U]),32);
        tracep->fullIData(oldp+66,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x41U]),32);
        tracep->fullIData(oldp+67,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x42U]),32);
        tracep->fullIData(oldp+68,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x43U]),32);
        tracep->fullIData(oldp+69,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x44U]),32);
        tracep->fullIData(oldp+70,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x45U]),32);
        tracep->fullIData(oldp+71,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x46U]),32);
        tracep->fullIData(oldp+72,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x47U]),32);
        tracep->fullIData(oldp+73,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x48U]),32);
        tracep->fullIData(oldp+74,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x49U]),32);
        tracep->fullIData(oldp+75,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x4aU]),32);
        tracep->fullIData(oldp+76,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x4bU]),32);
        tracep->fullIData(oldp+77,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x4cU]),32);
        tracep->fullIData(oldp+78,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x4dU]),32);
        tracep->fullIData(oldp+79,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x4eU]),32);
        tracep->fullIData(oldp+80,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x4fU]),32);
        tracep->fullIData(oldp+81,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x50U]),32);
        tracep->fullIData(oldp+82,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x51U]),32);
        tracep->fullIData(oldp+83,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x52U]),32);
        tracep->fullIData(oldp+84,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x53U]),32);
        tracep->fullIData(oldp+85,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x54U]),32);
        tracep->fullIData(oldp+86,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x55U]),32);
        tracep->fullIData(oldp+87,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x56U]),32);
        tracep->fullIData(oldp+88,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x57U]),32);
        tracep->fullIData(oldp+89,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x58U]),32);
        tracep->fullIData(oldp+90,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x59U]),32);
        tracep->fullIData(oldp+91,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x5aU]),32);
        tracep->fullIData(oldp+92,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x5bU]),32);
        tracep->fullIData(oldp+93,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x5cU]),32);
        tracep->fullIData(oldp+94,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x5dU]),32);
        tracep->fullIData(oldp+95,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x5eU]),32);
        tracep->fullIData(oldp+96,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x5fU]),32);
        tracep->fullIData(oldp+97,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x60U]),32);
        tracep->fullIData(oldp+98,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x61U]),32);
        tracep->fullIData(oldp+99,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x62U]),32);
        tracep->fullIData(oldp+100,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x63U]),32);
        tracep->fullIData(oldp+101,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x64U]),32);
        tracep->fullIData(oldp+102,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x65U]),32);
        tracep->fullIData(oldp+103,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x66U]),32);
        tracep->fullIData(oldp+104,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x67U]),32);
        tracep->fullIData(oldp+105,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x68U]),32);
        tracep->fullIData(oldp+106,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x69U]),32);
        tracep->fullIData(oldp+107,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x6aU]),32);
        tracep->fullIData(oldp+108,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x6bU]),32);
        tracep->fullIData(oldp+109,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x6cU]),32);
        tracep->fullIData(oldp+110,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x6dU]),32);
        tracep->fullIData(oldp+111,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x6eU]),32);
        tracep->fullIData(oldp+112,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x6fU]),32);
        tracep->fullIData(oldp+113,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x70U]),32);
        tracep->fullIData(oldp+114,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x71U]),32);
        tracep->fullIData(oldp+115,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x72U]),32);
        tracep->fullIData(oldp+116,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x73U]),32);
        tracep->fullIData(oldp+117,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x74U]),32);
        tracep->fullIData(oldp+118,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x75U]),32);
        tracep->fullIData(oldp+119,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x76U]),32);
        tracep->fullIData(oldp+120,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x77U]),32);
        tracep->fullIData(oldp+121,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x78U]),32);
        tracep->fullIData(oldp+122,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x79U]),32);
        tracep->fullIData(oldp+123,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x7aU]),32);
        tracep->fullIData(oldp+124,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x7bU]),32);
        tracep->fullIData(oldp+125,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x7cU]),32);
        tracep->fullIData(oldp+126,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x7dU]),32);
        tracep->fullIData(oldp+127,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x7eU]),32);
        tracep->fullIData(oldp+128,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__init_val[0x7fU]),32);
        tracep->fullIData(oldp+129,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i),32);
        tracep->fullIData(oldp+130,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__proc_sram_init__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
        tracep->fullCData(oldp+131,(vlSymsp->TOP__conv1d_control_reg_pkg.__PVT__CONV1D_CONTROL_PERMIT[0]),4);
        tracep->fullCData(oldp+132,(vlSymsp->TOP__conv1d_control_reg_pkg.__PVT__CONV1D_CONTROL_PERMIT[1]),4);
        tracep->fullBit(oldp+133,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__reg2hw) 
                                         >> 3U))));
        tracep->fullIData(oldp+134,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk8__DOT__i),32);
        tracep->fullIData(oldp+135,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j),32);
        tracep->fullIData(oldp+136,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk10__DOT__i),32);
        tracep->fullIData(oldp+137,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j),32);
        tracep->fullIData(oldp+138,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk6__DOT__i),32);
        tracep->fullIData(oldp+139,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j),32);
        tracep->fullBit(oldp+140,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__reg2hw) 
                                         >> 3U))));
        tracep->fullBit(oldp+141,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__reg2hw) 
                                         >> 2U))));
        tracep->fullBit(oldp+142,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__reg2hw) 
                                         >> 1U))));
        tracep->fullBit(oldp+143,((1U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__reg2hw))));
        tracep->fullBit(oldp+144,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_control_start__q));
        tracep->fullBit(oldp+145,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_control_rst__q));
        tracep->fullBit(oldp+146,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_status_running__q));
        tracep->fullBit(oldp+147,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT____Vcellout__u_status_done__q));
        tracep->fullBit(oldp+148,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_control_start__DOT__qe));
        tracep->fullBit(oldp+149,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_control_rst__DOT__qe));
        tracep->fullBit(oldp+150,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_status_running__DOT__qe));
        tracep->fullBit(oldp+151,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__u_status_done__DOT__qe));
        tracep->fullBit(oldp+152,((1U & (vlSelf->conv1d_tb_wrapper__DOT__obi_req[2U] 
                                         >> 5U))));
        tracep->fullBit(oldp+153,((1U & (vlSelf->conv1d_tb_wrapper__DOT__obi_req[2U] 
                                         >> 4U))));
        tracep->fullCData(oldp+154,((0xfU & vlSelf->conv1d_tb_wrapper__DOT__obi_req[2U])),4);
        tracep->fullIData(oldp+155,(vlSelf->conv1d_tb_wrapper__DOT__obi_req[1U]),32);
        tracep->fullIData(oldp+156,(vlSelf->conv1d_tb_wrapper__DOT__obi_req[0U]),32);
        tracep->fullBit(oldp+157,((1U & (IData)((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__u_obi_bridge__obi_rsp_o 
                                                 >> 0x21U)))));
        tracep->fullBit(oldp+158,((1U & (IData)((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__u_obi_bridge__obi_rsp_o 
                                                 >> 0x20U)))));
        tracep->fullIData(oldp+159,((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__u_obi_bridge__obi_rsp_o)),32);
        tracep->fullBit(oldp+160,((1U & (vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U] 
                                         >> 5U))));
        tracep->fullBit(oldp+161,((1U & (vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U] 
                                         >> 4U))));
        tracep->fullCData(oldp+162,((0xfU & vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U])),4);
        tracep->fullIData(oldp+163,(vlSelf->conv1d_tb_wrapper__DOT__reg_req[1U]),32);
        tracep->fullIData(oldp+164,(vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U]),32);
        tracep->fullBit(oldp+165,((1U & (IData)((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_intf_rsp 
                                                 >> 0x21U)))));
        tracep->fullBit(oldp+166,((1U & (IData)((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_intf_rsp 
                                                 >> 0x20U)))));
        tracep->fullIData(oldp+167,((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_intf_rsp)),32);
        tracep->fullBit(oldp+168,((1U & (vlSelf->conv1d_tb_wrapper__DOT__obi_req[2U] 
                                         >> 5U))));
        tracep->fullBit(oldp+169,((1U & (vlSelf->conv1d_tb_wrapper__DOT__obi_req[2U] 
                                         >> 4U))));
        tracep->fullCData(oldp+170,((0xfU & vlSelf->conv1d_tb_wrapper__DOT__obi_req[2U])),4);
        tracep->fullIData(oldp+171,(vlSelf->conv1d_tb_wrapper__DOT__obi_req[1U]),32);
        tracep->fullIData(oldp+172,(vlSelf->conv1d_tb_wrapper__DOT__obi_req[0U]),32);
        tracep->fullBit(oldp+173,((1U & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U] 
                                         >> 5U))));
        tracep->fullBit(oldp+174,((1U & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U] 
                                         >> 4U))));
        tracep->fullCData(oldp+175,((0xfU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])),4);
        tracep->fullIData(oldp+176,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U]),32);
        tracep->fullIData(oldp+177,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U]),32);
        tracep->fullBit(oldp+178,((1U & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U] 
                                         >> 5U))));
        tracep->fullBit(oldp+179,((1U & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U] 
                                         >> 4U))));
        tracep->fullCData(oldp+180,((0x7fU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U])),7);
        tracep->fullIData(oldp+181,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U]),32);
        tracep->fullCData(oldp+182,((0xfU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])),4);
        tracep->fullCData(oldp+183,((0x7fU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U])),7);
        tracep->fullIData(oldp+184,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[0U]),32);
        tracep->fullCData(oldp+185,((0xfU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U])),4);
        tracep->fullBit(oldp+186,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_we));
        tracep->fullBit(oldp+187,((1U & ((vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U] 
                                          >> 5U) & 
                                         (~ (vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U] 
                                             >> 4U))))));
        tracep->fullCData(oldp+188,((7U & vlSelf->conv1d_tb_wrapper__DOT__reg_req[1U])),3);
        tracep->fullIData(oldp+189,(vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U]),32);
        tracep->fullCData(oldp+190,((0xfU & vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U])),4);
        tracep->fullIData(oldp+191,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_rdata_next),32);
        tracep->fullBit(oldp+192,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__wr_err));
        tracep->fullBit(oldp+193,((1U & ((((vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U] 
                                            >> 5U) 
                                           & (~ (vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U] 
                                                 >> 4U))) 
                                          | (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__reg_we)) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__addr_hit))))))));
        tracep->fullBit(oldp+194,((1U & vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U])));
        tracep->fullBit(oldp+195,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__control_rst_we));
        tracep->fullBit(oldp+196,((1U & (vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U] 
                                         >> 1U))));
        tracep->fullBit(oldp+197,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__status_done_we));
        tracep->fullCData(oldp+198,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__addr_hit),2);
        tracep->fullBit(oldp+199,((1U & VL_REDXOR_32(
                                                     vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U]))));
        tracep->fullBit(oldp+200,((1U & VL_REDXOR_32(
                                                     (0xfU 
                                                      & vlSelf->conv1d_tb_wrapper__DOT__reg_req[2U])))));
        tracep->fullBit(oldp+201,(((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__control_rst_we) 
                                   & vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U])));
        tracep->fullBit(oldp+202,(((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__control_rst_we) 
                                   & (vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U] 
                                      >> 1U))));
        tracep->fullBit(oldp+203,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__ker_tc4));
        tracep->fullBit(oldp+204,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__ker_tc20));
        tracep->fullIData(oldp+205,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_ker_o),32);
        tracep->fullCData(oldp+206,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_A),8);
        tracep->fullCData(oldp+207,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_B),8);
        tracep->fullCData(oldp+208,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_A),8);
        tracep->fullCData(oldp+209,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_B),8);
        tracep->fullCData(oldp+210,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_A),8);
        tracep->fullCData(oldp+211,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_B),8);
        tracep->fullCData(oldp+212,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_A),8);
        tracep->fullCData(oldp+213,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_B),8);
        tracep->fullSData(oldp+214,((0xffffU & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_A) 
                                                * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_B)))),16);
        tracep->fullSData(oldp+215,((0xffffU & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_A) 
                                                * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_B)))),16);
        tracep->fullSData(oldp+216,((0xffffU & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_A) 
                                                * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_B)))),16);
        tracep->fullSData(oldp+217,((0xffffU & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_A) 
                                                * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_B)))),16);
        tracep->fullIData(oldp+218,((0x1ffffU & ((0xffffU 
                                                  & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_A) 
                                                     * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m0_B))) 
                                                 + 
                                                 (0xffffU 
                                                  & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_A) 
                                                     * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m1_B)))))),17);
        tracep->fullIData(oldp+219,((0x1ffffU & ((0xffffU 
                                                  & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_A) 
                                                     * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m2_B))) 
                                                 + 
                                                 (0xffffU 
                                                  & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_A) 
                                                     * (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__m3_B)))))),17);
        tracep->fullIData(oldp+220,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out),18);
        tracep->fullIData(oldp+221,(((0x20000U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out)
                                      ? (0xfffc0000U 
                                         | vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out)
                                      : vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out)),32);
        tracep->fullBit(oldp+222,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__done));
        tracep->fullBit(oldp+223,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__done_e));
        tracep->fullBit(oldp+224,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running));
        tracep->fullBit(oldp+225,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__running_e));
        tracep->fullBit(oldp+226,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__ext_mem_gnt));
        tracep->fullBit(oldp+227,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_req));
        tracep->fullBit(oldp+228,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT____Vcellout__hw_accellerator__accel_mem_we));
        tracep->fullBit(oldp+229,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_en));
        tracep->fullBit(oldp+230,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_ker_rst_n));
        tracep->fullBit(oldp+231,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_ld));
        tracep->fullBit(oldp+232,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_en));
        tracep->fullBit(oldp+233,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_inp_rst_n));
        tracep->fullBit(oldp+234,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_en));
        tracep->fullBit(oldp+235,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__cnt_out_rst_n));
        tracep->fullBit(oldp+236,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu_rst_n));
        tracep->fullBit(oldp+237,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_ker_ld));
        tracep->fullBit(oldp+238,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_in_ld));
        tracep->fullBit(oldp+239,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_ld));
        tracep->fullBit(oldp+240,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_sum_rst_n));
        tracep->fullCData(oldp+241,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel),2);
        tracep->fullIData(oldp+242,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__cur_state),32);
        tracep->fullBit(oldp+243,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                                         >> 3U))));
        tracep->fullBit(oldp+244,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                                         >> 2U))));
        tracep->fullBit(oldp+245,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                                         >> 1U))));
        tracep->fullBit(oldp+246,((1U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg))));
        tracep->fullBit(oldp+247,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                                         >> 2U))));
        tracep->fullBit(oldp+248,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                                         >> 3U))));
        tracep->fullBit(oldp+249,((1U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg))));
        tracep->fullBit(oldp+250,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                                         >> 1U))));
        tracep->fullBit(oldp+251,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__rst_n));
        tracep->fullIData(oldp+252,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q),32);
        tracep->fullCData(oldp+253,((0xffU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q)),8);
        tracep->fullCData(oldp+254,((0xffU & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q 
                                              >> 8U))),8);
        tracep->fullCData(oldp+255,((0xffU & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+256,((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q 
                                     >> 0x18U)),8);
        tracep->fullIData(oldp+257,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__rdata_q),32);
        tracep->fullIData(oldp+258,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0U]),32);
        tracep->fullIData(oldp+259,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[1U]),32);
        tracep->fullIData(oldp+260,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[2U]),32);
        tracep->fullIData(oldp+261,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[3U]),32);
        tracep->fullIData(oldp+262,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[4U]),32);
        tracep->fullIData(oldp+263,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[5U]),32);
        tracep->fullIData(oldp+264,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[6U]),32);
        tracep->fullIData(oldp+265,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[7U]),32);
        tracep->fullIData(oldp+266,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[8U]),32);
        tracep->fullIData(oldp+267,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[9U]),32);
        tracep->fullIData(oldp+268,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0xaU]),32);
        tracep->fullIData(oldp+269,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0xbU]),32);
        tracep->fullIData(oldp+270,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0xcU]),32);
        tracep->fullIData(oldp+271,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0xdU]),32);
        tracep->fullIData(oldp+272,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0xeU]),32);
        tracep->fullIData(oldp+273,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0xfU]),32);
        tracep->fullIData(oldp+274,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x10U]),32);
        tracep->fullIData(oldp+275,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x11U]),32);
        tracep->fullIData(oldp+276,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x12U]),32);
        tracep->fullIData(oldp+277,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x13U]),32);
        tracep->fullIData(oldp+278,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x14U]),32);
        tracep->fullIData(oldp+279,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x15U]),32);
        tracep->fullIData(oldp+280,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x16U]),32);
        tracep->fullIData(oldp+281,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x17U]),32);
        tracep->fullIData(oldp+282,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x18U]),32);
        tracep->fullIData(oldp+283,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x19U]),32);
        tracep->fullIData(oldp+284,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x1aU]),32);
        tracep->fullIData(oldp+285,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x1bU]),32);
        tracep->fullIData(oldp+286,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x1cU]),32);
        tracep->fullIData(oldp+287,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x1dU]),32);
        tracep->fullIData(oldp+288,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x1eU]),32);
        tracep->fullIData(oldp+289,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x1fU]),32);
        tracep->fullIData(oldp+290,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x20U]),32);
        tracep->fullIData(oldp+291,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x21U]),32);
        tracep->fullIData(oldp+292,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x22U]),32);
        tracep->fullIData(oldp+293,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x23U]),32);
        tracep->fullIData(oldp+294,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x24U]),32);
        tracep->fullIData(oldp+295,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x25U]),32);
        tracep->fullIData(oldp+296,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x26U]),32);
        tracep->fullIData(oldp+297,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x27U]),32);
        tracep->fullIData(oldp+298,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x28U]),32);
        tracep->fullIData(oldp+299,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x29U]),32);
        tracep->fullIData(oldp+300,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x2aU]),32);
        tracep->fullIData(oldp+301,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x2bU]),32);
        tracep->fullIData(oldp+302,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x2cU]),32);
        tracep->fullIData(oldp+303,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x2dU]),32);
        tracep->fullIData(oldp+304,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x2eU]),32);
        tracep->fullIData(oldp+305,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x2fU]),32);
        tracep->fullIData(oldp+306,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x30U]),32);
        tracep->fullIData(oldp+307,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x31U]),32);
        tracep->fullIData(oldp+308,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x32U]),32);
        tracep->fullIData(oldp+309,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x33U]),32);
        tracep->fullIData(oldp+310,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x34U]),32);
        tracep->fullIData(oldp+311,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x35U]),32);
        tracep->fullIData(oldp+312,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x36U]),32);
        tracep->fullIData(oldp+313,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x37U]),32);
        tracep->fullIData(oldp+314,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x38U]),32);
        tracep->fullIData(oldp+315,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x39U]),32);
        tracep->fullIData(oldp+316,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x3aU]),32);
        tracep->fullIData(oldp+317,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x3bU]),32);
        tracep->fullIData(oldp+318,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x3cU]),32);
        tracep->fullIData(oldp+319,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x3dU]),32);
        tracep->fullIData(oldp+320,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x3eU]),32);
        tracep->fullIData(oldp+321,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x3fU]),32);
        tracep->fullIData(oldp+322,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x40U]),32);
        tracep->fullIData(oldp+323,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x41U]),32);
        tracep->fullIData(oldp+324,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x42U]),32);
        tracep->fullIData(oldp+325,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x43U]),32);
        tracep->fullIData(oldp+326,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x44U]),32);
        tracep->fullIData(oldp+327,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x45U]),32);
        tracep->fullIData(oldp+328,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x46U]),32);
        tracep->fullIData(oldp+329,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x47U]),32);
        tracep->fullIData(oldp+330,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x48U]),32);
        tracep->fullIData(oldp+331,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x49U]),32);
        tracep->fullIData(oldp+332,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x4aU]),32);
        tracep->fullIData(oldp+333,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x4bU]),32);
        tracep->fullIData(oldp+334,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x4cU]),32);
        tracep->fullIData(oldp+335,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x4dU]),32);
        tracep->fullIData(oldp+336,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x4eU]),32);
        tracep->fullIData(oldp+337,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x4fU]),32);
        tracep->fullIData(oldp+338,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x50U]),32);
        tracep->fullIData(oldp+339,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x51U]),32);
        tracep->fullIData(oldp+340,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x52U]),32);
        tracep->fullIData(oldp+341,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x53U]),32);
        tracep->fullIData(oldp+342,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x54U]),32);
        tracep->fullIData(oldp+343,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x55U]),32);
        tracep->fullIData(oldp+344,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x56U]),32);
        tracep->fullIData(oldp+345,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x57U]),32);
        tracep->fullIData(oldp+346,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x58U]),32);
        tracep->fullIData(oldp+347,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x59U]),32);
        tracep->fullIData(oldp+348,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x5aU]),32);
        tracep->fullIData(oldp+349,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x5bU]),32);
        tracep->fullIData(oldp+350,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x5cU]),32);
        tracep->fullIData(oldp+351,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x5dU]),32);
        tracep->fullIData(oldp+352,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x5eU]),32);
        tracep->fullIData(oldp+353,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x5fU]),32);
        tracep->fullIData(oldp+354,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x60U]),32);
        tracep->fullIData(oldp+355,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x61U]),32);
        tracep->fullIData(oldp+356,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x62U]),32);
        tracep->fullIData(oldp+357,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x63U]),32);
        tracep->fullIData(oldp+358,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x64U]),32);
        tracep->fullIData(oldp+359,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x65U]),32);
        tracep->fullIData(oldp+360,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x66U]),32);
        tracep->fullIData(oldp+361,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x67U]),32);
        tracep->fullIData(oldp+362,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x68U]),32);
        tracep->fullIData(oldp+363,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x69U]),32);
        tracep->fullIData(oldp+364,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x6aU]),32);
        tracep->fullIData(oldp+365,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x6bU]),32);
        tracep->fullIData(oldp+366,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x6cU]),32);
        tracep->fullIData(oldp+367,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x6dU]),32);
        tracep->fullIData(oldp+368,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x6eU]),32);
        tracep->fullIData(oldp+369,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x6fU]),32);
        tracep->fullIData(oldp+370,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x70U]),32);
        tracep->fullIData(oldp+371,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x71U]),32);
        tracep->fullIData(oldp+372,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x72U]),32);
        tracep->fullIData(oldp+373,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x73U]),32);
        tracep->fullIData(oldp+374,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x74U]),32);
        tracep->fullIData(oldp+375,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x75U]),32);
        tracep->fullIData(oldp+376,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x76U]),32);
        tracep->fullIData(oldp+377,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x77U]),32);
        tracep->fullIData(oldp+378,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x78U]),32);
        tracep->fullIData(oldp+379,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x79U]),32);
        tracep->fullIData(oldp+380,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x7aU]),32);
        tracep->fullIData(oldp+381,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x7bU]),32);
        tracep->fullIData(oldp+382,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x7cU]),32);
        tracep->fullIData(oldp+383,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x7dU]),32);
        tracep->fullIData(oldp+384,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x7eU]),32);
        tracep->fullIData(oldp+385,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[0x7fU]),32);
        tracep->fullCData(oldp+386,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q),7);
        tracep->fullIData(oldp+387,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__unnamedblk5__DOT__i),32);
        tracep->fullBit(oldp+388,(vlSelf->clk_i));
        tracep->fullBit(oldp+389,(vlSelf->rst_ni));
        tracep->fullBit(oldp+390,(vlSelf->obi_req_i));
        tracep->fullBit(oldp+391,(vlSelf->obi_we_i));
        tracep->fullCData(oldp+392,(vlSelf->obi_be_i),4);
        tracep->fullIData(oldp+393,(vlSelf->obi_addr_i),32);
        tracep->fullIData(oldp+394,(vlSelf->obi_wdata_i),32);
        tracep->fullBit(oldp+395,(vlSelf->obi_gnt_o));
        tracep->fullBit(oldp+396,(vlSelf->obi_rvalid_o));
        tracep->fullIData(oldp+397,(vlSelf->obi_rdata_o),32);
        tracep->fullBit(oldp+398,(vlSelf->reg_valid_i));
        tracep->fullBit(oldp+399,(vlSelf->reg_write_i));
        tracep->fullCData(oldp+400,(vlSelf->reg_wstrb_i),4);
        tracep->fullIData(oldp+401,(vlSelf->reg_addr_i),32);
        tracep->fullIData(oldp+402,(vlSelf->reg_wdata_i),32);
        tracep->fullBit(oldp+403,(vlSelf->reg_error_o));
        tracep->fullBit(oldp+404,(vlSelf->reg_ready_o));
        tracep->fullIData(oldp+405,(vlSelf->reg_rdata_o),32);
        tracep->fullBit(oldp+406,(vlSelf->done_int_o));
        tracep->fullBit(oldp+407,((1U & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2U] 
                                         >> 5U))));
        tracep->fullBit(oldp+408,((1U & (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2U] 
                                         >> 4U))));
        tracep->fullCData(oldp+409,((0xfU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[2U])),4);
        tracep->fullIData(oldp+410,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[1U]),32);
        tracep->fullIData(oldp+411,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__int_mem_req[0U]),32);
        tracep->fullIData(oldp+412,(((2U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel))
                                      ? ((1U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel))
                                          ? 0U : vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_out_o)
                                      : ((1U & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__mux_addr_sel))
                                          ? vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_inp_o
                                          : vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_ker_o))),32);
        tracep->fullIData(oldp+413,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A3_B),32);
        tracep->fullBit(oldp+414,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_ld));
        tracep->fullBit(oldp+415,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__reg_init_cnt_inp_rst_n));
        tracep->fullBit(oldp+416,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__out_tc127));
        tracep->fullIData(oldp+417,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_inp_o),32);
        tracep->fullIData(oldp+418,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__reg_out),32);
        tracep->fullIData(oldp+419,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__pointr__DOT__cnt_out_o),32);
        tracep->fullIData(oldp+420,((((0x20000U & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out)
                                       ? (0xfffc0000U 
                                          | vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out)
                                       : vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A2_out) 
                                     + vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__alu__DOT__A3_B)),32);
        tracep->fullIData(oldp+421,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__hw_accellerator__DOT__control_unit__DOT__next_state),32);
        tracep->fullBit(oldp+422,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_obi_bridge__DOT__obi_rvalid[0]));
        tracep->fullBit(oldp+423,(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_obi_bridge__DOT__obi_rvalid[1]));
        tracep->fullIData(oldp+424,(((1U & ((vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U] 
                                             >> 5U) 
                                            & (~ (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[2U] 
                                                  >> 4U))))
                                      ? vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                                     (0x7fU & vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__mem_req[1U])]
                                      : (((0U == (0x1fU 
                                                  & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q) 
                                                     << 5U)))
                                           ? 0U : (
                                                   vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                                                   (((IData)(0x1fU) 
                                                     + 
                                                     (0xfffU 
                                                      & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q) 
                                                         << 5U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q) 
                                                        << 5U))))) 
                                         | (vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__sram[
                                            (0x7fU 
                                             & (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q))] 
                                            >> (0x1fU 
                                                & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d__DOT__u_internal_mem__DOT__u_tc_sram__DOT__r_addr_q) 
                                                   << 5U)))))),32);
        tracep->fullBit(oldp+425,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__status_done_we) 
                                         | ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                                            >> 2U)))));
        tracep->fullBit(oldp+426,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__status_done_we)
                                          ? vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U]
                                          : ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                                             >> 3U)))));
        tracep->fullBit(oldp+427,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__status_done_we) 
                                         | (IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg)))));
        tracep->fullBit(oldp+428,((1U & ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__u_conv1d_control_reg_top__DOT__status_done_we)
                                          ? (vlSelf->conv1d_tb_wrapper__DOT__reg_req[0U] 
                                             >> 1U)
                                          : ((IData)(vlSelf->conv1d_tb_wrapper__DOT__u_conv1d_obi__DOT__u_conv1d_control_reg__DOT__hw2reg) 
                                             >> 1U)))));
        tracep->fullIData(oldp+429,(0x80U),32);
        tracep->fullIData(oldp+430,(7U),32);
        tracep->fullIData(oldp+431,(8U),32);
        tracep->fullIData(oldp+432,(0x20U),32);
        tracep->fullIData(oldp+433,(0x10U),32);
        tracep->fullIData(oldp+434,(0x11U),32);
        tracep->fullIData(oldp+435,(0x12U),32);
        tracep->fullIData(oldp+436,(1U),32);
        tracep->fullIData(oldp+437,(0x20U),32);
        tracep->fullIData(oldp+438,(8U),32);
        tracep->fullIData(oldp+439,(0x6e6f6e65U),32);
        tracep->fullBit(oldp+440,(0U));
        tracep->fullIData(oldp+441,(4U),32);
        tracep->fullIData(oldp+442,(0U),32);
        tracep->fullIData(oldp+443,(3U),32);
        tracep->fullBit(oldp+444,(0U));
        tracep->fullIData(oldp+445,(0x20U),32);
        tracep->fullIData(oldp+446,(4U),32);
        tracep->fullIData(oldp+447,(1U),32);
        tracep->fullSData(oldp+448,(0x5257U),16);
        tracep->fullBit(oldp+449,(0U));
        tracep->fullCData(oldp+450,(0U),3);
        tracep->fullCData(oldp+451,(4U),3);
    }
}
