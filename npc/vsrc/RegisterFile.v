module RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,
	input ren1,
	input ren2,
  input [ADDR_WIDTH-1:0] raddr1,raddr2,
	output reg[DATA_WIDTH-1:0] rdata1,rdata2
);
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end
  
always @(posedge clk)begin 
		if (ren1 && !ren2)begin 
			rdata1=rf[raddr1];
			rdata2=0;
		end
		else if(!ren1 && ren2)begin 
			rdata1=0;
			rdata2=rf[raddr2];
		end
		else if (ren1&&ren2)begin 
			rdata1=rf[raddr1];
			rdata2=rf[raddr2];
		end
		else begin 
		rdata1=0;
		rdata2=0;
		end
	end
endmodule
