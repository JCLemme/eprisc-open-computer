// epRISC core - baseline implementation
// currently implementing ISA v5r0
// 
// written by John C. Lemme, jclemme (at) proportionallabs (dot) com
// this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.

/* verilator lint_off WIDTH */


// Pipeline steps
`define sPipeFetch          1
`define sPipeDecode         2
`define sPipeArithmetic     3
`define sPipeMemory         4
`define sPipeWriteback      5
`define sUndefined          0


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
    reg [31:0] rRegA, rRegB, rRegC, rRegS, rRegL;
    reg [32:0] rRegR;
    wire [32:0] rALUOut;
    
    // Internal control registers
    reg rExec;
    reg [3:0] rPipeStatePrev, rPipeState, rPipeStateNext;
    reg [31:0] rInst, rDataBuf;

    wire wClkInt;
    wire [4:0] wALUOperation;
    
    // Internal bus paths
    wire [31:0] wBusInA, wBusInB, wBusOutA, wBusOutB;
    wire [6:0] wBusInAddrA, wBusInAddrB, wBusOutAddrA, wBusOutAddrB;
    wire wBusOutWriteA, wBusOutWriteB;
    
    
    // Instruction flags - worduck
    wire mBranch, mBranchStandard, mBranchSaveStack, mBranchSaveLink, mBranchLoadStack, mBranchLoadLink, mBranchInterrupt;
    wire mLoad, mLoadLoad, mLoadStore;
    wire mDirect;
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
    assign oAddr = 
    assign oWrite = 
    assign bData = 
    
    assign wClkInt = 
    assign wALUOperation = 
    
    // Assignment - instruction flags
    assign mBranch = (rInst[31] == 1'b1) ? 1'b1 : 1'b0;
    assign mBranchStandard = (rInst[30:28] == 3'b000) ? 1'b1 : 1'b0;
    assign mBranchSaveStack = (rInst[30:28] == 3'b100) ? 1'b1 : 1'b0;
    assign mBranchSaveLink = (rInst[30:28] == 3'b101) ? 1'b1 : 1'b0;
    assign mBranchLoadStack = (rInst[30:28] == 3'b110) ? 1'b1 : 1'b0;
    assign mBranchLoadLink = (rInst[30:28] == 3'b111) ? 1'b1 : 1'b0;
    assign mBranchInterrupt = (rInst[30:28] == 3'b011) ? 1'b1 : 1'b0;
    assign mLoad = (rInst[31:30] == 1'b1) ? 1'b1 : 1'b0;
    assign mLoadLoad = (rInst[29] == 1'b0) ? 1'b1 : 1'b0;
    assign mLoadStore = (rInst[29] == 1'b1) ? 1'b1 : 1'b0;
    assign mDirect = (rInst[31:29] == 1'b1) ? 1'b1 : 1'b0;
    assign mALU = (rInst[31:28] == 1'b1) ? 1'b1 : 1'b0;
    assign mALURegisters = (rInst[27] == 1'b0) ? 1'b1 : 1'b0;
    assign mALUDirect = (rInst[27] == 1'b1) ? 1'b1 : 1'b0;
    assign mRegister = (rInst[31:27] == 1'b1) ? 1'b1 : 1'b0;
    assign mRegisterStandard = (rInst[24] == 1'b0) ? 1'b1 : 1'b0;
    assign mRegisterSwap = (rInst[24] == 1'b1) ? 1'b1 : 1'b0;
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
    assign fCSCarry = fCSCarry;
    assign fCSZero = fCSZero;
    assign fCSNeg = fCSNeg;
    assign fCSOver = fCSOver;
    
    
    // System pipeline controller
    always @(posedge iClk) begin
        if(iRst) begin
            rPipeState <= `sUndefined;
            rPipeStatePrev <= `sUndefined;
        end else begin
            rPipeStatePrev <= rPipeState;
            rPipeState <= rPipeStateNext;
        end
    end
    
    always @(*) begin
        case(rPipeState)
            `sPipeFetch: rPipeNextState = `sPipeDecode;
            `sPipeDecode: rPipeNextState = `sPipeArithmetic; 
            `sPipeArithmetic: rPipeNextState = `sPipeMemory; 
            `sPipeMemory: rPipeNextState = `sPipeWriteback; 
            `sPipeWriteback: rPipeNextState = `sPipeFetch;
            `sUndefined: rPipeNextState = `sPipeFetch;
            default: rPipeNextState = `sUndefined;
        endcase
    end
    
    // Internal registers
    always @(negedge wClkInt) begin
        if(iRst) begin
            rRegR <= 0;
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
            10: rALUOut = (rRegA << rRegB) + ((rRegA & (~(32'b1 >> rRegB))) >> (32'd32-rRegB));    //ROR
            11: rALUOut = rRegA & (~rRegB);
            12: rALUOut = ((rRegA & rRegC) << (rRegB));
            13: rALUOut = ((rRegA & rRegC) >> (rRegB));
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
    

