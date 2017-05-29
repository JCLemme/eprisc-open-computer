// epRISC I/O module - RS232 UART (two-pin)
//
// written by John C. Lemme, jclemme (at) proportionallabs (dot) com
// this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.

// Everything here is unfinished and/or broken.
// Below there be dragons.

// Gonna need this later
/* verilator lint_off WIDTH */

`define sBit0           0
`define sBit1           1
`define sBit2           2
`define sBit3           3
`define sBit4           4
`define sBit5           5
`define sBit6           6
`define sBit7           7
`define sIdle           8
`define sEnableSS       9
`define sDisableSS      10
`define sDummy          11
`define sDummyTwo       12

module epRISC_SPI(iClk, iRst, oInt, iAddr, iData, oData, iWrite, iEnable, iMasterClk, iMISO, oMOSI, oSS, oSCLK);

    input iClk, iRst, iWrite, iEnable, iMasterClk, iMISO;
    input [1:0] iAddr;
    input [15:0] iData;
    output wire oInt, oMOSI, oSCLK;
    output wire [3:0] oSS;
    output wire [15:0] oData;
    
    reg rTxClk;
    reg [1:0] rClkDivide;
    reg [3:0] rState, rPrevState, rNextState;
    reg [4:0] rLockSto, rLockAck;
    reg [7:0] rDataBuf;
    reg [15:0] rControl, rDataIn, rDataOut;
    
    assign oMOSI = (rState > 7) ? 1 : rDataIn[rState];
    assign oSS = ~rControl[6:3];
    assign oSCLK = (rState < 8) ? rTxClk : 0;
    
    assign oData = (!iEnable) ? 16'bz : (iAddr==0)?((rState!=`sIdle)?rControl|16'h80:rControl):((iAddr==1)?rDataIn:((iAddr==2)?rDataOut:16'b1));

    wire tmpClock;
    assign tmpClock = (rState == `sIdle) ? iClk : rTxClk;
    
    always @(posedge iMasterClk or posedge iRst) begin
        if(iRst) begin
            rClkDivide <= 0;
            rTxClk <= 0;
         end else begin
            rClkDivide <= rClkDivide + 1;
            if(rClkDivide == 3)
                rTxClk <= !rTxClk;
         end
    end
    
    always @(negedge rTxClk or posedge iRst) begin
        if(iRst) begin
            rPrevState <= `sIdle;
            rState <= `sIdle;
            rLockAck <= 0;
        end else begin
            rPrevState <= rState;
            rState <= rNextState;

            if(rState == `sDisableSS)
                rLockAck <= rLockAck + 5'h1;
        end
    end
    
    always @(posedge iClk or posedge iRst) begin
        if(iRst) begin
            rControl <= 0;
            rLockSto <= 0;
        end else begin
            if(iWrite && iEnable && iAddr == 0)
                rControl <= iData;
            if((rLockAck > rLockSto) || (rLockAck == 5'h0 && rLockSto == 5'h1F)) begin
                rLockSto <= rLockAck;
                rControl[7] <= 1'h0;
            end
        end
    end
    
    always @(posedge iClk or posedge iRst) begin
        if(iRst) begin
            rDataIn <= 0;
        end else begin  
            if(iWrite && iEnable && iAddr == 1) begin
                rDataIn <= iData;
            end
        end
    end
    
    always @(posedge rTxClk or posedge iRst) begin
        if(iRst) begin
            rDataOut <= 0;
        end else begin       
            if(rState == `sDummy)
                rDataOut[7:0] <= rDataBuf;
        end
    end 
    
    always @(posedge rTxClk or posedge iRst) begin
        if(iRst) begin
            rDataBuf <= 0;
        end else begin
            if(rState < 8)
                rDataBuf[rState] <= iMISO;
        end
    end
    
    always @(*) begin
        case(rState)
            `sIdle: rNextState = (rControl[7] && (rLockAck == rLockSto)) ? `sBit7 : `sIdle;
            `sEnableSS: rNextState = `sBit7;
            `sBit7: rNextState = `sBit6;          
            `sBit6: rNextState = `sBit5;
            `sBit5: rNextState = `sBit4;            
            `sBit4: rNextState = `sBit3;            
            `sBit3: rNextState = `sBit2;           
            `sBit2: rNextState = `sBit1;            
            `sBit1: rNextState = `sBit0;            
            `sBit0: rNextState = `sDummy;
            `sDummy: rNextState = `sDisableSS;
            `sDisableSS: rNextState = `sIdle;      
            default: rNextState = `sIdle; 
        endcase
    end
    
endmodule
