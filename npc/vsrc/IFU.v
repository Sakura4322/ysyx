// module ysyx_24090015_IFU#(WIDTH=32) (
//     input clk,
//     input [WIDTH-1:0] dnpc,
//     output reg[WIDTH-1:0] pc,
// 		output [WIDTH-1:0] snpc
// );
//     always @(posedge clk) begin 
// 						pc <= dnpc;
// 	end
//     assign     snpc = pc + 4;
// endmodule