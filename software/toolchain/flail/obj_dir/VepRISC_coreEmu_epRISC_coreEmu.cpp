// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VepRISC_coreEmu.h for the primary calling header

#include "VepRISC_coreEmu_epRISC_coreEmu.h" // For This
#include "VepRISC_coreEmu__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES

VL_ST_SIG8(VepRISC_coreEmu_epRISC_coreEmu::__Vtable1___PVT__controller__DOT__rPipeNextState[32],4,0);

//--------------------

VL_CTOR_IMP(VepRISC_coreEmu_epRISC_coreEmu) {
    VL_CELL (machine, VepRISC_coreEmu_epRISC_machine);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VepRISC_coreEmu_epRISC_coreEmu::__Vconfigure(VepRISC_coreEmu__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VepRISC_coreEmu_epRISC_coreEmu::~VepRISC_coreEmu_epRISC_coreEmu() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__1(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__1\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/io/video_v1r0.v:186
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rDataOut 
	= ((0xbffU >= (IData)(vlSymsp->TOP__epRISC_coreEmu.controller__DOT__bvga__DOT____Vcellinp__vrom____pinNumber1))
	    ? vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents
	   [vlSymsp->TOP__epRISC_coreEmu.controller__DOT__bvga__DOT____Vcellinp__vrom____pinNumber1]
	    : 0U);
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rRowSel 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rRowSel;
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rPulseX 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseX;
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rPulseY 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseY;
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rFramePtr 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rFramePtr;
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rTempX 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rTempX;
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rTempY 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rTempY;
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__clock__DOT__rClockSplit 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__clock__DOT__rClockSplit;
    // ALWAYS at ../../../firmware/io/video_v1r0.v:76
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rPulseX = 0U;
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rPulseY = 0U;
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rRowSel = 0U;
    } else {
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rPulseX 
	    = (0x3ffU & ((IData)(1U) + (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseX)));
	if ((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseX))) {
	    vlSymsp->TOP__epRISC_coreEmu.oVGAHorizontal = 1U;
	} else {
	    if ((0x10U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseX))) {
		vlSymsp->TOP__epRISC_coreEmu.oVGAHorizontal = 0U;
	    } else {
		if ((0x70U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseX))) {
		    vlSymsp->TOP__epRISC_coreEmu.oVGAHorizontal = 1U;
		} else {
		    if ((0x320U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseX))) {
			vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rPulseY 
			    = (0x3ffU & ((IData)(1U) 
					 + (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseY)));
			vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rRowSel 
			    = (0xfU & ((IData)(1U) 
				       + (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rRowSel)));
			vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rPulseX = 0U;
		    }
		}
	    }
	}
	if ((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseY))) {
	    vlSymsp->TOP__epRISC_coreEmu.oVGAVertical = 1U;
	} else {
	    if ((0xaU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseY))) {
		vlSymsp->TOP__epRISC_coreEmu.oVGAVertical = 0U;
	    } else {
		if ((0xcU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseY))) {
		    vlSymsp->TOP__epRISC_coreEmu.oVGAVertical = 1U;
		} else {
		    if ((0x20dU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseY))) {
			vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rPulseY = 0U;
			vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rRowSel = 0U;
		    }
		}
	    }
	}
	if ((0xcU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rRowSel))) {
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rRowSel = 0U;
	}
    }
    // ALWAYS at ../../../firmware/io/video_v1r0.v:103
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rDataOutput = 0U;
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rFramePtr = 0U;
    } else {
	if ((6U == (7U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseX)))) {
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rFramePtr 
		= (0xfffU & (((IData)(0x50U) * (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rTempY)) 
			     + (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rTempX)));
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rTempX 
		= (0xfffU & ((0x9aU > (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseX))
			      ? 0U : (((0x9aU <= (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseX)) 
				       & (0xa0U > (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseX)))
				       ? 1U : ((IData)(2U) 
					       + (0x7fU 
						  & (((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseX) 
						      - (IData)(0xa0U)) 
						     >> 3U))))));
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rTempY 
		= (0xfffU & VL_DIV_III(32, (0x3ffU 
					    & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseY) 
					       - (IData)(0x23U))), (IData)(0xcU)));
	} else {
	    if ((7U == (7U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseX)))) {
		vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rDataOutput 
		    = (0xffU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rDataOut));
		vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rColorOutput 
		    = (0xffU & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__wCharRAMFrame) 
				>> 8U));
	    }
	}
    }
    // ALWAYS at ../../../firmware/io/controller_v1r0.v:64
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__clock__DOT__rClockSplit 
	= (0x7fU & ((IData)(1U) + (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__clock__DOT__rClockSplit)));
    if ((8U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__clock__DOT__rClockSplit))) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wSerialClock 
	    = (1U & (~ (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wSerialClock)));
    }
    if ((0x1bU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__clock__DOT__rClockSplit))) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wSPIClock 
	    = (1U & (~ (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wSPIClock)));
    }
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rRowSel 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rRowSel;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rTempY 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rTempY;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rTempX 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rTempX;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseX 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rPulseX;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rPulseY 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rPulseY;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__clock__DOT__rClockSplit 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__clock__DOT__rClockSplit;
    // ALWAYS at ../../../firmware/io/video_v1r0.v:169
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__wCharRAMFrame 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vram__DOT__rContents
	[vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rFramePtr];
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rFramePtr 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bvga__DOT__rFramePtr;
    vlSymsp->TOP__epRISC_coreEmu.controller__DOT__bvga__DOT____Vcellinp__vrom____pinNumber1 
	= (((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rRowSel) 
	    << 8U) | (0xffU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__wCharRAMFrame)));
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__2(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__2\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu.__Vdlyvset__controller__DOT__bvga__DOT__vram__DOT__rContents__v0 = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue;
    // ALWAYS at ../../../firmware/io/controller_v1r0.v:35
    if (VL_UNLIKELY(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset)) {
	VL_WRITEF("Reset\n");
    } else {
	if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bmem__DOT__rContents[(0xffU 
										& (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
										>> 0x10U))] 
		= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI;
	}
    }
    // ALWAYS at ../../../firmware/io/video_v1r0.v:151
    if (vlSymsp->TOP__epRISC_coreEmu.controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber7) {
	vlSymsp->TOP__epRISC_coreEmu.__Vdlyvval__controller__DOT__bvga__DOT__vram__DOT__rContents__v0 
	    = vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusData;
	vlSymsp->TOP__epRISC_coreEmu.__Vdlyvset__controller__DOT__bvga__DOT__vram__DOT__rContents__v0 = 1U;
	vlSymsp->TOP__epRISC_coreEmu.__Vdlyvdim0__controller__DOT__bvga__DOT__vram__DOT__rContents__v0 
	    = vlSymsp->TOP__epRISC_coreEmu.controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber1;
    }
    // ALWAYS at ../../../firmware/io/video_v1r0.v:163
    if ((1U & (~ (IData)(vlSymsp->TOP__epRISC_coreEmu.controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber7)))) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__wCharRAMData 
	    = vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vram__DOT__rContents
	    [vlSymsp->TOP__epRISC_coreEmu.controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber1];
    }
    // ALWAYS at ../../../firmware/io/video_v1r0.v:49
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rConfig = 0U;
    } else {
	if ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) 
	      & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableVideo)) 
	     & (0U == (3U & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
			     >> 0x10U))))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rConfig 
		= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusData;
	}
    }
    // ALWAYS at ../../../firmware/io/video_v1r0.v:58
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rRow = 0U;
    } else {
	if ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) 
	      & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableVideo)) 
	     & (2U == (3U & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
			     >> 0x10U))))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rRow 
		= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusData;
	}
    }
    // ALWAYS at ../../../firmware/io/video_v1r0.v:67
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rColumn = 0U;
    } else {
	if ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) 
	      & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableVideo)) 
	     & (1U == (3U & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
			     >> 0x10U))))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rColumn 
		= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusData;
	}
    }
    // ALWAYS at ../../../firmware/io/gpio_v1r0.v:73
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue = 0U;
    } else {
	if ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) 
	      & (0x10U > (0x7fffU & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
				     >> 0x10U)))) & 
	     (2U == (3U & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
			   >> 0x10U))))) {
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue 
		= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusData;
	} else {
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue 
		= ((0xfffeU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue)) 
		   | (1U & ((1U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection))
			     ? (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue)
			     : (IData)(vlTOPp->bGPIO0))));
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue 
		= ((0xfffdU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue)) 
		   | (2U & (((2U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection))
			      ? ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue) 
				 >> 1U) : (IData)(vlTOPp->bGPIO1)) 
			    << 1U)));
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue 
		= ((0xfffbU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue)) 
		   | (4U & (((4U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection))
			      ? ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue) 
				 >> 2U) : (IData)(vlTOPp->bGPIO2)) 
			    << 2U)));
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue 
		= ((0xfff7U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue)) 
		   | (8U & (((8U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection))
			      ? ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue) 
				 >> 3U) : (IData)(vlTOPp->bGPIO3)) 
			    << 3U)));
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue 
		= ((0xffefU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue)) 
		   | (0x10U & (((0x10U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection))
				 ? ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue) 
				    >> 4U) : (IData)(vlTOPp->bGPIO4)) 
			       << 4U)));
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue 
		= ((0xffdfU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue)) 
		   | (0x20U & (((0x20U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection))
				 ? ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue) 
				    >> 5U) : (IData)(vlTOPp->bGPIO5)) 
			       << 5U)));
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue 
		= ((0xffbfU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue)) 
		   | (0x40U & (((0x40U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection))
				 ? ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue) 
				    >> 6U) : (IData)(vlTOPp->bGPIO6)) 
			       << 6U)));
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue 
		= ((0xff7fU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue)) 
		   | (0x80U & (((0x80U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection))
				 ? ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue) 
				    >> 7U) : (IData)(vlTOPp->bGPIO7)) 
			       << 7U)));
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue 
		= ((0xfeffU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue)) 
		   | (0x100U & (((0x100U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection))
				  ? ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue) 
				     >> 8U) : (IData)(vlTOPp->bGPIO8)) 
				<< 8U)));
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue 
		= ((0xfdffU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue)) 
		   | (0x200U & (((0x200U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection))
				  ? ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue) 
				     >> 9U) : (IData)(vlTOPp->bGPIO9)) 
				<< 9U)));
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue 
		= ((0xfbffU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue)) 
		   | (0x400U & (((0x400U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection))
				  ? ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue) 
				     >> 0xaU) : (IData)(vlTOPp->bGPIO10)) 
				<< 0xaU)));
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue 
		= ((0xf7ffU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue)) 
		   | (0x800U & (((0x800U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection))
				  ? ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue) 
				     >> 0xbU) : (IData)(vlTOPp->bGPIO11)) 
				<< 0xbU)));
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue 
		= ((0xefffU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue)) 
		   | (0x1000U & (((0x1000U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection))
				   ? ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue) 
				      >> 0xcU) : (IData)(vlTOPp->bGPIO12)) 
				 << 0xcU)));
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue 
		= ((0xdfffU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue)) 
		   | (0x2000U & (((0x2000U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection))
				   ? ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue) 
				      >> 0xdU) : (IData)(vlTOPp->bGPIO13)) 
				 << 0xdU)));
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue 
		= ((0xbfffU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue)) 
		   | (0x4000U & (((0x4000U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection))
				   ? ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue) 
				      >> 0xeU) : (IData)(vlTOPp->bGPIO14)) 
				 << 0xeU)));
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue 
		= ((0x7fffU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue)) 
		   | (0x8000U & (((0x8000U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection))
				   ? ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue) 
				      >> 0xfU) : (IData)(vlTOPp->bGPIO15)) 
				 << 0xfU)));
	}
    }
    // ALWAYS at ../../../firmware/io/gpio_v1r0.v:44
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__iBusInterrupt = 0U;
    } else {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__iBusInterrupt 
	    = (1U & ((0U != (((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection) 
			      & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue)) 
			     & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rInterrupt)))
		      ? 1U : 0U));
	if ((((~ (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite)) 
	      & (0x10U > (0x7fffU & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
				     >> 0x10U)))) & 
	     (1U == (3U & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
			   >> 0x10U))))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__iBusInterrupt = 0U;
	}
    }
    // ALWAYSPOST at ../../../firmware/io/video_v1r0.v:153
    if (vlSymsp->TOP__epRISC_coreEmu.__Vdlyvset__controller__DOT__bvga__DOT__vram__DOT__rContents__v0) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vram__DOT__rContents[vlSymsp->TOP__epRISC_coreEmu.__Vdlyvdim0__controller__DOT__bvga__DOT__vram__DOT__rContents__v0] 
	    = vlSymsp->TOP__epRISC_coreEmu.__Vdlyvval__controller__DOT__bvga__DOT__vram__DOT__rContents__v0;
    }
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__gpio__DOT__rValue;
    vlSymsp->TOP__epRISC_coreEmu.controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber1 
	= (0xfffU & (((0xffffU & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rRow) 
				  << 4U)) + (0xffffU 
					     & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rRow) 
						<< 6U))) 
		     + (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rColumn)));
    // ALWAYS at ../../../firmware/io/gpio_v1r0.v:64
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rInterrupt = 0U;
    } else {
	if ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) 
	      & (0x10U > (0x7fffU & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
				     >> 0x10U)))) & 
	     (1U == (3U & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
			   >> 0x10U))))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rInterrupt 
		= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusData;
	}
    }
    // ALWAYS at ../../../firmware/io/gpio_v1r0.v:55
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection = 0U;
    } else {
	if ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) 
	      & (0x10U > (0x7fffU & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
				     >> 0x10U)))) & 
	     (0U == (3U & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
			   >> 0x10U))))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection 
		= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusData;
	}
    }
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__3(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__3\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__rPipeState 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState;
    // ALWAYS at ../../../firmware/io/controller_v1r0.v:177
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wInternalReset) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipePrevState = 1U;
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__rPipeState = 1U;
    } else {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipePrevState 
	    = vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState;
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__rPipeState 
	    = vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeNextState;
    }
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__5(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__5\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rSendCountSto 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendCountSto;
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvCountSto 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvCountSto;
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__6(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__6\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rLockSto 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rLockSto;
    // ALWAYS at ../../../firmware/io/spi_v1r0.v:90
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rDataIn = 0U;
    } else {
	if ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) 
	      & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableSPI)) 
	     & (1U == (3U & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
			     >> 0x10U))))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rDataIn 
		= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusData;
	}
    }
    // ALWAYS at ../../../firmware/io/spi_v1r0.v:76
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rControl = 0U;
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rLockSto = 0U;
    } else {
	if ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) 
	      & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableSPI)) 
	     & (0U == (3U & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
			     >> 0x10U))))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rControl 
		= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusData;
	}
	if ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rLockAck) 
	      > (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rLockSto)) 
	     | ((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rLockAck)) 
		& (0x1fU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rLockSto))))) {
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rLockSto 
		= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rLockAck;
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rControl 
		= (0xff7fU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rControl));
	}
    }
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rLockSto 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rLockSto;
}

