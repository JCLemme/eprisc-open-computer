// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VepRISC_coreEmu__Syms.h"


//======================

void VepRISC_coreEmu::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VepRISC_coreEmu::traceInit, &VepRISC_coreEmu::traceFull, &VepRISC_coreEmu::traceChg, this);
}
void VepRISC_coreEmu::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VepRISC_coreEmu* t=(VepRISC_coreEmu*)userthis;
    VepRISC_coreEmu__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VepRISC_coreEmu::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VepRISC_coreEmu* t=(VepRISC_coreEmu*)userthis;
    VepRISC_coreEmu__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VepRISC_coreEmu::traceInitThis(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VepRISC_coreEmu::traceFullThis(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = VL_ULL(0);
}

void VepRISC_coreEmu::traceInitThis__1(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+234,"iBoardClock",-1);
	vcdp->declBit  (c+235,"iBoardReset",-1);
	vcdp->declBit  (c+236,"iBoardSense",-1);
	vcdp->declBit  (c+237,"iBoardReceive",-1);
	vcdp->declBit  (c+238,"oBoardAcknowledge",-1);
	vcdp->declBit  (c+239,"oBoardTransmit",-1);
	vcdp->declBit  (c+240,"bBoardDebug0",-1);
	vcdp->declBit  (c+241,"bBoardDebug1",-1);
	vcdp->declBit  (c+242,"bBoardDebug2",-1);
	vcdp->declBit  (c+243,"bBoardDebug3",-1);
	vcdp->declBit  (c+244,"bBoardDebug4",-1);
	vcdp->declBit  (c+245,"bBoardDebug5",-1);
	vcdp->declBit  (c+246,"iSerialRX",-1);
	vcdp->declBit  (c+247,"iSerialCTS",-1);
	vcdp->declBit  (c+248,"iSerialDCD",-1);
	vcdp->declBit  (c+249,"iSerialDSR",-1);
	vcdp->declBit  (c+250,"oSerialDTR",-1);
	vcdp->declBit  (c+251,"oSerialRTS",-1);
	vcdp->declBit  (c+252,"oSerialTX",-1);
	vcdp->declBit  (c+253,"iTTLSerialRX",-1);
	vcdp->declBit  (c+254,"iTTLSerialRST",-1);
	vcdp->declBit  (c+255,"oTTLSerialTX",-1);
	vcdp->declBit  (c+256,"bGPIO0",-1);
	vcdp->declBit  (c+257,"bGPIO1",-1);
	vcdp->declBit  (c+258,"bGPIO2",-1);
	vcdp->declBit  (c+259,"bGPIO3",-1);
	vcdp->declBit  (c+260,"bGPIO4",-1);
	vcdp->declBit  (c+261,"bGPIO5",-1);
	vcdp->declBit  (c+262,"bGPIO6",-1);
	vcdp->declBit  (c+263,"bGPIO7",-1);
	vcdp->declBit  (c+264,"bGPIO8",-1);
	vcdp->declBit  (c+265,"bGPIO9",-1);
	vcdp->declBit  (c+266,"bGPIO10",-1);
	vcdp->declBit  (c+267,"bGPIO11",-1);
	vcdp->declBit  (c+268,"bGPIO12",-1);
	vcdp->declBit  (c+269,"bGPIO13",-1);
	vcdp->declBit  (c+270,"bGPIO14",-1);
	vcdp->declBit  (c+271,"bGPIO15",-1);
	vcdp->declBit  (c+272,"iExtBusInterrupt",-1);
	vcdp->declBus  (c+273,"iExtBusMISO",-1,3,0);
	vcdp->declBit  (c+274,"oExtBusClock",-1);
	vcdp->declBus  (c+275,"oExtBusSS",-1,1,0);
	vcdp->declBus  (c+276,"oExtBusMOSI",-1,3,0);
	vcdp->declBit  (c+277,"iSPIMISO",-1);
	vcdp->declBit  (c+278,"iSPIDetect0",-1);
	vcdp->declBit  (c+279,"iSPIDetect1",-1);
	vcdp->declBit  (c+280,"iSPIWrite0",-1);
	vcdp->declBit  (c+281,"iSPIWrite1",-1);
	vcdp->declBit  (c+282,"oSPIMOSI",-1);
	vcdp->declBit  (c+283,"oSPISelect",-1);
	vcdp->declBit  (c+284,"oSPIClock",-1);
	vcdp->declBit  (c+285,"oVGAHorizontal",-1);
	vcdp->declBit  (c+286,"oVGAVertical",-1);
	vcdp->declBus  (c+287,"oVGAColor",-1,7,0);
	vcdp->declBit  (c+288,"bPS2Data",-1);
	vcdp->declBit  (c+289,"bPS2Clock",-1);
	vcdp->declBit  (c+234,"epRISC_coreEmu iBoardClock",-1);
	vcdp->declBit  (c+235,"epRISC_coreEmu iBoardReset",-1);
	vcdp->declBit  (c+236,"epRISC_coreEmu iBoardSense",-1);
	vcdp->declBit  (c+237,"epRISC_coreEmu iBoardReceive",-1);
	vcdp->declBit  (c+238,"epRISC_coreEmu oBoardAcknowledge",-1);
	vcdp->declBit  (c+239,"epRISC_coreEmu oBoardTransmit",-1);
	vcdp->declBit  (c+240,"epRISC_coreEmu bBoardDebug0",-1);
	vcdp->declBit  (c+241,"epRISC_coreEmu bBoardDebug1",-1);
	vcdp->declBit  (c+242,"epRISC_coreEmu bBoardDebug2",-1);
	vcdp->declBit  (c+243,"epRISC_coreEmu bBoardDebug3",-1);
	vcdp->declBit  (c+244,"epRISC_coreEmu bBoardDebug4",-1);
	vcdp->declBit  (c+245,"epRISC_coreEmu bBoardDebug5",-1);
	vcdp->declBit  (c+171,"epRISC_coreEmu iBusInterrupt",-1);
	vcdp->declBus  (c+76,"epRISC_coreEmu iBusMISO",-1,7,0);
	vcdp->declBit  (c+102,"epRISC_coreEmu oBusClock",-1);
	vcdp->declBus  (c+207,"epRISC_coreEmu oBusSelect",-1,1,0);
	vcdp->declBus  (c+57,"epRISC_coreEmu oBusMOSI",-1,7,0);
	vcdp->declBit  (c+291,"epRISC_coreEmu oMemoryCKE",-1);
	vcdp->declBit  (c+234,"epRISC_coreEmu oMemoryCLK",-1);
	vcdp->declBit  (c+292,"epRISC_coreEmu oMemoryWE",-1);
	vcdp->declBit  (c+293,"epRISC_coreEmu oMemoryCAS",-1);
	vcdp->declBit  (c+294,"epRISC_coreEmu oMemoryRAS",-1);
	vcdp->declBit  (c+295,"epRISC_coreEmu oMemoryCS",-1);
	vcdp->declBus  (c+296,"epRISC_coreEmu oMemoryBank",-1,1,0);
	vcdp->declBus  (c+297,"epRISC_coreEmu oMemoryDQM",-1,3,0);
	vcdp->declBus  (c+298,"epRISC_coreEmu oMemoryAddress",-1,11,0);
	vcdp->declBus  (c+299,"epRISC_coreEmu bMemoryData",-1,31,0);
	vcdp->declBit  (c+246,"epRISC_coreEmu iSerialRX",-1);
	vcdp->declBit  (c+247,"epRISC_coreEmu iSerialCTS",-1);
	vcdp->declBit  (c+248,"epRISC_coreEmu iSerialDCD",-1);
	vcdp->declBit  (c+249,"epRISC_coreEmu iSerialDSR",-1);
	vcdp->declBit  (c+250,"epRISC_coreEmu oSerialDTR",-1);
	vcdp->declBit  (c+251,"epRISC_coreEmu oSerialRTS",-1);
	vcdp->declBit  (c+252,"epRISC_coreEmu oSerialTX",-1);
	vcdp->declBit  (c+253,"epRISC_coreEmu iTTLSerialRX",-1);
	vcdp->declBit  (c+254,"epRISC_coreEmu iTTLSerialRST",-1);
	vcdp->declBit  (c+255,"epRISC_coreEmu oTTLSerialTX",-1);
	vcdp->declBit  (c+256,"epRISC_coreEmu bGPIO0",-1);
	vcdp->declBit  (c+257,"epRISC_coreEmu bGPIO1",-1);
	vcdp->declBit  (c+258,"epRISC_coreEmu bGPIO2",-1);
	vcdp->declBit  (c+259,"epRISC_coreEmu bGPIO3",-1);
	vcdp->declBit  (c+260,"epRISC_coreEmu bGPIO4",-1);
	vcdp->declBit  (c+261,"epRISC_coreEmu bGPIO5",-1);
	vcdp->declBit  (c+262,"epRISC_coreEmu bGPIO6",-1);
	vcdp->declBit  (c+263,"epRISC_coreEmu bGPIO7",-1);
	vcdp->declBit  (c+264,"epRISC_coreEmu bGPIO8",-1);
	vcdp->declBit  (c+265,"epRISC_coreEmu bGPIO9",-1);
	vcdp->declBit  (c+266,"epRISC_coreEmu bGPIO10",-1);
	vcdp->declBit  (c+267,"epRISC_coreEmu bGPIO11",-1);
	vcdp->declBit  (c+268,"epRISC_coreEmu bGPIO12",-1);
	vcdp->declBit  (c+269,"epRISC_coreEmu bGPIO13",-1);
	vcdp->declBit  (c+270,"epRISC_coreEmu bGPIO14",-1);
	vcdp->declBit  (c+271,"epRISC_coreEmu bGPIO15",-1);
	vcdp->declBit  (c+272,"epRISC_coreEmu iExtBusInterrupt",-1);
	vcdp->declBus  (c+273,"epRISC_coreEmu iExtBusMISO",-1,3,0);
	vcdp->declBit  (c+274,"epRISC_coreEmu oExtBusClock",-1);
	vcdp->declBus  (c+275,"epRISC_coreEmu oExtBusSS",-1,1,0);
	vcdp->declBus  (c+276,"epRISC_coreEmu oExtBusMOSI",-1,3,0);
	vcdp->declBit  (c+277,"epRISC_coreEmu iSPIMISO",-1);
	vcdp->declBit  (c+278,"epRISC_coreEmu iSPIDetect0",-1);
	vcdp->declBit  (c+279,"epRISC_coreEmu iSPIDetect1",-1);
	vcdp->declBit  (c+280,"epRISC_coreEmu iSPIWrite0",-1);
	vcdp->declBit  (c+281,"epRISC_coreEmu iSPIWrite1",-1);
	vcdp->declBit  (c+282,"epRISC_coreEmu oSPIMOSI",-1);
	vcdp->declBit  (c+283,"epRISC_coreEmu oSPISelect",-1);
	vcdp->declBit  (c+284,"epRISC_coreEmu oSPIClock",-1);
	vcdp->declBit  (c+285,"epRISC_coreEmu oVGAHorizontal",-1);
	vcdp->declBit  (c+286,"epRISC_coreEmu oVGAVertical",-1);
	vcdp->declBus  (c+287,"epRISC_coreEmu oVGAColor",-1,7,0);
	vcdp->declBit  (c+288,"epRISC_coreEmu bPS2Data",-1);
	vcdp->declBit  (c+289,"epRISC_coreEmu bPS2Clock",-1);
	vcdp->declBit  (c+234,"epRISC_coreEmu machine iBoardClock",-1);
	vcdp->declBit  (c+235,"epRISC_coreEmu machine iBoardReset",-1);
	vcdp->declBit  (c+236,"epRISC_coreEmu machine iBoardSense",-1);
	vcdp->declBit  (c+237,"epRISC_coreEmu machine iBoardReceive",-1);
	vcdp->declBit  (c+238,"epRISC_coreEmu machine oBoardAcknowledge",-1);
	vcdp->declBit  (c+239,"epRISC_coreEmu machine oBoardTransmit",-1);
	vcdp->declBit  (c+240,"epRISC_coreEmu machine bBoardDebug0",-1);
	vcdp->declBit  (c+242,"epRISC_coreEmu machine bBoardDebug2",-1);
	vcdp->declBit  (c+243,"epRISC_coreEmu machine bBoardDebug3",-1);
	vcdp->declBit  (c+244,"epRISC_coreEmu machine bBoardDebug4",-1);
	vcdp->declBit  (c+245,"epRISC_coreEmu machine bBoardDebug5",-1);
	vcdp->declBit  (c+171,"epRISC_coreEmu machine iBusInterrupt",-1);
	vcdp->declBus  (c+76,"epRISC_coreEmu machine iBusMISO",-1,7,0);
	vcdp->declBit  (c+102,"epRISC_coreEmu machine oBusClock",-1);
	vcdp->declBus  (c+207,"epRISC_coreEmu machine oBusSelect",-1,1,0);
	vcdp->declBus  (c+57,"epRISC_coreEmu machine oBusMOSI",-1,7,0);
	vcdp->declBit  (c+291,"epRISC_coreEmu machine oMemoryCKE",-1);
	vcdp->declBit  (c+234,"epRISC_coreEmu machine oMemoryCLK",-1);
	vcdp->declBit  (c+292,"epRISC_coreEmu machine oMemoryWE",-1);
	vcdp->declBit  (c+293,"epRISC_coreEmu machine oMemoryCAS",-1);
	vcdp->declBit  (c+294,"epRISC_coreEmu machine oMemoryRAS",-1);
	vcdp->declBit  (c+295,"epRISC_coreEmu machine oMemoryCS",-1);
	vcdp->declBus  (c+296,"epRISC_coreEmu machine oMemoryBank",-1,1,0);
	vcdp->declBus  (c+297,"epRISC_coreEmu machine oMemoryDQM",-1,3,0);
	vcdp->declBus  (c+298,"epRISC_coreEmu machine oMemoryAddress",-1,11,0);
	vcdp->declBus  (c+299,"epRISC_coreEmu machine bMemoryData",-1,31,0);
	vcdp->declBit  (c+80,"epRISC_coreEmu machine wCoreBusClock",-1);
	vcdp->declBit  (c+81,"epRISC_coreEmu machine wCoreBusMemClock",-1);
	vcdp->declBit  (c+234,"epRISC_coreEmu machine wCoreBusFastClock",-1);
	vcdp->declBit  (c+290,"epRISC_coreEmu machine wCoreBusReset",-1);
	vcdp->declBit  (c+58,"epRISC_coreEmu machine wCoreBusWrite",-1);
	vcdp->declBit  (c+171,"epRISC_coreEmu machine wCoreBusInterrupt",-1);
	vcdp->declBit  (c+300,"epRISC_coreEmu machine wCoreBusNMInterrupt",-1);
	vcdp->declBit  (c+27,"epRISC_coreEmu machine wCoreBusAccess",-1);
	vcdp->declBit  (c+301,"epRISC_coreEmu machine wCoreBusReady",-1);
	vcdp->declBit  (c+302,"epRISC_coreEmu machine wSDRAMReady",-1);
	vcdp->declBit  (c+59,"epRISC_coreEmu machine wCoreBusAcknowledge",-1);
	vcdp->declBus  (c+60,"epRISC_coreEmu machine wCoreBusAddress",-1,31,0);
	vcdp->declBus  (c+41,"epRISC_coreEmu machine wCoreBusData",-1,31,0);
	vcdp->declBus  (c+103,"epRISC_coreEmu machine wRAMData",-1,31,0);
	vcdp->declBus  (c+104,"epRISC_coreEmu machine wSDRAMData",-1,31,0);
	vcdp->declBit  (c+61,"epRISC_coreEmu machine wEnableROM",-1);
	vcdp->declBit  (c+62,"epRISC_coreEmu machine wEnableRAM",-1);
	vcdp->declBit  (c+63,"epRISC_coreEmu machine wEnableBusControl",-1);
	vcdp->declBit  (c+64,"epRISC_coreEmu machine wEnableSDRAM",-1);
	vcdp->declBit  (c+65,"epRISC_coreEmu machine wDisableExtra",-1);
	vcdp->declBit  (c+199,"epRISC_coreEmu machine wCoreHalt",-1);
	vcdp->declBit  (c+303,"epRISC_coreEmu machine wCoreFlag",-1);
	vcdp->declBit  (c+66,"epRISC_coreEmu machine wDebug",-1);
	vcdp->declBit  (c+234,"epRISC_coreEmu machine clock iIn",-1);
	vcdp->declBit  (c+80,"epRISC_coreEmu machine clock oOut",-1);
	vcdp->declBit  (c+81,"epRISC_coreEmu machine clock oOutNinety",-1);
	vcdp->declBit  (c+234,"epRISC_coreEmu machine clock oOutFast",-1);
	vcdp->declBus  (c+3,"epRISC_coreEmu machine clock rClockSplit",-1,1,0);
	vcdp->declBit  (c+80,"epRISC_coreEmu machine core iClk",-1);
	vcdp->declBit  (c+290,"epRISC_coreEmu machine core iRst",-1);
	vcdp->declBus  (c+41,"epRISC_coreEmu machine core bData",-1,31,0);
	vcdp->declBit  (c+58,"epRISC_coreEmu machine core oWrite",-1);
	vcdp->declBus  (c+60,"epRISC_coreEmu machine core oAddr",-1,31,0);
	vcdp->declBit  (c+171,"epRISC_coreEmu machine core iMaskInt",-1);
	vcdp->declBit  (c+300,"epRISC_coreEmu machine core iNonMaskInt",-1);
	vcdp->declBit  (c+303,"epRISC_coreEmu machine core oFlg",-1);
	vcdp->declBit  (c+199,"epRISC_coreEmu machine core oHalt",-1);
	vcdp->declBit  (c+301,"epRISC_coreEmu machine core iReady",-1);
	vcdp->declBit  (c+27,"epRISC_coreEmu machine core oAccess",-1);
	vcdp->declBit  (c+59,"epRISC_coreEmu machine core oAcknowledge",-1);
	vcdp->declBus  (c+112,"epRISC_coreEmu machine core rRegIP",-1,31,0);
	vcdp->declBus  (c+113,"epRISC_coreEmu machine core rRegSP",-1,31,0);
	vcdp->declBus  (c+114,"epRISC_coreEmu machine core rRegCS",-1,31,0);
	vcdp->declBus  (c+115,"epRISC_coreEmu machine core rRegGL",-1,31,0);
	vcdp->declBus  (c+116,"epRISC_coreEmu machine core rRegA",-1,31,0);
	vcdp->declBus  (c+117,"epRISC_coreEmu machine core rRegB",-1,31,0);
	vcdp->declBus  (c+118,"epRISC_coreEmu machine core rRegM",-1,31,0);
	vcdp->declQuad (c+119,"epRISC_coreEmu machine core rRegR",-1,32,0);
	vcdp->declQuad (c+28,"epRISC_coreEmu machine core rALUOut",-1,32,0);
	vcdp->declBit  (c+8,"epRISC_coreEmu machine core rExec",-1);
	vcdp->declBus  (c+110,"epRISC_coreEmu machine core rPipePrevState",-1,3,0);
	vcdp->declBus  (c+200,"epRISC_coreEmu machine core rPipeState",-1,3,0);
	vcdp->declBus  (c+20,"epRISC_coreEmu machine core rPipeNextState",-1,3,0);
	vcdp->declBus  (c+121,"epRISC_coreEmu machine core rInst",-1,31,0);
	vcdp->declBus  (c+304,"epRISC_coreEmu machine core rDataBuf",-1,31,0);
	vcdp->declBit  (c+80,"epRISC_coreEmu machine core wClkInt",-1);
	vcdp->declBus  (c+30,"epRISC_coreEmu machine core wALUOperation",-1,4,0);
	vcdp->declBus  (c+122,"epRISC_coreEmu machine core rRegInterruptBase",-1,31,0);
	vcdp->declArray(c+123,"epRISC_coreEmu machine core rRegInterruptStack",-1,95,0);
	vcdp->declBus  (c+21,"epRISC_coreEmu machine core wBusInA",-1,31,0);
	vcdp->declBus  (c+32,"epRISC_coreEmu machine core wBusInB",-1,31,0);
	vcdp->declBus  (c+201,"epRISC_coreEmu machine core wBusRegA",-1,31,0);
	vcdp->declBus  (c+111,"epRISC_coreEmu machine core wBusRegB",-1,31,0);
	vcdp->declBus  (c+31,"epRISC_coreEmu machine core wBusOutA",-1,31,0);
	vcdp->declBus  (c+50,"epRISC_coreEmu machine core wBusOutB",-1,31,0);
	vcdp->declBus  (c+9,"epRISC_coreEmu machine core wBusInAddrA",-1,7,0);
	vcdp->declBus  (c+10,"epRISC_coreEmu machine core wBusInAddrB",-1,7,0);
	vcdp->declBus  (c+11,"epRISC_coreEmu machine core wBusOutAddrA",-1,7,0);
	vcdp->declBus  (c+12,"epRISC_coreEmu machine core wBusOutAddrB",-1,7,0);
	vcdp->declBit  (c+33,"epRISC_coreEmu machine core wBusOutWriteA",-1);
	vcdp->declBit  (c+34,"epRISC_coreEmu machine core wBusOutWriteB",-1);
	vcdp->declBit  (c+126,"epRISC_coreEmu machine core mBranch",-1);
	vcdp->declBit  (c+127,"epRISC_coreEmu machine core mBranchStandard",-1);
	vcdp->declBit  (c+13,"epRISC_coreEmu machine core mBranchSaveStack",-1);
	vcdp->declBit  (c+128,"epRISC_coreEmu machine core mBranchSaveLink",-1);
	vcdp->declBit  (c+14,"epRISC_coreEmu machine core mBranchLoadStack",-1);
	vcdp->declBit  (c+129,"epRISC_coreEmu machine core mBranchLoadLink",-1);
	vcdp->declBit  (c+15,"epRISC_coreEmu machine core mBranchInterrupt",-1);
	vcdp->declBit  (c+130,"epRISC_coreEmu machine core mLoad",-1);
	vcdp->declBit  (c+16,"epRISC_coreEmu machine core mLoadLoad",-1);
	vcdp->declBit  (c+17,"epRISC_coreEmu machine core mLoadStore",-1);
	vcdp->declBit  (c+131,"epRISC_coreEmu machine core mDirect",-1);
	vcdp->declBit  (c+18,"epRISC_coreEmu machine core mDirectOR",-1);
	vcdp->declBit  (c+132,"epRISC_coreEmu machine core mALU",-1);
	vcdp->declBit  (c+19,"epRISC_coreEmu machine core mALURegisters",-1);
	vcdp->declBit  (c+133,"epRISC_coreEmu machine core mALUDirect",-1);
	vcdp->declBit  (c+134,"epRISC_coreEmu machine core mRegister",-1);
	vcdp->declBit  (c+135,"epRISC_coreEmu machine core mRegisterStandard",-1);
	vcdp->declBit  (c+136,"epRISC_coreEmu machine core mRegisterSwap",-1);
	vcdp->declBit  (c+137,"epRISC_coreEmu machine core mCore",-1);
	vcdp->declBus  (c+138,"epRISC_coreEmu machine core fBranchOffset",-1,19,0);
	vcdp->declBus  (c+138,"epRISC_coreEmu machine core fLoadOffset",-1,19,0);
	vcdp->declBus  (c+138,"epRISC_coreEmu machine core fDirectValue",-1,19,0);
	vcdp->declBus  (c+138,"epRISC_coreEmu machine core fCoreData",-1,19,0);
	vcdp->declBus  (c+139,"epRISC_coreEmu machine core fALUValue",-1,7,0);
	vcdp->declBus  (c+140,"epRISC_coreEmu machine core fCoreOperation",-1,5,0);
	vcdp->declBus  (c+141,"epRISC_coreEmu machine core fALUOperation",-1,4,0);
	vcdp->declBus  (c+142,"epRISC_coreEmu machine core fBranchCondition",-1,3,0);
	vcdp->declBus  (c+143,"epRISC_coreEmu machine core fBranchBase",-1,3,0);
	vcdp->declBus  (c+142,"epRISC_coreEmu machine core fLoadBase",-1,3,0);
	vcdp->declBus  (c+143,"epRISC_coreEmu machine core fLoadTarget",-1,3,0);
	vcdp->declBus  (c+142,"epRISC_coreEmu machine core fDirectDestination",-1,3,0);
	vcdp->declBus  (c+143,"epRISC_coreEmu machine core fDirectShift",-1,3,0);
	vcdp->declBus  (c+144,"epRISC_coreEmu machine core fALUDestination",-1,3,0);
	vcdp->declBus  (c+145,"epRISC_coreEmu machine core fALUTermA",-1,3,0);
	vcdp->declBus  (c+146,"epRISC_coreEmu machine core fALUTermB",-1,3,0);
	vcdp->declBus  (c+146,"epRISC_coreEmu machine core fALUShift",-1,3,0);
	vcdp->declBus  (c+143,"epRISC_coreEmu machine core fRegisterDestination",-1,3,0);
	vcdp->declBus  (c+144,"epRISC_coreEmu machine core fRegisterSource",-1,3,0);
	vcdp->declBus  (c+147,"epRISC_coreEmu machine core fCSRegisterPage",-1,3,0);
	vcdp->declBus  (c+148,"epRISC_coreEmu machine core fCSLinkRegister",-1,3,0);
	vcdp->declBit  (c+149,"epRISC_coreEmu machine core fCSHideRegs",-1);
	vcdp->declBit  (c+150,"epRISC_coreEmu machine core fCSInterruptEn",-1);
	vcdp->declBit  (c+151,"epRISC_coreEmu machine core fCSSignExtend",-1);
	vcdp->declBit  (c+152,"epRISC_coreEmu machine core fCSFlagSet",-1);
	vcdp->declBit  (c+153,"epRISC_coreEmu machine core fCSCarry",-1);
	vcdp->declBit  (c+154,"epRISC_coreEmu machine core fCSZero",-1);
	vcdp->declBit  (c+155,"epRISC_coreEmu machine core fCSNeg",-1);
	vcdp->declBit  (c+156,"epRISC_coreEmu machine core fCSOver",-1);
	vcdp->declBit  (c+80,"epRISC_coreEmu machine core registers iClk",-1);
	vcdp->declBit  (c+33,"epRISC_coreEmu machine core registers iWriteA",-1);
	vcdp->declBit  (c+34,"epRISC_coreEmu machine core registers iWriteB",-1);
	vcdp->declBus  (c+35,"epRISC_coreEmu machine core registers iAddrA",-1,7,0);
	vcdp->declBus  (c+36,"epRISC_coreEmu machine core registers iAddrB",-1,7,0);
	vcdp->declBus  (c+31,"epRISC_coreEmu machine core registers iDInA",-1,31,0);
	vcdp->declBus  (c+50,"epRISC_coreEmu machine core registers iDInB",-1,31,0);
	vcdp->declBus  (c+201,"epRISC_coreEmu machine core registers oDOutA",-1,31,0);
	vcdp->declBus  (c+111,"epRISC_coreEmu machine core registers oDOutB",-1,31,0);
	vcdp->declBus  (c+1,"epRISC_coreEmu machine core registers rClr",-1,8,0);
	// Tracing: epRISC_coreEmu machine core registers rContents // Ignored: Wide memory > --trace-max-array ents at ../../../firmware/core/core_v5r0.v:37
	vcdp->declBit  (c+49,"epRISC_coreEmu machine core registers debug",-1);
	vcdp->declBit  (c+81,"epRISC_coreEmu machine bus iClock",-1);
	vcdp->declBit  (c+42,"epRISC_coreEmu machine bus iReset",-1);
	vcdp->declBit  (c+58,"epRISC_coreEmu machine bus iWrite",-1);
	vcdp->declBit  (c+63,"epRISC_coreEmu machine bus iEnable",-1);
	vcdp->declBit  (c+81,"epRISC_coreEmu machine bus iMasterClock",-1);
	vcdp->declBit  (c+171,"epRISC_coreEmu machine bus iBusInterrupt",-1);
	vcdp->declBus  (c+67,"epRISC_coreEmu machine bus iAddress",-1,3,0);
	vcdp->declBus  (c+76,"epRISC_coreEmu machine bus iBusMISO",-1,7,0);
	vcdp->declBit  (c+171,"epRISC_coreEmu machine bus oInterrupt",-1);
	vcdp->declBit  (c+66,"epRISC_coreEmu machine bus oDebug",-1);
	vcdp->declBit  (c+102,"epRISC_coreEmu machine bus oBusClock",-1);
	vcdp->declBus  (c+207,"epRISC_coreEmu machine bus oBusSelect",-1,1,0);
	vcdp->declBus  (c+57,"epRISC_coreEmu machine bus oBusMOSI",-1,7,0);
	vcdp->declBus  (c+41,"epRISC_coreEmu machine bus bData",-1,31,0);
	vcdp->declBus  (c+233,"epRISC_coreEmu machine bus rCounterMISO",-1,7,0);
	vcdp->declBus  (c+225,"epRISC_coreEmu machine bus rCounterMOSI",-1,7,0);
	vcdp->declBus  (c+226,"epRISC_coreEmu machine bus rInternalCounterMISO",-1,7,0);
	vcdp->declBus  (c+214,"epRISC_coreEmu machine bus rInternalCounterMOSI",-1,7,0);
	vcdp->declBus  (c+167,"epRISC_coreEmu machine bus rTransferCount",-1,7,0);
	vcdp->declBus  (c+208,"epRISC_coreEmu machine bus rConfig",-1,31,0);
	vcdp->declBus  (c+101,"epRISC_coreEmu machine bus rDirectMOSI",-1,31,0);
	vcdp->declBus  (c+168,"epRISC_coreEmu machine bus rDirectMISO",-1,31,0);
	vcdp->declBus  (c+43,"epRISC_coreEmu machine bus wDataMOSI",-1,31,0);
	vcdp->declBus  (c+44,"epRISC_coreEmu machine bus wDataMISO",-1,31,0);
	vcdp->declBit  (c+209,"epRISC_coreEmu machine bus fBeginSingle",-1);
	vcdp->declBit  (c+300,"epRISC_coreEmu machine bus fBeginBlock",-1);
	vcdp->declBit  (c+210,"epRISC_coreEmu machine bus fReceive",-1);
	vcdp->declBus  (c+207,"epRISC_coreEmu machine bus fChipSelect",-1,1,0);
	vcdp->declBus  (c+211,"epRISC_coreEmu machine bus fTransferCount",-1,7,0);
	vcdp->declBus  (c+212,"epRISC_coreEmu machine bus fClockStep",-1,11,0);
	vcdp->declBit  (c+105,"epRISC_coreEmu machine bus rDerivedClock",-1);
	vcdp->declBus  (c+106,"epRISC_coreEmu machine bus rMasterClockCount",-1,11,0);
	vcdp->declBus  (c+229,"epRISC_coreEmu machine bus rPipeState",-1,4,0);
	vcdp->declBus  (c+230,"epRISC_coreEmu machine bus rPipePrevState",-1,4,0);
	vcdp->declBus  (c+56,"epRISC_coreEmu machine bus rPipeNextState",-1,4,0);
	vcdp->declBus  (c+231,"epRISC_coreEmu machine bus rLockAck",-1,4,0);
	vcdp->declBus  (c+213,"epRISC_coreEmu machine bus rLockSto",-1,4,0);
	vcdp->declBit  (c+232,"epRISC_coreEmu machine bus wInternalWriteMISO",-1);
	vcdp->declBus  (c+227,"epRISC_coreEmu machine bus rInternalDataMISO",-1,31,0);
	vcdp->declBus  (c+169,"epRISC_coreEmu machine bus wInternalDataMOSI",-1,31,0);
	vcdp->declBus  (c+48,"epRISC_coreEmu machine bus wDistributionMOSI",-1,31,0);
	vcdp->declBus  (c+107,"epRISC_coreEmu machine bus wDataOutMISO",-1,31,0);
	vcdp->declBus  (c+108,"epRISC_coreEmu machine bus wDataOutMOSI",-1,31,0);
	vcdp->declBus  (c+170,"epRISC_coreEmu machine bus wTrashMISO",-1,31,0);
	vcdp->declBit  (c+81,"epRISC_coreEmu machine bus bufferMISO iClkA",-1);
	vcdp->declBit  (c+105,"epRISC_coreEmu machine bus bufferMISO iClkB",-1);
	vcdp->declBit  (c+68,"epRISC_coreEmu machine bus bufferMISO iWriteA",-1);
	vcdp->declBit  (c+232,"epRISC_coreEmu machine bus bufferMISO iWriteB",-1);
	vcdp->declBus  (c+233,"epRISC_coreEmu machine bus bufferMISO iAddrA",-1,7,0);
	vcdp->declBus  (c+226,"epRISC_coreEmu machine bus bufferMISO iAddrB",-1,7,0);
	vcdp->declBus  (c+44,"epRISC_coreEmu machine bus bufferMISO iDInA",-1,31,0);
	vcdp->declBus  (c+227,"epRISC_coreEmu machine bus bufferMISO iDInB",-1,31,0);
	vcdp->declBus  (c+107,"epRISC_coreEmu machine bus bufferMISO oDOutA",-1,31,0);
	vcdp->declBus  (c+170,"epRISC_coreEmu machine bus bufferMISO oDOutB",-1,31,0);
	vcdp->declBus  (c+305,"epRISC_coreEmu machine bus bufferMISO rClr",-1,7,0);
	// Tracing: epRISC_coreEmu machine bus bufferMISO rContents // Ignored: Wide memory > --trace-max-array ents at ../../../firmware/core/sysx_v1r0.v:30
	vcdp->declBit  (c+81,"epRISC_coreEmu machine bus bufferMOSI iClkA",-1);
	vcdp->declBit  (c+105,"epRISC_coreEmu machine bus bufferMOSI iClkB",-1);
	vcdp->declBit  (c+69,"epRISC_coreEmu machine bus bufferMOSI iWriteA",-1);
	vcdp->declBit  (c+300,"epRISC_coreEmu machine bus bufferMOSI iWriteB",-1);
	vcdp->declBus  (c+225,"epRISC_coreEmu machine bus bufferMOSI iAddrA",-1,7,0);
	vcdp->declBus  (c+214,"epRISC_coreEmu machine bus bufferMOSI iAddrB",-1,7,0);
	vcdp->declBus  (c+43,"epRISC_coreEmu machine bus bufferMOSI iDInA",-1,31,0);
	vcdp->declBus  (c+306,"epRISC_coreEmu machine bus bufferMOSI iDInB",-1,31,0);
	vcdp->declBus  (c+108,"epRISC_coreEmu machine bus bufferMOSI oDOutA",-1,31,0);
	vcdp->declBus  (c+169,"epRISC_coreEmu machine bus bufferMOSI oDOutB",-1,31,0);
	vcdp->declBus  (c+307,"epRISC_coreEmu machine bus bufferMOSI rClr",-1,7,0);
	// Tracing: epRISC_coreEmu machine bus bufferMOSI rContents // Ignored: Wide memory > --trace-max-array ents at ../../../firmware/core/sysx_v1r0.v:30
	vcdp->declBit  (c+81,"epRISC_coreEmu machine tbrom iClk",-1);
	vcdp->declBit  (c+61,"epRISC_coreEmu machine tbrom iEnable",-1);
	vcdp->declBus  (c+70,"epRISC_coreEmu machine tbrom iAddr",-1,11,0);
	vcdp->declBus  (c+41,"epRISC_coreEmu machine tbrom oData",-1,31,0);
	vcdp->declBus  (c+109,"epRISC_coreEmu machine tbrom rDataOut",-1,31,0);
	// Tracing: epRISC_coreEmu machine tbrom rContents // Ignored: Wide memory > --trace-max-array ents at ../../../firmware/core/rom_v1r0.v:7
	vcdp->declBit  (c+78,"epRISC_coreEmu machine bcram iEnable",-1);
	vcdp->declBus  (c+103,"epRISC_coreEmu machine bcram iData",-1,31,0);
	vcdp->declBus  (c+41,"epRISC_coreEmu machine bcram bData",-1,31,0);
	vcdp->declBit  (c+79,"epRISC_coreEmu machine bcsdram iEnable",-1);
	vcdp->declBus  (c+104,"epRISC_coreEmu machine bcsdram iData",-1,31,0);
	vcdp->declBus  (c+41,"epRISC_coreEmu machine bcsdram bData",-1,31,0);
	vcdp->declBit  (c+65,"epRISC_coreEmu machine busfill iEnable",-1);
	vcdp->declBus  (c+41,"epRISC_coreEmu machine busfill bData",-1,31,0);
	vcdp->declBit  (c+81,"epRISC_coreEmu machine tbram iClk",-1);
	vcdp->declBit  (c+71,"epRISC_coreEmu machine tbram iWrite",-1);
	vcdp->declBus  (c+70,"epRISC_coreEmu machine tbram iAddr",-1,11,0);
	vcdp->declBus  (c+41,"epRISC_coreEmu machine tbram iData",-1,31,0);
	vcdp->declBus  (c+103,"epRISC_coreEmu machine tbram oData",-1,31,0);
	vcdp->declBus  (c+103,"epRISC_coreEmu machine tbram rDataOut",-1,31,0);
	// Tracing: epRISC_coreEmu machine tbram rContents // Ignored: Wide memory > --trace-max-array ents at ../../../firmware/testbench/testmem_v1r0.v:9
	vcdp->declBit  (c+81,"epRISC_coreEmu machine tbsdram iClk",-1);
	vcdp->declBit  (c+72,"epRISC_coreEmu machine tbsdram iWrite",-1);
	vcdp->declBus  (c+73,"epRISC_coreEmu machine tbsdram iAddr",-1,22,0);
	vcdp->declBus  (c+41,"epRISC_coreEmu machine tbsdram iData",-1,31,0);
	vcdp->declBus  (c+104,"epRISC_coreEmu machine tbsdram oData",-1,31,0);
	vcdp->declBus  (c+104,"epRISC_coreEmu machine tbsdram rDataOut",-1,31,0);
	// Tracing: epRISC_coreEmu machine tbsdram rContents // Ignored: Wide memory > --trace-max-array ents at ../../../firmware/testbench/testmem_v1r0.v:29
	vcdp->declBit  (c+102,"epRISC_coreEmu controller iBusClock",-1);
	vcdp->declBus  (c+207,"epRISC_coreEmu controller iBusSelect",-1,1,0);
	vcdp->declBus  (c+57,"epRISC_coreEmu controller iBusMOSI",-1,7,0);
	vcdp->declBit  (c+171,"epRISC_coreEmu controller oBusInterrupt",-1);
	vcdp->declBus  (c+76,"epRISC_coreEmu controller oBusMISO",-1,7,0);
	vcdp->declBit  (c+234,"epRISC_coreEmu controller iBoardClock",-1);
	vcdp->declBit  (c+235,"epRISC_coreEmu controller iBoardReset",-1);
	vcdp->declBit  (c+240,"epRISC_coreEmu controller bBoardDebug0",-1);
	vcdp->declBit  (c+241,"epRISC_coreEmu controller bBoardDebug1",-1);
	vcdp->declBit  (c+242,"epRISC_coreEmu controller bBoardDebug2",-1);
	vcdp->declBit  (c+243,"epRISC_coreEmu controller bBoardDebug3",-1);
	vcdp->declBit  (c+244,"epRISC_coreEmu controller bBoardDebug4",-1);
	vcdp->declBit  (c+245,"epRISC_coreEmu controller bBoardDebug5",-1);
	vcdp->declBit  (c+246,"epRISC_coreEmu controller iSerialRX",-1);
	vcdp->declBit  (c+247,"epRISC_coreEmu controller iSerialCTS",-1);
	vcdp->declBit  (c+248,"epRISC_coreEmu controller iSerialDCD",-1);
	vcdp->declBit  (c+249,"epRISC_coreEmu controller iSerialDSR",-1);
	vcdp->declBit  (c+250,"epRISC_coreEmu controller oSerialDTR",-1);
	vcdp->declBit  (c+251,"epRISC_coreEmu controller oSerialRTS",-1);
	vcdp->declBit  (c+252,"epRISC_coreEmu controller oSerialTX",-1);
	vcdp->declBit  (c+253,"epRISC_coreEmu controller iTTLSerialRX",-1);
	vcdp->declBit  (c+254,"epRISC_coreEmu controller iTTLSerialRST",-1);
	vcdp->declBit  (c+255,"epRISC_coreEmu controller oTTLSerialTX",-1);
	vcdp->declBit  (c+256,"epRISC_coreEmu controller bGPIO0",-1);
	vcdp->declBit  (c+257,"epRISC_coreEmu controller bGPIO1",-1);
	vcdp->declBit  (c+258,"epRISC_coreEmu controller bGPIO2",-1);
	vcdp->declBit  (c+259,"epRISC_coreEmu controller bGPIO3",-1);
	vcdp->declBit  (c+260,"epRISC_coreEmu controller bGPIO4",-1);
	vcdp->declBit  (c+261,"epRISC_coreEmu controller bGPIO5",-1);
	vcdp->declBit  (c+262,"epRISC_coreEmu controller bGPIO6",-1);
	vcdp->declBit  (c+263,"epRISC_coreEmu controller bGPIO7",-1);
	vcdp->declBit  (c+264,"epRISC_coreEmu controller bGPIO8",-1);
	vcdp->declBit  (c+265,"epRISC_coreEmu controller bGPIO9",-1);
	vcdp->declBit  (c+266,"epRISC_coreEmu controller bGPIO10",-1);
	vcdp->declBit  (c+267,"epRISC_coreEmu controller bGPIO11",-1);
	vcdp->declBit  (c+268,"epRISC_coreEmu controller bGPIO12",-1);
	vcdp->declBit  (c+269,"epRISC_coreEmu controller bGPIO13",-1);
	vcdp->declBit  (c+270,"epRISC_coreEmu controller bGPIO14",-1);
	vcdp->declBit  (c+271,"epRISC_coreEmu controller bGPIO15",-1);
	vcdp->declBit  (c+272,"epRISC_coreEmu controller iExtBusInterrupt",-1);
	vcdp->declBus  (c+273,"epRISC_coreEmu controller iExtBusMISO",-1,3,0);
	vcdp->declBit  (c+274,"epRISC_coreEmu controller oExtBusClock",-1);
	vcdp->declBus  (c+275,"epRISC_coreEmu controller oExtBusSS",-1,1,0);
	vcdp->declBus  (c+276,"epRISC_coreEmu controller oExtBusMOSI",-1,3,0);
	vcdp->declBit  (c+277,"epRISC_coreEmu controller iSPIMISO",-1);
	vcdp->declBit  (c+278,"epRISC_coreEmu controller iSPIDetect0",-1);
	vcdp->declBit  (c+279,"epRISC_coreEmu controller iSPIDetect1",-1);
	vcdp->declBit  (c+280,"epRISC_coreEmu controller iSPIWrite0",-1);
	vcdp->declBit  (c+281,"epRISC_coreEmu controller iSPIWrite1",-1);
	vcdp->declBit  (c+282,"epRISC_coreEmu controller oSPIMOSI",-1);
	vcdp->declBit  (c+284,"epRISC_coreEmu controller oSPIClock",-1);
	vcdp->declBus  (c+181,"epRISC_coreEmu controller oSPISelect",-1,3,0);
	vcdp->declBit  (c+285,"epRISC_coreEmu controller oVGAHorizontal",-1);
	vcdp->declBit  (c+286,"epRISC_coreEmu controller oVGAVertical",-1);
	vcdp->declBus  (c+287,"epRISC_coreEmu controller oVGAColor",-1,7,0);
	vcdp->declBit  (c+288,"epRISC_coreEmu controller bPS2Data",-1);
	vcdp->declBit  (c+289,"epRISC_coreEmu controller bPS2Clock",-1);
	vcdp->declBus  (c+219,"epRISC_coreEmu controller rInternalMOSI",-1,31,0);
	vcdp->declBus  (c+220,"epRISC_coreEmu controller rInternalMOSIBuffer",-1,31,0);
	vcdp->declBus  (c+77,"epRISC_coreEmu controller wInternalMISO",-1,15,0);
	vcdp->declBus  (c+25,"epRISC_coreEmu controller wGPIOInternalMISO",-1,15,0);
	vcdp->declBus  (c+22,"epRISC_coreEmu controller wUARTInternalMISO",-1,15,0);
	vcdp->declBus  (c+26,"epRISC_coreEmu controller wSPIInternalMISO",-1,15,0);
	vcdp->declBus  (c+24,"epRISC_coreEmu controller wVideoInternalMISO",-1,15,0);
	vcdp->declBus  (c+74,"epRISC_coreEmu controller wRAMInternalMISO",-1,31,0);
	vcdp->declBit  (c+53,"epRISC_coreEmu controller mBusWrite",-1);
	vcdp->declBit  (c+54,"epRISC_coreEmu controller mBusReset",-1);
	vcdp->declBit  (c+45,"epRISC_coreEmu controller wInternalReset",-1);
	vcdp->declBus  (c+221,"epRISC_coreEmu controller mBusAddress",-1,14,0);
	vcdp->declBus  (c+55,"epRISC_coreEmu controller mBusData",-1,15,0);
	vcdp->declBit  (c+222,"epRISC_coreEmu controller wEnableGPIO",-1);
	vcdp->declBit  (c+37,"epRISC_coreEmu controller wEnableUART",-1);
	vcdp->declBit  (c+38,"epRISC_coreEmu controller wEnableSPI",-1);
	vcdp->declBit  (c+39,"epRISC_coreEmu controller wEnableVideo",-1);
	vcdp->declBit  (c+308,"epRISC_coreEmu controller wEnablePS2",-1);
	vcdp->declBit  (c+40,"epRISC_coreEmu controller wEnableRAM",-1);
	vcdp->declBit  (c+4,"epRISC_coreEmu controller wSerialClock",-1);
	vcdp->declBit  (c+5,"epRISC_coreEmu controller wSPIClock",-1);
	vcdp->declBit  (c+234,"epRISC_coreEmu controller wVGAClock",-1);
	vcdp->declBit  (c+234,"epRISC_coreEmu controller wFastClock",-1);
	vcdp->declBus  (c+228,"epRISC_coreEmu controller rPipeState",-1,4,0);
	vcdp->declBus  (c+180,"epRISC_coreEmu controller rPipePrevState",-1,4,0);
	vcdp->declBus  (c+52,"epRISC_coreEmu controller rPipeNextState",-1,4,0);
	vcdp->declBit  (c+159,"epRISC_coreEmu controller oBvusInterrupt",-1);
	vcdp->declBit  (c+309,"epRISC_coreEmu controller oBrusInterrupt",-1);
	vcdp->declBit  (c+234,"epRISC_coreEmu controller clock iIn",-1);
	vcdp->declBit  (c+4,"epRISC_coreEmu controller clock oOutUART",-1);
	vcdp->declBit  (c+5,"epRISC_coreEmu controller clock oOutSPI",-1);
	vcdp->declBit  (c+234,"epRISC_coreEmu controller clock oOutVGA",-1);
	vcdp->declBit  (c+234,"epRISC_coreEmu controller clock oOutFast",-1);
	vcdp->declBus  (c+6,"epRISC_coreEmu controller clock rClockSplit",-1,6,0);
	vcdp->declBit  (c+102,"epRISC_coreEmu controller gpio iClock",-1);
	vcdp->declBit  (c+54,"epRISC_coreEmu controller gpio iReset",-1);
	vcdp->declBit  (c+53,"epRISC_coreEmu controller gpio iWrite",-1);
	vcdp->declBit  (c+222,"epRISC_coreEmu controller gpio iEnable",-1);
	vcdp->declBus  (c+223,"epRISC_coreEmu controller gpio iAddress",-1,1,0);
	vcdp->declBit  (c+256,"epRISC_coreEmu controller gpio bPort0",-1);
	vcdp->declBit  (c+257,"epRISC_coreEmu controller gpio bPort1",-1);
	vcdp->declBit  (c+258,"epRISC_coreEmu controller gpio bPort2",-1);
	vcdp->declBit  (c+259,"epRISC_coreEmu controller gpio bPort3",-1);
	vcdp->declBit  (c+260,"epRISC_coreEmu controller gpio bPort4",-1);
	vcdp->declBit  (c+261,"epRISC_coreEmu controller gpio bPort5",-1);
	vcdp->declBit  (c+262,"epRISC_coreEmu controller gpio bPort6",-1);
	vcdp->declBit  (c+263,"epRISC_coreEmu controller gpio bPort7",-1);
	vcdp->declBit  (c+264,"epRISC_coreEmu controller gpio bPort8",-1);
	vcdp->declBit  (c+265,"epRISC_coreEmu controller gpio bPort9",-1);
	vcdp->declBit  (c+266,"epRISC_coreEmu controller gpio bPort10",-1);
	vcdp->declBit  (c+267,"epRISC_coreEmu controller gpio bPort11",-1);
	vcdp->declBit  (c+268,"epRISC_coreEmu controller gpio bPort12",-1);
	vcdp->declBit  (c+269,"epRISC_coreEmu controller gpio bPort13",-1);
	vcdp->declBit  (c+270,"epRISC_coreEmu controller gpio bPort14",-1);
	vcdp->declBit  (c+271,"epRISC_coreEmu controller gpio bPort15",-1);
	vcdp->declBus  (c+55,"epRISC_coreEmu controller gpio iData",-1,15,0);
	vcdp->declBus  (c+25,"epRISC_coreEmu controller gpio oData",-1,15,0);
	vcdp->declBit  (c+171,"epRISC_coreEmu controller gpio oInterrupt",-1);
	vcdp->declBus  (c+172,"epRISC_coreEmu controller gpio rDirection",-1,15,0);
	vcdp->declBus  (c+173,"epRISC_coreEmu controller gpio rInterrupt",-1,15,0);
	vcdp->declBus  (c+174,"epRISC_coreEmu controller gpio rValue",-1,15,0);
	vcdp->declBit  (c+102,"epRISC_coreEmu controller uart iClk",-1);
	vcdp->declBit  (c+54,"epRISC_coreEmu controller uart iRst",-1);
	vcdp->declBit  (c+53,"epRISC_coreEmu controller uart iWrite",-1);
	vcdp->declBit  (c+37,"epRISC_coreEmu controller uart iEnable",-1);
	vcdp->declBit  (c+4,"epRISC_coreEmu controller uart iSClk",-1);
	vcdp->declBit  (c+253,"epRISC_coreEmu controller uart iRX",-1);
	vcdp->declBus  (c+223,"epRISC_coreEmu controller uart iAddr",-1,1,0);
	vcdp->declBus  (c+55,"epRISC_coreEmu controller uart iData",-1,15,0);
	vcdp->declBit  (c+159,"epRISC_coreEmu controller uart oInt",-1);
	vcdp->declBit  (c+255,"epRISC_coreEmu controller uart oTX",-1);
	vcdp->declBus  (c+22,"epRISC_coreEmu controller uart oData",-1,15,0);
	vcdp->declBus  (c+215,"epRISC_coreEmu controller uart rSendState",-1,3,0);
	vcdp->declBus  (c+51,"epRISC_coreEmu controller uart rSendNextState",-1,3,0);
	vcdp->declBus  (c+161,"epRISC_coreEmu controller uart rSendPrevState",-1,3,0);
	vcdp->declBus  (c+216,"epRISC_coreEmu controller uart rRecvState",-1,3,0);
	vcdp->declBus  (c+46,"epRISC_coreEmu controller uart rRecvNextState",-1,3,0);
	vcdp->declBus  (c+162,"epRISC_coreEmu controller uart rRecvPrevState",-1,3,0);
	vcdp->declBus  (c+186,"epRISC_coreEmu controller uart rRecvCountSto",-1,4,0);
	vcdp->declBus  (c+217,"epRISC_coreEmu controller uart rRecvCountAck",-1,4,0);
	vcdp->declBus  (c+187,"epRISC_coreEmu controller uart rSendCountSto",-1,4,0);
	vcdp->declBus  (c+218,"epRISC_coreEmu controller uart rSendCountAck",-1,4,0);
	vcdp->declBus  (c+163,"epRISC_coreEmu controller uart rSendDataCnt",-1,5,0);
	vcdp->declBus  (c+164,"epRISC_coreEmu controller uart rRecvDataCnt",-1,5,0);
	vcdp->declBus  (c+160,"epRISC_coreEmu controller uart rSendDataBuf",-1,7,0);
	vcdp->declBus  (c+165,"epRISC_coreEmu controller uart rRecvDataBuf",-1,7,0);
	vcdp->declBus  (c+188,"epRISC_coreEmu controller uart rControl",-1,15,0);
	vcdp->declBus  (c+189,"epRISC_coreEmu controller uart rDataIn",-1,15,0);
	vcdp->declBus  (c+166,"epRISC_coreEmu controller uart rDataOut",-1,15,0);
	vcdp->declBit  (c+190,"epRISC_coreEmu controller uart fReceiveEnable",-1);
	vcdp->declBit  (c+191,"epRISC_coreEmu controller uart fReceiveActive",-1);
	vcdp->declBit  (c+192,"epRISC_coreEmu controller uart fInterruptEnable",-1);
	vcdp->declBit  (c+193,"epRISC_coreEmu controller uart fSendEnable",-1);
	vcdp->declBit  (c+194,"epRISC_coreEmu controller uart fSendActive",-1);
	vcdp->declBit  (c+195,"epRISC_coreEmu controller uart fParityEnable",-1);
	vcdp->declBit  (c+196,"epRISC_coreEmu controller uart fParityMode",-1);
	vcdp->declBit  (c+197,"epRISC_coreEmu controller uart fStopBits",-1);
	vcdp->declBit  (c+198,"epRISC_coreEmu controller uart fWordLength",-1);
	vcdp->declBit  (c+102,"epRISC_coreEmu controller bspi iClk",-1);
	vcdp->declBit  (c+54,"epRISC_coreEmu controller bspi iRst",-1);
	vcdp->declBit  (c+53,"epRISC_coreEmu controller bspi iWrite",-1);
	vcdp->declBit  (c+38,"epRISC_coreEmu controller bspi iEnable",-1);
	vcdp->declBit  (c+5,"epRISC_coreEmu controller bspi iMasterClk",-1);
	vcdp->declBit  (c+277,"epRISC_coreEmu controller bspi iMISO",-1);
	vcdp->declBus  (c+223,"epRISC_coreEmu controller bspi iAddr",-1,1,0);
	vcdp->declBus  (c+55,"epRISC_coreEmu controller bspi iData",-1,15,0);
	vcdp->declBit  (c+309,"epRISC_coreEmu controller bspi oInt",-1);
	vcdp->declBit  (c+282,"epRISC_coreEmu controller bspi oMOSI",-1);
	vcdp->declBit  (c+284,"epRISC_coreEmu controller bspi oSCLK",-1);
	vcdp->declBus  (c+181,"epRISC_coreEmu controller bspi oSS",-1,3,0);
	vcdp->declBus  (c+26,"epRISC_coreEmu controller bspi oData",-1,15,0);
	vcdp->declBit  (c+157,"epRISC_coreEmu controller bspi rTxClk",-1);
	vcdp->declBus  (c+158,"epRISC_coreEmu controller bspi rClkDivide",-1,1,0);
	vcdp->declBus  (c+204,"epRISC_coreEmu controller bspi rState",-1,3,0);
	vcdp->declBus  (c+205,"epRISC_coreEmu controller bspi rPrevState",-1,3,0);
	vcdp->declBus  (c+185,"epRISC_coreEmu controller bspi rNextState",-1,3,0);
	vcdp->declBus  (c+182,"epRISC_coreEmu controller bspi rLockSto",-1,4,0);
	vcdp->declBus  (c+206,"epRISC_coreEmu controller bspi rLockAck",-1,4,0);
	vcdp->declBus  (c+202,"epRISC_coreEmu controller bspi rDataBuf",-1,7,0);
	vcdp->declBus  (c+183,"epRISC_coreEmu controller bspi rControl",-1,15,0);
	vcdp->declBus  (c+184,"epRISC_coreEmu controller bspi rDataIn",-1,15,0);
	vcdp->declBus  (c+203,"epRISC_coreEmu controller bspi rDataOut",-1,15,0);
	vcdp->declBit  (c+47,"epRISC_coreEmu controller bspi tmpClock",-1);
	vcdp->declBit  (c+102,"epRISC_coreEmu controller bvga iClk",-1);
	vcdp->declBit  (c+54,"epRISC_coreEmu controller bvga iRst",-1);
	vcdp->declBit  (c+53,"epRISC_coreEmu controller bvga iWrite",-1);
	vcdp->declBit  (c+39,"epRISC_coreEmu controller bvga iEnable",-1);
	vcdp->declBit  (c+234,"epRISC_coreEmu controller bvga iMemClk",-1);
	vcdp->declBit  (c+234,"epRISC_coreEmu controller bvga iVideoClk",-1);
	vcdp->declBus  (c+223,"epRISC_coreEmu controller bvga iAddr",-1,1,0);
	vcdp->declBus  (c+55,"epRISC_coreEmu controller bvga iData",-1,15,0);
	vcdp->declBus  (c+287,"epRISC_coreEmu controller bvga oColor",-1,7,0);
	vcdp->declBit  (c+285,"epRISC_coreEmu controller bvga oHS",-1);
	vcdp->declBit  (c+286,"epRISC_coreEmu controller bvga oVS",-1);
	vcdp->declBus  (c+24,"epRISC_coreEmu controller bvga oData",-1,15,0);
	vcdp->declBus  (c+82,"epRISC_coreEmu controller bvga rRowSel",-1,3,0);
	vcdp->declBus  (c+83,"epRISC_coreEmu controller bvga rDataOutput",-1,7,0);
	vcdp->declBus  (c+84,"epRISC_coreEmu controller bvga rColorOutput",-1,7,0);
	vcdp->declBus  (c+85,"epRISC_coreEmu controller bvga rPulseX",-1,9,0);
	vcdp->declBus  (c+86,"epRISC_coreEmu controller bvga rPulseY",-1,9,0);
	vcdp->declBus  (c+87,"epRISC_coreEmu controller bvga rTempX",-1,11,0);
	vcdp->declBus  (c+88,"epRISC_coreEmu controller bvga rTempY",-1,11,0);
	vcdp->declBus  (c+89,"epRISC_coreEmu controller bvga rFramePtr",-1,11,0);
	vcdp->declBus  (c+175,"epRISC_coreEmu controller bvga rConfig",-1,15,0);
	vcdp->declBus  (c+176,"epRISC_coreEmu controller bvga rRow",-1,15,0);
	vcdp->declBus  (c+177,"epRISC_coreEmu controller bvga rColumn",-1,15,0);
	vcdp->declBit  (c+90,"epRISC_coreEmu controller bvga mDrawingValidLine",-1);
	vcdp->declBit  (c+91,"epRISC_coreEmu controller bvga mDrawingValidFrame",-1);
	vcdp->declBit  (c+92,"epRISC_coreEmu controller bvga mDrawingValidData",-1);
	vcdp->declBus  (c+93,"epRISC_coreEmu controller bvga wCurrColor",-1,7,0);
	vcdp->declBus  (c+94,"epRISC_coreEmu controller bvga wCurrChar",-1,7,0);
	vcdp->declBus  (c+95,"epRISC_coreEmu controller bvga wFontRow",-1,7,0);
	vcdp->declBus  (c+96,"epRISC_coreEmu controller bvga wPixelX",-1,9,0);
	vcdp->declBus  (c+97,"epRISC_coreEmu controller bvga wPixelY",-1,9,0);
	vcdp->declBus  (c+178,"epRISC_coreEmu controller bvga wCharRAMData",-1,15,0);
	vcdp->declBus  (c+98,"epRISC_coreEmu controller bvga wCharRAMFrame",-1,15,0);
	vcdp->declBus  (c+179,"epRISC_coreEmu controller bvga debug",-1,16,0);
	vcdp->declBit  (c+102,"epRISC_coreEmu controller bvga vram iClkA",-1);
	vcdp->declBit  (c+234,"epRISC_coreEmu controller bvga vram iClkB",-1);
	vcdp->declBit  (c+75,"epRISC_coreEmu controller bvga vram iWriteA",-1);
	vcdp->declBit  (c+300,"epRISC_coreEmu controller bvga vram iWriteB",-1);
	vcdp->declBus  (c+23,"epRISC_coreEmu controller bvga vram iAddrA",-1,11,0);
	vcdp->declBus  (c+89,"epRISC_coreEmu controller bvga vram iAddrB",-1,11,0);
	vcdp->declBus  (c+55,"epRISC_coreEmu controller bvga vram iDInA",-1,15,0);
	vcdp->declBus  (c+310,"epRISC_coreEmu controller bvga vram iDInB",-1,15,0);
	vcdp->declBus  (c+178,"epRISC_coreEmu controller bvga vram oDOutA",-1,15,0);
	vcdp->declBus  (c+98,"epRISC_coreEmu controller bvga vram oDOutB",-1,15,0);
	vcdp->declBus  (c+2,"epRISC_coreEmu controller bvga vram rClr",-1,12,0);
	// Tracing: epRISC_coreEmu controller bvga vram rContents // Ignored: Wide memory > --trace-max-array ents at ../../../firmware/io/video_v1r0.v:141
	vcdp->declBit  (c+99,"epRISC_coreEmu controller bvga vram debug",-1);
	vcdp->declBit  (c+234,"epRISC_coreEmu controller bvga vrom iClk",-1);
	vcdp->declBus  (c+7,"epRISC_coreEmu controller bvga vrom iAddr",-1,11,0);
	vcdp->declBus  (c+100,"epRISC_coreEmu controller bvga vrom oData",-1,15,0);
	vcdp->declBus  (c+100,"epRISC_coreEmu controller bvga vrom rDataOut",-1,15,0);
	// Tracing: epRISC_coreEmu controller bvga vrom rContents // Ignored: Wide memory > --trace-max-array ents at ../../../firmware/io/video_v1r0.v:182
	vcdp->declBit  (c+102,"epRISC_coreEmu controller bmem iClk",-1);
	vcdp->declBit  (c+54,"epRISC_coreEmu controller bmem iRst",-1);
	vcdp->declBit  (c+53,"epRISC_coreEmu controller bmem iWrite",-1);
	vcdp->declBit  (c+40,"epRISC_coreEmu controller bmem iEnable",-1);
	vcdp->declBus  (c+224,"epRISC_coreEmu controller bmem iAddr",-1,7,0);
	vcdp->declBus  (c+219,"epRISC_coreEmu controller bmem iData",-1,31,0);
	vcdp->declBus  (c+74,"epRISC_coreEmu controller bmem oData",-1,31,0);
	// Tracing: epRISC_coreEmu controller bmem rContents // Ignored: Wide memory > --trace-max-array ents at ../../../firmware/io/controller_v1r0.v:31
    }
}

