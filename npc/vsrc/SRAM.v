import "DPI-C" function int pmem_read(input int raddr, input byte wmask);
import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

module ysyx_24090015_SRAM #(
    parameter DATAWIDTH=32,
    parameter ADDRWIDTH=32
) (
    input clk,
    input rst,

    input                   ifu_reqValid,
    output reg [DATAWIDTH -1:0] ifu_respValid,
    input [DATAWIDTH -1:0] ifu_raddr,
    output  reg [DATAWIDTH -1:0] ifu_rdata,

    input        lsu_reqValid,
    input [DATAWIDTH -1 :0] lsu_addr,
    input        lsu_wen,
    input [DATAWIDTH -1 :0] lsu_wdata,
    input [ 3:0] lsu_wmask,
    output  reg       lsu_respValid,
    output  reg [DATAWIDTH -1 :0] lsu_rdata,

);

  // always @(posedge clk) begin
  //   ifu_rdata <= (ifu_reqValid) ? pmem_read(ifu_raddr) : 32'b0;
  // end

  // always @(posedge clk) begin
  //   lsu_rdata <= (lsu_reqValid && !lsu_wen) ? pmem_read(lsu_addr) : 32'b0;
  //   if (lsu_reqValid && lsu_wen) begin
  //     pmem_write(lsu_addr, lsu_wdata, lsu_wmask);
  //   end
  //   lsu_respValid <= lsu_reqValid;
  // end


  localparam IDLE      = 0;
  localparam IFU_FETCH = 1;
  localparam LSU_LS    = 2;

 reg [1:0]sram_state;

  always @(posedge clk ) begin
      if(!rst)begin
        sram_state <= 0;

        ifu_respValid <= 0;
        lsu_respValid <= 0;
        lsu_rdata <= 0;
      end else begin
          case (sram_state)
              IDLE :begin
                if( lsu_reqValid)begin
                  sram_state <= LSU_LS;  
                  lsu_rdata <= (lsu_reqValid && !lsu_wen) ? pmem_read(lsu_addr,lsu_wmask) : 32'b0;
                  if (lsu_reqValid && lsu_wen) begin
                    pmem_write(lsu_addr, lsu_wdata, lsu_wmask);
                  end
                  lsu_respValid <= lsu_reqValid;
                end 
                else if(ifu_reqValid)begin
                  sram_state <= IFU_FETCH;
                  ifu_rdata <= (ifu_reqValid) ? pmem_read(ifu_raddr,4'b1111) : 32'b0;
                  ifu_respValid <= ifu_reqValid;
                end
              end
              IFU_FETCH : begin
                sram_state <= IDLE;
              end 
              LSU_LS :begin
                if(ifu_reqValid)begin
                  sram_state <= IFU_FETCH;
                  ifu_rdata <= (ifu_reqValid) ? pmem_read(ifu_raddr,4'b1111) : 32'b0;
                  ifu_respValid <= ifu_reqValid;
                  sram_state <= IFU_FETCH;
                end
                else begin
                  sram_state <= IDLE;  
                end
              end
          endcase

        end
  end
endmodule
