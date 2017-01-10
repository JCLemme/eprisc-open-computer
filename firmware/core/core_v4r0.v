// epRISC Core, v4
// (C) 2016 by John C. Lemme - jclemme (at) proportionallabs (dot) (com)

// This file is part of the epRISC project, released under the epRISC license. See "license.txt" for details.

// This is the CPU, implementing the epRISC v4 ISA. It's pretty buggy right now, and I make no promises that it works.
// It also might not adhere exactly to the specification, especially around interrupts and the ALU. 

// This file is part of the epRISC project, released under the MIT license. See "LICENSE" for details.

/* verilator lint_off WIDTH */
 
`define sPipeFetch          1
`define sPipeDecodeDelay    10
`define sPipeDecode         2
`define sPipeArithmetic     3
`define sPipeMemory         4
`define sPipeWriteback      5
`define sPipeIncCatch       6
`define sPipeIntCatch       7
`define sPipeFetchDelay     8
`define sPipeMemoryDelay    9
`define sUndefined          0


module GPR_epRISC(iClk, iRst, iAddrA, iDInA, oDOutA, iWriteA, iAddrB, iDInB, oDOutB, iWriteB);

    input iClk, iRst, iWriteA, iWriteB;
    input [5:0] iAddrA, iAddrB;
    input [31:0] iDInA, iDInB;
    output reg [31:0] oDOutA, oDOutB;
    
    reg [6:0] rClr;
    reg [31:0] rContents[0:63];
        
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

module Core_epRISC(iClk, iRst, iInt, oHalt, oAddr, bData, oWrite);
    
    parameter pVecRst = 0, pVecInt = 0;
    
    input iClk, iRst;
    input [2:0] iInt;
    inout [31:0] bData;
    output wire oWrite;
    output wire [31:0] oAddr;
    output reg oHalt;
    
    wire mBranch, mBranchRest, mBranchNorm, mBranchInt, mBranchRestLink, mBranchRestStak, mBranchSaveLink, mBranchSaveStak;
    wire mRegister, mRegisterVal, mRegisterReg;
    wire mALU, mALUVal, mALUReg;
    wire mLoad, mLoadLod, mLoadStr;
    wire mCore, mFail;
    
    wire wGPRWriteA, wGPRWriteB, wGPRInWriteA, wGPRInWriteB, wGPREnableA, wGPREnableB, wALUC, wALUZ, wALUN, wALUV;
    wire [3:0] wALUOp, wInstRegA, wInstRegB, wInstRegC, wRegShift;
    wire [4:0] wALUShift;
    wire [5:0] wGPRAddrA, wGPRAddrB;
    wire [7:0] wALUVal;
    wire [15:0] wRegVal;
    wire [18:0] wOffset;
    wire [31:0] wGPRDInA, wGPRDInB, wGPRDOutA, wGPRDOutB, wGPRDBusA, wGPRDBusB, wIntRegA, wIntRegB, wIntAccA, wIntAccB, wDebug;
    
    //assign wDebug = rRegIntV[2];
    
    reg rExec, rIntRcv, rIntAck;
    reg [2:0] rIntPri;
    reg [3:0] rPipeState, rPipeNextState;
    reg [31:0] rRegIP, rRegSP, rRegCS, rRegGL, rTmpA, rTmpB, rTmpR, rTmpM, rInst, rDataBuf, rAddrBuf, rGPRBufA, rGPRBufB;
    reg [32:0] rTmpC;
    
    reg [31:0] rRegIntV[0:3];
    
    GPR_epRISC gpr(iClk, iRst, wGPRAddrA, wGPRDInA, wGPRDOutA, wGPRWriteA, wGPRAddrB, wGPRDInB, wGPRDOutB, wGPRWriteB);
    //GPRon_epRISC gpr(wGPRAddrA, wGPRAddrB, iClk, wGPRDInA, wGPRDInB, 1, wGPRWriteA, wGPRWriteB, wGPRDOutA, wGPRDOutB);

    assign mBranch = (rInst[27]) ? 1 : 0;
    assign mBranchRest = (rInst[27:25] == 7) ? 1 : 0;
    assign mBranchNorm = (rInst[27:25] == 0) ? 1 : 0;
    assign mBranchInt = (rInst[19]) ? 1 : 0;
    assign mBranchRestLink = (rInst[27:24] == 14) ? 1 : 0;
    assign mBranchRestStak = (rInst[27:24] == 15) ? 1 : 0;
    assign mBranchSaveLink = (rInst[27:24] == 12) ? 1 : 0;
    assign mBranchSaveStak = (rInst[27:24] == 13) ? 1 : 0;
    assign mRegister = (rInst[27:26] == 1) ? 1 : 0;
    assign mRegisterVal = (rInst[27:24] == 5) ? 1 : 0;
    assign mRegisterReg = (rInst[27:24] == 4) ? 1 : 0;
    assign mALU = (rInst[27:25] == 3) ? 1 : 0;
    assign mALUVal = (rInst[27:24] == 7) ? 1 : 0;
    assign mALUReg = (rInst[27:24] == 6) ? 1 : 0;
    assign mLoad = (rInst[27:25] == 1) ? 1 : 0;
    assign mLoadLod = (rInst[27:24] == 2) ? 1 : 0;
    assign mLoadStr = (rInst[27:24] == 3) ? 1 : 0;
    assign mCore = (rInst[27:24] == 1) ? 1 : 0;
    assign mFail = (rInst[27:24] == 0) ? 1 : 0;
    
    assign wInstRegA = rInst[23:20];
    assign wInstRegB = rInst[19:16];
    assign wInstRegC = rInst[15:12];
    assign wRegShift = rInst[19:16];
    assign wALUShift = rInst[15:12];
    assign wALUVal = rInst[11:4];
    assign wRegVal = rInst[15:0];
    assign wOffset = rInst[18:0];
    
    assign oAddr = (rPipeState == `sPipeMemory || rPipeState == `sPipeMemoryDelay) ? ((mBranchSaveStak || mBranchRestStak || (mLoadLod && wInstRegA == 1 && !rRegCS[7]) || (mLoadStr && wInstRegA == 1 && !rRegCS[7])) ? rRegSP : rTmpC) : rRegIP;
    assign bData = (oWrite) ? rDataBuf : 32'bz;
    assign oWrite = ((rPipeState == `sPipeMemory  || rPipeState == `sPipeMemoryDelay) && (mBranchSaveStak || mLoadStr)) ? 1 : 0;
    
    assign wALUOp = (mALU) ? rInst[3:0] : 0;
    assign wALUC = ((wALUOp==0&&rTmpC[32])||(((wALUOp==1)||(wALUOp==13))&&(!rTmpC[32]))) ? 1 : 0;
    assign wALUZ = (rTmpC[31:0] == 0) ? 1 : 0;
    assign wALUN = (rTmpC[31]) ? 1 : 0;
    assign wALUV = (wALUOp == 0 && ((rTmpA[31]&&rTmpB[31]&&!rTmpC[31])||(!rTmpA[31]&&!rTmpB[31]&&rTmpC[31]))) ? 1 : (wALUOp==1&&((!rTmpA[31]&&rTmpB[31]&&!rTmpC[31])||(rTmpA[31]&&!rTmpB[31]&&rTmpC[31]))) ? 1 : 0;

    assign wIntRegA = (wGPRAddrA==0) ? rRegIP : ((wGPRAddrA==1) ? rRegSP : ((wGPRAddrA==2) ? rRegCS : ((wGPRAddrA==3) ? rRegGL : 32'hFFFFFFFF)));
    assign wIntRegB = (wGPRAddrB==0) ? rRegIP : ((wGPRAddrB==1) ? rRegSP : ((wGPRAddrB==2) ? rRegCS : ((wGPRAddrB==3) ? rRegGL : 32'hFFFFFFFF)));
    
    assign wIntAccA = (wGPRAddrA > 35 && wGPRAddrA < 40) ? rRegIntV[wGPRAddrA[1:0]] : 0;
    assign wIntAccB = (wGPRAddrB > 35 && wGPRAddrB < 40) ? rRegIntV[wGPRAddrB[1:0]] : 0;
    
    assign wGPRAddrA = (rRegCS[13:12]<<4) + ((rPipeState == `sPipeWriteback) ? ((mBranchRestLink) ? rRegCS[11:8] : ((mRegisterReg && rInst[15]) ? wInstRegB : wInstRegA)) : ((mBranchSaveLink) ? rRegCS[11:8] : ((mALU) ? wInstRegB : wInstRegA)));
    assign wGPRDInA = ((mBranchRestLink) ? rTmpR : ((mRegisterReg && rInst[15]) ? rTmpA : rTmpC));
    assign wGPRDBusA = (!rRegCS[7] && wGPRAddrA < 4) ? wIntRegA : ((wGPRAddrA >= 32) ? wIntAccA : wGPRDOutA);
    assign wGPREnableA = (wGPRAddrA < 4 && !rRegCS[7]) ? 0 : 1;
    assign wGPRInWriteA = (rPipeState == `sPipeWriteback && !mLoad && !mBranch && !mRegisterReg && !mCore && !wGPREnableA && !mFail) ? ((mALU && wALUOp >= 13) ? 0 : 1) : 0;
    assign wGPRWriteA = (rPipeState == `sPipeWriteback && !mLoad && !mBranch && !mRegisterReg && !mCore && wGPREnableA && !mFail) ? ((mALU && wALUOp >= 13) ? 0 : 1) : 0;
    
    assign wGPRAddrB = (rRegCS[13:12]<<4) + ((rPipeState == `sPipeWriteback) ? ((mLoadLod) ? wInstRegB : wInstRegA) : ((mALUReg) ? wInstRegC : ((mRegisterReg && rInst[15]) ? wInstRegA : wInstRegB)));  
    assign wGPRDInB = ((mLoadLod) ? rTmpM : rTmpB);
    assign wGPRDBusB = ((!rRegCS[7] && wGPRAddrB < 4) ? wIntRegB : ((wGPRAddrB >= 32) ? wIntAccB : wGPRDOutB));
    assign wGPREnableB = (wGPRAddrB < 4 && !rRegCS[7]) ? 0 : 1;
    assign wGPRInWriteB = (rPipeState == `sPipeWriteback && (mLoadLod || mRegisterReg) && !mCore && !wGPREnableB && !mFail) ? 1 : 0;
    assign wGPRWriteB = (rPipeState == `sPipeWriteback && (mLoadLod || mRegisterReg) && !mCore && wGPREnableB && !mFail) ? 1 : 0;
    
    always @(posedge iClk) begin
        if(iRst) 
            rPipeState <= `sUndefined;
        else
            rPipeState <= rPipeNextState;
    end
    
    always @(negedge iClk) begin
        if(iRst) begin
            oHalt <= 0;
        end else begin
            if(rPipeState == `sPipeWriteback) begin
                if(mCore && wInstRegA == 2)
                    oHalt <= 1;
            end
        end
    end
    
    always @(negedge iClk) begin
        if(iRst) begin
            rIntAck <= 0;
        end else begin
            if(rIntRcv == 1)
                rIntAck <= 1;
            else if(rPipeState == `sPipeIntCatch) begin
                rIntAck <= 0;
            end
        end
    end
    
    always @(negedge iClk) begin
        if(iRst) begin
            rRegIP <= 0;
        end else begin
            if(rPipeState == `sPipeWriteback) begin
                if(mBranch) begin
                    if(mBranchRestStak)
                        rRegIP <= rTmpM + 1;
                    else if(mBranchRestLink)
                        rRegIP <= rTmpC[31:0] + 1;
                    else
                        rRegIP <= rTmpC[31:0];
                end else begin
                    if(!rRegCS[7] && wGPRAddrA == 0 && wGPRInWriteA) begin
                        rRegIP <= wGPRDInA;
                        //$display("\nPort A write %h %h %h %h", rRegIP, wGPRAddrA, rInst, wGPRInWriteA);
                    end else if(!rRegCS[7] && wGPRAddrB == 0 && wGPRInWriteB) begin
                        rRegIP <= wGPRDInB;
                        //$display("Port B write %h", rRegIP);
                    end else begin
                        rRegIP <= rRegIP + 1;
                    end
                end
            end else if(rPipeState == `sPipeIncCatch) begin
                rRegIP <= rRegIP + 1;
            end else if(rPipeState == `sPipeIntCatch) begin
                if(mCore && wInstRegA == 1)
                    rRegIP <= rRegIntV[3];
                else
                    rRegIP <= rRegIntV[rIntPri];
            end
        end
    end
    
    always @(negedge iClk) begin
        if(iRst) begin
            rRegSP <= 0;
        end else begin
            if(rPipeState == `sPipeArithmetic) begin
                if(mBranchRestStak || (mLoadLod && wInstRegA == 1 && !rRegCS[7]))
                    rRegSP <= rRegSP + 1;
            end else if(rPipeState == `sPipeWriteback) begin
                if(!rRegCS[7] && wGPRAddrA == 1 && wGPRInWriteA)
                    rRegSP <= wGPRDInA;
                else if(!rRegCS[7] && wGPRAddrB == 1 && wGPRInWriteB)
                    rRegSP <= wGPRDInB;
                else if(mBranchSaveStak || (mLoadStr && wInstRegA == 1 && !rRegCS[7]))
                    rRegSP <= rRegSP - 1;
            end
        end
    end
    
    always @(negedge iClk) begin
        if(iRst) begin
            rRegCS <= 0;
        end else begin
            if(rPipeState == `sPipeWriteback) begin
                if(!rRegCS[4]) begin
                    rRegCS[3] <= wALUC;
                    rRegCS[2] <= wALUZ;
                    rRegCS[1] <= wALUN;
                    rRegCS[0] <= wALUV;
                end
                if(mBranchInt) begin
                    rRegCS[6] <= !rRegCS[6];
                end
                if(mCore && wInstRegA == 3)
                    rRegCS[15:12] <= wALUOp;
                else if(!rRegCS[7] && wGPRAddrA == 2 && wGPRInWriteA)
                    rRegCS <= wGPRDInA;
                else if(!rRegCS[7] && wGPRAddrB == 2 && wGPRInWriteB)
                    rRegCS <= wGPRDInB;
            end else if(rPipeState == `sPipeIntCatch) begin
                if(mBranchInt)
                    rRegCS[6] <= 0;
            end
        end
    end
    
    always @(negedge iClk) begin
        if(iRst) begin
            rRegGL <= 0;
        end else begin
            if(rPipeState == `sPipeWriteback) begin
                if(!rRegCS[7] && wGPRAddrA == 3 && wGPRInWriteA)
                    rRegGL <= wGPRDInA;
                else if(!rRegCS[7] && wGPRAddrB == 3 && wGPRInWriteB)
                    rRegGL <= wGPRDInB;
            end else if(rPipeState == `sPipeIntCatch) begin
                rRegGL <= rRegIP;
            end
        end
    end

    always @(negedge iClk) begin
        if(iRst) begin
            rRegIntV[3] <= 0;
            rRegIntV[2] <= 0;
            rRegIntV[1] <= 0;
            rRegIntV[0] <= 0;
        end else begin
            if(rPipeState == `sPipeWriteback) begin
                if(wGPRAddrB > 35 && wGPRAddrB < 40 && wGPRWriteA && wGPREnableA)
                    rRegIntV[wGPRAddrA[1:0]] <= wGPRDBusA;
                else if(wGPRAddrB > 35 && wGPRAddrB < 40 && wGPRWriteA && wGPREnableA)
                    rRegIntV[wGPRAddrA[1:0]] <= wGPRDBusB;
            end
        end
    end
        
    always @(negedge iClk) begin
        if(iRst) begin
            rTmpA <= 0;
        end else begin
            if(rPipeState == `sPipeDecode || rPipeState == `sPipeDecodeDelay) begin
                if(mRegisterVal)
                    rTmpA <= ((wRegVal[15]) ? 32'hFFFF0000 + wRegVal : wRegVal) << wRegShift;
                else
                    rTmpA <= wGPRDBusA;
            end 
        end
    end

    always @(negedge iClk) begin
        if(iRst) begin
            rTmpB <= 0;
        end else begin
            if(rPipeState == `sPipeDecode || rPipeState == `sPipeDecodeDelay) begin
                if(mBranch)
                    rTmpB <= (wOffset[18]) ? 32'hFFF80000 + wOffset : wOffset;
                else if(mLoad)
                    rTmpB <= (wRegVal[15]) ? 32'hFFFF0000 + wRegVal : wRegVal;
                else if(mALUVal)
                    //if(rRegIP > 32'h100)
                    //    rTmpB <= (wALUVal) << (wALUShift<<1);
                    //else
                    //    rTmpB <= ((wALUVal[7]) ? 32'hFFFFFF00 + wALUVal : wALUVal) << (wALUShift<<1);
                    if(rRegCS[5])
                        rTmpB <= ((wALUVal) << (wALUShift<<1));
                    else
                        rTmpB <= (((wALUVal[7]) ? 32'hFFFFFF00 + wALUVal : wALUVal) << (wALUShift<<1));
                else if(mRegisterVal)
                    rTmpB <= 0;
                else
                    rTmpB <= wGPRDBusB;
            end
        end
    end
    
    always @(negedge iClk) begin
        if(iRst) begin
            rTmpR <= 0;
        end else begin
            if(mBranch && !mBranchSaveLink)
                rTmpR <= rRegIP;
            else
                rTmpR <= wGPRDBusB;
        end
    end
    
    always @(negedge iClk) begin
        if(iRst) begin
            rTmpM <= 0;
            rInst <= 0;
            rDataBuf <= 0;
        end else begin
            if(rPipeState == `sPipeFetch || rPipeState == `sPipeFetchDelay) begin
                rInst <= bData;
            end if(rPipeState == `sPipeMemoryDelay || rPipeState == `sPipeMemory) begin
                if(oWrite) 
                    rDataBuf <= rTmpR;       
            end if(rPipeState == `sPipeMemoryDelay || rPipeState == `sPipeMemory) begin
                rTmpM <= bData;
            end
        end
    end
    
    always @(negedge iClk) begin
        if(iRst) begin
            rTmpC <= 0;
        end else begin
            if(rPipeState == `sPipeArithmetic) begin
                case(wALUOp)
                    0: rTmpC <= rTmpA + rTmpB;      //Add
                    1: rTmpC <= rTmpA - rTmpB;      //Sub
                    2: rTmpC <= rTmpA + 1;          //Inc
                    3: rTmpC <= rTmpA - 1;          //Dec
                    4: rTmpC <= rTmpA & rTmpB;      //And
                    5: rTmpC <= rTmpA | rTmpB;      //Or
                    6: rTmpC <= rTmpA ^ rTmpB;      //Xor
                    7: rTmpC <= ~rTmpA;             //Not
                    8: rTmpC <= rTmpA << rTmpB;     //ASL
                    9: rTmpC <= (rTmpC[31]) ? (~(32'b1 >> rTmpB)) + (rTmpA >> rTmpB) : rTmpA >> rTmpB;     //ASR
                    10: rTmpC <= rTmpA >> rTmpB;    //LSR
                    11: rTmpC <= (rTmpA >> rTmpB) + ((rTmpA & (~(32'b1 << rTmpB))) << (32-rTmpB));    //ROL
                    12: rTmpC <= (rTmpA << rTmpB) + ((rTmpA & (~(32'b1 >> rTmpB))) >> (32-rTmpB));    //ROR
                    13: rTmpC <= rTmpA - rTmpB;     //CMP
                    14: rTmpC <= rTmpA & rTmpB;     //TST
                    15: rTmpC <= 0;                 //Nothing
                endcase
            end
        end
    end
    
    always @(iInt or rIntAck) begin
        if((!rRegCS[6] && (iInt > 0)) && !rIntAck) begin
            rIntRcv = 1;
            rIntPri = iInt;
        end else begin
            rIntRcv = 0;
        end
    end
    
    always @(*) begin
        case(rInst[31:28])
            0: rExec = 1;
            1: rExec = (rRegCS[2]) ? 1 : 0;
            2: rExec = (!rRegCS[2]) ? 1 : 0;
            3: rExec = (rRegCS[3]) ? 1 : 0;
            4: rExec = (!rRegCS[3]) ? 1 : 0;
            5: rExec = (rRegCS[1]) ? 1 : 0;
            6: rExec = (!rRegCS[1]) ? 1 : 0;
            7: rExec = (rRegCS[0]) ? 1 : 0;
            8: rExec = (!rRegCS[0]) ? 1 : 0;
            9: rExec = (rRegCS[3] && !rRegCS[2]) ? 1 : 0;
            10: rExec = (!rRegCS[3] || rRegCS[2]) ? 1 : 0;
            11: rExec = (rRegCS[1] == rRegCS[0]) ? 1 : 0;
            12: rExec = (rRegCS[1] != rRegCS[0]) ? 1 : 0;
            13: rExec = (!rRegCS[2] && (rRegCS[1] == rRegCS[0])) ? 1 : 0;
            14: rExec = (rRegCS[2] || (rRegCS[1] != rRegCS[0])) ? 1 : 0;
            15: rExec = 0;
        endcase
    end
            
    always @(*) begin
        case(rPipeState)
            `sPipeFetch: rPipeNextState = `sPipeFetchDelay; /*rPipeNextState = (rExec) ? `sPipeDecode : `sPipeIncCatch;*/
            `sPipeFetchDelay: rPipeNextState = (rExec) ? `sPipeDecodeDelay : `sPipeIncCatch;
            `sPipeDecodeDelay: rPipeNextState = `sPipeDecode;
            `sPipeDecode: rPipeNextState = `sPipeArithmetic; 
            `sPipeArithmetic: rPipeNextState = `sPipeMemory; 
            `sPipeMemory: rPipeNextState = `sPipeMemoryDelay; /*rPipeNextState = `sPipeWriteback;*/
            `sPipeMemoryDelay: rPipeNextState = `sPipeWriteback; 
            `sPipeWriteback: rPipeNextState = (oHalt) ? `sUndefined : ((rIntAck || (mCore && wInstRegA==1)) ? `sPipeIntCatch : `sPipeFetch);
            `sPipeIncCatch: rPipeNextState = `sPipeFetch;
            `sPipeIntCatch: rPipeNextState = `sPipeFetch;
            `sUndefined: rPipeNextState = (oHalt) ? `sUndefined : `sPipeFetch;
            default: rPipeNextState = `sUndefined;
        endcase
    end
    
endmodule
