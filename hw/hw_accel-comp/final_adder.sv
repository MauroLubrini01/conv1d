module final_adder #(
  parameter N = 16
) (
  input signed [N-1:0] a,
  input signed [N-1:0] b,
  output signed [N-1:0] s
);
  assign s = a + b;
endmodule
