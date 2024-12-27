module adder #(
  parameter N = 16
) (
  input  [N-1:0] a,
  input  [N-1:0] b,
  output [  N:0] s
);

  assign s = a + b;

endmodule
