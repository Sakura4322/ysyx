`timescale 1ns/1ns

module ysyx_24090015#(
  DATAWIDTH=32,
  ADDRWIDTH=32
  ) (
    input clock,
    input reset,


    output         io_ifu_reqValid ,
    output [31:0]  io_ifu_addr     ,
    input          io_ifu_respValid,
    input  [31:0]  io_ifu_rdata    ,
    output         io_lsu_reqValid ,
    output [31:0]  io_lsu_addr     ,
    output [1:0]   io_lsu_size     ,
    output         io_lsu_wen      ,
    output [31:0]  io_lsu_wdata    ,
    output [3:0]   io_lsu_wmask    ,
    input          io_lsu_respValid,
    input  [31:0]  io_lsu_rdata    
);

// assign io_lsu_size = io_lsu_wen ? (io_lsu_wmask[3] ? 2'b10 : (io_lsu_wmask==4'b0011 ? 2'b01 : 2'b00)) : (pmem_rmask[3] ? 2'b10 : (pmem_rmask==4'b0011 ? 2'b01 : 2'b00));

/*
import "DPI-C" context function void read_regs(input string scope);
always@(*) begin 
read_regs($sformatf("%m.reg0"));
end
*/
wire [DATAWIDTH-1 : 0]inst;
reg [31:0]ebreak_ret;


// wire [ADDRWIDTH-1:0] pc;
wire [ADDRWIDTH-1:0] dnpc;


wire pmem_work;
wire pmem_ls;
wire [7:0] pmem_wmask;
wire [7:0] pmem_rmask;
wire [DATAWIDTH-1:0]pmem_addr;
wire [DATAWIDTH-1:0]pmem_wdata;
wire [DATAWIDTH-1:0]pmem_rdata;
wire lsu_wvalid;


ysyx_24090015_IFU #(
    .DATAWIDTH(DATAWIDTH),
    .ADDRWIDTH(DATAWIDTH)
) ifu0(
    .clock(clock),
    .reset(reset),
    .dnpc(dnpc),
    .pc(pc),
    .inst(inst),

    .ifu_reqValid(io_ifu_reqValid),
    .ifu_raddr(io_ifu_addr),
    .ifu_rdata(io_ifu_rdata),
    .ifu_respValid(io_ifu_respValid),

    .lsu_work(pmem_work),
    .lsu_respValid(io_lsu_respValid)
);





ysyx_24090015_LSU #(
    .DATAWIDTH(DATAWIDTH),
    .ADDRWIDTH(DATAWIDTH)
) lsu0(
    .clock(clock),
    .reset(reset),
    .LSU_work(pmem_work && io_ifu_respValid),
    .ls(pmem_ls),
    .addr(pmem_addr),
    .sdata(pmem_wdata),
    .ldata(pmem_rdata),
    .storge_mask(pmem_wmask),
    .wvalid(lsu_wvalid),


    .lsu_reqValid(io_lsu_reqValid),
    .lsu_addr(io_lsu_addr),
    .lsu_wen(io_lsu_wen),
    .lsu_wdata(io_lsu_wdata),
    .lsu_wmask(io_lsu_wmask),
    .lsu_respValid(io_lsu_respValid),
    .lsu_rdata(io_lsu_rdata)
);

// ysyx_24090015_SRAM sram0(
//     .clock(clock),
//     .reset(reset),
//     .ifu_reqValid(ifu_reqValid),
//     .ifu_respValid(ifu_respValid),
//     .io_ifu_addr(io_ifu_addr),
//     .ifu_rdata(ifu_rdata),
//     .lsu_reqValid(lsu_reqValid),
//     .lsu_wen(lsu_wen),
//     .lsu_addr(lsu_addr),
//     .lsu_wdata(lsu_wdata),
//     .lsu_wmask(lsu_wmask),
//     .lsu_respValid(lsu_respValid),
//     .lsu_rdata(lsu_rdata)
// );

    // 信号声明
    // wire [DATAWIDTH-1:0] inst;

    wire [DATAWIDTH-1:0] imm;
    wire [DATAWIDTH-1:0] rd_wdata;
    wire [DATAWIDTH-1:0] src1;
    wire [DATAWIDTH-1:0] src2;

    wire [4:0] rd;
    wire [4:0] rs1;
    wire [4:0] rs2;
   
    wire wen;
    wire ren1;
    wire ren2;
    wire pwen;



    wire [DATAWIDTH-1:0]csr_rdata;
    wire [DATAWIDTH-1:0]csr_wdata0;
    wire [DATAWIDTH-1:0]csr_wdata1;
    wire  csr_wen;

// assign ren1=ebreak(inst);
// assign hit_good_or_bad=src1;



    // IDU实例化
    ysyx_24090015_IDU #(
        .WIDTH(32)
    ) idu0(    
        .clock(clock),
        .inst_in(inst),

        .imm(imm),
        .ren1(ren1),
				.rs1(rs1),
        .ren2(ren2),
				.rs2(rs2),
				.valid(valid),
				.pwen(pwen),
        .wen(wen),
        .csr_wen(csr_wen),
				.rd(rd)

    );

    // EXU实例化
    ysyx_24090015_EXU#(
        .DATAWIDTH(DATAWIDTH)
    ) exu0(
        .clock(clock),
        .reset(reset),

        .inst_in(inst),
        .lsu_wvalid(lsu_wvalid),
        .imm(imm),

        .src1(src1),
        .src2(src2),
        .rd_wdata(rd_wdata),

		.pc(io_ifu_addr),
        .dnpc(dnpc),

        .pmem_work(pmem_work),
        .pmem_ls(pmem_ls),
        .pmem_rdata(pmem_rdata),
        .pmem_addr(pmem_addr),
        .pmem_wdata(pmem_wdata),
		.pmem_wmask(pmem_wmask),
        // .pmem_rmask(pmem_rmask),
        .pmem_size(io_lsu_size),

        .csr_rdata(csr_rdata),
        .csr_wdata0(csr_wdata0),
        .csr_wdata1(csr_wdata1)

    );

    // 寄存器堆实例化
    ysyx_24090015_RegisterFile #(
        .ADDR_WIDTH(4),
        .DATA_WIDTH(DATAWIDTH)
    ) reg0(
        .clock(clock),
        .wdata(rd_wdata),
        .waddr(rd),
        .wen(wen && ((io_ifu_respValid && !io_lsu_reqValid) || (io_lsu_respValid && pmem_ls == 1))) ,
        .ren1(ren1),
        .ren2(ren2),
        .raddr1(rs1),
        .raddr2(rs2),
        .rdata1(src1),
       .rdata2(src2)
    );

    //特殊状态寄存器组例化
    ysyx_24090015_CSR_RegFiles #(
        .DATAWIDTH(DATAWIDTH),       // 指定数据宽度为 32 位
        .IMM_WIDTH(12),       // 指定立即数宽度为 12 位
        .CSR_ADDR_WIDTH(7)    // 指定 CSR 地址宽度为 2 位
    ) csr_regfiles_instance (
        .clock(clock),            // 连接时钟信号
        .reset(reset),
        .wen(csr_wen),
        .imm(imm[11:0]),      // 连接 imm 输入
        .wdata0(csr_wdata0),  // 连接 wdata 输入
        .wdata1(csr_wdata1),  // 连接 wdata 输入
        .rdata(csr_rdata)  // 连接 rdata 输出
    );
/*
		export "DPI-C" function read_wire;

		function automatic int read_wire(input int sec);
			if(sec==1)return wen_control;
			else if (sec==2)return rd;
			else if (sec==3)return rd_wdata;
			else return 0;
		endfunction
	*/	

		
	// ysyx_24090015_pmem #(
	// .WIDTH(WIDTH)
	// ) pmem0(
	// 	//.clock(clock),
	// 	.valid(valid_control),
	// 	.wen(pwen_control),
	// 	.wmask(wmask),
	// 	.raddr(pmem_raddr),
	// 	.waddr(pmem_waddr),
	// 	.wdata(pmem_wdata),
	// 	.rdata(pmem_rdata)
	// 	);



// reg ren1_control,ren2_control,pwen_control,valid_control,wen_control;


  //   ysyx_24090015_control_unit control_unit0(
	// 	.clock(clock),

  //   .ren1(ren1),
	// 	.ren2(ren2),
	// 	.pwen(pwen),
	// 	.wen(wen),
	// 	.valid(valid),

	// 	.ren1_out(ren1_control),
	// 	.ren2_out(ren2_control),
	// 	.pwen_out(pwen_control),
	// 	.wen_out(wen_control),
	// 	.valid_out(valid_control)
	// );
endmodule
