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

	wire [20 : 0] init;
	assign init={{inst_in[31],{inst_in[19:12],{inst_in[20],inst_in[30:21]}}},1'b0};
	ysyx_24090015_SEXT#(
		.DATA_WIDTH(21),
		.WIDTH(32)		
	) s1(
			.in(init),
			.out(immJ)
		);

	endmodule
	
module ysyx_24090015_immS#(WIDTH=32) (

input [WIDTH-1 : 0] inst_in,
output [WIDTH-1 : 0] immS

);

	wire [11 : 0] init;
	assign init={inst_in[31:25],inst_in[11:7]};
	
	ysyx_24090015_SEXT#(
		.DATA_WIDTH(12),
		.WIDTH(32)		
	) s1(
			.in(init),
			.out(immS)
		);

	endmodule
	

	module ysyx_24090015_immB#(WIDTH=32) (

input [WIDTH-1 : 0] inst_in,
output [WIDTH-1 : 0] immB

);

	wire [12 : 0] init;
	assign init={inst_in[31],{inst_in[7],{inst_in[30:25],{inst_in[11:8],1'b0}}}};
	
	ysyx_24090015_SEXT#(
		.DATA_WIDTH(13),
		.WIDTH(32)		
	) s1(
			.in(init),
			.out(immB)
		);

	endmodule

	

module ysyx_24090015_TYPE#(WIDTH=32) (
    input clk,
    input [WIDTH-1:0] inst,
    output reg [3:0] inst_type
);
    reg [6:0] opcode;

    always @(*) begin 
        opcode = inst[6:0];
        case (opcode)
						7'b0010111: inst_type = `U;
						7'b1101111: inst_type = `J;
                        7'b1100111: inst_type = `IJ;//jalr
						7'b1100011: inst_type = `B;
						7'b0000011: inst_type = `IS;//lb,lh,lw,lbu,lhu
						7'b0100011: inst_type = `S;						
						7'b0010011: inst_type = `II; // I=2
						7'b0110011: inst_type = `R ;
						7'b0001111: inst_type = `IC;
						
						
            default: inst_type = 0;
        endcase
    end
endmodule

 

module ysyx_24090015_IDU#(WIDTH=32) (
    input clk,
    input [WIDTH-1:0] inst_in,
    output reg [WIDTH-1:0] imm,
    output reg  ren1, ren2, wen,pwen,valid,
		output reg [4:0] rd,rs1,rs2
);

    wire [3:0] inst_type;
    ysyx_24090015_TYPE#(
        .WIDTH(32)
    ) t0(
        .clk(clk),
        .inst(inst_in),
        .inst_type(inst_type)
    );

    wire [WIDTH-1:0] temp_immI , temp_immU,temp_immJ,temp_immS,temp_immB;
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

        ysyx_24090015_immS#(
		.WIDTH(32)	
		) i3 (
			.inst_in(inst_in),
			.immS(temp_immS)
		);

		ysyx_24090015_immB#(
		.WIDTH(32)	
		) i4 (
			.inst_in(inst_in),
			.immB(temp_immB)
		);

		always @(*)begin
				case(inst_type)
					`II : begin 
							rs1=inst_in[19:15];
							rs2=0;
							ren1=1;
							ren2=0;
							valid=0;
							rd=inst_in[11:7];
							wen=1;
							pwen=0;
							imm=temp_immI;
				end
					`IJ : begin 
							rs1=inst_in[19:15];
							rs2=0;
							ren1=1;
							ren2=0;
							valid=0;
							rd=inst_in[11:7];
							wen=1;
							pwen=0;
							imm=temp_immI;
				end
				`IS : begin 
							rs1=inst_in[19:15];
							rs2=0;
							ren1=1;
							ren2=0;
							valid=1;
							rd=inst_in[11:7];
							wen=1;
							pwen=0;
							imm=temp_immI;
				end
					`U : begin 
							rs1=0;
							rs2=0;
							ren1=0;
							ren2=0;
							valid=0;
							rd=inst_in[11:7];
							wen=1;
							pwen=0;
							imm=temp_immU;
				end
					`J : begin 
							rs1=0;
							rs2=0;
							ren1=0;
							ren2=0;
							valid=0;
							rd=inst_in[11:7];
							wen=1;
							pwen=0;
							imm=temp_immJ;
				end
					`S : begin 
							rs1=inst_in[19:15];
							rs2=inst_in[24:20];
							ren1=1;
							ren2=1;
							valid=1;
							rd=0;
							wen=0;
							pwen=1;
							imm=temp_immS;							
							
				end
				    `B : begin 
							rs1=inst_in[19:15];
							rs2=inst_in[24:20];
							ren1=1;
							ren2=1;
							valid=0;
							rd=0;
							wen=0;
							pwen=0;
							imm=temp_immB;							
							
				end
				    `R : begin 
							rs1=inst_in[19:15];
							rs2=inst_in[24:20];
							ren1=1;
							ren2=1;
							valid=0;
							rd=inst_in[11:7];
							wen=1;
							pwen=0;
							imm=0;							
							
				end
				
				endcase
		end
		
endmodule