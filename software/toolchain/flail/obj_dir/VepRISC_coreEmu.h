// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VepRISC_coreEmu_H_
#define _VepRISC_coreEmu_H_

#include "verilated.h"
class VepRISC_coreEmu__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VepRISC_coreEmu) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(iBoardClock,0,0);
    VL_IN8(iBoardReset,0,0);
    VL_IN8(iBoardSense,0,0);
    VL_IN8(iBoardReceive,0,0);
    VL_OUT8(oBoardAcknowledge,0,0);
    VL_OUT8(oBoardTransmit,0,0);
    VL_INOUT8(bBoardDebug0,0,0);
    VL_INOUT8(bBoardDebug1,0,0);
    VL_INOUT8(bBoardDebug2,0,0);
    VL_INOUT8(bBoardDebug3,0,0);
    VL_INOUT8(bBoardDebug4,0,0);
    VL_INOUT8(bBoardDebug5,0,0);
    VL_IN8(iSerialRX,0,0);
    VL_IN8(iSerialCTS,0,0);
    VL_IN8(iSerialDCD,0,0);
    VL_IN8(iSerialDSR,0,0);
    VL_OUT8(oSerialDTR,0,0);
    VL_OUT8(oSerialRTS,0,0);
    VL_OUT8(oSerialTX,0,0);
    VL_IN8(iTTLSerialRX,0,0);
    VL_IN8(iTTLSerialRST,0,0);
    VL_OUT8(oTTLSerialTX,0,0);
    VL_INOUT8(bGPIO0,0,0);
    VL_INOUT8(bGPIO1,0,0);
    VL_INOUT8(bGPIO2,0,0);
    VL_INOUT8(bGPIO3,0,0);
    VL_INOUT8(bGPIO4,0,0);
    VL_INOUT8(bGPIO5,0,0);
    VL_INOUT8(bGPIO6,0,0);
    VL_INOUT8(bGPIO7,0,0);
    VL_INOUT8(bGPIO8,0,0);
    VL_INOUT8(bGPIO9,0,0);
    VL_INOUT8(bGPIO10,0,0);
    VL_INOUT8(bGPIO11,0,0);
    VL_INOUT8(bGPIO12,0,0);
    VL_INOUT8(bGPIO13,0,0);
    VL_INOUT8(bGPIO14,0,0);
    VL_INOUT8(bGPIO15,0,0);
    VL_IN8(iExtBusInterrupt,0,0);
    VL_IN8(iExtBusMISO,3,0);
    VL_OUT8(oExtBusClock,0,0);
    VL_OUT8(oExtBusSS,1,0);
    VL_OUT8(oExtBusMOSI,3,0);
    VL_IN8(iSPIMISO,0,0);
    VL_IN8(iSPIDetect0,0,0);
    VL_IN8(iSPIDetect1,0,0);
    VL_IN8(iSPIWrite0,0,0);
    VL_IN8(iSPIWrite1,0,0);
    VL_OUT8(oSPIMOSI,0,0);
    VL_OUT8(oSPISelect,0,0);
    VL_OUT8(oSPIClock,0,0);
    VL_OUT8(oVGAHorizontal,0,0);
    VL_OUT8(oVGAVertical,0,0);
    VL_OUT8(oVGAColor,7,0);
    VL_INOUT8(bPS2Data,0,0);
    VL_INOUT8(bPS2Clock,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(epRISC_coreEmu__DOT__oBusClock,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__mBusReset,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__wInternalReset,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__wSerialClock,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__wSPIClock,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__iBusInterrupt,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__iBusMISO,7,0);
    VL_SIG8(epRISC_coreEmu__DOT__oBusMOSI,7,0);
    VL_SIG8(epRISC_coreEmu__DOT__oMemoryCKE,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__oMemoryWE,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__oMemoryCAS,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__oMemoryRAS,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__oMemoryCS,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__oMemoryBank,1,0);
    VL_SIG8(epRISC_coreEmu__DOT__oMemoryDQM,3,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__wCoreBusAccess,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__wSDRAMReady,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__wEnableRAM,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__wEnableBusControl,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__wEnableSDRAM,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__wCoreFlag,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__clock__DOT__rClockSplit,1,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipePrevState,3,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState,3,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeNextState,3,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation,4,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrA,7,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrB,7,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrA,7,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrB,7,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteA,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteB,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchSaveStack,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchLoadStack,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchInterrupt,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadLoad,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadStore,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__mDirectOR,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__mALURegisters,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__fCSHideRegs,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__fCSFlagSet,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__debug,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMISO,7,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMOSI,7,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalCounterMISO,7,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalCounterMOSI,7,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rTransferCount,7,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState,4,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipePrevState,4,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState,4,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockAck,4,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockSto,4,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rClr,7,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rClr,7,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__mBusWrite,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__wEnableUART,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__wEnableSPI,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__wEnableVideo,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__wEnablePS2,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__wEnableRAM,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__rPipeState,4,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__rPipePrevState,4,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__rPipeNextState,4,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__oBvusInterrupt,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__oBrusInterrupt,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__clock__DOT__rClockSplit,6,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState,3,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendNextState,3,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendPrevState,3,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState,3,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvNextState,3,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvPrevState,3,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountSto,4,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountAck,4,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountSto,4,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountAck,4,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataCnt,5,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataCnt,5,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataBuf,7,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataBuf,7,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rClkDivide,1,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState,3,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rPrevState,3,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rNextState,3,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockSto,4,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockAck,4,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataBuf,7,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__tmpClock,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRowSel,3,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rDataOutput,7,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColorOutput,7,0);
    //char	__VpadToAlign157[1];
    VL_SIG16(epRISC_coreEmu__DOT__oMemoryAddress,11,0);
    VL_SIG16(epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rClr,8,0);
    VL_SIG16(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rMasterClockCount,11,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__wInternalMISO,15,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__mBusData,15,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection,15,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rInterrupt,15,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue,15,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl,15,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rDataIn,15,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rDataOut,15,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rControl,15,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataIn,15,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataOut,15,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX,9,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY,9,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempX,11,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempY,11,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rFramePtr,11,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rConfig,15,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRow,15,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColumn,15,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__wCharRAMData,15,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__wCharRAMFrame,15,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rClr,12,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rDataOut,15,0);
    //char	__VpadToAlign210[2];
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__wCoreBusData,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegGL,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegM,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__core__DOT__rDataBuf,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptBase,31,0);
    //char	__VpadToAlign260[4];
    VL_SIGW(epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack,95,0,3);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInB,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusRegA,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusRegB,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutA,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutB,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDirectMOSI,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDirectMISO,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataMOSI,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataMISO,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalDataMISO,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wInternalDataMOSI,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDistributionMOSI,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataOutMISO,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataOutMOSI,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wTrashMISO,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rDataOut,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__tbram__DOT__rDataOut,31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__tbsdram__DOT__rDataOut,31,0);
    VL_SIG(epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI,31,0);
    VL_SIG(epRISC_coreEmu__DOT__controller__DOT__rInternalMOSIBuffer,31,0);
    VL_SIG64(epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegR,32,0);
    VL_SIG64(epRISC_coreEmu__DOT__machine__DOT__core__DOT__rALUOut,32,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents[256],31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents[256],31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rContents[256],31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[4096],31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__tbram__DOT__rContents[4096],31,0);
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__tbsdram__DOT__rContents[8388608],31,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rContents[4096],15,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[3072],15,0);
    VL_SIG(epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__rContents[256],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIG8(__Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[512],0,0);
    static VL_ST_SIG8(__Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[64],4,0);
    static VL_ST_SIG8(__Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[32],4,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bus____pinNumber2,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcram____pinNumber1,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcsdram____pinNumber1,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT____Vcellinp__registers____pinNumber2,7,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__core__DOT____Vcellinp__registers____pinNumber1,7,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__bus__DOT____Vcellinp__bufferMISO____pinNumber7,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__machine__DOT__bus__DOT____Vcellinp__bufferMOSI____pinNumber7,0,0);
    VL_SIG8(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber7,0,0);
    VL_SIG8(__Vtableidx2,5,0);
    VL_SIG8(__Vtableidx3,4,0);
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState,3,0);
    VL_SIG8(__Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v0,7,0);
    VL_SIG8(__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v0,0,0);
    VL_SIG8(__Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v1,7,0);
    VL_SIG8(__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v1,0,0);
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockSto,4,0);
    VL_SIG8(__Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v0,7,0);
    VL_SIG8(__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v0,0,0);
    VL_SIG8(__Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rContents__v0,7,0);
    VL_SIG8(__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rContents__v0,0,0);
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState,4,0);
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockAck,4,0);
    VL_SIG8(__Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v1,7,0);
    VL_SIG8(__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v1,0,0);
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__controller__DOT__rPipeState,4,0);
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState,3,0);
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountAck,4,0);
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState,3,0);
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountAck,4,0);
    VL_SIG8(__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset,0,0);
    VL_SIG8(__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset,0,0);
    VL_SIG8(__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk,0,0);
    VL_SIG8(__Vclklast__TOP__iBoardClock,0,0);
    VL_SIG8(__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock,0,0);
    VL_SIG8(__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset,0,0);
    VL_SIG8(__Vclklast__TOP__epRISC_coreEmu__DOT__controller__DOT__wSPIClock,0,0);
    VL_SIG8(__Vclklast__TOP__epRISC_coreEmu__DOT__controller__DOT__wSerialClock,0,0);
    VL_SIG8(__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock,0,0);
    VL_SIG8(__Vclklast__TOP__epRISC_coreEmu__DOT__oBusClock,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset,0,0);
    VL_SIG8(__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk,0,0);
    VL_SIG8(__Vchglast__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset,0,0);
    VL_SIG8(__Vchglast__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset,0,0);
    VL_SIG8(__Vchglast__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk,0,0);
    //char	__VpadToAlign33606057[1];
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__oData__out__en16,15,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber1,11,0);
    VL_SIG16(epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vrom____pinNumber1,11,0);
    VL_SIG16(__Vtableidx1,8,0);
    //char	__VpadToAlign33606066[2];
    VL_SIG(epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bData__out__en0,31,0);
    VL_SIG(epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__out0,31,0);
    VL_SIG(epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__en0,31,0);
    VL_SIG(__Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v0,31,0);
    VL_SIG(__Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v1,31,0);
    VL_SIG(__Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v0,31,0);
    VL_SIG(__Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rContents__v0,31,0);
    VL_SIG(__Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v1,31,0);
    VL_SIG(__Vchglast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusData,31,0);
    VL_SIG64(__Vm_traceActivity,63,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign33606116[4];
    VepRISC_coreEmu__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VepRISC_coreEmu& operator= (const VepRISC_coreEmu&);	///< Copying not allowed
    VepRISC_coreEmu(const VepRISC_coreEmu&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VepRISC_coreEmu(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VepRISC_coreEmu();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VepRISC_coreEmu__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VepRISC_coreEmu__Syms* symsp, bool first);
  private:
    static QData	_change_request(VepRISC_coreEmu__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__36(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_combo__TOP__52(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_combo__TOP__56(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_combo__TOP__60(VepRISC_coreEmu__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VepRISC_coreEmu__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_eval_initial(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_eval_settle(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_initial__TOP__13(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_initial__TOP__30(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_initial__TOP__4(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__24(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__34(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__35(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__37(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__44(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__48(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__51(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__53(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__54(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__57(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__58(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__10(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__11(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__12(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__14(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__15(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__16(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__17(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__19(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__20(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__21(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__22(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__23(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__25(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__26(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__27(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__28(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__29(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__32(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__33(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__38(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__39(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__40(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__41(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__42(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__45(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__46(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__47(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__5(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__50(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__7(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__2(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__31(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__43(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__49(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__55(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__59(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	traceChgThis(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__10(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__11(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__12(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__13(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__14(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__15(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__16(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__17(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__18(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__19(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__20(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__21(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__22(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__23(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__24(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__25(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__26(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__27(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__28(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__29(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__30(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__31(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__32(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__33(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__34(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__35(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__36(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__37(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__38(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__39(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__40(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__41(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__42(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__43(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__44(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__45(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__46(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__47(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__48(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__49(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__5(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__50(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__51(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__52(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__53(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__54(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__55(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__56(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__6(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__7(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__8(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__9(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
