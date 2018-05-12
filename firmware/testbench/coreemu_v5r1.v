`define EMULATED 1

module epRISC_coreEmu(iBoardClock, iBoardReset,
                      iBoardSense, iBoardReceive,
                      oBoardAcknowledge, oBoardTransmit,
                      bBoardDebug0, bBoardDebug1, bBoardDebug2, bBoardDebug3, bBoardDebug4, bBoardDebug5,

                      iSerialRX, iSerialCTS, iSerialDCD, iSerialDSR,
                      oSerialDTR, oSerialRTS, oSerialTX,

                      iTTLSerialRX, iTTLSerialRST,
                      oTTLSerialTX,
                                      
                      bGPIO0, bGPIO1, bGPIO2, bGPIO3, bGPIO4, bGPIO5, bGPIO6, bGPIO7, bGPIO8, bGPIO9, bGPIO10, bGPIO11, bGPIO12, bGPIO13, bGPIO14, bGPIO15,
                                       
                      iExtBusInterrupt,
                      iExtBusMISO,
                      oExtBusClock,
                      oExtBusSS,
                      oExtBusMOSI,
                    
                      iSPIMISO,
                      iSPIDetect0, iSPIDetect1, iSPIWrite0, iSPIWrite1,
                      oSPIMOSI, oSPISelect, oSPIClock,
                                       
                      oVGAHorizontal, oVGAVertical,
                      oVGAColor,
                                       
                      bPS2Data, bPS2Clock);

    input iBoardClock, iBoardReset; 
    input iBoardSense, iBoardReceive;
    output oBoardAcknowledge, oBoardTransmit;
    inout bBoardDebug0, bBoardDebug1, bBoardDebug2, bBoardDebug3, bBoardDebug4, bBoardDebug5;

    wire iBusInterrupt;
    wire [7:0] iBusMISO;
    wire oBusClock;
    wire [1:0] oBusSelect;
    wire [7:0] oBusMOSI;

    wire oMemoryCKE, oMemoryCLK, oMemoryWE, oMemoryCAS, oMemoryRAS, oMemoryCS;
    wire [1:0] oMemoryBank;
    wire [3:0] oMemoryDQM;
    wire [11:0] oMemoryAddress;
    wire [31:0] bMemoryData;

    input iSerialRX, iSerialCTS, iSerialDCD, iSerialDSR;
    output oSerialDTR, oSerialRTS, oSerialTX;

    input iTTLSerialRX, iTTLSerialRST;
    output oTTLSerialTX;
                          
    inout bGPIO0, bGPIO1, bGPIO2, bGPIO3, bGPIO4, bGPIO5, bGPIO6, bGPIO7, bGPIO8, bGPIO9, bGPIO10, bGPIO11, bGPIO12, bGPIO13, bGPIO14, bGPIO15;
                           
    input iExtBusInterrupt;
    input [3:0] iExtBusMISO;
    output oExtBusClock;
    output [1:0] oExtBusSS;
    output [3:0] oExtBusMOSI;
        
    input iSPIMISO;                   
    input iSPIDetect0, iSPIDetect1, iSPIWrite0, iSPIWrite1;
    output oSPIMOSI, oSPISelect, oSPIClock;
                           
    output oVGAHorizontal, oVGAVertical;
    output [7:0] oVGAColor; 
                           
    inout bPS2Data, bPS2Clock;

    epRISC_machine machine(iBoardClock, iBoardReset, iBoardSense, oBoardAcknowledge, iBoardReceive, oBoardTransmit,
                      bBoardDebug0, bBoardDebug2, bBoardDebug3, bBoardDebug4, bBoardDebug5,
                      oBusMOSI, iBusMISO, oBusClock, iBusInterrupt, oBusSelect,
                      bMemoryData, oMemoryAddress, oMemoryBank, oMemoryDQM, oMemoryCKE, oMemoryCLK, oMemoryWE, oMemoryCAS, oMemoryRAS, oMemoryCS);

    epRISC_iocontroller controller(oBusClock, oBusSelect, oBusMOSI, iBusInterrupt, iBusMISO,
                           iBoardClock, iBoardReset, bBoardDebug0, bBoardDebug1, bBoardDebug2, bBoardDebug3, bBoardDebug4, bBoardDebug5,
                           oSerialDTR, oSerialRTS, oSerialTX, iSerialRX, iSerialCTS, iSerialDCD, iSerialDSR,
                           oTTLSerialTX, iTTLSerialRX, iTTLSerialRST,
                           bGPIO0, bGPIO1, bGPIO2, bGPIO3, bGPIO4, bGPIO5, bGPIO6, bGPIO7, bGPIO8, bGPIO9, bGPIO10, bGPIO11, bGPIO12, bGPIO13, bGPIO14, bGPIO15,
                           oExtBusMOSI, oExtBusSS, oExtBusClock, iExtBusMISO, iExtBusInterrupt,
                           oSPIMOSI, oSPISelect, oSPIClock, iSPIMISO, iSPIDetect0, iSPIDetect1, iSPIWrite0, iSPIWrite1,
                           oVGAColor, oVGAHorizontal, oVGAVertical,
                           bPS2Data, bPS2Clock);
    
endmodule

