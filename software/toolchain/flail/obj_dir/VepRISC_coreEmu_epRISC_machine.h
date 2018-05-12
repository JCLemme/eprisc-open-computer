// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VepRISC_coreEmu.h for the primary calling header

#ifndef _VepRISC_coreEmu_epRISC_machine_H_
#define _VepRISC_coreEmu_epRISC_machine_H_

#include "verilated_heavy.h"
#include "VepRISC_coreEmu__Dpi.h"

class VepRISC_coreEmu__Syms;
class VepRISC_coreEmu_epRISC_sysXMaster;
class VerilatedVcd;

//----------

VL_MODULE(VepRISC_coreEmu_epRISC_machine) {
  public:
    // CELLS
    VepRISC_coreEmu_epRISC_sysXMaster*	bus;
    
    // PORTS
    VL_IN8(__PVT__iBoardClock,0,0);
    VL_OUT8(__PVT__oBusClock,0,0);
    VL_IN8(__PVT__iBoardReset,0,0);
    VL_IN8(__PVT__iBoardSense,0,0);
    VL_IN8(__PVT__iBoardReceive,0,0);
    VL_OUT8(__PVT__oBoardAcknowledge,0,0);
    VL_OUT8(__PVT__oBoardTransmit,0,0);
    VL_IN8(__PVT__bBoardDebug0,0,0);
    VL_IN8(__PVT__bBoardDebug2,0,0);
    VL_IN8(__PVT__bBoardDebug3,0,0);
    VL_IN8(__PVT__bBoardDebug4,0,0);
    VL_IN8(__PVT__bBoardDebug5,0,0);
    VL_IN8(__PVT__iBusInterrupt,0,0);
    VL_IN8(__PVT__iBusMISO,7,0);
    VL_OUT8(__PVT__oBusSelect,1,0);
    VL_OUT8(__PVT__oBusMOSI,7,0);
    VL_OUT8(__PVT__oMemoryCKE,0,0);
    VL_OUT8(__PVT__oMemoryCLK,0,0);
    VL_OUT8(__PVT__oMemoryWE,0,0);
    VL_OUT8(__PVT__oMemoryCAS,0,0);
    VL_OUT8(__PVT__oMemoryRAS,0,0);
    VL_OUT8(__PVT__oMemoryCS,0,0);
    VL_OUT8(__PVT__oMemoryBank,1,0);
    VL_OUT8(__PVT__oMemoryDQM,3,0);
    VL_OUT8(bBoardDebug0__out,0,0);
    VL_OUT8(bBoardDebug0__en,0,0);
    VL_OUT8(bBoardDebug2__out,0,0);
    VL_OUT8(bBoardDebug2__en,0,0);
    VL_OUT8(bBoardDebug3__out,0,0);
    VL_OUT8(bBoardDebug3__en,0,0);
    VL_OUT8(bBoardDebug4__out,0,0);
    VL_OUT8(bBoardDebug4__en,0,0);
    VL_OUT8(bBoardDebug5__out,0,0);
    VL_OUT8(bBoardDebug5__en,0,0);
    VL_OUT16(__PVT__oMemoryAddress,11,0);
    VL_IN(__PVT__bMemoryData,31,0);
    VL_OUT(bMemoryData__out,31,0);
    VL_OUT(bMemoryData__en,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__wCoreBusClock,0,0);
    VL_SIG8(__PVT__wCoreBusMemClock,0,0);
    VL_SIG8(__PVT__wCoreBusWrite,0,0);
    VL_SIG8(__PVT__wCoreBusAccess,0,0);
    VL_SIG8(__PVT__wSDRAMReady,0,0);
    VL_SIG8(__PVT__wEnableRAM,0,0);
    VL_SIG8(__PVT__wEnableBusControl,0,0);
    VL_SIG8(__PVT__wEnableSDRAM,0,0);
    VL_SIG8(__PVT__wCoreFlag,0,0);
    VL_SIG8(__PVT__clock__DOT__rClockSplit,1,0);
    VL_SIG8(__PVT__core__DOT__rExec,0,0);
    VL_SIG8(__PVT__core__DOT__rPipePrevState,3,0);
    VL_SIG8(__PVT__core__DOT__rPipeState,3,0);
    VL_SIG8(__PVT__core__DOT__rPipeNextState,3,0);
    VL_SIG8(__PVT__core__DOT__wALUOperation,4,0);
    VL_SIG8(__PVT__core__DOT__wBusInAddrA,7,0);
    VL_SIG8(__PVT__core__DOT__wBusInAddrB,7,0);
    VL_SIG8(__PVT__core__DOT__wBusOutAddrA,7,0);
    VL_SIG8(__PVT__core__DOT__wBusOutAddrB,7,0);
    VL_SIG8(__PVT__core__DOT__wBusOutWriteA,0,0);
    VL_SIG8(__PVT__core__DOT__wBusOutWriteB,0,0);
    VL_SIG8(__PVT__core__DOT__mBranchSaveStack,0,0);
    VL_SIG8(__PVT__core__DOT__mBranchLoadStack,0,0);
    VL_SIG8(__PVT__core__DOT__mBranchInterrupt,0,0);
    VL_SIG8(__PVT__core__DOT__mLoadLoad,0,0);
    VL_SIG8(__PVT__core__DOT__mLoadStore,0,0);
    VL_SIG8(__PVT__core__DOT__mDirectOR,0,0);
    VL_SIG8(__PVT__core__DOT__mALURegisters,0,0);
    VL_SIG8(__PVT__core__DOT__fCSHideRegs,0,0);
    VL_SIG8(__PVT__core__DOT__fCSFlagSet,0,0);
    VL_SIG8(__PVT__core__DOT__registers__DOT__debug,0,0);
    //char	__VpadToAlign83[1];
    VL_SIG16(__PVT__core__DOT__registers__DOT__rClr,8,0);
    //char	__VpadToAlign86[2];
    VL_SIG(__PVT__wCoreBusAddress,31,0);
    VL_SIG(__PVT__wCoreBusData,31,0);
    VL_SIG(__PVT__core__DOT__rRegIP,31,0);
    VL_SIG(__PVT__core__DOT__rRegSP,31,0);
    VL_SIG(__PVT__core__DOT__rRegCS,31,0);
    VL_SIG(__PVT__core__DOT__rRegGL,31,0);
    VL_SIG(__PVT__core__DOT__rRegA,31,0);
    VL_SIG(__PVT__core__DOT__rRegB,31,0);
    VL_SIG(__PVT__core__DOT__rRegM,31,0);
    VL_SIG(__PVT__core__DOT__rInst,31,0);
    VL_SIG(__PVT__core__DOT__rDataBuf,31,0);
    VL_SIG(__PVT__core__DOT__rRegInterruptBase,31,0);
    VL_SIGW(__PVT__core__DOT__rRegInterruptStack,95,0,3);
    VL_SIG(__PVT__core__DOT__wBusInB,31,0);
    VL_SIG(__PVT__core__DOT__wBusRegA,31,0);
    VL_SIG(__PVT__core__DOT__wBusRegB,31,0);
    VL_SIG(__PVT__core__DOT__wBusOutA,31,0);
    VL_SIG(__PVT__core__DOT__wBusOutB,31,0);
    VL_SIG(__PVT__tbrom__DOT__rDataOut,31,0);
    VL_SIG(__PVT__tbram__DOT__rDataOut,31,0);
    VL_SIG(__PVT__tbsdram__DOT__rDataOut,31,0);
    //char	__VpadToAlign180[4];
    VL_SIG64(__PVT__core__DOT__rRegR,32,0);
    VL_SIG64(__PVT__core__DOT__rALUOut,32,0);
    VL_SIG(__PVT__core__DOT__registers__DOT__rContents[256],31,0);
    VL_SIG(__PVT__tbrom__DOT__rContents[4096],31,0);
    VL_SIG(__PVT__tbram__DOT__rContents[4096],31,0);
    VL_SIG(__PVT__tbsdram__DOT__rContents[4096],31,0);
    
    // LOCAL VARIABLES
    static VL_ST_SIG8(__Vtable1___PVT__core__DOT__rExec[512],0,0);
    VL_SIG8(__Vcellinp__bus____pinNumber2,0,0);
    VL_SIG8(__Vcellinp__bcram____pinNumber1,0,0);
    VL_SIG8(__Vcellinp__bcsdram____pinNumber1,0,0);
    VL_SIG8(core__DOT____Vcellinp__registers____pinNumber2,7,0);
    VL_SIG8(core__DOT____Vcellinp__registers____pinNumber1,7,0);
    VL_SIG8(__Vdly__clock__DOT__rClockSplit,1,0);
    VL_SIG8(__Vdly__core__DOT__rPipeState,3,0);
    VL_SIG8(__Vdlyvdim0__core__DOT__registers__DOT__rContents__v0,7,0);
    VL_SIG8(__Vdlyvset__core__DOT__registers__DOT__rContents__v0,0,0);
    VL_SIG8(__Vdlyvdim0__core__DOT__registers__DOT__rContents__v1,7,0);
    VL_SIG8(__Vdlyvset__core__DOT__registers__DOT__rContents__v1,0,0);
    //char	__VpadToAlign50391[1];
    VL_SIG16(__Vtableidx1,8,0);
    //char	__VpadToAlign50394[2];
    VL_SIG(__Vdlyvval__core__DOT__registers__DOT__rContents__v0,31,0);
    VL_SIG(__Vdlyvval__core__DOT__registers__DOT__rContents__v1,31,0);
    VL_SIG(__Vdly__core__DOT__rRegIP,31,0);
    VL_SIG(__Vdly__core__DOT__rRegSP,31,0);
    VL_SIG(__Vdly__core__DOT__rRegCS,31,0);
    VL_SIGW(__Vdly__core__DOT__rRegInterruptStack,95,0,3);
    
    // INTERNAL VARIABLES
  private:
    VepRISC_coreEmu__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VepRISC_coreEmu_epRISC_machine& operator= (const VepRISC_coreEmu_epRISC_machine&);	///< Copying not allowed
    VepRISC_coreEmu_epRISC_machine(const VepRISC_coreEmu_epRISC_machine&);	///< Copying not allowed
  public:
    VepRISC_coreEmu_epRISC_machine(const char* name="TOP");
    ~VepRISC_coreEmu_epRISC_machine();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VepRISC_coreEmu__Syms* symsp, bool first);
    static void	_combo__TOP__epRISC_coreEmu__machine__18(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_combo__TOP__epRISC_coreEmu__machine__22(VepRISC_coreEmu__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VepRISC_coreEmu__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_initial__TOP__epRISC_coreEmu__machine__11(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_initial__TOP__epRISC_coreEmu__machine__3(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_initial__TOP__epRISC_coreEmu__machine__7(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__epRISC_coreEmu__machine__10(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__epRISC_coreEmu__machine__12(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__epRISC_coreEmu__machine__19(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__epRISC_coreEmu__machine__21(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__13(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__15(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__16(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__2(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__4(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__5(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__6(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__8(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__epRISC_coreEmu__machine__1(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__epRISC_coreEmu__machine__14(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__epRISC_coreEmu__machine__17(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__epRISC_coreEmu__machine__20(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__epRISC_coreEmu__machine__9(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
