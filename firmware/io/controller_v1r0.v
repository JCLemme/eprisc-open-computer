// epRISC I/O controller
// currently implementing controller standard v1
//
// written by John C. Lemme, jclemme (at) proportionallabs (dot) com
// this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.

// Everything here is unfinished and/or broken.
// Below there be dragons.

// Gonna need this later
/* verilator lint_off WIDTH */

`define pSelectAddress  1
`define sPipeLoad       1
`define sPipeLoLo       2
`define sPipeLo         3
`define sPipeHi         4
`define sPipeHiHi       5
`define sPipeStore      6
`define sPipeInvalid    7

module epRISC_controlRAM(iClk, iRst, iAddr, iData, oData, iWrite, iEnable);

    input iClk, iRst, iWrite, iEnable;
    input [7:0] iAddr;
    input [31:0] iData;
    output wire [31:0] oData;

    reg [31:0] rContents[0:255];
    
    assign oData = (iWrite || !iEnable) ? 16'hz : rContents[iAddr];
    
    always @(posedge iClk) begin
        if(iRst) begin
            $display("Reset");
        end else begin
            if(iWrite)
                rContents[iAddr] = iData;

            $display("%h", rContents[8'h34]);
        end
    end
    
endmodule

module EmulatedIOPLL(iIn, oOutUART, oOutSPI, oOutVGA, oOutFast);
    input iIn;
    output reg oOutUART, oOutSPI;
    output wire oOutVGA, oOutFast;

    reg [6:0] rClockSplit;

    assign oOutFast = iIn;
    assign oOutVGA = iIn;
    
    initial begin
        rClockSplit <= 0;
        oOutUART <= 0;
        oOutSPI <= 0;
    end

    always @(posedge iIn) begin
        rClockSplit <= rClockSplit + 1;

        if(rClockSplit[3] == 1)
            oOutUART = !oOutUART;
            
        if(rClockSplit == 5'd27)
            oOutSPI = !oOutSPI;
    end

endmodule

module epRISC_iocontroller(iBusClock, iBusSelect, iBusMOSI, oBusInterrupt, oBusMISO,
                           iBoardClock, iBoardReset, bBoardDebug0, bBoardDebug1, bBoardDebug2, bBoardDebug3, bBoardDebug4, bBoardDebug5,
                           oSerialDTR, oSerialRTS, oSerialTX, iSerialRX, iSerialCTS, iSerialDCD, iSerialDSR,
                           oTTLSerialTX, iTTLSerialRX, iTTLSerialRST,
                           bGPIO0, bGPIO1, bGPIO2, bGPIO3, bGPIO4, bGPIO5, bGPIO6, bGPIO7, bGPIO8, bGPIO9, bGPIO10, bGPIO11, bGPIO12, bGPIO13, bGPIO14, bGPIO15,
                           oExtBusMOSI, oExtBusSS, oExtBusClock, iExtBusMISO, iExtBusInterrupt,
                           oSPIMOSI, oSPISelect, oSPIClock, iSPIMISO, iSPIDetect0, iSPIDetect1, iSPIWrite0, iSPIWrite1,
                           oVGAColor, oVGAHorizontal, oVGAVertical,
                           bPS2Data, bPS2Clock);

    // Input/output definitions
    input iBusClock;
    input [1:0] iBusSelect;
    input [7:0] iBusMOSI;
    output wire oBusInterrupt;
    output wire [7:0] oBusMISO;

    input iBoardClock, iBoardReset;
    inout bBoardDebug0, bBoardDebug1, bBoardDebug2, bBoardDebug3, bBoardDebug4, bBoardDebug5;

    input iSerialRX, iSerialCTS, iSerialDCD, iSerialDSR;
    output wire oSerialDTR, oSerialRTS, oSerialTX;

    input iTTLSerialRX, iTTLSerialRST;
    output wire oTTLSerialTX;
                          
    inout bGPIO0, bGPIO1, bGPIO2, bGPIO3, bGPIO4, bGPIO5, bGPIO6, bGPIO7, bGPIO8, bGPIO9, bGPIO10, bGPIO11, bGPIO12, bGPIO13, bGPIO14, bGPIO15;
                           
    input iExtBusInterrupt;
    input [3:0] iExtBusMISO;
    output wire oExtBusClock;
    output wire [1:0] oExtBusSS;
    output wire [3:0] oExtBusMOSI;
                           
    input iSPIMISO, iSPIDetect0, iSPIDetect1, iSPIWrite0, iSPIWrite1;
    output wire oSPIMOSI, oSPIClock;
    output wire [3:0] oSPISelect;
	 
    output wire oVGAHorizontal, oVGAVertical;
    output wire [7:0] oVGAColor; 
                           
    inout bPS2Data, bPS2Clock;

    // Internal register definitions
    reg [31:0] rInternalMOSI;
    wire [31:0] wInternalMISO;

    // Internal bus definitions
    wire mBusWrite, mBusReset, wInternalReset;
    wire [14:0] mBusAddress;
    wire [15:0] mBusData;
    
    wire wEnableGPIO, wEnableUART, wEnableSPI, wEnableVideo, wEnablePS2, wEnableRAM;

    wire wSerialClock, wSPIClock, wVGAClock, wFastClock;
    
    // Pipeline controller registers
    reg [3:0] rPipeState, rPipePrevState, rPipeNextState;

    //assign oSPISelect = 0;
    assign wInternalReset = !iBoardReset || iBusSelect == 2'h0;
    
    // Bus assign statements
    assign mBusAddress = rInternalMOSI[30:16];
    assign mBusData = rInternalMOSI[15:0];
    assign mBusWrite = (rPipeState == `sPipeStore && rInternalMOSI[31]) ? 1'h1 : 1'h0;
    assign mBusReset = (!iBoardReset || (rPipeState == `sPipeLoad && mBusAddress == 15'h7FFF && rInternalMOSI[31])) ? 1'h1 : 1'h0;
    
    assign wEnableGPIO = (mBusAddress >= 15'h0 && mBusAddress < 15'h10) ? 1'h1 : 1'h0;
    assign wEnableUART = (mBusAddress >= 15'h10 && mBusAddress < 15'h20) ? 1'h1 : 1'h0;
    assign wEnableSPI = (mBusAddress >= 15'h20 && mBusAddress < 15'h30) ? 1'h1 : 1'h0;
    assign wEnableVideo = (mBusAddress >= 15'h30 && mBusAddress < 15'h40) ? 1'h1 : 1'h0;
    assign wEnableRAM = (mBusAddress >= 15'h40 && mBusAddress < 15'hFF) ? 1'h1 : 1'h0;
    
    assign oBusMISO = (rPipeState == `sPipeLoLo) ? wInternalMISO[7:0] :
                      (rPipeState == `sPipeLo) ? wInternalMISO[15:8] :
                      (rPipeState == `sPipeHi) ? wInternalMISO[23:16] :
                      (rPipeState == `sPipeHiHi) ? wInternalMISO[31:24] : 8'h0;


    `ifdef EMULATED
    EmulatedIOPLL       clock(iBoardClock, wSerialClock, wSPIClock, wVGAClock, wFastClock);
    `else
    OnChipPLL           clock(iBoardClock, wSerialClock, wSPIClock, wVGAClock, wFastClock);
    `endif

    epRISC_GPIO         gpio(iBusClock, mBusReset, oBusInterrupt, mBusAddress, mBusData, wInternalMISO, mBusWrite, wEnableGPIO, 
                             bGPIO0, bGPIO1, bGPIO2, bGPIO3, bGPIO4, bGPIO5, bGPIO6, bGPIO7, bGPIO8, bGPIO9, bGPIO10, bGPIO11, bGPIO12, bGPIO13, bGPIO14, bGPIO15);
                             
    epRISC_UART         uart(iBusClock, mBusReset, oBvusInterrupt, mBusAddress, mBusData, wInternalMISO, mBusWrite, wEnableUART, wSerialClock, iTTLSerialRX, oTTLSerialTX);   
    
    epRISC_SPI          bspi(iBusClock, mBusReset, oBrusInterrupt, mBusAddress, mBusData, wInternalMISO, mBusWrite, wEnableSPI, wSPIClock, iSPIMISO, oSPIMOSI, oSPISelect, oSPIClock);
    
    epRISC_VideoTerm    bvga(iBusClock, mBusReset, mBusAddress, mBusData, wInternalMISO, mBusWrite, wEnableVideo, wFastClock, wVGAClock, oVGAColor, oVGAHorizontal, oVGAVertical);

    epRISC_controlRAM   bmem(iBusClock, mBusReset, mBusAddress, rInternalMOSI, wInternalMISO, mBusWrite, wEnableRAM);


    // Pipeline controller
    always @(posedge iBusClock or posedge wInternalReset) begin
        if(wInternalReset) begin
            rPipePrevState <= `sPipeLoad;
            rPipeState <= `sPipeLoad;
        end else begin
            rPipePrevState <= rPipeState;
            rPipeState <= rPipeNextState;
        end
    end

    always @(*) begin
        case(rPipeState)
            `sPipeLoad: rPipeNextState = `sPipeLoLo;
            `sPipeLoLo: rPipeNextState = `sPipeLo;
            `sPipeLo: rPipeNextState =  `sPipeHi;
            `sPipeHi: rPipeNextState = `sPipeHiHi;
            `sPipeHiHi: rPipeNextState = `sPipeStore;
            `sPipeStore: rPipeNextState = `sPipeLoad;
            default: rPipeNextState = `sPipeLoad;
        endcase
    end
    
    always @(negedge iBusClock or posedge wInternalReset) begin
        if(wInternalReset) begin
            rInternalMOSI <= 0;
        end else begin
            if(rPipeState == `sPipeLoLo)
                rInternalMOSI[7:0] <= iBusMOSI;
            if(rPipeState == `sPipeLo)
                rInternalMOSI[15:8] <= iBusMOSI;
            if(rPipeState == `sPipeHi)
                rInternalMOSI[23:16] <= iBusMOSI;
            if(rPipeState == `sPipeHiHi)
                rInternalMOSI[31:24] <= iBusMOSI;
        end
    end

endmodule
