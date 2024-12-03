`timescale 1ns/1ns
import "DPI-C" function int ebreak(input int a);
`define R 1
`define I 2
`define S 3
`define B 4
`define U 5
`define J 6

module ysyx_24090015_IFU#(WIDTH=32) (
    input clk,
    input en,
    input [WIDTH-1:0] pc,
    output reg[WIDTH-1:0] snpc,
		output reg wen,ren1,ren2
);
    always @(posedge clk) begin 
        if (!en) begin 
            snpc <= pc + 1;
    end
	end
endmodule

module ysyx_24090015_SEXT#(
    DATA_WIDTH=32,
    WIDTH=32
) (
    input [DATA_WIDTH-1:0] in,
    output [WIDTH-1:0] out
);
    assign out = {{(WIDTH-DATA_WIDTH){in[DATA_WIDTH-1]}}, in};
endmodule 

module ysyx_24090015_immI#(WIDTH=32) (
    input [WIDTH-1:0] inst,
		input clk,
    output [WIDTH-1:0] imm
);

    wire [11:0] init;				
    assign init = inst[WIDTH-1:WIDTH-12];
		
    ysyx_24090015_SEXT#(
        .DATA_WIDTH(12),
        .WIDTH(32)
    ) s0(
        .in(init),
        .out(imm)
    );
endmodule

module ysyx_24090015_TYPE#(WIDTH=32) (
    input clk,
    input [WIDTH-1:0] inst,
    output reg [2:0] inst_type
);
    reg [6:0] opcode;

    always @(posedge clk) begin 
        opcode = inst[6:0];
        case (opcode)
            7'b0010011: inst_type <= `I; // I=2
            default: inst_type <= 0;
        endcase
    end
endmodule 

module ysyx_24090015_IDU#(WIDTH=32) (
    input clk,
    input [WIDTH-1:0] inst_in,
    output reg [WIDTH-1:0] imm,
    output reg ren1, ren2, wen,
);

    wire [2:0] inst_type;
    ysyx_24090015_TYPE#(
        .WIDTH(32)
    ) t0(
        .clk(clk),
        .inst(inst_in),
        .inst_type(inst_type)
    );

    reg [WIDTH-1:0] temp_immI;
    ysyx_24090015_immI#(
        .WIDTH(32)
    ) i0(
        .inst(inst_in),
        .imm(temp_immI)
    );

    always @(*) begin

        case (inst_type)
            `I: begin
                ren1 = 1;
                ren2 = 0;
                wen  = 1;
                imm  = temp_immI;
            end
            default: begin
                ren1 = 0;
                ren2 = 0;
                wen  = 0;
                imm  = 0;
            end 
        endcase
    end
		
endmodule

module ysyx_24090015_EXU#(WIDTH=32) (
    input clk,
    input [WIDTH-1:0] inst_in, imm,
    input [WIDTH-1:0] src1, src2,
    input [WIDTH-1:0] snpc,
    output reg[4:0] rd,rs1,rs2,
    output reg [WIDTH-1:0] rd_wdata,
    output reg [WIDTH-1:0] npc, dnpc
);

    always @(*) begin
        dnpc = snpc;
        casez (inst_in)
					32'b???????_?????_?????_000_?????_00100_11: begin //addi
           rd  = inst_in[11:7];
           rs1 = inst_in[19:15];
           rd_wdata = src1 + imm;
            end
        endcase
        npc = dnpc;
    end
endmodule

module ysyx_24090015_top#(WIDTH=32) (
    input clk,
    input [WIDTH-1:0] inst,
    output reg [WIDTH-1:0] pc,
		output reg flag
);


always @(flag) begin
 //$display("now the ebreak test is :%x\n",ebreak(inst));	
	if( flag ) begin 
		$display("Condition end");
		$finish;
	end
end

always @(posedge clk)begin
flag <= ebreak(inst);
end 
		
    reg [WIDTH-1:0] snpc, dnpc;
    reg en;

    // IFU实例化
    ysyx_24090015_IFU#(
        .WIDTH(32)    
    ) ifu0(
        .clk(clk),
        .en(en),
        .pc(pc),
        .snpc(snpc),
				.wen(wen),
				.ren1(ren1),
				.ren2(ren2)
    );

    // 信号声明
    wire [WIDTH-1:0] imm, src1, src2;
    wire [4:0] rd, rs1, rs2;
    wire ren1, ren2, wen;
    wire [WIDTH-1:0] rd_wdata;

    // IDU实例化
    ysyx_24090015_IDU #(
        .WIDTH(32)
    ) idu0(    
        .clk(clk),
        .inst_in(inst),
        .imm(imm),
        .ren1(ren1),
        .ren2(ren2),
        .wen(wen)
    );

    // EXU实例化
    ysyx_24090015_EXU#(
        .WIDTH(32)
    ) exu0(
        .clk(clk),
        .inst_in(inst),
        .imm(imm),
        .src1(src1),
        .src2(src2),
        .snpc(snpc),
				.rd(rd),
				.rs1(rs1),
				.rs2(rs2),
        .rd_wdata(rd_wdata),
        .npc(pc),
        .dnpc(dnpc)
    );

    // 寄存器堆实例化
    RegisterFile #(
        .ADDR_WIDTH(5),
        .DATA_WIDTH(32)
    ) reg0(
        .clk(clk),
        .wdata(rd_wdata),
        .waddr(rd),
        .wen(wen),
        .ren1(ren1),
        .ren2(ren2),
        .raddr1(rs1),
        .raddr2(rs2),
        .rdata1(src1),
        .rdata2(src2)
    );

endmodule
