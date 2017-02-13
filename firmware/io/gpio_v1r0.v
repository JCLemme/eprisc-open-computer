module GPIO_epRISC(iClk, iRst, oInt, iAddr, bData, iWrite, iEnable, oDisplayAddr, oDisplayData, bPort0, bPort1, bPort2, bPort3, bPort4, bPort5, bPort6, bPort7);

    input iClk, iRst, iWrite, iEnable;
    input [1:0] iAddr;
    inout bPort0, bPort1, bPort2, bPort3, bPort4, bPort5, bPort6, bPort7;    
    inout [31:0] bData;
    output reg oInt;
    output wire [3:0] oDisplayAddr;
    output wire [7:0] oDisplayData;
    
    reg [1:0] rDisplayDigit;
    reg [31:0] rDirection, rInterrupt, rValue, rDisplay;
    
    assign bData = (iWrite || !iEnable) ? 32'bz : (iAddr == 0) ? rDirection : (iAddr == 1) ? rInterrupt : (iAddr == 2) ? rValue : (iAddr == 3) ? rDisplay : 32'hEA;
    
    assign bPort0 = (rDirection[0]) ? rValue[0] : 1'bz;
    assign bPort1 = (rDirection[1]) ? rValue[1] : 1'bz; 
    assign bPort2 = (rDirection[2]) ? rValue[2] : 1'bz;
    assign bPort3 = (rDirection[3]) ? rValue[3] : 1'bz;
    assign bPort4 = (rDirection[4]) ? rValue[4] : 1'bz;
    assign bPort5 = (rDirection[5]) ? rValue[5] : 1'bz;
    assign bPort6 = (rDirection[6]) ? rValue[6] : 1'bz;
    assign bPort7 = (rDirection[7]) ? rValue[7] : 1'bz;   
   
    assign oDisplayAddr = 4'h1 << rDisplayDigit;
    assign oDisplayData = ~((rDisplay & (8'hFF << ((rDisplayDigit) * 8))) >> ((rDisplayDigit) * 8));
    
    always @(posedge iClk) begin
        if(iRst) begin
            oInt <= 0;
        end else begin
            oInt <= (rDirection & rValue & rInterrupt) ? 1 : 0;
            
            if(!iWrite && iEnable && iAddr == 1)
                oInt <= 0;
        end
    end
    
    always @(posedge iClk) begin
        if(iRst) begin
            rDirection <= 0;
        end else begin
            if(iWrite && iEnable && iAddr == 0)
                rDirection <= bData;
        end
    end
    
    always @(posedge iClk) begin
        if(iRst) begin
            rInterrupt <= 0;
        end else begin
            if(iWrite && iEnable && iAddr == 1)
                rInterrupt <= bData;
        end
    end
    
    always @(posedge iClk) begin
        if(iRst) begin
            rValue <= 0;
        end else begin
            if(iWrite && iEnable && iAddr == 2) begin
                rValue <= bData;
            end else begin
                rValue[0] <= (rDirection[0]) ? rValue[0] : bPort0;
                rValue[1] <= (rDirection[1]) ? rValue[1] : bPort1;
                rValue[2] <= (rDirection[2]) ? rValue[2] : bPort2;
                rValue[3] <= (rDirection[3]) ? rValue[3] : bPort3;
                rValue[4] <= (rDirection[4]) ? rValue[4] : bPort4;
                rValue[5] <= (rDirection[5]) ? rValue[5] : bPort5;
                rValue[6] <= (rDirection[6]) ? rValue[6] : bPort6;
                rValue[7] <= (rDirection[7]) ? rValue[7] : bPort7;
            end
        end
    end  
    
    always @(posedge iClk) begin
        if(iRst) begin
            rDisplay <= 0;
        end else begin
            if(iWrite && iEnable && iAddr == 3)
                rDisplay <= bData;
        end
    end
    
    always @(posedge iClk) begin
        if(iRst) begin
            rDisplayDigit <= 0;
        end else begin
            rDisplayDigit <= rDisplayDigit + 1;
        end
    end
    
endmodule

