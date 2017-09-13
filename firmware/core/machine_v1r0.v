// epRISC machine v1
// 
// written by John C. Lemme, jclemme (at) proportionallabs (dot) com
// this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.
//
// memory map:
// 000000:000FFF    ROM
// 001000:001FFF    RAM
// 002000:00200F    sysX controller
// 002010:002FFF    unused
// 003000:800000    SDRAM (8MW - prespace)
// 800000:rest      unused
//

// Gonna need this later
/* verilator lint_off WIDTH */

module EmulatedPLL(iIn, oOut, oOutNinety, oOutFast);
    input iIn;
    output reg oOut, oOutNinety;
    output wire oOutFast;

    reg [1:0] rClockSplit;

    assign oOutFast = iIn;
    
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
    assign oBoardAcknowledge = wCoreBusAcknowledge;
    assign oBoardTransmit = 1'h1;
    assign bBoardDebug0 = 1'bz;
    assign bBoardDebug2 = 1'bz;
    assign bBoardDebug3 = 1'bz;
    assign bBoardDebug4 = 1'bz;
    assign bBoardDebug5 = 1'bz;

    // Front-side bus
    wire wCoreBusClock, wCoreBusMemClock, wCoreBusFastClock, wCoreBusReset, wCoreBusWrite, wCoreBusInterrupt, wCoreBusNMInterrupt, wCoreBusAccess, wCoreBusReady, wSDRAMReady, wCoreBusAcknowledge;
    wire [31:0] wCoreBusAddress, wCoreBusData, wRAMData, wSDRAMData;

    wire wEnableROM, wEnableRAM, wEnableBusControl, wEnableSDRAM, wDisableExtra;

    // Core-specific definitions
    wire wCoreHalt, wCoreFlag;

    // FSB assign statements
    assign wCoreBusReset = !iBoardReset;
    assign wCoreBusNMInterrupt = 0;
    assign wCoreBusReady = (wEnableSDRAM && !wCoreBusWrite) ? wSDRAMReady : 1'h1;
    
    assign wEnableROM = (wCoreBusAddress >= 32'h0 && wCoreBusAddress < 32'h1000) ? 1'h1 : 1'h0;
    assign wEnableRAM = (wCoreBusAddress >= 32'h1000 && wCoreBusAddress < 32'h2000) ? 1'h1 : 1'h0;
    assign wEnableBusControl = (wCoreBusAddress >= 32'h2000 && wCoreBusAddress < 32'h3000) ? 1'h1 : 1'h0;
    assign wEnableSDRAM = (wCoreBusAddress >= 32'h3000 && wCoreBusAddress < 32'h800000) ? 1'h1 : 1'h0;
    assign wDisableExtra = (wCoreBusAddress >= 32'h800000) ? 1'h1 : 1'h0;
    
    assign oMemoryCLK = wCoreBusFastClock;
   
    // Modules on the FSB
    `ifdef EMULATED
    EmulatedPLL         clock(iBoardClock, wCoreBusClock, wCoreBusMemClock, wCoreBusFastClock);
    `else
    OnChipPLL           clock(iBoardClock, wCoreBusClock, wCoreBusMemClock, wCoreBusFastClock);
    `endif

    epRISC_core         core(wCoreBusClock, wCoreBusReset, wCoreBusAddress, wCoreBusData, wCoreBusWrite, wCoreBusInterrupt, wCoreBusNMInterrupt, wCoreHalt, wCoreFlag, wCoreBusAccess, wCoreBusReady, wCoreBusAcknowledge); 
    epRISC_sysXMaster   bus(wCoreBusMemClock, wCoreBusReset, wCoreBusAddress, wCoreBusData, wCoreBusWrite, wEnableBusControl, wCoreBusInterrupt, wCoreBusMemClock, iBusMISO, oBusMOSI, oBusClock, iBusInterrupt, oBusSelect, wDebug);
    
    epRISC_embeddedROM  tbrom(wCoreBusMemClock, wCoreBusAddress, wCoreBusData, wEnableROM); 

    BusConverter        bcram(wEnableRAM&&(!wCoreBusWrite), wRAMData, wCoreBusData);
    BusConverter        bcsdram(wEnableSDRAM&&(!wCoreBusWrite), wSDRAMData, wCoreBusData);
    
    BusFiller           busfill(wDisableExtra, wCoreBusData);
    
    `ifdef EMULATED
    epRISC_testRAM      tbram(wCoreBusAddress, wCoreBusMemClock, wCoreBusData, (wCoreBusWrite&&wEnableRAM), wRAMData); 
    `else
    OnChipRAM           tbram(wCoreBusAddress, wCoreBusMemClock, wCoreBusData, (wCoreBusWrite&&wEnableRAM), wRAMData); 
    `endif

    `ifdef EMULATED
    epRISC_testRAM      tbsdram(wCoreBusAddress, wCoreBusMemClock, wCoreBusData, (wCoreBusWrite&&wEnableSDRAM), wSDRAMData); 
    `else
    epRISC_SDRAM        tbsdram(wCoreBusAddress, wCoreBusData, (wCoreBusAccess && wEnableSDRAM && wCoreBusWrite), 
                                wCoreBusAddress, wSDRAMData, wSDRAMReady, (wCoreBusAccess && wEnableSDRAM && (!wCoreBusWrite) && (!wSDRAMBusy)), 
                                wSDRAMBusy, (!wCoreBusReset), wCoreBusFastClock, wCoreBusAcknowledge,
                                oMemoryAddress, oMemoryBank, bMemoryData, oMemoryCKE, oMemoryCS, oMemoryRAS, oMemoryCAS, oMemoryWE, oMemoryDQM);
    `endif
    
endmodule
