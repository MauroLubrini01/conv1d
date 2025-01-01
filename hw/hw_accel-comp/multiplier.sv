module multiplier #(
  parameter N = 8
) (
  input signed [    N-1:0] a,
  input signed [    N-1:0] b,
  output signed [(N*2)-1:0] p
);

  assign p = a * b;

endmodule
