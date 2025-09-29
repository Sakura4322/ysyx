module ysyx_24090015_IFU#(
    parameter DATAWIDTH=32,
    parameter ADDRWIDTH=32
    ) (
    input clock,
    input reset,
    input [ADDRWIDTH-1:0] dnpc,
    output reg[ADDRWIDTH-1:0] pc,
    output [DATAWIDTH-1 : 0]inst,
    output                      fetch,

    output reg       ifu_reqValid,
    output reg [31:0] ifu_raddr,
    input  [31:0] ifu_rdata,
    input         ifu_respValid,

    input lsu_work,
    input lsu_respValid
    );


    localparam BASEADDR = 32'h80000000;

    localparam IDLE = 0;
    localparam FETCH = 1;
    localparam LS = 2;


    always @(ifu_respValid) begin 
        if(reset)begin
            pc <= BASEADDR;
        end
		else 
        if(ifu_respValid)begin
            pc <= dnpc;
        end
	end

    assign fetch = ifu_respValid;
    // assign inst  = 0;
    // assign inst  = (ifu_reqValid && ifu_respValid) ? ifu_rdata : 0;
    assign inst  = ifu_rdata;


    
    reg [1:0] ifu_state;
    always @(posedge clock ) begin
        if(reset)begin
            ifu_state <= IDLE;
            ifu_raddr <= pc;
            ifu_reqValid <= 0;
        end 
        else begin
            case (ifu_state)
                IDLE :begin
                  ifu_reqValid <= 1;
                  ifu_raddr    <= pc;

                  ifu_state    <= FETCH;
                end
                FETCH : begin
                  ifu_reqValid <= 0;

                  if(ifu_respValid)begin
                    if(lsu_work)begin
                        ifu_state <= LS;
                    end 
                    else begin
                        ifu_state <= IDLE;    
                    end
                  end
                end 
                LS : begin
                    if(lsu_respValid)begin
                        ifu_reqValid <= 1;
                        ifu_raddr    <= pc;
      
                        ifu_state    <= FETCH;
                    end
                end
            endcase

          end
    end
endmodule