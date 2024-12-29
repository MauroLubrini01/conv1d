// Copyright 2024 Politecnico di Torino.
// Copyright and related rights are licensed under the Solderpad Hardware
// License, Version 2.0 (the "License"); you may not use this file except in
// compliance with the License. You may obtain a copy of the License at
// http://solderpad.org/licenses/SHL-2.0. Unless required by applicable law
// or agreed to in writing, software, hardware and materials distributed under
// this License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.
//
// File: cnt.sv
// Author(s):
//   Luigi Giuffrida
//   Michele Caon
// Date: 08/11/2024
// Description: conv1d accelerator top module

module conv1d (
  /* verilator lint_off UNUSED */  // TODO: Remove this line when the signal is used
  /* verilator lint_off UNOPTFLAT */
  input logic clk_i,
  input logic rst_ni,

  // Interface towards internal memory
  input  conv1d_obi_pkg::obi_req_t  mem_req_i,
  output conv1d_obi_pkg::obi_resp_t mem_rsp_o,

  // TODO: add here other interface signals (e.g., from the config. registers)

  input  logic start,
  input  logic rst_n,
  output logic done,
  output logic done_e,
  output logic running,
  output logic running_e


);
  // PARAMETERS
  localparam int unsigned NumWords = 32'd128;  // DO NOT CHANGE THIS!
  localparam int unsigned AddrWidth = (NumWords > 32'd1) ? unsigned'($clog2(NumWords)) : 32'd1;

  // INTERNAL SIGNALS
  // ----------------
  // Memory multiplexer signals
  conv1d_sram_pkg::sram_req_t int_mem_req, ext_mem_req, mem_req;
  conv1d_sram_pkg::sram_rsp_t mem_rsp;
  logic                       ext_mem_gnt;
  logic rstn; //general reset signal (combining the external reset with the control_reg reset))


  // ---------------------
  // INTERNAL ARCHITECTURE
  // ---------------------
  // TODO: write here your code, you are encouraged to use a hierarchical (but not too hierarchical) approach.
  // The internal memory available to the accelerator as a data buffer has been
  // already instantiated below.

  assign rstn = rst_ni & rst_n;

  accel hw_accellerator (
    .accel_start    (start),
    .clk            (clk_i),
    .rst_n          (rstn),
    .accel_in_data  (mem_rsp.rdata),
    .accel_done     (done),
    .accel_done_e   (done_e),
    .accel_running  (running),
    .accel_running_e(running_e),
    .accel_mem_req  (int_mem_req.req),
    .accel_mem_we   (int_mem_req.we),
    .accel_ext_sel  (ext_mem_gnt),
    .accel_addr     (int_mem_req.addr),
    .accel_result   (int_mem_req.wdata)
  );


  // TODO: connect the following signal to the accelerator's memory request
  // generation logic.
  assign int_mem_req = '{
          req: int_mem_req.req,
          we: int_mem_req.we,
          be: {1'b1, 1'b1, 1'b1, 1'b1},
          addr: int_mem_req.addr,
          wdata: int_mem_req.wdata
      };

  // Internal memory
  // ---------------
  // Internal memory request multiplexer
  // Because the same, single-port memory must be accessed both through the
  // GR-HEEP bus (host CPU/DMA) and by the accelerator internal hardware, a
  // multiplexer is used to arbitrate between the two.
  // TODO: change the following assignment to be low when the internal memory is
  // being used by the accelerator, so that external requests are not granted npr
  // propagated to the memory instance.

  // Internal memory multiplexer
  always_comb begin : mem_req_mux
    if (ext_mem_gnt) begin
      mem_req = ext_mem_req;
    end else begin
      mem_req = int_mem_req;
    end
  end

  // OBI to SRAM bridge
  conv1d_obi_to_sram_gnt #(
    .obi_req_t (conv1d_obi_pkg::obi_req_t),
    .obi_resp_t(conv1d_obi_pkg::obi_resp_t),
    .sram_req_t(conv1d_sram_pkg::sram_req_t),
    .sram_rsp_t(conv1d_sram_pkg::sram_rsp_t)
  ) u_obi_bridge (
    .clk_i     (clk_i),
    .rst_ni    (rstn),
    .obi_req_i (mem_req_i),
    .obi_rsp_o (mem_rsp_o),
    .sram_req_o(ext_mem_req),
    .sram_gnt_i(ext_mem_gnt),
    .sram_rsp_i(mem_rsp)
  );

  // Internal memory instance
  // NOTE: you may choose to instantiate two internal memories, each half the
  // size of this one (i.e., 64 words as the first parameter) to implement
  // double buffering.
  conv1d_sram_wrapper #(
    .NUM_WORDS (NumWords),
    .DATA_WIDTH(32'd32)
  ) u_internal_mem (
    .clk_i  (clk_i),
    .rst_ni (rstn),
    .req_i  (mem_req.req),
    .we_i   (mem_req.we),
    .addr_i (mem_req.addr[AddrWidth-1:0]),
    .wdata_i(mem_req.wdata),
    .be_i   (mem_req.be),
    .rdata_o(mem_rsp.rdata)
  );

endmodule
