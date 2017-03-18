// epRISC I/O module - RS232 UART (two-pin)
//
// written by John C. Lemme, jclemme (at) proportionallabs (dot) com
// this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.

// Everything here is unfinished and/or broken.
// Below there be dragons.

// Gonna need this later
/* verilator lint_off WIDTH */

 /* epRISC UART

Bits            1:0
Stop bits       2
Parity          3
Parity bit      4
Allow recv      5
Int recv        6
Send            7
Send all        8 */

`define sBit0       0
`define sBit1       1
`define sBit2       2
`define sBit3       3
`define sBit4       4
`define sBit5       5
`define sBit6       6
`define sBit7       7
`define sBitStart   9
`define sBitParity  10
`define sBitStopA   11
`define sBitStopB   12
`define sIdle       13
`define sWait       14

module epRISC_UART(iClk, iRst, oInt, iAddr, iData, oData, iWrite, iEnable, iSClk, iRX, oTX);

    input iClk, iRst, iWrite, iEnable, iSClk, iRX;
    input [1:0] iAddr;
    input [15:0] iData;
    output reg oInt;
    output wire oTX;
    output wire [15:0] oData;
    
    reg [3:0] rSendState, rSendNextState, rSendPrevState, rRecvState, rRecvNextState, rRecvPrevState;
    reg [5:0] rSendDataCnt, rRecvDataCnt;
    reg [7:0] rSendDataBuf, rRecvDataBuf;
    reg [15:0] rControl, rDataIn, rDataOut;
     
    assign oTX = (rSendState == `sBitStart) ? 0 : ((rSendState == `sIdle || rSendState == `sBitStopA || rSendState == `sBitStopB) ? 1 : rSendDataBuf[rSendState]);
    assign oData = (!iEnable) ? 16'bz : ((iAddr==0)?((rSendState==`sIdle)?rControl:rControl|16'h80):((iAddr==1)?rDataIn:((iAddr==2)?rDataOut:16'b1)));
    
    always @(posedge iClk) begin
        if(iRst) begin
            rControl <= 0;
        end else begin
            if(iWrite && iEnable && iAddr == 0)
                rControl <= iData;
            if(rSendPrevState == `sBitStopB)
                rControl[7] <= 0;
            if(rRecvPrevState == `sBitStopB)
                rControl[5] <= 0;
        end
    end

    always @(posedge iClk) begin
        if(iRst) begin
            rDataIn <= 16'h00;
        end else begin  
            if(iWrite && iEnable && iAddr == 1) begin
                rDataIn <= iData;
            end
        end
    end
    
    always @(posedge iClk) begin
        if(iRst) begin
            rDataOut <= 0;
        end else begin       
            if(((rRecvState == `sBitStopA) || (rRecvState == `sBitStopB)) && rControl[5])
                rDataOut[7:0] <= rRecvDataBuf;
        end
    end
    
    always @(posedge iSClk) begin
        if(rControl[6] && rRecvState == `sBitStopB)
            oInt <= 1;
        else
            oInt <= 0;
    end
    
    always @(posedge iSClk) begin
        if(rSendState == `sBitStart)
            rSendDataBuf <= rDataIn[7:0];
    end
    
    always @(posedge iSClk) begin
        if(iRst) begin
            rSendPrevState <= `sIdle;
            rSendState <= `sIdle;
        end else begin
            if(rSendState == `sIdle) begin
                rSendPrevState <= rSendState;
                rSendState <= rSendNextState;
                rSendDataCnt <= 0;
            end else begin
                rSendDataCnt <= rSendDataCnt + 1;
                if(rSendDataCnt[3:0] == 15) begin
                    rSendPrevState <= rSendState;
                    rSendState <= rSendNextState;
                end
            end
        end
    end
    
    always @(posedge iSClk) begin
        if(iRst) begin
            rRecvState <= `sIdle;
            rRecvPrevState <= `sIdle;
        end
        
        if(rRecvState == `sIdle) begin
            rRecvPrevState <= rRecvState;
            rRecvState <= rRecvNextState;
            rRecvDataCnt <= 8'h00;
        end else begin
            rRecvDataCnt <= rRecvDataCnt + 1;
            if(rRecvState == `sBitStart && rRecvDataCnt[3:0] == 7) begin
                rRecvDataCnt <= 8'hFF;
                rRecvPrevState <= rRecvState;
                rRecvState <= rRecvNextState;
            end else if(rRecvDataCnt[3:0] == 15) begin
                rRecvDataCnt <= 8'h00;
                rRecvPrevState <= rRecvState;
                rRecvState <= rRecvNextState;
                if(rRecvState < 8)
                    rRecvDataBuf[rRecvState] <= iRX;
            end
        end
    end
    
    always @(*) begin
        case(rSendState)
            `sBit7: rSendNextState = (rControl[4]) ? `sBitParity : ((rControl[2]) ? `sBitStopA : `sBitStopB);
            `sBit6: rSendNextState = `sBit7;       
            `sBit5: rSendNextState = `sBit6;       
            `sBit4: rSendNextState = `sBit5;       
            `sBit3: rSendNextState = `sBit4;       
            `sBit2: rSendNextState = `sBit3;       
            `sBit1: rSendNextState = `sBit2;       
            `sBit0: rSendNextState = `sBit1;
            `sBitStart: rSendNextState = (rControl[1:0]);
            `sBitParity: rSendNextState = (rControl[2]) ? `sBitStopA : `sBitStopB;
            `sBitStopA: rSendNextState = `sBitStopB;
            `sBitStopB: rSendNextState = `sIdle;
            `sIdle: rSendNextState = (rControl[7]) ? `sBitStart : `sIdle;
            `sWait: rSendNextState = `sIdle;
        endcase
    end
 
    always @(*) begin
        case(rRecvState)
            `sBit7: rRecvNextState = (rControl[4]) ? `sBitParity : ((rControl[2]) ? `sBitStopA : `sBitStopB);
            `sBit6: rRecvNextState = `sBit7;       
            `sBit5: rRecvNextState = `sBit6;       
            `sBit4: rRecvNextState = `sBit5;       
            `sBit3: rRecvNextState = `sBit4;       
            `sBit2: rRecvNextState = `sBit3;       
            `sBit1: rRecvNextState = `sBit2;       
            `sBit0: rRecvNextState = `sBit1;
            `sBitStart: rRecvNextState = `sWait; //(rControl[1:0]);
            `sBitParity: rRecvNextState = (rControl[2]) ? `sBitStopA : `sBitStopB;
            `sBitStopA: rRecvNextState = `sBitStopB;
            `sBitStopB: rRecvNextState = `sIdle;
            `sIdle: rRecvNextState = (!iRX /*&& rControl[5]*/) ? `sBitStart : `sIdle;
            `sWait: rRecvNextState = `sBit0;
        endcase
    end
        
endmodule
