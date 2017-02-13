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
`define sBitStop    11
`define sIdle       13
`define sWait       14

module PS2_epRISC(iClk, iRst, oInt, iAddr, bData, iWrite, iEnable, iDDat, iDClk);

    input iClk, iRst, iWrite, iEnable, iDDat, iDClk;
    input [1:0] iAddr;
    inout [31:0] bData;
    output reg oInt;
    
    reg [3:0] rSendState, rSendNextState, rSendPrevState, rRecvState, rRecvNextState, rRecvPrevState;
    reg [5:0] rSendDataCnt, rRecvDataCnt;
    reg [7:0] rSendDataBuf, rRecvDataBuf;
    reg [31:0] rControl, rDataIn, rDataOut;
     
    assign bData = (iWrite || !iEnable) ? 32'bz : ((iAddr==0)?rControl:((iAddr==1)?rDataIn:((iAddr==2)?rDataOut:32'b1)));
    
    always @(posedge iClk) begin
        if(iRst) begin
            rControl <= 0;
        end else begin
            if(iWrite && iEnable && iAddr == 0)
                rControl <= bData;
            if(rRecvPrevState == `sBitStop)
                rControl[5] <= 0;
        end
    end

    always @(posedge iClk) begin
        if(iRst) begin
            rDataIn <= 32'h00;
        end else begin  
            if(iWrite && iEnable && iAddr == 1) begin
                rDataIn <= bData;
            end
        end
    end
    
    always @(posedge iDClk) begin
        if(iRst) begin
            rDataOut <= 0;
        end else begin       
            if(rRecvPrevState == `sBitStop /*&& rControl[5]*/)
                rDataOut <= ((rDataOut & 32'hFF) << 8) | rRecvDataBuf;
        end
    end
        
    always @(posedge iDClk) begin
        if(iRst) begin
            rRecvState <= `sIdle;
            rRecvPrevState <= `sIdle;
        end else begin
            rRecvPrevState <= rRecvState;
            rRecvState <= rRecvNextState;
        end
    end
    
    always @(negedge iDClk) begin
        if(iRst) begin
            rRecvDataBuf <= 0;
        end else begin
            if(rRecvState < 8)
                rRecvDataBuf[rRecvState] <= iDDat;
        end
    end
    
    always @(*) begin
        case(rRecvState)
            `sBit7: rRecvNextState = `sBitParity;
            `sBit6: rRecvNextState = `sBit7;       
            `sBit5: rRecvNextState = `sBit6;       
            `sBit4: rRecvNextState = `sBit5;       
            `sBit3: rRecvNextState = `sBit4;       
            `sBit2: rRecvNextState = `sBit3;       
            `sBit1: rRecvNextState = `sBit2;       
            `sBit0: rRecvNextState = `sBit1;
            `sBitStart: rRecvNextState = `sBit0;
            `sBitParity: rRecvNextState = `sBitStop;
            `sBitStop: rRecvNextState = `sIdle;
            `sIdle: rRecvNextState = (!iDDat) ? `sBit0 : `sIdle;
        endcase
    end
        
endmodule
