module lfsr4 (
    input logic clk, // clock
    input logic rst, // reset, always needed for default state
    input logic en,
    output logic [7:1] data_out // output of shift register
);

    logic[7:1] sreg; // shift register

always_ff @(posedge clk, posedge rst) // asynchronous reset
    if (rst)
        sreg <= 7'b1;
    else if (en)
        sreg <= {sreg[6:1], sreg[7]^sreg[3]}; // according to primitive polynomial

assign data_out = sreg;
endmodule
    
