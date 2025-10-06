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
        if(wen)begin
        case (imm)
            12'h000:begin          //ecall
                    raddr0=1;
                    wen0  =1;
                    waddr0=2;    
                    wen1  =1;
                    waddr1=3;    
            end
            12'h300:begin         //mstatus addr : 0
                    raddr0=0;     
                    wen0  =1;
                    waddr0=0;     
                    wen1  =0;
                    waddr1=0;    
            end
            12'h302:begin         //mret addr : 2
                    raddr0=2;     
                    wen0  =0;
                    waddr0=0;     
                    wen1  =0;
                    waddr1=0;   
            end
            12'h305:begin         //mtvec addr : 1
                    raddr0=1;     
                    wen0  =1;
                    waddr0=1;    
                    wen1  =0;
                    waddr1=0;    
            end
            12'h341:begin         //mepc addr : 2
                    raddr0=2;     
                    wen0  =1;
                    waddr0=2;     
                    wen1  =0;
                    waddr1=0;    
            end                  
            12'h342:begin         //mcause addr : 3
                    raddr0=3;     
                    wen0  =1;
                    waddr0=3;     
                    wen1  =0;
                    waddr1=0;    
            end      
            12'hB00:begin         //mcycle addr : 4
                    raddr0=4;     
                    wen0  =0;
                    waddr0=0;     
                    wen1  =0;
                    waddr1=0;    
            end
            12'hB80:begin         //mcycleh addr : 5
                    raddr0=5;     
                    wen0  =0;
                    waddr0=0;     
                    wen1  =0;
                    waddr1=0;    
            end
            12'hF12:begin         //marchid addr : 6
                    raddr0=6;     
                    wen0  =0;
                    waddr0=0;     
                    wen1  =0;
                    waddr1=0;    
            end
            12'hF11:begin         //mvendorid addr : 7
                    raddr0=7;     
                    wen0  =0;
                    waddr0=0;     
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
        else begin 
                    wen0  =0;
                    waddr0=0;
                    wen1  =0;
                    waddr1=0;  
        end
    end
endmodule


module ysyx_24090015_CSR_RegFiles#(
    parameter DATAWIDTH = 32,
    parameter IMM_WIDTH=12,
    parameter CSR_ADDR_WIDTH=7
) (
    input clock,
    input reset,
    input wen,
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

parameter FACTOR = 1;
reg [DATAWIDTH -1 : 0] CSRS [7:0];

reg [31 : 0]cnt;
always @(posedge clock) begin
    if(reset)begin
        cnt <= 0;

        CSRS[6] <= 32'h16F959F;         //marchild
        CSRS[7] <= 32'h79737978;        //mvendorid

    end
    else begin
        if(wen0)begin
            CSRS[csr_waddr0] <= wdata0;
        end 
        if(wen1)begin
            CSRS[csr_waddr1] <= wdata1;
        end



        if(cnt == FACTOR -1)begin
            cnt <= 0;
            CSRS[4] <= CSRS[4] + 5;
        end
        else begin
            cnt <= cnt +1 ;
        end

        if(CSRS[4] ==  32'hFFFFFFFF)begin
            CSRS[5] <= CSRS[5] + 1;
        end



    end

    
    
end
        
assign rdata = CSRS[csr_raddr0];

// export "DPI-C" function read_wire;

// function automatic int read_wire(input int sec);
// 	return CSRS[sec];
// endfunction

endmodule