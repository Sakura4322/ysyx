module csr_addr_mux #(
    parameter IMM_WIDTH=12,
    parameter CSR_ADDR_WIDTH=2
) ( 
    input wen,
    input [IMM_WIDTH-1 : 0] imm,
    output reg [CSR_ADDR_WIDTH-1:0] waddr0,
    output reg [CSR_ADDR_WIDTH-1:0] waddr1,
    output reg [CSR_ADDR_WIDTH-1:0] raddr0,
    output reg wen0,
    output reg wen1
);
    always @(*) begin
        case (imm)
            12'h000:begin          //ecall
                    raddr0=1;
                    wen0  =1;
                    waddr0=2;    
                    wen1  =1;
                    waddr1=3;    
            end
            12'h300:begin         //mstatus
                    raddr0=0;     
                    wen0  =1;
                    waddr0=0;     
                    wen1  =0;
                    waddr1=0;    
            end
            12'h302:begin         //mret
                    raddr0=2;     
                    wen0  =0;
                    waddr0=0;     
                    wen1  =0;
                    waddr1=0;   
            end
            12'h305:begin         //mtvec
                    raddr0=1;     
                    wen0  =1;
                    waddr0=1;    
                    wen1  =0;
                    waddr1=0;    
            end
            12'h341:begin         //mepc
                    raddr0=2;     
                    wen0  =1;
                    waddr0=2;     
                    wen1  =0;
                    waddr1=0;    
            end     
            12'h342:begin 
                    raddr0=3;     
                    wen0  =1;
                    waddr0=3;     //mcause
                    wen1  =0;
                    waddr1=0;    
            end      
            default:begin 
                    wen0  =0;
                    waddr0=0;
                    wen1  =0;
                    waddr1=0;    
            end
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
    input [DATAWIDTH-1 : 0]wdata0,
    input [DATAWIDTH-1 : 0]wdata1,
    output [DATAWIDTH-1 : 0]rdata
);
wire [CSR_ADDR_WIDTH-1:0] csr_waddr0;
wire [CSR_ADDR_WIDTH-1:0] csr_waddr1;
wire [CSR_ADDR_WIDTH-1:0] csr_raddr0;
wire wen0,wen1;

    csr_addr_mux #(
        .IMM_WIDTH(IMM_WIDTH),          
        .CSR_ADDR_WIDTH(CSR_ADDR_WIDTH)       
    ) csr_addr_mux_instance (
        .wen(wen),
        .imm(imm),       
        .raddr0(csr_raddr0),
        .wen0(wen0),
        .waddr0(csr_waddr0),  
        .wen1(wen1),
        .waddr1(csr_waddr1)       
    );

reg [DATAWIDTH -1 : 0] CSRS [3:0];
always @(posedge clk) begin
    if(wen0)begin
        CSRS[csr_waddr0] <= wdata0;
    end 
        if(wen1)begin
        CSRS[csr_waddr1] <= wdata1;
    end 
end
        
assign rdata = CSRS[csr_raddr0];

 		export "DPI-C" function read_wire;

		function automatic int read_wire(input int sec);
			return CSRS[sec];
		endfunction

endmodule