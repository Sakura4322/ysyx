// import "DPI-C" function void ebreak();

module ysyx_24090015_EXU#(
	parameter DATAWIDTH=32,
	parameter ADDRWIDTH=32
) (
    input clock,
	input reset,

	input [DATAWIDTH-1:0] inst_in,
	input lsu_wvalid,
	
    input [DATAWIDTH-1:0] imm,
	input [DATAWIDTH-1:0] src1,
    input [DATAWIDTH-1:0] src2,
    output reg [DATAWIDTH-1:0] rd_wdata,

	input [DATAWIDTH-1:0] pc,
    output reg [ADDRWIDTH-1:0]  dnpc,

	output reg pmem_work,
	output reg pmem_ls,
	input [DATAWIDTH-1:0] pmem_rdata,
	output reg [DATAWIDTH-1:0] pmem_addr,
	output reg [DATAWIDTH-1:0] pmem_wdata,
	output reg [1:0] pmem_size,
	output reg [3:0] pmem_wmask,
	// output reg [3:0] pmem_rmask,


	input [DATAWIDTH-1:0] 	csr_rdata,
	output reg [DATAWIDTH-1:0] csr_wdata0,
	output reg [DATAWIDTH-1:0] csr_wdata1

);
    localparam STORGE =0;
    localparam LOAD   =1;

	localparam UINT = 0;
	localparam INT  = 1;

	localparam DWORD = 4'b1111;
	localparam DHALF = 4'b0011;
	localparam DBYTE = 4'b0001;


	localparam UART  = 4'b0001;
	localparam SDRAM = 4'b1000;
	localparam FLASH = 4'b0011;

	// wire  wmask_ways =  pmem_addr[31:28]===SDRAM ?  1  : 0;
	wire  wmask_ways =  1;

    wire [ADDRWIDTH-1:0] snpc;
	assign snpc = pc+4;

	reg data_type;
	reg [3:0] pmem_rmask;

	reg [DATAWIDTH-1:0] exu_data, lsu_data;


	assign rd_wdata = lsu_wvalid && pmem_ls == LOAD ? lsu_data : exu_data; 

    always @(*) begin
					dnpc = snpc ;
					pmem_work = 0;
					pmem_size= 2'b0;

					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata = 0;
					exu_data = 0;
					data_type = 0;
					csr_wdata0 =0 ;
					csr_wdata1 =0 ;

			casez (inst_in)
					32'h00100073:begin
						// ebreak();
					end
					32'b???????_?????_?????_000_?????_00100_11: begin //addi II
					pmem_size= 0;
                    pmem_work = 0 ;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

					exu_data = src1 + imm;
        			dnpc = snpc;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
                    end
                    32'b???????_?????_?????_111_?????_00100_11: begin //andi II
					pmem_size= 0;
                    pmem_work = 0 ;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

					exu_data = src1 & imm;
        			dnpc = snpc;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
                    end
                    32'b0000000_?????_?????_101_?????_00100_11: begin  //stli II
					pmem_size= 0;
                    pmem_work = 0 ;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

					exu_data = src1 >> imm[4:0];
        			dnpc = snpc;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
                    end
                    32'b0000000_?????_?????_001_?????_00100_11: begin //strlli II
					pmem_size= 0;
                    pmem_work = 0 ;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;


					exu_data = src1 << imm[4:0];
        			dnpc = snpc;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
                    end
			        32'b???????_?????_?????_011_?????_00100_11: begin //sltiu II
					pmem_size= 0;
                    pmem_work = 0 ;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

					exu_data = (src1 < imm);
        			dnpc = snpc;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
					end
					32'b0100000_?????_?????_101_?????_00100_11: begin //srai II
					pmem_size= 0;
                    pmem_work = 0 ;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

					exu_data = (src1[31]==1'b1) ? ((32'hffffffff<<(31-imm[4:0]) | src1>>imm[4:0])) : src1>>imm[4:0];
        			dnpc = snpc;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
					end
					32'b???????_?????_?????_100_?????_00100_11: begin //xori II
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

					exu_data = src1 ^ imm;
        			dnpc = snpc;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
					end
					32'b???????_?????_?????_110_?????_00100_11: begin //ori II
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

					exu_data = src1 | imm;
        			dnpc = snpc;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
					end
					32'b???????_?????_?????_000_?????_11001_11: begin //jalr IJ
                    pmem_work = 0 ;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

					dnpc =src1+imm;
					exu_data = pc+4;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
					end

					32'b???????_?????_?????_???_?????_00101_11: begin //auipc U
					pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

					exu_data  = pc + imm;				
        			dnpc      = snpc;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
					end
					32'b???????_?????_?????_???_?????_01101_11: begin //lui U
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

					exu_data = imm;
        			dnpc = snpc;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
					end
					32'b???????_?????_?????_???_?????_11011_11: begin //jal J				
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

					exu_data=snpc;
					dnpc = pc+imm;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
				    end

					32'b???????_?????_?????_001_?????_11000_11: begin //bne B
					pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;


					if(src1!=src2)dnpc=pc+imm;
					else dnpc = snpc;
					exu_data = 0;	
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
					end
					32'b???????_?????_?????_000_?????_11000_11: begin //beq B
					pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;


					if(src1==src2)dnpc=pc+imm;
					else dnpc = snpc;
					exu_data = 0;	
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
					end
                    32'b???????_?????_?????_101_?????_11000_11: begin //bge B
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

                    if(((src1[31]==0&&src2[31]==0)&&(src1>=src2))||((src1[31]==1&&src2[31]==1)&&(src1>=src2))||(src1[31]==0&&src2[31]==1))dnpc = pc + imm;
					else dnpc = snpc;
					exu_data = 0;	
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
                    end
                    32'b???????_?????_?????_111_?????_11000_11: begin //bgeu B
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

                    if(src1>=src2)dnpc = pc + imm;
					else dnpc = snpc;
					exu_data = 0;	
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
                    end
                    32'b???????_?????_?????_100_?????_11000_11: begin //blt B
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

                    if(((src1[31]==0&&src2[31]==0)&&(src1<src2))||((src1[31]==1&&src2[31]==1)&&(src1<src2))||(src1[31]==1&&src2[31]==0))dnpc = pc + imm;
					else dnpc = snpc;
					exu_data = 0;	
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
                    end
                    32'b???????_?????_?????_110_?????_11000_11: begin //bltu B
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

                    if(src1<src2)dnpc = pc + imm;
					else dnpc = snpc;
					exu_data = 0;	
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
                    end
					32'b0100000_?????_?????_000_?????_01100_11: begin //sub R
					pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

					exu_data = src1 - src2;
        			dnpc = snpc;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
					end
					32'b0000000_?????_?????_000_?????_01100_11: begin //add R
					pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

                    exu_data = src1 + src2;
        			dnpc = snpc;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
					end
                    32'b0000000_?????_?????_110_?????_01100_11: begin //or R
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

                    exu_data = src1 |src2;
        			dnpc = snpc;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
                    end
					32'b0000000_?????_?????_111_?????_01100_11: begin //and R
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

                    exu_data = src1 & src2;
        			dnpc = snpc;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
                    end
					32'b0000000_?????_?????_100_?????_01100_11: begin //xor R
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

                    exu_data = src1 ^ src2;
        			dnpc = snpc;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
                    end
					32'b0000000_?????_?????_001_?????_01100_11: begin //sll R
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

					exu_data = src1[31:0]<<src2[4:0];
        			dnpc = snpc;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
					end
					32'b0000000_?????_?????_101_?????_01100_11: begin //srl R
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

					exu_data = src1[31:0]>>src2[4:0];
        			dnpc = snpc;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;
					end
					32'b0100000_?????_?????_101_?????_01100_11: begin //sra R
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

					exu_data = (src1[31]==1'b1) ? ((32'hffffffff<<(31-src2[4:0]) | src1>>src2[4:0])) : src1>>src2[4:0];
        			dnpc = snpc;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;

					end
					32'b0000000_?????_?????_011_?????_01100_11: begin //sltu R
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

                    exu_data = (src1<src2);
        			dnpc = snpc;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					data_type = INT;

                    end
					32'b0000000_?????_?????_010_?????_01100_11: begin //slt R
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

					data_type = INT;
                    exu_data=(((src1[31]==0&&src2[31]==0)&&(src1<src2))||((src1[31]==1&&src2[31]==1)&&(src1<src2))||(src1[31]==1&&src2[31]==0));
					csr_wdata0 = 0;
					csr_wdata1 = 0;
        			dnpc = snpc;

                    end
					32'b???????_?????_?????_011_?????_1110_011: begin //csrrc I 
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

					data_type = INT;
					exu_data  = csr_rdata; 
					csr_wdata0 = csr_rdata &~ src1;
					csr_wdata1 = 0;
        			dnpc = snpc;

										end
					32'b???????_?????_?????_010_?????_1110_011: begin //csrrs I 
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;

					data_type = INT;
					exu_data  = csr_rdata; 
					csr_wdata0 = csr_rdata | src1;
					csr_wdata1 = 0;
        			dnpc = snpc;

										end
					32'b???????_?????_?????_001_?????_1110_011: begin //csrrw I 
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata =0;


					data_type = INT;
					exu_data  = csr_rdata; 
					csr_wdata0 = src1;
        			dnpc = snpc;
					csr_wdata1 = 0;



										end
					32'b0011000_00010_00000_000_00000_11100_11: begin //mret
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					
					data_type = INT;
					csr_wdata0 = 0;
					csr_wdata1 = 0;
					dnpc = csr_rdata;

					exu_data = 0;
					pmem_wdata =0;
										end				
				 	32'b0000000_00000_00000_000_00000_11100_11: begin //ecall
                    pmem_work = 0 ;
					pmem_size= 0;
					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;

					data_type = INT;
					csr_wdata0 = pc;
					csr_wdata1 = src1;
					dnpc = csr_rdata;

					exu_data = 0;
					pmem_wdata =0;
										end
										32'b???????_?????_?????_010_?????_00000_11: begin //lw IS					
											pmem_work = 1;
											pmem_size= 2'b10;

											pmem_ls   = LOAD;
											pmem_addr = src1+imm;
											pmem_wmask = DWORD;
											pmem_rmask = DWORD;
											exu_data = pmem_rdata;
											data_type = INT;

											dnpc = snpc;
											csr_wdata0 =0 ;
											csr_wdata1 =0 ;
											pmem_wdata =0;
						
						
										end
										32'b???????_?????_?????_001_?????_00000_11: begin //lh IS					
											pmem_work = 1;
											pmem_size= 2'b01;

											pmem_ls   = LOAD;
											pmem_addr = src1+imm;
											pmem_wmask = DWORD;
											pmem_rmask = wmask_ways==0 ? DHALF  : DHALF << (pmem_addr[1:0]);
											data_type = INT;
						
											dnpc = snpc;
											exu_data = 0;
											csr_wdata0 =0 ;
											csr_wdata1 =0 ;
											pmem_wdata =0;
										end
										32'b???????_?????_?????_101_?????_00000_11: begin //lhu IS					
											pmem_work = 1;
											pmem_size= 2'b01;

											pmem_ls   = LOAD;
											pmem_addr = src1+imm;
											pmem_wmask = DWORD;
											pmem_rmask = wmask_ways==0 ? DHALF : DHALF << (pmem_addr[1:0]);
											data_type = UINT;
						
											dnpc = snpc;
											exu_data = 0;
											csr_wdata0 =0 ;
											csr_wdata1 =0 ;
											pmem_wdata =0;
						
										end
										32'b???????_?????_?????_000_?????_00000_11: begin //lb IS
											pmem_work = 1;
											pmem_size= 2'b0;

											pmem_ls   = LOAD;
											pmem_addr = src1+imm;
											pmem_wmask = DWORD;
											pmem_rmask = wmask_ways==0 ? DBYTE : DBYTE<< (pmem_addr[1:0]);
											data_type = INT;
						
											dnpc = snpc;
											exu_data = 0;
											csr_wdata0 =0 ;
											csr_wdata1 =0 ;
											pmem_wdata =0;
										end
										32'b???????_?????_?????_100_?????_00000_11: begin //lbu IS
											pmem_work = 1;
											pmem_size= 2'b0;

											pmem_ls   = LOAD;
											pmem_addr = src1+imm;
											pmem_wmask = DWORD;
											pmem_rmask = wmask_ways==0 ? DBYTE : DBYTE << (pmem_addr[1:0]);
											data_type = UINT;
						
											dnpc = snpc;
											exu_data = 0;
											csr_wdata0 =0 ;
											csr_wdata1 =0 ;
											pmem_wdata =0;
										end
										32'b???????_?????_?????_010_?????_01000_11: begin //sw S
											pmem_work = 1;
											pmem_size= 2'b10;

											pmem_ls   = STORGE;
											pmem_addr = src1+imm;
											pmem_wmask = DWORD  ;
											pmem_wdata = src2;
						
											dnpc = snpc;
											pmem_rmask = 0;
											exu_data = 0;
											data_type = 0;
											csr_wdata0 =0 ;
											csr_wdata1 =0 ;
										end
										32'b???????_?????_?????_000_?????_01000_11: begin //sb S
											pmem_work = 1;
											pmem_size= 2'b0;

											pmem_ls   = STORGE;
											pmem_addr = (src1+imm) ;
											pmem_wmask = wmask_ways==0 ? DBYTE : DBYTE<< (pmem_addr[1:0]);
											pmem_wdata = src2[7:0]<< (pmem_addr[1:0]*8);
											
											dnpc = snpc;
											pmem_rmask = 0;
											exu_data = 0;
											data_type = 0;
											csr_wdata0 =0 ;
											csr_wdata1 =0 ;
										end
										32'b???????_?????_?????_001_?????_01000_11: begin //sh S
											dnpc = snpc;
											pmem_work = 1;
											pmem_size= 2'b01;

											pmem_ls   = STORGE;
											pmem_addr = (src1+imm);
											pmem_wmask = wmask_ways==0 ? DHALF  : DHALF<< (pmem_addr[1:0]);
											pmem_wdata = src2[15:0] << (pmem_addr[1:0]*8);
											
											pmem_rmask = 0;
											exu_data = 0;
											data_type = 0;
											csr_wdata0 =0 ;
											csr_wdata1 =0 ;
											
						
										end			
				default begin 
					dnpc = snpc ;
					pmem_work = 0;
					pmem_size= 2'b0;

					pmem_ls   = 0;
					pmem_addr = 0;
					pmem_wmask = 0;
					pmem_rmask = 0;
					pmem_wdata = 0;
					exu_data = 0;
					data_type = 0;
					csr_wdata0 =0 ;
					csr_wdata1 =0 ;

			end
        
		endcase     



	end

	always @(posedge clock) begin
		
				case (pmem_rmask)
					DBYTE: begin
						if(data_type == INT) lsu_data = {{24{pmem_rdata[7]}},pmem_rdata[7:0]};
						else lsu_data = {{24'b0},pmem_rdata[7:0]};
					end
					4'b0010 : begin
						if(data_type == INT) lsu_data = {{24{pmem_rdata[15]}},pmem_rdata[15:8]};
						else lsu_data = {{24'b0},pmem_rdata[15:8]};
					end
					4'b0100 : begin
						if(data_type == INT) lsu_data = {{24{pmem_rdata[23]}},pmem_rdata[23:16]};
						else lsu_data = {{24'b0},pmem_rdata[23:16]};
					end
					4'b1000 : begin
						if(data_type == INT) lsu_data = {{24{pmem_rdata[31]}},pmem_rdata[31:24]};
						else lsu_data = {{24'b0},pmem_rdata[31:24]};
					end
					DHALF:begin
						if(data_type == INT) lsu_data = {{16{pmem_rdata[15]}},pmem_rdata[15:0]};
						else lsu_data = {{16'b0},pmem_rdata[15:0]};
					end
					4'b0110:begin
						if(data_type == INT) lsu_data = {{16{pmem_rdata[23]}},pmem_rdata[23:8]};
						else lsu_data = {{16'b0},pmem_rdata[23:8]};	
					end
					4'b1100:begin
						if(data_type == INT) lsu_data = {{16{pmem_rdata[31]}},pmem_rdata[31:16]};
						else lsu_data = {{16'b0},pmem_rdata[31:16]};	
					end
					DWORD: lsu_data = pmem_rdata;
					default : lsu_data = 0;
				endcase
	end
endmodule
