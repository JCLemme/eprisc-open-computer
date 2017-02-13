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

module SPI_epRISC(iClk, iRst, oInt, iAddr, bData, iWrite, iEnable, iTxClk, iMISO, oMOSI, oSS, oSCLK);

    input iClk, iRst, iWrite, iEnable, iTxClk, iMISO;
    input [1:0] iAddr;
    inout [31:0] bData;
    output wire oInt, oMOSI, oSS, oSCLK;
    
    reg [3:0] rState, rPrevState, rNextState;
    reg [7:0] rDataBuf;
    reg [31:0] rControl, rDataIn, rDataOut;

    assign oMOSI = (rState > 7) ? 1 : rDataIn[rState];
    assign oSS = 0;//!rControl[6];
    assign oSCLK = (rState < 8) ? iTxClk : 1;
    
    assign bData = (iWrite || !iEnable) ? 32'bz : (iAddr==0)?((rState!=`sIdle)?rControl|32'h80:rControl):((iAddr==1)?rDataIn:((iAddr==2)?rDataOut:32'b1));

    always @(negedge iTxClk) begin
        if(iRst) begin
            rPrevState <= `sIdle;
            rState <= `sIdle;
        end else begin
            rPrevState <= rState;
            rState <= rNextState;
        end
    end
    
    always @(posedge iClk) begin
        if(iRst) begin
            rControl <= 0;
        end else begin
            if(iWrite && iEnable && iAddr == 0)
                rControl <= bData;
            if(rState == `sBit0)
                rControl[7] <= 0;
            //if(rDataBuf == 8'hFF)
            //    rControl[8] <= 1;
        end
    end
    
    always @(posedge iClk) begin
        if(iRst) begin
            rDataIn <= 0;
        end else begin  
            if(iWrite && iEnable && iAddr == 1) begin
                rDataIn <= bData;
            end
        end
    end
    
    always @(posedge iClk) begin
        if(iRst) begin
            rDataOut <= 0;
        end else begin       
            if(rPrevState == `sDummy)
                rDataOut[7:0] <= rDataBuf;
        end
    end 
    
    always @(posedge iTxClk) begin
        if(iRst) begin
            rDataBuf <= 0;
        end else begin
            if(rState < 8)
                rDataBuf[rState] <= iMISO;
        end
    end
    
    always @(*) begin
        case(rState)
            `sIdle: rNextState = (rControl[7]) ? `sBit7 : `sIdle;
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
        endcase
    end
    
endmodule
