import "DPI-C" function int pmem_read(input int raddr, input byte wmask);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

module ysyx_24090015_SRAM #(
    parameter DATAWIDTH=32,
    parameter ADDRWIDTH=32
) (
    input clock,
    input reset,

    input                   ifu_reqValid,
    output reg              ifu_respValid,
    input [DATAWIDTH -1:0] ifu_raddr,
    output  reg [DATAWIDTH -1:0] ifu_rdata,

    input                   lsu_reqValid,
    input [DATAWIDTH -1 :0] lsu_addr,
    input                   lsu_wen,
    input [DATAWIDTH -1 :0] lsu_wdata,
    input [ 3:0]            lsu_wmask,
    output  reg             lsu_respValid,
    output  reg [DATAWIDTH -1 :0] lsu_rdata,

);

  // always @(posedge clock) begin
  //   ifu_rdata <= (ifu_reqValid) ? pmem_read(ifu_raddr) : 32'b0;
  // end

  // always @(posedge clock) begin
  //   lsu_rdata <= (lsu_reqValid && !lsu_wen) ? pmem_read(lsu_addr) : 32'b0;
  //   if (lsu_reqValid && lsu_wen) begin
  //     pmem_write(lsu_addr, lsu_wdata, lsu_wmask);
  //   end
  //   lsu_respValid <= lsu_reqValid;
  // end
`define CYCLE_NUMS 20

reg [5:0] cnt;
reg start_cnt;
always @(posedge clock) begin
  if(reset)begin
    cnt<= 0;
  end
  else begin
    if(start_cnt)begin
      if(cnt == `CYCLE_NUMS - 1)begin
        cnt <= 0;
      end else begin
        cnt <= cnt + 1;
      end
    end
  end
end

  localparam IDLE      = 0;
  localparam IFU_FETCH = 1;
  localparam LSU_LS    = 2;

 reg [1:0]sram_state;

 always @(*) begin
    if(reset)begin
      sram_state = IDLE;
      start_cnt <= 0;

    end
    else begin
      case (sram_state)
        IDLE :begin
          // if(!ifu_respValid )begin
            if( lsu_reqValid && !lsu_respValid)begin
              sram_state = LSU_LS;
              start_cnt = 1;
            end 
            else if(ifu_reqValid && !ifu_respValid )begin
              sram_state = IFU_FETCH;
              start_cnt = 1;
            end else begin
              start_cnt = 0;
            end
        end
        IFU_FETCH : begin
          if(ifu_respValid)begin
            sram_state = IDLE;
          end
        end 
        LSU_LS :begin
          if(lsu_respValid)begin
            sram_state = IDLE;
          end
        end
      endcase
    end
 end

  always @(posedge clock ) begin
      if(reset)begin
        ifu_respValid <= 0;
        lsu_respValid <= 0;
        lsu_rdata <= 0;

      end else begin
          case (sram_state)
              IDLE :begin
                ifu_respValid <= 0;
                lsu_respValid <= 0;
              end
              IFU_FETCH : begin
                if(cnt == `CYCLE_NUMS - 1)begin
                  ifu_rdata <= pmem_read(ifu_raddr,4'b1111);
                  ifu_respValid <= 1;
                end
                lsu_respValid <= 0;
              end 
              LSU_LS :begin
                if(cnt == `CYCLE_NUMS - 1)begin
                  lsu_rdata <= (!lsu_wen) ? pmem_read(lsu_addr,lsu_wmask) : 0;
                  if (lsu_wen) begin
                    pmem_write(lsu_addr, lsu_wdata, lsu_wmask);
                  end
                  lsu_respValid <= 1;
                end
                ifu_respValid <= 0;
              end
          endcase

        end
  end
endmodule
