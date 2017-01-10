// epRISC core - baseline implementation
// currently implementing ISA v5r0
// 
// written by John C. Lemme, jclemme (at) proportionallabs (dot) com
// this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.

// Gonna need this later
/* verilator lint_off WIDTH */


// Pipeline steps
`define sPipeFetch          1
`define sPipeDecode         2
`define sPipeArithmetic     3
`define sPipeMemory         4
`define sPipeWriteback      5
`define sPipeHalt           6
`define sPipeWriteSkip      7
`define sUndefined          0

// Registers for use in simulation environments. Can (and should) be replaced with a synchronous, dual-port RAM for synthesis on FPGAs.

module epRISC_gpr(iClk, iRst, iAddrA, iDInA, oDOutA, iWriteA, iAddrB, iDInB, oDOutB, iWriteB);

    input iClk, iRst, iWriteA, iWriteB;
    input [7:0] iAddrA, iAddrB;
    input [31:0] iDInA, iDInB;
    output reg [31:0] oDOutA, oDOutB;
    
    reg [7:0] rClr;
    reg [31:0] rContents[0:255];
        
    always @(posedge iClk) begin
        if(iWriteA) begin
            rContents[iAddrA] <= iDInA;
        end
        
        if(iWriteB) begin
            rContents[iAddrB] <= iDInB;
        end
    end
    
    always @(posedge iClk) begin
        if(!iWriteA) begin
            oDOutA <= rContents[iAddrA];
        end
    end
    
    always @(posedge iClk) begin
        if(!iWriteB) begin
            oDOutB <= rContents[iAddrB];
        end
    end
            
endmodule


// Synthesizable, non-pipelined version of the CPU. Mostly working as of this commit.

