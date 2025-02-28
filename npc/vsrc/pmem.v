import "DPI-C" function int pmem_read(input int raddr);
import "DPI-C" function void pmem_write(
  input int waddr, input int wdata, input byte wmask);

module ysyx_24090015_pmem#(WIDTH = 32) (

	input  clk,valid ,wen,
  input [7:0] wmask,
	input [WIDTH-1:0] raddr,waddr,wdata,
	output reg[WIDTH-1:0] rdata
	
	);


always @(valid,wen,raddr,waddr,wdata,wmask) begin
// always @(*) begin
  if (valid) begin // 有读写请求时
    rdata = pmem_read(raddr);
    if (wen) begin // 有写请求时
      pmem_write(waddr, wdata, wmask);
    end
  end
  else begin
    rdata = 0;
  end
end
/*
always @(posedge clk) begin
  if(valid&&wen)pmem_write(waddr, wdata, wmask);
end
assign rdata = ({32{valid}}&(pmem_read(raddr)));
*/
endmodule
