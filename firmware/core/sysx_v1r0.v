// sysX master controller - baseline implementation
// currently implementing sysX version 1
// 
// written by John C. Lemme, jclemme (at) proportionallabs (dot) com
// this file is part of the epRISC project, released under the epRISC license - see "license.txt" for details.

// Gonna need this here too
/* verilator lint_off WIDTH */

`define sPipeIdle       0
`define sPipeBegin      1
`define sPipeLowLow     2
`define sPipeLow        3
`define sPipeHigh       4
`define sPipeHighHigh   5
`define sPipeEnd        6
`define sPipeInvalid    7

module epRISC_sysXMaster(iClock, iReset, iAddress, bData, iWrite, oInterrupt, iBusMISO, oBusMOSI, oBusClock, iBusInterrupt, oBusSelect);

    // External I/O
    input iClock, iReset, iWrite, iBusInterrupt;
    input [0:?] iAddress;
    input [0:7] iBusMISO;
    output wire oInterrupt, oBusClock;
    output reg [0:1] oBusSelect;
    output wire [0:7] oBusMOSI;
    inout [0:31] bData;

    // Internal control registers
    reg
    reg [0:7] rCounterMISO, rCounterMOSI;
    reg [0:31] rConfig, rDirectMOSI, rDirectMISO;
    
    wire [0:31] wDataMOSI, wDataMISO;
    assign bData = (iWrite) ? 32'bz :
                   (iAddress == 'h0) rConfig :
                   (iAddress == 'h1) rDirectMOSI :
                   (iAddress == 'h2) rDirectMISO :
                   (iAddress == 'h3) rCounterMOSI :
                   (iAddress == 'h4) wDataMOSI :
                   (iAddress == 'h5) rCounterMISO :
                   (iAddress == 'h6) wDataMISO : 32'h0BADC0DE;
endmodule
