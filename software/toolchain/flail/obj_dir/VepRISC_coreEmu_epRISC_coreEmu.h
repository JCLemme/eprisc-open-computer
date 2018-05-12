// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VepRISC_coreEmu.h for the primary calling header

#ifndef _VepRISC_coreEmu_epRISC_coreEmu_H_
#define _VepRISC_coreEmu_epRISC_coreEmu_H_

#include "verilated_heavy.h"
#include "VepRISC_coreEmu__Dpi.h"

class VepRISC_coreEmu__Syms;
class VepRISC_coreEmu_epRISC_machine;
class VerilatedVcd;

//----------

VL_MODULE(VepRISC_coreEmu_epRISC_coreEmu) {
  public:
    // CELLS
    VepRISC_coreEmu_epRISC_machine*	machine;
    
    // PORTS
    VL_IN8(iBoardClock,0,0);
    VL_IN8(iBoardReset,0,0);
    VL_IN8(iBoardSense,0,0);
    VL_IN8(iBoardReceive,0,0);
    VL_OUT8(oBoardAcknowledge,0,0);
    VL_OUT8(__PVT__oBoardTransmit,0,0);
    VL_IN8(bBoardDebug0,0,0);
    VL_IN8(bBoardDebug1,0,0);
    VL_IN8(bBoardDebug2,0,0);
    VL_IN8(bBoardDebug3,0,0);
    VL_IN8(bBoardDebug4,0,0);
    VL_IN8(bBoardDebug5,0,0);
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
    VL_IN8(bGPIO0,0,0);
    VL_IN8(bGPIO1,0,0);
    VL_IN8(bGPIO2,0,0);
    VL_IN8(bGPIO3,0,0);
    VL_IN8(bGPIO4,0,0);
    VL_IN8(bGPIO5,0,0);
    VL_IN8(bGPIO6,0,0);
    VL_IN8(bGPIO7,0,0);
    VL_IN8(bGPIO8,0,0);
    VL_IN8(bGPIO9,0,0);
    VL_IN8(bGPIO10,0,0);
    VL_IN8(bGPIO11,0,0);
    VL_IN8(bGPIO12,0,0);
    VL_IN8(bGPIO13,0,0);
    VL_IN8(bGPIO14,0,0);
    VL_IN8(bGPIO15,0,0);
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
    VL_IN8(bPS2Data,0,0);
    VL_IN8(bPS2Clock,0,0);
    VL_OUT8(bBoardDebug0__out,0,0);
    VL_OUT8(bBoardDebug0__en,0,0);
    VL_OUT8(bBoardDebug1__out,0,0);
    VL_OUT8(bBoardDebug1__en,0,0);
    VL_OUT8(bBoardDebug2__out,0,0);
    VL_OUT8(bBoardDebug2__en,0,0);
    VL_OUT8(bBoardDebug3__out,0,0);
    VL_OUT8(bBoardDebug3__en,0,0);
    VL_OUT8(bBoardDebug4__out,0,0);
    VL_OUT8(bBoardDebug4__en,0,0);
    VL_OUT8(bBoardDebug5__out,0,0);
    VL_OUT8(bBoardDebug5__en,0,0);
    VL_OUT8(bGPIO0__out,0,0);
    VL_OUT8(bGPIO0__en,0,0);
    VL_OUT8(bGPIO1__out,0,0);
    VL_OUT8(bGPIO1__en,0,0);
    VL_OUT8(bGPIO2__out,0,0);
    VL_OUT8(bGPIO2__en,0,0);
    VL_OUT8(bGPIO3__out,0,0);
    VL_OUT8(bGPIO3__en,0,0);
    VL_OUT8(bGPIO4__out,0,0);
    VL_OUT8(bGPIO4__en,0,0);
    VL_OUT8(bGPIO5__out,0,0);
    VL_OUT8(bGPIO5__en,0,0);
    VL_OUT8(bGPIO6__out,0,0);
    VL_OUT8(bGPIO6__en,0,0);
    VL_OUT8(bGPIO7__out,0,0);
    VL_OUT8(bGPIO7__en,0,0);
    VL_OUT8(bGPIO8__out,0,0);
    VL_OUT8(bGPIO8__en,0,0);
    VL_OUT8(bGPIO9__out,0,0);
    VL_OUT8(bGPIO9__en,0,0);
    VL_OUT8(bGPIO10__out,0,0);
    VL_OUT8(bGPIO10__en,0,0);
    VL_OUT8(bGPIO11__out,0,0);
    VL_OUT8(bGPIO11__en,0,0);
    VL_OUT8(bGPIO12__out,0,0);
    VL_OUT8(bGPIO12__en,0,0);
    VL_OUT8(bGPIO13__out,0,0);
    VL_OUT8(bGPIO13__en,0,0);
    VL_OUT8(bGPIO14__out,0,0);
    VL_OUT8(bGPIO14__en,0,0);
    VL_OUT8(bGPIO15__out,0,0);
    VL_OUT8(bGPIO15__en,0,0);
    VL_OUT8(bPS2Data__out,0,0);
    VL_OUT8(bPS2Data__en,0,0);
    VL_OUT8(bPS2Clock__out,0,0);
    VL_OUT8(bPS2Clock__en,0,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__controller__DOT__mBusReset,0,0);
    VL_SIG8(__PVT__controller__DOT__wInternalReset,0,0);
    VL_SIG8(__PVT__controller__DOT__wSerialClock,0,0);
    VL_SIG8(__PVT__controller__DOT__wSPIClock,0,0);
    VL_SIG8(__PVT__controller__DOT__bspi__DOT__rTxClk,0,0);
    VL_SIG8(__PVT__iBusInterrupt,0,0);
    VL_SIG8(__PVT__controller__DOT__mBusWrite,0,0);
    VL_SIG8(__PVT__controller__DOT__wEnableUART,0,0);
    VL_SIG8(__PVT__controller__DOT__wEnableSPI,0,0);
    VL_SIG8(__PVT__controller__DOT__wEnableVideo,0,0);
    VL_SIG8(__PVT__controller__DOT__wEnablePS2,0,0);
    VL_SIG8(__PVT__controller__DOT__wEnableRAM,0,0);
    VL_SIG8(__PVT__controller__DOT__rPipeState,4,0);
    VL_SIG8(__PVT__controller__DOT__rPipePrevState,4,0);
    VL_SIG8(__PVT__controller__DOT__rPipeNextState,4,0);
    VL_SIG8(__PVT__controller__DOT__oBvusInterrupt,0,0);
    VL_SIG8(__PVT__controller__DOT__oBrusInterrupt,0,0);
    VL_SIG8(__PVT__controller__DOT__clock__DOT__rClockSplit,6,0);
    VL_SIG8(__PVT__controller__DOT__uart__DOT__rSendState,3,0);
    VL_SIG8(__PVT__controller__DOT__uart__DOT__rSendNextState,3,0);
    VL_SIG8(__PVT__controller__DOT__uart__DOT__rSendPrevState,3,0);
    VL_SIG8(__PVT__controller__DOT__uart__DOT__rRecvState,3,0);
    VL_SIG8(__PVT__controller__DOT__uart__DOT__rRecvNextState,3,0);
    VL_SIG8(__PVT__controller__DOT__uart__DOT__rRecvPrevState,3,0);
    VL_SIG8(__PVT__controller__DOT__uart__DOT__rRecvCountSto,4,0);
    VL_SIG8(__PVT__controller__DOT__uart__DOT__rRecvCountAck,4,0);
    VL_SIG8(__PVT__controller__DOT__uart__DOT__rSendCountSto,4,0);
    VL_SIG8(__PVT__controller__DOT__uart__DOT__rSendCountAck,4,0);
    VL_SIG8(__PVT__controller__DOT__uart__DOT__rSendDataCnt,5,0);
    VL_SIG8(__PVT__controller__DOT__uart__DOT__rRecvDataCnt,5,0);
    VL_SIG8(__PVT__controller__DOT__uart__DOT__rSendDataBuf,7,0);
    VL_SIG8(__PVT__controller__DOT__uart__DOT__rRecvDataBuf,7,0);
    VL_SIG8(__PVT__controller__DOT__bspi__DOT__rClkDivide,1,0);
    VL_SIG8(__PVT__controller__DOT__bspi__DOT__rState,3,0);
    VL_SIG8(__PVT__controller__DOT__bspi__DOT__rPrevState,3,0);
    VL_SIG8(__PVT__controller__DOT__bspi__DOT__rNextState,3,0);
    VL_SIG8(__PVT__controller__DOT__bspi__DOT__rLockSto,4,0);
    VL_SIG8(__PVT__controller__DOT__bspi__DOT__rLockAck,4,0);
    VL_SIG8(__PVT__controller__DOT__bspi__DOT__rDataBuf,7,0);
    VL_SIG8(__PVT__controller__DOT__bspi__DOT__tmpClock,0,0);
    VL_SIG8(__PVT__controller__DOT__bvga__DOT__rRowSel,3,0);
    VL_SIG8(__PVT__controller__DOT__bvga__DOT__rDataOutput,7,0);
    VL_SIG8(__PVT__controller__DOT__bvga__DOT__rColorOutput,7,0);
    //char	__VpadToAlign151[1];
    VL_SIG16(__PVT__controller__DOT__wInternalMISO,15,0);
    VL_SIG16(__PVT__controller__DOT__mBusData,15,0);
    VL_SIG16(__PVT__controller__DOT__gpio__DOT__rDirection,15,0);
    VL_SIG16(__PVT__controller__DOT__gpio__DOT__rInterrupt,15,0);
    VL_SIG16(__PVT__controller__DOT__gpio__DOT__rValue,15,0);
    VL_SIG16(__PVT__controller__DOT__uart__DOT__rControl,15,0);
    VL_SIG16(__PVT__controller__DOT__uart__DOT__rDataIn,15,0);
    VL_SIG16(__PVT__controller__DOT__uart__DOT__rDataOut,15,0);
    VL_SIG16(__PVT__controller__DOT__bspi__DOT__rControl,15,0);
    VL_SIG16(__PVT__controller__DOT__bspi__DOT__rDataIn,15,0);
    VL_SIG16(__PVT__controller__DOT__bspi__DOT__rDataOut,15,0);
    VL_SIG16(__PVT__controller__DOT__bvga__DOT__rPulseX,9,0);
    VL_SIG16(__PVT__controller__DOT__bvga__DOT__rPulseY,9,0);
    VL_SIG16(__PVT__controller__DOT__bvga__DOT__rTempX,11,0);
    VL_SIG16(__PVT__controller__DOT__bvga__DOT__rTempY,11,0);
    VL_SIG16(__PVT__controller__DOT__bvga__DOT__rFramePtr,11,0);
    VL_SIG16(__PVT__controller__DOT__bvga__DOT__rConfig,15,0);
    VL_SIG16(__PVT__controller__DOT__bvga__DOT__rRow,15,0);
    VL_SIG16(__PVT__controller__DOT__bvga__DOT__rColumn,15,0);
    VL_SIG16(__PVT__controller__DOT__bvga__DOT__wCharRAMData,15,0);
    VL_SIG16(__PVT__controller__DOT__bvga__DOT__wCharRAMFrame,15,0);
    VL_SIG16(__PVT__controller__DOT__bvga__DOT__vram__DOT__rClr,12,0);
    VL_SIG16(__PVT__controller__DOT__bvga__DOT__vrom__DOT__rDataOut,15,0);
    //char	__VpadToAlign198[2];
    VL_SIG(__PVT__controller__DOT__rInternalMOSI,31,0);
    VL_SIG(__PVT__controller__DOT__rInternalMOSIBuffer,31,0);
    VL_SIG16(__PVT__controller__DOT__bvga__DOT__vram__DOT__rContents[4096],15,0);
    VL_SIG16(__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[3072],15,0);
    VL_SIG(__PVT__controller__DOT__bmem__DOT__rContents[256],31,0);
    
    // LOCAL VARIABLES
    static VL_ST_SIG8(__Vtable1___PVT__controller__DOT__rPipeNextState[32],4,0);
    VL_SIG8(controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber7,0,0);
    VL_SIG8(__Vtableidx1,4,0);
    VL_SIG8(__Vdly__controller__DOT__rPipeState,4,0);
    VL_SIG8(__Vdly__controller__DOT__clock__DOT__rClockSplit,6,0);
    VL_SIG8(__Vdlyvset__controller__DOT__bvga__DOT__vram__DOT__rContents__v0,0,0);
    VL_SIG8(__Vdly__controller__DOT__uart__DOT__rRecvCountSto,4,0);
    VL_SIG8(__Vdly__controller__DOT__uart__DOT__rSendCountSto,4,0);
    VL_SIG8(__Vdly__controller__DOT__uart__DOT__rSendState,3,0);
    VL_SIG8(__Vdly__controller__DOT__uart__DOT__rSendCountAck,4,0);
    VL_SIG8(__Vdly__controller__DOT__uart__DOT__rSendDataCnt,5,0);
    VL_SIG8(__Vdly__controller__DOT__uart__DOT__rRecvState,3,0);
    VL_SIG8(__Vdly__controller__DOT__uart__DOT__rRecvCountAck,4,0);
    VL_SIG8(__Vdly__controller__DOT__uart__DOT__rRecvDataCnt,5,0);
    VL_SIG8(__Vdly__controller__DOT__bspi__DOT__rClkDivide,1,0);
    VL_SIG8(__Vdly__controller__DOT__bspi__DOT__rTxClk,0,0);
    VL_SIG8(__Vdly__controller__DOT__bspi__DOT__rState,3,0);
    VL_SIG8(__Vdly__controller__DOT__bspi__DOT__rLockAck,4,0);
    VL_SIG8(__Vdly__controller__DOT__bspi__DOT__rLockSto,4,0);
    VL_SIG8(__Vdly__controller__DOT__bvga__DOT__rRowSel,3,0);
    //char	__VpadToAlign15591[1];
    VL_SIG16(controller__DOT__gpio__DOT__oData__out__en16,15,0);
    VL_SIG16(controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber1,11,0);
    VL_SIG16(controller__DOT__bvga__DOT____Vcellinp__vrom____pinNumber1,11,0);
    VL_SIG16(__Vdly__controller__DOT__gpio__DOT__rValue,15,0);
    VL_SIG16(__Vdlyvdim0__controller__DOT__bvga__DOT__vram__DOT__rContents__v0,11,0);
    VL_SIG16(__Vdlyvval__controller__DOT__bvga__DOT__vram__DOT__rContents__v0,15,0);
    VL_SIG16(__Vdly__controller__DOT__bvga__DOT__rPulseX,9,0);
    VL_SIG16(__Vdly__controller__DOT__bvga__DOT__rPulseY,9,0);
    VL_SIG16(__Vdly__controller__DOT__bvga__DOT__rFramePtr,11,0);
    VL_SIG16(__Vdly__controller__DOT__bvga__DOT__rTempX,11,0);
    VL_SIG16(__Vdly__controller__DOT__bvga__DOT__rTempY,11,0);
    //char	__VpadToAlign15614[2];
    VL_SIG(controller__DOT__bmem__DOT__oData__out__out0,31,0);
    VL_SIG(controller__DOT__bmem__DOT__oData__out__en0,31,0);
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign15628[4];
    VepRISC_coreEmu__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VepRISC_coreEmu_epRISC_coreEmu& operator= (const VepRISC_coreEmu_epRISC_coreEmu&);	///< Copying not allowed
    VepRISC_coreEmu_epRISC_coreEmu(const VepRISC_coreEmu_epRISC_coreEmu&);	///< Copying not allowed
  public:
    VepRISC_coreEmu_epRISC_coreEmu(const char* name="TOP");
    ~VepRISC_coreEmu_epRISC_coreEmu();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VepRISC_coreEmu__Syms* symsp, bool first);
    static void	_combo__TOP__epRISC_coreEmu__17(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_combo__TOP__epRISC_coreEmu__25(VepRISC_coreEmu__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VepRISC_coreEmu__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_initial__TOP__epRISC_coreEmu__7(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__epRISC_coreEmu__16(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__epRISC_coreEmu__20(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__epRISC_coreEmu__23(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__epRISC_coreEmu__26(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__1(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__10(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__11(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__12(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__13(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__14(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__15(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__19(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__2(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__22(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__3(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__5(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__6(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__9(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__epRISC_coreEmu__18(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__epRISC_coreEmu__21(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__epRISC_coreEmu__24(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__epRISC_coreEmu__27(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__epRISC_coreEmu__8(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
