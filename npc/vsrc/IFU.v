module ysyx_24090015_IFU#(
    parameter DATAWIDTH=32,
    parameter ADDRWIDTH=32
    ) (
    input clk,
    input rst,
    input [ADDRWIDTH-1:0] dnpc,
    output reg[ADDRWIDTH-1:0] pc,
    output reg [DATAWIDTH-1 : 0]inst,
    output                      fetch,

    output reg       ifu_reqvalid,
    output reg [31:0] ifu_raddr,
    input  [31:0] ifu_rdata,
    input         ifu_respvalid,

    );


    localparam BASEADDR = 32'h80000000;

    localparam IDLE = 0;
    localparam WAIT = 1;


    always @(posedge clk) begin 
        if(!rst)begin
            pc <= BASEADDR;
        end
		else 
        if(ifu_respvalid)begin
            pc <= dnpc;
        end
	end

    assign fetch = ifu_respvalid;
    assign inst  = ifu_rdata;


    
    reg ifu_state;
    always @(posedge clk ) begin
        if(!rst)begin
            ifu_state <= IDLE;
        end else begin
            case (ifu_state)
                IDLE :begin
                  ifu_raddr    <= pc;
                  ifu_reqvalid <= 1;
                  ifu_state    <= WAIT;
                end
                WAIT : begin
                  if(ifu_respvalid)begin
                    ifu_state <= IDLE;
                  end
  
                end 
            endcase

          end
    end
endmodule