void VepRISC_coreEmu_epRISC_coreEmu::_initial__TOP__epRISC_coreEmu__7(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_initial__TOP__epRISC_coreEmu__7\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at ../../../firmware/io/video_v1r0.v:190
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0U] = 0x55U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[1U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[2U] = 0x55U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[3U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[4U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[6U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[7U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[8U] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[9U] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbU] = 0x6cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xcU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xdU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xeU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xfU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x10U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x11U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x12U] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x13U] = 0x3eU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x14U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x15U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x16U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x17U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x18U] = 0xc0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x19U] = 6U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1aU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1bU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1eU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1fU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x20U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x21U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x22U] = 0x28U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x23U] = 0x44U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x24U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x25U] = 0xe2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x26U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x27U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x28U] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x29U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2aU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2fU] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x30U] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x31U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x32U] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x33U] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x34U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x35U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x36U] = 0x7eU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x37U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x38U] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x39U] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3cU] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3eU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3fU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x40U] = 0xfcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x41U] = 6U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x42U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x43U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x44U] = 0xfcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x45U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x46U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x47U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x48U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x49U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4aU] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4bU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4cU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4dU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4eU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4fU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x50U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x51U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x52U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x53U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x54U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x55U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x56U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x57U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x58U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x59U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5aU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5bU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5cU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5dU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5eU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x60U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x61U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x62U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x63U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x64U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x65U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x66U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x67U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x68U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x69U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6bU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x70U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x71U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x72U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x73U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x74U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x75U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x76U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x77U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x78U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x79U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7bU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7dU] = 0x30U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7fU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x80U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x81U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x82U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x83U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x84U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x85U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x86U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x87U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x88U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x89U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8aU] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8bU] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8dU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8fU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x90U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x91U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x92U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x93U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x94U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x95U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x96U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x97U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x98U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x99U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9aU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9bU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9eU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa0U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa1U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa2U] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa5U] = 0xfcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa6U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa7U] = 6U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xabU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xacU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xadU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xafU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xcaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xcbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xccU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xcdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xceU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xcfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xdaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xdbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xdcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xddU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xdeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xdfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xeaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xebU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xecU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xedU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xeeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xefU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xfaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xfbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xfcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xfdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xfeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xffU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x100U] = 0x55U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x101U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x102U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x103U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x104U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x105U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x106U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x107U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x108U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x109U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x10aU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x10bU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x10cU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x10dU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x10eU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x10fU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x110U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x111U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x112U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x113U] = 0x22U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x114U] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x115U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x116U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x117U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x118U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x119U] = 0x1eU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x11aU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x11bU] = 0x8aU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x11cU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x11dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x11eU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x11fU] = 0x40U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x120U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x121U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x122U] = 0x28U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x123U] = 0x44U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x124U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x125U] = 0xa2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x126U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x127U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x128U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x129U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x12aU] = 0x28U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x12bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x12cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x12dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x12eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x12fU] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x130U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x131U] = 0x30U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x132U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x133U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x134U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x135U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x136U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x137U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x138U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x139U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x13aU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x13bU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x13cU] = 0xcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x13dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x13eU] = 0x60U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x13fU] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x140U] = 0x84U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x141U] = 0xaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x142U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x143U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x144U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x145U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x146U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x147U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x148U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x149U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x14aU] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x14bU] = 0x84U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x14cU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x14dU] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x14eU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x14fU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x150U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x151U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x152U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x153U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x154U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x155U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x156U] = 0x42U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x157U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x158U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x159U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x15aU] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x15bU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x15cU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x15dU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x15eU] = 0x28U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x15fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x160U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x161U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x162U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x163U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x164U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x165U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x166U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x167U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x168U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x169U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x16aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x16bU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x16cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x16dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x16eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x16fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x170U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x171U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x172U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x173U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x174U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x175U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x176U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x177U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x178U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x179U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x17aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x17bU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x17cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x17dU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x17eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x17fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x180U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x181U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x182U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x183U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x184U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x185U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x186U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x187U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x188U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x189U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x18aU] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x18bU] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x18cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x18dU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x18eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x18fU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x190U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x191U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x192U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x193U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x194U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x195U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x196U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x197U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x198U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x199U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x19aU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x19bU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x19cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x19dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x19eU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x19fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a0U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a1U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a2U] = 0x44U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a5U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a6U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a7U] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1aaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1abU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1acU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1adU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1aeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1afU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1baU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1bbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1bcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1bdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1beU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1bfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1caU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1cbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1ccU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1cdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1ceU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1cfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1daU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1dbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1dcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1ddU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1deU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1dfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1eaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1ebU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1ecU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1edU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1eeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1efU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1faU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1fbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1fcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1fdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1feU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1ffU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x200U] = 0x55U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x201U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x202U] = 0x55U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x203U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x204U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x205U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x206U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x207U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x208U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x209U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x20aU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x20bU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x20cU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x20dU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x20eU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x20fU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x210U] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x211U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x212U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x213U] = 0x22U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x214U] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x215U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x216U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x217U] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x218U] = 0xf8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x219U] = 0x3eU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x21aU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x21bU] = 0x8aU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x21cU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x21dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x21eU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x21fU] = 0x60U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x220U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x221U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x222U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x223U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x224U] = 0x90U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x225U] = 0xe4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x226U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x227U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x228U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x229U] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x22aU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x22bU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x22cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x22dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x22eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x22fU] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x230U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x231U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x232U] = 0x84U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x233U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x234U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x235U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x236U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x237U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x238U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x239U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x23aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x23bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x23cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x23dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x23eU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x23fU] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x240U] = 0xbcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x241U] = 0xaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x242U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x243U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x244U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x245U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x246U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x247U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x248U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x249U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x24aU] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x24bU] = 0x88U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x24cU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x24dU] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x24eU] = 0xc2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x24fU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x250U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x251U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x252U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x253U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x254U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x255U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x256U] = 0x42U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x257U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x258U] = 0x44U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x259U] = 0x44U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x25aU] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x25bU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x25cU] = 0x40U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x25dU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x25eU] = 0x44U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x25fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x260U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x261U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x262U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x263U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x264U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x265U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x266U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x267U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x268U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x269U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x26aU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x26bU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x26cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x26dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x26eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x26fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x270U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x271U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x272U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x273U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x274U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x275U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x276U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x277U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x278U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x279U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x27aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x27bU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x27cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x27dU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x27eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x27fU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x280U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x281U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x282U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x283U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x284U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x285U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x286U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x287U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x288U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x289U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x28aU] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x28bU] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x28cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x28dU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x28eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x28fU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x290U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x291U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x292U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x293U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x294U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x295U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x296U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x297U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x298U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x299U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x29aU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x29bU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x29cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x29dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x29eU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x29fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a0U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a1U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a2U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a5U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a6U] = 0x40U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a7U] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2aaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2abU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2acU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2adU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2aeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2afU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2baU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2bbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2bcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2bdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2beU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2bfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2caU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2cbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2ccU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2cdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2ceU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2cfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2daU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2dbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2dcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2ddU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2deU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2dfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2eaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2ebU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2ecU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2edU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2eeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2efU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2faU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2fbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2fcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2fdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2feU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2ffU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x300U] = 0x55U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x301U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x302U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x303U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x304U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x305U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x306U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x307U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x308U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x309U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x30aU] = 0xd6U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x30bU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x30cU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x30dU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x30eU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x30fU] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x310U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x311U] = 0xeeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x312U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x313U] = 0x22U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x314U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x315U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x316U] = 0x60U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x317U] = 0xcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x318U] = 0xfcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x319U] = 0x7eU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x31aU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x31bU] = 0x8aU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x31cU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x31dU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x31eU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x31fU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x320U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x321U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x322U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x323U] = 0x44U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x324U] = 0x90U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x325U] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x326U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x327U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x328U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x329U] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x32aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x32bU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x32cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x32dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x32eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x32fU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x330U] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x331U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x332U] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x333U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x334U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x335U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x336U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x337U] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x338U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x339U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x33aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x33bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x33cU] = 0x60U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x33dU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x33eU] = 0xcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x33fU] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x340U] = 0xa4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x341U] = 0x12U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x342U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x343U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x344U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x345U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x346U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x347U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x348U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x349U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x34aU] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x34bU] = 0x90U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x34cU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x34dU] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x34eU] = 0xa2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x34fU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x350U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x351U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x352U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x353U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x354U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x355U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x356U] = 0x22U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x357U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x358U] = 0x28U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x359U] = 0x28U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x35aU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x35bU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x35cU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x35dU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x35eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x35fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x360U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x361U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x362U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x363U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x364U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x365U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x366U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x367U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x368U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x369U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x36aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x36bU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x36cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x36dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x36eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x36fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x370U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x371U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x372U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x373U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x374U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x375U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x376U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x377U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x378U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x379U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x37aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x37bU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x37cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x37dU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x37eU] = 0x60U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x37fU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x380U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x381U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x382U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x383U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x384U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x385U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x386U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x387U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x388U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x389U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x38aU] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x38bU] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x38cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x38dU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x38eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x38fU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x390U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x391U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x392U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x393U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x394U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x395U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x396U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x397U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x398U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x399U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x39aU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x39bU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x39cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x39dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x39eU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x39fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a0U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a1U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a2U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a5U] = 0xfcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a6U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a7U] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3aaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3abU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3acU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3adU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3aeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3afU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3baU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3bbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3bcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3bdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3beU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3bfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3caU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3cbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3ccU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3cdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3ceU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3cfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3daU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3dbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3dcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3ddU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3deU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3dfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3eaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3ebU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3ecU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3edU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3eeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3efU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3faU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3fbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3fcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3fdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3feU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3ffU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x400U] = 0x55U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x401U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x402U] = 0x55U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x403U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x404U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x405U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x406U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x407U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x408U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x409U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x40aU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x40bU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x40cU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x40dU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x40eU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x40fU] = 0xbaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x410U] = 0xc6U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x411U] = 0xc6U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x412U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x413U] = 0x22U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x414U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x415U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x416U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x417U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x418U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x419U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x41aU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x41bU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x41cU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x41dU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x41eU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x41fU] = 0x28U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x420U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x421U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x422U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x423U] = 0x44U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x424U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x425U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x426U] = 0x6cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x427U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x428U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x429U] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x42aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x42bU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x42cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x42dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x42eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x42fU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x430U] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x431U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x432U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x433U] = 0x1eU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x434U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x435U] = 0xfcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x436U] = 0xfcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x437U] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x438U] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x439U] = 0x7eU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x43aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x43bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x43cU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x43dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x43eU] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x43fU] = 0x1cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x440U] = 0xa4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x441U] = 0x3eU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x442U] = 0xfcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x443U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x444U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x445U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x446U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x447U] = 0x8eU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x448U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x449U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x44aU] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x44bU] = 0xe0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x44cU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x44dU] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x44eU] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x44fU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x450U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x451U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x452U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x453U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x454U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x455U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x456U] = 0x22U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x457U] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x458U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x459U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x45aU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x45bU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x45cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x45dU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x45eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x45fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x460U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x461U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x462U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x463U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x464U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x465U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x466U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x467U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x468U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x469U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x46aU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x46bU] = 0x86U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x46cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x46dU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x46eU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x46fU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x470U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x471U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x472U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x473U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x474U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x475U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x476U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x477U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x478U] = 0xc6U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x479U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x47aU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x47bU] = 0x40U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x47cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x47dU] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x47eU] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x47fU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x480U] = 0x1cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x481U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x482U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x483U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x484U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x485U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x486U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x487U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x488U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x489U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x48aU] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x48bU] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x48cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x48dU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x48eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x48fU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x490U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x491U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x492U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x493U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x494U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x495U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x496U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x497U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x498U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x499U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x49aU] = 0xe7U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x49bU] = 0xe7U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x49cU] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x49dU] = 0xfcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x49eU] = 0xe4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x49fU] = 0x3fU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a0U] = 0xe4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a1U] = 0x27U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a2U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a3U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a4U] = 0x72U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a5U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a6U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a7U] = 0xc4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4aaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4abU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4acU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4adU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4aeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4afU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4baU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4bbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4bcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4bdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4beU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4bfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4caU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4cbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4ccU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4cdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4ceU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4cfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4daU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4dbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4dcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4ddU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4deU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4dfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4eaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4ebU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4ecU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4edU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4eeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4efU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4faU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4fbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4fcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4fdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4feU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4ffU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x500U] = 0x55U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x501U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x502U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x503U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x504U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x505U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x506U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x507U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x508U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x509U] = 0xbaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x50aU] = 0xc6U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x50bU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x50cU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x50dU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x50eU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x50fU] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x510U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x511U] = 0xeeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x512U] = 0x60U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x513U] = 0x66U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x514U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x515U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x516U] = 0x60U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x517U] = 0xcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x518U] = 0xfcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x519U] = 0x7eU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x51aU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x51bU] = 0xaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x51cU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x51dU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x51eU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x51fU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x520U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x521U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x522U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x523U] = 0x44U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x524U] = 0x12U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x525U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x526U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x527U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x528U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x529U] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x52aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x52bU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x52cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x52dU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x52eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x52fU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x530U] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x531U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x532U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x533U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x534U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x535U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x536U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x537U] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x538U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x539U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x53aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x53bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x53cU] = 0x60U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x53dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x53eU] = 0xcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x53fU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x540U] = 0xa4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x541U] = 0x22U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x542U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x543U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x544U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x545U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x546U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x547U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x548U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x549U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x54aU] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x54bU] = 0x90U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x54cU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x54dU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x54eU] = 0x8aU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x54fU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x550U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x551U] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x552U] = 0xc0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x553U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x554U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x555U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x556U] = 0x12U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x557U] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x558U] = 0x28U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x559U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x55aU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x55bU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x55cU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x55dU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x55eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x55fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x560U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x561U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x562U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x563U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x564U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x565U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x566U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x567U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x568U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x569U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x56aU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x56bU] = 0x98U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x56cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x56dU] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x56eU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x56fU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x570U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x571U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x572U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x573U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x574U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x575U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x576U] = 0x42U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x577U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x578U] = 0x28U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x579U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x57aU] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x57bU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x57cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x57dU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x57eU] = 0xcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x57fU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x580U] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x581U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x582U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x583U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x584U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x585U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x586U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x587U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x588U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x589U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x58aU] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x58bU] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x58cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x58dU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x58eU] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x58fU] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x590U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x591U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x592U] = 0xf8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x593U] = 0xf8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x594U] = 0x1fU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x595U] = 0x1fU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x596U] = 0xf8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x597U] = 0x1fU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x598U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x599U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x59aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x59bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x59cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x59dU] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x59eU] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x59fU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a0U] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a1U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a2U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a3U] = 0x44U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a4U] = 0x8cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a5U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a6U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a7U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5aaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5abU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5acU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5adU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5aeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5afU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5baU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5bbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5bcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5bdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5beU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5bfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5caU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5cbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5ccU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5cdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5ceU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5cfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5daU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5dbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5dcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5ddU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5deU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5dfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5eaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5ebU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5ecU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5edU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5eeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5efU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5faU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5fbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5fcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5fdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5feU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5ffU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x600U] = 0x55U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x601U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x602U] = 0x55U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x603U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x604U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x605U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x606U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x607U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x608U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x609U] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x60aU] = 0xeeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x60bU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x60cU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x60dU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x60eU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x60fU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x610U] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x611U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x612U] = 0xa0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x613U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x614U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x615U] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x616U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x617U] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x618U] = 0xf8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x619U] = 0x3eU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x61aU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x61bU] = 0xaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x61cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x61dU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x61eU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x61fU] = 0xcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x620U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x621U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x622U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x623U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x624U] = 0x12U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x625U] = 0x4eU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x626U] = 0x6cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x627U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x628U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x629U] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x62aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x62bU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x62cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x62dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x62eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x62fU] = 0x40U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x630U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x631U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x632U] = 0x40U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x633U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x634U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x635U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x636U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x637U] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x638U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x639U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x63aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x63bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x63cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x63dU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x63eU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x63fU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x640U] = 0xbcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x641U] = 0x42U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x642U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x643U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x644U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x645U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x646U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x647U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x648U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x649U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x64aU] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x64bU] = 0x88U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x64cU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x64dU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x64eU] = 0x86U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x64fU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x650U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x651U] = 0x8cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x652U] = 0xb0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x653U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x654U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x655U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x656U] = 0xaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x657U] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x658U] = 0x44U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x659U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x65aU] = 0x40U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x65bU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x65cU] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x65dU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x65eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x65fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x660U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x661U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x662U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x663U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x664U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x665U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x666U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x667U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x668U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x669U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x66aU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x66bU] = 0xe0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x66cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x66dU] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x66eU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x66fU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x670U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x671U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x672U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x673U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x674U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x675U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x676U] = 0x32U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x677U] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x678U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x679U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x67aU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x67bU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x67cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x67dU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x67eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x67fU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x680U] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x681U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x682U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x683U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x684U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x685U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x686U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x687U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x688U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x689U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x68aU] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x68bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x68cU] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x68dU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x68eU] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x68fU] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x690U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x691U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x692U] = 0xf8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x693U] = 0xf8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x694U] = 0x1fU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x695U] = 0x1fU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x696U] = 0xf8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x697U] = 0x1fU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x698U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x699U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x69aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x69bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x69cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x69dU] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x69eU] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x69fU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a0U] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a1U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a2U] = 0x44U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a3U] = 0x44U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a4U] = 0x88U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a5U] = 0xfcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a6U] = 0x40U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a7U] = 0x14U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6aaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6abU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6acU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6adU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6aeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6afU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6baU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6bbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6bcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6bdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6beU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6bfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6caU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6cbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6ccU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6cdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6ceU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6cfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6daU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6dbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6dcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6ddU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6deU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6dfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6eaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6ebU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6ecU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6edU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6eeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6efU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6faU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6fbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6fcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6fdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6feU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6ffU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x700U] = 0x55U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x701U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x702U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x703U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x704U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x705U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x706U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x707U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x708U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x709U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x70aU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x70bU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x70cU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x70dU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x70eU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x70fU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x710U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x711U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x712U] = 0xa0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x713U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x714U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x715U] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x716U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x717U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x718U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x719U] = 0x1eU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x71aU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x71bU] = 0xaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x71cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x71dU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x71eU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x71fU] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x720U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x721U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x722U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x723U] = 0x44U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x724U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x725U] = 0x8aU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x726U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x727U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x728U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x729U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x72aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x72bU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x72cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x72dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x72eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x72fU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x730U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x731U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x732U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x733U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x734U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x735U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x736U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x737U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x738U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x739U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x73aU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x73bU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x73cU] = 0xcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x73dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x73eU] = 0x60U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x73fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x740U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x741U] = 0x42U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x742U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x743U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x744U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x745U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x746U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x747U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x748U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x749U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x74aU] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x74bU] = 0x84U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x74cU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x74dU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x74eU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x74fU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x750U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x751U] = 0x8cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x752U] = 0x8cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x753U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x754U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x755U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x756U] = 0xaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x757U] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x758U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x759U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x75aU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x75bU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x75cU] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x75dU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x75eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x75fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x760U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x761U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x762U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x763U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x764U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x765U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x766U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x767U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x768U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x769U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x76aU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x76bU] = 0x98U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x76cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x76dU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x76eU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x76fU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x770U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x771U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x772U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x773U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x774U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x775U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x776U] = 0xaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x777U] = 0x92U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x778U] = 0x28U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x779U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x77aU] = 0x40U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x77bU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x77cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x77dU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x77eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x77fU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x780U] = 4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x781U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x782U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x783U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x784U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x785U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x786U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x787U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x788U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x789U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x78aU] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x78bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x78cU] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x78dU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x78eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x78fU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x790U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x791U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x792U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x793U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x794U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x795U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x796U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x797U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x798U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x799U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x79aU] = 0xe7U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x79bU] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x79cU] = 0xe7U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x79dU] = 0xe4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x79eU] = 0xfcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x79fU] = 0x27U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a0U] = 0xe4U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a1U] = 0x27U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a2U] = 0x28U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a3U] = 0x44U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a4U] = 0x8cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a5U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a6U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a7U] = 0x14U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7aaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7abU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7acU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7adU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7aeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7afU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7baU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7bbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7bcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7bdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7beU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7bfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7caU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7cbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7ccU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7cdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7ceU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7cfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7daU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7dbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7dcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7ddU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7deU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7dfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7eaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7ebU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7ecU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7edU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7eeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7efU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7faU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7fbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7fcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7fdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7feU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7ffU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x800U] = 0x55U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x801U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x802U] = 0x55U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x803U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x804U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x805U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x806U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x807U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x808U] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x809U] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x80aU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x80bU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x80cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x80dU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x80eU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x80fU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x810U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x811U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x812U] = 0x60U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x813U] = 0x66U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x814U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x815U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x816U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x817U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x818U] = 0xc0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x819U] = 6U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x81aU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x81bU] = 0xaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x81cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x81dU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x81eU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x81fU] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x820U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x821U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x822U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x823U] = 0x44U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x824U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x825U] = 0x8eU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x826U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x827U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x828U] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x829U] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x82aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x82bU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x82cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x82dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x82eU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x82fU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x830U] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x831U] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x832U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x833U] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x834U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x835U] = 0xfcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x836U] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x837U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x838U] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x839U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x83aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x83bU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x83cU] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x83dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x83eU] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x83fU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x840U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x841U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x842U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x843U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x844U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x845U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x846U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x847U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x848U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x849U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x84aU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x84bU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x84cU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x84dU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x84eU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x84fU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x850U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x851U] = 0xf2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x852U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x853U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x854U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x855U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x856U] = 6U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x857U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x858U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x859U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x85aU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x85bU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x85cU] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x85dU] = 0x38U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x85eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x85fU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x860U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x861U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x862U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x863U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x864U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x865U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x866U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x867U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x868U] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x869U] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x86aU] = 8U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x86bU] = 0x86U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x86cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x86dU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x86eU] = 0x82U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x86fU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x870U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x871U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x872U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x873U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x874U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x875U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x876U] = 6U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x877U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x878U] = 0xc6U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x879U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x87aU] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x87bU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x87cU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x87dU] = 0x30U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x87eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x87fU] = 0x10U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x880U] = 0x7cU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x881U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x882U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x883U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x884U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x885U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x886U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x887U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x888U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x889U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x88aU] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x88bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x88cU] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x88dU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x88eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x88fU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x890U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x891U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x892U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x893U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x894U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x895U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x896U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x897U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x898U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x899U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x89aU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x89bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x89cU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x89dU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x89eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x89fU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a0U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a1U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a2U] = 0xeeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a3U] = 0x44U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a4U] = 0x72U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a5U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a6U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a7U] = 0xcU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8aaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8abU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8acU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8adU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8aeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8afU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8baU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8bbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8bcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8bdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8beU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8bfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8caU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8cbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8ccU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8cdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8ceU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8cfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8daU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8dbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8dcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8ddU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8deU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8dfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8eaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8ebU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8ecU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8edU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8eeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8efU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8faU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8fbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8fcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8fdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8feU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8ffU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x900U] = 0x55U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x901U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x902U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x903U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x904U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x905U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x906U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x907U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x908U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x909U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x90aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x90bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x90cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x90dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x90eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x90fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x910U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x911U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x912U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x913U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x914U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x915U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x916U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x917U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x918U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x919U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x91aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x91bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x91cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x91dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x91eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x91fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x920U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x921U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x922U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x923U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x924U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x925U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x926U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x927U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x928U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x929U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x92aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x92bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x92cU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x92dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x92eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x92fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x930U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x931U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x932U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x933U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x934U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x935U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x936U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x937U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x938U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x939U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x93aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x93bU] = 0x20U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x93cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x93dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x93eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x93fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x940U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x941U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x942U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x943U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x944U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x945U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x946U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x947U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x948U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x949U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x94aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x94bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x94cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x94dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x94eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x94fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x950U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x951U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x952U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x953U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x954U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x955U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x956U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x957U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x958U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x959U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x95aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x95bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x95cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x95dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x95eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x95fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x960U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x961U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x962U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x963U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x964U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x965U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x966U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x967U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x968U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x969U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x96aU] = 0x30U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x96bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x96cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x96dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x96eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x96fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x970U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x971U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x972U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x973U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x974U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x975U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x976U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x977U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x978U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x979U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x97aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x97bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x97cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x97dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x97eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x97fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x980U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x981U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x982U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x983U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x984U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x985U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x986U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x987U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x988U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x989U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x98aU] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x98bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x98cU] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x98dU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x98eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x98fU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x990U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x991U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x992U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x993U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x994U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x995U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x996U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x997U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x998U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x999U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x99aU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x99bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x99cU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x99dU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x99eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x99fU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a0U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a1U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9aaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9abU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9acU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9adU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9aeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9afU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9baU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9bbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9bcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9bdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9beU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9bfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9caU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9cbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9ccU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9cdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9ceU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9cfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9daU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9dbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9dcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9ddU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9deU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9dfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9eaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9ebU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9ecU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9edU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9eeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9efU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9faU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9fbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9fcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9fdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9feU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9ffU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa00U] = 0x55U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa01U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa02U] = 0x55U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa03U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa04U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa05U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa06U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa07U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa08U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa09U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa0aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa0bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa0cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa0dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa0eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa0fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa10U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa11U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa12U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa13U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa14U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa15U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa16U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa17U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa18U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa19U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa1aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa1bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa1cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa1dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa1eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa1fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa20U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa21U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa22U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa23U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa24U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa25U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa26U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa27U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa28U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa29U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa2aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa2bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa2cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa2dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa2eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa2fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa30U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa31U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa32U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa33U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa34U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa35U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa36U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa37U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa38U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa39U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa3aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa3bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa3cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa3dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa3eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa3fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa40U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa41U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa42U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa43U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa44U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa45U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa46U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa47U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa48U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa49U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa4aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa4bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa4cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa4dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa4eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa4fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa50U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa51U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa52U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa53U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa54U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa55U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa56U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa57U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa58U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa59U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa5aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa5bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa5cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa5dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa5eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa5fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa60U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa61U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa62U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa63U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa64U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa65U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa66U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa67U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa68U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa69U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa6aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa6bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa6cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa6dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa6eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa6fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa70U] = 0x80U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa71U] = 2U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa72U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa73U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa74U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa75U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa76U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa77U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa78U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa79U] = 0xfeU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa7aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa7bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa7cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa7dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa7eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa7fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa80U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa81U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa82U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa83U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa84U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa85U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa86U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa87U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa88U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa89U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa8aU] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa8bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa8cU] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa8dU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa8eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa8fU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa90U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa91U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa92U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa93U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa94U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa95U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa96U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa97U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa98U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa99U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa9aU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa9bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa9cU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa9dU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa9eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa9fU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa0U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa1U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaaaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaabU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaacU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaadU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaaeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaafU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xabaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xabbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xabcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xabdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xabeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xabfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xacaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xacbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaccU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xacdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaceU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xacfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xadaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xadbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xadcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaddU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xadeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xadfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaeaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaebU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaecU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaedU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaeeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaefU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xafaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xafbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xafcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xafdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xafeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaffU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb00U] = 0x55U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb01U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb02U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb03U] = 0xaaU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb04U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb05U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb06U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb07U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb08U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb09U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb0aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb0bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb0cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb0dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb0eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb0fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb10U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb11U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb12U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb13U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb14U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb15U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb16U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb17U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb18U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb19U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb1aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb1bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb1cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb1dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb1eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb1fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb20U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb21U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb22U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb23U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb24U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb25U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb26U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb27U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb28U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb29U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb2aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb2bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb2cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb2dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb2eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb2fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb30U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb31U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb32U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb33U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb34U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb35U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb36U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb37U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb38U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb39U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb3aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb3bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb3cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb3dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb3eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb3fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb40U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb41U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb42U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb43U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb44U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb45U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb46U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb47U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb48U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb49U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb4aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb4bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb4cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb4dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb4eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb4fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb50U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb51U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb52U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb53U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb54U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb55U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb56U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb57U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb58U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb59U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb5aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb5bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb5cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb5dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb5eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb5fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb60U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb61U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb62U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb63U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb64U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb65U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb66U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb67U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb68U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb69U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb6aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb6bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb6cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb6dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb6eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb6fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb70U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb71U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb72U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb73U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb74U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb75U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb76U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb77U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb78U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb79U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb7aU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb7bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb7cU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb7dU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb7eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb7fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb80U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb81U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb82U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb83U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb84U] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb85U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb86U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb87U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb88U] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb89U] = 0xf0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb8aU] = 0xfU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb8bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb8cU] = 0xffU;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb8dU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb8eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb8fU] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb90U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb91U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb92U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb93U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb94U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb95U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb96U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb97U] = 0x18U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb98U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb99U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb9aU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb9bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb9cU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb9dU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb9eU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb9fU] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba0U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba1U] = 0x24U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbaaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbabU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbacU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbadU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbaeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbafU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbbaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbbbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbbcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbbdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbbeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbbfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbcaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbcbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbccU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbcdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbceU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbcfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbdaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbdbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbdcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbddU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbdeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbdfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbeaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbebU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbecU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbedU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbeeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbefU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf1U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf2U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf3U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf4U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf5U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf6U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf7U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf8U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf9U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbfaU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbfbU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbfcU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbfdU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbfeU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbffU] = 0U;
    // INITIAL at ../../../firmware/io/controller_v1r0.v:58
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__clock__DOT__rClockSplit = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wSerialClock = 0U;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wSPIClock = 0U;
    // INITIAL at ../../../firmware/io/video_v1r0.v:146
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vram__DOT__rClr = 0U;
    while ((0x1000U > (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vram__DOT__rClr))) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vram__DOT__rContents[(0xfffU 
										& (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vram__DOT__rClr))] = 0U;
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vram__DOT__rClr 
	    = (0x1fffU & ((IData)(1U) + (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__vram__DOT__rClr)));
    }
}

