module CharacterDisplay_epRISC(iClk, iRst, iAddr, bData, iWrite, iEnable, iMemClk, iVideoClk, oColor, oHS, oVS);

    input iClk, iRst, iWrite, iEnable, iMemClk, iVideoClk;
    input [9:0] iAddr;
    inout [31:0] bData;
    output wire [7:0] oColor;
    output reg oHS, oVS;

    reg [3:0] rRowSel;
    reg [7:0] rDataOutput, rColorOutput;
    reg [9:0] rPulseX, rPulseY;
    reg [11:0] rTempX, rTempY, rFramePtr;

    wire mDrawingValidLine, mDrawingValidFrame, mDrawingValidData;
    wire [7:0] wCurrColor, wCurrChar, wFontRow;
    wire [9:0] wPixelX, wPixelY;
    wire [31:0] wCharRAMData, wCharRAMFrame;
        
    assign bData = (iWrite || !iEnable) ? 32'bz : wCharRAMData;
    
    assign oColor = (rDataOutput[7-wPixelX[2:0]] && mDrawingValidData) ? rColorOutput : 8'h0; //either color or black
    //(mDrawingValidData && ((wPixelX[0] && wPixelY[0]) || (!wPixelX[0] && !wPixelY[0]))) ? 8'hFF : 8'h0; //this is a fine-checkerboard test pattern

    assign mDrawingValidLine = (rPulseY >= 35 && rPulseY < 515) ? 1 : 0;
    assign mDrawingValidFrame = (rPulseX >= 160 && rPulseX < 800) ? 1 : 0;
    assign mDrawingValidData = (mDrawingValidLine && mDrawingValidFrame) ? 1 : 0;
    
    assign wPixelX = rPulseX - 10'd160;
    assign wPixelY = rPulseY - 10'd35;
       
    assign wCurrColor = (rFramePtr[0]) ? wCharRAMFrame[15:8] : wCharRAMFrame[31:24];
    assign wCurrChar = (rFramePtr[0]) ? wCharRAMFrame[7:0] : wCharRAMFrame[23:16];

    VideoRAM vram({2'h0, iAddr[7:0]}, rFramePtr[11:1], iClk, iMemClk, bData, 32'h0, (iWrite&&iEnable)?1:0, 0, wCharRAMData, wCharRAMFrame);
    VideoROM vrom({rRowSel, wCurrChar}, iMemClk, wFontRow);
    
    always @(posedge iVideoClk) begin
        if(iRst) begin
            rPulseX <= 0;
            rPulseY <= 0;
            rRowSel <= 0;
        end else begin
            rPulseX <= rPulseX + 1;
            
            case(rPulseX)
                0: oHS <= 1;
                16: oHS <= 0;
                112: oHS <= 1;
                800: begin rPulseY <= rPulseY + 1; rRowSel <= rRowSel + 1; rPulseX <= 0; end
            endcase
            
            case(rPulseY)
                0: oVS <= 1;
                10: oVS <= 0;
                12: oVS <= 1;
                525: begin rPulseY <= 0; rRowSel <= 0; end
            endcase
            
            if(rRowSel == 12)
                rRowSel <= 0;
        end
    end

    always @(posedge iVideoClk) begin
        if(iRst) begin
            rDataOutput <= 0;
            rFramePtr <= 0;
        end else begin
            rFramePtr <= 0;
            
            case(wPixelX[2:0])
                3'h6: begin
                    if(rPulseX < 154) begin
                        rTempX <= 0;
                    end else if(rPulseX >= 154 && rPulseX < 160) begin
                        rTempX <= 1;
                    end else begin
                        rTempX <= 2 + (wPixelX / 8);
                    end
                    
                    rTempY <= wPixelY / 12;
                    rFramePtr <= (rTempY * 80) + rTempX;
                end
                
                3'h7: begin
                    rDataOutput <= wFontRow;
                    rColorOutput <= wCurrColor;
                end
            endcase
        end
    end
    
endmodule
