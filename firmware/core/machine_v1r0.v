// epRISC machine v1
// 
// written by John C. Lemme, jclemme (at) proportionallabs (dot) com
// this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.

// Gonna need this later
/* verilator lint_off WIDTH */

module EmulatedPLL(iIn, oOut, oOutNinety);
    input iIn;
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

module BusConverter(iEnable, iData, bData);
    
    input iEnable;
    input [31:0] iData;
    inout [31:0] bData;

    assign bData = (iEnable) ? iData : 32'hz;

endmodule

module BusFiller(iEnable, bData);
   
    input iEnable;
    inout [31:0] bData;
    
    assign bData = (iEnable) ? 32'h0 : 32'hz;
    
endmodule

module epRISC_machine(iBoardClock, iBoardReset, iBoardSense, oBoardAcknowledge, iBoardReceive, oBoardTransmit,
                      bBoardDebug0, bBoardDebug2, bBoardDebug3, bBoardDebug4, bBoardDebug5,
                      oBusMOSI, iBusMISO, oBusClock, iBusInterrupt, oBusSelect,
                      bMemoryData, oMemoryAddress, oMemoryBank, oMemoryDQM, oMemoryCKE, oMemoryCLK, oMemoryWE, oMemoryCAS, oMemoryRAS, oMemoryCS);

    // External I/O 
    input iBoardClock, iBoardReset, iBoardSense, iBoardReceive;
    output wire oBoardAcknowledge, oBoardTransmit;
    inout bBoardDebug0, bBoardDebug2, bBoardDebug3, bBoardDebug4, bBoardDebug5;

    input iBusInterrupt;
    input [7:0] iBusMISO;
    output wire oBusClock;
    output wire [1:0] oBusSelect;
    output wire [7:0] oBusMOSI;

    output wire oMemoryCKE, oMemoryCLK, oMemoryWE, oMemoryCAS, oMemoryRAS, oMemoryCS;
    output wire [1:0] oMemoryBank;
    output wire [3:0] oMemoryDQM;
    output wire [11:0] oMemoryAddress;
    inout [31:0] bMemoryData;

    // Temporary assign statements, to make sure I/O is safe when internally disconnected
    assign oBoardAcknowledge = 1'h1;
    assign oBoardTransmit = 1'h1;
    assign bBoardDebug0 = 1'bz;
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
    wire [0:31] wCoreBusAddress, wCoreBusData, wRAMData;

    wire wEnableRAM, wEnableROM, wEnableBusControl, wDisableExtra;

    // Core-specific definitions
    wire wCoreHalt, wCoreFlag;

    // FSB assign statements
    assign wCoreBusReset = !iBoardReset;
    assign wCoreBusNMInterrupt = 0;

    assign wEnableROM = (wCoreBusAddress >= 32'h0 && wCoreBusAddress < 32'hFFF) ? 1'h1 : 1'h0;
    assign wEnableRAM = (wCoreBusAddress >= 32'h1000 && wCoreBusAddress < 32'h1FFF) ? 1'h1 : 1'h0;
    assign wEnableBusControl = (wCoreBusAddress >= 32'h2000 && wCoreBusAddress < 32'h2010) ? 1'h1 : 1'h0;
    assign wDisableExtra = (wCoreBusAddress >= 32'h2010) ? 1'h1 : 1'h0;
    
    // Modules on the FSB
    `ifdef EMULATED
    EmulatedPLL         clock(iBoardClock, wCoreBusClock, wCoreBusMemClock);
    `else
    OnChipPLL           clock(iBoardClock, wCoreBusClock, wCoreBusMemClock);
    `endif

    epRISC_core         core(wCoreBusClock, wCoreBusReset, wCoreBusAddress, wCoreBusData, wCoreBusWrite, wCoreBusInterrupt, wCoreBusNMInterrupt, wCoreHalt, wCoreFlag); 
    epRISC_sysXMaster   bus(wCoreBusMemClock, wCoreBusReset, wCoreBusAddress, wCoreBusData, wCoreBusWrite, wEnableBusControl, wCoreBusInterrupt, wCoreBusMemClock, iBusMISO, oBusMOSI, oBusClock, iBusInterrupt, oBusSelect);
    
    epRISC_embeddedROM  tbrom(wCoreBusMemClock, wCoreBusAddress, wCoreBusData, wEnableROM); 

    BusConverter        bcram(wEnableRAM&&(!wCoreBusWrite), wRAMData, wCoreBusData);
    
    BusFiller           busfill(wDisableExtra, wCoreBusData);
    
    `ifdef EMULATED
    epRISC_testRAM      tbram(wCoreBusAddress, wCoreBusMemClock, wCoreBusData, (wCoreBusWrite&&wEnableRAM), wRAMData); 
    `else
    OnChipRAM           tbram(wCoreBusAddress, wCoreBusMemClock, wCoreBusData, (wCoreBusWrite&&wEnableRAM), wRAMData); 
    `endif

endmodule
