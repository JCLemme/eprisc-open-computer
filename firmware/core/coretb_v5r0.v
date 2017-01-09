module epRISC_coreTB();

    reg wClk, wMemClk, wRst;
    wire wWrite;
    wire [31:0] wAddr, wData;
    
    wire w1, w2, w3, w4, w5, w6;
    
    epRISC_core core(wClk, wRst, wAddr, wData, wWrite, w1, w2, w3, w4, w5, w6); 
    epRISC_testROM rom(wMemClk, wAddr[7:0], wData, (!wAddr[8] && !wWrite));
    epRISC_testRAM ram(wMemClk, wRst, wAddr[7:0], wData, wWrite, wAddr[8]);
    
    initial begin
        $dumpfile("coredump.vcd");
        $dumpvars();
        
        wClk = 0;
        wMemClk = 0;
        wRst = 0;
    end
    
    initial #5 begin
        wRst = 1;
    end
    
    initial #20 begin
        wRst = 0;
    end
    
    always begin
        wClk = #4 !wClk;
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
        rContents[0] = 32'h04000000;
        rContents[1] = 32'h04000000;
        rContents[2] = 32'h04000000;
        rContents[3] = 32'h800FFFFF;
    end

endmodule
