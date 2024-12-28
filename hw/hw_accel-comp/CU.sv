typedef enum {
  STATE_0, STATE_1, STATE_2, STATE_3, STATE_4, STATE_5, STATE_6, STATE_7,
  STATE_8, STATE_9, STATE_10, STATE_11, STATE_12, STATE_13, STATE_14, 
  STATE_15, IDLE
} state;

module CU (
  input logic clk, rst_n, start,
					//pointer signals
					ker_tc4, ker_tc20, out_tc127,
					
  output logic done,
					//mem signals
					mem_req, mem_we,
					//Alu signals
					alu_rst_n,
					reg_ker0_ld, reg_ker1_ld, reg_ker2_ld, reg_ker3_ld, 
					reg_in0_ld, reg_in1_ld, reg_in2_ld, reg_in3_ld, 
					reg_sum_ld,
					
					//pointer signals
					reg_init_cnt_inp_ld, reg_init_cnt_inp_rst_n,
					cnt_inp_en, cnt_inp_ld, cnt_inp_rst_n,
					cnt_ker_en, cnt_ker_rst_n, 
					cnt_out_en, cnt_out_rst_n,
					
					
	output logic [1:0] mux_addr_sel
);

state cur_state, next_state;

always @ (posedge clk or negedge rst_n) begin
  if (! rst_n) begin
    cur_state <= IDLE;
  end
  else begin
    cur_state <= next_state;
  end
end

// Combinational always block for next state logic

always @(*) begin
    // Default next state assignment
	 mem_req=1'b0;
	 mem_we=1'b0;
				
	 reg_sum_ld=1'b0;
				
	 cnt_ker_rst_n=1'b1;
	 cnt_ker_en=1'b0;
	 reg_init_cnt_inp_rst_n=1'b1;
	 reg_init_cnt_inp_ld=1'b0;
				
	 cnt_inp_rst_n=1'b1;
	 cnt_inp_ld=1'b0;
	 cnt_inp_en=1'b0;
	 cnt_out_rst_n=1'b1;
	 cnt_out_en=1'b0;
	 mux_addr_sel='0;
				
	 alu_rst_n=1'b1;
				
	 reg_ker0_ld=1'b0;
	 reg_ker1_ld=1'b0;
	 reg_ker2_ld=1'b0;
	 reg_ker3_ld=1'b0;
				
	 reg_in0_ld=1'b0;
	 reg_in1_ld=1'b0;
	 reg_in2_ld=1'b0;
	 reg_in3_ld=1'b0;
	 done=1'b0;
    case (cur_state)
        IDLE: begin
            next_state = start ? STATE_0 : IDLE;
				mem_req=1'b0;
				mem_we=1'b0;
				
				reg_sum_ld=1'b0;
				
				cnt_ker_rst_n=1'b0;
				reg_init_cnt_inp_rst_n=1'b0;
				reg_init_cnt_inp_ld=1'b0;
				
				cnt_inp_rst_n=1'b0;
				cnt_inp_ld=1'b0;
				cnt_out_rst_n=1'b0;
				cnt_out_en=1'b0;
				mux_addr_sel='0;
				
				alu_rst_n=1'b0;
				
				reg_ker0_ld=1'b0;
				reg_ker1_ld=1'b0;
				reg_ker2_ld=1'b0;
				reg_ker3_ld=1'b0;
				
				reg_in0_ld=1'b0;
				reg_in1_ld=1'b0;
				reg_in2_ld=1'b0;
				reg_in3_ld=1'b0;	
				
				done=1'b0;
		  end
						  
        STATE_0: begin
				next_state = STATE_1; 
				mux_addr_sel={1'b0, 1'b0};
				mem_req=1'b1;
				mem_we=1'b0;
				end
				
		  STATE_1: begin 
				next_state = STATE_2; 
				reg_ker0_ld= 1'b1;
				reg_ker1_ld= 1'b1;
				reg_ker2_ld= 1'b1;
				reg_ker3_ld= 1'b1;
				end
				
		  STATE_2: begin
				next_state = STATE_3;
				mux_addr_sel={1'b0, 1'b1};
				cnt_inp_en=1'b1;
				cnt_ker_en=1'b1;
				mem_req=1'b1;
				mem_we=1'b0;
				end
				
		  STATE_3: begin 
				next_state = !ker_tc4 ? STATE_4 : STATE_8;
				reg_in0_ld=1'b1;
				reg_in1_ld=1'b1;
				reg_in2_ld=1'b1;
				reg_in3_ld=1'b1;
				reg_sum_ld=1'b1;
		  end
								 
		  STATE_4: begin
				next_state = STATE_5;
				mux_addr_sel=2'b0;
				mem_req= 1'b1;
				mem_we=1'b0;
				end
		  
		  STATE_5: begin
				next_state = STATE_6;
				reg_ker0_ld= 1'b1;
				reg_ker1_ld= 1'b1;
				reg_ker2_ld= 1'b1;
				reg_ker3_ld= 1'b1;
				end
				
		  STATE_6: begin
				next_state = STATE_7;
				mux_addr_sel={1'b0, 1'b1};
				mem_req=1'b1;
				mem_we=1'b0;
				cnt_inp_en=1'b1;
				cnt_ker_en=1'b1;
				
				end
				
				
		  STATE_7:  begin 
				next_state = !ker_tc4 ? STATE_4 : STATE_8;
				reg_in0_ld=1'b1;
				reg_in1_ld=1'b1;
				reg_in2_ld=1'b1;
				reg_in3_ld=1'b1;		
				reg_sum_ld=1'b1;
				reg_init_cnt_inp_ld=1'b1;
				end			
							
		  STATE_8: begin
			  next_state = STATE_9;
			  mux_addr_sel={1'b0, 1'b0};
			  mem_req=1'b1;
			  mem_we=1'b0; 
		  end
		  
		  STATE_9: begin
			  next_state = STATE_10;
			  reg_ker0_ld= 1'b1;
			  reg_ker1_ld= 1'b1;
			  reg_ker2_ld= 1'b1;
			  reg_ker3_ld= 1'b1;
		  end
		  
		  STATE_10: begin
				next_state = STATE_11;
				mux_addr_sel={1'b0, 1'b1};
				mem_req=1'b1;
				mem_we=1'b0;
				cnt_inp_en=1'b1;
				cnt_ker_en=1'b1;
		  end
		  
		  STATE_11: begin
				next_state = !ker_tc20 ? STATE_8 : STATE_12;
            reg_in0_ld=1'b1;
				reg_in1_ld=1'b1;
				reg_in2_ld=1'b1;
				reg_in3_ld=1'b1;		
				reg_sum_ld=1'b1;
		  end
						 
		  STATE_12: begin  
				next_state = STATE_13;
				mux_addr_sel={1'b1, 1'b0};
				mem_req=1'b1;
				mem_we=1'b0;
		  end
		  
		  STATE_13: begin
				next_state = STATE_14;
				cnt_out_en=1'b1;
				cnt_inp_ld=1'b1;
				cnt_ker_rst_n=1'b0;
		  end
				
		  STATE_14: begin
				next_state = out_tc127 ? STATE_15 : STATE_4;
		  end
		  
		  STATE_15: begin
				next_state = IDLE;
				done=1'b1;
		  end
		  
        default: begin
				next_state = IDLE;
		  end
    endcase
end

endmodule
