// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VepRISC_coreEmu.h for the primary calling header

#include "VepRISC_coreEmu_epRISC_sysXMaster.h" // For This
#include "VepRISC_coreEmu__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES

VL_ST_SIG8(VepRISC_coreEmu_epRISC_sysXMaster::__Vtable1___PVT__rPipeNextState[64],4,0);

//--------------------

VL_CTOR_IMP(VepRISC_coreEmu_epRISC_sysXMaster) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VepRISC_coreEmu_epRISC_sysXMaster::__Vconfigure(VepRISC_coreEmu__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VepRISC_coreEmu_epRISC_sysXMaster::~VepRISC_coreEmu_epRISC_sysXMaster() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_settle__TOP__epRISC_coreEmu__machine__bus__1(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_settle__TOP__epRISC_coreEmu__machine__bus__1\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__oBusClock 
	= ((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState)) 
	   | (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rDerivedClock));
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__3(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__3\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdly__rMasterClockCount 
	= vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rMasterClockCount;
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdly__rDerivedClock 
	= vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rDerivedClock;
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:134
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdly__rMasterClockCount 
	= (0xfffU & ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bus____pinNumber2)
		      ? 0U : ((((0U == (0xfU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)) 
				& (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite)) 
			       & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wEnableBusControl))
			       ? 0U : ((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rMasterClockCount))
				        ? 0U : ((IData)(1U) 
						+ (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rMasterClockCount))))));
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:148
    if (vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bus____pinNumber2) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdly__rDerivedClock = 0U;
    } else {
	if ((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rMasterClockCount))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdly__rDerivedClock 
		= (1U & (~ (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rDerivedClock)));
	}
    }
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rMasterClockCount 
	= vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdly__rMasterClockCount;
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rDerivedClock 
	= vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdly__rDerivedClock;
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__4(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__4\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:268
    if (vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bus____pinNumber2) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rDirectMOSI = 0U;
    } else {
	if ((((1U == (0xfU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)) 
	      & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite)) 
	     & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wEnableBusControl))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rDirectMOSI 
		= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusData;
	}
    }
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__5(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__5\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdly__rLockSto 
	= vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rLockSto;
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvset__bufferMOSI__DOT__rContents__v0 = 0U;
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:44
    if ((1U & (~ (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vcellinp__bufferMISO____pinNumber7)))) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDataOutMISO 
	    = vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__bufferMISO__DOT__rContents
	    [vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rCounterMISO];
    }
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:32
    if (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vcellinp__bufferMOSI____pinNumber7) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvval__bufferMOSI__DOT__rContents__v0 
	    = vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDataMOSI;
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvset__bufferMOSI__DOT__rContents__v0 = 1U;
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvdim0__bufferMOSI__DOT__rContents__v0 
	    = vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rCounterMOSI;
    }
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:44
    if ((1U & (~ (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vcellinp__bufferMOSI____pinNumber7)))) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDataOutMOSI 
	    = vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__bufferMOSI__DOT__rContents
	    [vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rCounterMOSI];
    }
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__6(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__6\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdly__rPipeState 
	= vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState;
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdly__rLockAck 
	= vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rLockAck;
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:50
    if ((7U != (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wTrashMISO 
	    = vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__bufferMISO__DOT__rContents
	    [vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rInternalCounterMISO];
    }
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:50
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wInternalDataMOSI 
	= vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__bufferMOSI__DOT__rContents
	[vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rInternalCounterMOSI];
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__7(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__7\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:216
    if (vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bus____pinNumber2) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rInternalCounterMOSI = 0U;
    } else {
	if (((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState)) 
	     & (0U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipePrevState)))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rInternalCounterMOSI 
		= vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rCounterMOSI;
	}
    }
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:257
    if (vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bus____pinNumber2) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rTransferCount = 0U;
    } else {
	if (((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState)) 
	     & (0U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipePrevState)))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rTransferCount 
		= (0xffU & (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig 
			    >> 8U));
	}
    }
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:277
    if (vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bus____pinNumber2) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rDirectMISO = 0U;
    } else {
	if ((((2U == (0xfU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)) 
	      & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite)) 
	     & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wEnableBusControl))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rDirectMISO 
		= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusData;
	}
	if ((((vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig 
	       >> 1U) | vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig) 
	     & (7U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState)))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rDirectMISO 
		= vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rInternalDataMISO;
	}
    }
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__8(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__8\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvset__bufferMISO__DOT__rContents__v1 = 0U;
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvset__bufferMISO__DOT__rContents__v0 = 0U;
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__9(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__9\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYSPOST at ../../../firmware/core/sysx_v1r0.v:34
    if (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvset__bufferMOSI__DOT__rContents__v0) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__bufferMOSI__DOT__rContents[vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvdim0__bufferMOSI__DOT__rContents__v0] 
	    = vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvval__bufferMOSI__DOT__rContents__v0;
    }
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:32
    if (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vcellinp__bufferMISO____pinNumber7) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvval__bufferMISO__DOT__rContents__v1 
	    = vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDataMISO;
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvset__bufferMISO__DOT__rContents__v1 = 1U;
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvdim0__bufferMISO__DOT__rContents__v1 
	    = vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rCounterMISO;
    }
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__10(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__10\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:196
    if (vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bus____pinNumber2) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rCounterMOSI = 0U;
    } else {
	if ((((3U == (0xfU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)) 
	      & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite)) 
	     & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wEnableBusControl))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rCounterMOSI 
		= (0xffU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusData);
	}
    }
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__11(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__11\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:38
    if ((7U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvval__bufferMISO__DOT__rContents__v0 
	    = vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rInternalDataMISO;
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvset__bufferMISO__DOT__rContents__v0 = 1U;
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvdim0__bufferMISO__DOT__rContents__v0 
	    = vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rInternalCounterMISO;
    }
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__12(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__12\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYSPOST at ../../../firmware/core/sysx_v1r0.v:40
    if (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvset__bufferMISO__DOT__rContents__v0) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__bufferMISO__DOT__rContents[vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvdim0__bufferMISO__DOT__rContents__v0] 
	    = vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvval__bufferMISO__DOT__rContents__v0;
    }
    if (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvset__bufferMISO__DOT__rContents__v1) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__bufferMISO__DOT__rContents[vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvdim0__bufferMISO__DOT__rContents__v1] 
	    = vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdlyvval__bufferMISO__DOT__rContents__v1;
    }
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__13(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__13\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:288
    if (vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bus____pinNumber2) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rInternalDataMISO = 0U;
    } else {
	if ((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rInternalDataMISO 
		= ((0xffffff00U & vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rInternalDataMISO) 
		   | (0xffU & ((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState))
			        ? (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wInternalMISO)
			        : ((3U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState))
				    ? ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wInternalMISO) 
				       >> 8U) : 0U))));
	}
	if ((3U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rInternalDataMISO 
		= ((0xffff00ffU & vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rInternalDataMISO) 
		   | (0xff00U & (((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState))
				   ? (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wInternalMISO)
				   : ((3U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState))
				       ? ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wInternalMISO) 
					  >> 8U) : 0U)) 
				 << 8U)));
	}
	if ((4U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rInternalDataMISO 
		= ((0xff00ffffU & vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rInternalDataMISO) 
		   | (0xff0000U & (((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState))
				     ? (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wInternalMISO)
				     : ((3U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState))
					 ? ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wInternalMISO) 
					    >> 8U) : 0U)) 
				   << 0x10U)));
	}
	if ((5U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rInternalDataMISO 
		= ((0xffffffU & vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rInternalDataMISO) 
		   | (0xff000000U & (((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState))
				       ? (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wInternalMISO)
				       : ((3U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState))
					   ? ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wInternalMISO) 
					      >> 8U)
					   : 0U)) << 0x18U)));
	}
    }
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:205
    if (vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bus____pinNumber2) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rInternalCounterMISO = 0U;
    } else {
	if (((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState)) 
	     & (0U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipePrevState)))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rInternalCounterMISO 
		= vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rCounterMISO;
	}
    }
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__14(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__14\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:158
    if (vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bus____pinNumber2) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipePrevState = 0U;
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdly__rPipeState = 0U;
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdly__rLockAck = 0U;
    } else {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipePrevState 
	    = vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState;
	if ((5U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdly__rLockAck 
		= (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rLockAck)));
	}
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdly__rPipeState 
	    = vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeNextState;
    }
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__15(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__15\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:187
    if (vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bus____pinNumber2) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rCounterMISO = 0U;
    } else {
	if (((5U == (0xfU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)) 
	     & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rCounterMISO 
		= (0xffU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusData);
	}
    }
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__16(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__16\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:229
    if (vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bus____pinNumber2) {
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig = 0U;
	vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdly__rLockSto = 0U;
    } else {
	if (((((IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rLockAck) 
	       > (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rLockSto)) 
	      | ((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rLockAck)) 
		 & (0x1fU == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rLockSto)))) 
	     & (0U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState)))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdly__rLockSto 
		= vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rLockAck;
	}
	if (((((0U == (0xfU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)) 
	       & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite)) 
	      & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wEnableBusControl)) 
	     & (0U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState)))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig 
		= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusData;
	}
	if ((5U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig 
		= (0xfffffffeU & vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig);
	}
	if ((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig 
		= (2U | vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig);
	}
	if ((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig 
		= (0xfffffffdU & vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig);
	}
    }
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rLockSto 
	= vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdly__rLockSto;
}

void VepRISC_coreEmu_epRISC_sysXMaster::_settle__TOP__epRISC_coreEmu__machine__bus__17(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_settle__TOP__epRISC_coreEmu__machine__bus__17\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDistributionMOSI 
	= ((1U & (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig 
		  | (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig 
		     >> 1U))) ? vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rDirectMOSI
	    : vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wInternalDataMOSI);
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:172
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vtableidx1 
	= ((0x20U & (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig 
		     << 5U)) | (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState));
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeNextState 
	= vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vtable1___PVT__rPipeNextState
	[vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vtableidx1];
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__18(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_sequent__TOP__epRISC_coreEmu__machine__bus__18\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rLockAck 
	= vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdly__rLockAck;
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState 
	= vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vdly__rPipeState;
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_combo__TOP__epRISC_coreEmu__machine__bus__19(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_combo__TOP__epRISC_coreEmu__machine__bus__19\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:172
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vtableidx1 
	= ((0x20U & (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig 
		     << 5U)) | (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState));
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeNextState 
	= vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vtable1___PVT__rPipeNextState
	[vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vtableidx1];
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_multiclk__TOP__epRISC_coreEmu__machine__bus__20(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_multiclk__TOP__epRISC_coreEmu__machine__bus__20\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vcellinp__bufferMISO____pinNumber7 
	= ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite) 
	   & (6U == (0xfU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)));
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vcellinp__bufferMOSI____pinNumber7 
	= ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite) 
	   & (4U == (0xfU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)));
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_multiclk__TOP__epRISC_coreEmu__machine__bus__21(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_multiclk__TOP__epRISC_coreEmu__machine__bus__21\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDistributionMOSI 
	= ((1U & (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig 
		  | (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig 
		     >> 1U))) ? vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rDirectMOSI
	    : vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wInternalDataMOSI);
}

void VepRISC_coreEmu_epRISC_sysXMaster::_settle__TOP__epRISC_coreEmu__machine__bus__22(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_settle__TOP__epRISC_coreEmu__machine__bus__22\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vcellinp__bufferMISO____pinNumber7 
	= ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite) 
	   & (6U == (0xfU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)));
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__Vcellinp__bufferMOSI____pinNumber7 
	= ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite) 
	   & (4U == (0xfU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)));
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDataMISO 
	= (((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite) 
	    & (6U == (0xfU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)))
	    ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusData
	    : vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDataOutMISO);
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDataMOSI 
	= (((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite) 
	    & (4U == (0xfU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)))
	    ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusData
	    : vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDataOutMOSI);
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_settle__TOP__epRISC_coreEmu__machine__bus__23(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_settle__TOP__epRISC_coreEmu__machine__bus__23\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.bData__out__en0 
	= ((1U & ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite) 
		  | (~ (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wEnableBusControl))))
	    ? 0U : 0xffffffffU);
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_sysXMaster::_combo__TOP__epRISC_coreEmu__machine__bus__24(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_combo__TOP__epRISC_coreEmu__machine__bus__24\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDataMISO 
	= (((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite) 
	    & (6U == (0xfU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)))
	    ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusData
	    : vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDataOutMISO);
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDataMOSI 
	= (((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite) 
	    & (4U == (0xfU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)))
	    ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusData
	    : vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDataOutMOSI);
}

