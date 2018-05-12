// sysX master controller - baseline implementation
// currently implementing sysX version 1
// 
// written by John C. Lemme, jclemme (at) proportionallabs (dot) com
// this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.

// Gonna need this here too
/* verilator lint_off WIDTH */
/* verilator lint_off MULTIDRIVEN */


`define sPipeIdle       0
`define sPipeLoad       1
`define sPipeLoLo       2
`define sPipeLo         3
`define sPipeHi         4
`define sPipeHiHi       5
`define sPipeRegister   6
`define sPipeStore      7
`define sPipeInvalid    8

module epRISC_sysXBuffer(iAddrA, iAddrB, iClkA, iClkB, iDInA, iDInB, iWriteA, iWriteB, oDOutA, oDOutB);     

    input iClkA, iClkB, iWriteA, iWriteB;
    input [7:0] iAddrA, iAddrB;
    input [31:0] iDInA, iDInB;
    output reg [31:0] oDOutA, oDOutB;
    
    reg [7:0] rClr;
    reg [31:0] rContents[0:255];
        
    always @(posedge iClkA) begin
        if(iWriteA) begin
            rContents[iAddrA] <= iDInA;
        end
    end

    always @(posedge iClkB) begin
        if(iWriteB) begin
            rContents[iAddrB] <= iDInB;
        end
    end
    
    always @(posedge iClkA) begin
        if(!iWriteA) begin
            oDOutA <= rContents[iAddrA];
        end
    end
    
    always @(posedge iClkB) begin
        if(!iWriteB) begin
            oDOutB <= rContents[iAddrB];
        end
    end
            
endmodule

module epRISC_sysXMaster(iClock, iReset, iAddress, bData, iWrite, iEnable, oInterrupt, iMasterClock, iBusMISO, oBusMOSI, oBusClock, iBusInterrupt, oBusSelect, oDebug);

    // External I/O
    input iClock, iReset, iWrite, iEnable, iMasterClock/* verilator clock_enable*/, iBusInterrupt;
    input [3:0] iAddress;
    input [7:0] iBusMISO;
    output wire oInterrupt, oDebug; 
    
    `ifdef EMULATED
    output reg oBusClock/* verilator clock_enable*/;
    `else
    output wire oBusClock/* verilator clock_enable*/;
    `endif
    
    output wire [1:0] oBusSelect;
    output wire [7:0] oBusMOSI;
    inout [31:0] bData;

    // Internal control registers
    reg [7:0] rCounterMISO, rCounterMOSI, rInternalCounterMISO, rInternalCounterMOSI, rTransferCount;
    reg [31:0] rConfig, rDirectMOSI, rDirectMISO;
    wire [31:0] wDataMOSI, wDataMISO;
   
    wire fBeginSingle, fBeginBlock, fReceive;
    wire [1:0] fChipSelect;
    wire [7:0] fTransferCount;
    wire [11:0] fClockStep;
    
    // Bus clock control registers
    reg rDerivedClock/* verilator clock_enable*/;
    reg [11:0] rMasterClockCount;

    // Pipeline controller registers
    reg [4:0] rPipeState, rPipePrevState, rPipeNextState;
    reg [4:0] rLockAck, rLockSto;
    
    // Memory access registers
    wire wInternalWriteMISO;
    reg [31:0] rInternalDataMISO;
    wire [31:0] wInternalDataMOSI, wDistributionMOSI;
    wire [31:0] wDataOutMISO, wDataOutMOSI, wTrashMISO;

    `ifdef EMULATED
    epRISC_sysXBuffer bufferMISO(rCounterMISO, rInternalCounterMISO, iClock, rDerivedClock, wDataMISO, rInternalDataMISO, (iWrite&&iAddress==4'h6) ? 1'h1 : 1'h0, wInternalWriteMISO, wDataOutMISO, wTrashMISO);
    epRISC_sysXBuffer bufferMOSI(rCounterMOSI, rInternalCounterMOSI, iClock, rDerivedClock, wDataMOSI, 32'h1BADC0DE, (iWrite&&iAddress==4'h4) ? 1'h1 : 1'h0, 1'h0, wDataOutMOSI, wInternalDataMOSI);
    `else
    OnChipBuffer      bufferMISO(rCounterMISO, rInternalCounterMISO, iClock, rDerivedClock, wDataMISO, rInternalDataMISO, (iWrite&&iAddress==4'h6) ? 1'h1 : 1'h0, wInternalWriteMISO, wDataOutMISO, wTrashMISO);
    OnChipBuffer      bufferMOSI(rCounterMOSI, rInternalCounterMOSI, iClock, rDerivedClock, wDataMOSI, 32'h1BADC0DE, (iWrite&&iAddress==4'h4) ? 1'h1 : 1'h0, 1'h0, wDataOutMOSI, wInternalDataMOSI);
    `endif

    assign bData = (iWrite || !iEnable) ? 32'bz :
                   ((iAddress == 4'h0) ? rConfig :
                   (iAddress == 4'h1) ? rDirectMOSI :
                   (iAddress == 4'h2) ? rDirectMISO :
                   (iAddress == 4'h3) ? {24'h0, rCounterMOSI} : 
                   (iAddress == 4'h4) ? wDataMOSI :
                   (iAddress == 4'h5) ? {24'h0, rCounterMISO} :
                   (iAddress == 4'h6) ? wDataMISO : 32'h0BADC0DE);
    
    assign oDebug = (iEnable) ? 1 : 0;
    
    `ifndef EMULATED
    assign oBusClock = (rPipeState == `sPipeIdle) ? 1'h1 : rDerivedClock;
    `endif
    
    assign oBusSelect = fChipSelect; //(rPipeState == `sPipeIdle) ? 2'h0 : fChipSelect;
    assign oInterrupt = iBusInterrupt;
    assign oBusMOSI = (fReceive) ? 8'hFF : 
                      ((rPipeState == `sPipeLoLo) ? wDistributionMOSI[7:0] :
                      (rPipeState == `sPipeLo) ? wDistributionMOSI[15:8] :
                      (rPipeState == `sPipeHi) ? wDistributionMOSI[23:16] :
                      (rPipeState == `sPipeHiHi) ? wDistributionMOSI[31:24] : 8'h0);

    assign wDataMISO = (iWrite && iAddress == 4'h6) ? bData : wDataOutMISO;
    assign wDataMOSI = (iWrite && iAddress == 4'h4) ? bData : wDataOutMOSI;
    assign wInternalWriteMISO = (rPipeState == `sPipeStore) ? 1'h1 : 1'h0;
    assign wDistributionMOSI = (fBeginSingle || rConfig[1]) ? rDirectMOSI : wInternalDataMOSI;

    assign fBeginSingle = rConfig[0];
    assign fBeginBlock = 0;//rConfig[1];
    assign fChipSelect = rConfig[3:2];
    assign fReceive = rConfig[4];
    assign fTransferCount = rConfig[15:8];
    assign fClockStep = rConfig[27:16];

    // Clock controller
    always @(posedge iMasterClock) begin
        if(iReset) begin
            rMasterClockCount <= 12'h0;
        end else begin
            if(iAddress == 4'h0 && iWrite && iEnable)
                rMasterClockCount <= 12'h0;

            else if(rMasterClockCount == 3)
                rMasterClockCount <= 12'h0;
            else
                rMasterClockCount <= rMasterClockCount + 12'h1;
        end
    end


    `ifdef EMULATED
    always @(posedge iMasterClock) begin
        if(iReset) begin
            rDerivedClock = 1'h0;
            oBusClock = 1'h1;
        end else begin
            if(rMasterClockCount == 0) begin
                rDerivedClock = !rDerivedClock;
                if(rPipeState == `sPipeIdle)
                    oBusClock = 1'h1;
                else
                    oBusClock = rDerivedClock;
            end
        end
    end
    `else
    always @(posedge iMasterClock) begin
        if(iReset) begin
            rDerivedClock <= 1'h0;
        end else begin
            if(rMasterClockCount == 0) begin
                rDerivedClock <= !rDerivedClock;
        end
    end
    `endif


    // Pipeline controller
    always @(posedge rDerivedClock) begin
        if(iReset) begin
            rPipePrevState <= `sPipeIdle;
            rPipeState <= `sPipeIdle;
            rLockAck <= 1'h0;
        end else begin
            rPipePrevState <= rPipeState;
            rPipeState <= rPipeNextState;
            
            if(rPipeState == `sPipeHiHi)
                rLockAck <= rLockAck + 5'h1;
        end
    end

    always @(*) begin
        case(rPipeState)
            `sPipeIdle: rPipeNextState = (fBeginSingle) ? `sPipeLoad : `sPipeIdle; //((fBeginSingle) && (rLockSto == rLockAck)) ? `sPipeLoad : `sPipeIdle;
            `sPipeLoad: rPipeNextState = `sPipeLoLo;
            `sPipeLoLo: rPipeNextState = `sPipeLo;
            `sPipeLo: rPipeNextState =  `sPipeHi;
            `sPipeHi: rPipeNextState = `sPipeHiHi;
            `sPipeHiHi: rPipeNextState = `sPipeRegister;
            `sPipeRegister: rPipeNextState = `sPipeStore;
            `sPipeStore: rPipeNextState = `sPipeIdle; //(rTransferCount == 8'h0) ? `sPipeIdle : `sPipeLoad;
            default: rPipeNextState = `sPipeIdle;
        endcase
    end

    // Register controllers
    always @(negedge iClock) begin
        if(iReset) begin
            rCounterMISO <= 8'h0;
        end else begin
            if(iAddress == 4'h5 && iWrite)
                rCounterMISO <= bData[7:0];
        end
    end

    always @(negedge iClock) begin
        if(iReset) begin
            rCounterMOSI <= 8'h0;
        end else begin
            if(iAddress == 4'h3 && iWrite && iEnable)
                rCounterMOSI <= bData[7:0];
        end
    end

    always @(negedge rDerivedClock) begin
        if(iReset) begin
            rInternalCounterMISO <= 8'h0;
        end else begin
            if(rPipePrevState == `sPipeStore && fBeginBlock)
                rInternalCounterMISO <= rInternalCounterMISO + 8'h1;
            else if(rPipeState == `sPipeLoad && rPipePrevState == `sPipeIdle)
                rInternalCounterMISO <= rCounterMISO;
        end
    end

    always @(negedge rDerivedClock) begin
        if(iReset) begin
            rInternalCounterMOSI <= 8'h0;
        end else begin
            if(rPipeState == `sPipeStore && fBeginBlock)
                rInternalCounterMOSI <= rInternalCounterMOSI + 8'h1;
            else if(rPipeState == `sPipeLoad && rPipePrevState == `sPipeIdle)
                rInternalCounterMOSI <= rCounterMOSI;
        end
    end

    // This needs some kind of "Acknowledge" flag to block that clocking bug
    // from the last system.
    always @(posedge iClock) begin
        if(iReset) begin
            rConfig <= 32'h0;
            rLockSto <= 5'h0;
        end else begin
            if(iAddress == 4'h0 && iWrite && iEnable && rPipeState == `sPipeIdle)  
                rConfig <= bData;
                
            if(rPipeState == `sPipeHiHi)
                rConfig[0] <= 0;
                
            if(rPipeState == `sPipeLoLo)
                rConfig[1] <= 1;
                
            if(rPipeState == `sPipeIdle)
                rConfig[1] <= 0;
                
            if(((rLockAck > rLockSto) || (rLockAck == 5'h0 && rLockSto == 5'h1F)) && rPipeState == `sPipeIdle) begin
                rLockSto <= rLockAck;
                /*if(fBeginSingle)
                    rConfig[0] <= 1'h0;
                if(fBeginBlock)
                    rConfig[1] <= 1'h0;*/
                //rConfig[1] <= 0;
            end
        end
    end

    always @(negedge rDerivedClock) begin
        if(iReset) begin
            rTransferCount <= 32'h0;
        end else begin
            if(rPipeState == `sPipeLoad && rPipePrevState == `sPipeIdle)
                rTransferCount <= rConfig[15:8];
            if(rPipeState == `sPipeLo && fBeginBlock)
                rTransferCount <= rTransferCount - 8'h1;
        end
    end

    always @(negedge iClock) begin
        if(iReset) begin
            rDirectMOSI <= 32'h0;
        end else begin
            if(iAddress == 4'h1 && iWrite && iEnable) 
                rDirectMOSI <= bData;
        end
    end

    always @(negedge rDerivedClock) begin
        if(iReset) begin
            rDirectMISO <= 32'h0;
        end else begin
            if(iAddress == 4'h2 && iWrite && iEnable)
                rDirectMISO <= bData;
            if((rConfig[1] || fBeginSingle) && rPipeState == `sPipeStore)
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
