module ysyx_24090015_RegisterFile #(
  ADDR_WIDTH = 4, 
  DATA_WIDTH = 32
  ) (
  input clock,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,
	input ren1,
	input ren2,
  input [ADDR_WIDTH-1:0] raddr1,
  input [ADDR_WIDTH-1:0] raddr2,
	output [DATA_WIDTH-1:0] rdata1,
  output [DATA_WIDTH-1:0] rdata2
);
 reg [DATA_WIDTH-1 : 0] rf [2**ADDR_WIDTH-1:0];

/*
 // 添加DPI-C导出函数
export "DPI-C" context function read_gpr;
          
              // 函数返回寄存器组的地址
function automatic int read_gpr(input int idx);
  return rf[idx];  // 返回寄存器数组的地址
endfunction
 */

 		export "DPI-C" function read_wire;

		function automatic int read_wire(input int sec);
			return rf[sec];
		endfunction
    
 
  always @(posedge clock) begin
    if (wen && (waddr!=0)) rf[waddr] <= wdata;
  end

assign rdata1=({32{ren1}})&(rf[raddr1]);
assign rdata2=({32{ren2}}&rf[raddr2]);
endmodule
