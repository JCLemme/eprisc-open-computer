// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VepRISC_coreEmu.h for the primary calling header

#ifndef _VepRISC_coreEmu_epRISC_sysXMaster_H_
#define _VepRISC_coreEmu_epRISC_sysXMaster_H_

#include "verilated_heavy.h"
#include "VepRISC_coreEmu__Dpi.h"

class VepRISC_coreEmu__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VepRISC_coreEmu_epRISC_sysXMaster) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__iClock,0,0);
    VL_IN8(iMasterClock,0,0);
    VL_OUT8(__PVT__oBusClock,0,0);
    VL_IN8(__PVT__iReset,0,0);
    VL_IN8(__PVT__iWrite,0,0);
    VL_IN8(__PVT__iEnable,0,0);
    VL_IN8(__PVT__iBusInterrupt,0,0);
    VL_IN8(__PVT__iAddress,3,0);
    VL_IN8(__PVT__iBusMISO,7,0);
    VL_OUT8(__PVT__oInterrupt,0,0);
    VL_OUT8(__PVT__oDebug,0,0);
    VL_OUT8(__PVT__oBusSelect,1,0);
    VL_OUT8(__PVT__oBusMOSI,7,0);
    //char	__VpadToAlign13[3];
    VL_IN(__PVT__bData,31,0);
    VL_OUT(bData__out,31,0);
    VL_OUT(bData__en,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__rDerivedClock,0,0);
    VL_SIG8(__PVT__rCounterMISO,7,0);
    VL_SIG8(__PVT__rCounterMOSI,7,0);
    VL_SIG8(__PVT__rInternalCounterMISO,7,0);
    VL_SIG8(__PVT__rInternalCounterMOSI,7,0);
    VL_SIG8(__PVT__rTransferCount,7,0);
    VL_SIG8(__PVT__rPipeState,4,0);
    VL_SIG8(__PVT__rPipePrevState,4,0);
    VL_SIG8(__PVT__rPipeNextState,4,0);
    VL_SIG8(__PVT__rLockAck,4,0);
    VL_SIG8(__PVT__rLockSto,4,0);
    VL_SIG8(__PVT__bufferMISO__DOT__rClr,7,0);
    VL_SIG8(__PVT__bufferMOSI__DOT__rClr,7,0);
    //char	__VpadToAlign45[1];
    VL_SIG16(__PVT__rMasterClockCount,11,0);
    VL_SIG(__PVT__rConfig,31,0);
    VL_SIG(__PVT__rDirectMOSI,31,0);
    VL_SIG(__PVT__rDirectMISO,31,0);
    VL_SIG(__PVT__wDataMOSI,31,0);
    VL_SIG(__PVT__wDataMISO,31,0);
    VL_SIG(__PVT__rInternalDataMISO,31,0);
    VL_SIG(__PVT__wInternalDataMOSI,31,0);
    VL_SIG(__PVT__wDistributionMOSI,31,0);
    VL_SIG(__PVT__wDataOutMISO,31,0);
    VL_SIG(__PVT__wDataOutMOSI,31,0);
    VL_SIG(__PVT__wTrashMISO,31,0);
    //char	__VpadToAlign92[4];
    VL_SIG(__PVT__bufferMISO__DOT__rContents[256],31,0);
    VL_SIG(__PVT__bufferMOSI__DOT__rContents[256],31,0);
    
    // LOCAL VARIABLES
    static VL_ST_SIG8(__Vtable1___PVT__rPipeNextState[64],4,0);
    VL_SIG8(__Vcellinp__bufferMISO____pinNumber7,0,0);
    VL_SIG8(__Vcellinp__bufferMOSI____pinNumber7,0,0);
    VL_SIG8(__Vtableidx1,5,0);
    VL_SIG8(__Vdly__rDerivedClock,0,0);
    VL_SIG8(__Vdly__rPipeState,4,0);
    VL_SIG8(__Vdly__rLockAck,4,0);
    VL_SIG8(__Vdlyvdim0__bufferMISO__DOT__rContents__v0,7,0);
    VL_SIG8(__Vdlyvset__bufferMISO__DOT__rContents__v0,0,0);
    VL_SIG8(__Vdly__rLockSto,4,0);
    VL_SIG8(__Vdlyvdim0__bufferMISO__DOT__rContents__v1,7,0);
    VL_SIG8(__Vdlyvset__bufferMISO__DOT__rContents__v1,0,0);
    VL_SIG8(__Vdlyvdim0__bufferMOSI__DOT__rContents__v0,7,0);
    VL_SIG8(__Vdlyvset__bufferMOSI__DOT__rContents__v0,0,0);
    //char	__VpadToAlign2161[1];
    VL_SIG16(__Vdly__rMasterClockCount,11,0);
    VL_SIG(bData__out__en0,31,0);
    VL_SIG(__Vdlyvval__bufferMISO__DOT__rContents__v0,31,0);
    VL_SIG(__Vdlyvval__bufferMISO__DOT__rContents__v1,31,0);
    VL_SIG(__Vdlyvval__bufferMOSI__DOT__rContents__v0,31,0);
    
    // INTERNAL VARIABLES
  private:
    VepRISC_coreEmu__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VepRISC_coreEmu_epRISC_sysXMaster& operator= (const VepRISC_coreEmu_epRISC_sysXMaster&);	///< Copying not allowed
    VepRISC_coreEmu_epRISC_sysXMaster(const VepRISC_coreEmu_epRISC_sysXMaster&);	///< Copying not allowed
  public:
    VepRISC_coreEmu_epRISC_sysXMaster(const char* name="TOP");
    ~VepRISC_coreEmu_epRISC_sysXMaster();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VepRISC_coreEmu__Syms* symsp, bool first);
    static void	_combo__TOP__epRISC_coreEmu__machine__bus__19(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_combo__TOP__epRISC_coreEmu__machine__bus__24(VepRISC_coreEmu__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VepRISC_coreEmu__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_multiclk__TOP__epRISC_coreEmu__machine__bus__20(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_multiclk__TOP__epRISC_coreEmu__machine__bus__21(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__bus__10(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__bus__11(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__bus__12(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__bus__13(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__bus__14(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__bus__15(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__bus__16(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__bus__18(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__bus__3(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__bus__4(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__bus__5(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__bus__6(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__bus__7(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__bus__8(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__epRISC_coreEmu__machine__bus__9(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__epRISC_coreEmu__machine__bus__1(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__epRISC_coreEmu__machine__bus__17(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__epRISC_coreEmu__machine__bus__22(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void	_settle__TOP__epRISC_coreEmu__machine__bus__23(VepRISC_coreEmu__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
