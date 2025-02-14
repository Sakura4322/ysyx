module ysyx_24090015_control_unit(
    input clk,ren1,ren2,wen,valid,pwen,
    output reg ren1_out,ren2_out,wen_out,valid_out,pwen_out
);

reg [3:0] cpu_state;
reg [3:0] next_state;

always @(clk) begin
 cpu_state <= next_state;
end

always @(*) begin

    case(cpu_state)
 
        `Fetch : begin

            ren1_out=0;
            ren2_out=0;
            wen_out=0;
            valid_out=0;
            pwen_out=0;
            next_state <= `Decode;
        end
        `Decode : begin
             ren1_out = ren1;
             ren2_out = ren2;
             wen_out  = wen;
             valid_out= valid;
             pwen_out = pwen;
             next_state <= `Fetch;
        end
        default : begin
            next_state <= `Fetch;
        end

        endcase
end

endmodule