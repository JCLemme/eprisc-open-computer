
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
        rContents[0] = 32'h24413345;
        rContents[1] = 32'h25000000;
        rContents[2] = 32'h26000200;
        rContents[3] = 32'h27010001;
        rContents[4] = 32'h66700000;
        rContents[5] = 32'h04000000;
        rContents[6] = 32'h04000000;
        rContents[7] = 32'h04000000;
        rContents[8] = 32'h04000000;
        rContents[9] = 32'h04000000;
        rContents[10] = 32'h04000000;
        rContents[11] = 32'h04000000;
        rContents[12] = 32'h04000000;
        rContents[13] = 32'h04000000;
        rContents[14] = 32'h04000000;
        rContents[15] = 32'h66400004;
        rContents[16] = 32'h18044001;
        rContents[17] = 32'h18055001;
        rContents[18] = 32'h66500003;
        rContents[19] = 32'h66400004;
        rContents[20] = 32'h18044001;
        rContents[21] = 32'h18055001;
        rContents[22] = 32'h66500003;
        rContents[23] = 32'h66400004;
        rContents[24] = 32'h18044001;
        rContents[25] = 32'h18055001;
        rContents[26] = 32'h66500003;
        rContents[27] = 32'h66400004;
        rContents[28] = 32'h18044001;
        rContents[29] = 32'h18055001;
        rContents[30] = 32'h66500003;
        rContents[31] = 32'h25000000;
        rContents[32] = 32'h66500003;
        rContents[33] = 32'h27010406;
        rContents[34] = 32'h66700000;
        rContents[35] = 32'h04200000;
    end

endmodule
