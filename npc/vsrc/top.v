`timescale 1ns/1ns
import "DPI-C" function int ebreak(input int a);
`define R 1
`define II 2
`define IJ 3
`define IS 4
`define IC 5
`define S 6
`define B 7
`define U 8
`define J 9


`define Fetch 1
`define Decode 2

module ysyx_24090015_IFU#(WIDTH=32) (
    input clk,
    input [WIDTH-1:0] dnpc,
    output reg[WIDTH-1:0] pc,
		output [WIDTH-1:0] snpc
);
    always @(posedge clk) begin 
						pc <= dnpc;
	end
    assign     snpc = pc + 4;
endmodule


module ysyx_24090015_top#(WIDTH=32) (
    input clk,
    input [WIDTH-1:0] inst,
    output reg [WIDTH-1:0] pc,dnpc,
		output reg flag,
		output hit_good_or_bad//实现HIT GOOD/BAD的功能
);
/*
import "DPI-C" context function void read_regs(input string scope);
always@(*) begin 
read_regs($sformatf("%m.reg0"));
end
*/

initial begin 
pc=32'h80000000;
end
reg [31:0]ebreak_ret;

//end emulation
always @(posedge clk)begin
ebreak_ret = ebreak(inst);
flag = ebreak_ret[0];
end 
		

    reg [WIDTH-1:0] snpc;

    // IFU实例化
    ysyx_24090015_IFU#(
        .WIDTH(32)    
    ) ifu0(
        .clk(clk),
        .pc(pc),
        .snpc(snpc),
		.dnpc(dnpc)
    );

    // 信号声明
    wire [WIDTH-1:0] imm, src1, src2;
    wire [4:0] rd, rs1, rs2;
    wire ren1, ren2, wen,valid,pwen;
	wire [7:0] wmask;
    wire [WIDTH-1:0] rd_wdata, pmem_raddr,pmem_waddr,pmem_wdata,pmem_rdata;


assign ren1=ebreak(inst);
assign hit_good_or_bad=src1;



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
	.valid(valid),
	.pwen(pwen),
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
        .pmem_rdata(pmem_rdata),
	.pc(pc),
        .snpc(snpc),
        .rd_wdata(rd_wdata),
        .pmem_raddr(pmem_raddr),
        .pmem_waddr(pmem_waddr),
        .pmem_wdata(pmem_wdata),
		.wmask(wmask),
        .dnpc(dnpc)
    );
    // 寄存器堆实例化
    ysyx_24090015_RegisterFile #(
        .ADDR_WIDTH(5),
        .DATA_WIDTH(32)
    ) reg0(
        .clk(clk),
        .wdata(rd_wdata),
        .waddr(rd),
        .wen(wen_control),
        .ren1(ren1_control),
        .ren2(ren2_control),
        .raddr1(rs1),
        .raddr2(rs2),
        .rdata1(src1),
        .rdata2(src2)
    );

		export "DPI-C" function read_wire;

		function automatic int read_wire(input int sec);
			if(sec==1)return wen;
			else if (sec==2)return rd;
			else if (sec==3)return rd_wdata;
			else return 0;
		endfunction
		
		
	ysyx_24090015_pmem #(
	.WIDTH(32)
	) pmem0(
		//.clk(clk),
		.valid(valid_control),
		.wen(pwen_control),
		.wmask(wmask),
		.raddr(pmem_raddr),
		.waddr(pmem_waddr),
		.wdata(pmem_wdata),
		.rdata(pmem_rdata)
		);



reg ren1_control,ren2_control,pwen_control,valid_control,wen_control;


    ysyx_24090015_control_unit control_unit0(
		.clk(clk),
		
        .ren1(ren1),
		.ren2(ren2),
		.pren(pren),
		.wen(wen),
		.valid(valid),

		.ren1_out(ren1_control),
		.ren2_out(ren2_control),
		.pren_out(pwen_control),
		.wen_out(wen_control),
		.valid_out(valid_control)
	);
endmodule
