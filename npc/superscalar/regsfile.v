/************************************************************
Author:LiGuoqi
Name:regfile.v
Function:32 general purpose registers
************************************************************/
`include "defines.v"
module regsfile (
	input                   wire                                     clk            ,
	input                   wire                                     rst            ,

	input                   wire     [`ysyx22040228_REGADDRBUS]      waddr          ,
	input                   wire     [`ysyx22040228_REGBUS]          wdata          ,
	input                   wire                                     we             ,  

	input                   wire     [`ysyx22040228_REGADDRBUS]      raddr1_1       ,
	output                  wire     [`ysyx22040228_REGBUS]          rdata1_1       ,
	input                   wire                                     re1_1          ,

	input                   wire     [`ysyx22040228_REGADDRBUS]      raddr2_1       ,
	output                  wire     [`ysyx22040228_REGBUS]          rdata2_1       ,
	input                   wire                                     re2_1          ,    

	input                   wire     [`ysyx22040228_REGADDRBUS]      raddr1_2       ,
	output                  wire     [`ysyx22040228_REGBUS]          rdata1_2       ,
	input                   wire                                     re1_2          ,

	input                   wire     [`ysyx22040228_REGADDRBUS]      raddr2_2       ,
	output                  wire     [`ysyx22040228_REGBUS]          rdata2_2       ,
	input                   wire                                     re2_2          ,   

	input                   wire                                     x1_read_ena    ,
	output                  wire     [`ysyx22040228_REGBUS]          x1_data        ,
	input                   wire     [`ysyx22040228_REGADDRBUS]      x1_addr        
);

import "DPI-C" function void difftest_dut_regs(
	input longint Z0 ,
	input longint ra ,
	input longint sp ,
	input longint gp ,
	input longint tp ,
	input longint t0 ,
	input longint t1 ,
	input longint t2 ,
	input longint fp ,
	input longint s1 ,
	input longint a0 ,
	input longint a1 ,
	input longint a2 ,
	input longint a3 ,
	input longint a4 ,
	input longint a5 ,
	input longint a6 ,
	input longint a7 ,
	input longint s2 ,
	input longint s3 ,
	input longint s4 ,
	input longint s5 ,
	input longint s6 ,
	input longint s7 ,
	input longint s8 ,
	input longint s9 ,
	input longint s10 ,
	input longint a11 ,
    input longint t3 ,
	input longint t4 ,
	input longint t5 ,
	input longint t6 
);

always@(*)begin
	difftest_dut_regs(
		regs[0],
		regs[1],
		regs[2],
		regs[3],
		regs[4],
		regs[5],
		regs[6],
		regs[7],
		regs[8],
		regs[9],
		regs[10],
		regs[11],
		regs[12],
		regs[13],
		regs[14],
		regs[15],
		regs[16],
		regs[17],
		regs[18],
		regs[19],
		regs[20],
		regs[21],
		regs[22],
		regs[23],
		regs[24],
		regs[25],
		regs[26],
		regs[27],
		regs[28],
		regs[29],
		regs[30],
		regs[31]
	);
end

reg [`ysyx22040228_REGBUS] regs [0:31] ;

integer i ;

always @(posedge clk) begin
	if(rst == `ysyx22040228_RSTENA) begin
		for(i = 0;i<32;i=i+1) begin
			regs[i] <= `ysyx22040228_ZEROWORD ;
		end
	end
	else if(we == `ysyx22040228_WENABLE && waddr != 5'd0) begin
			regs[waddr] <= wdata ;
	end
end


assign rdata1_1 = (rst == `ysyx22040228_RSTENA)                                                                ? `ysyx22040228_ZEROWORD     :
                  ((re1_1 == `ysyx22040228_RENABLE) && (waddr == raddr1_1) && (we == `ysyx22040228_WENABLE)) ? wdata                        :
                                                                                                                              regs[raddr1_1];       
assign rdata2_1 = (rst == `ysyx22040228_RSTENA)                                                                ? `ysyx22040228_ZEROWORD     :
                  ((re2_1 == `ysyx22040228_RENABLE) && (waddr == raddr2_1) && (we == `ysyx22040228_WENABLE)) ? wdata                        :
                                                                                                                              regs[raddr2_1];    
assign rdata1_2 = (rst == `ysyx22040228_RSTENA)                                                                ? `ysyx22040228_ZEROWORD     :
                  ((re1_2 == `ysyx22040228_RENABLE) && (waddr == raddr1_2) && (we == `ysyx22040228_WENABLE)) ? wdata                        :
                                                                                                                              regs[raddr1_2];    
assign rdata2_2 = (rst == `ysyx22040228_RSTENA)                                                                ? `ysyx22040228_ZEROWORD     :
                  ((re2_2 == `ysyx22040228_RENABLE) && (waddr == raddr2_2) && (we == `ysyx22040228_WENABLE)) ? wdata                        :
                                                                                                                              regs[raddr2_2];    

assign x1_data  = (rst == `ysyx22040228_RSTENA)                                                                   ? `ysyx22040228_ZEROWORD  :
                  ((x1_read_ena == `ysyx22040228_RENABLE) && (waddr == x1_addr) && (we == `ysyx22040228_WENABLE)) ? wdata                   :
                                                                                                                               regs[x1_addr];
endmodule//regfile

