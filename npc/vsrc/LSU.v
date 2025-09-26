module ysyx_24090015_LSU #(
    parameter DATAWIDTH =32,
    parameter ADDRWIDTH =32
) (
  input clk,
  input rst,

  input LSU_work,
  input ls,        
  input [ADDRWIDTH-1 : 0] addr,
  input [DATAWIDTH-1 : 0] sdata,
  output [DATAWIDTH-1 : 0] ldata,
  input [3:0] storge_mask,


    output reg       lsu_reqValid,
    output reg[DATAWIDTH -1 :0] lsu_addr,
    output reg       lsu_wen,
    output reg[DATAWIDTH -1 :0] lsu_wdata,
    output reg[ 3:0] lsu_wmask,
    input         lsu_respValid,
    input  [DATAWIDTH -1 :0] lsu_rdata,
);


    localparam STORGE =0;
    localparam LOAD   =1;

    localparam IDLE = 0;
    localparam WAIT = 1;

assign ldata = lsu_rdata;

    reg lsu_state;
    always @(posedge clk ) begin
      if(!rst)begin
          lsu_state <= 0;
      end else begin
          case (lsu_state)
            IDLE : begin
                if(LSU_work)begin
                  lsu_reqValid <= 1;

                  lsu_addr <= addr;
                  lsu_wdata <= (ls == STORGE) ? sdata : 0 ;
                  lsu_mask <= (ls == STORGE) ? storge_mask : 0 ;
                  lsu_wen <= (ls == STORGE);
                end
            end
            WAIT : begin
              if(lsu_respValid)begin
                lsu_state <= IDLE;
                lsu_reqValid <= 0;
              end
            end 
          endcase
        end
  end
endmodule
