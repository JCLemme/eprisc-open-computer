module epRISC_coreTB();

    wire wClk, wRst, wWrite;
    wire [31:0] wAddr, wData;
    
    epRISC_core core(wClk, wRst, wAddr, wData, wWrite, 0, 0, 0, 0, 0, 0); 
    epRISC_testROM rom(wClk, wAddr[7:0], wData, !wAddr[8]);
    epRISC_testRAM ram(wClk, wRst, wAddr[7:0], wData, wAddr[8]);
    
    initial begin
        $dumpfile("coredump.vcd");
        $dumpvars();
    end
    
    initial #5 begin
        wRst = 1;
    end
    
    initial #5 begin
        wRst = 0;
    end
    
    always #5 begin
        wClk = !wClk;
    end
    
    initial #4000 begin
        $finish
    end
    
endmodule

module epRISC_testRAM(iClk, iRst, iAddr, bData, iWrite, iEnable);

    input iClk, iRst, iWrite;
    input [7:0] iAddr;
    inout [31:0] bData;
    
    reg [31:0] rDataOut, rContents[0:255];
    
    assign bData = (iWrite || iEnable) ? 32'bz : rDataOut;
    
    always @(posedge iClk) begin
        if(iRst) begin
        end else begin
            if(iWrite)
                rContents[iAddr] = bData;
            else
                rDataOut = rContents[iAddr];
        end
    end
    
endmodule

module epRISC_testROM(iClk, iAddr, oData, iEnable);

    input iClk;
    input [7:0] iAddr;
    output wire [31:0] oData;
    
    reg [31:0] rDataOut, rContents[0:255];
    
    assign oData = (iEnable) ? rDataOut : 32'bz;
    
    always @(posedge iClk) begin
        rDataOut = rContents[iAddr];
    end
    
    initial begin
        rContents[0] = 0;
    end
    
endmodule