module epRISC_core(iClk, iRst, oAddr, bData, oWrite, iMaskInt, iNonMaskInt, oHalt, iDbg, iStep, oFlg);  
           
    // System control signals        
    input iClk, iRst;
     
    // System bus
    inout [31:0] bData;
    output wire oWrite;
    output wire [31:0] oAddr;
    
    // Interrupt controller signals
    input iMaskInt, iNonMaskInt;
    
    // Debugging signals
    input iDbg, iStep;
    output wire oFlg, oHalt;
    
    
    // System registers
    reg [31:0] rRegIP, rRegSP, rRegCS, rRegGL;
    
    // Internal data registers
    reg [31:0] rRegA, rRegB, rRegM;
    reg [32:0] rRegR;
    reg [32:0] rALUOut;
    
    // Internal control registers
    reg rExec;
    reg [3:0] rPipePrevState, rPipeState, rPipeNextState;
    reg [31:0] rInst, rDataBuf;

    wire wClkInt;
    wire [4:0] wALUOperation;
    
    // Internal bus paths
    wire [31:0] wBusInA, wBusInB, wBusRegA, wBusRegB, wBusOutA, wBusOutB;
    wire [7:0] wBusInAddrA, wBusInAddrB, wBusOutAddrA, wBusOutAddrB;
    wire wBusOutWriteA, wBusOutWriteB;
    
    
    // Instruction flags - worduck
    wire mBranch, mBranchStandard, mBranchSaveStack, mBranchSaveLink, mBranchLoadStack, mBranchLoadLink, mBranchInterrupt;
    wire mLoad, mLoadLoad, mLoadStore;
    wire mDirect, mDirectOR;
    wire mALU, mALURegisters, mALUDirect;
    wire mRegister, mRegisterStandard, mRegisterSwap;
    wire mCore;
    
    // Instruction fields
    wire [19:0] fBranchOffset, fLoadOffset, fDirectValue, fCoreData;
    wire [7:0] fALUValue;
    wire [5:0] fCoreOperation;
    wire [4:0] fALUOperation;
    wire [3:0] fBranchCondition, fBranchBase, fLoadBase, fLoadTarget, fDirectDestination, fDirectShift, fALUDestination, fALUTermA, fALUTermB, fALUShift, fRegisterDestination, fRegisterSource;

    // Control register fields/flags
    wire [3:0] fCSRegisterPage, fCSLinkRegister;
    wire fCSHideRegs, fCSInterruptEn, fCSSignExtend, fCSFlagSet, fCSCarry, fCSZero, fCSNeg, fCSOver;
    
    
    //Assignment - system 
    assign oAddr = (rPipeState == `sPipeFetch) ? rRegIP : rRegR[31:0];
    assign oWrite = (rPipeState == `sPipeMemory && (mLoadStore || mBranchSaveStack)) ? 1'b1 : 1'b0;
    assign bData = (!oWrite) ? 32'bz : rRegM;
    
    assign wClkInt = iClk;
    assign wALUOperation = (mALU) ? (fALUOperation) : ((mDirect && mDirectOR) ? (3) : (0));
    
    // Assignment - instruction flags
    assign mBranch = (rInst[31] == 1'b1) ? 1'b1 : 1'b0;
    assign mBranchStandard = (mBranch && rInst[30:28] == 3'b000) ? 1'b1 : 1'b0;
    assign mBranchSaveStack = (mBranch && rInst[30:28] == 3'b100) ? 1'b1 : 1'b0;
    assign mBranchSaveLink = (mBranch && rInst[30:28] == 3'b101) ? 1'b1 : 1'b0;
    assign mBranchLoadStack = (mBranch && rInst[30:28] == 3'b110) ? 1'b1 : 1'b0;
    assign mBranchLoadLink = (mBranch && rInst[30:28] == 3'b111) ? 1'b1 : 1'b0;
    assign mBranchInterrupt = (mBranch && rInst[30:28] == 3'b011) ? 1'b1 : 1'b0;
    assign mLoad = (rInst[31:30] == 1'b1) ? 1'b1 : 1'b0;
    assign mLoadLoad = (mLoad && rInst[29] == 1'b0) ? 1'b1 : 1'b0;
    assign mLoadStore = (mLoad && rInst[29] == 1'b1) ? 1'b1 : 1'b0;
    assign mDirect = (rInst[31:29] == 1'b1) ? 1'b1 : 1'b0;
    assign mDirectOR = (mDirect && rInst[28] == 1'b1) ? 1'b1 : 1'b0;
    assign mALU = (rInst[31:28] == 1'b1) ? 1'b1 : 1'b0;
    assign mALURegisters = (mALU && rInst[27] == 1'b0) ? 1'b1 : 1'b0;
    assign mALUDirect = (mALU && rInst[27] == 1'b1) ? 1'b1 : 1'b0;
    assign mRegister = (rInst[31:27] == 1'b1) ? 1'b1 : 1'b0;
    assign mRegisterStandard = (mRegister && rInst[24] == 1'b0) ? 1'b1 : 1'b0;
    assign mRegisterSwap = (mRegister && rInst[24] == 1'b1) ? 1'b1 : 1'b0;
    assign mCore = (rInst[31:26] == 1'b1) ? 1'b1 : 1'b0;
    
    // Assignment - instruction fields
    assign fBranchOffset = rInst[19:0];
    assign fLoadOffset = rInst[19:0];
    assign fDirectValue = rInst[19:0];
    assign fCoreData = rInst[19:0];
    assign fALUValue = rInst[7:0];
    assign fCoreOperation = rInst[25:20];
    assign fALUOperation = rInst[24:20];
    assign fBranchCondition = rInst[27:24];
    assign fBranchBase = rInst[23:20];
    assign fLoadBase = rInst[27:24];
    assign fLoadTarget = rInst[23:20];
    assign fDirectDestination = rInst[27:24];
    assign fDirectShift = rInst[23:20];
    assign fALUDestination = rInst[19:16];
    assign fALUTermA = rInst[15:12];
    assign fALUTermB = rInst[11:8];
    assign fALUShift = rInst[11:8];
    assign fRegisterDestination = rInst[23:20];
    assign fRegisterSource = rInst[19:16];
    
    // Assignment - control register flags
    assign fCSRegisterPage = rRegCS[15:12];
    assign fCSLinkRegister = rRegCS[11:8];
    assign fCSHideRegs = rRegCS[7];
    assign fCSInterruptEn = rRegCS[6];
    assign fCSSignExtend = rRegCS[5];
    assign fCSFlagSet = rRegCS[4];
    assign fCSCarry = rRegCS[3];
    assign fCSZero = rRegCS[2];
    assign fCSNeg = rRegCS[1];
    assign fCSOver = rRegCS[0];
    
    // Assignment - register pathway
    assign wBusInA = (wBusInAddrA == 0 && !fCSHideRegs) ? rRegIP : ((wBusInAddrA == 1 && !fCSHideRegs) ? rRegSP : ((wBusInAddrA == 2 && !fCSHideRegs) ? rRegCS : ((wBusInAddrA == 3 && !fCSHideRegs) ? rRegGL : (wBusRegA))));
    assign wBusInB = (wBusInAddrB == 0 && !fCSHideRegs) ? rRegIP : ((wBusInAddrB == 1 && !fCSHideRegs) ? rRegSP : ((wBusInAddrB == 2 && !fCSHideRegs) ? rRegCS : ((wBusInAddrB == 3 && !fCSHideRegs) ? rRegGL : (wBusRegB))));
    assign wBusOutA = (mALU) ? rRegR[31:0] : ((mLoadLoad) ? rRegM : rRegA);
    assign wBusOutB = rRegB;
    assign wBusInAddrA = (mBranch) ? fBranchBase : ((mLoad) ? fLoadBase : ((mDirect) ? fDirectDestination : ((mALU) ? fALUTermA : ((mRegister) ? fRegisterDestination : 8'hFF))));
    assign wBusInAddrB = (mLoad) ? fLoadTarget : ((mALU) ? fALUTermB : ((mRegister) ? fRegisterSource : 8'hFF));
    assign wBusOutAddrA = (mRegister) ? fRegisterSource : ((mALU) ? fALUDestination : ((mLoad) ? fLoadTarget : 8'hFF));
    assign wBusOutAddrB = (mRegister) ? fRegisterDestination : ((mDirect) ? fDirectDestination : 8'hFF);
    assign wBusOutWriteA = (mALU || mRegisterSwap || mLoadLoad) ? 1'b1 : 1'b0;
    assign wBusOutWriteB = (mRegister || mDirect) ? 1'b1 : 1'b0;
    
    epRISC_gpr registers(wClkInt, iRst, (fCSRegisterPage<<4)+(rPipeState==`sPipeDecode)?wBusInAddrA:wBusOutAddrA, wBusOutA, wBusRegA, wBusOutWriteA, (fCSRegisterPage<<4)+(rPipeState==`sPipeDecode)?wBusInAddrB:wBusOutAddrB, wBusOutB, wBusRegB, wBusOutWriteB);
    
    
    // System pipeline controller
    always @(posedge wClkInt) begin
        if(iRst) begin
            rPipeState <= `sUndefined;
            rPipePrevState <= `sUndefined;
        end else begin
            rPipePrevState <= rPipeState;
            rPipeState <= rPipeNextState;
        end
    end
    
    always @(*) begin
        case(rPipeState)
            `sPipeFetch: rPipeNextState = `sPipeDecode;
            `sPipeDecode: rPipeNextState = `sPipeArithmetic; 
            `sPipeArithmetic: rPipeNextState = `sPipeMemory; 
            `sPipeMemory: rPipeNextState = (rExec) ? `sPipeWriteback : `sPipeWriteSkip; 
            `sPipeWriteback: rPipeNextState = ((mCore && fCoreOperation == 6'h2) ? `sPipeHalt : `sPipeFetch);
            
            `sPipeWriteSkip: rPipeNextState = ((mCore && fCoreOperation == 6'h2) ? `sPipeHalt : `sPipeFetch);
            `sPipeHalt: rPipeNextState = `sPipeHalt;
            `sUndefined: rPipeNextState = `sPipeFetch;
            
            default: rPipeNextState = `sUndefined;
        endcase
    end
    
    // System registers
    always @(negedge wClkInt) begin
        if(iRst) begin
            rRegIP <= 32'h0;
        end else begin
            if(rPipeState == `sPipeWriteback) begin
                if(mBranch) begin
                    if(mBranchLoadStack)
                        rRegIP <= rRegM;
                    else
                        rRegIP <= rRegR[31:0];
                end else begin
                    rRegIP <= rRegIP + 32'h1;
                end
            end
        end
    end
    
    always @(negedge wClkInt) begin
        if(iRst) begin
            rRegSP <= 32'h0;
        end else begin
            if(rPipeState == `sPipeWriteback) begin
                if(!fCSHideRegs && (mBranchSaveStack || (mLoadStore && fLoadBase == 4'h1))) begin
                    rRegSP <= rRegSP + 32'h1;
                end else if(!fCSHideRegs && (mBranchLoadStack || (mLoadLoad && fLoadBase == 4'h1))) begin
                    rRegSP <= rRegSP - 32'h1;
                end else begin
                    if(!fCSHideRegs && wBusOutAddrA == 32'h1 && wBusOutWriteA)
                        rRegSP <= wBusOutA;
                    else if(!fCSHideRegs && wBusOutAddrB == 32'h1 && wBusOutWriteB)
                        rRegSP <= wBusOutB;
                end
            end
        end
    end
    
    always @(negedge wClkInt) begin
        if(iRst) begin
            rRegCS <= 32'h0;
        end else begin
            if(rPipeState == `sPipeWriteback) begin
                if(fCSFlagSet) begin
                    rRegCS[3] <= rRegR[32];
                    rRegCS[2] <= (rRegR == 0) ? 1'b1 : 1'b0;
                    rRegCS[1] <= rRegR[31];
                    rRegCS[0] <= (fALUOperation == 0 && ((rRegA[31]&&rRegB[31]&&!rRegR[31])||(!rRegA[31]&&!rRegB[31]&&rRegR[31]))) ? 1'b1 
                                 : (fALUOperation == 1 && ((!rRegA[31]&&rRegB[31]&&!rRegR[31])||(rRegA[31]&&!rRegB[31]&&rRegR[31]))) ? 1'b1 : 1'b0;
                end
                
                if(mCore && fCoreOperation == 6'h3) begin
                    rRegCS[15:12] <= fCoreData[19:16];
                    rRegCS[7] <= fCoreData[15];
                end
                
                if(!fCSHideRegs && wBusOutAddrA == 32'h2 && wBusOutWriteA)
                    rRegCS <= wBusOutA;
                else if(!fCSHideRegs && wBusOutAddrB == 32'h2 && wBusOutWriteB)
                    rRegCS <= wBusOutB;
            end
        end
    end
   
    always @(negedge wClkInt) begin
        if(iRst) begin
            rRegGL <= 32'h0;
        end else begin
            if(rPipeState == `sPipeWriteback) begin
                if(!fCSHideRegs && wBusOutAddrA == 32'h3 && wBusOutWriteA)
                    rRegGL <= wBusOutA;
                else if(!fCSHideRegs && wBusOutAddrB == 32'h3 && wBusOutWriteB)
                    rRegGL <= wBusOutB;
            end
        end
    end
    
     
    // Internal registers
    always @(negedge wClkInt) begin
        if(iRst) begin
            rRegA <= 32'h0;
        end else begin
            if(rPipeState == `sPipeDecode) begin
                rRegA <= wBusInA;
            end
        end
    end
    
    always @(negedge wClkInt) begin
        if(iRst) begin
            rRegB <= 32'h0;
        end else begin
            if(rPipeState == `sPipeDecode) begin
                if(mBranch)
                    rRegB <= (32'hFFF00000 + fBranchOffset);
                else if(mLoad)
                    rRegB <= (fCSSignExtend) ? (32'hFFF00000 + fLoadOffset) : (fLoadOffset);
                else if(mDirect)
                    rRegB <= (fDirectValue << fDirectShift);
                else if(mALU && !mALURegisters)
                    rRegB <= fALUValue << (fALUShift << 1);
                else if(mALU && !mALURegisters && (fALUOperation == 5'd12 || fALUOperation == 5'd13))
                    rRegB <= (fALUShift << 1);
                else
                    rRegB <= wBusInB;
            end
        end
    end
    
    always @(negedge wClkInt) begin
        if(iRst) begin
            rRegM <= 32'h0;
        end else begin
            if(rPipeState == `sPipeDecode) begin
                if(mBranch)
                    rRegM <= rRegIP;
                else 
                    rRegM <= wBusInB;
            end else if(rPipeState == `sPipeMemory && (mLoadLoad || mBranchLoadStack)) begin
                rRegM <= bData;
            end
        end
    end
    
    always @(negedge wClkInt) begin
        if(iRst) begin
            rInst <= 32'h0;
        end else begin
            if(rPipeState == `sPipeFetch) 
                rInst <= bData;
        end
    end
    
    always @(negedge wClkInt) begin
        if(iRst) begin
            rRegR <= 33'h0;
        end else begin
            if(rPipeState == `sPipeArithmetic)
                rRegR <= rALUOut;
        end
    end
    
    // Arithmetic logic unit 
    always @(*) begin
        case(wALUOperation)
            0: rALUOut = rRegA + rRegB + fCSCarry;
            1: rALUOut = rRegA - (rRegB + fCSCarry);
            2: rALUOut = rRegA & rRegB;
            3: rALUOut = rRegA | rRegB;
            4: rALUOut = rRegA ^ rRegB;
            5: rALUOut = ~rRegA;
            6: rALUOut = rRegA << rRegB;
            7: rALUOut = (rRegA[31]) ? ((~(32'b1 >> rRegB)) + (rRegA >> rRegB)) : (rRegA >> rRegB);
            8: rALUOut = rRegA >> rRegB;
            9: rALUOut = (rRegA >> rRegB) + ((rRegA & (~(32'b1 << rRegB))) << (32'd32-rRegB)); 
            10: rALUOut = (rRegA << rRegB) + ((rRegA & (~(32'b1 >> rRegB))) >> (32'd32-rRegB));    
            11: rALUOut = rRegA & (~rRegB);
            12: rALUOut = ((rRegA & fALUValue) << (rRegB));
            13: rALUOut = ((rRegA & (fALUValue << rRegB)) >> (rRegB));
            14: rALUOut = rRegA - rRegB;
            15: rALUOut = rRegA & rRegB;
            default: rALUOut = 32'hBADC0DE;
        endcase
    end
    
    // Writeback control
    always @(*) begin
        if(mBranch) begin
            case(fBranchCondition)
                0: rExec = 1'b1;
                1: rExec = (fCSZero) ? 1'b1 : 1'b0;
                2: rExec = (!fCSZero) ? 1'b1 : 1'b0;
                3: rExec = (fCSCarry) ? 1'b1 : 1'b0;
                4: rExec = (!fCSCarry) ? 1'b1 : 1'b0;
                5: rExec = (fCSNeg) ? 1'b1 : 1'b0;
                6: rExec = (!fCSNeg) ? 1'b1 : 1'b0;
                7: rExec = (fCSOver) ? 1'b1 : 1'b0;
                8: rExec = (!fCSOver) ? 1'b1 : 1'b0;
                9: rExec = (fCSCarry && !fCSZero) ? 1'b1 : 1'b0;
                10: rExec = (!fCSCarry || fCSZero) ? 1'b1 : 1'b0;
                11: rExec = (fCSNeg == fCSOver) ? 1'b1 : 1'b0;
                12: rExec = (fCSNeg != fCSOver) ? 1'b1 : 1'b0;
                13: rExec = (!fCSZero && (fCSNeg == fCSOver)) ? 1'b1 : 1'b0;
                14: rExec = (fCSZero || (fCSNeg != fCSOver)) ? 1'b1 : 1'b0;
                15: rExec = 1'b0;
            endcase
        end else begin
            rExec = 1'b1;
        end
    end
    
endmodule
