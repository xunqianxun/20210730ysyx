`include "defines.v"
module ex_submit (
    input        wire                                               clk           , 
    input        wire                                               rst           ,
     
    input        wire        [`ysyx22040228_PCBUS]                  socreboard_pc ,

    input        wire        [`ysyx22040228_REGBUS]                 ao_data_in    ,
    input        wire        [`ysyx22040228_REGADDRBUS]             ao_addr_in    ,
    input        wire        [`ysyx22040228_PCBUS]                  ao_pc_in      ,
    input        wire        [`ysyx22040228_INSTBUS]                ao_inst_in    ,
    input        wire                                               ao_ena_in     ,

    input        wire        [`ysyx22040228_REGBUS]                 at_data_in    ,
    input        wire        [`ysyx22040228_REGADDRBUS]             at_addr_in    ,
    input        wire        [`ysyx22040228_PCBUS]                  at_pc_in      ,
    input        wire        [`ysyx22040228_INSTBUS]                at_inst_in    ,
    input        wire                                               at_ena_in     ,

    input        wire        [`ysyx22040228_REGBUS]                 mm_data_in    ,
    input        wire        [`ysyx22040228_REGADDRBUS]             mm_addr_in    ,
    input        wire        [`ysyx22040228_PCBUS]                  mm_pc_in      ,
    input        wire                                               mm_ena_in     ,

    output       reg         [`ysyx22040228_PCBUS]                  ao_pc_out     ,
    output       reg         [`ysyx22040228_REGBUS]                 ao_data_out   ,
    output       reg         [`ysyx22040228_REGADDRBUS]             ao_addr_out   ,
    output       reg         [`ysyx22040228_INSTBUS]                ao_inst_out   ,
    output       reg                                                ao_ena_out    ,

    output       reg         [`ysyx22040228_PCBUS]                  at_pc_out     ,
    output       reg         [`ysyx22040228_REGBUS]                 at_data_out   ,
    output       reg         [`ysyx22040228_REGADDRBUS]             at_addr_out   ,
    output       reg         [`ysyx22040228_INSTBUS]                at_inst_out   ,
    output       reg                                                at_ena_out    ,

    output       reg         [`ysyx22040228_PCBUS]                  mm_pc_out     ,
    output       reg         [`ysyx22040228_REGBUS]                 mm_data_out   ,
    output       reg         [`ysyx22040228_REGADDRBUS]             mm_addr_out   ,
    output       reg                                                mm_ena_out    
);

    wire  [2:0]  gating    ;
    assign       gating[0] = (socreboard_pc < ao_pc_in) ? 1'b0 : 1'b1 ;
    assign       gating[1] = (socreboard_pc < at_pc_in) ? 1'b0 : 1'b1 ;
    assign       gating[2] = (socreboard_pc < mm_pc_in) ? 1'b0 : 1'b1 ;    

    always @(posedge clk) begin
        if(rst == `ysyx22040228_RSTENA) begin
            ao_pc_out   <= 64'h0                  ;
            ao_data_out <= `ysyx22040228_ZEROWORD ;
            ao_addr_out <= 5'b00000               ;
            ao_ena_out  <= 1'b0                   ;
            at_pc_out   <= 64'h0                  ;
            at_data_out <= `ysyx22040228_ZEROWORD ;
            at_addr_out <= 5'b00000               ;
            at_ena_out  <= 1'b0                   ;
            mm_pc_out   <= 64'h0                  ;
            mm_data_out <= `ysyx22040228_ZEROWORD ;
            mm_addr_out <= 5'b00000               ;
            mm_ena_out  <= 1'b0                   ;
        end    
        else begin
            ao_pc_out   <= ({64{gating[0]}} & ao_pc_in)  ;
            ao_data_out <= ({64{gating[0]}} & ao_data_in);
            ao_addr_out <= ({5{gating[0]}} & ao_addr_in) ;
            ao_inst_out <= ({32{gating[0]}} & ao_inst_in);
            ao_ena_out  <= gating[0] & ao_ena_in         ;
            at_pc_out   <= ({64{gating[1]}} & at_pc_in)  ;
            at_data_out <= ({64{gating[1]}} & at_data_in);
            at_addr_out <= ({5{gating[1]}} & at_addr_in) ;
            at_inst_out <= ({32{gating[0]}} & at_inst_in);
            at_ena_out  <= gating[1] & at_ena_in         ;
            mm_pc_out   <= ({64{gating[2]}} & mm_pc_in)  ;
            mm_data_out <= ({64{gating[2]}} & mm_data_in);
            mm_addr_out <= ({5{gating[2]}} & mm_addr_in) ;
            mm_ena_out  <= gating[2] & mm_ena_in         ;
        end 
    end
    
endmodule

