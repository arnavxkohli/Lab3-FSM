module lfsr4 (
    input logic clk, // clock
    input logic rst, // reset, always needed for default state
    output logic [4:1] data_out // output of shift register
);

    logic[4:1] sreg; // shift register

always_ff @(posedge clk, posedge rst) // asynchronous reset
    if (rst)
        sreg <= 4b'1;
    else 
        sreg <= {sreg[3:1], sreg[4]^sreg[3]};

assign data_out = sreg;
endmodule
    
