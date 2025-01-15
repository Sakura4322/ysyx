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
    input [WIDTH-1:0] pc,
    output reg[WIDTH-1:0] snpc
);
    always @(posedge clk) begin 
            snpc <= pc +1;
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
    output [WIDTH-1:0] immI
);

    wire [11:0] init;				
    assign init = inst[WIDTH-1:WIDTH-12];
		
    ysyx_24090015_SEXT#(
        .DATA_WIDTH(12),
        .WIDTH(32)
    ) s0(
        .in(init),
        .out(immI)
    );
endmodule

module ysyx_24090015_immU#(WIDTH=32) (
	input [WIDTH-1 :0] inst_in,
	output [WIDTH-1: 0] immU
);
	assign immU = {inst_in[31:12],12'b0};

endmodule


module ysyx_24090015_immJ#(WIDTH=32) (

input [WIDTH-1 : 0] inst_in,
output [WIDTH-1 : 0] immJ

);

	wire [19 : 0] init;
	assign init={inst_in[31],{inst_in[19:12],{inst_in[20],inst_in[30:21]}}};
	ysyx_24090015_SEXT#(
		.DATA_WIDTH(20),
		.WIDTH(32)		
	) s1(
			.in(init),
			.out(immJ)
		);

	endmodule

module ysyx_24090015_TYPE#(WIDTH=32) (
    input clk,
    input [WIDTH-1:0] inst,
    output reg [2:0] inst_type
);
    reg [6:0] opcode;

    always @(*) begin 
        opcode = inst[6:0];
        case (opcode)
            7'b0010011: inst_type = `I; // I=2
						7'b0010111: inst_type = `U;
						7'b1101111: inst_type = `J;
						7'b1100111: inst_type = `I;//jalr
						7'b0000011: inst_type = `I;//lb,lh,lw,lbu,lhu
            default: inst_type = 0;
        endcase
    end
endmodule 

module ysyx_24090015_IDU#(WIDTH=32) (
    input clk,
    input [WIDTH-1:0] inst_in,
    output reg [WIDTH-1:0] imm,
    output reg  ren1, ren2, wen,
		output reg [4:0] rd,rs1,rs2
);

    wire [2:0] inst_type;
    ysyx_24090015_TYPE#(
        .WIDTH(32)
    ) t0(
        .clk(clk),
        .inst(inst_in),
        .inst_type(inst_type)
    );

    wire [WIDTH-1:0] temp_immI , temp_immU,temp_immJ;
    ysyx_24090015_immI#(
        .WIDTH(32)
    ) i0(
        .inst(inst_in),
        .immI(temp_immI)
    );

		ysyx_24090015_immU#(
		.WIDTH(32)	
		) i1(
			.inst_in(inst_in),
			.immU(temp_immU)
		);


		ysyx_24090015_immJ#(
		.WIDTH(32)	
		) i2 (
			.inst_in(inst_in),
			.immJ(temp_immJ)
		);


		always @(*)begin
				case(inst_type)
					`I : begin 
							rs1=inst_in[19:15];
							rs2=0;
							ren1=1;
							ren2=0;
							rd=inst_in[11:7];
							wen=1;
							imm=temp_immI;
				end
					`U : begin 
							rs1=0;
							rs2=0;
							ren1=0;
							ren2=0;
							rd=inst_in[11:7];
							wen=1;
							imm=temp_immU;
				end
					`J : begin 
							rs1=0;
							rs2=0;
							ren1=0;
							ren2=0;
							rd=inst_in[11:7];
							wen=1;
							imm=temp_immJ;
				end
				
				endcase
		end
		
endmodule

module ysyx_24090015_EXU#(WIDTH=32) (
    input clk,
    input [WIDTH-1:0] inst_in, imm,
    input [WIDTH-1:0] src1, src2,
    input [WIDTH-1:0] snpc,
    output reg [WIDTH-1:0] rd_wdata,
    output reg [WIDTH-1:0] npc, dnpc
);

    always @(*) begin
        dnpc = snpc;
        casez (inst_in)
					32'b???????_?????_?????_000_?????_00100_11: begin //addi I
           rd_wdata = src1 + imm;
            end
					32'b???????_?????_?????_000_?????_11001_11: begin //jalr I

					dnpc = ~((src1+imm)&{32{1'b1}});
					rd_wdata = dnpc*4+4;

					end
					32'b???????_?????_?????_???_?????_00101_11: begin //auipc U
						
					rd_wdata = snpc*4 + imm;
				
					end
					32'b???????_?????_?????_???_?????_01101_11: begin //lui U

					rd_wdata = imm;

					end
					32'b???????_?????_?????_???_?????_11011_11: begin //jal J
					
					rd_wdata=snpc+4;
					dnpc = dnpc+imm;

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

    // IFU实例化
    ysyx_24090015_IFU#(
        .WIDTH(32)    
    ) ifu0(
        .clk(clk),
        .pc(pc),
        .snpc(snpc)
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
				.rs1(rs1),
        .ren2(ren2),
				.rs2(rs2),
        .wen(wen),
				.rd(rd)
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
