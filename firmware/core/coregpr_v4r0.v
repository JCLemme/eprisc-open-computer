// epRISC Core Registers, v1.1
// (C) 2016 by John C. Lemme - jclemme (at) proportionallabs (dot) (com)

// This file is part of the epRISC project, released under the MIT license. See "LICENSE" for details.

// This module implements the core's registers. It is designed to be replaceable with an Altera dual-port RAM for synthesis.
 
module GPR_epRISC(iClk, iRst, iAddrA, iDInA, oDOutA, iWriteA, iAddrB, iDInB, oDOutB, iWriteB);

    input iClk, iRst, iWriteA, iWriteB;
    input [5:0] iAddrA, iAddrB;
    input [31:0] iDInA, iDInB;
    output reg [31:0] oDOutA, oDOutB;
    
    reg [6:0] rClr;
    reg [31:0] rContents[0:63];
        
    always @(posedge iClk) begin
        if(iWriteA) begin
            rContents[iAddrA] <= iDInA;
        end
        
        if(iWriteB) begin
            rContents[iAddrB] <= iDInB;
        end
    end
    
    always @(posedge iClk) begin
        if(!iWriteA) begin
            oDOutA <= rContents[iAddrA];
        end
    end
    
    always @(posedge iClk) begin
        if(!iWriteB) begin
            oDOutB <= rContents[iAddrB];
        end
    end
            
endmodule