void VepRISC_coreEmu::traceFullThis__1(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rClr),9);
	vcdp->fullBus  (c+2,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rClr),13);
	vcdp->fullBus  (c+3,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__clock__DOT__rClockSplit),2);
	vcdp->fullBit  (c+4,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wSerialClock));
	vcdp->fullBit  (c+5,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wSPIClock));
	vcdp->fullBus  (c+6,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__clock__DOT__rClockSplit),7);
	vcdp->fullBus  (c+7,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vrom____pinNumber1),12);
	vcdp->fullBit  (c+8,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec));
	vcdp->fullBus  (c+9,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrA),8);
	vcdp->fullBus  (c+10,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrB),8);
	vcdp->fullBus  (c+11,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrA),8);
	vcdp->fullBus  (c+12,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrB),8);
	vcdp->fullBit  (c+13,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchSaveStack));
	vcdp->fullBit  (c+14,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchLoadStack));
	vcdp->fullBit  (c+15,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchInterrupt));
	vcdp->fullBit  (c+16,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadLoad));
	vcdp->fullBit  (c+17,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadStore));
	vcdp->fullBit  (c+18,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mDirectOR));
	vcdp->fullBit  (c+19,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mALURegisters));
	vcdp->fullBus  (c+20,((0xfU & (((((((((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)) 
					      | (2U 
						 == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
					     | (3U 
						== (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
					    | (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
					   | (5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
					  | (8U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
					 | (7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
					| (6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)))
				        ? ((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
					    ? 2U : 
					   ((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
					     ? 3U : 
					    ((3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
					      ? 4U : 
					     ((4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
					       ? ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec)
						   ? 5U
						   : 7U)
					       : ((5U 
						   == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
						   ? 
						  (((1U 
						     == 
						     (0x3fU 
						      & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
							 >> 0x1aU))) 
						    & (2U 
						       == 
						       (0x3fU 
							& (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
							   >> 0x14U))))
						    ? 6U
						    : 
						   (((IData)(vlTOPp->epRISC_coreEmu__DOT__iBusInterrupt) 
						     & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
							>> 6U))
						     ? 8U
						     : 1U))
						   : 
						  ((8U 
						    == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
						    ? 1U
						    : 
						   ((7U 
						     == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
						     ? 
						    (((1U 
						       == 
						       (0x3fU 
							& (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
							   >> 0x1aU))) 
						      & (2U 
							 == 
							 (0x3fU 
							  & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
							     >> 0x14U))))
						      ? 6U
						      : 1U)
						     : 6U)))))))
				        : ((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
					    ? 1U : 0U)))),4);
	vcdp->fullBus  (c+21,((((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrA)) 
				& (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				      >> 7U))) ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP
			        : (((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrA)) 
				    & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
					  >> 7U))) ? 
				   (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadLoad) 
				     & (2U == (0xfU 
					       & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						  >> 0x18U))))
				     ? (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP 
					- (IData)(1U))
				     : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP)
				    : (((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrA)) 
					& (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
					      >> 7U)))
				        ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS
				        : (((3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrA)) 
					    & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
						  >> 7U)))
					    ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegGL
					    : (((0xfU 
						 == 
						 (0xfU 
						  & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
						     >> 0xcU))) 
						& (4U 
						   == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrA)))
					        ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptBase
					        : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusRegA)))))),32);
	vcdp->fullBus  (c+22,(((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableUART)
				  ? ((0U == (3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						   >> 0x10U)))
				      ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl)
				      : ((1U == (3U 
						 & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						    >> 0x10U)))
					  ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rDataIn)
					  : ((2U == 
					      (3U & 
					       (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						>> 0x10U)))
					      ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rDataOut)
					      : 1U)))
				  : 0U) & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableUART)
					    ? 0xffffU
					    : 0U)) 
			       & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableUART)
				   ? 0xffffU : 0U))),16);
	vcdp->fullBus  (c+23,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber1),12);
	vcdp->fullBus  (c+24,(((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableVideo)
				  ? ((0U == (3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						   >> 0x10U)))
				      ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rConfig)
				      : ((1U == (3U 
						 & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						    >> 0x10U)))
					  ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColumn)
					  : ((2U == 
					      (3U & 
					       (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						>> 0x10U)))
					      ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRow)
					      : ((3U 
						  == 
						  (3U 
						   & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						      >> 0x10U)))
						  ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__wCharRAMData)
						  : 1U))))
				  : 0U) & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableVideo)
					    ? 0xffffU
					    : 0U)) 
			       & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableVideo)
				   ? 0xffffU : 0U))),16);
	vcdp->fullBus  (c+25,((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
				  | (0x10U <= (0x7fffU 
					       & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						  >> 0x10U))))
				  ? 0U : ((0U == (3U 
						  & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						     >> 0x10U)))
					   ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)
					   : ((1U == 
					       (3U 
						& (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						   >> 0x10U)))
					       ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rInterrupt)
					       : ((2U 
						   == 
						   (3U 
						    & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						       >> 0x10U)))
						   ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)
						   : 0xeaU)))) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__oData__out__en16)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__oData__out__en16))),16);
	vcdp->fullBus  (c+26,(((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableSPI)
				  ? ((0U == (3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						   >> 0x10U)))
				      ? ((8U != (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
					  ? (0x80U 
					     | (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rControl))
					  : (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rControl))
				      : ((1U == (3U 
						 & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						    >> 0x10U)))
					  ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataIn)
					  : ((2U == 
					      (3U & 
					       (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						>> 0x10U)))
					      ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataOut)
					      : 1U)))
				  : 0U) & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableSPI)
					    ? 0xffffU
					    : 0U)) 
			       & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableSPI)
				   ? 0xffffU : 0U))),16);
	vcdp->fullBit  (c+27,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAccess));
	vcdp->fullQuad (c+28,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rALUOut),33);
	vcdp->fullBus  (c+30,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation),5);
	vcdp->fullBus  (c+31,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutA),32);
	vcdp->fullBus  (c+32,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInB),32);
	vcdp->fullBit  (c+33,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteA));
	vcdp->fullBit  (c+34,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteB));
	vcdp->fullBus  (c+35,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT____Vcellinp__registers____pinNumber1),8);
	vcdp->fullBus  (c+36,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT____Vcellinp__registers____pinNumber2),8);
	vcdp->fullBit  (c+37,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableUART));
	vcdp->fullBit  (c+38,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableSPI));
	vcdp->fullBit  (c+39,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableVideo));
	vcdp->fullBit  (c+40,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableRAM));
	vcdp->fullBus  (c+41,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData),32);
	vcdp->fullBit  (c+42,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bus____pinNumber2));
	vcdp->fullBus  (c+43,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataMOSI),32);
	vcdp->fullBus  (c+44,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataMISO),32);
	vcdp->fullBit  (c+45,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wInternalReset));
	vcdp->fullBus  (c+46,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvNextState),4);
	vcdp->fullBit  (c+47,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__tmpClock));
	vcdp->fullBus  (c+48,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDistributionMOSI),32);
	vcdp->fullBit  (c+49,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__debug));
	vcdp->fullBus  (c+50,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutB),32);
	vcdp->fullBus  (c+51,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendNextState),4);
	vcdp->fullBus  (c+52,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeNextState),5);
	vcdp->fullBit  (c+53,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite));
	vcdp->fullBit  (c+54,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset));
	vcdp->fullBus  (c+55,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusData),16);
	vcdp->fullBus  (c+56,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState),5);
	vcdp->fullBus  (c+57,(vlTOPp->epRISC_coreEmu__DOT__oBusMOSI),8);
	vcdp->fullBit  (c+58,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite));
	vcdp->fullBit  (c+59,((1U & ((0x1000U > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)
				      ? 1U : 0U))));
	vcdp->fullBus  (c+60,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress),32);
	vcdp->fullBit  (c+61,((0x1000U > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)));
	vcdp->fullBit  (c+62,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableRAM));
	vcdp->fullBit  (c+63,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableBusControl));
	vcdp->fullBit  (c+64,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableSDRAM));
	vcdp->fullBit  (c+65,((0x800000U <= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)));
	vcdp->fullBit  (c+66,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableBusControl)
				      ? 1U : 0U))));
	vcdp->fullBus  (c+67,((0xfU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)),4);
	vcdp->fullBit  (c+68,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT____Vcellinp__bufferMISO____pinNumber7));
	vcdp->fullBit  (c+69,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT____Vcellinp__bufferMOSI____pinNumber7));
	vcdp->fullBus  (c+70,((0xfffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)),12);
	vcdp->fullBit  (c+71,(((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableRAM))));
	vcdp->fullBit  (c+72,(((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableSDRAM))));
	vcdp->fullBus  (c+73,((0x7fffffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)),23);
	vcdp->fullBus  (c+74,(((vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__out0 
				& vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__en0) 
			       & vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__en0)),32);
	vcdp->fullBit  (c+75,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber7));
	vcdp->fullBus  (c+76,(vlTOPp->epRISC_coreEmu__DOT__iBusMISO),8);
	vcdp->fullBus  (c+77,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wInternalMISO),16);
	vcdp->fullBit  (c+78,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcram____pinNumber1));
	vcdp->fullBit  (c+79,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcsdram____pinNumber1));
	vcdp->fullBit  (c+80,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock));
	vcdp->fullBit  (c+81,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock));
	vcdp->fullBus  (c+82,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRowSel),4);
	vcdp->fullBus  (c+83,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rDataOutput),8);
	vcdp->fullBus  (c+84,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColorOutput),8);
	vcdp->fullBus  (c+85,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX),10);
	vcdp->fullBus  (c+86,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY),10);
	vcdp->fullBus  (c+87,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempX),12);
	vcdp->fullBus  (c+88,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempY),12);
	vcdp->fullBus  (c+89,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rFramePtr),12);
	vcdp->fullBit  (c+90,((1U & (((0x23U <= (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY)) 
				      & (0x203U > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY)))
				      ? 1U : 0U))));
	vcdp->fullBit  (c+91,((1U & (((0xa0U <= (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX)) 
				      & (0x320U > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX)))
				      ? 1U : 0U))));
	vcdp->fullBit  (c+92,((1U & ((1U & ((((0x23U 
					       <= (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY)) 
					      & (0x203U 
						 > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY)))
					      ? 1U : 0U) 
					    & (((0xa0U 
						 <= (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX)) 
						& (0x320U 
						   > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX)))
					        ? 1U
					        : 0U)))
				      ? 1U : 0U))));
	vcdp->fullBus  (c+93,((0xffU & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__wCharRAMFrame) 
					>> 8U))),8);
	vcdp->fullBus  (c+94,((0xffU & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__wCharRAMFrame))),8);
	vcdp->fullBus  (c+95,((0xffU & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rDataOut))),8);
	vcdp->fullBus  (c+96,((0x3ffU & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX) 
					 - (IData)(0xa0U)))),10);
	vcdp->fullBus  (c+97,((0x3ffU & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY) 
					 - (IData)(0x23U)))),10);
	vcdp->fullBus  (c+98,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__wCharRAMFrame),16);
	vcdp->fullBit  (c+99,((1U & ((0x50U < (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rFramePtr))
				      ? 1U : 0U))));
	vcdp->fullBus  (c+100,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rDataOut),16);
	vcdp->fullBus  (c+101,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDirectMOSI),32);
	vcdp->fullBit  (c+102,(vlTOPp->epRISC_coreEmu__DOT__oBusClock));
	vcdp->fullBus  (c+103,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbram__DOT__rDataOut),32);
	vcdp->fullBus  (c+104,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbsdram__DOT__rDataOut),32);
	vcdp->fullBit  (c+105,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock));
	vcdp->fullBus  (c+106,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rMasterClockCount),12);
	vcdp->fullBus  (c+107,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataOutMISO),32);
	vcdp->fullBus  (c+108,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataOutMOSI),32);
	vcdp->fullBus  (c+109,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rDataOut),32);
	vcdp->fullBus  (c+110,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipePrevState),4);
	vcdp->fullBus  (c+111,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusRegB),32);
	vcdp->fullBus  (c+112,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP),32);
	vcdp->fullBus  (c+113,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP),32);
	vcdp->fullBus  (c+114,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS),32);
	vcdp->fullBus  (c+115,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegGL),32);
	vcdp->fullBus  (c+116,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA),32);
	vcdp->fullBus  (c+117,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB),32);
	vcdp->fullBus  (c+118,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegM),32);
	vcdp->fullQuad (c+119,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegR),33);
	vcdp->fullBus  (c+121,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst),32);
	vcdp->fullBus  (c+122,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptBase),32);
	vcdp->fullArray(c+123,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack),96);
	vcdp->fullBit  (c+126,((1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				      >> 0x1fU))));
	vcdp->fullBit  (c+127,(((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				 >> 0x1fU) & (0U == 
					      (7U & 
					       (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						>> 0x1cU))))));
	vcdp->fullBit  (c+128,(((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				 >> 0x1fU) & (4U == 
					      (7U & 
					       (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						>> 0x1cU))))));
	vcdp->fullBit  (c+129,(((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				 >> 0x1fU) & (6U == 
					      (7U & 
					       (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						>> 0x1cU))))));
	vcdp->fullBit  (c+130,((1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					     >> 0x1eU)))));
	vcdp->fullBit  (c+131,((1U == (7U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					     >> 0x1dU)))));
	vcdp->fullBit  (c+132,((1U == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					       >> 0x1cU)))));
	vcdp->fullBit  (c+133,(((1U == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						>> 0x1cU))) 
				& (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				   >> 0x1bU))));
	vcdp->fullBit  (c+134,((1U == (0x1fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						>> 0x1bU)))));
	vcdp->fullBit  (c+135,(((1U == (0x1fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						 >> 0x1bU))) 
				& (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				      >> 0x18U)))));
	vcdp->fullBit  (c+136,(((1U == (0x1fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						 >> 0x1bU))) 
				& (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				   >> 0x18U))));
	vcdp->fullBit  (c+137,((1U == (0x3fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						>> 0x1aU)))));
	vcdp->fullBus  (c+138,((0xfffffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst)),20);
	vcdp->fullBus  (c+139,((0xffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst)),8);
	vcdp->fullBus  (c+140,((0x3fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					 >> 0x14U))),6);
	vcdp->fullBus  (c+141,((0x1fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					 >> 0x14U))),5);
	vcdp->fullBus  (c+142,((0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					>> 0x18U))),4);
	vcdp->fullBus  (c+143,((0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					>> 0x14U))),4);
	vcdp->fullBus  (c+144,((0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					>> 0x10U))),4);
	vcdp->fullBus  (c+145,((0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					>> 0xcU))),4);
	vcdp->fullBus  (c+146,((0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					>> 8U))),4);
	vcdp->fullBus  (c+147,((0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
					>> 0xcU))),4);
	vcdp->fullBus  (c+148,((0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
					>> 8U))),4);
	vcdp->fullBit  (c+149,((1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				      >> 7U))));
	vcdp->fullBit  (c+150,((1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				      >> 6U))));
	vcdp->fullBit  (c+151,((1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				      >> 5U))));
	vcdp->fullBit  (c+152,((1U & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
					 >> 4U)))));
	vcdp->fullBit  (c+153,((1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				      >> 3U))));
	vcdp->fullBit  (c+154,((1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				      >> 2U))));
	vcdp->fullBit  (c+155,((1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				      >> 1U))));
	vcdp->fullBit  (c+156,((1U & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS)));
	vcdp->fullBit  (c+157,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk));
	vcdp->fullBus  (c+158,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rClkDivide),2);
	vcdp->fullBit  (c+159,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__oBvusInterrupt));
	vcdp->fullBus  (c+160,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataBuf),8);
	vcdp->fullBus  (c+161,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendPrevState),4);
	vcdp->fullBus  (c+162,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvPrevState),4);
	vcdp->fullBus  (c+163,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataCnt),6);
	vcdp->fullBus  (c+164,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataCnt),6);
	vcdp->fullBus  (c+165,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataBuf),8);
	vcdp->fullBus  (c+166,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rDataOut),16);
	vcdp->fullBus  (c+167,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rTransferCount),8);
	vcdp->fullBus  (c+168,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDirectMISO),32);
	vcdp->fullBus  (c+169,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wInternalDataMOSI),32);
	vcdp->fullBus  (c+170,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wTrashMISO),32);
	vcdp->fullBit  (c+171,(vlTOPp->epRISC_coreEmu__DOT__iBusInterrupt));
	vcdp->fullBus  (c+172,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection),16);
	vcdp->fullBus  (c+173,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rInterrupt),16);
	vcdp->fullBus  (c+174,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue),16);
	vcdp->fullBus  (c+175,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rConfig),16);
	vcdp->fullBus  (c+176,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRow),16);
	vcdp->fullBus  (c+177,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColumn),16);
	vcdp->fullBus  (c+178,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__wCharRAMData),16);
	vcdp->fullBus  (c+179,((0x1ffffU & ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRow) 
					      << 4U) 
					     + ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRow) 
						<< 6U)) 
					    + (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColumn)))),17);
	vcdp->fullBus  (c+180,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipePrevState),5);
	vcdp->fullBus  (c+181,((0xfU & (~ ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rControl) 
					   >> 3U)))),4);
	vcdp->fullBus  (c+182,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockSto),5);
	vcdp->fullBus  (c+183,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rControl),16);
	vcdp->fullBus  (c+184,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataIn),16);
	vcdp->fullBus  (c+185,((0xfU & (((((((((8U 
						== (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState)) 
					       | (9U 
						  == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
					      | (7U 
						 == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
					     | (6U 
						== (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
					    | (5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
					   | (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
					  | (3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
					 | (2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState)))
					 ? ((8U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
					     ? ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rControl) 
						  >> 7U) 
						 & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockAck) 
						    == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockSto)))
						 ? 7U
						 : 8U)
					     : ((9U 
						 == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
						 ? 7U
						 : 
						((7U 
						  == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
						  ? 6U
						  : 
						 ((6U 
						   == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
						   ? 5U
						   : 
						  ((5U 
						    == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
						    ? 4U
						    : 
						   ((4U 
						     == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
						     ? 3U
						     : 
						    ((3U 
						      == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
						      ? 2U
						      : 1U)))))))
					 : ((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
					     ? 0U : 
					    ((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
					      ? 0xbU
					      : ((0xbU 
						  == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
						  ? 0xaU
						  : 8U)))))),4);
	vcdp->fullBus  (c+186,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountSto),5);
	vcdp->fullBus  (c+187,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountSto),5);
	vcdp->fullBus  (c+188,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl),16);
	vcdp->fullBus  (c+189,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rDataIn),16);
	vcdp->fullBit  (c+190,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
				      >> 5U))));
	vcdp->fullBit  (c+191,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
				      >> 4U))));
	vcdp->fullBit  (c+192,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
				      >> 8U))));
	vcdp->fullBit  (c+193,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
				      >> 7U))));
	vcdp->fullBit  (c+194,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
				      >> 6U))));
	vcdp->fullBit  (c+195,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
				      >> 0xaU))));
	vcdp->fullBit  (c+196,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
				      >> 9U))));
	vcdp->fullBit  (c+197,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
				      >> 0xbU))));
	vcdp->fullBit  (c+198,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
				      >> 0xcU))));
	vcdp->fullBit  (c+199,((6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))));
	vcdp->fullBus  (c+200,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState),4);
	vcdp->fullBus  (c+201,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusRegA),32);
	vcdp->fullBus  (c+202,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataBuf),8);
	vcdp->fullBus  (c+203,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataOut),16);
	vcdp->fullBus  (c+204,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState),4);
	vcdp->fullBus  (c+205,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rPrevState),4);
	vcdp->fullBus  (c+206,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockAck),5);
	vcdp->fullBus  (c+207,((3U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
				      >> 2U))),2);
	vcdp->fullBus  (c+208,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig),32);
	vcdp->fullBit  (c+209,((1U & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig)));
	vcdp->fullBit  (c+210,((1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
				      >> 4U))));
	vcdp->fullBus  (c+211,((0xffU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
					 >> 8U))),8);
	vcdp->fullBus  (c+212,((0xfffU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
					  >> 0x10U))),12);
	vcdp->fullBus  (c+213,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockSto),5);
	vcdp->fullBus  (c+214,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalCounterMOSI),8);
	vcdp->fullBus  (c+215,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState),4);
	vcdp->fullBus  (c+216,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState),4);
	vcdp->fullBus  (c+217,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountAck),5);
	vcdp->fullBus  (c+218,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountAck),5);
	vcdp->fullBus  (c+219,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI),32);
	vcdp->fullBus  (c+220,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSIBuffer),32);
	vcdp->fullBus  (c+221,((0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
					   >> 0x10U))),15);
	vcdp->fullBit  (c+222,((0x10U > (0x7fffU & 
					 (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
					  >> 0x10U)))));
	vcdp->fullBus  (c+223,((3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				      >> 0x10U))),2);
	vcdp->fullBus  (c+224,((0xffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
					 >> 0x10U))),8);
	vcdp->fullBus  (c+225,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMOSI),8);
	vcdp->fullBus  (c+226,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalCounterMISO),8);
	vcdp->fullBus  (c+227,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalDataMISO),32);
	vcdp->fullBus  (c+228,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState),5);
	vcdp->fullBus  (c+229,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState),5);
	vcdp->fullBus  (c+230,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipePrevState),5);
	vcdp->fullBus  (c+231,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockAck),5);
	vcdp->fullBit  (c+232,((7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))));
	vcdp->fullBus  (c+233,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMISO),8);
	vcdp->fullBit  (c+234,(vlTOPp->iBoardClock));
	vcdp->fullBit  (c+235,(vlTOPp->iBoardReset));
	vcdp->fullBit  (c+236,(vlTOPp->iBoardSense));
	vcdp->fullBit  (c+237,(vlTOPp->iBoardReceive));
	vcdp->fullBit  (c+238,(vlTOPp->oBoardAcknowledge));
	vcdp->fullBit  (c+239,(vlTOPp->oBoardTransmit));
	vcdp->fullBit  (c+240,(vlTOPp->bBoardDebug0));
	vcdp->fullBit  (c+241,(vlTOPp->bBoardDebug1));
	vcdp->fullBit  (c+242,(vlTOPp->bBoardDebug2));
	vcdp->fullBit  (c+243,(vlTOPp->bBoardDebug3));
	vcdp->fullBit  (c+244,(vlTOPp->bBoardDebug4));
	vcdp->fullBit  (c+245,(vlTOPp->bBoardDebug5));
	vcdp->fullBit  (c+246,(vlTOPp->iSerialRX));
	vcdp->fullBit  (c+247,(vlTOPp->iSerialCTS));
	vcdp->fullBit  (c+248,(vlTOPp->iSerialDCD));
	vcdp->fullBit  (c+249,(vlTOPp->iSerialDSR));
	vcdp->fullBit  (c+250,(vlTOPp->oSerialDTR));
	vcdp->fullBit  (c+251,(vlTOPp->oSerialRTS));
	vcdp->fullBit  (c+252,(vlTOPp->oSerialTX));
	vcdp->fullBit  (c+253,(vlTOPp->iTTLSerialRX));
	vcdp->fullBit  (c+254,(vlTOPp->iTTLSerialRST));
	vcdp->fullBit  (c+255,(vlTOPp->oTTLSerialTX));
	vcdp->fullBit  (c+256,(vlTOPp->bGPIO0));
	vcdp->fullBit  (c+257,(vlTOPp->bGPIO1));
	vcdp->fullBit  (c+258,(vlTOPp->bGPIO2));
	vcdp->fullBit  (c+259,(vlTOPp->bGPIO3));
	vcdp->fullBit  (c+260,(vlTOPp->bGPIO4));
	vcdp->fullBit  (c+261,(vlTOPp->bGPIO5));
	vcdp->fullBit  (c+262,(vlTOPp->bGPIO6));
	vcdp->fullBit  (c+263,(vlTOPp->bGPIO7));
	vcdp->fullBit  (c+264,(vlTOPp->bGPIO8));
	vcdp->fullBit  (c+265,(vlTOPp->bGPIO9));
	vcdp->fullBit  (c+266,(vlTOPp->bGPIO10));
	vcdp->fullBit  (c+267,(vlTOPp->bGPIO11));
	vcdp->fullBit  (c+268,(vlTOPp->bGPIO12));
	vcdp->fullBit  (c+269,(vlTOPp->bGPIO13));
	vcdp->fullBit  (c+270,(vlTOPp->bGPIO14));
	vcdp->fullBit  (c+271,(vlTOPp->bGPIO15));
	vcdp->fullBit  (c+272,(vlTOPp->iExtBusInterrupt));
	vcdp->fullBus  (c+273,(vlTOPp->iExtBusMISO),4);
	vcdp->fullBit  (c+274,(vlTOPp->oExtBusClock));
	vcdp->fullBus  (c+275,(vlTOPp->oExtBusSS),2);
	vcdp->fullBus  (c+276,(vlTOPp->oExtBusMOSI),4);
	vcdp->fullBit  (c+277,(vlTOPp->iSPIMISO));
	vcdp->fullBit  (c+278,(vlTOPp->iSPIDetect0));
	vcdp->fullBit  (c+279,(vlTOPp->iSPIDetect1));
	vcdp->fullBit  (c+280,(vlTOPp->iSPIWrite0));
	vcdp->fullBit  (c+281,(vlTOPp->iSPIWrite1));
	vcdp->fullBit  (c+282,(vlTOPp->oSPIMOSI));
	vcdp->fullBit  (c+283,(vlTOPp->oSPISelect));
	vcdp->fullBit  (c+284,(vlTOPp->oSPIClock));
	vcdp->fullBit  (c+285,(vlTOPp->oVGAHorizontal));
	vcdp->fullBit  (c+286,(vlTOPp->oVGAVertical));
	vcdp->fullBus  (c+287,(vlTOPp->oVGAColor),8);
	vcdp->fullBit  (c+288,(vlTOPp->bPS2Data));
	vcdp->fullBit  (c+289,(vlTOPp->bPS2Clock));
	vcdp->fullBit  (c+290,((1U & (~ (IData)(vlTOPp->iBoardReset)))));
	vcdp->fullBit  (c+291,(vlTOPp->epRISC_coreEmu__DOT__oMemoryCKE));
	vcdp->fullBit  (c+292,(vlTOPp->epRISC_coreEmu__DOT__oMemoryWE));
	vcdp->fullBit  (c+293,(vlTOPp->epRISC_coreEmu__DOT__oMemoryCAS));
	vcdp->fullBit  (c+294,(vlTOPp->epRISC_coreEmu__DOT__oMemoryRAS));
	vcdp->fullBit  (c+295,(vlTOPp->epRISC_coreEmu__DOT__oMemoryCS));
	vcdp->fullBus  (c+296,(vlTOPp->epRISC_coreEmu__DOT__oMemoryBank),2);
	vcdp->fullBus  (c+297,(vlTOPp->epRISC_coreEmu__DOT__oMemoryDQM),4);
	vcdp->fullBus  (c+298,(vlTOPp->epRISC_coreEmu__DOT__oMemoryAddress),12);
	vcdp->fullBus  (c+299,(0U),32);
	vcdp->fullBit  (c+300,(0U));
	vcdp->fullBit  (c+301,(1U));
	vcdp->fullBit  (c+302,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wSDRAMReady));
	vcdp->fullBit  (c+303,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreFlag));
	vcdp->fullBus  (c+304,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rDataBuf),32);
	vcdp->fullBus  (c+305,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rClr),8);
	vcdp->fullBus  (c+306,(0x1badc0deU),32);
	vcdp->fullBus  (c+307,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rClr),8);
	vcdp->fullBit  (c+308,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnablePS2));
	vcdp->fullBit  (c+309,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__oBrusInterrupt));
	vcdp->fullBus  (c+310,(0U),16);
    }
}