void VepRISC_coreEmu_epRISC_coreEmu::_settle__TOP__epRISC_coreEmu__8(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_settle__TOP__epRISC_coreEmu__8\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu.controller__DOT__bvga__DOT____Vcellinp__vrom____pinNumber1 
	= (((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rRowSel) 
	    << 8U) | (0xffU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__wCharRAMFrame)));
    vlSymsp->TOP__epRISC_coreEmu.controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber1 
	= (0xfffU & (((0xffffU & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rRow) 
				  << 4U)) + (0xffffU 
					     & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rRow) 
						<< 6U))) 
		     + (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rColumn)));
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__9(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__9\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rClkDivide 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rClkDivide;
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rTxClk 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rTxClk;
    // ALWAYS at ../../../firmware/io/spi_v1r0.v:51
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rClkDivide = 0U;
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rTxClk = 0U;
    } else {
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rClkDivide 
	    = (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rClkDivide)));
	if ((3U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rClkDivide))) {
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rTxClk 
		= (1U & (~ (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rTxClk)));
	}
    }
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rClkDivide 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rClkDivide;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rTxClk 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rTxClk;
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__10(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__10\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvDataCnt 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvDataCnt;
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rSendDataCnt 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendDataCnt;
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rSendCountAck 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendCountAck;
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvState 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState;
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvCountAck 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvCountAck;
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rSendState 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState;
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:126
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendPrevState = 0xdU;
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rSendState = 0xdU;
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rSendCountAck = 0U;
    } else {
	if ((0xdU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendPrevState 
		= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState;
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rSendDataCnt = 0U;
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rSendState 
		= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendNextState;
	} else {
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rSendDataCnt 
		= (0x3fU & ((IData)(1U) + (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendDataCnt)));
	    if ((0xfU == (0xfU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendDataCnt)))) {
		vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendPrevState 
		    = vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState;
		if ((0xcU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))) {
		    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rSendCountAck 
			= (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendCountAck)));
		}
		vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rSendState 
		    = vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendNextState;
	    }
	}
    }
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:105
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rDataOut = 0U;
    } else {
	if ((((0xbU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState)) 
	      | (0xcU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))) 
	     & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl) 
		>> 5U))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rDataOut 
		= ((0xff00U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rDataOut)) 
		   | (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvDataBuf));
	}
    }
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendDataCnt 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rSendDataCnt;
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:149
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvState = 0xdU;
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvPrevState = 0xdU;
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvCountAck = 0U;
    } else {
	if ((0xdU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvPrevState 
		= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState;
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvDataCnt = 0U;
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvState 
		= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvNextState;
	} else {
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvDataCnt 
		= (0x3fU & ((IData)(1U) + (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvDataCnt)));
	    if (((9U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState)) 
		 & (7U == (0xfU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvDataCnt))))) {
		vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvDataCnt = 0x3fU;
		vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvPrevState 
		    = vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState;
		vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvState 
		    = vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvNextState;
	    } else {
		if ((0xfU == (0xfU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvDataCnt)))) {
		    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvDataCnt = 0U;
		    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvPrevState 
			= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState;
		    if ((8U > (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))) {
			vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvDataBuf 
			    = (((~ ((IData)(1U) << 
				    (7U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState)))) 
				& (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvDataBuf)) 
			       | ((IData)(vlTOPp->iTTLSerialRX) 
				  << (7U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))));
		    }
		    if ((0xcU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))) {
			vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvCountAck 
			    = (0x1fU & ((IData)(1U) 
					+ (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvCountAck)));
		    }
		    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvState 
			= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvNextState;
		}
	    }
	}
    }
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvDataCnt 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvDataCnt;
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__11(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__11\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:121
    if ((9U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendDataBuf 
	    = (0xffU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rDataIn));
    }
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:114
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__oBvusInterrupt 
	= (((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl) 
	    >> 8U) & (0xcU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState)));
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__12(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__12\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/io/spi_v1r0.v:100
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rDataOut = 0U;
    } else {
	if ((0xbU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rDataOut 
		= ((0xff00U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rDataOut)) 
		   | (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rDataBuf));
	}
    }
    // ALWAYS at ../../../firmware/io/spi_v1r0.v:109
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rDataBuf = 0U;
    } else {
	if ((8U > (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rDataBuf 
		= (((~ ((IData)(1U) << (7U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState)))) 
		    & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rDataBuf)) 
		   | ((IData)(vlTOPp->iSPIMISO) << 
		      (7U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))));
	}
    }
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__13(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__13\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rLockAck 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rLockAck;
    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rState 
	= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState;
    // ALWAYS at ../../../firmware/io/spi_v1r0.v:62
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rPrevState = 8U;
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rState = 8U;
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rLockAck = 0U;
    } else {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rPrevState 
	    = vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState;
	if ((0xaU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))) {
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rLockAck 
		= (0x1fU & ((IData)(1U) + (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rLockAck)));
	}
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rState 
	    = vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rNextState;
    }
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rLockAck 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rLockAck;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__bspi__DOT__rState;
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__14(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__14\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:95
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rDataIn = 0U;
    } else {
	if ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) 
	      & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableUART)) 
	     & (1U == (3U & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
			     >> 0x10U))))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rDataIn 
		= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusData;
	}
    }
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:60
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl = 0U;
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvCountSto = 0U;
	vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rSendCountSto = 0U;
    } else {
	if ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendCountAck) 
	      > (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendCountSto)) 
	     | ((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendCountAck)) 
		& (0x1fU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendCountSto))))) {
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rSendCountSto 
		= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendCountAck;
	}
	if ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) 
	      & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableUART)) 
	     & (0U == (3U & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
			     >> 0x10U))))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl 
		= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusData;
	}
	if ((9U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl 
		= (0x40U | (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl));
	}
	if ((0xdU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl 
		= (0xffbfU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl));
	}
	if ((4U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl 
		= (0xff7fU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl));
	}
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl 
	    = ((0xdU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
	        ? (0xffefU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl))
	        : (0x10U | (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl)));
	if ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvCountAck) 
	      > (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvCountSto)) 
	     | ((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvCountAck)) 
		& (0x1fU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvCountSto))))) {
	    vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvCountSto 
		= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvCountAck;
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl 
		= (0xffdfU & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl));
	}
    }
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendCountSto 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rSendCountSto;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvCountSto 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvCountSto;
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__15(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__15\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvState;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendCountAck 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rSendCountAck;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvCountAck 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rRecvCountAck;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__uart__DOT__rSendState;
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_multiclk__TOP__epRISC_coreEmu__16(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_multiclk__TOP__epRISC_coreEmu__16\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/io/spi_v1r0.v:118
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rNextState 
	= (0xfU & (((((((((8U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState)) 
			  | (9U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))) 
			 | (7U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))) 
			| (6U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))) 
		       | (5U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))) 
		      | (4U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))) 
		     | (3U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))) 
		    | (2U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState)))
		    ? ((8U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
		        ? ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rControl) 
			     >> 7U) & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rLockAck) 
				       == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rLockSto)))
			    ? 7U : 8U) : ((9U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
					   ? 7U : (
						   (7U 
						    == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
						    ? 6U
						    : 
						   ((6U 
						     == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
						     ? 5U
						     : 
						    ((5U 
						      == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
						      ? 4U
						      : 
						     ((4U 
						       == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
						       ? 3U
						       : 
						      ((3U 
							== (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
						        ? 2U
						        : 1U)))))))
		    : ((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
		        ? 0U : ((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
				 ? 0xbU : ((0xbU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
					    ? 0xaU : 8U)))));
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_combo__TOP__epRISC_coreEmu__17(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_combo__TOP__epRISC_coreEmu__17\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__tmpClock 
	= ((8U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
	    ? (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__oBusClock)
	    : (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rTxClk));
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:199
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvNextState 
	= (0xfU & (((((((((7U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState)) 
			  | (6U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))) 
			 | (5U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))) 
			| (4U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))) 
		       | (3U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))) 
		      | (2U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))) 
		     | (1U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))) 
		    | (0U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState)))
		    ? ((7U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
		        ? ((0x10U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl))
			    ? 0xaU : ((4U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl))
				       ? 0xbU : 0xcU))
		        : ((6U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
			    ? 7U : ((5U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
				     ? 6U : ((4U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
					      ? 5U : 
					     ((3U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
					       ? 4U
					       : ((2U 
						   == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
						   ? 3U
						   : 
						  ((1U 
						    == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
						    ? 2U
						    : 1U)))))))
		    : ((9U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
		        ? 0xeU : ((0xaU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
				   ? ((4U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl))
				       ? 0xbU : 0xcU)
				   : ((0xbU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
				       ? 0xcU : ((0xcU 
						  == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
						  ? 0xdU
						  : 
						 ((0xdU 
						   == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
						   ? 
						  ((((~ (IData)(vlTOPp->iTTLSerialRX)) 
						     & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl) 
							>> 5U)) 
						    & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvCountAck) 
						       == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvCountSto)))
						    ? 9U
						    : 0xdU)
						   : 
						  ((0xeU 
						    == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
						    ? 0U
						    : 0xdU))))))));
}

void VepRISC_coreEmu_epRISC_coreEmu::_settle__TOP__epRISC_coreEmu__18(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_settle__TOP__epRISC_coreEmu__18\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__tmpClock 
	= ((8U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
	    ? (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__oBusClock)
	    : (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rTxClk));
    // ALWAYS at ../../../firmware/io/spi_v1r0.v:118
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rNextState 
	= (0xfU & (((((((((8U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState)) 
			  | (9U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))) 
			 | (7U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))) 
			| (6U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))) 
		       | (5U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))) 
		      | (4U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))) 
		     | (3U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))) 
		    | (2U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState)))
		    ? ((8U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
		        ? ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rControl) 
			     >> 7U) & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rLockAck) 
				       == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rLockSto)))
			    ? 7U : 8U) : ((9U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
					   ? 7U : (
						   (7U 
						    == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
						    ? 6U
						    : 
						   ((6U 
						     == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
						     ? 5U
						     : 
						    ((5U 
						      == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
						      ? 4U
						      : 
						     ((4U 
						       == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
						       ? 3U
						       : 
						      ((3U 
							== (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
						        ? 2U
						        : 1U)))))))
		    : ((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
		        ? 0U : ((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
				 ? 0xbU : ((0xbU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
					    ? 0xaU : 8U)))));
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:199
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvNextState 
	= (0xfU & (((((((((7U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState)) 
			  | (6U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))) 
			 | (5U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))) 
			| (4U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))) 
		       | (3U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))) 
		      | (2U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))) 
		     | (1U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))) 
		    | (0U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState)))
		    ? ((7U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
		        ? ((0x10U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl))
			    ? 0xaU : ((4U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl))
				       ? 0xbU : 0xcU))
		        : ((6U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
			    ? 7U : ((5U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
				     ? 6U : ((4U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
					      ? 5U : 
					     ((3U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
					       ? 4U
					       : ((2U 
						   == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
						   ? 3U
						   : 
						  ((1U 
						    == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
						    ? 2U
						    : 1U)))))))
		    : ((9U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
		        ? 0xeU : ((0xaU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
				   ? ((4U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl))
				       ? 0xbU : 0xcU)
				   : ((0xbU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
				       ? 0xcU : ((0xcU 
						  == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
						  ? 0xdU
						  : 
						 ((0xdU 
						   == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
						   ? 
						  ((((~ (IData)(vlTOPp->iTTLSerialRX)) 
						     & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl) 
							>> 5U)) 
						    & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvCountAck) 
						       == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvCountSto)))
						    ? 9U
						    : 0xdU)
						   : 
						  ((0xeU 
						    == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rRecvState))
						    ? 0U
						    : 0xdU))))))));
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:179
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendNextState 
	= (0xfU & (((((((((7U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState)) 
			  | (6U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))) 
			 | (5U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))) 
			| (4U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))) 
		       | (3U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))) 
		      | (2U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))) 
		     | (1U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))) 
		    | (0U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState)))
		    ? ((7U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
		        ? 0xcU : ((6U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
				   ? 7U : ((5U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
					    ? 6U : 
					   ((4U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
					     ? 5U : 
					    ((3U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
					      ? 4U : 
					     ((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
					       ? 3U
					       : ((1U 
						   == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
						   ? 2U
						   : 1U)))))))
		    : ((9U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
		        ? 0U : ((0xaU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
				 ? ((4U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl))
				     ? 0xbU : 0xcU)
				 : ((0xbU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
				     ? 0xcU : ((0xcU 
						== (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
					        ? 0xdU
					        : (
						   (0xdU 
						    == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
						    ? 
						   ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl) 
						      >> 7U) 
						     & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendCountAck) 
							== (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendCountSto)))
						     ? 9U
						     : 0xdU)
						    : 0xdU)))))));
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__19(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__19\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/io/controller_v1r0.v:200
    if ((1U & (~ (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wInternalReset)))) {
	if ((6U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
		= vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSIBuffer;
	}
    }
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableUART 
	= ((0x10U <= (0x7fffU & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
				 >> 0x10U))) & (0x20U 
						> (0x7fffU 
						   & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						      >> 0x10U))));
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableSPI 
	= ((0x20U <= (0x7fffU & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
				 >> 0x10U))) & (0x30U 
						> (0x7fffU 
						   & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						      >> 0x10U))));
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableVideo 
	= ((0x30U <= (0x7fffU & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
				 >> 0x10U))) & (0x40U 
						> (0x7fffU 
						   & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						      >> 0x10U))));
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableRAM 
	= ((0x40U <= (0x7fffU & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
				 >> 0x10U))) & (0xffU 
						> (0x7fffU 
						   & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						      >> 0x10U))));
    // ALWAYS at ../../../firmware/io/controller_v1r0.v:209
    if (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wInternalReset) {
	vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSIBuffer = 0U;
    } else {
	if ((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSIBuffer 
		= ((0xffffff00U & vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSIBuffer) 
		   | (0xffU & ((0x10U & vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig)
			        ? 0xffU : ((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))
					    ? vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDistributionMOSI
					    : ((3U 
						== (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))
					        ? (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDistributionMOSI 
						   >> 8U)
					        : (
						   (4U 
						    == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))
						    ? 
						   (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDistributionMOSI 
						    >> 0x10U)
						    : 
						   ((5U 
						     == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))
						     ? 
						    (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDistributionMOSI 
						     >> 0x18U)
						     : 0U)))))));
	}
	if ((3U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSIBuffer 
		= ((0xffff00ffU & vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSIBuffer) 
		   | (0xff00U & (((0x10U & vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig)
				   ? 0xffU : ((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))
					       ? vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDistributionMOSI
					       : ((3U 
						   == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))
						   ? 
						  (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDistributionMOSI 
						   >> 8U)
						   : 
						  ((4U 
						    == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))
						    ? 
						   (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDistributionMOSI 
						    >> 0x10U)
						    : 
						   ((5U 
						     == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))
						     ? 
						    (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDistributionMOSI 
						     >> 0x18U)
						     : 0U))))) 
				 << 8U)));
	}
	if ((4U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSIBuffer 
		= ((0xff00ffffU & vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSIBuffer) 
		   | (0xff0000U & (((0x10U & vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig)
				     ? 0xffU : ((2U 
						 == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))
						 ? vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDistributionMOSI
						 : 
						((3U 
						  == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))
						  ? 
						 (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDistributionMOSI 
						  >> 8U)
						  : 
						 ((4U 
						   == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))
						   ? 
						  (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDistributionMOSI 
						   >> 0x10U)
						   : 
						  ((5U 
						    == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))
						    ? 
						   (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDistributionMOSI 
						    >> 0x18U)
						    : 0U))))) 
				   << 0x10U)));
	}
	if ((5U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState))) {
	    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSIBuffer 
		= ((0xffffffU & vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSIBuffer) 
		   | (0xff000000U & (((0x10U & vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig)
				       ? 0xffU : ((2U 
						   == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))
						   ? vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDistributionMOSI
						   : 
						  ((3U 
						    == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))
						    ? 
						   (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDistributionMOSI 
						    >> 8U)
						    : 
						   ((4U 
						     == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))
						     ? 
						    (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDistributionMOSI 
						     >> 0x10U)
						     : 
						    ((5U 
						      == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rPipeState))
						      ? 
						     (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDistributionMOSI 
						      >> 0x18U)
						      : 0U))))) 
				     << 0x18U)));
	}
    }
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_multiclk__TOP__epRISC_coreEmu__20(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_multiclk__TOP__epRISC_coreEmu__20\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:179
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendNextState 
	= (0xfU & (((((((((7U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState)) 
			  | (6U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))) 
			 | (5U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))) 
			| (4U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))) 
		       | (3U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))) 
		      | (2U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))) 
		     | (1U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))) 
		    | (0U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState)))
		    ? ((7U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
		        ? 0xcU : ((6U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
				   ? 7U : ((5U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
					    ? 6U : 
					   ((4U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
					     ? 5U : 
					    ((3U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
					      ? 4U : 
					     ((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
					       ? 3U
					       : ((1U 
						   == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
						   ? 2U
						   : 1U)))))))
		    : ((9U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
		        ? 0U : ((0xaU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
				 ? ((4U & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl))
				     ? 0xbU : 0xcU)
				 : ((0xbU == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
				     ? 0xcU : ((0xcU 
						== (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
					        ? 0xdU
					        : (
						   (0xdU 
						    == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendState))
						    ? 
						   ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl) 
						      >> 7U) 
						     & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendCountAck) 
							== (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rSendCountSto)))
						     ? 9U
						     : 0xdU)
						    : 0xdU)))))));
}

void VepRISC_coreEmu_epRISC_coreEmu::_settle__TOP__epRISC_coreEmu__21(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_settle__TOP__epRISC_coreEmu__21\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableUART 
	= ((0x10U <= (0x7fffU & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
				 >> 0x10U))) & (0x20U 
						> (0x7fffU 
						   & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						      >> 0x10U))));
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableSPI 
	= ((0x20U <= (0x7fffU & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
				 >> 0x10U))) & (0x30U 
						> (0x7fffU 
						   & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						      >> 0x10U))));
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableVideo 
	= ((0x30U <= (0x7fffU & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
				 >> 0x10U))) & (0x40U 
						> (0x7fffU 
						   & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						      >> 0x10U))));
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableRAM 
	= ((0x40U <= (0x7fffU & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
				 >> 0x10U))) & (0xffU 
						> (0x7fffU 
						   & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						      >> 0x10U))));
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__22(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_sequent__TOP__epRISC_coreEmu__22\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState 
	= vlSymsp->TOP__epRISC_coreEmu.__Vdly__controller__DOT__rPipeState;
    // ALWAYS at ../../../firmware/io/controller_v1r0.v:187
    vlSymsp->TOP__epRISC_coreEmu.__Vtableidx1 = vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeNextState 
	= vlSymsp->TOP__epRISC_coreEmu.__Vtable1___PVT__controller__DOT__rPipeNextState
	[vlSymsp->TOP__epRISC_coreEmu.__Vtableidx1];
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_multiclk__TOP__epRISC_coreEmu__23(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_multiclk__TOP__epRISC_coreEmu__23\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset 
	= (((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState)) 
	    & (0x7fffU == (0x7fffU & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
				      >> 0x10U)))) 
	   & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
	      >> 0x1fU));
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusData 
	= (0xffffU & (((7U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState)) 
		       | (1U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState)))
		       ? (0xffffU & vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI)
		       : 0U));
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite 
	= ((7U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState)) 
	   & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
	      >> 0x1fU));
}

