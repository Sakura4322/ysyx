module ysyx_24090015_control_unit(
    input ren1,ren2,wen,valid,pren,
    output reg ren1_out,ren2_out,wen_out,valid_out,pren_out
);

reg [3:0] cpu_state;

always @(*) begin

    case(cpu_state)
 
        `Fetch : begin

            ren1_out=0;
            ren2_out=0;
            wen_out=0;
            valid_out=0;
            pren_out=0;
            cpu_state = `Decode;
        end
        `Decode begin
             ren1_out = ren1;
             ren2_out = ren2;
             wen_out  = wen;
             valid_out= valid;
             pren_out = pren;
             cpu_state = `Fetch;
        end
        default : begin
            cpu_state = `Decode;
        end

        endcase
end

endmodule