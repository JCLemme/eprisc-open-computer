// epRISC machine v1
// 
// written by John C. Lemme, jclemme (at) proportionallabs (dot) com
// this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.

// Gonna need this later
/* verilator lint_off WIDTH */

module clocksplit(iReset, iIn, oOut, oOutNinety);
    input iReset, iIn;
    output reg oOut, oOutNinety;

    reg [1:0] rClockSplit;

    initial begin
        rClockSplit <= 0;
    end

    always @(posedge iIn) begin
        rClockSplit <= rClockSplit + 1;

        if(rClockSplit == 0)
            oOut = 1;
        if(rClockSplit == 1)
            oOutNinety = 1;
        if(rClockSplit == 2)
            oOut = 0;
        if(rClockSplit == 3)
            oOutNinety = 0;
    end

endmodule

module epRISC_machine(iBoardClock, iBoardReset, iBoardSense, oBoardAcknowledge, iBoardReceive, oBoardTransmit,
                      bBoardDebug0, bBoardDebug1, bBoardDebug2, bBoardDebug3, bBoardDebug4, bBoardDebug5,
                      oBusMOSI, iBusMISO, oBusClock, iBusInterrupt, oBusSelect,
                      bMemoryData, oMemoryAddress, oMemoryBank, oMemoryDQM, oMemoryCKE, oMemoryCLK, oMemoryWE, oMemoryCAS, oMemoryRAS, oMemoryCS);

    // External I/O 
    input iBoardClock, iBoardReset, iBoardSense, iBoardReceive;
    output wire oBoardAcknowledge, oBoardTransmit;
    inout bBoardDebug0, bBoardDebug1, bBoardDebug2, bBoardDebug3, bBoardDebug4, bBoardDebug5;

    input iBusInterrupt;
    input [0:7] iBusMISO;
    output wire oBusClock;
    output wire [0:1] oBusSelect;
    output wire [0:7] oBusMOSI;

    output wire oMemoryCKE, oMemoryCLK, oMemoryWE, oMemoryCAS, oMemoryRAS, oMemoryCS;
    output wire [0:1] oMemoryBank;
    output wire [0:3] oMemoryDQM;
    output wire [0:11] oMemoryAddress;
    inout [0:32] bMemoryData;

    // Temporary assign statements, to make sure I/O is safe when internally disconnected
    assign oBoardAcknowledge = 1'h1;
    assign oBoardTransmit = 1'h1;
    assign bBoardDebug0 = 1'bz;
    assign bBoardDebug1 = 1'bz;
    assign bBoardDebug2 = 1'bz;
    assign bBoardDebug3 = 1'bz;
    assign bBoardDebug4 = 1'bz;
    assign bBoardDebug5 = 1'bz;

    assign oMemoryCKE = 1'h0;
    assign oMemoryCLK = 1'h0;
    assign oMemoryWE = 1'h0;
    assign oMemoryCAS = 1'h0;
    assign oMemoryRAS = 1'h0;
    assign oMemoryCS = 1'h1;
    assign oMemoryBank = 2'h0;
    assign oMemoryDQM = 4'h0;
    assign oMemoryAddress = 12'h0;
    assign oMemoryData = 32'bz;


    // Front-side bus
    wire wCoreBusClock, wCoreBusMemClock, wCoreBusReset, wCoreBusWrite, wCoreBusInterrupt, wCoreBusNMInterrupt;
    wire [0:31] wCoreBusAddress, wCoreBusData;

    wire wEnableRAM, wEnableROM, wEnableBusControl;

    // Core-specific definitions
    wire wCoreHalt, wCoreFlag;

    // FSB assign statements
    assign wCoreBusReset = iBoardReset;
    assign wCoreBusInterrupt = 0;
    assign wCoreBusNMInterrupt = 0;

    assign wEnableROM = (wCoreBusAddress >= 32'h0 && wCoreBusAddress < 32'hFF) ? 1'h1 : 1'h0;
    assign wEnableRAM = (wCoreBusAddress >= 32'h100 && wCoreBusAddress < 32'h1FF) ? 1'h1 : 1'h0;
    assign wEnableBusControl = (wCoreBusAddress >= 32'h200 && wCoreBusAddress < 32'h210) ? 1'h1 : 1'h0;
    
    // Modules on the FSB
    clocksplit       clock(wCoreBusReset, iBoardClock, wCoreBusClock, wCoreBusMemClock);

    epRISC_core       core(wCoreBusClock, wCoreBusReset, wCoreBusAddress, wCoreBusData, wCoreBusWrite, wCoreBusInterrupt, wCoreBusNMInterrupt, wCoreHalt, wCoreFlag); 
    epRISC_sysXMaster  bus(wCoreBusMemClock, wCoreBusReset, wCoreBusAddress, wCoreBusData, wCoreBusWrite, wEnableBusControl, wCoreBusInterrupt, wCoreBusMemClock, iBusMISO, oBusMOSI, oBusClock, iBusInterrupt, oBusSelect);

    epRISC_testRAM   tbram(wCoreBusMemClock, wCoreBusReset, wCoreBusAddress, wCoreBusData, wCoreBusWrite, wEnableRAM); 
    epRISC_testROM   tbrom(wCoreBusMemClock, wCoreBusAddress, wCoreBusData, wEnableROM); 

endmodule