void VepRISC_coreEmu_epRISC_sysXMaster::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_ctor_var_reset\n"); );
    // Body
    __PVT__iClock = VL_RAND_RESET_I(1);
    __PVT__iReset = VL_RAND_RESET_I(1);
    __PVT__iWrite = VL_RAND_RESET_I(1);
    __PVT__iEnable = VL_RAND_RESET_I(1);
    iMasterClock = VL_RAND_RESET_I(1);
    __PVT__iBusInterrupt = VL_RAND_RESET_I(1);
    __PVT__iAddress = VL_RAND_RESET_I(4);
    __PVT__iBusMISO = VL_RAND_RESET_I(8);
    __PVT__oInterrupt = VL_RAND_RESET_I(1);
    __PVT__oBusClock = VL_RAND_RESET_I(1);
    __PVT__oDebug = VL_RAND_RESET_I(1);
    __PVT__oBusSelect = VL_RAND_RESET_I(2);
    __PVT__oBusMOSI = VL_RAND_RESET_I(8);
    __PVT__bData = VL_RAND_RESET_I(32);
    __PVT__rCounterMISO = VL_RAND_RESET_I(8);
    __PVT__rCounterMOSI = VL_RAND_RESET_I(8);
    __PVT__rInternalCounterMISO = VL_RAND_RESET_I(8);
    __PVT__rInternalCounterMOSI = VL_RAND_RESET_I(8);
    __PVT__rTransferCount = VL_RAND_RESET_I(8);
    __PVT__rConfig = VL_RAND_RESET_I(32);
    __PVT__rDirectMOSI = VL_RAND_RESET_I(32);
    __PVT__rDirectMISO = VL_RAND_RESET_I(32);
    __PVT__wDataMOSI = VL_RAND_RESET_I(32);
    __PVT__wDataMISO = VL_RAND_RESET_I(32);
    __PVT__rDerivedClock = VL_RAND_RESET_I(1);
    __PVT__rMasterClockCount = VL_RAND_RESET_I(12);
    __PVT__rPipeState = VL_RAND_RESET_I(5);
    __PVT__rPipePrevState = VL_RAND_RESET_I(5);
    __PVT__rPipeNextState = VL_RAND_RESET_I(5);
    __PVT__rLockAck = VL_RAND_RESET_I(5);
    __PVT__rLockSto = VL_RAND_RESET_I(5);
    __PVT__rInternalDataMISO = VL_RAND_RESET_I(32);
    __PVT__wInternalDataMOSI = VL_RAND_RESET_I(32);
    __PVT__wDistributionMOSI = VL_RAND_RESET_I(32);
    __PVT__wDataOutMISO = VL_RAND_RESET_I(32);
    __PVT__wDataOutMOSI = VL_RAND_RESET_I(32);
    __PVT__wTrashMISO = VL_RAND_RESET_I(32);
    __Vcellinp__bufferMISO____pinNumber7 = VL_RAND_RESET_I(1);
    __Vcellinp__bufferMOSI____pinNumber7 = VL_RAND_RESET_I(1);
    bData__out = VL_RAND_RESET_I(32);
    bData__en = VL_RAND_RESET_I(32);
    bData__out__en0 = VL_RAND_RESET_I(32);
    __PVT__bufferMISO__DOT__rClr = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    __PVT__bufferMISO__DOT__rContents[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__bufferMOSI__DOT__rClr = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    __PVT__bufferMOSI__DOT__rContents[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vtableidx1 = VL_RAND_RESET_I(6);
    __Vtable1___PVT__rPipeNextState[0] = 0U;
    __Vtable1___PVT__rPipeNextState[1] = 2U;
    __Vtable1___PVT__rPipeNextState[2] = 3U;
    __Vtable1___PVT__rPipeNextState[3] = 4U;
    __Vtable1___PVT__rPipeNextState[4] = 5U;
    __Vtable1___PVT__rPipeNextState[5] = 6U;
    __Vtable1___PVT__rPipeNextState[6] = 7U;
    __Vtable1___PVT__rPipeNextState[7] = 0U;
    __Vtable1___PVT__rPipeNextState[8] = 0U;
    __Vtable1___PVT__rPipeNextState[9] = 0U;
    __Vtable1___PVT__rPipeNextState[10] = 0U;
    __Vtable1___PVT__rPipeNextState[11] = 0U;
    __Vtable1___PVT__rPipeNextState[12] = 0U;
    __Vtable1___PVT__rPipeNextState[13] = 0U;
    __Vtable1___PVT__rPipeNextState[14] = 0U;
    __Vtable1___PVT__rPipeNextState[15] = 0U;
    __Vtable1___PVT__rPipeNextState[16] = 0U;
    __Vtable1___PVT__rPipeNextState[17] = 0U;
    __Vtable1___PVT__rPipeNextState[18] = 0U;
    __Vtable1___PVT__rPipeNextState[19] = 0U;
    __Vtable1___PVT__rPipeNextState[20] = 0U;
    __Vtable1___PVT__rPipeNextState[21] = 0U;
    __Vtable1___PVT__rPipeNextState[22] = 0U;
    __Vtable1___PVT__rPipeNextState[23] = 0U;
    __Vtable1___PVT__rPipeNextState[24] = 0U;
    __Vtable1___PVT__rPipeNextState[25] = 0U;
    __Vtable1___PVT__rPipeNextState[26] = 0U;
    __Vtable1___PVT__rPipeNextState[27] = 0U;
    __Vtable1___PVT__rPipeNextState[28] = 0U;
    __Vtable1___PVT__rPipeNextState[29] = 0U;
    __Vtable1___PVT__rPipeNextState[30] = 0U;
    __Vtable1___PVT__rPipeNextState[31] = 0U;
    __Vtable1___PVT__rPipeNextState[32] = 1U;
    __Vtable1___PVT__rPipeNextState[33] = 2U;
    __Vtable1___PVT__rPipeNextState[34] = 3U;
    __Vtable1___PVT__rPipeNextState[35] = 4U;
    __Vtable1___PVT__rPipeNextState[36] = 5U;
    __Vtable1___PVT__rPipeNextState[37] = 6U;
    __Vtable1___PVT__rPipeNextState[38] = 7U;
    __Vtable1___PVT__rPipeNextState[39] = 0U;
    __Vtable1___PVT__rPipeNextState[40] = 0U;
    __Vtable1___PVT__rPipeNextState[41] = 0U;
    __Vtable1___PVT__rPipeNextState[42] = 0U;
    __Vtable1___PVT__rPipeNextState[43] = 0U;
    __Vtable1___PVT__rPipeNextState[44] = 0U;
    __Vtable1___PVT__rPipeNextState[45] = 0U;
    __Vtable1___PVT__rPipeNextState[46] = 0U;
    __Vtable1___PVT__rPipeNextState[47] = 0U;
    __Vtable1___PVT__rPipeNextState[48] = 0U;
    __Vtable1___PVT__rPipeNextState[49] = 0U;
    __Vtable1___PVT__rPipeNextState[50] = 0U;
    __Vtable1___PVT__rPipeNextState[51] = 0U;
    __Vtable1___PVT__rPipeNextState[52] = 0U;
    __Vtable1___PVT__rPipeNextState[53] = 0U;
    __Vtable1___PVT__rPipeNextState[54] = 0U;
    __Vtable1___PVT__rPipeNextState[55] = 0U;
    __Vtable1___PVT__rPipeNextState[56] = 0U;
    __Vtable1___PVT__rPipeNextState[57] = 0U;
    __Vtable1___PVT__rPipeNextState[58] = 0U;
    __Vtable1___PVT__rPipeNextState[59] = 0U;
    __Vtable1___PVT__rPipeNextState[60] = 0U;
    __Vtable1___PVT__rPipeNextState[61] = 0U;
    __Vtable1___PVT__rPipeNextState[62] = 0U;
    __Vtable1___PVT__rPipeNextState[63] = 0U;
    __Vdly__rMasterClockCount = VL_RAND_RESET_I(12);
    __Vdly__rDerivedClock = VL_RAND_RESET_I(1);
    __Vdly__rPipeState = VL_RAND_RESET_I(5);
    __Vdly__rLockAck = VL_RAND_RESET_I(5);
    __Vdlyvdim0__bufferMISO__DOT__rContents__v0 = VL_RAND_RESET_I(8);
    __Vdlyvval__bufferMISO__DOT__rContents__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__bufferMISO__DOT__rContents__v0 = VL_RAND_RESET_I(1);
    __Vdly__rLockSto = VL_RAND_RESET_I(5);
    __Vdlyvdim0__bufferMISO__DOT__rContents__v1 = VL_RAND_RESET_I(8);
    __Vdlyvval__bufferMISO__DOT__rContents__v1 = VL_RAND_RESET_I(32);
    __Vdlyvset__bufferMISO__DOT__rContents__v1 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__bufferMOSI__DOT__rContents__v0 = VL_RAND_RESET_I(8);
    __Vdlyvval__bufferMOSI__DOT__rContents__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__bufferMOSI__DOT__rContents__v0 = VL_RAND_RESET_I(1);
}

void VepRISC_coreEmu_epRISC_sysXMaster::_configure_coverage(VepRISC_coreEmu__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("          VepRISC_coreEmu_epRISC_sysXMaster::_configure_coverage\n"); );
}
