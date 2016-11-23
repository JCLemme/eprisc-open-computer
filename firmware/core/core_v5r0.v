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
    
    // Internal control registers
    reg [3:0] rPipeStatePrev, rPipeState, rPipeStateNext;
    reg [31:0] rInst, rDataBuf;
    
    
    // Instruction flags - worduck
    wire mBranch, mBranchStandard, mBranchSaveStack, mBranchSaveLink, mBranchLoadStack, mBranchLoadLink;
    wire mLoad, mLoadLoad, mLoadStore;
    wire mDirect;
    wire mALU, mALURegisters, mALUDirect;
    wire mRegister, mRegisterStandard, mRegisterSwap;
    wire mCore;
    
    // Instruction fields
    wire fBranchCondition, fBranchBase, fBranchOffset;
    wire fLoadBase, fLoadTarget, fLoadOffset;
    wire fDirectDestination, fDirectShift, fDirectValue;
    wire fALUOperation, fALUDestination, fALUTermA, fALUTermB, fALUShift, fALUValue;
    wire fRegisterDestination, fRegisterSource;
    wire fCoreOperation, fCoreData;


