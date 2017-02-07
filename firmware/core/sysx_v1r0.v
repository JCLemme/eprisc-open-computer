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
    input [0:?] iAddress;
    input [0:7] iBusMISO;
    output wire oInterrupt, oBusClock;
    output wire [0:1] oBusSelect;
    output wire [0:7] oBusMOSI;
    inout [0:31] bData;

    // Internal control registers
    reg [0:7] rCounterMISO, rCounterMOSI;
    reg [0:31] rConfig, rClockConfig, rDirectMOSI, rDirectMISO;
    wire [0:31] wDataMOSI, wDataMISO;

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
                   (iAddress == 'h0) rConfig :
                   (iAddress == 'h1) rClockConfig :
                   (iAddress == 'h2) rDirectMOSI :
                   (iAddress == 'h3) rDirectMISO :
                   (iAddress == 'h4) rCounterMOSI : //pad this
                   (iAddress == 'h5) wDataMOSI :
                   (iAddress == 'h6) rCounterMISO : //pad this
                   (iAddress == 'h7) wDataMISO : 32'h0BADC0DE;
    
    assign oBusClock = (rPipeState == `sPipeIdle) ? 1'h0 : rDerivedClock;
    assign oBusSelect = (rPipeState == `sPipeIdle) ? 2'h0 : // Config chip sleect goes here
    assign wDataMISO = (iWrite && iAddress == 'h7) ? 32'bz : wDataOutMISO;
    assign wDataMOSI = (iWrite && iAddress == 'h5) ? 32'bz : wDataOutMOSI;
    assign wInternalWriteMISO = (rPipeState == `sPipeStore) ? 1'h1 : 1'h0;
    
    
    // Clock controller
    always @(posedge iMasterClock) begin
        if(iReset) begin
            rMasterClockCount <= 12'h0;
        end else begin
            if(rMasterClockCount == rClockConfig[11:0])
                rMasterClockCount <= 12'h0;

            rMasterClockCount <= rMasterClockCount + 12'h1;
        end
    end

    always @(posedge iMasterClock) begin
        if(iReset) begin
            rDerivedClock <= 1'h0;
        end else begin
            if(rMasterClockCount == rClockConfig[11:0])
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
            `sPipeIdle: 
            `sPipeLoad:
            `sPipeLowLow:
            `sPipeLow:
            `sPipeHigh:
            `sPipeHighHigh:
            `sPipeWrite:
            default:
        endcase
    end

endmodule
