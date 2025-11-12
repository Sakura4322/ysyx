module ysyx_24090015_LSU #(
    parameter DATAWIDTH =32,
    parameter ADDRWIDTH =32
) (
  input clock,
  input reset,

  input LSU_work,
  input ls,        
  input [ADDRWIDTH-1 : 0] addr,
  input [DATAWIDTH-1 : 0] sdata,
  output [DATAWIDTH-1 : 0] ldata,
  input [3:0] storge_mask,
  output wvalid,


    output reg       lsu_reqValid,
    // output        lsu_reqValid,
    output [DATAWIDTH -1 :0] lsu_addr,
    output        lsu_wen,
    output [DATAWIDTH -1 :0] lsu_wdata,
    output [ 3:0] lsu_wmask,
    input         lsu_respValid,
    input  [DATAWIDTH -1 :0] lsu_rdata,
);


    localparam STORGE =0;
    localparam LOAD   =1;

    localparam IDLE = 0;
    localparam WAIT = 1;
    localparam FINISH = 2;
assign wvalid = lsu_respValid;
assign ldata = lsu_rdata;
// assign lsu_reqValid = lsu_respValid ? 0 : LSU_work;
    reg [1: 0] lsu_state;

    always @(posedge clock) begin
      if(reset)begin
        lsu_state <= IDLE;
      end
      else begin
        case (lsu_state)
          IDLE : begin
            if(LSU_work)begin
              lsu_state  <= WAIT;
              // lsu_reqValid = 1;
            end
          end
          WAIT : begin
            if(lsu_respValid)begin
              lsu_state <= FINISH;
              // lsu_reqValid = 0;
            end
          end 
          FINISH : begin
            lsu_state <= IDLE;
          end
        endcase
      end
    end

    always @(*) begin
      if(reset)begin
          lsu_reqValid = 0;
          // lsu_addr = 0;
          // lsu_wdata = 0;
          // lsu_wmask = 0;

        end else begin
          case (lsu_state)
            IDLE : begin
                  lsu_reqValid = LSU_work;

            end
            WAIT : begin
              lsu_reqValid = 0;
              // if(lsu_respValid)begin
              //   // lsu_state <= IDLE;
              //   lsu_reqValid = 0;
              // end
            end 
          endcase
        end
  end


assign  lsu_addr = addr;
assign  lsu_wdata = (ls == STORGE) ? sdata : 0 ;
assign  lsu_wmask = (ls == STORGE) ? storge_mask : 0 ;
assign  lsu_wen = (ls == STORGE);
endmodule
