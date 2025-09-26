module ysyx_24090015_IFU#(
    parameter DATAWIDTH=32,
    parameter ADDRWIDTH=32
    ) (
    input clk,
    input rst,
    input [ADDRWIDTH-1:0] dnpc,
    output reg[ADDRWIDTH-1:0] pc,
    output [DATAWIDTH-1 : 0]inst,
    output                      fetch,

    output reg       ifu_reqValid,
    output reg [31:0] ifu_raddr,
    input  [31:0] ifu_rdata,
    input         ifu_respValid,

    );


    localparam BASEADDR = 32'h80000000;

    localparam IDLE = 0;
    localparam WAIT = 1;


    always @(ifu_respValid) begin 
        if(!rst)begin
            pc = BASEADDR;
        end
		else 
        if(ifu_respValid)begin
            pc = dnpc;
        end
	end

    assign fetch = ifu_respValid;
    assign inst  = ifu_rdata;


    
    reg ifu_state;
    always @(posedge clk ) begin
        if(!rst)begin
            ifu_state <= IDLE;
            ifu_raddr <= pc;
            ifu_reqValid <= 0;
        end 
        else begin
            case (ifu_state)
                IDLE :begin
                  ifu_reqValid <= 1;
                  ifu_state    <= WAIT;
                end
                WAIT : begin
                  if(ifu_respValid)begin
                    ifu_raddr    <= pc;
                    ifu_reqValid <= 0;
                    ifu_state <= IDLE;
                  end
  
                end 
            endcase

          end
    end
endmodule