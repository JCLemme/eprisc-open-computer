// epRISC machine v1
// 
// written by John C. Lemme, jclemme (at) proportionallabs (dot) com
// this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.

// Gonna need this later
/* verilator lint_off WIDTH */

module epRISC_machine(iBoardClock, iBoardReset, iBoardSense, oBoardAcknowledge, iBoardReceive, oBoardTransmit,
                      bBoardDebug0, bBoardDebug1, bBoardDebug2. bBoardDebug3, bBoardDebug4, bBoardDebug5,
                      oBusMOSI, iBusMISO, oBusClock, iBusInterrupt, oBusSelect,
                      bMemoryData, oMemoryAddress, oMemoryBank, oMemoryDQM, oMemoryCKE, oMemoryCLK, oMemoryWE, oMemoryCAS, oMemoryRAS, oMemoryCS);

    // External I/O 
    input iBoardClk, iBoardReset, iBoardSense, iBoardReceive;
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

    assign oBusClock = 1'h0;
    assign oBusSelect = 2'h0;
    assign oBusMOSI = 8'h0;

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
    wire wCoreBusClock, wCoreBusReset, wCoreBusWrite, wCoreBusInterrupt, wCoreBusNMInterrupt;
    wire [0:31] wCoreBusAddress, wCoreBusData;
    
    // Core-specific definitions
    wire wCoreHalt, wCoreFlag;

    // FSB assign statements
    assign wCoreBusClock = iBoardClock;
    assign wCoreBusReset = iBoardReset;
    
    
    // Modules on the FSB
    epRISC_core core(wCoreBusClock, wCoreBusReset, wCoreBusAddress, wCoreBusData, wCoreBusWrite, wCoreBusInterrupt, wCoreBusNMInterrupt, wCoreHalt, wCoreFlag); 

endmodule
