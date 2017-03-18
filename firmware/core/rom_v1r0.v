module epRISC_embeddedROM(iClk, iAddr, oData, iEnable);

    input iClk, iEnable;
    input [7:0] iAddr;
    output wire [31:0] oData;
    
    reg [31:0] rDataOut, rContents[0:255];
    
    assign oData = (iEnable) ? rDataOut : 32'bz;
    
    always @(posedge iClk) begin
        rDataOut = rContents[iAddr];
    end
    
    initial begin
        rContents[0] = 32'h24000200;
        rContents[1] = 32'h27010001;
        rContents[2] = 32'h64700000;
        rContents[3] = 32'h04000000;
        rContents[4] = 32'h04000000;
        rContents[5] = 32'h04000000;
        rContents[6] = 32'h04000000;
        rContents[7] = 32'h25808101;
        rContents[8] = 32'h35000048;
        rContents[9] = 32'h64500001;
        rContents[10] = 32'h27010005;
        rContents[11] = 32'h64700000;
        rContents[12] = 32'h04000000;
        rContents[13] = 32'h04000000;
        rContents[14] = 32'h04000000;
        rContents[15] = 32'h04000000;
        rContents[16] = 32'h25808100;
        rContents[17] = 32'h35000080;
        rContents[18] = 32'h64500001;
        rContents[19] = 32'h27010005;
        rContents[20] = 32'h64700000;
        rContents[21] = 32'h04000000;
        rContents[22] = 32'h04000000;
        rContents[23] = 32'h04000000;
        rContents[24] = 32'h04000000;
        rContents[25] = 32'h04000000;
        rContents[26] = 32'h04000000;
        rContents[27] = 32'h04000000;
        rContents[28] = 32'h04000000;
        rContents[29] = 32'h04000000;
        rContents[30] = 32'h04000000;
        rContents[31] = 32'h04000000;
        rContents[32] = 32'h04000000;
        rContents[33] = 32'h04000000;
        rContents[34] = 32'h04000000;
        rContents[35] = 32'h04000000;
        rContents[36] = 32'h04000000;
        rContents[37] = 32'h800FFFE1;
        rContents[38] = 32'h0;
        rContents[39] = 32'h0;
        rContents[40] = 32'h0;
        rContents[41] = 32'h0;
        rContents[42] = 32'h0;
        rContents[43] = 32'h0;
    end

endmodule

/*  Program 1 - square wave generator over GPIO
        rContents[0] = 32'h24000200;
        rContents[1] = 32'h27010001;
        rContents[2] = 32'h64700000;
        rContents[3] = 32'h04000000;
        rContents[4] = 32'h04000000;
        rContents[5] = 32'h04000000;
        rContents[6] = 32'h04000000;
        rContents[7] = 32'h25808000;
        rContents[8] = 32'h3500FFFF;
        rContents[9] = 32'h64500001;
        rContents[10] = 32'h27010005;
        rContents[11] = 32'h64700000;
        rContents[12] = 32'h04000000;
        rContents[13] = 32'h04000000;
        rContents[14] = 32'h04000000;
        rContents[15] = 32'h04000000;
        rContents[16] = 32'h25000000;
        rContents[17] = 32'h08650000;
        rContents[18] = 32'h36808002;
        rContents[19] = 32'h64600001;
        rContents[20] = 32'h27010005;
        rContents[21] = 32'h64700000;
        rContents[22] = 32'h04000000;
        rContents[23] = 32'h04000000;
        rContents[24] = 32'h04000000;
        rContents[25] = 32'h04000000;
        rContents[26] = 32'h18B5580F;
        rContents[27] = 32'h18055001;
        rContents[28] = 32'h800FFFF5;
        rContents[29] = 32'h0;
        rContents[30] = 32'h0;
        rContents[31] = 32'h0;
        rContents[32] = 32'h0;
        rContents[33] = 32'h0;
        rContents[34] = 32'h0;
        rContents[35] = 32'h0; */
