module epRISC_coreTB();

    reg wClk, wMemClk, wRst;
    wire wWrite;
    wire [31:0] wAddr, wData;
    
    reg wInt, wNMInt;
    wire wHalt, wFlag;
    
    epRISC_core core(wClk, wRst, wAddr, wData, wWrite, wInt, wNMInt, wHalt, wFlag); 
    epRISC_testROM rom(wMemClk, wAddr[7:0], wData, (!wAddr[8] && !wWrite));
    epRISC_testRAM ram(wMemClk, wRst, wAddr[7:0], wData, wWrite, wAddr[8]);
    
    initial begin
        $dumpfile("coredump.vcd");
        $dumpvars();
        
        wClk = 0;
        wMemClk = 0;
        wRst = 0;
        wInt = 0;
        wNMInt = 0;
    end
    
    initial #5 begin
        wRst = 1;
    end
    
    initial #20 begin
        wRst = 0;
    end
    
    initial #500 begin
        wInt = 1;
    end
    
    initial #520 begin
        wInt = 0;
    end
    
    initial begin
        forever wClk = #4 !wClk;
    end
    
    initial begin 
        #2
        forever wMemClk = #4 !wMemClk;
    end
    
    initial #4000 begin
        $finish;
    end
    
endmodule

module epRISC_testRAM(iClk, iRst, iAddr, bData, iWrite, iEnable);

    input iClk, iRst, iWrite, iEnable;
    input [7:0] iAddr;
    inout [31:0] bData;
    
    reg [31:0] rDataOut, rContents[0:255];
    
    assign bData = (iWrite || !iEnable) ? 32'bz : rDataOut;
    
    always @(posedge iClk) begin
        if(iRst) begin
            $display("Reset");
        end else begin
            if(iWrite)
                rContents[iAddr] = bData;
            else
                rDataOut = rContents[iAddr];
        end
    end
    
endmodule

module epRISC_testROM(iClk, iAddr, oData, iEnable);

    input iClk, iEnable;
    input [7:0] iAddr;
    output wire [31:0] oData;
    
    reg [31:0] rDataOut, rContents[0:255];
    
    assign oData = (iEnable) ? rDataOut : 32'bz;
    
    always @(posedge iClk) begin
        rDataOut = rContents[iAddr];
    end
    
    initial begin
        rContents[0] = 32'h043F0000;
        rContents[1] = 32'h24000006;
        rContents[2] = 32'h18322301;
        //rContents[2] = 32'h04000000;
        rContents[3] = 32'h04000000;
        rContents[4] = 32'h04000000;
        rContents[5] = 32'h800FFFFE;
        rContents[6] = 32'h04000000;
        rContents[7] = 32'h04000000;
        rContents[8] = 32'h04000000;
        rContents[9] = 32'h04000000;
        rContents[10] = 32'h23000008;
        rContents[11] = 32'hB0000000;
    end

endmodule
