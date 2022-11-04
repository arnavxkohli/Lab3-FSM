module challenge #(
    parameter WIDTH = 16
)(
    input  logic             clk,
    input  logic             rst,  
    input  logic             en,      
    input  logic [WIDTH-1:0] N,     	
    output logic [7:0] out
);

    logic tick;

clktick myclk(
    .clk(clk),
    .rst(rst),
    .en(en),
    .N(N),
    .tick(tick)
);

f1_fsm myfsm(
    .clk(clk),
    .rst(rst),
    .en(tick),
    .out(out)
);

endmodule
