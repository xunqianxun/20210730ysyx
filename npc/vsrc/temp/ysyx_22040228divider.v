/************************************************************
Author:LiGuoqi
Name:divider.v
Function:execute muliplication instruction
************************************************************/
`include "ysyx_22040228defines.v"

`define ysyx22040228_DIV_SIGN       3'b001 
`define ysyx22040228_DIV_DOING      3'b010
`define ysyx22040228_DIV_READUC     3'b100

module ysyx_22040228divider (
    input        wire                                       clk               ,
    input        wire                                       rst               ,

    input        wire    [63:0]                             diviser           ,
    input        wire    [63:0]                             dividend          ,
    input        wire    [7 :0]                             inst_opcode       ,
    input        wire                                       div_ready         ,
    output       wire    [63:0]                             div_rem_data      ,
    output       wire                                       div_finish                               
);


reg     [6:0]    counter ;
reg              sign    ;
reg              sign_y  ;
reg     [63:0]   dividend_t;
reg     [63:0]   divider_t ;

reg     [127: 0] temp_a   ;
reg     [64:0]   temp_b   ;
reg              finish   ;
wire             sigin_inst ;
reg     [63:0]   shang_temp ;
assign sigin_inst = (inst_opcode == `INST_DIV) || (inst_opcode == `INST_DIVW) || (inst_opcode == `INST_REM) || (inst_opcode == `INST_REMW);
always @(posedge clk ) begin
    if(rst == `ysyx22040228_RSTENA) begin
        counter <= 7'b0     ;
        dividend_t <= 64'h0 ;
        divider_t  <= 64'h0 ;
        temp_a     <= 128'h0 ;
        temp_b     <= 65'h0  ;
        finish     <= 1'b0   ;
        sign       <= 1'b0   ;
        sign_y     <= 1'b0   ;
    end
    else begin
        case (counter)
            0 : begin
                if(div_ready) begin
                    counter <= counter + 1 ;
                    finish  <= 1'b0        ;
                    if((sigin_inst) && (dividend[63]) && (diviser[63])) begin
                        dividend_t <= ~dividend + 1 ;
                        divider_t  <= ~diviser + 1  ;
                        sign       <= 1'b0          ;
                        sign_y     <= 1'b1          ;
                    end 
                    else if((sigin_inst) && dividend[63]) begin
                        dividend_t <= ~dividend + 1 ;
                        divider_t  <= diviser       ;
                        sign       <= 1'b1           ;
                        sign_y     <= 1'b1           ;
                    end 
                    else if((sigin_inst) && diviser[63]) begin
                        divider_t   <= ~diviser + 1    ;
                        dividend_t  <= dividend        ;
                        sign        <= 1'b1            ;
                        sign_y      <= 1'b0            ;
                    end
                    else begin
                        divider_t  <= diviser  ;
                        dividend_t <= dividend ;
                        sign       <= 1'b0     ; 
                        sign_y     <= 1'b0     ;
                    end 
                end
            end
            1 : begin
                temp_a <= {64'b0, dividend_t};
                temp_b <= {1'b0, divider_t} ;
                counter <= counter + 1 ;
            end  
            66 : begin
                finish <= 1'b1 ;
                counter <= counter + 1 ;
            end 
            67 : begin
                 counter <= 7'h0 ;
                 finish <= 1'b0  ;
            end 
            default:  begin
                counter <= counter + 1 ;
                if(temp_a[127:63] >= temp_b) begin 
                    temp_a <= ({(temp_a[127:63] - temp_b), temp_a[62:0]}) ;
                    shang_temp <= {shang_temp[62:0], 1'b1};
                end 
                else begin 
                    temp_a <= temp_a ;
                    shang_temp <= {shang_temp[62:0], 1'b0};
                end 
            end 
        endcase
    end 
end

reg [63:0] yushu ;
reg [63:0] shang ;

always @(*) begin
    if(rst == `ysyx22040228_RSTENA) begin
        yushu = `ysyx22040228_ZEROWORD ;
        shang = `ysyx22040228_ZEROWORD ;
    end 
    else if(finish) begin
        if((sign) && (!sign_y)) begin
            yushu = temp_a[127:64]      ;
            shang = ~shang_temp     + 1 ;
        end 
        else if((sign) && (sign_y)) begin
            yushu = ~temp_a[127:64] + 1 ;
            shang = ~shang_temp     + 1 ;
        end 
        else if((!sign) && (sign_y)) begin
            yushu = ~temp_a[127:64] + 1 ;
            shang = shang_temp          ;
        end 
        else begin
            yushu = temp_a[127:64] ;
            shang = shang_temp     ;
        end 
    end
    else begin
        yushu = temp_a[127:64] ;
        shang = shang_temp     ;
    end 
end

assign div_finish = finish ;
assign div_rem_data = ((inst_opcode == `INST_DIV) || (inst_opcode == `INST_DIVU) || (inst_opcode == `INST_DIVUW) || (inst_opcode == `INST_DIVW)) ? shang :
                      ((inst_opcode == `INST_REM) || (inst_opcode == `INST_REMU) || (inst_opcode == `INST_REMUW) || (inst_opcode == `INST_REMW)) ? yushu :
                      `ysyx22040228_ZEROWORD ;
endmodule