void VepRISC_coreEmu_epRISC_coreEmu::_settle__TOP__epRISC_coreEmu__24(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_settle__TOP__epRISC_coreEmu__24\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusReset 
	= (((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState)) 
	    & (0x7fffU == (0x7fffU & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
				      >> 0x10U)))) 
	   & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
	      >> 0x1fU));
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusData 
	= (0xffffU & (((7U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState)) 
		       | (1U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState)))
		       ? (0xffffU & vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI)
		       : 0U));
    // ALWAYS at ../../../firmware/io/controller_v1r0.v:187
    vlSymsp->TOP__epRISC_coreEmu.__Vtableidx1 = vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState;
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeNextState 
	= vlSymsp->TOP__epRISC_coreEmu.__Vtable1___PVT__controller__DOT__rPipeNextState
	[vlSymsp->TOP__epRISC_coreEmu.__Vtableidx1];
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite 
	= ((7U == (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rPipeState)) 
	   & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
	      >> 0x1fU));
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wInternalReset 
	= (1U & ((~ (IData)(vlTOPp->iBoardReset)) | 
		 (0U == (3U & (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig 
			       >> 2U)))));
    vlSymsp->TOP__epRISC_coreEmu.controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber7 
	= (1U & ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) 
		   & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableVideo)) 
		  & (3U == (3U & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
				  >> 0x10U)))) ? 1U
		  : 0U));
    vlSymsp->TOP__epRISC_coreEmu.controller__DOT__gpio__DOT__oData__out__en16 
	= (((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) 
	    | (0x10U <= (0x7fffU & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
				    >> 0x10U)))) ? 0U
	    : 0xffffU);
    vlSymsp->TOP__epRISC_coreEmu.controller__DOT__bmem__DOT__oData__out__en0 
	= ((1U & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) 
		  | (~ (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableRAM))))
	    ? 0xffff0000U : 0xffffffffU);
    vlSymsp->TOP__epRISC_coreEmu.controller__DOT__bmem__DOT__oData__out__out0 
	= ((1U & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) 
		  | (~ (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableRAM))))
	    ? 0U : vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bmem__DOT__rContents
	   [(0xffU & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
		      >> 0x10U))]);
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_combo__TOP__epRISC_coreEmu__25(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_combo__TOP__epRISC_coreEmu__25\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wInternalReset 
	= (1U & ((~ (IData)(vlTOPp->iBoardReset)) | 
		 (0U == (3U & (vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig 
			       >> 2U)))));
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_multiclk__TOP__epRISC_coreEmu__26(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_multiclk__TOP__epRISC_coreEmu__26\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu.controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber7 
	= (1U & ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) 
		   & (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableVideo)) 
		  & (3U == (3U & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
				  >> 0x10U)))) ? 1U
		  : 0U));
    vlSymsp->TOP__epRISC_coreEmu.controller__DOT__gpio__DOT__oData__out__en16 
	= (((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) 
	    | (0x10U <= (0x7fffU & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
				    >> 0x10U)))) ? 0U
	    : 0xffffU);
    vlSymsp->TOP__epRISC_coreEmu.controller__DOT__bmem__DOT__oData__out__en0 
	= ((1U & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) 
		  | (~ (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableRAM))))
	    ? 0xffff0000U : 0xffffffffU);
    vlSymsp->TOP__epRISC_coreEmu.controller__DOT__bmem__DOT__oData__out__out0 
	= ((1U & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) 
		  | (~ (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableRAM))))
	    ? 0U : vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bmem__DOT__rContents
	   [(0xffU & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
		      >> 0x10U))]);
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_coreEmu::_settle__TOP__epRISC_coreEmu__27(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_settle__TOP__epRISC_coreEmu__27\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wInternalMISO 
	= (0xffffU & ((0x10U > (0x7fffU & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
					   >> 0x10U)))
		       ? (((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__mBusWrite) 
			     | (0x10U <= (0x7fffU & 
					  (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
					   >> 0x10U))))
			     ? 0U : ((0U == (3U & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						   >> 0x10U)))
				      ? (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rDirection)
				      : ((1U == (3U 
						 & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						    >> 0x10U)))
					  ? (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rInterrupt)
					  : ((2U == 
					      (3U & 
					       (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						>> 0x10U)))
					      ? (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__gpio__DOT__rValue)
					      : 0xeaU)))) 
			   & (IData)(vlSymsp->TOP__epRISC_coreEmu.controller__DOT__gpio__DOT__oData__out__en16)) 
			  & (IData)(vlSymsp->TOP__epRISC_coreEmu.controller__DOT__gpio__DOT__oData__out__en16))
		       : ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableUART)
			   ? ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableUART)
				 ? ((0U == (3U & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						  >> 0x10U)))
				     ? (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rControl)
				     : ((1U == (3U 
						& (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						   >> 0x10U)))
					 ? (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rDataIn)
					 : ((2U == 
					     (3U & 
					      (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
					       >> 0x10U)))
					     ? (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__uart__DOT__rDataOut)
					     : 1U)))
				 : 0U) & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableUART)
					   ? 0xffffU
					   : 0U)) & 
			      ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableUART)
			        ? 0xffffU : 0U)) : 
			  ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableSPI)
			    ? ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableSPI)
				  ? ((0U == (3U & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						   >> 0x10U)))
				      ? ((8U != (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rState))
					  ? (0x80U 
					     | (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rControl))
					  : (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rControl))
				      : ((1U == (3U 
						 & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						    >> 0x10U)))
					  ? (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rDataIn)
					  : ((2U == 
					      (3U & 
					       (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						>> 0x10U)))
					      ? (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bspi__DOT__rDataOut)
					      : 1U)))
				  : 0U) & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableSPI)
					    ? 0xffffU
					    : 0U)) 
			       & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableSPI)
				   ? 0xffffU : 0U))
			    : ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableVideo)
			        ? ((((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableVideo)
				      ? ((0U == (3U 
						 & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						    >> 0x10U)))
					  ? (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rConfig)
					  : ((1U == 
					      (3U & 
					       (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						>> 0x10U)))
					      ? (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rColumn)
					      : ((2U 
						  == 
						  (3U 
						   & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						      >> 0x10U)))
						  ? (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__rRow)
						  : 
						 ((3U 
						   == 
						   (3U 
						    & (vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__rInternalMOSI 
						       >> 0x10U)))
						   ? (IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__bvga__DOT__wCharRAMData)
						   : 1U))))
				      : 0U) & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableVideo)
					        ? 0xffffU
					        : 0U)) 
				   & ((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__controller__DOT__wEnableVideo)
				       ? 0xffffU : 0U))
			        : ((vlSymsp->TOP__epRISC_coreEmu.controller__DOT__bmem__DOT__oData__out__out0 
				    & vlSymsp->TOP__epRISC_coreEmu.controller__DOT__bmem__DOT__oData__out__en0) 
				   & vlSymsp->TOP__epRISC_coreEmu.controller__DOT__bmem__DOT__oData__out__en0))))));
}

