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

    assign iBusMISO = 8'hEA;

    epRISC_machine machine(iBoardClock, iBoardReset, iBoardSense, oBoardAcknowledge, iBoardReceive, oBoardTransmit,
                      bBoardDebug0, bBoardDebug1, bBoardDebug2, bBoardDebug3, bBoardDebug4, bBoardDebug5,
                      oBusMOSI, iBusMISO, oBusClock, iBusInterrupt, oBusSelect,
                      bMemoryData, oMemoryAddress, oMemoryBank, oMemoryDQM, oMemoryCKE, oMemoryCLK, oMemoryWE, oMemoryCAS, oMemoryRAS, oMemoryCS);

    
    initial begin
        $dumpfile("coredump.vcd");
        $dumpvars();
        
        iBoardClock = 0;
        iBoardReset = 0;
    end
    
    initial #5 begin
        iBoardReset = 1;
    end
    
    initial #100 begin
        iBoardReset = 0;
    end
   
    initial begin
        forever iBoardClock = #4 !iBoardClock;
    end
    
    initial #14000 begin
        $finish;
    end
    
endmodule

