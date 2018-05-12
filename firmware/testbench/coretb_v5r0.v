`define EMULATED 1

module epRISC_coreTB();

    reg iBoardClock, iBoardReset; 
    wire iBoardSense, iBoardReceive;
    wire oBoardAcknowledge, oBoardTransmit;
    wire bBoardDebug0, bBoardDebug1, bBoardDebug2, bBoardDebug3, bBoardDebug4, bBoardDebug5;

    wire iBusInterrupt;
    wire [0:7] iBusMISO;
    wire oBusClock;
    wire [0:1] oBusSelect;
    wire [0:7] oBusMOSI;

    wire oMemoryCKE, oMemoryCLK, oMemoryWE, oMemoryCAS, oMemoryRAS, oMemoryCS;
    wire [0:1] oMemoryBank;
    wire [0:3] oMemoryDQM;
    wire [0:11] oMemoryAddress;
    wire [0:32] bMemoryData;

    wire iSerialRX, iSerialCTS, iSerialDCD, iSerialDSR;
    wire oSerialDTR, oSerialRTS, oSerialTX;

    reg iTTLSerialRX, iTTLSerialRST;
    wire oTTLSerialTX;
                          
    wire bGPIO0, bGPIO1, bGPIO2, bGPIO3, bGPIO4, bGPIO5, bGPIO6, bGPIO7, bGPIO8, bGPIO9, bGPIO10, bGPIO11, bGPIO12, bGPIO13, bGPIO14, bGPIO15;
                           
    wire iExtBusInterrupt;
    wire [3:0] iExtBusMISO;
    wire oExtBusClock;
    wire [1:0] oExtBusSS;
    wire [3:0] oExtBusMOSI;
        
    reg iSPIMISO;                   
    wire iSPIDetect0, iSPIDetect1, iSPIWrite0, iSPIWrite1;
    wire oSPIMOSI, oSPISelect, oSPIClock;
                           
    wire oVGAHorizontal, oVGAVertical;
    wire [7:0] oVGAColor; 
                           
    wire bPS2Data, bPS2Clock;

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

   
    initial begin
        $dumpfile("coredump.vcd");
        $dumpvars();
        
        iBoardClock = 0;
        iBoardReset = 1;
        iTTLSerialRX <= 1;
        iSPIMISO <= 1;
    end
    
    initial #5 begin
        iBoardReset = 0;
    end
    
    initial #100 begin
        iBoardReset = 1;
    end
   
    initial begin
        forever iBoardClock = #2 !iBoardClock;
    end
   
    initial #3001564 begin
        iTTLSerialRX <= 0;
        #1220 iTTLSerialRX <= 1;
        
        #300  iTTLSerialRX <= 1;
        #1024 iTTLSerialRX <= 0;
        #1024 iTTLSerialRX <= 0;
        #1024 iTTLSerialRX <= 0;
        #1024 iTTLSerialRX <= 1;
        #1024 iTTLSerialRX <= 1;
        #1024 iTTLSerialRX <= 0;
        #1024 iTTLSerialRX <= 0;
        
        #1024 iTTLSerialRX <= 1;
    end
    
    initial #3055300 begin
        iTTLSerialRX <= 0;
        #1220 iTTLSerialRX <= 1;
        
        #300  iTTLSerialRX <= 0;
        #1024 iTTLSerialRX <= 1;
        #1024 iTTLSerialRX <= 1;
        #1024 iTTLSerialRX <= 1;
        #1024 iTTLSerialRX <= 0;
        #1024 iTTLSerialRX <= 1;
        #1024 iTTLSerialRX <= 0;
        #1024 iTTLSerialRX <= 0;
        
        #1024 iTTLSerialRX <= 1;
    end
    
    initial #3115300 begin
        iTTLSerialRX <= 0;
        #1220 iTTLSerialRX <= 1;
        
        #300  iTTLSerialRX <= 1;
        #1024 iTTLSerialRX <= 0;
        #1024 iTTLSerialRX <= 0;
        #1024 iTTLSerialRX <= 0;
        #1024 iTTLSerialRX <= 0;
        #1024 iTTLSerialRX <= 0;
        #1024 iTTLSerialRX <= 1;
        #1024 iTTLSerialRX <= 0;
        
        #1024 iTTLSerialRX <= 1;
    end
    
    initial #6453642 begin
        iTTLSerialRX <= 0;
        #1220 iTTLSerialRX <= 1;
        
        #200 iTTLSerialRX <= 0;
        #200 iTTLSerialRX <= 1;
        #200 iTTLSerialRX <= 1;
        #200 iTTLSerialRX <= 0;
        #200 iTTLSerialRX <= 0;
        #200 iTTLSerialRX <= 0;
        #200 iTTLSerialRX <= 0;
        
        #200 iTTLSerialRX <= 1;
    end
    
    initial #50000000 begin
        $finish;
    end
    
endmodule

