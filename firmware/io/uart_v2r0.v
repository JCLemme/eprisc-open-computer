// epRISC I/O module - RS232 UART (two-pin)
//
// written by John C. Lemme, jclemme (at) proportionallabs (dot) com
// this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.

// Everything here is unfinished and/or broken.
// Below there be dragons.

// Gonna need this later
/* verilator lint_off WIDTH */


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
    reg [4:0] rRecvCountSto, rRecvCountAck, rSendCountSto, rSendCountAck;
    reg [5:0] rSendDataCnt, rRecvDataCnt;
    reg [7:0] rSendDataBuf, rRecvDataBuf;
    reg [15:0] rControl, rDataIn, rDataOut;
     
    wire fReceiveEnable, fReceiveActive, fInterruptEnable;
    wire fSendEnable, fSendActive;
    wire fParityEnable, fParityMode, fStopBits, fWordLength;
    
    assign fReceiveEnable = rControl[5];
    assign fReceiveActive = rControl[4];
    assign fInterruptEnable = rControl[8];
    assign fSendEnable = rControl[7];
    assign fSendActive = rControl[6];
    assign fParityEnable = rControl[10];
    assign fParityMode = rControl[9];
    assign fStopBits = rControl[11];
    assign fWordLength = rControl[13:12];
        
    assign oTX = (rSendState == `sBitStart) ? 0 : ((rSendState == `sIdle || rSendState == `sBitStopA || rSendState == `sBitStopB) ? 1 : rSendDataBuf[rSendState]);
    assign oData = (!iEnable) ? 16'bz : ((iAddr==0)?((1)?rControl:rControl):((iAddr==1)?rDataIn:((iAddr==2)?rDataOut:16'b1)));

    always @(negedge iClk or posedge iRst) begin
        if(iRst) begin
            rControl <= 0;
            rRecvCountSto <= 0;
            rSendCountSto <= 0;
        end else begin
            if(iWrite && iEnable && iAddr == 0)
                rControl <= iData;

            if(rSendState == `sBitStart)
                rControl[6] <= 1;
                
            if(rSendState == `sBit4)
                rControl[7] <= 0;
                
            if(rSendState == `sIdle)
                rControl[4] <= 0;
            else
                rControl[4] <= 1;
                
            if(rSendState==`sIdle)
                rControl[6] <= 0;
            
            if((rRecvCountAck > rRecvCountSto) || (rRecvCountAck == 5'h0 && rRecvCountSto == 5'h1F)) begin
                rRecvCountSto <= rRecvCountAck;
                rControl[5] <= 0;
            end
        end
    end

    always @(negedge iClk or posedge iRst) begin
        if(iRst) begin
            rDataIn <= 16'h00;
        end else begin  
            if(iWrite && iEnable && iAddr == 1) begin
                rDataIn <= iData;
            end
        end
    end
    
    always @(posedge iSClk or posedge iRst) begin
        if(iRst) begin
            rDataOut <= 0;
        end else begin       
            if(((rRecvState == `sBitStopA) || (rRecvState == `sBitStopB)) && rControl[5])
                rDataOut[7:0] <= rRecvDataBuf;
        end
    end
    
    always @(posedge iSClk) begin
        if(rControl[8] && rRecvState == `sBitStopB)
            oInt <= 1;
        else
            oInt <= 0;
    end
    
    always @(posedge iSClk) begin
        if(rSendState == `sBitStart)
            rSendDataBuf <= rDataIn[7:0];
    end
    
    always @(posedge iSClk or posedge iRst) begin
        if(iRst) begin
            rSendPrevState <= `sIdle;
            rSendState <= `sIdle;
            rSendCountAck <= 0;
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
                    
                    if(rSendState == `sBitStopB)
                        rSendCountAck <= rSendCountAck + 5'h1;
                end
            end
        end
    end
    
    always @(posedge iSClk or posedge iRst) begin
        if(iRst) begin
            rRecvState <= `sIdle;
            rRecvPrevState <= `sIdle;
            rRecvCountAck <= 0;
        end else begin  
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
                    
                    if(rRecvState == `sBitStopB)
                        rRecvCountAck <= rRecvCountAck + 5'h1;
                end
            end
        end
    end
    
    always @(*) begin
        case(rSendState)
            `sBit7: rSendNextState = `sBitStopB; //(rControl[4]) ? `sBitParity : ((rControl[2]) ? `sBitStopA : `sBitStopB);
            `sBit6: rSendNextState = `sBit7;       
            `sBit5: rSendNextState = `sBit6;       
            `sBit4: rSendNextState = `sBit5;       
            `sBit3: rSendNextState = `sBit4;       
            `sBit2: rSendNextState = `sBit3;       
            `sBit1: rSendNextState = `sBit2;       
            `sBit0: rSendNextState = `sBit1;
            `sBitStart: rSendNextState = `sBit0; //(rControl[1:0]);
            `sBitParity: rSendNextState = (rControl[2]) ? `sBitStopA : `sBitStopB;
            `sBitStopA: rSendNextState = `sBitStopB;
            `sBitStopB: rSendNextState = `sIdle;
            `sIdle: rSendNextState = (rControl[7]) ? `sBitStart : `sIdle;
            `sWait: rSendNextState = `sIdle;
            default: rSendNextState = `sIdle;
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
            `sIdle: rRecvNextState = (!iRX && rControl[5] && (rRecvCountAck == rRecvCountSto)) ? `sBitStart : `sIdle;
            `sWait: rRecvNextState = `sBit0;
            default: rRecvNextState = `sIdle;
        endcase
    end
        
endmodule