void VepRISC_coreEmu_epRISC_coreEmu::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_ctor_var_reset\n"); );
    // Body
    iBoardClock = VL_RAND_RESET_I(1);
    iBoardReset = VL_RAND_RESET_I(1);
    iBoardSense = VL_RAND_RESET_I(1);
    iBoardReceive = VL_RAND_RESET_I(1);
    oBoardAcknowledge = VL_RAND_RESET_I(1);
    __PVT__oBoardTransmit = VL_RAND_RESET_I(1);
    bBoardDebug0 = VL_RAND_RESET_I(1);
    bBoardDebug1 = VL_RAND_RESET_I(1);
    bBoardDebug2 = VL_RAND_RESET_I(1);
    bBoardDebug3 = VL_RAND_RESET_I(1);
    bBoardDebug4 = VL_RAND_RESET_I(1);
    bBoardDebug5 = VL_RAND_RESET_I(1);
    __PVT__iBusInterrupt = VL_RAND_RESET_I(1);
    iSerialRX = VL_RAND_RESET_I(1);
    iSerialCTS = VL_RAND_RESET_I(1);
    iSerialDCD = VL_RAND_RESET_I(1);
    iSerialDSR = VL_RAND_RESET_I(1);
    oSerialDTR = VL_RAND_RESET_I(1);
    oSerialRTS = VL_RAND_RESET_I(1);
    oSerialTX = VL_RAND_RESET_I(1);
    iTTLSerialRX = VL_RAND_RESET_I(1);
    iTTLSerialRST = VL_RAND_RESET_I(1);
    oTTLSerialTX = VL_RAND_RESET_I(1);
    bGPIO0 = VL_RAND_RESET_I(1);
    bGPIO1 = VL_RAND_RESET_I(1);
    bGPIO2 = VL_RAND_RESET_I(1);
    bGPIO3 = VL_RAND_RESET_I(1);
    bGPIO4 = VL_RAND_RESET_I(1);
    bGPIO5 = VL_RAND_RESET_I(1);
    bGPIO6 = VL_RAND_RESET_I(1);
    bGPIO7 = VL_RAND_RESET_I(1);
    bGPIO8 = VL_RAND_RESET_I(1);
    bGPIO9 = VL_RAND_RESET_I(1);
    bGPIO10 = VL_RAND_RESET_I(1);
    bGPIO11 = VL_RAND_RESET_I(1);
    bGPIO12 = VL_RAND_RESET_I(1);
    bGPIO13 = VL_RAND_RESET_I(1);
    bGPIO14 = VL_RAND_RESET_I(1);
    bGPIO15 = VL_RAND_RESET_I(1);
    iExtBusInterrupt = VL_RAND_RESET_I(1);
    iExtBusMISO = VL_RAND_RESET_I(4);
    oExtBusClock = VL_RAND_RESET_I(1);
    oExtBusSS = VL_RAND_RESET_I(2);
    oExtBusMOSI = VL_RAND_RESET_I(4);
    iSPIMISO = VL_RAND_RESET_I(1);
    iSPIDetect0 = VL_RAND_RESET_I(1);
    iSPIDetect1 = VL_RAND_RESET_I(1);
    iSPIWrite0 = VL_RAND_RESET_I(1);
    iSPIWrite1 = VL_RAND_RESET_I(1);
    oSPIMOSI = VL_RAND_RESET_I(1);
    oSPISelect = VL_RAND_RESET_I(1);
    oSPIClock = VL_RAND_RESET_I(1);
    oVGAHorizontal = VL_RAND_RESET_I(1);
    oVGAVertical = VL_RAND_RESET_I(1);
    oVGAColor = VL_RAND_RESET_I(8);
    bPS2Data = VL_RAND_RESET_I(1);
    bPS2Clock = VL_RAND_RESET_I(1);
    bBoardDebug0__out = VL_RAND_RESET_I(1);
    bBoardDebug0__en = VL_RAND_RESET_I(1);
    bBoardDebug1__out = VL_RAND_RESET_I(1);
    bBoardDebug1__en = VL_RAND_RESET_I(1);
    bBoardDebug2__out = VL_RAND_RESET_I(1);
    bBoardDebug2__en = VL_RAND_RESET_I(1);
    bBoardDebug3__out = VL_RAND_RESET_I(1);
    bBoardDebug3__en = VL_RAND_RESET_I(1);
    bBoardDebug4__out = VL_RAND_RESET_I(1);
    bBoardDebug4__en = VL_RAND_RESET_I(1);
    bBoardDebug5__out = VL_RAND_RESET_I(1);
    bBoardDebug5__en = VL_RAND_RESET_I(1);
    bGPIO0__out = VL_RAND_RESET_I(1);
    bGPIO0__en = VL_RAND_RESET_I(1);
    bGPIO1__out = VL_RAND_RESET_I(1);
    bGPIO1__en = VL_RAND_RESET_I(1);
    bGPIO2__out = VL_RAND_RESET_I(1);
    bGPIO2__en = VL_RAND_RESET_I(1);
    bGPIO3__out = VL_RAND_RESET_I(1);
    bGPIO3__en = VL_RAND_RESET_I(1);
    bGPIO4__out = VL_RAND_RESET_I(1);
    bGPIO4__en = VL_RAND_RESET_I(1);
    bGPIO5__out = VL_RAND_RESET_I(1);
    bGPIO5__en = VL_RAND_RESET_I(1);
    bGPIO6__out = VL_RAND_RESET_I(1);
    bGPIO6__en = VL_RAND_RESET_I(1);
    bGPIO7__out = VL_RAND_RESET_I(1);
    bGPIO7__en = VL_RAND_RESET_I(1);
    bGPIO8__out = VL_RAND_RESET_I(1);
    bGPIO8__en = VL_RAND_RESET_I(1);
    bGPIO9__out = VL_RAND_RESET_I(1);
    bGPIO9__en = VL_RAND_RESET_I(1);
    bGPIO10__out = VL_RAND_RESET_I(1);
    bGPIO10__en = VL_RAND_RESET_I(1);
    bGPIO11__out = VL_RAND_RESET_I(1);
    bGPIO11__en = VL_RAND_RESET_I(1);
    bGPIO12__out = VL_RAND_RESET_I(1);
    bGPIO12__en = VL_RAND_RESET_I(1);
    bGPIO13__out = VL_RAND_RESET_I(1);
    bGPIO13__en = VL_RAND_RESET_I(1);
    bGPIO14__out = VL_RAND_RESET_I(1);
    bGPIO14__en = VL_RAND_RESET_I(1);
    bGPIO15__out = VL_RAND_RESET_I(1);
    bGPIO15__en = VL_RAND_RESET_I(1);
    bPS2Data__out = VL_RAND_RESET_I(1);
    bPS2Data__en = VL_RAND_RESET_I(1);
    bPS2Clock__out = VL_RAND_RESET_I(1);
    bPS2Clock__en = VL_RAND_RESET_I(1);
    __PVT__controller__DOT__rInternalMOSI = VL_RAND_RESET_I(32);
    __PVT__controller__DOT__rInternalMOSIBuffer = VL_RAND_RESET_I(32);
    __PVT__controller__DOT__wInternalMISO = VL_RAND_RESET_I(16);
    __PVT__controller__DOT__mBusWrite = VL_RAND_RESET_I(1);
    __PVT__controller__DOT__mBusReset = VL_RAND_RESET_I(1);
    __PVT__controller__DOT__wInternalReset = VL_RAND_RESET_I(1);
    __PVT__controller__DOT__mBusData = VL_RAND_RESET_I(16);
    __PVT__controller__DOT__wEnableUART = VL_RAND_RESET_I(1);
    __PVT__controller__DOT__wEnableSPI = VL_RAND_RESET_I(1);
    __PVT__controller__DOT__wEnableVideo = VL_RAND_RESET_I(1);
    __PVT__controller__DOT__wEnablePS2 = VL_RAND_RESET_I(1);
    __PVT__controller__DOT__wEnableRAM = VL_RAND_RESET_I(1);
    __PVT__controller__DOT__wSerialClock = VL_RAND_RESET_I(1);
    __PVT__controller__DOT__wSPIClock = VL_RAND_RESET_I(1);
    __PVT__controller__DOT__rPipeState = VL_RAND_RESET_I(5);
    __PVT__controller__DOT__rPipePrevState = VL_RAND_RESET_I(5);
    __PVT__controller__DOT__rPipeNextState = VL_RAND_RESET_I(5);
    __PVT__controller__DOT__oBvusInterrupt = VL_RAND_RESET_I(1);
    __PVT__controller__DOT__oBrusInterrupt = VL_RAND_RESET_I(1);
    __PVT__controller__DOT__clock__DOT__rClockSplit = VL_RAND_RESET_I(7);
    __PVT__controller__DOT__gpio__DOT__rDirection = VL_RAND_RESET_I(16);
    __PVT__controller__DOT__gpio__DOT__rInterrupt = VL_RAND_RESET_I(16);
    __PVT__controller__DOT__gpio__DOT__rValue = VL_RAND_RESET_I(16);
    controller__DOT__gpio__DOT__oData__out__en16 = VL_RAND_RESET_I(16);
    __PVT__controller__DOT__uart__DOT__rSendState = VL_RAND_RESET_I(4);
    __PVT__controller__DOT__uart__DOT__rSendNextState = VL_RAND_RESET_I(4);
    __PVT__controller__DOT__uart__DOT__rSendPrevState = VL_RAND_RESET_I(4);
    __PVT__controller__DOT__uart__DOT__rRecvState = VL_RAND_RESET_I(4);
    __PVT__controller__DOT__uart__DOT__rRecvNextState = VL_RAND_RESET_I(4);
    __PVT__controller__DOT__uart__DOT__rRecvPrevState = VL_RAND_RESET_I(4);
    __PVT__controller__DOT__uart__DOT__rRecvCountSto = VL_RAND_RESET_I(5);
    __PVT__controller__DOT__uart__DOT__rRecvCountAck = VL_RAND_RESET_I(5);
    __PVT__controller__DOT__uart__DOT__rSendCountSto = VL_RAND_RESET_I(5);
    __PVT__controller__DOT__uart__DOT__rSendCountAck = VL_RAND_RESET_I(5);
    __PVT__controller__DOT__uart__DOT__rSendDataCnt = VL_RAND_RESET_I(6);
    __PVT__controller__DOT__uart__DOT__rRecvDataCnt = VL_RAND_RESET_I(6);
    __PVT__controller__DOT__uart__DOT__rSendDataBuf = VL_RAND_RESET_I(8);
    __PVT__controller__DOT__uart__DOT__rRecvDataBuf = VL_RAND_RESET_I(8);
    __PVT__controller__DOT__uart__DOT__rControl = VL_RAND_RESET_I(16);
    __PVT__controller__DOT__uart__DOT__rDataIn = VL_RAND_RESET_I(16);
    __PVT__controller__DOT__uart__DOT__rDataOut = VL_RAND_RESET_I(16);
    __PVT__controller__DOT__bspi__DOT__rTxClk = VL_RAND_RESET_I(1);
    __PVT__controller__DOT__bspi__DOT__rClkDivide = VL_RAND_RESET_I(2);
    __PVT__controller__DOT__bspi__DOT__rState = VL_RAND_RESET_I(4);
    __PVT__controller__DOT__bspi__DOT__rPrevState = VL_RAND_RESET_I(4);
    __PVT__controller__DOT__bspi__DOT__rNextState = VL_RAND_RESET_I(4);
    __PVT__controller__DOT__bspi__DOT__rLockSto = VL_RAND_RESET_I(5);
    __PVT__controller__DOT__bspi__DOT__rLockAck = VL_RAND_RESET_I(5);
    __PVT__controller__DOT__bspi__DOT__rDataBuf = VL_RAND_RESET_I(8);
    __PVT__controller__DOT__bspi__DOT__rControl = VL_RAND_RESET_I(16);
    __PVT__controller__DOT__bspi__DOT__rDataIn = VL_RAND_RESET_I(16);
    __PVT__controller__DOT__bspi__DOT__rDataOut = VL_RAND_RESET_I(16);
    __PVT__controller__DOT__bspi__DOT__tmpClock = VL_RAND_RESET_I(1);
    __PVT__controller__DOT__bvga__DOT__rRowSel = VL_RAND_RESET_I(4);
    __PVT__controller__DOT__bvga__DOT__rDataOutput = VL_RAND_RESET_I(8);
    __PVT__controller__DOT__bvga__DOT__rColorOutput = VL_RAND_RESET_I(8);
    __PVT__controller__DOT__bvga__DOT__rPulseX = VL_RAND_RESET_I(10);
    __PVT__controller__DOT__bvga__DOT__rPulseY = VL_RAND_RESET_I(10);
    __PVT__controller__DOT__bvga__DOT__rTempX = VL_RAND_RESET_I(12);
    __PVT__controller__DOT__bvga__DOT__rTempY = VL_RAND_RESET_I(12);
    __PVT__controller__DOT__bvga__DOT__rFramePtr = VL_RAND_RESET_I(12);
    __PVT__controller__DOT__bvga__DOT__rConfig = VL_RAND_RESET_I(16);
    __PVT__controller__DOT__bvga__DOT__rRow = VL_RAND_RESET_I(16);
    __PVT__controller__DOT__bvga__DOT__rColumn = VL_RAND_RESET_I(16);
    __PVT__controller__DOT__bvga__DOT__wCharRAMData = VL_RAND_RESET_I(16);
    __PVT__controller__DOT__bvga__DOT__wCharRAMFrame = VL_RAND_RESET_I(16);
    controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber7 = VL_RAND_RESET_I(1);
    controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber1 = VL_RAND_RESET_I(12);
    controller__DOT__bvga__DOT____Vcellinp__vrom____pinNumber1 = VL_RAND_RESET_I(12);
    __PVT__controller__DOT__bvga__DOT__vram__DOT__rClr = VL_RAND_RESET_I(13);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
	    __PVT__controller__DOT__bvga__DOT__vram__DOT__rContents[__Vi0] = VL_RAND_RESET_I(16);
    }}
    __PVT__controller__DOT__bvga__DOT__vrom__DOT__rDataOut = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<3072; ++__Vi0) {
	    __PVT__controller__DOT__bvga__DOT__vrom__DOT__rContents[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    __PVT__controller__DOT__bmem__DOT__rContents[__Vi0] = VL_RAND_RESET_I(32);
    }}
    controller__DOT__bmem__DOT__oData__out__out0 = VL_RAND_RESET_I(32);
    controller__DOT__bmem__DOT__oData__out__en0 = VL_RAND_RESET_I(32);
    __Vtableidx1 = VL_RAND_RESET_I(5);
    __Vtable1___PVT__controller__DOT__rPipeNextState[0] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[1] = 2U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[2] = 3U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[3] = 4U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[4] = 5U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[5] = 6U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[6] = 7U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[7] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[8] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[9] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[10] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[11] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[12] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[13] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[14] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[15] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[16] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[17] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[18] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[19] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[20] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[21] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[22] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[23] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[24] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[25] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[26] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[27] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[28] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[29] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[30] = 1U;
    __Vtable1___PVT__controller__DOT__rPipeNextState[31] = 1U;
    __Vdly__controller__DOT__rPipeState = VL_RAND_RESET_I(5);
    __Vdly__controller__DOT__clock__DOT__rClockSplit = VL_RAND_RESET_I(7);
    __Vdly__controller__DOT__gpio__DOT__rValue = VL_RAND_RESET_I(16);
    __Vdlyvdim0__controller__DOT__bvga__DOT__vram__DOT__rContents__v0 = VL_RAND_RESET_I(12);
    __Vdlyvval__controller__DOT__bvga__DOT__vram__DOT__rContents__v0 = VL_RAND_RESET_I(16);
    __Vdlyvset__controller__DOT__bvga__DOT__vram__DOT__rContents__v0 = VL_RAND_RESET_I(1);
    __Vdly__controller__DOT__uart__DOT__rRecvCountSto = VL_RAND_RESET_I(5);
    __Vdly__controller__DOT__uart__DOT__rSendCountSto = VL_RAND_RESET_I(5);
    __Vdly__controller__DOT__uart__DOT__rSendState = VL_RAND_RESET_I(4);
    __Vdly__controller__DOT__uart__DOT__rSendCountAck = VL_RAND_RESET_I(5);
    __Vdly__controller__DOT__uart__DOT__rSendDataCnt = VL_RAND_RESET_I(6);
    __Vdly__controller__DOT__uart__DOT__rRecvState = VL_RAND_RESET_I(4);
    __Vdly__controller__DOT__uart__DOT__rRecvCountAck = VL_RAND_RESET_I(5);
    __Vdly__controller__DOT__uart__DOT__rRecvDataCnt = VL_RAND_RESET_I(6);
    __Vdly__controller__DOT__bspi__DOT__rClkDivide = VL_RAND_RESET_I(2);
    __Vdly__controller__DOT__bspi__DOT__rTxClk = VL_RAND_RESET_I(1);
    __Vdly__controller__DOT__bspi__DOT__rState = VL_RAND_RESET_I(4);
    __Vdly__controller__DOT__bspi__DOT__rLockAck = VL_RAND_RESET_I(5);
    __Vdly__controller__DOT__bspi__DOT__rLockSto = VL_RAND_RESET_I(5);
    __Vdly__controller__DOT__bvga__DOT__rPulseX = VL_RAND_RESET_I(10);
    __Vdly__controller__DOT__bvga__DOT__rPulseY = VL_RAND_RESET_I(10);
    __Vdly__controller__DOT__bvga__DOT__rRowSel = VL_RAND_RESET_I(4);
    __Vdly__controller__DOT__bvga__DOT__rFramePtr = VL_RAND_RESET_I(12);
    __Vdly__controller__DOT__bvga__DOT__rTempX = VL_RAND_RESET_I(12);
    __Vdly__controller__DOT__bvga__DOT__rTempY = VL_RAND_RESET_I(12);
}

void VepRISC_coreEmu_epRISC_coreEmu::_configure_coverage(VepRISC_coreEmu__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("      VepRISC_coreEmu_epRISC_coreEmu::_configure_coverage\n"); );
}
