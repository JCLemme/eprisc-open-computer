// epRISC I/O module - GPIO controller
//
// written by John C. Lemme, jclemme (at) proportionallabs (dot) com
// this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.

// Everything here is unfinished and/or broken.
// Below there be dragons.

// Gonna need this later
/* verilator lint_off WIDTH */


module epRISC_GPIO(iClock, iReset, oInterrupt, iAddress, iData, oData, iWrite, iEnable, bPort0, bPort1, bPort2, bPort3, bPort4, bPort5, bPort6, bPort7);

    input iClock, iReset, iWrite, iEnable;
    input [1:0] iAddress;
    inout bPort0, bPort1, bPort2, bPort3, bPort4, bPort5, bPort6, bPort7;    
    input [15:0] iData;
    output wire [15:0] oData;
    output reg oInterrupt;
    
    reg [15:0] rDirection, rInterrupt, rValue;
    
    assign oData = (iWrite || !iEnable) ? 16'hz : (iAddress == 2'h0) ? rDirection : (iAddr == 2'h1) ? rInterrupt : (iAddr == 2'h2) ? rValue : 32'hEA;
    
    assign bPort0 = (rDirection[0]) ? rValue[0] : 1'bz;
    assign bPort1 = (rDirection[1]) ? rValue[1] : 1'bz; 
    assign bPort2 = (rDirection[2]) ? rValue[2] : 1'bz;
    assign bPort3 = (rDirection[3]) ? rValue[3] : 1'bz;
    assign bPort4 = (rDirection[4]) ? rValue[4] : 1'bz;
    assign bPort5 = (rDirection[5]) ? rValue[5] : 1'bz;
    assign bPort6 = (rDirection[6]) ? rValue[6] : 1'bz;
    assign bPort7 = (rDirection[7]) ? rValue[7] : 1'bz;   
   
    always @(posedge iClock) begin
        if(iReset) begin
            oInterrupt <= 0;
        end else begin
            oInterrupt <= (rDirection & rValue & rInterrupt) ? 1 : 0;
            
            if(!iWrite && iEnable && iAddress == 1)
                oInterrupt <= 0;
        end
    end
    
    always @(posedge iClock) begin
        if(iReset) begin
            rDirection <= 0;
        end else begin
            if(iWrite && iEnable && iAddress == 0)
                rDirection <= iData;
        end
    end
    
    always @(posedge iClock) begin
        if(iReset) begin
            rInterrupt <= 0;
        end else begin
            if(iWrite && iEnable && iAddress == 1)
                rInterrupt <= iData;
        end
    end
    
    always @(posedge iClock) begin
        if(iReset) begin
            rValue <= 0;
        end else begin
            if(iWrite && iEnable && iAddress == 2) begin
                rValue <= iData;
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
    
endmodule

