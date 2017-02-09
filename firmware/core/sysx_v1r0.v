// sysX master controller - baseline implementation
// currently implementing sysX version 1
// 
// written by John C. Lemme, jclemme (at) proportionallabs (dot) com
// this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.

// Gonna need this here too
/* verilator lint_off WIDTH */

`define sPipeIdle       0
`define sPipeLoad       1
`define sPipeLowLow     2
`define sPipeLow        3
`define sPipeHigh       4
`define sPipeHighHigh   5
`define sPipeStore      6
`define sPipeInvalid    7

module epRISC_sysXBuffer(iClkA, iClkB, iRst, iAddrA, iDInA, oDOutA, iWriteA, iAddrB, iDInB, oDOutB, iWriteB);

    input iClk, iRst, iWriteA, iWriteB;
    input [7:0] iAddrA, iAddrB;
    input [31:0] iDInA, iDInB;
    output reg [31:0] oDOutA, oDOutB;
    
    reg [7:0] rClr;
    reg [31:0] rContents[0:255];
        
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

module epRISC_sysXMaster(iClock, iReset, iAddress, bData, iWrite, oInterrupt, iMasterClock, iBusMISO, oBusMOSI, oBusClock, iBusInterrupt, oBusSelect);

    // External I/O
    input iClock, iReset, iWrite, iMasterClock, iBusInterrupt;
    input [0:3] iAddress;
    input [0:7] iBusMISO;
    output wire oInterrupt, oBusClock;
    output wire [0:1] oBusSelect;
    output wire [0:7] oBusMOSI;
    inout [0:31] bData;

    // Internal control registers
    reg [0:7] rCounterMISO, rCounterMOSI;
    reg [0:31] rConfig, rDirectMOSI, rDirectMISO;
    wire [0:31] wDataMOSI, wDataMISO;
   
    wire fBeginSingle, fBeginBlock, fReceive;
    wire [0:1] fChipSelect;
    wire [0:7] fTransferCount;
    wire [0:11] fClockStep;
    
    // Bus clock control registers
    reg rDerivedClock;
    reg [0:11] rMasterClockCount;

    // Pipeline controller registers
    reg [0:3] rPipeState, rPipePrevState;
    wire [0:3] wPipeNextState;

    // Memory access registers
    wire wInternalWriteMISO;
    reg [0:31] rInternalDataMISO;
    wire [0:31] wInternalDataMISO;
    wire [0:31] wDataOutMISO, wDataOutMOSI, wTrashMISO;

    epRISC_sysXBuffer bufferMISO(iClock, rDerivedClock, iReset, rCounterMISO, wDataMISO, wDataOutMISO, (iWrite&&iAddress=='h7) ? 1'h1 : 1'h0, rCounterMISO, rInternalDataMISO, wTrashMISO, wInternalWriteMISO);
    epRISC_sysXBuffer bufferMOSI(iClock, rDerivedClock, iReset, iCounterMOSI, wDataMOSI, wDataOutMOSI, (iWrite&&iAddress=='h5) ? 1'h1 : 1'h0, rCounterMOSI, 32'h0BADC0DE, wInternalDataMOSI, 0);

    assign bData = (iWrite) ? 32'bz :
                   ((iAddress == 4'h0) rConfig :
                   (iAddress == 4'h1) rDirectMOSI :
                   (iAddress == 4'h2) rDirectMISO :
                   (iAddress == 4'h3) {24'h0, rCounterMOSI} : 
                   (iAddress == 4'h4) wDataMOSI :
                   (iAddress == 4'h5) {24'h0, rCounterMISO} :
                   (iAddress == 4'h6) wDataMISO : 32'h0BADC0DE);
    
    assign oBusClock = (rPipeState == `sPipeIdle) ? 1'h1 : rDerivedClock;
    assign oBusSelect = (rPipeState == `sPipeIdle) ? 2'h0 : fChipSelect;
    assign oInterrupt = iBusInterrupt;
    assign oBusMOSI = (rReceive) ? 8'hFF : 
                      ((rPipeState == `sPipeLoLo) ? wInternalDataMOSI[7:0] :
                      (rPipeState == `sPipeLo) ? wInternalDataMOSI[15:8] :
                      (rPipeState == `sPipeHi) ? wInternalDataMOSI[23:16] :
                      (rPipeState == `sPipeHiHi) ? wInternalDataMOSI[31:24] : 8'h0);

    assign wDataMISO = (iWrite && iAddress == 'h7) ? 32'bz : wDataOutMISO;
    assign wDataMOSI = (iWrite && iAddress == 'h5) ? 32'bz : wDataOutMOSI;
    assign wInternalWriteMISO = (rPipeState == `sPipeStore) ? 1'h1 : 1'h0;
    
    assign fBeginSingle = rConfig[0];
    assign fBeginBlock = rConfig[1];
    assign fChipSelect = rConfig[3:2];
    assign fReceive = rConfig[4];
    assign fTransferCount = rConfig[15:8];
    assign fClockStep = rConfig[27:16];

    // Clock controller
    always @(posedge iMasterClock) begin
        if(iReset) begin
            rMasterClockCount <= 12'h0;
        end else begin
            if(rMasterClockCount == fClockStep)
                rMasterClockCount <= 12'h0;

            rMasterClockCount <= rMasterClockCount + 12'h1;
        end
    end

    always @(posedge iMasterClock) begin
        if(iReset) begin
            rDerivedClock <= 1'h0;
        end else begin
            if(rMasterClockCount == fClockStep)
                rDerivedClock <= !rDerivedClock;
        end
    end

    // Pipeline controller
    always @(posedge rDerivedClock) begin
        if(iReset) begin
            rPipePrevState <= `sPipeIdle;
            rPipeState <= `sPipeIdle;
        end else begin
            rPipePrevState <= rPipeState;
            rPipeState <= wPipeNextState;
        end
    end

    always @(*) begin
        case(rPipeState)
            `sPipeIdle: rPipeNextState = (fBeginSingle || fBeginBlock) ? `sPipeLoad : `sPipeIdle;
            `sPipeLoad: rPipeNextState = `sPipeLoLo;
            `sPipeLoLo: rPipeNextState = `sPipeLo;
            `sPipeLo: rPipeNextState =  `sPipeHi;
            `sPipeHi: rPipeNextState = `sPipeHiHi;
            `sPipeHiHi: rPipeNextState = `sPipeStore;
            `sPipeStore: rPipeNextState = (fTransferCount == 8'h0) ? `sPipeIdle : `sPipeLoad;
            default:
        endcase
    end

    // Register controllers
    always @(negedge rDerivedClock) begin
        if(iReset) begin
            rCounterMISO <= 8'h0;
        end else begin
            if(rPipePrevState == `sPipeStore && fBeginBlock)
                rCounterMISO <= rCounterMISO + 8'h1;
            if(iAddress == 4'h5 && iWrite)
                rCounterMISO <= bData[7:0];
        end
    end

    always @(negedge rDerivedClock) begin
        if(iReset) begin
            rCounterMOSI <= 8'h0;
        end else begin
            if(rPipeState == `sPipeStore && fBeginBlock)
                rCounterMOSI <= rCounterMOSI + 8'h1;
            if(iAddress == 4'h3 && iWrite)
                rCounterMOSI <= bData[7:0];
        end
    end

    always @(negedge rDerivedClock) begin
        if(iReset) begin
            rConfig <= 32'h0;
        end else begin
            if(iAddress == 4'h0 && iWrite)
                rConfig <= bData;
            if(rPipePrevState == `sPipeStore && fBeginSingle)
                rConfig[0] <= 1'h0;
            if(rPipePrevState == `sPipeStore && fBeginBlock)
                rConfig[1] <= 1'h0;
            if(rPipeState == `sPipeLoad && fBeginBlock)
                rConfig[15:8] <= rConfig[15:8] - 8'h1;
        end
    end

    always @(negedge rDerivedClock) begin
        if(iReset) begin
            rDirectMOSI <= 32'h0;
        end else begin
            if(iAddress == 4'h1 && iWrite) 
                rDirectMOSI <= bData;
        end
    end

    always @(negedge rDerivedClock) begin
        if(iReset) begin
            rDirectMISO <= 32'h0;
        end else begin
            if(iAddress == 'h2 && iWrite)
                rDirectMISO <= bData;
            if(fBeginSingle && rPipeState == `sPipeStore)
                rDirectMISO <= rInternalDataMISO;
        end
    end

    always @(negedge rDerivedClock) begin
        if(iReset) begin
            rInternalDataMISO <= 0;
        end else begin
            if(rPipeState == `sPipeLoLo)
                rInternalDataMISO[7:0] <= iBusMISO;
            if(rPipeState == `sPipeLo)
                rInternalDataMISO[15:8] <= iBusMISO;
            if(rPipeState == `sPipeHi)
                rInternalDataMISO[23:16] <= iBusMISO;
            if(rPipeState == `sPipeHiHi)
                rInternalDataMISO[31:24] <= iBusMISO;
        end
    end
   
endmodule