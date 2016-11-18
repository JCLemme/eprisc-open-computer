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
    
    
    always @(*) begin
        
        (rTmpA >> rTmpB) + ((rTmpA & (~(32'b1 << rTmpB))) << (32-rTmpB));
    end
