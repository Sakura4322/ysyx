// import "DPI-C" function int pmem_read(input int raddr);
// import "DPI-C" function void pmem_write(input int waddr, input int wdata, input byte wmask);

// module ysyx_24090015_LSU #(
//     parameter DATAWIDTH =32,
//     parameter ADDRWIDTH =32
// ) (
//     output        lsu_reqValid,
//     output [DATAWIDTH -1 :0] lsu_addr,
//     output        lsu_wen,
//     output [DATAWIDTH -1 :0] lsu_wdata,
//     output [ 3:0] lsu_wmask,
//     input         lsu_respValid,
//     input  [DATAWIDTH -1 :0] lsu_rdata,
// );


//     localparam STORGE =0;
//     localparam LOAD   =1;

//     localparam IDLE = 0;
//     localparam ADDR = 1;
//     localparam DATA = 2;


// always @(posedge clock) begin
//   lsu_rdata <= (lsu_reqValid && !lsu_wen) ? pmem_read(lsu_addr) : 32'b0;
//   if (lsu_reqValid && lsu_wen) begin
//     pmem_write(lsu_addr, lsu_wdata, lsu_wmask);
//   end
//   lsu_respValid <= lsu_reqValid;
// end
// endmodule
