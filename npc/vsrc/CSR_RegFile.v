module csr_addr_mux #(
    parameter IMM_WIDTH=12,
    parameter CSR_ADDR_WIDTH=2
) ( 
    input [IMM_WIDTH-1 : 0] imm,
    output [CSR_ADDR_WIDTH-1:0] addr
);
    always @(*) begin
        case (imm)
            12'h000:addr=1;     //ecall
            12'h300:addr=0;     //mstatus
            12'h302:addr=2;     //mret
            12'h305:addr=1;     //mtvec
            12'h341:addr=2;     //mepc
            12'h342:addr=3;     //mcause
            default: addr =0;
        endcase
    end
endmodule


module ysyx_24090015_CSR_RegFiles#(
    parameter DATAWIDTH = 32,
    parameter IMM_WIDTH=12,
    parameter CSR_ADDR_WIDTH=2
) (
    input clk,
	input [IMM_WIDTH-1 : 0]imm, 
    input [DATAWIDTH-1 : 0]wdata,
    input                  wen,
    output [DATAWIDTH-1 : 0]rdata,
)
wire [CSR_ADDR_WIDTH-1:0] csr_addr;

    csr_addr_mux #(
        .IMM_WIDTH(IMM_WIDTH),          
        .CSR_ADDR_WIDTH(CSR_ADDR_WIDTH)       
    ) csr_addr_mux_instance (
        .imm(imm),         
        .addr(csr_addr)       
    );

reg [DATAWIDTH -1 : 0] CSRS [3:0];
always @(posedge clk) begin
    if(wen)begin
        CSRS[csr_addr] <= wdata;
    end else begin
        rdata <= CSRS[csr_addr];
    end
end

endmodule