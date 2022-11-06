module clktick #(
)(
  input logic tick, time_out, s, 
  output logic en
);

  assign y = s ? tick : time_out;

endmodule
