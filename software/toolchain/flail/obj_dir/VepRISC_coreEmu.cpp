// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VepRISC_coreEmu.h for the primary calling header

#include "VepRISC_coreEmu.h"   // For This
#include "VepRISC_coreEmu__Syms.h"

//--------------------
// STATIC VARIABLES

VL_ST_SIG8(VepRISC_coreEmu::__Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[512],0,0);
VL_ST_SIG8(VepRISC_coreEmu::__Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[64],4,0);
VL_ST_SIG8(VepRISC_coreEmu::__Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[32],4,0);

//--------------------

VL_CTOR_IMP(VepRISC_coreEmu) {
    VepRISC_coreEmu__Syms* __restrict vlSymsp = __VlSymsp = new VepRISC_coreEmu__Syms(this, name());
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VepRISC_coreEmu::__Vconfigure(VepRISC_coreEmu__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VepRISC_coreEmu::~VepRISC_coreEmu() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VepRISC_coreEmu::eval() {
    VepRISC_coreEmu__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VepRISC_coreEmu::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VepRISC_coreEmu::_eval_initial_loop(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void VepRISC_coreEmu::_initial__TOP__1(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_initial__TOP__1\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at ../../../firmware/core/machine_v1r0.v:91
    vlTOPp->oBoardTransmit = 1U;
}

void VepRISC_coreEmu::_settle__TOP__2(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_settle__TOP__2\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->bPS2Data = 0U;
    vlTOPp->bPS2Clock = 0U;
    vlTOPp->bBoardDebug1 = 0U;
    vlTOPp->bBoardDebug0 = 0U;
    vlTOPp->bBoardDebug2 = 0U;
    vlTOPp->bBoardDebug3 = 0U;
    vlTOPp->bBoardDebug4 = 0U;
    vlTOPp->bBoardDebug5 = 0U;
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__3(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__3\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__machine__DOT__clock__DOT__rClockSplit,1,0);
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__controller__DOT__clock__DOT__rClockSplit,6,0);
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRowSel,3,0);
    //char	__VpadToAlign47[1];
    VL_SIG16(__Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX,9,0);
    VL_SIG16(__Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY,9,0);
    VL_SIG16(__Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rFramePtr,11,0);
    VL_SIG16(__Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempX,11,0);
    VL_SIG16(__Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempY,11,0);
    //char	__VpadToAlign58[2];
    // Body
    // ALWAYS at ../../../firmware/io/video_v1r0.v:186
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rDataOut 
	= ((0xbffU >= (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vrom____pinNumber1))
	    ? vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents
	   [vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vrom____pinNumber1]
	    : 0U);
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRowSel 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRowSel;
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX;
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY;
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rFramePtr 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rFramePtr;
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempX 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempX;
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempY 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempY;
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__clock__DOT__rClockSplit 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__clock__DOT__rClockSplit;
    __Vdly__epRISC_coreEmu__DOT__machine__DOT__clock__DOT__rClockSplit 
	= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__clock__DOT__rClockSplit;
    // ALWAYS at ../../../firmware/io/video_v1r0.v:76
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	__Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX = 0U;
	__Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY = 0U;
	__Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRowSel = 0U;
    } else {
	__Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX 
	    = (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX)));
	if ((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX))) {
	    vlTOPp->oVGAHorizontal = 1U;
	} else {
	    if ((0x10U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX))) {
		vlTOPp->oVGAHorizontal = 0U;
	    } else {
		if ((0x70U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX))) {
		    vlTOPp->oVGAHorizontal = 1U;
		} else {
		    if ((0x320U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX))) {
			__Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY 
			    = (0x3ffU & ((IData)(1U) 
					 + (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY)));
			__Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRowSel 
			    = (0xfU & ((IData)(1U) 
				       + (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRowSel)));
			__Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX = 0U;
		    }
		}
	    }
	}
	if ((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY))) {
	    vlTOPp->oVGAVertical = 1U;
	} else {
	    if ((0xaU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY))) {
		vlTOPp->oVGAVertical = 0U;
	    } else {
		if ((0xcU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY))) {
		    vlTOPp->oVGAVertical = 1U;
		} else {
		    if ((0x20dU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY))) {
			__Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY = 0U;
			__Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRowSel = 0U;
		    }
		}
	    }
	}
	if ((0xcU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRowSel))) {
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRowSel = 0U;
	}
    }
    // ALWAYS at ../../../firmware/io/video_v1r0.v:103
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rDataOutput = 0U;
	__Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rFramePtr = 0U;
    } else {
	if ((6U == (7U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX)))) {
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rFramePtr 
		= (0xfffU & (((IData)(0x50U) * (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempY)) 
			     + (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempX)));
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempX 
		= (0xfffU & ((0x9aU > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX))
			      ? 0U : (((0x9aU <= (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX)) 
				       & (0xa0U > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX)))
				       ? 1U : ((IData)(2U) 
					       + (0x7fU 
						  & (((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX) 
						      - (IData)(0xa0U)) 
						     >> 3U))))));
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempY 
		= (0xfffU & VL_DIV_III(32, (0x3ffU 
					    & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY) 
					       - (IData)(0x23U))), (IData)(0xcU)));
	} else {
	    if ((7U == (7U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX)))) {
		vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rDataOutput 
		    = (0xffU & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rDataOut));
		vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColorOutput 
		    = (0xffU & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__wCharRAMFrame) 
				>> 8U));
	    }
	}
    }
    // ALWAYS at ../../../firmware/io/controller_v1r0.v:64
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__clock__DOT__rClockSplit 
	= (0x7fU & ((IData)(1U) + (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__clock__DOT__rClockSplit)));
    if ((8U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__clock__DOT__rClockSplit))) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wSerialClock 
	    = (1U & (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wSerialClock)));
    }
    if ((0x1bU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__clock__DOT__rClockSplit))) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wSPIClock 
	    = (1U & (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wSPIClock)));
    }
    // ALWAYS at ../../../firmware/core/machine_v1r0.v:33
    __Vdly__epRISC_coreEmu__DOT__machine__DOT__clock__DOT__rClockSplit 
	= (3U & ((IData)(1U) + (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__clock__DOT__rClockSplit)));
    if ((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__clock__DOT__rClockSplit))) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock = 1U;
    }
    if ((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__clock__DOT__rClockSplit))) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock = 1U;
    }
    if ((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__clock__DOT__rClockSplit))) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock = 0U;
    }
    if ((3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__clock__DOT__rClockSplit))) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock = 0U;
    }
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRowSel 
	= __Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRowSel;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempY 
	= __Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempY;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempX 
	= __Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempX;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX 
	= __Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY 
	= __Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__clock__DOT__rClockSplit 
	= __Vdly__epRISC_coreEmu__DOT__controller__DOT__clock__DOT__rClockSplit;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__clock__DOT__rClockSplit 
	= __Vdly__epRISC_coreEmu__DOT__machine__DOT__clock__DOT__rClockSplit;
    vlTOPp->oVGAColor = ((1U & (((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rDataOutput) 
				 >> (7U & ((IData)(7U) 
					   - (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX)))) 
				& ((1U & ((((0x23U 
					     <= (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY)) 
					    & (0x203U 
					       > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY)))
					    ? 1U : 0U) 
					  & (((0xa0U 
					       <= (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX)) 
					      & (0x320U 
						 > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX)))
					      ? 1U : 0U)))
				    ? 1U : 0U))) ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColorOutput)
			  : 0U);
    // ALWAYS at ../../../firmware/io/video_v1r0.v:169
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__wCharRAMFrame 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rContents
	[vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rFramePtr];
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rFramePtr 
	= __Vdly__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rFramePtr;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vrom____pinNumber1 
	= (((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRowSel) 
	    << 8U) | (0xffU & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__wCharRAMFrame)));
}

void VepRISC_coreEmu::_initial__TOP__4(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_initial__TOP__4\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at ../../../firmware/io/video_v1r0.v:190
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0U] = 0x55U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[1U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[2U] = 0x55U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[3U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[4U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[6U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[7U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[8U] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[9U] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbU] = 0x6cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xcU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xdU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xeU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xfU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x10U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x11U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x12U] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x13U] = 0x3eU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x14U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x15U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x16U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x17U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x18U] = 0xc0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x19U] = 6U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1aU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1bU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1eU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1fU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x20U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x21U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x22U] = 0x28U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x23U] = 0x44U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x24U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x25U] = 0xe2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x26U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x27U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x28U] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x29U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2aU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2fU] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x30U] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x31U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x32U] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x33U] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x34U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x35U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x36U] = 0x7eU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x37U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x38U] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x39U] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3cU] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3eU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3fU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x40U] = 0xfcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x41U] = 6U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x42U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x43U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x44U] = 0xfcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x45U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x46U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x47U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x48U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x49U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4aU] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4bU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4cU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4dU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4eU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4fU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x50U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x51U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x52U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x53U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x54U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x55U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x56U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x57U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x58U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x59U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5aU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5bU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5cU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5dU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5eU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x60U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x61U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x62U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x63U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x64U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x65U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x66U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x67U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x68U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x69U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6bU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x70U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x71U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x72U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x73U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x74U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x75U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x76U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x77U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x78U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x79U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7bU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7dU] = 0x30U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7fU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x80U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x81U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x82U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x83U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x84U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x85U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x86U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x87U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x88U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x89U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8aU] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8bU] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8dU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8fU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x90U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x91U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x92U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x93U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x94U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x95U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x96U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x97U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x98U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x99U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9aU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9bU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9eU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa0U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa1U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa2U] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa5U] = 0xfcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa6U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa7U] = 6U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xabU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xacU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xadU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xafU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xc9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xcaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xcbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xccU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xcdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xceU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xcfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xd9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xdaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xdbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xdcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xddU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xdeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xdfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xe9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xeaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xebU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xecU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xedU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xeeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xefU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xf9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xfaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xfbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xfcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xfdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xfeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xffU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x100U] = 0x55U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x101U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x102U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x103U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x104U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x105U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x106U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x107U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x108U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x109U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x10aU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x10bU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x10cU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x10dU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x10eU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x10fU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x110U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x111U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x112U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x113U] = 0x22U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x114U] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x115U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x116U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x117U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x118U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x119U] = 0x1eU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x11aU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x11bU] = 0x8aU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x11cU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x11dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x11eU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x11fU] = 0x40U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x120U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x121U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x122U] = 0x28U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x123U] = 0x44U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x124U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x125U] = 0xa2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x126U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x127U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x128U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x129U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x12aU] = 0x28U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x12bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x12cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x12dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x12eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x12fU] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x130U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x131U] = 0x30U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x132U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x133U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x134U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x135U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x136U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x137U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x138U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x139U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x13aU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x13bU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x13cU] = 0xcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x13dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x13eU] = 0x60U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x13fU] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x140U] = 0x84U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x141U] = 0xaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x142U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x143U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x144U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x145U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x146U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x147U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x148U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x149U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x14aU] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x14bU] = 0x84U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x14cU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x14dU] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x14eU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x14fU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x150U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x151U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x152U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x153U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x154U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x155U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x156U] = 0x42U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x157U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x158U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x159U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x15aU] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x15bU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x15cU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x15dU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x15eU] = 0x28U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x15fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x160U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x161U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x162U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x163U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x164U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x165U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x166U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x167U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x168U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x169U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x16aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x16bU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x16cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x16dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x16eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x16fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x170U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x171U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x172U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x173U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x174U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x175U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x176U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x177U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x178U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x179U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x17aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x17bU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x17cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x17dU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x17eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x17fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x180U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x181U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x182U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x183U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x184U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x185U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x186U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x187U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x188U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x189U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x18aU] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x18bU] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x18cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x18dU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x18eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x18fU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x190U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x191U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x192U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x193U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x194U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x195U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x196U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x197U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x198U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x199U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x19aU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x19bU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x19cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x19dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x19eU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x19fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a0U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a1U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a2U] = 0x44U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a5U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a6U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a7U] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1a9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1aaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1abU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1acU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1adU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1aeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1afU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1b9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1baU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1bbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1bcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1bdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1beU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1bfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1c9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1caU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1cbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1ccU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1cdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1ceU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1cfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1d9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1daU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1dbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1dcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1ddU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1deU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1dfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1e9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1eaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1ebU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1ecU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1edU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1eeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1efU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1f9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1faU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1fbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1fcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1fdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1feU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x1ffU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x200U] = 0x55U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x201U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x202U] = 0x55U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x203U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x204U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x205U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x206U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x207U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x208U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x209U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x20aU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x20bU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x20cU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x20dU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x20eU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x20fU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x210U] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x211U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x212U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x213U] = 0x22U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x214U] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x215U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x216U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x217U] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x218U] = 0xf8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x219U] = 0x3eU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x21aU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x21bU] = 0x8aU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x21cU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x21dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x21eU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x21fU] = 0x60U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x220U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x221U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x222U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x223U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x224U] = 0x90U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x225U] = 0xe4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x226U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x227U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x228U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x229U] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x22aU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x22bU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x22cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x22dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x22eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x22fU] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x230U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x231U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x232U] = 0x84U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x233U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x234U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x235U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x236U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x237U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x238U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x239U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x23aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x23bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x23cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x23dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x23eU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x23fU] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x240U] = 0xbcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x241U] = 0xaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x242U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x243U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x244U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x245U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x246U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x247U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x248U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x249U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x24aU] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x24bU] = 0x88U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x24cU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x24dU] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x24eU] = 0xc2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x24fU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x250U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x251U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x252U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x253U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x254U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x255U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x256U] = 0x42U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x257U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x258U] = 0x44U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x259U] = 0x44U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x25aU] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x25bU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x25cU] = 0x40U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x25dU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x25eU] = 0x44U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x25fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x260U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x261U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x262U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x263U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x264U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x265U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x266U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x267U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x268U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x269U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x26aU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x26bU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x26cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x26dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x26eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x26fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x270U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x271U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x272U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x273U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x274U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x275U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x276U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x277U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x278U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x279U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x27aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x27bU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x27cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x27dU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x27eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x27fU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x280U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x281U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x282U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x283U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x284U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x285U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x286U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x287U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x288U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x289U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x28aU] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x28bU] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x28cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x28dU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x28eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x28fU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x290U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x291U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x292U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x293U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x294U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x295U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x296U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x297U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x298U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x299U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x29aU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x29bU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x29cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x29dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x29eU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x29fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a0U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a1U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a2U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a5U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a6U] = 0x40U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a7U] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2a9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2aaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2abU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2acU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2adU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2aeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2afU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2b9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2baU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2bbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2bcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2bdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2beU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2bfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2c9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2caU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2cbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2ccU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2cdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2ceU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2cfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2d9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2daU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2dbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2dcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2ddU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2deU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2dfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2e9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2eaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2ebU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2ecU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2edU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2eeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2efU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2f9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2faU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2fbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2fcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2fdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2feU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x2ffU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x300U] = 0x55U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x301U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x302U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x303U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x304U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x305U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x306U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x307U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x308U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x309U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x30aU] = 0xd6U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x30bU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x30cU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x30dU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x30eU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x30fU] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x310U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x311U] = 0xeeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x312U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x313U] = 0x22U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x314U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x315U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x316U] = 0x60U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x317U] = 0xcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x318U] = 0xfcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x319U] = 0x7eU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x31aU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x31bU] = 0x8aU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x31cU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x31dU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x31eU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x31fU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x320U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x321U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x322U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x323U] = 0x44U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x324U] = 0x90U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x325U] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x326U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x327U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x328U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x329U] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x32aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x32bU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x32cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x32dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x32eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x32fU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x330U] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x331U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x332U] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x333U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x334U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x335U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x336U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x337U] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x338U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x339U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x33aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x33bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x33cU] = 0x60U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x33dU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x33eU] = 0xcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x33fU] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x340U] = 0xa4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x341U] = 0x12U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x342U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x343U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x344U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x345U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x346U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x347U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x348U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x349U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x34aU] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x34bU] = 0x90U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x34cU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x34dU] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x34eU] = 0xa2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x34fU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x350U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x351U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x352U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x353U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x354U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x355U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x356U] = 0x22U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x357U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x358U] = 0x28U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x359U] = 0x28U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x35aU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x35bU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x35cU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x35dU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x35eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x35fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x360U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x361U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x362U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x363U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x364U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x365U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x366U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x367U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x368U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x369U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x36aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x36bU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x36cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x36dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x36eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x36fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x370U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x371U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x372U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x373U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x374U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x375U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x376U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x377U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x378U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x379U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x37aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x37bU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x37cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x37dU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x37eU] = 0x60U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x37fU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x380U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x381U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x382U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x383U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x384U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x385U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x386U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x387U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x388U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x389U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x38aU] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x38bU] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x38cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x38dU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x38eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x38fU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x390U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x391U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x392U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x393U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x394U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x395U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x396U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x397U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x398U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x399U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x39aU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x39bU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x39cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x39dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x39eU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x39fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a0U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a1U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a2U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a5U] = 0xfcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a6U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a7U] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3a9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3aaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3abU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3acU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3adU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3aeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3afU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3b9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3baU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3bbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3bcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3bdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3beU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3bfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3c9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3caU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3cbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3ccU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3cdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3ceU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3cfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3d9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3daU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3dbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3dcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3ddU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3deU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3dfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3e9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3eaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3ebU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3ecU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3edU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3eeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3efU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3f9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3faU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3fbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3fcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3fdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3feU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x3ffU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x400U] = 0x55U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x401U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x402U] = 0x55U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x403U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x404U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x405U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x406U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x407U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x408U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x409U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x40aU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x40bU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x40cU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x40dU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x40eU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x40fU] = 0xbaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x410U] = 0xc6U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x411U] = 0xc6U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x412U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x413U] = 0x22U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x414U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x415U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x416U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x417U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x418U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x419U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x41aU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x41bU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x41cU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x41dU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x41eU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x41fU] = 0x28U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x420U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x421U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x422U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x423U] = 0x44U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x424U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x425U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x426U] = 0x6cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x427U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x428U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x429U] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x42aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x42bU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x42cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x42dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x42eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x42fU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x430U] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x431U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x432U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x433U] = 0x1eU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x434U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x435U] = 0xfcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x436U] = 0xfcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x437U] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x438U] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x439U] = 0x7eU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x43aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x43bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x43cU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x43dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x43eU] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x43fU] = 0x1cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x440U] = 0xa4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x441U] = 0x3eU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x442U] = 0xfcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x443U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x444U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x445U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x446U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x447U] = 0x8eU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x448U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x449U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x44aU] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x44bU] = 0xe0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x44cU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x44dU] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x44eU] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x44fU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x450U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x451U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x452U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x453U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x454U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x455U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x456U] = 0x22U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x457U] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x458U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x459U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x45aU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x45bU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x45cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x45dU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x45eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x45fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x460U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x461U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x462U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x463U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x464U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x465U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x466U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x467U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x468U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x469U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x46aU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x46bU] = 0x86U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x46cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x46dU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x46eU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x46fU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x470U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x471U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x472U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x473U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x474U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x475U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x476U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x477U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x478U] = 0xc6U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x479U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x47aU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x47bU] = 0x40U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x47cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x47dU] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x47eU] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x47fU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x480U] = 0x1cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x481U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x482U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x483U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x484U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x485U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x486U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x487U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x488U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x489U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x48aU] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x48bU] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x48cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x48dU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x48eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x48fU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x490U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x491U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x492U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x493U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x494U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x495U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x496U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x497U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x498U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x499U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x49aU] = 0xe7U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x49bU] = 0xe7U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x49cU] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x49dU] = 0xfcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x49eU] = 0xe4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x49fU] = 0x3fU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a0U] = 0xe4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a1U] = 0x27U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a2U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a3U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a4U] = 0x72U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a5U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a6U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a7U] = 0xc4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4a9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4aaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4abU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4acU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4adU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4aeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4afU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4b9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4baU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4bbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4bcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4bdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4beU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4bfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4c9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4caU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4cbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4ccU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4cdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4ceU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4cfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4d9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4daU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4dbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4dcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4ddU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4deU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4dfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4e9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4eaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4ebU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4ecU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4edU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4eeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4efU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4f9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4faU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4fbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4fcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4fdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4feU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x4ffU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x500U] = 0x55U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x501U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x502U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x503U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x504U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x505U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x506U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x507U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x508U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x509U] = 0xbaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x50aU] = 0xc6U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x50bU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x50cU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x50dU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x50eU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x50fU] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x510U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x511U] = 0xeeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x512U] = 0x60U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x513U] = 0x66U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x514U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x515U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x516U] = 0x60U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x517U] = 0xcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x518U] = 0xfcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x519U] = 0x7eU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x51aU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x51bU] = 0xaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x51cU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x51dU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x51eU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x51fU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x520U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x521U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x522U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x523U] = 0x44U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x524U] = 0x12U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x525U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x526U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x527U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x528U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x529U] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x52aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x52bU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x52cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x52dU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x52eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x52fU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x530U] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x531U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x532U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x533U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x534U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x535U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x536U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x537U] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x538U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x539U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x53aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x53bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x53cU] = 0x60U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x53dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x53eU] = 0xcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x53fU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x540U] = 0xa4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x541U] = 0x22U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x542U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x543U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x544U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x545U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x546U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x547U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x548U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x549U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x54aU] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x54bU] = 0x90U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x54cU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x54dU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x54eU] = 0x8aU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x54fU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x550U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x551U] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x552U] = 0xc0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x553U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x554U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x555U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x556U] = 0x12U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x557U] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x558U] = 0x28U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x559U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x55aU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x55bU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x55cU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x55dU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x55eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x55fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x560U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x561U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x562U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x563U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x564U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x565U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x566U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x567U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x568U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x569U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x56aU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x56bU] = 0x98U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x56cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x56dU] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x56eU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x56fU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x570U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x571U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x572U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x573U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x574U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x575U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x576U] = 0x42U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x577U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x578U] = 0x28U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x579U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x57aU] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x57bU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x57cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x57dU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x57eU] = 0xcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x57fU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x580U] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x581U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x582U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x583U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x584U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x585U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x586U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x587U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x588U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x589U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x58aU] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x58bU] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x58cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x58dU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x58eU] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x58fU] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x590U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x591U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x592U] = 0xf8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x593U] = 0xf8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x594U] = 0x1fU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x595U] = 0x1fU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x596U] = 0xf8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x597U] = 0x1fU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x598U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x599U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x59aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x59bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x59cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x59dU] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x59eU] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x59fU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a0U] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a1U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a2U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a3U] = 0x44U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a4U] = 0x8cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a5U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a6U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a7U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5a9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5aaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5abU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5acU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5adU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5aeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5afU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5b9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5baU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5bbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5bcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5bdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5beU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5bfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5c9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5caU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5cbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5ccU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5cdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5ceU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5cfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5d9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5daU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5dbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5dcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5ddU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5deU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5dfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5e9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5eaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5ebU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5ecU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5edU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5eeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5efU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5f9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5faU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5fbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5fcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5fdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5feU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x5ffU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x600U] = 0x55U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x601U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x602U] = 0x55U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x603U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x604U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x605U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x606U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x607U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x608U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x609U] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x60aU] = 0xeeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x60bU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x60cU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x60dU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x60eU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x60fU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x610U] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x611U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x612U] = 0xa0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x613U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x614U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x615U] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x616U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x617U] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x618U] = 0xf8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x619U] = 0x3eU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x61aU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x61bU] = 0xaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x61cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x61dU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x61eU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x61fU] = 0xcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x620U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x621U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x622U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x623U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x624U] = 0x12U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x625U] = 0x4eU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x626U] = 0x6cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x627U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x628U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x629U] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x62aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x62bU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x62cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x62dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x62eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x62fU] = 0x40U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x630U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x631U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x632U] = 0x40U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x633U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x634U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x635U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x636U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x637U] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x638U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x639U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x63aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x63bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x63cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x63dU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x63eU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x63fU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x640U] = 0xbcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x641U] = 0x42U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x642U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x643U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x644U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x645U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x646U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x647U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x648U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x649U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x64aU] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x64bU] = 0x88U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x64cU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x64dU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x64eU] = 0x86U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x64fU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x650U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x651U] = 0x8cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x652U] = 0xb0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x653U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x654U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x655U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x656U] = 0xaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x657U] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x658U] = 0x44U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x659U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x65aU] = 0x40U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x65bU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x65cU] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x65dU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x65eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x65fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x660U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x661U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x662U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x663U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x664U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x665U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x666U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x667U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x668U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x669U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x66aU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x66bU] = 0xe0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x66cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x66dU] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x66eU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x66fU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x670U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x671U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x672U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x673U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x674U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x675U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x676U] = 0x32U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x677U] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x678U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x679U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x67aU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x67bU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x67cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x67dU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x67eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x67fU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x680U] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x681U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x682U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x683U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x684U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x685U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x686U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x687U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x688U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x689U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x68aU] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x68bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x68cU] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x68dU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x68eU] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x68fU] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x690U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x691U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x692U] = 0xf8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x693U] = 0xf8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x694U] = 0x1fU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x695U] = 0x1fU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x696U] = 0xf8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x697U] = 0x1fU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x698U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x699U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x69aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x69bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x69cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x69dU] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x69eU] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x69fU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a0U] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a1U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a2U] = 0x44U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a3U] = 0x44U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a4U] = 0x88U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a5U] = 0xfcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a6U] = 0x40U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a7U] = 0x14U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6a9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6aaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6abU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6acU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6adU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6aeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6afU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6b9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6baU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6bbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6bcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6bdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6beU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6bfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6c9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6caU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6cbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6ccU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6cdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6ceU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6cfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6d9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6daU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6dbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6dcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6ddU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6deU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6dfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6e9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6eaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6ebU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6ecU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6edU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6eeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6efU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6f9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6faU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6fbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6fcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6fdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6feU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x6ffU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x700U] = 0x55U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x701U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x702U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x703U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x704U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x705U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x706U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x707U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x708U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x709U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x70aU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x70bU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x70cU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x70dU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x70eU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x70fU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x710U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x711U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x712U] = 0xa0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x713U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x714U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x715U] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x716U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x717U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x718U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x719U] = 0x1eU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x71aU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x71bU] = 0xaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x71cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x71dU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x71eU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x71fU] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x720U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x721U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x722U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x723U] = 0x44U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x724U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x725U] = 0x8aU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x726U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x727U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x728U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x729U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x72aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x72bU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x72cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x72dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x72eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x72fU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x730U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x731U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x732U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x733U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x734U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x735U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x736U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x737U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x738U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x739U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x73aU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x73bU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x73cU] = 0xcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x73dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x73eU] = 0x60U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x73fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x740U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x741U] = 0x42U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x742U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x743U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x744U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x745U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x746U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x747U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x748U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x749U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x74aU] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x74bU] = 0x84U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x74cU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x74dU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x74eU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x74fU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x750U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x751U] = 0x8cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x752U] = 0x8cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x753U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x754U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x755U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x756U] = 0xaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x757U] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x758U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x759U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x75aU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x75bU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x75cU] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x75dU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x75eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x75fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x760U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x761U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x762U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x763U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x764U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x765U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x766U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x767U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x768U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x769U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x76aU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x76bU] = 0x98U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x76cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x76dU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x76eU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x76fU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x770U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x771U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x772U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x773U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x774U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x775U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x776U] = 0xaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x777U] = 0x92U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x778U] = 0x28U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x779U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x77aU] = 0x40U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x77bU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x77cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x77dU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x77eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x77fU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x780U] = 4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x781U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x782U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x783U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x784U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x785U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x786U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x787U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x788U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x789U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x78aU] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x78bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x78cU] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x78dU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x78eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x78fU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x790U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x791U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x792U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x793U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x794U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x795U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x796U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x797U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x798U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x799U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x79aU] = 0xe7U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x79bU] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x79cU] = 0xe7U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x79dU] = 0xe4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x79eU] = 0xfcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x79fU] = 0x27U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a0U] = 0xe4U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a1U] = 0x27U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a2U] = 0x28U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a3U] = 0x44U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a4U] = 0x8cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a5U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a6U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a7U] = 0x14U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7a9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7aaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7abU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7acU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7adU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7aeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7afU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7b9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7baU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7bbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7bcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7bdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7beU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7bfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7c9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7caU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7cbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7ccU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7cdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7ceU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7cfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7d9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7daU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7dbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7dcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7ddU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7deU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7dfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7e9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7eaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7ebU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7ecU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7edU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7eeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7efU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7f9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7faU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7fbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7fcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7fdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7feU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x7ffU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x800U] = 0x55U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x801U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x802U] = 0x55U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x803U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x804U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x805U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x806U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x807U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x808U] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x809U] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x80aU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x80bU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x80cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x80dU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x80eU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x80fU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x810U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x811U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x812U] = 0x60U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x813U] = 0x66U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x814U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x815U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x816U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x817U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x818U] = 0xc0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x819U] = 6U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x81aU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x81bU] = 0xaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x81cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x81dU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x81eU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x81fU] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x820U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x821U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x822U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x823U] = 0x44U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x824U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x825U] = 0x8eU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x826U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x827U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x828U] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x829U] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x82aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x82bU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x82cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x82dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x82eU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x82fU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x830U] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x831U] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x832U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x833U] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x834U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x835U] = 0xfcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x836U] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x837U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x838U] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x839U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x83aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x83bU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x83cU] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x83dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x83eU] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x83fU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x840U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x841U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x842U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x843U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x844U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x845U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x846U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x847U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x848U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x849U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x84aU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x84bU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x84cU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x84dU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x84eU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x84fU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x850U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x851U] = 0xf2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x852U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x853U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x854U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x855U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x856U] = 6U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x857U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x858U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x859U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x85aU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x85bU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x85cU] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x85dU] = 0x38U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x85eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x85fU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x860U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x861U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x862U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x863U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x864U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x865U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x866U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x867U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x868U] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x869U] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x86aU] = 8U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x86bU] = 0x86U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x86cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x86dU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x86eU] = 0x82U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x86fU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x870U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x871U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x872U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x873U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x874U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x875U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x876U] = 6U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x877U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x878U] = 0xc6U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x879U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x87aU] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x87bU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x87cU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x87dU] = 0x30U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x87eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x87fU] = 0x10U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x880U] = 0x7cU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x881U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x882U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x883U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x884U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x885U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x886U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x887U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x888U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x889U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x88aU] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x88bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x88cU] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x88dU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x88eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x88fU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x890U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x891U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x892U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x893U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x894U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x895U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x896U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x897U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x898U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x899U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x89aU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x89bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x89cU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x89dU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x89eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x89fU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a0U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a1U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a2U] = 0xeeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a3U] = 0x44U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a4U] = 0x72U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a5U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a6U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a7U] = 0xcU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8a9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8aaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8abU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8acU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8adU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8aeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8afU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8b9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8baU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8bbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8bcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8bdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8beU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8bfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8c9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8caU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8cbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8ccU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8cdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8ceU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8cfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8d9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8daU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8dbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8dcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8ddU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8deU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8dfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8e9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8eaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8ebU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8ecU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8edU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8eeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8efU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8f9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8faU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8fbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8fcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8fdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8feU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x8ffU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x900U] = 0x55U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x901U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x902U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x903U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x904U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x905U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x906U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x907U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x908U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x909U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x90aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x90bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x90cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x90dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x90eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x90fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x910U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x911U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x912U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x913U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x914U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x915U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x916U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x917U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x918U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x919U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x91aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x91bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x91cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x91dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x91eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x91fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x920U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x921U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x922U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x923U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x924U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x925U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x926U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x927U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x928U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x929U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x92aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x92bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x92cU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x92dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x92eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x92fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x930U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x931U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x932U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x933U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x934U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x935U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x936U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x937U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x938U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x939U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x93aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x93bU] = 0x20U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x93cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x93dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x93eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x93fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x940U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x941U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x942U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x943U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x944U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x945U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x946U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x947U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x948U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x949U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x94aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x94bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x94cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x94dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x94eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x94fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x950U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x951U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x952U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x953U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x954U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x955U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x956U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x957U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x958U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x959U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x95aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x95bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x95cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x95dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x95eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x95fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x960U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x961U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x962U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x963U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x964U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x965U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x966U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x967U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x968U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x969U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x96aU] = 0x30U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x96bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x96cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x96dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x96eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x96fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x970U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x971U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x972U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x973U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x974U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x975U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x976U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x977U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x978U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x979U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x97aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x97bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x97cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x97dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x97eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x97fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x980U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x981U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x982U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x983U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x984U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x985U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x986U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x987U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x988U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x989U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x98aU] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x98bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x98cU] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x98dU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x98eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x98fU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x990U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x991U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x992U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x993U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x994U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x995U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x996U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x997U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x998U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x999U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x99aU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x99bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x99cU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x99dU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x99eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x99fU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a0U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a1U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9a9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9aaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9abU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9acU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9adU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9aeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9afU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9b9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9baU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9bbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9bcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9bdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9beU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9bfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9c9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9caU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9cbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9ccU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9cdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9ceU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9cfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9d9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9daU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9dbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9dcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9ddU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9deU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9dfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9e9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9eaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9ebU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9ecU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9edU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9eeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9efU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9f9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9faU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9fbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9fcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9fdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9feU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0x9ffU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa00U] = 0x55U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa01U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa02U] = 0x55U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa03U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa04U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa05U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa06U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa07U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa08U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa09U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa0aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa0bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa0cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa0dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa0eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa0fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa10U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa11U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa12U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa13U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa14U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa15U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa16U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa17U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa18U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa19U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa1aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa1bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa1cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa1dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa1eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa1fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa20U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa21U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa22U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa23U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa24U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa25U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa26U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa27U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa28U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa29U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa2aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa2bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa2cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa2dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa2eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa2fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa30U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa31U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa32U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa33U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa34U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa35U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa36U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa37U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa38U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa39U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa3aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa3bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa3cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa3dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa3eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa3fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa40U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa41U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa42U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa43U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa44U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa45U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa46U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa47U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa48U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa49U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa4aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa4bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa4cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa4dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa4eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa4fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa50U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa51U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa52U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa53U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa54U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa55U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa56U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa57U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa58U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa59U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa5aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa5bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa5cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa5dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa5eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa5fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa60U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa61U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa62U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa63U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa64U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa65U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa66U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa67U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa68U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa69U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa6aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa6bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa6cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa6dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa6eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa6fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa70U] = 0x80U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa71U] = 2U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa72U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa73U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa74U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa75U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa76U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa77U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa78U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa79U] = 0xfeU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa7aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa7bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa7cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa7dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa7eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa7fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa80U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa81U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa82U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa83U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa84U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa85U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa86U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa87U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa88U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa89U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa8aU] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa8bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa8cU] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa8dU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa8eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa8fU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa90U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa91U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa92U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa93U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa94U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa95U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa96U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa97U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa98U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa99U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa9aU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa9bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa9cU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa9dU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa9eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xa9fU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa0U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa1U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaa9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaaaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaabU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaacU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaadU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaaeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaafU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xab9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xabaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xabbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xabcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xabdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xabeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xabfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xac9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xacaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xacbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaccU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xacdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaceU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xacfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xad9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xadaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xadbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xadcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaddU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xadeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xadfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xae9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaeaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaebU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaecU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaedU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaeeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaefU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaf9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xafaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xafbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xafcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xafdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xafeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xaffU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb00U] = 0x55U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb01U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb02U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb03U] = 0xaaU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb04U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb05U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb06U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb07U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb08U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb09U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb0aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb0bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb0cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb0dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb0eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb0fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb10U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb11U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb12U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb13U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb14U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb15U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb16U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb17U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb18U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb19U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb1aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb1bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb1cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb1dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb1eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb1fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb20U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb21U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb22U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb23U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb24U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb25U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb26U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb27U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb28U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb29U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb2aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb2bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb2cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb2dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb2eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb2fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb30U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb31U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb32U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb33U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb34U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb35U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb36U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb37U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb38U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb39U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb3aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb3bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb3cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb3dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb3eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb3fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb40U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb41U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb42U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb43U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb44U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb45U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb46U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb47U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb48U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb49U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb4aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb4bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb4cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb4dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb4eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb4fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb50U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb51U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb52U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb53U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb54U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb55U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb56U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb57U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb58U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb59U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb5aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb5bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb5cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb5dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb5eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb5fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb60U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb61U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb62U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb63U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb64U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb65U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb66U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb67U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb68U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb69U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb6aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb6bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb6cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb6dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb6eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb6fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb70U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb71U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb72U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb73U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb74U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb75U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb76U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb77U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb78U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb79U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb7aU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb7bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb7cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb7dU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb7eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb7fU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb80U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb81U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb82U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb83U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb84U] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb85U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb86U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb87U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb88U] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb89U] = 0xf0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb8aU] = 0xfU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb8bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb8cU] = 0xffU;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb8dU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb8eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb8fU] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb90U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb91U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb92U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb93U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb94U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb95U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb96U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb97U] = 0x18U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb98U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb99U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb9aU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb9bU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb9cU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb9dU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb9eU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xb9fU] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba0U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba1U] = 0x24U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xba9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbaaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbabU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbacU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbadU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbaeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbafU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbb9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbbaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbbbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbbcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbbdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbbeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbbfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbc9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbcaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbcbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbccU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbcdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbceU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbcfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbd9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbdaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbdbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbdcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbddU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbdeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbdfU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbe9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbeaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbebU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbecU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbedU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbeeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbefU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf2U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf3U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf4U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf5U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf6U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf7U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf8U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbf9U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbfaU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbfbU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbfcU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbfdU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbfeU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[0xbffU] = 0U;
    // INITIAL at ../../../firmware/io/controller_v1r0.v:58
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__clock__DOT__rClockSplit = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wSerialClock = 0U;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wSPIClock = 0U;
    // INITIAL at ../../../firmware/core/machine_v1r0.v:29
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__clock__DOT__rClockSplit = 0U;
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__5(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__5\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:297
    if (vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bus____pinNumber2) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDirectMOSI = 0U;
    } else {
	if ((((1U == (0xfU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)) 
	      & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite)) 
	     & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableBusControl))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDirectMOSI 
		= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData;
	}
    }
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__6(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__6\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG16(__Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rMasterClockCount,11,0);
    //char	__VpadToAlign122[2];
    // Body
    __Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rMasterClockCount 
	= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rMasterClockCount;
    vlTOPp->__Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockSto 
	= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockSto;
    vlTOPp->__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rContents__v0 = 0U;
    // ALWAYS at ../../../firmware/core/rom_v1r0.v:11
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rDataOut 
	= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents
	[(0xfffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)];
    // ALWAYS at ../../../firmware/testbench/testmem_v1r0.v:13
    if (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite) 
	 & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableRAM))) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbram__DOT__rContents[(0xfffU 
									  & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)] 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData;
    } else {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbram__DOT__rDataOut 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbram__DOT__rContents
	    [(0xfffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)];
    }
    // ALWAYS at ../../../firmware/testbench/testmem_v1r0.v:33
    if (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite) 
	 & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableSDRAM))) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbsdram__DOT__rContents[(0x7fffffU 
									    & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)] 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData;
    } else {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbsdram__DOT__rDataOut 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbsdram__DOT__rContents
	    [(0x7fffffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)];
    }
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:160
    if (vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bus____pinNumber2) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock = 0U;
	vlTOPp->epRISC_coreEmu__DOT__oBusClock = 1U;
    } else {
	if ((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rMasterClockCount))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock 
		= (1U & (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock)));
	    vlTOPp->epRISC_coreEmu__DOT__oBusClock 
		= ((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState)) 
		   | (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock));
	}
    }
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:144
    __Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rMasterClockCount 
	= (0xfffU & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bus____pinNumber2)
		      ? 0U : ((((0U == (0xfU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableBusControl))
			       ? 0U : ((3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rMasterClockCount))
				        ? 0U : ((IData)(1U) 
						+ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rMasterClockCount))))));
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:44
    if ((1U & (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT____Vcellinp__bufferMISO____pinNumber7)))) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataOutMISO 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents
	    [vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMISO];
    }
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:32
    if (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT____Vcellinp__bufferMOSI____pinNumber7) {
	vlTOPp->__Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rContents__v0 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataMOSI;
	vlTOPp->__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rContents__v0 = 1U;
	vlTOPp->__Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rContents__v0 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMOSI;
    }
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:44
    if ((1U & (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT____Vcellinp__bufferMOSI____pinNumber7)))) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataOutMOSI 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rContents
	    [vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMOSI];
    }
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rMasterClockCount 
	= __Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rMasterClockCount;
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__7(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__7\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v0 = 0U;
    vlTOPp->__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v1 = 0U;
    vlTOPp->__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState 
	= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState;
    // ALWAYS at ../../../firmware/core/core_v5r0.v:63
    if ((1U & (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteB)))) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusRegB 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents
	    [vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT____Vcellinp__registers____pinNumber2];
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:47
    if (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteA) {
	vlTOPp->__Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v0 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutA;
	vlTOPp->__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v0 = 1U;
	vlTOPp->__Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v0 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT____Vcellinp__registers____pinNumber1;
    }
    if (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteB) {
	vlTOPp->__Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v1 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutB;
	vlTOPp->__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v1 = 1U;
	vlTOPp->__Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v1 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT____Vcellinp__registers____pinNumber2;
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:225
    if (vlTOPp->iBoardReset) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipePrevState 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState;
	vlTOPp->__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeNextState;
    } else {
	vlTOPp->__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState = 0U;
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipePrevState = 0U;
    }
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__8(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__8\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG(__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP,31,0);
    VL_SIG(__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP,31,0);
    VL_SIG(__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS,31,0);
    VL_SIGW(__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack,95,0,3);
    //char	__VpadToAlign188[4];
    VL_SIGW(__Vtemp4,95,0,3);
    //char	__VpadToAlign204[4];
    VL_SIGW(__Vtemp5,95,0,3);
    // Body
    __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[0U] 
	= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[0U];
    __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[1U] 
	= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[1U];
    __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[2U] 
	= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[2U];
    __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP 
	= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP;
    __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP 
	= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP;
    __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
	= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS;
    // ALWAYS at ../../../firmware/core/core_v5r0.v:486
    if (vlTOPp->iBoardReset) {
	if ((8U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) {
	    VL_SHIFTR_WWI(96,96,32, __Vtemp4, vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack, 0x20U);
	    __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[0U] 
		= __Vtemp4[0U];
	    __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[1U] 
		= __Vtemp4[1U];
	    __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[2U] 
		= __Vtemp4[2U];
	    __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[2U] 
		= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP;
	} else {
	    if (((5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)) 
		 & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchInterrupt))) {
		VL_SHIFTL_WWI(96,96,32, __Vtemp5, vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack, 0x20U);
		__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[0U] 
		    = __Vtemp5[0U];
		__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[1U] 
		    = __Vtemp5[1U];
		__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[2U] 
		    = __Vtemp5[2U];
	    }
	}
    } else {
	__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[0U] = 0U;
	__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[1U] = 0U;
	__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[2U] = 0U;
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:290
    if (vlTOPp->iBoardReset) {
	if ((5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) {
	    if (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchSaveStack) 
		 | ((~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
			>> 7U)) & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchSaveStack) 
				   | ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadStore) 
				      & (1U == (0xfU 
						& (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						   >> 0x18U)))))))) {
		__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP 
		    = ((IData)(1U) + vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP);
	    } else {
		if (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchLoadStack) 
		     | ((~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
			    >> 7U)) & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchLoadStack) 
				       | ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadLoad) 
					  & (1U == 
					     (0xfU 
					      & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						 >> 0x18U)))))))) {
		    __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP 
			= (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP 
			   - (IData)(1U));
		} else {
		    if ((((~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
			      >> 7U)) & (1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrA))) 
			 & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteA))) {
			__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP 
			    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutA;
		    } else {
			if ((((~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				  >> 7U)) & (1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrB))) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteB))) {
			    __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP 
				= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutB;
			}
		    }
		}
	    }
	}
    } else {
	__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP = 0U;
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:260
    if (vlTOPp->iBoardReset) {
	if ((5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) {
	    __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP 
		= ((0x80000000U & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst)
		    ? ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchLoadStack)
		        ? ((IData)(1U) + vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegM)
		        : ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchInterrupt)
			    ? ((IData)(1U) + vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[2U])
			    : (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegR)))
		    : ((((1U == (0x3fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					  >> 0x1aU))) 
			 & (1U == (0x3fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					    >> 0x14U)))) 
			& (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
			   >> 6U)) ? (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptBase 
				      + (0xfffffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst))
		        : ((IData)(1U) + vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP)));
	} else {
	    if ((7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) {
		__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP 
		    = ((((1U == (0x3fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					  >> 0x1aU))) 
			 & (1U == (0x3fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					    >> 0x14U)))) 
			& (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
			   >> 6U)) ? (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptBase 
				      + (0xfffffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst))
		        : ((IData)(1U) + vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP));
	    } else {
		if ((8U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) {
		    __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP 
			= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptBase;
		}
	    }
	}
    } else {
	__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP = 0U;
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:309
    if (vlTOPp->iBoardReset) {
	if ((5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) {
	    if (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__fCSFlagSet) {
		__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
		    = ((0xfffffff7U & __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS) 
		       | (8U & (((0U == (0x1fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						  >> 0x14U)))
				  ? (IData)((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegR 
					     >> 0x20U))
				  : (((1U == (0x1fU 
					      & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						 >> 0x14U))) 
				      | (0xeU == (0x1fU 
						  & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						     >> 0x14U)))) 
				     & (~ (IData)((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegR 
						   >> 0x20U))))) 
				<< 3U)));
		__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
		    = ((0xfffffffbU & __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS) 
		       | ((VL_ULL(0) == vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegR) 
			  << 2U));
		__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
		    = ((0xfffffffdU & __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS) 
		       | (2U & ((IData)((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegR 
					 >> 0x1fU)) 
				<< 1U)));
		__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
		    = ((0xfffffffeU & __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS) 
		       | (((0U == (0x1fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					    >> 0x14U))) 
			   & ((((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA 
				 & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB) 
				>> 0x1fU) & (~ (IData)(
						       (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegR 
							>> 0x1fU)))) 
			      | (((~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA 
				      >> 0x1fU)) & 
				  (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB 
				      >> 0x1fU))) & (IData)(
							    (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegR 
							     >> 0x1fU))))) 
			  | ((1U == (0x1fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					      >> 0x14U))) 
			     & ((((~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA 
				      >> 0x1fU)) & 
				  (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB 
				   >> 0x1fU)) & (~ (IData)(
							   (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegR 
							    >> 0x1fU)))) 
				| (((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA 
				     >> 0x1fU) & (~ 
						  (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB 
						   >> 0x1fU))) 
				   & (IData)((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegR 
					      >> 0x1fU)))))));
	    }
	    if (((1U == (0x3fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				  >> 0x1aU))) & (3U 
						 == 
						 (0x3fU 
						  & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						     >> 0x14U))))) {
		__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
		    = ((0xffff0fffU & __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS) 
		       | (0xf000U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				     >> 4U)));
		__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
		    = ((0xffffff7fU & __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS) 
		       | (0x80U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				   >> 8U)));
	    }
	    if (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchInterrupt) {
		__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
		    = (0x40U | __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS);
	    }
	    if ((((~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__fCSHideRegs)) 
		  & (2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrA))) 
		 & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteA))) {
		__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
		    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutA;
	    } else {
		if ((((~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__fCSHideRegs)) 
		      & (2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrB))) 
		     & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteB))) {
		    __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
			= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutB;
		}
	    }
	} else {
	    if ((8U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) {
		__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
		    = (0xffffffbfU & __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS);
	    }
	}
    } else {
	__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS = 0U;
    }
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[0U] 
	= __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[0U];
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[1U] 
	= __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[1U];
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[2U] 
	= __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack[2U];
    // ALWAYS at ../../../firmware/core/core_v5r0.v:387
    if (vlTOPp->iBoardReset) {
	if ((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegM 
		= ((0x80000000U & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst)
		    ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP
		    : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInB);
	} else {
	    if (((4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)) 
		 & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadLoad) 
		    | (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchLoadStack)))) {
		vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegM 
		    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData;
	    }
	}
    } else {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegM = 0U;
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:411
    if (vlTOPp->iBoardReset) {
	if ((3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegR 
		= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rALUOut;
	}
    } else {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegR = VL_ULL(0);
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:366
    if (vlTOPp->iBoardReset) {
	if ((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB 
		= ((0x80000000U & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst)
		    ? ((0x80000U & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst)
		        ? ((IData)(0xfff00000U) + (0xfffffU 
						   & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst))
		        : (0xfffffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst))
		    : ((1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				     >> 0x1eU))) ? 
		       ((0x20U & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS)
			 ? ((IData)(0xfff00000U) + 
			    (0xfffffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst))
			 : (0xfffffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst))
		        : ((1U == (7U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					 >> 0x1dU)))
			    ? ((0xfffffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst) 
			       << (0x1eU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					    >> 0x13U)))
			    : ((((1U == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						 >> 0x1cU))) 
				 & (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mALURegisters))) 
				& ((0xcU == (0x1fU 
					     & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						>> 0x14U))) 
				   | (0xdU == (0x1fU 
					       & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						  >> 0x14U)))))
			        ? (0x1eU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					    >> 7U))
			        : (((1U == (0xfU & 
					    (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					     >> 0x1cU))) 
				    & (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mALURegisters)))
				    ? ((0xffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst) 
				       << (0x1eU & 
					   (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					    >> 7U)))
				    : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInB)))));
	}
    } else {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB = 0U;
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:356
    if (vlTOPp->iBoardReset) {
	if ((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA 
		= (((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrA)) 
		    & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
			  >> 7U))) ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP
		    : (((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrA)) 
			& (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
			      >> 7U))) ? (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadLoad) 
					   & (2U == 
					      (0xfU 
					       & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						  >> 0x18U))))
					   ? (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP 
					      - (IData)(1U))
					   : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP)
		        : (((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrA)) 
			    & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				  >> 7U))) ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS
			    : (((3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrA)) 
				& (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				      >> 7U))) ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegGL
			        : (((0xfU == (0xfU 
					      & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
						 >> 0xcU))) 
				    & (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrA)))
				    ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptBase
				    : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusRegA)))));
	}
    } else {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA = 0U;
    }
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP 
	= __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP 
	= __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP;
    // ALWAYS at ../../../firmware/core/core_v5r0.v:341
    if (vlTOPp->iBoardReset) {
	if ((5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) {
	    if ((((~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
		      >> 7U)) & (3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrA))) 
		 & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteA))) {
		vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegGL 
		    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutA;
	    } else {
		if ((((~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
			  >> 7U)) & (3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrB))) 
		     & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteB))) {
		    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegGL 
			= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutB;
		}
	    }
	}
    } else {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegGL = 0U;
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:473
    if (vlTOPp->iBoardReset) {
	if ((5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) {
	    if ((((0xfU == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				    >> 0xcU))) & (4U 
						  == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrA))) 
		 & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteA))) {
		vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptBase 
		    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutA;
	    }
	    if ((((0xfU == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				    >> 0xcU))) & (4U 
						  == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrB))) 
		 & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteB))) {
		vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptBase 
		    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutB;
	    }
	}
    } else {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptBase = 0U;
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:402
    if (vlTOPp->iBoardReset) {
	if ((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
		= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData;
	}
    } else {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst = 0U;
    }
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
	= __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__fCSHideRegs 
	= (1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
		 >> 7U));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__fCSFlagSet 
	= (1U & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
		    >> 4U)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchInterrupt 
	= ((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
	    >> 0x1fU) & (3U == (7U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				      >> 0x1cU))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mALURegisters 
	= ((1U == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			   >> 0x1cU))) & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					     >> 0x1bU)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrA 
	= ((0x80000000U & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst)
	    ? (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
		       >> 0x14U)) : ((1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						   >> 0x1eU)))
				      ? (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						 >> 0x18U))
				      : ((1U == (7U 
						 & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						    >> 0x1dU)))
					  ? (0xfU & 
					     (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					      >> 0x18U))
					  : ((1U == 
					      (0xfU 
					       & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						  >> 0x1cU)))
					      ? (0xfU 
						 & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						    >> 0xcU))
					      : ((1U 
						  == 
						  (0x1fU 
						   & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						      >> 0x1bU)))
						  ? 
						 (0xfU 
						  & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						     >> 0x14U))
						  : 0xffU)))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrA 
	= ((1U == (0x1fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			    >> 0x1bU))) ? (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						   >> 0x10U))
	    : ((1U == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			       >> 0x1cU))) ? (0xfU 
					      & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						 >> 0x10U))
	        : ((1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				 >> 0x1eU))) ? (0xfU 
						& (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						   >> 0x14U))
		    : 0xffU)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrB 
	= ((1U == (0x1fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			    >> 0x1bU))) ? (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						   >> 0x14U))
	    : ((1U == (7U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			     >> 0x1dU))) ? (0xfU & 
					    (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					     >> 0x18U))
	        : 0xffU));
    // ALWAYS at ../../../firmware/core/core_v5r0.v:447
    vlTOPp->__Vtableidx1 = ((0x100U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				       << 8U)) | ((0x80U 
						   & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
						      << 6U)) 
						  | ((0x40U 
						      & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
							 << 3U)) 
						     | ((0x20U 
							 & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
							    << 3U)) 
							| ((0x1eU 
							    & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
							       >> 0x17U)) 
							   | (1U 
							      & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
								 >> 0x1fU)))))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec 
	= vlTOPp->__Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec
	[vlTOPp->__Vtableidx1];
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrB 
	= ((1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			 >> 0x1eU))) ? (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						>> 0x14U))
	    : ((1U == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			       >> 0x1cU))) ? (0xfU 
					      & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						 >> 8U))
	        : ((1U == (0x1fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				    >> 0x1bU))) ? (0xfU 
						   & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						      >> 0x10U))
		    : 0xffU)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mDirectOR 
	= ((1U == (7U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			 >> 0x1dU))) & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					>> 0x1cU));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchLoadStack 
	= ((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
	    >> 0x1fU) & (7U == (7U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				      >> 0x1cU))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadLoad 
	= ((1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			 >> 0x1eU))) & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					   >> 0x1dU)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchSaveStack 
	= ((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
	    >> 0x1fU) & (5U == (7U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				      >> 0x1cU))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadStore 
	= ((1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			 >> 0x1eU))) & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					>> 0x1dU));
}

void VepRISC_coreEmu::_settle__TOP__9(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_settle__TOP__9\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->oVGAColor = ((1U & (((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rDataOutput) 
				 >> (7U & ((IData)(7U) 
					   - (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX)))) 
				& ((1U & ((((0x23U 
					     <= (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY)) 
					    & (0x203U 
					       > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY)))
					    ? 1U : 0U) 
					  & (((0xa0U 
					       <= (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX)) 
					      & (0x320U 
						 > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX)))
					      ? 1U : 0U)))
				    ? 1U : 0U))) ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColorOutput)
			  : 0U);
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vrom____pinNumber1 
	= (((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRowSel) 
	    << 8U) | (0xffU & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__wCharRAMFrame)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__fCSHideRegs 
	= (1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
		 >> 7U));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__fCSFlagSet 
	= (1U & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
		    >> 4U)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchInterrupt 
	= ((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
	    >> 0x1fU) & (3U == (7U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				      >> 0x1cU))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mALURegisters 
	= ((1U == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			   >> 0x1cU))) & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					     >> 0x1bU)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrA 
	= ((0x80000000U & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst)
	    ? (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
		       >> 0x14U)) : ((1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						   >> 0x1eU)))
				      ? (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						 >> 0x18U))
				      : ((1U == (7U 
						 & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						    >> 0x1dU)))
					  ? (0xfU & 
					     (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					      >> 0x18U))
					  : ((1U == 
					      (0xfU 
					       & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						  >> 0x1cU)))
					      ? (0xfU 
						 & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						    >> 0xcU))
					      : ((1U 
						  == 
						  (0x1fU 
						   & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						      >> 0x1bU)))
						  ? 
						 (0xfU 
						  & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						     >> 0x14U))
						  : 0xffU)))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrA 
	= ((1U == (0x1fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			    >> 0x1bU))) ? (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						   >> 0x10U))
	    : ((1U == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			       >> 0x1cU))) ? (0xfU 
					      & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						 >> 0x10U))
	        : ((1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				 >> 0x1eU))) ? (0xfU 
						& (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						   >> 0x14U))
		    : 0xffU)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrB 
	= ((1U == (0x1fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			    >> 0x1bU))) ? (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						   >> 0x14U))
	    : ((1U == (7U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			     >> 0x1dU))) ? (0xfU & 
					    (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					     >> 0x18U))
	        : 0xffU));
    // ALWAYS at ../../../firmware/core/core_v5r0.v:447
    vlTOPp->__Vtableidx1 = ((0x100U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				       << 8U)) | ((0x80U 
						   & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
						      << 6U)) 
						  | ((0x40U 
						      & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
							 << 3U)) 
						     | ((0x20U 
							 & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
							    << 3U)) 
							| ((0x1eU 
							    & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
							       >> 0x17U)) 
							   | (1U 
							      & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
								 >> 0x1fU)))))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec 
	= vlTOPp->__Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec
	[vlTOPp->__Vtableidx1];
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrB 
	= ((1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			 >> 0x1eU))) ? (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						>> 0x14U))
	    : ((1U == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			       >> 0x1cU))) ? (0xfU 
					      & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						 >> 8U))
	        : ((1U == (0x1fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				    >> 0x1bU))) ? (0xfU 
						   & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						      >> 0x10U))
		    : 0xffU)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mDirectOR 
	= ((1U == (7U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			 >> 0x1dU))) & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					>> 0x1cU));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchLoadStack 
	= ((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
	    >> 0x1fU) & (7U == (7U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				      >> 0x1cU))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadLoad 
	= ((1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			 >> 0x1eU))) & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					   >> 0x1dU)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchSaveStack 
	= ((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
	    >> 0x1fU) & (5U == (7U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				      >> 0x1cU))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadStore 
	= ((1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			 >> 0x1eU))) & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					>> 0x1dU));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation 
	= (0x1fU & ((1U == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				    >> 0x1cU))) ? (0x1fU 
						   & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						      >> 0x14U))
		     : (((1U == (7U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				       >> 0x1dU))) 
			 & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mDirectOR))
			 ? 3U : 0U)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutA 
	= ((1U == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			   >> 0x1cU))) ? (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegR)
	    : ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadLoad)
	        ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegM
	        : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInB 
	= (((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrB)) 
	    & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
		  >> 7U))) ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP
	    : (((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrB)) 
		& (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
		      >> 7U))) ? (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadLoad) 
				   & (2U == (0xfU & 
					     (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					      >> 0x18U))))
				   ? (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP 
				      - (IData)(1U))
				   : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP)
	        : (((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrB)) 
		    & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
			  >> 7U))) ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS
		    : (((3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrB)) 
			& (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
			      >> 7U))) ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegGL
		        : (((0xfU == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
					      >> 0xcU))) 
			    & (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrB)))
			    ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptBase
			    : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusRegB)))));
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__10(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__10\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rClkDivide,1,0);
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk,0,0);
    //char	__VpadToAlign262[2];
    // Body
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rClkDivide 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rClkDivide;
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk;
    // ALWAYS at ../../../firmware/io/spi_v1r0.v:51
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	__Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rClkDivide = 0U;
	__Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk = 0U;
    } else {
	__Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rClkDivide 
	    = (3U & ((IData)(1U) + (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rClkDivide)));
	if ((3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rClkDivide))) {
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk 
		= (1U & (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk)));
	}
    }
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rClkDivide 
	= __Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rClkDivide;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk 
	= __Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk;
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__11(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__11\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:118
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__oBvusInterrupt 
	= (((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
	    >> 8U) & (0xcU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState)));
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:125
    if ((9U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataBuf 
	    = (0xffU & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rDataIn));
    }
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__12(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__12\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataCnt,5,0);
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataCnt,5,0);
    //char	__VpadToAlign306[2];
    // Body
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataCnt 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataCnt;
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataCnt 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataCnt;
    vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountAck 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountAck;
    vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState;
    vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountAck 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountAck;
    vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState;
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:130
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendPrevState = 0xdU;
	vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState = 0xdU;
	vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountAck = 0U;
    } else {
	if ((0xdU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) {
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendPrevState 
		= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState;
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataCnt = 0U;
	    vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState 
		= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendNextState;
	} else {
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataCnt 
		= (0x3fU & ((IData)(1U) + (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataCnt)));
	    if ((0xfU == (0xfU & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataCnt)))) {
		vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendPrevState 
		    = vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState;
		if ((0xcU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) {
		    vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountAck 
			= (0x1fU & ((IData)(1U) + (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountAck)));
		}
		vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState 
		    = vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendNextState;
	    }
	}
    }
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:108
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rDataOut = 0U;
    } else {
	if ((((0xbU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState)) 
	      | (0xcU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))) 
	     & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
		>> 5U))) {
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rDataOut 
		= ((0xff00U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rDataOut)) 
		   | (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataBuf));
	}
    }
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataCnt 
	= __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataCnt;
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:153
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState = 0xdU;
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvPrevState = 0xdU;
	vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountAck = 0U;
    } else {
	if ((0xdU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))) {
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvPrevState 
		= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState;
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataCnt = 0U;
	    vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState 
		= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvNextState;
	} else {
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataCnt 
		= (0x3fU & ((IData)(1U) + (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataCnt)));
	    if (((9U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState)) 
		 & (7U == (0xfU & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataCnt))))) {
		__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataCnt = 0x3fU;
		vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvPrevState 
		    = vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState;
		vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState 
		    = vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvNextState;
	    } else {
		if ((0xfU == (0xfU & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataCnt)))) {
		    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataCnt = 0U;
		    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvPrevState 
			= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState;
		    if ((8U > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))) {
			vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataBuf 
			    = (((~ ((IData)(1U) << 
				    (7U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState)))) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataBuf)) 
			       | ((IData)(vlTOPp->iTTLSerialRX) 
				  << (7U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))));
		    }
		    if ((0xcU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))) {
			vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountAck 
			    = (0x1fU & ((IData)(1U) 
					+ (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountAck)));
		    }
		    vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState 
			= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvNextState;
		}
	    }
	}
    }
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataCnt 
	= __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataCnt;
}

void VepRISC_coreEmu::_initial__TOP__13(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_initial__TOP__13\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at ../../../firmware/core/rom_v1r0.v:15
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0U] = 0x8000001fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[1U] = 0x43f01ff0U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[2U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[3U] = 0xd0000297U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[4U] = 0x63f01ff1U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[5U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[6U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[7U] = 0xd00002b5U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[8U] = 0x63f01ff1U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[9U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xaU] = 0x43f01ff2U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xbU] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xcU] = 0x43f01ff3U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xdU] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xeU] = 0xd00003e2U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xfU] = 0x63f01ff4U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x10U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x11U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x12U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x13U] = 0x43f01ff2U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x14U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x15U] = 0x43f01ff3U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x16U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x17U] = 0xd000040eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x18U] = 0x63f01ff4U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x19U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1aU] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1bU] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1cU] = 0xd0000339U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1dU] = 0x63f01ff5U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1eU] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1fU] = 0x21001100U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x20U] = 0x23000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x21U] = 0xd00001ceU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x22U] = 0x24007fffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x23U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x24U] = 0x24000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x25U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x26U] = 0xd00001d9U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x27U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x28U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x29U] = 0x2400012bU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2aU] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2bU] = 0xd00002fbU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2cU] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2dU] = 0x240001b2U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2eU] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2fU] = 0xd00002f7U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x30U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x31U] = 0x240001b7U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x32U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x33U] = 0xd00002f3U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x34U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x35U] = 0x25003000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x36U] = 0x26003010U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x37U] = 0x65500000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x38U] = 0x45400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x39U] = 0x10e04500U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3aU] = 0x82000007U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3bU] = 0x2f000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3cU] = 0x65f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3dU] = 0x18055001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3eU] = 0x10e05600U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3fU] = 0x81000002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x40U] = 0x800ffff7U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x41U] = 0x240001d2U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x42U] = 0x10e05600U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x43U] = 0x82000002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x44U] = 0x240001d0U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x45U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x46U] = 0xd00002e0U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x47U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x48U] = 0x240001e1U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x49U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4aU] = 0xd00002dcU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4bU] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4cU] = 0x800000daU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4dU] = 0x24000041U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4eU] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4fU] = 0xd000024bU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x50U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x51U] = 0x2400013cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x52U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x53U] = 0xd00002d3U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x54U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x55U] = 0xd0000300U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x56U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x57U] = 0x2400015bU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x58U] = 0x18e0f0ffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x59U] = 0x81000002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5aU] = 0x24000152U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5bU] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5cU] = 0xd00002caU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5dU] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5eU] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5fU] = 0x18e0f0ffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x60U] = 0x810000c6U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x61U] = 0x24000163U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x62U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x63U] = 0xd00002c3U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x64U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x65U] = 0x24003000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x66U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x67U] = 0x24000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x68U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x69U] = 0xd00003bcU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x6aU] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x6bU] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x6cU] = 0x24003000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x6dU] = 0x44f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x6eU] = 0x18e0fceaU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x6fU] = 0x81000006U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x70U] = 0x24000169U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x71U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x72U] = 0xd00002b4U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x73U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x74U] = 0x800000b2U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x75U] = 0x24000172U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x76U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x77U] = 0xd00002afU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x78U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x79U] = 0x24003001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x7aU] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x7bU] = 0x2400000cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x7cU] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x7dU] = 0xd00002beU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x7eU] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x7fU] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x80U] = 0x24000176U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x81U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x82U] = 0xd00002a4U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x83U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x84U] = 0x24003000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x85U] = 0x44f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x86U] = 0x18e0f000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x87U] = 0x82000006U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x88U] = 0x2400017aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x89U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x8aU] = 0xd000029cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x8bU] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x8cU] = 0x8000009aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x8dU] = 0x24000182U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x8eU] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x8fU] = 0xd0000297U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x90U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x91U] = 0x24003004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x92U] = 0x44f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x93U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x94U] = 0x24000002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x95U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x96U] = 0xd000025cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x97U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x98U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x99U] = 0x24000185U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x9aU] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x9bU] = 0xd000028bU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x9cU] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x9dU] = 0x2400018bU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x9eU] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x9fU] = 0xd0000287U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xa0U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xa1U] = 0x24003004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xa2U] = 0x44600000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xa3U] = 0x18656002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xa4U] = 0x18666001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xa5U] = 0x10066500U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xa6U] = 0x25003005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xa7U] = 0x10065600U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xa8U] = 0x27000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xa9U] = 0x240001eeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xaaU] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xabU] = 0xd000027bU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xacU] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xadU] = 0x61700000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xaeU] = 0x24000002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xafU] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xb0U] = 0xd0000242U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xb1U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xb2U] = 0x41700000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xb3U] = 0x24000191U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xb4U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xb5U] = 0xd0000271U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xb6U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xb7U] = 0x61500000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xb8U] = 0x2400000cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xb9U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xbaU] = 0xd0000281U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xbbU] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xbcU] = 0x41500000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xbdU] = 0x18055003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xbeU] = 0x24000194U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xbfU] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xc0U] = 0xd0000266U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xc1U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xc2U] = 0x45400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xc3U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xc4U] = 0xd0000216U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xc5U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xc6U] = 0x18055001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xc7U] = 0x24000197U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xc8U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xc9U] = 0xd000025dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xcaU] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xcbU] = 0x45400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xccU] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xcdU] = 0xd000020dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xceU] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xcfU] = 0x18055001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xd0U] = 0x2400019aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xd1U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xd2U] = 0xd0000254U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xd3U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xd4U] = 0x45400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xd5U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xd6U] = 0xd0000204U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xd7U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xd8U] = 0x18055001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xd9U] = 0x240001edU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xdaU] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xdbU] = 0xd000024bU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xdcU] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xddU] = 0x18077001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xdeU] = 0x10e05600U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xdfU] = 0x840fffcaU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xe0U] = 0x240001edU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xe1U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xe2U] = 0xd0000244U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xe3U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xe4U] = 0x2400019cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xe5U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xe6U] = 0xd0000240U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xe7U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xe8U] = 0xd0000172U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xe9U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xeaU] = 0xd0000151U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xebU] = 0xd0000420U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xecU] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xedU] = 0x18e0f047U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xeeU] = 0x8300000eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xefU] = 0x181ff030U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xf0U] = 0x18e0f00aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xf1U] = 0x84000014U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xf2U] = 0x181ff007U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xf3U] = 0x18e0f00aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xf4U] = 0x84000003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xf5U] = 0x18e0f010U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xf6U] = 0x8400000fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xf7U] = 0x240001edU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xf8U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xf9U] = 0xd000022dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xfaU] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xfbU] = 0x800fffe9U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xfcU] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xfdU] = 0x240001edU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xfeU] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0xffU] = 0xd0000227U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x100U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x101U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x102U] = 0x18e0f04dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x103U] = 0x81000023U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x104U] = 0x800fffe0U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x105U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x106U] = 0x240001edU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x107U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x108U] = 0xd000021eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x109U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x10aU] = 0x240001acU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x10bU] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x10cU] = 0xd000021aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x10dU] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x10eU] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x10fU] = 0x1865f002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x110U] = 0x186ff001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x111U] = 0x100ff500U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x112U] = 0x25003005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x113U] = 0x10085f00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x114U] = 0x48500003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x115U] = 0x48600004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x116U] = 0x48700005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x117U] = 0x61700000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x118U] = 0x61500000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x119U] = 0xd000030cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x11aU] = 0x41500000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x11bU] = 0x41700000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x11cU] = 0x18e0f000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x11dU] = 0x82000009U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x11eU] = 0x18055001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x11fU] = 0x18077080U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x120U] = 0x18166001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x121U] = 0x18e06000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x122U] = 0x820ffff5U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x123U] = 0xd00003a4U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x124U] = 0x48700005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x125U] = 0x80700000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x126U] = 0x240001e7U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x127U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x128U] = 0xd00001feU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x129U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x12aU] = 0x80000496U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x12bU] = 0x65705249U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x12cU] = 0x53432042U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x12dU] = 0x6f6f746cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x12eU] = 0x6f616465U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x12fU] = 0x72207633U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x130U] = 0x2e340a0dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x131U] = 0x636f7079U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x132U] = 0x72696768U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x133U] = 0x74203230U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x134U] = 0x31352d32U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x135U] = 0x30313720U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x136U] = 0x50726f70U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x137U] = 0x6f727469U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x138U] = 0x6f6e616cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x139U] = 0x204c6162U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x13aU] = 0x730a0d0aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x13bU] = 0xd000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x13cU] = 0x41747465U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x13dU] = 0x6d707469U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x13eU] = 0x6e672074U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x13fU] = 0x6f206d6fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x140U] = 0x756e7420U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x141U] = 0x53442063U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x142U] = 0x61726420U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x143U] = 0x696e2073U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x144U] = 0x6c6f7420U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x145U] = 0x412e2e2eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x146U] = 0xa0d0000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x147U] = 0x41747465U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x148U] = 0x6d707469U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x149U] = 0x6e672074U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x14aU] = 0x6f206d6fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x14bU] = 0x756e7420U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x14cU] = 0x53442063U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x14dU] = 0x61726420U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x14eU] = 0x696e2073U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x14fU] = 0x6c6f7420U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x150U] = 0x422e2e2eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x151U] = 0xa0d0000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x152U] = 0x20205344U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x153U] = 0x20636172U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x154U] = 0x64206d6fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x155U] = 0x756e7465U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x156U] = 0x64207375U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x157U] = 0x63636573U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x158U] = 0x7366756cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x159U] = 0x6c792e0aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x15aU] = 0xd0a0d00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x15bU] = 0x20204572U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x15cU] = 0x726f7220U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x15dU] = 0x6d6f756eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x15eU] = 0x74696e67U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x15fU] = 0x20534420U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x160U] = 0x63617264U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x161U] = 0x2e0a0d0aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x162U] = 0xd000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x163U] = 0x46657463U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x164U] = 0x68696e67U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x165U] = 0x20646973U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x166U] = 0x6b20696eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x167U] = 0x666f2e2eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x168U] = 0x2e0a0d00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x169U] = 0x20204469U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x16aU] = 0x736b2061U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x16bU] = 0x70706561U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x16cU] = 0x72732074U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x16dU] = 0x6f206265U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x16eU] = 0x20636f72U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x16fU] = 0x72757074U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x170U] = 0x2e0a0d0aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x171U] = 0xd000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x172U] = 0x2020466fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x173U] = 0x756e6420U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x174U] = 0x6469736bU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x175U] = 0x20270000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x176U] = 0x27206174U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x177U] = 0x20626c6fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x178U] = 0x636b2030U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x179U] = 0x2e0a0d00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x17aU] = 0x20204469U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x17bU] = 0x736b2061U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x17cU] = 0x70706561U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x17dU] = 0x72732074U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x17eU] = 0x6f206265U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x17fU] = 0x20656d70U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x180U] = 0x74792e0aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x181U] = 0xd0a0d00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x182U] = 0x2020466fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x183U] = 0x756e6420U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x184U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x185U] = 0x20656e74U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x186U] = 0x72696573U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x187U] = 0x206f6e20U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x188U] = 0x6469736bU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x189U] = 0x2e0a0d0aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x18aU] = 0xd000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x18bU] = 0x41766169U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x18cU] = 0x6c61626cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x18dU] = 0x6520656eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x18eU] = 0x74726965U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x18fU] = 0x733a0a0dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x190U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x191U] = 0x3a20456eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x192U] = 0x74727920U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x193U] = 0x27000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x194U] = 0x273a2073U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x195U] = 0x74617274U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x196U] = 0x20000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x197U] = 0x2c206c65U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x198U] = 0x6e677468U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x199U] = 0x20000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x19aU] = 0x2c206c6fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x19bU] = 0x61642000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x19cU] = 0x53656c65U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x19dU] = 0x63742061U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x19eU] = 0x6e20656eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x19fU] = 0x74727920U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1a0U] = 0x746f2065U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1a1U] = 0x78656375U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1a2U] = 0x74652c20U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1a3U] = 0x6f722074U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1a4U] = 0x79706520U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1a5U] = 0x274d2720U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1a6U] = 0x746f2065U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1a7U] = 0x6e746572U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1a8U] = 0x20746865U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1a9U] = 0x206d6f6eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1aaU] = 0x69746f72U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1abU] = 0x3a200000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1acU] = 0x20204c6fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1adU] = 0x6164696eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1aeU] = 0x6720656eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1afU] = 0x7472792eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1b0U] = 0x2e2e0a0dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1b1U] = 0xa0d0000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1b2U] = 0x53746172U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1b3U] = 0x74696e67U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1b4U] = 0x20504f53U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1b5U] = 0x54732e2eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1b6U] = 0x2e0a0d00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1b7U] = 0x20204d65U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1b8U] = 0x6d6f7279U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1b9U] = 0x20202020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1baU] = 0x20202020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1bbU] = 0x20200000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1bcU] = 0x20205541U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1bdU] = 0x52542020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1beU] = 0x20202020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1bfU] = 0x20202020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1c0U] = 0x20200000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1c1U] = 0x20205350U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1c2U] = 0x49202020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1c3U] = 0x20202020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1c4U] = 0x20202020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1c5U] = 0x20200000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1c6U] = 0x20207379U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1c7U] = 0x73582042U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1c8U] = 0x75732020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1c9U] = 0x20202020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1caU] = 0x20200000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1cbU] = 0x2020492fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1ccU] = 0x4f20436fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1cdU] = 0x6e74726fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1ceU] = 0x6c6c6572U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1cfU] = 0x20200000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1d0U] = 0x4f4b0a0dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1d1U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1d2U] = 0x4641494cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1d3U] = 0xa0d0000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1d4U] = 0x2020504fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1d5U] = 0x53542073U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1d6U] = 0x75636365U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1d7U] = 0x73736675U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1d8U] = 0x6c2e0a0dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1d9U] = 0xa0d0000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1daU] = 0x2020504fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1dbU] = 0x53542075U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1dcU] = 0x6e737563U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1ddU] = 0x63657373U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1deU] = 0x66756c2eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1dfU] = 0xa0d0a0dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1e0U] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1e1U] = 0x2020504fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1e2U] = 0x53547320U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1e3U] = 0x636f6d70U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1e4U] = 0x6c657465U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1e5U] = 0x2e0a0d0aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1e6U] = 0xd000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1e7U] = 0x456e7465U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1e8U] = 0x72696e67U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1e9U] = 0x206d6f6eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1eaU] = 0x69746f72U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1ebU] = 0x2e2e2e0aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1ecU] = 0xd0a0d00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1edU] = 0xa0d0000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1eeU] = 0x20200000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1efU] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1f0U] = 0x2c002000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1f1U] = 0x2f010001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1f2U] = 0x6cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1f3U] = 0x4000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1f4U] = 0x4000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1f5U] = 0x4000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1f6U] = 0x4000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1f7U] = 0x4cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1f8U] = 0x18f0f001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1f9U] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1faU] = 0x4cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1fbU] = 0x18f0f002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1fcU] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1fdU] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1feU] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x1ffU] = 0x61e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x200U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x201U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x202U] = 0x18111004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x203U] = 0x2c002000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x204U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x205U] = 0x41e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x206U] = 0x18011006U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x207U] = 0x2f600008U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x208U] = 0x103ffe00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x209U] = 0x186ff010U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x20aU] = 0x103ffd00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x20bU] = 0x6cf00001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x20cU] = 0x2f010005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x20dU] = 0x6cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x20eU] = 0x4cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x20fU] = 0x18f0f001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x210U] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x211U] = 0x4cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x212U] = 0x18f0f002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x213U] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x214U] = 0x4cf00002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x215U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x216U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x217U] = 0x41e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x218U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x219U] = 0x61e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x21aU] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x21bU] = 0x18111003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x21cU] = 0x2c002000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x21dU] = 0x41e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x21eU] = 0x18011004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x21fU] = 0x2f600000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x220U] = 0x103ffe00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x221U] = 0x186ff010U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x222U] = 0x6cf00001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x223U] = 0x2f010005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x224U] = 0x6cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x225U] = 0x4cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x226U] = 0x18f0f001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x227U] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x228U] = 0x4cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x229U] = 0x18f0f002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x22aU] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x22bU] = 0x2f600000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x22cU] = 0x103ffe00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x22dU] = 0x186ff010U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x22eU] = 0x6cf00001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x22fU] = 0x2f010005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x230U] = 0x6cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x231U] = 0x4cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x232U] = 0x18f0f001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x233U] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x234U] = 0x4cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x235U] = 0x18f0f002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x236U] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x237U] = 0x4cf00002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x238U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x239U] = 0x41e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x23aU] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x23bU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x23cU] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x23dU] = 0x18111003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x23eU] = 0x2c002000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x23fU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x240U] = 0x18011004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x241U] = 0x2f000011U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x242U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x243U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x244U] = 0xd00fffbbU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x245U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x246U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x247U] = 0x2f000010U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x248U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x249U] = 0x2f000080U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x24aU] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x24bU] = 0xd00fffb4U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x24cU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x24dU] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x24eU] = 0x2f000010U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x24fU] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x250U] = 0xd00fffc9U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x251U] = 0x18f0f080U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x252U] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x253U] = 0xd00fffc6U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x254U] = 0x18f0f040U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x255U] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x256U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x257U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x258U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x259U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x25aU] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x25bU] = 0x2c002000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x25cU] = 0x2f808010U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x25dU] = 0x3f000020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x25eU] = 0x6cf00001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x25fU] = 0x2f010005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x260U] = 0x6cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x261U] = 0x4cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x262U] = 0x18f0f001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x263U] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x264U] = 0x2f800010U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x265U] = 0x6cf00001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x266U] = 0x2f010005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x267U] = 0x6cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x268U] = 0x4cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x269U] = 0x18f0f001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x26aU] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x26bU] = 0x2f800010U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x26cU] = 0x6cf00001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x26dU] = 0x2f010005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x26eU] = 0x6cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x26fU] = 0x4cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x270U] = 0x18f0f001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x271U] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x272U] = 0x4cf00002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x273U] = 0x18f0f020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x274U] = 0x820ffff7U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x275U] = 0x2f800012U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x276U] = 0x6cf00001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x277U] = 0x2f010005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x278U] = 0x6cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x279U] = 0x4cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x27aU] = 0x18f0f001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x27bU] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x27cU] = 0x2f800012U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x27dU] = 0x6cf00001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x27eU] = 0x2f010005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x27fU] = 0x6cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x280U] = 0x4cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x281U] = 0x18f0f001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x282U] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x283U] = 0x4cf00002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x284U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x285U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x286U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x287U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x288U] = 0x18111003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x289U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x28aU] = 0x18011004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x28bU] = 0x2d000020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x28cU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x28dU] = 0xd00fff8cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x28eU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x28fU] = 0x18bff078U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x290U] = 0x186cc003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x291U] = 0x103ccf00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x292U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x293U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x294U] = 0xd00fff6bU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x295U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x296U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x297U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x298U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x299U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x29aU] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x29bU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x29cU] = 0x18111003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x29dU] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x29eU] = 0x18011004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x29fU] = 0x2d000021U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2a0U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2a1U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2a2U] = 0xd00fff5dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2a3U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2a4U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2a5U] = 0x2d000020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2a6U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2a7U] = 0xd00fff72U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2a8U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2a9U] = 0x183ff080U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2aaU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2abU] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2acU] = 0xd00fff53U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2adU] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2aeU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2afU] = 0x2d000020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2b0U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2b1U] = 0xd00fff68U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2b2U] = 0x18f0f080U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2b3U] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2b4U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2b5U] = 0x2d000022U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2b6U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2b7U] = 0xd00fff62U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2b8U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2b9U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2baU] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2bbU] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2bcU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2bdU] = 0x2d000021U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2beU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2bfU] = 0x2d0000ffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2c0U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2c1U] = 0xd00fff3eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2c2U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2c3U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2c4U] = 0x2d000020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2c5U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2c6U] = 0xd00fff53U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2c7U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2c8U] = 0x183ff080U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2c9U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2caU] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2cbU] = 0xd00fff34U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2ccU] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2cdU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2ceU] = 0x2d000020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2cfU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2d0U] = 0xd00fff49U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2d1U] = 0x18f0f080U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2d2U] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2d3U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2d4U] = 0x2d000022U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2d5U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2d6U] = 0xd00fff43U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2d7U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2d8U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2d9U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2daU] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2dbU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2dcU] = 0x61e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2ddU] = 0x18111004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2deU] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2dfU] = 0x2e000008U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2e0U] = 0x18011005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2e1U] = 0x182dccf0U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2e2U] = 0x186cc004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2e3U] = 0x188dd01cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2e4U] = 0x180dd030U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2e5U] = 0x18e0d03aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2e6U] = 0x84000002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2e7U] = 0x180dd007U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2e8U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2e9U] = 0xd00fff52U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2eaU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2ebU] = 0x181ee001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2ecU] = 0x18e0e000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2edU] = 0x820ffff4U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2eeU] = 0x41e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2efU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2f0U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2f1U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2f2U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2f3U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2f4U] = 0x61e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2f5U] = 0x18111004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2f6U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2f7U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2f8U] = 0x18011006U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2f9U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2faU] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2fbU] = 0x2c000008U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2fcU] = 0x101dcd00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2fdU] = 0x186dd002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2feU] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x2ffU] = 0x106ccd00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x300U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x301U] = 0x182eccf0U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x302U] = 0x186cc004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x303U] = 0x188ee01cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x304U] = 0x180ee030U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x305U] = 0x18e0e03aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x306U] = 0x84000002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x307U] = 0x180ee007U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x308U] = 0x61e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x309U] = 0xd00fff32U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x30aU] = 0x41e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x30bU] = 0x181dd001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x30cU] = 0x18e0d000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x30dU] = 0x820ffff4U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x30eU] = 0x41e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x30fU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x310U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x311U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x312U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x313U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x314U] = 0x61e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x315U] = 0x18111004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x316U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x317U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x318U] = 0x18011006U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x319U] = 0x8ed0000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x31aU] = 0x187dd002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x31bU] = 0x100ccd00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x31cU] = 0x4cf00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x31dU] = 0x2d000003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x31eU] = 0x182ee003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x31fU] = 0x101ede00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x320U] = 0x186ee003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x321U] = 0x10dffeffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x322U] = 0x41e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x323U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x324U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x325U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x326U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x327U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x328U] = 0x18111003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x329U] = 0x2d000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x32aU] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x32bU] = 0x18011004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x32cU] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x32dU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x32eU] = 0xd00fffe4U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x32fU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x330U] = 0x18e0f000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x331U] = 0x81000006U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x332U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x333U] = 0xd00fff08U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x334U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x335U] = 0x180dd001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x336U] = 0x800ffff7U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x337U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x338U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x339U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x33aU] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x33bU] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x33cU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x33dU] = 0x61e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x33eU] = 0x18111004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x33fU] = 0x2e000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x340U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x341U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x342U] = 0x18011006U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x343U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x344U] = 0x61e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x345U] = 0xd00fffcdU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x346U] = 0x41e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x347U] = 0x18e0f000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x348U] = 0x81000008U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x349U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x34aU] = 0xd00ffef1U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x34bU] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x34cU] = 0x180ee001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x34dU] = 0x181dd001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x34eU] = 0x18e0d000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x34fU] = 0x820ffff5U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x350U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x351U] = 0x41e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x352U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x353U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x354U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x355U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x356U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x357U] = 0x61e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x358U] = 0x2c000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x359U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x35aU] = 0xd00fff2cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x35bU] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x35cU] = 0x2c00000bU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x35dU] = 0xd00fff5fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x35eU] = 0x181cc001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x35fU] = 0x18e0c000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x360U] = 0x820ffffdU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x361U] = 0x2c000001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x362U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x363U] = 0xd00fff23U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x364U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x365U] = 0x2c000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x366U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x367U] = 0x2c000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x368U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x369U] = 0x2d000001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x36aU] = 0x186dd000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x36bU] = 0x2e000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x36cU] = 0xd0000084U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x36dU] = 0x10e0fd00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x36eU] = 0x81000005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x36fU] = 0x180ee001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x370U] = 0x18e0e402U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x371U] = 0x8100006eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x372U] = 0x800ffffaU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x373U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x374U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x375U] = 0x2c000008U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x376U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x377U] = 0x2c0001aaU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x378U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x379U] = 0xd0000077U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x37aU] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x37bU] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x37cU] = 0x2d000001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x37dU] = 0x186dd002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x37eU] = 0x10f0fd00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x37fU] = 0x8200000cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x380U] = 0xd00fff3cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x381U] = 0xd00fff3bU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x382U] = 0xd00fff3aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x383U] = 0x18f0f001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x384U] = 0x8100005dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x385U] = 0xd00fff37U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x386U] = 0x18e0f0aaU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x387U] = 0x8200005aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x388U] = 0x2e000001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x389U] = 0x186ee001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x38aU] = 0x80000014U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x38bU] = 0x2c000037U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x38cU] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x38dU] = 0x2c000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x38eU] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x38fU] = 0xd0000061U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x390U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x391U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x392U] = 0x2c000029U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x393U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x394U] = 0x2c000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x395U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x396U] = 0xd000005aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x397U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x398U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x399U] = 0x2e000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x39aU] = 0x10e0fd00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x39bU] = 0x82000003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x39cU] = 0x2e000001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x39dU] = 0x186ee000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x39eU] = 0x2d000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x39fU] = 0x18f0e003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3a0U] = 0x81000013U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3a1U] = 0x2c000037U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3a2U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3a3U] = 0x2c000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3a4U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3a5U] = 0xd000004bU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3a6U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3a7U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3a8U] = 0x2c000029U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3a9U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3aaU] = 0x2c000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3abU] = 0x18f0e002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3acU] = 0x81000002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3adU] = 0x2c804000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3aeU] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3afU] = 0xd0000041U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3b0U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3b1U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3b2U] = 0x80000008U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3b3U] = 0x2c000029U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3b4U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3b5U] = 0x2c000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3b6U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3b7U] = 0xd0000039U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3b8U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3b9U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3baU] = 0x18f0f001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3bbU] = 0x81000005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3bcU] = 0x180dd001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3bdU] = 0x18e0d480U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3beU] = 0x81000023U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3bfU] = 0x800fffe0U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3c0U] = 0x18f0e002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3c1U] = 0x81000013U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3c2U] = 0x2c00003aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3c3U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3c4U] = 0x2c000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3c5U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3c6U] = 0xd000002aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3c7U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3c8U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3c9U] = 0x18e0f000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3caU] = 0x82000017U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3cbU] = 0xd00ffef1U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3ccU] = 0x18f0f040U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3cdU] = 0x81000004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3ceU] = 0x2c000001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3cfU] = 0x186cc002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3d0U] = 0x103eec00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3d1U] = 0xd00ffeebU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3d2U] = 0xd00ffeeaU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3d3U] = 0xd00ffee9U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3d4U] = 0x2c000010U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3d5U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3d6U] = 0x2c000200U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3d7U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3d8U] = 0xd0000018U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3d9U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3daU] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3dbU] = 0x18e0f000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3dcU] = 0x82000005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3ddU] = 0x8000000aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3deU] = 0xd00001b4U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3dfU] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3e0U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3e1U] = 0x2c000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3e2U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3e3U] = 0xd00ffea3U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3e4U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3e5U] = 0x2f0000ffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3e6U] = 0x80000006U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3e7U] = 0x2c000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3e8U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3e9U] = 0xd00ffe9dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3eaU] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3ebU] = 0x8fe0000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3ecU] = 0x41e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3edU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3eeU] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3efU] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3f0U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3f1U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3f2U] = 0x18111003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3f3U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3f4U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3f5U] = 0x18011005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3f6U] = 0xd00ffec6U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3f7U] = 0x183cc040U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3f8U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3f9U] = 0xd00ffea1U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3faU] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3fbU] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3fcU] = 0x8cd0000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3fdU] = 0x18ddccffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3feU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x3ffU] = 0xd00ffe9bU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x400U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x401U] = 0x18ddc8ffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x402U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x403U] = 0xd00ffe97U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x404U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x405U] = 0x18ddc4ffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x406U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x407U] = 0xd00ffe93U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x408U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x409U] = 0x18ddc0ffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x40aU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x40bU] = 0xd00ffe8fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x40cU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x40dU] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x40eU] = 0x18e0c040U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x40fU] = 0x82000003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x410U] = 0x2d000095U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x411U] = 0x80000006U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x412U] = 0x18e0c048U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x413U] = 0x82000003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x414U] = 0x2d000087U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x415U] = 0x80000002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x416U] = 0x2d0000ffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x417U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x418U] = 0xd00ffe82U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x419U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x41aU] = 0x2d00000aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x41bU] = 0xd00ffea1U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x41cU] = 0x18e0f0ffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x41dU] = 0x82000005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x41eU] = 0x181dd001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x41fU] = 0x18e0d000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x420U] = 0x81000002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x421U] = 0x800ffffaU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x422U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x423U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x424U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x425U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x426U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x427U] = 0x61e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x428U] = 0x18111004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x429U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x42aU] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x42bU] = 0x18011006U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x42cU] = 0x2f000001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x42dU] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x42eU] = 0xd00ffe58U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x42fU] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x430U] = 0x186dd009U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x431U] = 0x2f000011U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x432U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x433U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x434U] = 0xd00fffbcU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x435U] = 0x18111002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x436U] = 0x18e0f000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x437U] = 0x82000023U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x438U] = 0xd00ffe84U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x439U] = 0x18e0f0feU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x43aU] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x43bU] = 0x2e000080U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x43cU] = 0x2d000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x43dU] = 0xd00ffe7fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x43eU] = 0x186df018U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x43fU] = 0xd00ffe7dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x440U] = 0x186ff010U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x441U] = 0x103ddf00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x442U] = 0xd00ffe7aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x443U] = 0x186ff008U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x444U] = 0x103ddf00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x445U] = 0xd00ffe77U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x446U] = 0x103ddf00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x447U] = 0x6cd00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x448U] = 0x180cc001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x449U] = 0x181ee001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x44aU] = 0x18e0e000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x44bU] = 0x820ffff2U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x44cU] = 0xd00ffe70U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x44dU] = 0xd00ffe6fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x44eU] = 0x2f000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x44fU] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x450U] = 0xd00ffe36U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x451U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x452U] = 0xd00ffe6aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x453U] = 0xd00ffe69U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x454U] = 0xd00ffe68U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x455U] = 0xd00ffe67U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x456U] = 0xd00ffe66U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x457U] = 0xd00ffe65U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x458U] = 0x2f000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x459U] = 0x80000009U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x45aU] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x45bU] = 0xd00ffe7fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x45cU] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x45dU] = 0x2f000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x45eU] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x45fU] = 0xd00ffe27U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x460U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x461U] = 0x2f0000ffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x462U] = 0x41e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x463U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x464U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x465U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x466U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x467U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x468U] = 0x61e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x469U] = 0x18111004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x46aU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x46bU] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x46cU] = 0x18011006U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x46dU] = 0x2f000001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x46eU] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x46fU] = 0xd00ffe17U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x470U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x471U] = 0x2f000018U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x472U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x473U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x474U] = 0xd00fff7cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x475U] = 0x18111002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x476U] = 0x18e0f000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x477U] = 0x8200002eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x478U] = 0x2f0000feU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x479U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x47aU] = 0xd00ffe20U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x47bU] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x47cU] = 0x2e000080U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x47dU] = 0x4cd00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x47eU] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x47fU] = 0x182cdcffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x480U] = 0x188dd018U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x481U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x482U] = 0xd00ffe18U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x483U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x484U] = 0x182cd8ffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x485U] = 0x188dd010U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x486U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x487U] = 0xd00ffe13U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x488U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x489U] = 0x182cd4ffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x48aU] = 0x188dd008U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x48bU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x48cU] = 0xd00ffe0eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x48dU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x48eU] = 0x182cd0ffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x48fU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x490U] = 0xd00ffe0aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x491U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x492U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x493U] = 0x180cc001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x494U] = 0x181ee001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x495U] = 0x18e0e000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x496U] = 0x820fffe7U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x497U] = 0x2f0000ffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x498U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x499U] = 0xd00ffe01U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x49aU] = 0xd00ffe00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x49bU] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x49cU] = 0xd00ffe20U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x49dU] = 0x18e0f0ffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x49eU] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x49fU] = 0x2f000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4a0U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4a1U] = 0xd00ffde5U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4a2U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4a3U] = 0x2f000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4a4U] = 0x80000006U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4a5U] = 0x2f000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4a6U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4a7U] = 0xd00ffddfU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4a8U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4a9U] = 0x2f0000ffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4aaU] = 0x41e00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4abU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4acU] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4adU] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4aeU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4afU] = 0x2d000030U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4b0U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4b1U] = 0x2d000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4b2U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4b3U] = 0xd00ffd4cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4b4U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4b5U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4b6U] = 0x2d000031U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4b7U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4b8U] = 0x2d000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4b9U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4baU] = 0xd00ffd45U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4bbU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4bcU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4bdU] = 0x2d000032U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4beU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4bfU] = 0x2d000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4c0U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4c1U] = 0xd00ffd3eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4c2U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4c3U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4c4U] = 0xd0000003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4c5U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4c6U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4c7U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4c8U] = 0x2d000031U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4c9U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4caU] = 0x2d000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4cbU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4ccU] = 0xd00ffd33U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4cdU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4ceU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4cfU] = 0x2d000032U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4d0U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4d1U] = 0x2d000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4d2U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4d3U] = 0xd00ffd2cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4d4U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4d5U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4d6U] = 0x2d000033U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4d7U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4d8U] = 0x2d000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4d9U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4daU] = 0xd00ffd25U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4dbU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4dcU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4ddU] = 0x2d000031U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4deU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4dfU] = 0xd00ffd3aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4e0U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4e1U] = 0x180ff001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4e2U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4e3U] = 0x2d000031U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4e4U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4e5U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4e6U] = 0xd00ffd19U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4e7U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4e8U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4e9U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4eaU] = 0x18e0f050U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4ebU] = 0x820fffebU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4ecU] = 0x2d000031U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4edU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4eeU] = 0x2d000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4efU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4f0U] = 0xd00ffd0fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4f1U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4f2U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4f3U] = 0x2d000032U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4f4U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4f5U] = 0xd00ffd24U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4f6U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4f7U] = 0x180ff001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4f8U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4f9U] = 0x2d000032U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4faU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4fbU] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4fcU] = 0xd00ffd03U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4fdU] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4feU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x4ffU] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x500U] = 0x18e0f028U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x501U] = 0x820fffd5U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x502U] = 0x2d000032U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x503U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x504U] = 0x2d000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x505U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x506U] = 0xd00ffcf9U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x507U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x508U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x509U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x50aU] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x50bU] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x50cU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x50dU] = 0x18111003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x50eU] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x50fU] = 0x18011004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x510U] = 0x18e0c020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x511U] = 0x8300001eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x512U] = 0x18e0c00dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x513U] = 0x82000009U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x514U] = 0x2d000031U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x515U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x516U] = 0x2d000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x517U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x518U] = 0xd00ffce7U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x519U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x51aU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x51bU] = 0x80000048U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x51cU] = 0x18e0c00aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x51dU] = 0x82000011U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x51eU] = 0x2d000032U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x51fU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x520U] = 0xd00ffcf9U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x521U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x522U] = 0x180ff001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x523U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x524U] = 0x2d000032U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x525U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x526U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x527U] = 0xd00ffcd8U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x528U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x529U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x52aU] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x52bU] = 0x18e0f028U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x52cU] = 0x81000036U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x52dU] = 0x80000036U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x52eU] = 0x80000035U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x52fU] = 0x183cc4ffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x530U] = 0x2d000033U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x531U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x532U] = 0x61c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x533U] = 0xd00ffcccU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x534U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x535U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x536U] = 0x2d000031U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x537U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x538U] = 0xd00ffce1U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x539U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x53aU] = 0x180ff001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x53bU] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x53cU] = 0x2d000031U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x53dU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x53eU] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x53fU] = 0xd00ffcc0U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x540U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x541U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x542U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x543U] = 0x18e0f050U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x544U] = 0x8200001fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x545U] = 0x2d000031U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x546U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x547U] = 0x2d000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x548U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x549U] = 0xd00ffcb6U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x54aU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x54bU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x54cU] = 0x2d000032U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x54dU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x54eU] = 0xd00ffccbU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x54fU] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x550U] = 0x180ff001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x551U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x552U] = 0x2d000032U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x553U] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x554U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x555U] = 0xd00ffcaaU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x556U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x557U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x558U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x559U] = 0x18e0f028U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x55aU] = 0x82000009U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x55bU] = 0x2d000032U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x55cU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x55dU] = 0x2d000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x55eU] = 0x61d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x55fU] = 0xd00ffca0U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x560U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x561U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x562U] = 0xd00fff65U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x563U] = 0x41d00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x564U] = 0x41c00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x565U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x566U] = 0xa0a416eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x567U] = 0x20657272U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x568U] = 0x6f722068U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x569U] = 0x6173206fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x56aU] = 0x63637572U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x56bU] = 0x65642e0aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x56cU] = 0U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x56dU] = 0xa0a4120U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x56eU] = 0x66617461U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x56fU] = 0x6c206572U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x570U] = 0x726f7220U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x571U] = 0x68617320U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x572U] = 0x6f636375U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x573U] = 0x7265642eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x574U] = 0xa000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x575U] = 0x43616c6cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x576U] = 0x65642061U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x577U] = 0x74200000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x578U] = 0x53746163U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x579U] = 0x6b747261U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x57aU] = 0x63652028U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x57bU] = 0x746f7020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x57cU] = 0x3136293aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x57dU] = 0xa000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x57eU] = 0x52656769U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x57fU] = 0x73746572U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x580U] = 0x733a0a00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x581U] = 0x52657375U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x582U] = 0x6d696e67U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x583U] = 0x2e0a0a00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x584U] = 0x48616c74U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x585U] = 0x696e672eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x586U] = 0xa0a0000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x587U] = 0x80000001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x588U] = 0x2f00056dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x589U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x58aU] = 0xd00ffd9cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x58bU] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x58cU] = 0x2f000575U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x58dU] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x58eU] = 0xd00ffd98U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x58fU] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x590U] = 0xd00ffd4aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x591U] = 0x4200000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x592U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x593U] = 0x2f000575U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x594U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x595U] = 0xd00ffd91U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x596U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x597U] = 0x2f0000f0U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x598U] = 0x181ff001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x599U] = 0x18e0f000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x59aU] = 0x820ffffeU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x59bU] = 0x18111001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x59cU] = 0xd00ffd3eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x59dU] = 0x18011001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x59eU] = 0x2f00000aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x59fU] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5a0U] = 0xd0000013U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5a1U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5a2U] = 0x2f00000dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5a3U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5a4U] = 0xd000000fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5a5U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5a6U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5a7U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5a8U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5a9U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5aaU] = 0x4c656d6fU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5abU] = 0x6e207630U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5acU] = 0x2e32202dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5adU] = 0x20666f72U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5aeU] = 0x20657052U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5afU] = 0x49534320U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5b0U] = 0x76352073U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5b1U] = 0x79737465U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5b2U] = 0x6d730000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5b3U] = 0x18111001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5b4U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5b5U] = 0x18011002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5b6U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5b7U] = 0xd00ffc84U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5b8U] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5b9U] = 0xf0000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5baU] = 0x800ffc81U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5bbU] = 0x800fff50U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5bcU] = 0x800ffc9eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5bdU] = 0x800ffd1dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5beU] = 0x800ffd68U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5bfU] = 0x800fffc9U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5c0U] = 0x210017ffU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5c1U] = 0x280005aaU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5c2U] = 0x61800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5c3U] = 0xd00ffffbU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5c4U] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5c5U] = 0x26001000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5c6U] = 0x29000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5c7U] = 0x2800000aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5c8U] = 0x61800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5c9U] = 0xd00fffeaU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5caU] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5cbU] = 0x2800000dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5ccU] = 0x61800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5cdU] = 0xd00fffe6U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5ceU] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5cfU] = 0x2800003eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5d0U] = 0x61800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5d1U] = 0xd00fffe2U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5d2U] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5d3U] = 0xd00fffe9U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5d4U] = 0x18e0f008U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5d5U] = 0x8200000eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5d6U] = 0x18e06000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5d7U] = 0x82000002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5d8U] = 0x800ffffbU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5d9U] = 0x18166002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5daU] = 0x18199001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5dbU] = 0x46f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5dcU] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5ddU] = 0xd00fffd6U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5deU] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5dfU] = 0x18066001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5e0U] = 0x2f000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5e1U] = 0x66f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5e2U] = 0x800ffff1U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5e3U] = 0x18e0f00dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5e4U] = 0x82000003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5e5U] = 0x66f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5e6U] = 0x8000000aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5e7U] = 0x18f09180U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5e8U] = 0x820fffebU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5e9U] = 0x61f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5eaU] = 0xd00fffc9U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5ebU] = 0x41f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5ecU] = 0x66f00000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5edU] = 0x18066001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5eeU] = 0x18099001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5efU] = 0x800fffe4U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5f0U] = 0x26001000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5f1U] = 0x27000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5f2U] = 0x46900000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5f3U] = 0x18e0900dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5f4U] = 0x82000005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5f5U] = 0x18e0703aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5f6U] = 0x82000002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5f7U] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5f8U] = 0x800fffcdU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5f9U] = 0x18e09052U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5faU] = 0x8200000cU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5fbU] = 0x2800000aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5fcU] = 0x61800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5fdU] = 0xd00fffb6U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5feU] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x5ffU] = 0x2800000dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x600U] = 0x61800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x601U] = 0xd00fffb2U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x602U] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x603U] = 0xd0400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x604U] = 0x18066001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x605U] = 0x800fffedU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x606U] = 0x18e0903aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x607U] = 0x82000005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x608U] = 0x2700003aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x609U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x60aU] = 0x18066001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x60bU] = 0x800fffe7U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x60cU] = 0x18e0902eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x60dU] = 0x82000007U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x60eU] = 0x18e0703aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x60fU] = 0x82000002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x610U] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x611U] = 0x2700002eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x612U] = 0x18066001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x613U] = 0x800fffdfU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x614U] = 0x18e09020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x615U] = 0x82000003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x616U] = 0x18066001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x617U] = 0x800fffdbU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x618U] = 0x25000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x619U] = 0x46900000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x61aU] = 0x18199030U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x61bU] = 0x18e0900aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x61cU] = 0x84000007U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x61dU] = 0x18199007U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x61eU] = 0x18e0900aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x61fU] = 0x84000008U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x620U] = 0x18e09010U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x621U] = 0x84000002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x622U] = 0x80000005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x623U] = 0x18655004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x624U] = 0x10355900U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x625U] = 0x18066001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x626U] = 0x800ffff3U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x627U] = 0x46900000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x628U] = 0x18e0703aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x629U] = 0x82000004U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x62aU] = 0x64500000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x62bU] = 0x18044001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x62cU] = 0x800fffc6U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x62dU] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x62eU] = 0x8450000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x62fU] = 0x18e0902eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x630U] = 0x82000003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x631U] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x632U] = 0x800fffc0U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x633U] = 0x18e07000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x634U] = 0x82000016U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x635U] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x636U] = 0x2800000aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x637U] = 0x61800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x638U] = 0xd00fff7bU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x639U] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x63aU] = 0x2800000dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x63bU] = 0x61800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x63cU] = 0xd00fff77U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x63dU] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x63eU] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x63fU] = 0xd00ffc9bU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x640U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x641U] = 0x2800003aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x642U] = 0x61800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x643U] = 0xd00fff70U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x644U] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x645U] = 0x44800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x646U] = 0x61800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x647U] = 0xd00fff76U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x648U] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x649U] = 0x800fffa9U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x64aU] = 0x18e0702eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x64bU] = 0xd20fff74U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x64cU] = 0x8840000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x64dU] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x64eU] = 0x10e08400U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x64fU] = 0x8b000002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x650U] = 0x8840000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x651U] = 0x101a8400U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x652U] = 0x180aa001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x653U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x654U] = 0x2800000aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x655U] = 0x61800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x656U] = 0xd00fff65U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x657U] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x658U] = 0x2800000aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x659U] = 0x61800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x65aU] = 0xd00fff60U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x65bU] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x65cU] = 0x2800000dU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x65dU] = 0x61800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x65eU] = 0xd00fff55U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x65fU] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x660U] = 0x61400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x661U] = 0xd00ffc79U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x662U] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x663U] = 0x2800003aU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x664U] = 0x61800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x665U] = 0xd00fff4eU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x666U] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x667U] = 0x18e0a008U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x668U] = 0x83000003U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x669U] = 0x8ba0000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x66aU] = 0x80000002U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x66bU] = 0x2b000008U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x66cU] = 0x101aab00U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x66dU] = 0x80000005U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x66eU] = 0x28000020U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x66fU] = 0x61800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x670U] = 0xd00fff43U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x671U] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x672U] = 0x44800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x673U] = 0x61800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x674U] = 0xd00fff49U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x675U] = 0x41800000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x676U] = 0x18044001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x677U] = 0x181bb001U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x678U] = 0x18e0b000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x679U] = 0x820ffff5U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x67aU] = 0x18e0a000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x67bU] = 0x820fffddU;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x67cU] = 0x41400000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x67dU] = 0x27000000U;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[0x67eU] = 0x800fff74U;
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__14(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__14\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:286
    if (vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bus____pinNumber2) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rTransferCount = 0U;
    } else {
	if (((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState)) 
	     & (0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipePrevState)))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rTransferCount 
		= (0xffU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
			    >> 8U));
	}
    }
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:306
    if (vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bus____pinNumber2) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDirectMISO = 0U;
    } else {
	if ((((2U == (0xfU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)) 
	      & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite)) 
	     & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableBusControl))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDirectMISO 
		= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData;
	}
	if ((((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
	       >> 1U) | vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig) 
	     & (7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState)))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDirectMISO 
		= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalDataMISO;
	}
    }
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__15(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__15\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockAck 
	= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockAck;
    vlTOPp->__Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState 
	= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState;
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:50
    if ((7U != (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wTrashMISO 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents
	    [vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalCounterMISO];
    }
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:50
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wInternalDataMOSI 
	= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rContents
	[vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalCounterMOSI];
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__16(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__16\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v0 = 0U;
    vlTOPp->__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v1 = 0U;
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__17(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__17\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvset__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rContents__v0,0,0);
    //char	__VpadToAlign409[1];
    VL_SIG16(__Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue,15,0);
    VL_SIG16(__Vdlyvdim0__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rContents__v0,11,0);
    VL_SIG16(__Vdlyvval__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rContents__v0,15,0);
    // Body
    __Vdlyvset__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rContents__v0 = 0U;
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue;
    // ALWAYS at ../../../firmware/io/controller_v1r0.v:35
    if ((1U & (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset)))) {
	if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) {
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__rContents[(0xffU 
										& (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
										>> 0x10U))] 
		= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI;
	}
    }
    // ALWAYS at ../../../firmware/io/video_v1r0.v:151
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber7) {
	__Vdlyvval__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rContents__v0 
	    = vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusData;
	__Vdlyvset__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rContents__v0 = 1U;
	__Vdlyvdim0__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rContents__v0 
	    = vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber1;
    }
    // ALWAYS at ../../../firmware/io/video_v1r0.v:163
    if ((1U & (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber7)))) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__wCharRAMData 
	    = vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rContents
	    [vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber1];
    }
    // ALWAYS at ../../../firmware/io/video_v1r0.v:49
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rConfig = 0U;
    } else {
	if ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
	      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableVideo)) 
	     & (0U == (3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
			     >> 0x10U))))) {
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rConfig 
		= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusData;
	}
    }
    // ALWAYS at ../../../firmware/io/video_v1r0.v:58
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRow = 0U;
    } else {
	if ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
	      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableVideo)) 
	     & (2U == (3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
			     >> 0x10U))))) {
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRow 
		= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusData;
	}
    }
    // ALWAYS at ../../../firmware/io/video_v1r0.v:67
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColumn = 0U;
    } else {
	if ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
	      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableVideo)) 
	     & (1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
			     >> 0x10U))))) {
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColumn 
		= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusData;
	}
    }
    // ALWAYS at ../../../firmware/io/gpio_v1r0.v:73
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	__Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue = 0U;
    } else {
	if ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
	      & (0x10U > (0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				     >> 0x10U)))) & 
	     (2U == (3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
			   >> 0x10U))))) {
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue 
		= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusData;
	} else {
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue 
		= ((0xfffeU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
		   | (1U & ((1U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection))
			     ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)
			     : (IData)(vlTOPp->bGPIO0))));
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue 
		= ((0xfffdU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
		   | (2U & (((2U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection))
			      ? ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue) 
				 >> 1U) : (IData)(vlTOPp->bGPIO1)) 
			    << 1U)));
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue 
		= ((0xfffbU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
		   | (4U & (((4U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection))
			      ? ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue) 
				 >> 2U) : (IData)(vlTOPp->bGPIO2)) 
			    << 2U)));
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue 
		= ((0xfff7U & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
		   | (8U & (((8U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection))
			      ? ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue) 
				 >> 3U) : (IData)(vlTOPp->bGPIO3)) 
			    << 3U)));
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue 
		= ((0xffefU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
		   | (0x10U & (((0x10U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection))
				 ? ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue) 
				    >> 4U) : (IData)(vlTOPp->bGPIO4)) 
			       << 4U)));
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue 
		= ((0xffdfU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
		   | (0x20U & (((0x20U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection))
				 ? ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue) 
				    >> 5U) : (IData)(vlTOPp->bGPIO5)) 
			       << 5U)));
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue 
		= ((0xffbfU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
		   | (0x40U & (((0x40U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection))
				 ? ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue) 
				    >> 6U) : (IData)(vlTOPp->bGPIO6)) 
			       << 6U)));
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue 
		= ((0xff7fU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
		   | (0x80U & (((0x80U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection))
				 ? ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue) 
				    >> 7U) : (IData)(vlTOPp->bGPIO7)) 
			       << 7U)));
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue 
		= ((0xfeffU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
		   | (0x100U & (((0x100U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection))
				  ? ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue) 
				     >> 8U) : (IData)(vlTOPp->bGPIO8)) 
				<< 8U)));
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue 
		= ((0xfdffU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
		   | (0x200U & (((0x200U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection))
				  ? ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue) 
				     >> 9U) : (IData)(vlTOPp->bGPIO9)) 
				<< 9U)));
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue 
		= ((0xfbffU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
		   | (0x400U & (((0x400U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection))
				  ? ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue) 
				     >> 0xaU) : (IData)(vlTOPp->bGPIO10)) 
				<< 0xaU)));
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue 
		= ((0xf7ffU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
		   | (0x800U & (((0x800U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection))
				  ? ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue) 
				     >> 0xbU) : (IData)(vlTOPp->bGPIO11)) 
				<< 0xbU)));
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue 
		= ((0xefffU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
		   | (0x1000U & (((0x1000U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection))
				   ? ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue) 
				      >> 0xcU) : (IData)(vlTOPp->bGPIO12)) 
				 << 0xcU)));
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue 
		= ((0xdfffU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
		   | (0x2000U & (((0x2000U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection))
				   ? ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue) 
				      >> 0xdU) : (IData)(vlTOPp->bGPIO13)) 
				 << 0xdU)));
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue 
		= ((0xbfffU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
		   | (0x4000U & (((0x4000U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection))
				   ? ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue) 
				      >> 0xeU) : (IData)(vlTOPp->bGPIO14)) 
				 << 0xeU)));
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue 
		= ((0x7fffU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
		   | (0x8000U & (((0x8000U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection))
				   ? ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue) 
				      >> 0xfU) : (IData)(vlTOPp->bGPIO15)) 
				 << 0xfU)));
	}
    }
    // ALWAYS at ../../../firmware/io/gpio_v1r0.v:44
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	vlTOPp->epRISC_coreEmu__DOT__iBusInterrupt = 0U;
    } else {
	vlTOPp->epRISC_coreEmu__DOT__iBusInterrupt 
	    = (1U & ((0U != (((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rInterrupt)))
		      ? 1U : 0U));
	if ((((~ (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite)) 
	      & (0x10U > (0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				     >> 0x10U)))) & 
	     (1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
			   >> 0x10U))))) {
	    vlTOPp->epRISC_coreEmu__DOT__iBusInterrupt = 0U;
	}
    }
    // ALWAYSPOST at ../../../firmware/io/video_v1r0.v:153
    if (__Vdlyvset__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rContents__v0) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rContents[__Vdlyvdim0__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rContents__v0] 
	    = __Vdlyvval__epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rContents__v0;
    }
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue 
	= __Vdly__epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber1 
	= (0xfffU & (((0xffffU & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRow) 
				  << 4U)) + (0xffffU 
					     & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRow) 
						<< 6U))) 
		     + (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColumn)));
    // ALWAYS at ../../../firmware/io/gpio_v1r0.v:64
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rInterrupt = 0U;
    } else {
	if ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
	      & (0x10U > (0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				     >> 0x10U)))) & 
	     (1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
			   >> 0x10U))))) {
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rInterrupt 
		= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusData;
	}
    }
    // ALWAYS at ../../../firmware/io/gpio_v1r0.v:55
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection = 0U;
    } else {
	if ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
	      & (0x10U > (0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				     >> 0x10U)))) & 
	     (0U == (3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
			   >> 0x10U))))) {
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection 
		= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusData;
	}
    }
    vlTOPp->bGPIO6 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    >> 6U));
    vlTOPp->bGPIO14 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				  & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     >> 0xeU));
    vlTOPp->bGPIO15 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				  & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     >> 0xfU));
    vlTOPp->bGPIO8 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    >> 8U));
    vlTOPp->bGPIO9 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    >> 9U));
    vlTOPp->bGPIO10 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				  & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     >> 0xaU));
    vlTOPp->bGPIO11 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				  & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     >> 0xbU));
    vlTOPp->bGPIO12 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				  & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     >> 0xcU));
    vlTOPp->bGPIO13 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				  & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     >> 0xdU));
    vlTOPp->bGPIO7 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    >> 7U));
    vlTOPp->bGPIO5 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    >> 5U));
    vlTOPp->bGPIO0 = (1U & ((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)));
    vlTOPp->bGPIO1 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    >> 1U));
    vlTOPp->bGPIO2 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    >> 2U));
    vlTOPp->bGPIO3 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    >> 3U));
    vlTOPp->bGPIO4 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    >> 4U));
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__19(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__19\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__rPipeState 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState;
    // ALWAYS at ../../../firmware/io/controller_v1r0.v:177
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wInternalReset) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipePrevState = 1U;
	vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__rPipeState = 1U;
    } else {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipePrevState 
	    = vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState;
	vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__rPipeState 
	    = vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeNextState;
    }
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__20(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__20\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockSto,4,0);
    //char	__VpadToAlign457[3];
    // Body
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockSto 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockSto;
    // ALWAYS at ../../../firmware/io/spi_v1r0.v:90
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataIn = 0U;
    } else {
	if ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
	      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableSPI)) 
	     & (1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
			     >> 0x10U))))) {
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataIn 
		= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusData;
	}
    }
    // ALWAYS at ../../../firmware/io/spi_v1r0.v:76
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rControl = 0U;
	__Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockSto = 0U;
    } else {
	if ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
	      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableSPI)) 
	     & (0U == (3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
			     >> 0x10U))))) {
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rControl 
		= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusData;
	}
	if ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockAck) 
	      > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockSto)) 
	     | ((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockAck)) 
		& (0x1fU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockSto))))) {
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockSto 
		= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockAck;
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rControl 
		= (0xff7fU & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rControl));
	}
    }
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockSto 
	= __Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockSto;
    vlTOPp->oSPISelect = (1U & (~ ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rControl) 
				   >> 3U)));
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__21(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__21\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountSto,4,0);
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountSto,4,0);
    VL_SIG16(__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl,15,0);
    // Body
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountSto 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountSto;
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountSto 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountSto;
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl;
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:98
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rDataIn = 0U;
    } else {
	if ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
	      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableUART)) 
	     & (1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
			     >> 0x10U))))) {
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rDataIn 
		= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusData;
	}
    }
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:60
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl = 0U;
	__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountSto = 0U;
	__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountSto = 0U;
    } else {
	if ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountAck) 
	      > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountSto)) 
	     | ((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountAck)) 
		& (0x1fU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountSto))))) {
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountSto 
		= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountAck;
	}
	if ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
	      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableUART)) 
	     & (0U == (3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
			     >> 0x10U))))) {
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl 
		= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusData;
	}
	if ((9U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) {
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl 
		= (0x40U | (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl));
	}
	if ((0xdU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) {
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl 
		= (0xffbfU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl));
	}
	if ((4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) {
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl 
		= (0xff7fU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl));
	}
	__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl 
	    = ((0xdU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
	        ? (0xffefU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl))
	        : (0x10U | (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl)));
	if ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountAck) 
	      > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountSto)) 
	     | ((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountAck)) 
		& (0x1fU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountSto))))) {
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountSto 
		= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountAck;
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl 
		= (0xffdfU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl));
	}
	if ((((0xbU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState)) 
	      | (0xcU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))) 
	     & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
		>> 5U))) {
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl 
		= (0xffdfU & (IData)(__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl));
	}
    }
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountSto 
	= __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountSto;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountSto 
	= __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountSto;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl 
	= __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl;
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__22(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__22\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState 
	= vlTOPp->__Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState;
    // ALWAYS at ../../../firmware/core/core_v5r0.v:57
    if ((1U & (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteA)))) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusRegA 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents
	    [vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT____Vcellinp__registers____pinNumber1];
    }
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAccess 
	= (((4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)) 
	    | (1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
	   & (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock)));
    // ALWAYSPOST at ../../../firmware/core/core_v5r0.v:49
    if (vlTOPp->__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v0) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents[vlTOPp->__Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v0] 
	    = vlTOPp->__Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v0;
    }
    if (vlTOPp->__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v1) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents[vlTOPp->__Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v1] 
	    = vlTOPp->__Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v1;
    }
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__23(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__23\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation 
	= (0x1fU & ((1U == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				    >> 0x1cU))) ? (0x1fU 
						   & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						      >> 0x14U))
		     : (((1U == (7U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				       >> 0x1dU))) 
			 & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mDirectOR))
			 ? 3U : 0U)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutA 
	= ((1U == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			   >> 0x1cU))) ? (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegR)
	    : ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadLoad)
	        ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegM
	        : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA));
    // ALWAYS at ../../../firmware/core/core_v5r0.v:421
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rALUOut 
	= (VL_ULL(0x1ffffffff) & (((((((((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation)) 
					 | (1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
					| (2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
				       | (3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
				      | (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
				     | (5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
				    | (6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
				   | (7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation)))
				   ? ((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
				       ? ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
					  + (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)))
				       : ((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
					   ? ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
					      - (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)))
					   : ((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
					       ? ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						  & (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)))
					       : ((3U 
						   == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						   ? 
						  ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						   | (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)))
						   : 
						  ((4U 
						    == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						    ? 
						   ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						    ^ (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)))
						    : 
						   ((5U 
						     == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						     ? 
						    (~ (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)))
						     : 
						    ((6U 
						      == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						      ? 
						     ((0x20U 
						       >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						       ? 
						      ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						       << vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						       : VL_ULL(0))
						      : 
						     ((0x80000000U 
						       & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)
						       ? 
						      ((~ 
							((0x20U 
							  >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							  ? 
							 (VL_ULL(1) 
							  >> vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							  : VL_ULL(0))) 
						       + 
						       ((0x20U 
							 >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							 ? 
							((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
							 >> vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							 : VL_ULL(0)))
						       : 
						      ((0x20U 
							>= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						        ? 
						       ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
							>> vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						        : VL_ULL(0))))))))))
				   : (((((((((8U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation)) 
					     | (9U 
						== (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
					    | (0xaU 
					       == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
					   | (0xbU 
					      == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
					  | (0xcU == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
					 | (0xdU == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
					| (0xeU == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
				       | (0xfU == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation)))
				       ? ((8U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
					   ? ((0x20U 
					       >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
					       ? ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						  >> vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
					       : VL_ULL(0))
					   : ((9U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
					       ? ((
						   (0x20U 
						    >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						    ? 
						   ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						    >> vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						    : VL_ULL(0)) 
						  + 
						  ((0x20U 
						    >= 
						    ((IData)(0x20U) 
						     - vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB))
						    ? 
						   (((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						     & (~ 
							((0x20U 
							  >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							  ? 
							 (VL_ULL(1) 
							  << vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							  : VL_ULL(0)))) 
						    << 
						    ((IData)(0x20U) 
						     - vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB))
						    : VL_ULL(0)))
					       : ((0xaU 
						   == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						   ? 
						  (((0x20U 
						     >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						     ? 
						    ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						     << vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						     : VL_ULL(0)) 
						   + 
						   ((0x20U 
						     >= 
						     ((IData)(0x20U) 
						      - vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB))
						     ? 
						    (((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						      & (~ 
							 ((0x20U 
							   >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							   ? 
							  (VL_ULL(1) 
							   >> vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							   : VL_ULL(0)))) 
						     >> 
						     ((IData)(0x20U) 
						      - vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB))
						     : VL_ULL(0)))
						   : 
						  ((0xbU 
						    == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						    ? 
						   ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						    & (~ (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB))))
						    : 
						   ((0xcU 
						     == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						     ? 
						    ((0x20U 
						      >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						      ? 
						     (((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						       & (QData)((IData)(
									 (0xffU 
									  & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst)))) 
						      << vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						      : VL_ULL(0))
						     : 
						    ((0xdU 
						      == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						      ? 
						     ((0x20U 
						       >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						       ? 
						      (((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
							& ((0x20U 
							    >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							    ? 
							   ((QData)((IData)(
									    (0xffU 
									     & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst))) 
							    << vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							    : VL_ULL(0))) 
						       >> vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						       : VL_ULL(0))
						      : 
						     ((0xeU 
						       == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						       ? 
						      ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						       - (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)))
						       : 
						      ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						       & (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB))))))))))
				       : ((0x10U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
					   ? (((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
					       + (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB))) 
					      + (QData)((IData)(
								(1U 
								 & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
								    >> 3U)))))
					   : ((0x11U 
					       == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
					       ? ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						  - 
						  ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)) 
						   + (QData)((IData)(
								     (1U 
								      & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
									 >> 3U))))))
					       : ((0x12U 
						   == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						   ? (QData)((IData)(
								     ((0xff000000U 
								       & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA 
									  << 0x18U)) 
								      | ((0xff0000U 
									  & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA 
									     << 8U)) 
									 | ((0xff00U 
									     & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA 
										>> 8U)) 
									    | (0xffU 
									       & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA 
										>> 0x18U)))))))
						   : VL_ULL(0xbadc0de)))))));
}

VL_INLINE_OPT void VepRISC_coreEmu::_multiclk__TOP__24(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_multiclk__TOP__24\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInB 
	= (((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrB)) 
	    & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
		  >> 7U))) ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP
	    : (((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrB)) 
		& (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
		      >> 7U))) ? (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadLoad) 
				   & (2U == (0xfU & 
					     (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					      >> 0x18U))))
				   ? (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP 
				      - (IData)(1U))
				   : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP)
	        : (((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrB)) 
		    & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
			  >> 7U))) ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS
		    : (((3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrB)) 
			& (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
			      >> 7U))) ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegGL
		        : (((0xfU == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
					      >> 0xcU))) 
			    & (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrB)))
			    ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptBase
			    : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusRegB)))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteB 
	= ((5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)) 
	   & ((1U == (0x1fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			       >> 0x1bU))) | (1U == 
					      (7U & 
					       (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						>> 0x1dU)))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT____Vcellinp__registers____pinNumber2 
	= (0xffU & ((0xf0U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
			      >> 8U)) + (((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)) 
					  | (1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)))
					  ? (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrB)
					  : (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrB))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT____Vcellinp__registers____pinNumber1 
	= (0xffU & ((0xf0U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
			      >> 8U)) + (((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)) 
					  | (1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)))
					  ? (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrA)
					  : (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrA))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteA 
	= ((5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)) 
	   & (((1U == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			       >> 0x1cU))) | ((1U == 
					       (0x1fU 
						& (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						   >> 0x1bU))) 
					      & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						 >> 0x18U))) 
	      | (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadLoad)));
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__25(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__25\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/io/spi_v1r0.v:100
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataOut = 0U;
    } else {
	if ((0xbU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) {
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataOut 
		= ((0xff00U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataOut)) 
		   | (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataBuf));
	}
    }
    // ALWAYS at ../../../firmware/io/spi_v1r0.v:109
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataBuf = 0U;
    } else {
	if ((8U > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) {
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataBuf 
		= (((~ ((IData)(1U) << (7U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState)))) 
		    & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataBuf)) 
		   | ((IData)(vlTOPp->iSPIMISO) << 
		      (7U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))));
	}
    }
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__26(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__26\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState,3,0);
    VL_SIG8(__Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockAck,4,0);
    //char	__VpadToAlign586[2];
    // Body
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockAck 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockAck;
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState;
    // ALWAYS at ../../../firmware/io/spi_v1r0.v:62
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rPrevState = 8U;
	__Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState = 8U;
	__Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockAck = 0U;
    } else {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rPrevState 
	    = vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState;
	if ((0xaU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) {
	    __Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockAck 
		= (0x1fU & ((IData)(1U) + (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockAck)));
	}
	__Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState 
	    = vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rNextState;
    }
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockAck 
	= __Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockAck;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState 
	= __Vdly__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState;
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__27(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__27\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYSPOST at ../../../firmware/core/sysx_v1r0.v:34
    if (vlTOPp->__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rContents__v0) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rContents[vlTOPp->__Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rContents__v0] 
	    = vlTOPp->__Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rContents__v0;
    }
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:32
    if (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT____Vcellinp__bufferMISO____pinNumber7) {
	vlTOPp->__Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v0 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataMISO;
	vlTOPp->__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v0 = 1U;
	vlTOPp->__Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v0 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMISO;
    }
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:258
    if (vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bus____pinNumber2) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig = 0U;
	vlTOPp->__Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockSto = 0U;
    } else {
	if (((((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockAck) 
	       > (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockSto)) 
	      | ((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockAck)) 
		 & (0x1fU == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockSto)))) 
	     & (0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState)))) {
	    vlTOPp->__Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockSto 
		= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockAck;
	}
	if (((((0U == (0xfU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)) 
	       & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite)) 
	      & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableBusControl)) 
	     & (0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState)))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
		= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData;
	}
	if ((5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
		= (0xfffffffeU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig);
	}
	if ((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
		= (2U | vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig);
	}
	if ((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
		= (0xfffffffdU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig);
	}
    }
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockSto 
	= vlTOPp->__Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockSto;
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__28(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__28\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:245
    if (vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bus____pinNumber2) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalCounterMOSI = 0U;
    } else {
	if (((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState)) 
	     & (0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipePrevState)))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalCounterMOSI 
		= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMOSI;
	}
    }
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__29(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__29\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:38
    if ((7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))) {
	vlTOPp->__Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v1 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalDataMISO;
	vlTOPp->__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v1 = 1U;
	vlTOPp->__Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v1 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalCounterMISO;
    }
}

void VepRISC_coreEmu::_initial__TOP__30(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_initial__TOP__30\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at ../../../firmware/io/video_v1r0.v:146
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rClr = 0U;
    while ((0x1000U > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rClr))) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rContents[(0xfffU 
										& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rClr))] = 0U;
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rClr 
	    = (0x1fffU & ((IData)(1U) + (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rClr)));
    }
    // INITIAL at ../../../firmware/core/core_v5r0.v:42
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rClr = 0U;
    while ((0x100U > (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rClr))) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents[(0xffU 
										& (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rClr))] = 0U;
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rClr 
	    = (0x1ffU & ((IData)(1U) + (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rClr)));
    }
}

void VepRISC_coreEmu::_settle__TOP__31(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_settle__TOP__31\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber1 
	= (0xfffU & (((0xffffU & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRow) 
				  << 4U)) + (0xffffU 
					     & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRow) 
						<< 6U))) 
		     + (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColumn)));
    vlTOPp->bGPIO6 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    >> 6U));
    vlTOPp->bGPIO14 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				  & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     >> 0xeU));
    vlTOPp->bGPIO15 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				  & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     >> 0xfU));
    vlTOPp->bGPIO8 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    >> 8U));
    vlTOPp->bGPIO9 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    >> 9U));
    vlTOPp->bGPIO10 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				  & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     >> 0xaU));
    vlTOPp->bGPIO11 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				  & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     >> 0xbU));
    vlTOPp->bGPIO12 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				  & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     >> 0xcU));
    vlTOPp->bGPIO13 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				  & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     >> 0xdU));
    vlTOPp->bGPIO7 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    >> 7U));
    vlTOPp->bGPIO5 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    >> 5U));
    vlTOPp->bGPIO0 = (1U & ((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)));
    vlTOPp->bGPIO1 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    >> 1U));
    vlTOPp->bGPIO2 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    >> 2U));
    vlTOPp->bGPIO3 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    >> 3U));
    vlTOPp->bGPIO4 = (1U & (((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection) 
				 & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)) 
				& (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			       & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			     & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)) 
			    >> 4U));
    vlTOPp->oSPISelect = (1U & (~ ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rControl) 
				   >> 3U)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAccess 
	= (((4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)) 
	    | (1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
	   & (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteB 
	= ((5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)) 
	   & ((1U == (0x1fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			       >> 0x1bU))) | (1U == 
					      (7U & 
					       (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						>> 0x1dU)))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT____Vcellinp__registers____pinNumber2 
	= (0xffU & ((0xf0U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
			      >> 8U)) + (((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)) 
					  | (1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)))
					  ? (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrB)
					  : (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrB))));
    // ALWAYS at ../../../firmware/core/core_v5r0.v:235
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeNextState 
	= (0xfU & (((((((((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)) 
			  | (2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
			 | (3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
			| (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
		       | (5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
		      | (8U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
		     | (7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
		    | (6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)))
		    ? ((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
		        ? 2U : ((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
				 ? 3U : ((3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
					  ? 4U : ((4U 
						   == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
						   ? 
						  ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec)
						    ? 5U
						    : 7U)
						   : 
						  ((5U 
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
		        ? 1U : 0U)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT____Vcellinp__registers____pinNumber1 
	= (0xffU & ((0xf0U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
			      >> 8U)) + (((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)) 
					  | (1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)))
					  ? (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrA)
					  : (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrA))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteA 
	= ((5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)) 
	   & (((1U == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			       >> 0x1cU))) | ((1U == 
					       (0x1fU 
						& (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						   >> 0x1bU))) 
					      & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						 >> 0x18U))) 
	      | (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadLoad)));
    // ALWAYS at ../../../firmware/core/core_v5r0.v:421
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rALUOut 
	= (VL_ULL(0x1ffffffff) & (((((((((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation)) 
					 | (1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
					| (2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
				       | (3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
				      | (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
				     | (5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
				    | (6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
				   | (7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation)))
				   ? ((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
				       ? ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
					  + (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)))
				       : ((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
					   ? ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
					      - (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)))
					   : ((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
					       ? ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						  & (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)))
					       : ((3U 
						   == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						   ? 
						  ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						   | (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)))
						   : 
						  ((4U 
						    == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						    ? 
						   ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						    ^ (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)))
						    : 
						   ((5U 
						     == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						     ? 
						    (~ (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)))
						     : 
						    ((6U 
						      == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						      ? 
						     ((0x20U 
						       >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						       ? 
						      ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						       << vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						       : VL_ULL(0))
						      : 
						     ((0x80000000U 
						       & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)
						       ? 
						      ((~ 
							((0x20U 
							  >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							  ? 
							 (VL_ULL(1) 
							  >> vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							  : VL_ULL(0))) 
						       + 
						       ((0x20U 
							 >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							 ? 
							((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
							 >> vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							 : VL_ULL(0)))
						       : 
						      ((0x20U 
							>= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						        ? 
						       ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
							>> vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						        : VL_ULL(0))))))))))
				   : (((((((((8U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation)) 
					     | (9U 
						== (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
					    | (0xaU 
					       == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
					   | (0xbU 
					      == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
					  | (0xcU == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
					 | (0xdU == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
					| (0xeU == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))) 
				       | (0xfU == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation)))
				       ? ((8U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
					   ? ((0x20U 
					       >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
					       ? ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						  >> vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
					       : VL_ULL(0))
					   : ((9U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
					       ? ((
						   (0x20U 
						    >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						    ? 
						   ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						    >> vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						    : VL_ULL(0)) 
						  + 
						  ((0x20U 
						    >= 
						    ((IData)(0x20U) 
						     - vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB))
						    ? 
						   (((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						     & (~ 
							((0x20U 
							  >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							  ? 
							 (VL_ULL(1) 
							  << vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							  : VL_ULL(0)))) 
						    << 
						    ((IData)(0x20U) 
						     - vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB))
						    : VL_ULL(0)))
					       : ((0xaU 
						   == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						   ? 
						  (((0x20U 
						     >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						     ? 
						    ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						     << vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						     : VL_ULL(0)) 
						   + 
						   ((0x20U 
						     >= 
						     ((IData)(0x20U) 
						      - vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB))
						     ? 
						    (((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						      & (~ 
							 ((0x20U 
							   >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							   ? 
							  (VL_ULL(1) 
							   >> vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							   : VL_ULL(0)))) 
						     >> 
						     ((IData)(0x20U) 
						      - vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB))
						     : VL_ULL(0)))
						   : 
						  ((0xbU 
						    == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						    ? 
						   ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						    & (~ (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB))))
						    : 
						   ((0xcU 
						     == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						     ? 
						    ((0x20U 
						      >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						      ? 
						     (((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						       & (QData)((IData)(
									 (0xffU 
									  & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst)))) 
						      << vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						      : VL_ULL(0))
						     : 
						    ((0xdU 
						      == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						      ? 
						     ((0x20U 
						       >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						       ? 
						      (((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
							& ((0x20U 
							    >= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							    ? 
							   ((QData)((IData)(
									    (0xffU 
									     & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst))) 
							    << vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
							    : VL_ULL(0))) 
						       >> vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)
						       : VL_ULL(0))
						      : 
						     ((0xeU 
						       == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						       ? 
						      ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						       - (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)))
						       : 
						      ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						       & (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB))))))))))
				       : ((0x10U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
					   ? (((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
					       + (QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB))) 
					      + (QData)((IData)(
								(1U 
								 & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
								    >> 3U)))))
					   : ((0x11U 
					       == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
					       ? ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA)) 
						  - 
						  ((QData)((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB)) 
						   + (QData)((IData)(
								     (1U 
								      & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
									 >> 3U))))))
					       : ((0x12U 
						   == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation))
						   ? (QData)((IData)(
								     ((0xff000000U 
								       & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA 
									  << 0x18U)) 
								      | ((0xff0000U 
									  & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA 
									     << 8U)) 
									 | ((0xff00U 
									     & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA 
										>> 8U)) 
									    | (0xffU 
									       & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA 
										>> 0x18U)))))))
						   : VL_ULL(0xbadc0de)))))));
    vlTOPp->oSPIMOSI = (1U & ((7U < (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
			       ? 1U : (1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataIn) 
					     >> (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState)))));
    vlTOPp->oSPIClock = (1U & ((8U > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
			        ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk)
			        : 0U));
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__tmpClock 
	= ((8U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
	    ? (IData)(vlTOPp->epRISC_coreEmu__DOT__oBusClock)
	    : (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk));
    // ALWAYS at ../../../firmware/io/spi_v1r0.v:118
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rNextState 
	= (0xfU & (((((((((8U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState)) 
			  | (9U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
			 | (7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
			| (6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
		       | (5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
		      | (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
		     | (3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
		    | (2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState)))
		    ? ((8U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
		        ? ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rControl) 
			     >> 7U) & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockAck) 
				       == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockSto)))
			    ? 7U : 8U) : ((9U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
					   ? 7U : (
						   (7U 
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
		        ? 0U : ((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
				 ? 0xbU : ((0xbU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
					    ? 0xaU : 8U)))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDistributionMOSI 
	= ((1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
		  | (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
		     >> 1U))) ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDirectMOSI
	    : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wInternalDataMOSI);
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__debug 
	= (1U & ((0xaU > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents
		  [5U]) ? 1U : 0U));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutB 
	= ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mDirectOR)
	    ? (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rALUOut)
	    : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB);
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__32(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__32\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountAck 
	= vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountAck;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState 
	= vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountAck 
	= vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountAck;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState 
	= vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState;
    vlTOPp->oTTLSerialTX = (1U & ((9U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
				   ? 0U : ((((0xdU 
					      == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState)) 
					     | (0xbU 
						== (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) 
					    | (0xcU 
					       == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState)))
					    ? 1U : 
					   (1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataBuf) 
						  >> 
						  (7U 
						   & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState)))))));
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__33(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__33\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/io/controller_v1r0.v:200
    if ((1U & (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wInternalReset)))) {
	if ((6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState))) {
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
		= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSIBuffer;
	}
    }
    // ALWAYS at ../../../firmware/io/controller_v1r0.v:209
    if (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wInternalReset) {
	vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSIBuffer = 0U;
    } else {
	if ((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState))) {
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSIBuffer 
		= ((0xffffff00U & vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSIBuffer) 
		   | (IData)(vlTOPp->epRISC_coreEmu__DOT__oBusMOSI));
	}
	if ((3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState))) {
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSIBuffer 
		= ((0xffff00ffU & vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSIBuffer) 
		   | ((IData)(vlTOPp->epRISC_coreEmu__DOT__oBusMOSI) 
		      << 8U));
	}
	if ((4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState))) {
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSIBuffer 
		= ((0xff00ffffU & vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSIBuffer) 
		   | ((IData)(vlTOPp->epRISC_coreEmu__DOT__oBusMOSI) 
		      << 0x10U));
	}
	if ((5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState))) {
	    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSIBuffer 
		= ((0xffffffU & vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSIBuffer) 
		   | ((IData)(vlTOPp->epRISC_coreEmu__DOT__oBusMOSI) 
		      << 0x18U));
	}
    }
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableUART 
	= ((0x10U <= (0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				 >> 0x10U))) & (0x20U 
						> (0x7fffU 
						   & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						      >> 0x10U))));
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableSPI 
	= ((0x20U <= (0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				 >> 0x10U))) & (0x30U 
						> (0x7fffU 
						   & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						      >> 0x10U))));
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableVideo 
	= ((0x30U <= (0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				 >> 0x10U))) & (0x40U 
						> (0x7fffU 
						   & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						      >> 0x10U))));
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableRAM 
	= ((0x40U <= (0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				 >> 0x10U))) & (0xffU 
						> (0x7fffU 
						   & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						      >> 0x10U))));
}

VL_INLINE_OPT void VepRISC_coreEmu::_multiclk__TOP__34(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_multiclk__TOP__34\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/core_v5r0.v:235
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeNextState 
	= (0xfU & (((((((((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)) 
			  | (2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
			 | (3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
			| (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
		       | (5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
		      | (8U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
		     | (7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
		    | (6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)))
		    ? ((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
		        ? 2U : ((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
				 ? 3U : ((3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
					  ? 4U : ((4U 
						   == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
						   ? 
						  ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec)
						    ? 5U
						    : 7U)
						   : 
						  ((5U 
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
		        ? 1U : 0U)));
}

VL_INLINE_OPT void VepRISC_coreEmu::_multiclk__TOP__35(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_multiclk__TOP__35\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->oSPIMOSI = (1U & ((7U < (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
			       ? 1U : (1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataIn) 
					     >> (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState)))));
    // ALWAYS at ../../../firmware/io/spi_v1r0.v:118
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rNextState 
	= (0xfU & (((((((((8U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState)) 
			  | (9U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
			 | (7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
			| (6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
		       | (5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
		      | (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
		     | (3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
		    | (2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState)))
		    ? ((8U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
		        ? ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rControl) 
			     >> 7U) & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockAck) 
				       == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockSto)))
			    ? 7U : 8U) : ((9U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
					   ? 7U : (
						   (7U 
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
		        ? 0U : ((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
				 ? 0xbU : ((0xbU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
					    ? 0xaU : 8U)))));
}

VL_INLINE_OPT void VepRISC_coreEmu::_combo__TOP__36(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_combo__TOP__36\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->oSPIClock = (1U & ((8U > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
			        ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk)
			        : 0U));
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__tmpClock 
	= ((8U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
	    ? (IData)(vlTOPp->epRISC_coreEmu__DOT__oBusClock)
	    : (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk));
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:203
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvNextState 
	= (0xfU & (((((((((7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState)) 
			  | (6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))) 
			 | (5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))) 
			| (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))) 
		       | (3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))) 
		      | (2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))) 
		     | (1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))) 
		    | (0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState)))
		    ? ((7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
		        ? 0xcU : ((6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
				   ? 7U : ((5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
					    ? 6U : 
					   ((4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
					     ? 5U : 
					    ((3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
					      ? 4U : 
					     ((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
					       ? 3U
					       : ((1U 
						   == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
						   ? 2U
						   : 1U)))))))
		    : ((9U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
		        ? 0xeU : ((0xaU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
				   ? ((4U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl))
				       ? 0xbU : 0xcU)
				   : ((0xbU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
				       ? 0xcU : ((0xcU 
						  == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
						  ? 0xdU
						  : 
						 ((0xdU 
						   == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
						   ? 
						  ((((~ (IData)(vlTOPp->iTTLSerialRX)) 
						     & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
							>> 5U)) 
						    & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountAck) 
						       == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountSto)))
						    ? 9U
						    : 0xdU)
						   : 
						  ((0xeU 
						    == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
						    ? 0U
						    : 0xdU))))))));
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wInternalReset 
	= (1U & ((~ (IData)(vlTOPp->iBoardReset)) | 
		 (0U == (3U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
			       >> 2U)))));
}

VL_INLINE_OPT void VepRISC_coreEmu::_multiclk__TOP__37(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_multiclk__TOP__37\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDistributionMOSI 
	= ((1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
		  | (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
		     >> 1U))) ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDirectMOSI
	    : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wInternalDataMOSI);
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__38(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__38\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:225
    if (vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bus____pinNumber2) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMOSI = 0U;
    } else {
	if ((((3U == (0xfU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)) 
	      & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite)) 
	     & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableBusControl))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMOSI 
		= (0xffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData);
	}
    }
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__39(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__39\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYSPOST at ../../../firmware/core/sysx_v1r0.v:34
    if (vlTOPp->__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v0) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents[vlTOPp->__Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v0] 
	    = vlTOPp->__Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v0;
    }
    if (vlTOPp->__Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v1) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents[vlTOPp->__Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v1] 
	    = vlTOPp->__Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v1;
    }
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__40(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__40\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:317
    if (vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bus____pinNumber2) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalDataMISO = 0U;
    } else {
	if ((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalDataMISO 
		= ((0xffffff00U & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalDataMISO) 
		   | (IData)(vlTOPp->epRISC_coreEmu__DOT__iBusMISO));
	}
	if ((3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalDataMISO 
		= ((0xffff00ffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalDataMISO) 
		   | ((IData)(vlTOPp->epRISC_coreEmu__DOT__iBusMISO) 
		      << 8U));
	}
	if ((4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalDataMISO 
		= ((0xff00ffffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalDataMISO) 
		   | ((IData)(vlTOPp->epRISC_coreEmu__DOT__iBusMISO) 
		      << 0x10U));
	}
	if ((5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalDataMISO 
		= ((0xffffffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalDataMISO) 
		   | ((IData)(vlTOPp->epRISC_coreEmu__DOT__iBusMISO) 
		      << 0x18U));
	}
    }
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:234
    if (vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bus____pinNumber2) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalCounterMISO = 0U;
    } else {
	if (((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState)) 
	     & (0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipePrevState)))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalCounterMISO 
		= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMISO;
	}
    }
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__41(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__41\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__debug 
	= (1U & ((0xaU > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents
		  [5U]) ? 1U : 0U));
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__42(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__42\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutB 
	= ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mDirectOR)
	    ? (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rALUOut)
	    : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB);
}

void VepRISC_coreEmu::_settle__TOP__43(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_settle__TOP__43\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->oTTLSerialTX = (1U & ((9U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
				   ? 0U : ((((0xdU 
					      == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState)) 
					     | (0xbU 
						== (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) 
					    | (0xcU 
					       == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState)))
					    ? 1U : 
					   (1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataBuf) 
						  >> 
						  (7U 
						   & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState)))))));
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:183
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendNextState 
	= (0xfU & (((((((((7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState)) 
			  | (6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) 
			 | (5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) 
			| (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) 
		       | (3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) 
		      | (2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) 
		     | (1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) 
		    | (0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState)))
		    ? ((7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
		        ? 0xcU : ((6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
				   ? 7U : ((5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
					    ? 6U : 
					   ((4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
					     ? 5U : 
					    ((3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
					      ? 4U : 
					     ((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
					       ? 3U
					       : ((1U 
						   == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
						   ? 2U
						   : 1U)))))))
		    : ((9U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
		        ? 0U : ((0xaU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
				 ? ((4U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl))
				     ? 0xbU : 0xcU)
				 : ((0xbU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
				     ? 0xcU : ((0xcU 
						== (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
					        ? 0xdU
					        : (
						   (0xdU 
						    == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
						    ? 
						   ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
						      >> 7U) 
						     & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountAck) 
							== (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountSto)))
						     ? 9U
						     : 0xdU)
						    : 0xdU)))))));
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:203
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvNextState 
	= (0xfU & (((((((((7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState)) 
			  | (6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))) 
			 | (5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))) 
			| (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))) 
		       | (3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))) 
		      | (2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))) 
		     | (1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))) 
		    | (0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState)))
		    ? ((7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
		        ? 0xcU : ((6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
				   ? 7U : ((5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
					    ? 6U : 
					   ((4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
					     ? 5U : 
					    ((3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
					      ? 4U : 
					     ((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
					       ? 3U
					       : ((1U 
						   == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
						   ? 2U
						   : 1U)))))))
		    : ((9U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
		        ? 0xeU : ((0xaU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
				   ? ((4U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl))
				       ? 0xbU : 0xcU)
				   : ((0xbU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
				       ? 0xcU : ((0xcU 
						  == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
						  ? 0xdU
						  : 
						 ((0xdU 
						   == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
						   ? 
						  ((((~ (IData)(vlTOPp->iTTLSerialRX)) 
						     & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
							>> 5U)) 
						    & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountAck) 
						       == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountSto)))
						    ? 9U
						    : 0xdU)
						   : 
						  ((0xeU 
						    == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState))
						    ? 0U
						    : 0xdU))))))));
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableUART 
	= ((0x10U <= (0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				 >> 0x10U))) & (0x20U 
						> (0x7fffU 
						   & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						      >> 0x10U))));
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableSPI 
	= ((0x20U <= (0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				 >> 0x10U))) & (0x30U 
						> (0x7fffU 
						   & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						      >> 0x10U))));
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableVideo 
	= ((0x30U <= (0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				 >> 0x10U))) & (0x40U 
						> (0x7fffU 
						   & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						      >> 0x10U))));
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableRAM 
	= ((0x40U <= (0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				 >> 0x10U))) & (0xffU 
						> (0x7fffU 
						   & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						      >> 0x10U))));
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wInternalReset 
	= (1U & ((~ (IData)(vlTOPp->iBoardReset)) | 
		 (0U == (3U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
			       >> 2U)))));
}

VL_INLINE_OPT void VepRISC_coreEmu::_multiclk__TOP__44(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_multiclk__TOP__44\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/io/uart_v1r0.v:183
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendNextState 
	= (0xfU & (((((((((7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState)) 
			  | (6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) 
			 | (5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) 
			| (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) 
		       | (3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) 
		      | (2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) 
		     | (1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))) 
		    | (0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState)))
		    ? ((7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
		        ? 0xcU : ((6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
				   ? 7U : ((5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
					    ? 6U : 
					   ((4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
					     ? 5U : 
					    ((3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
					      ? 4U : 
					     ((2U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
					       ? 3U
					       : ((1U 
						   == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
						   ? 2U
						   : 1U)))))))
		    : ((9U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
		        ? 0U : ((0xaU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
				 ? ((4U & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl))
				     ? 0xbU : 0xcU)
				 : ((0xbU == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
				     ? 0xcU : ((0xcU 
						== (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
					        ? 0xdU
					        : (
						   (0xdU 
						    == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState))
						    ? 
						   ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
						      >> 7U) 
						     & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountAck) 
							== (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountSto)))
						     ? 9U
						     : 0xdU)
						    : 0xdU)))))));
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__45(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__45\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState 
	= vlTOPp->__Vdly__epRISC_coreEmu__DOT__controller__DOT__rPipeState;
    // ALWAYS at ../../../firmware/io/controller_v1r0.v:187
    vlTOPp->__Vtableidx3 = vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeNextState 
	= vlTOPp->__Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState
	[vlTOPp->__Vtableidx3];
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__46(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__46\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:187
    if (vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bus____pinNumber2) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipePrevState = 0U;
	vlTOPp->__Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState = 0U;
	vlTOPp->__Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockAck = 0U;
    } else {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipePrevState 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState;
	if ((5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))) {
	    vlTOPp->__Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockAck 
		= (0x1fU & ((IData)(1U) + (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockAck)));
	}
	vlTOPp->__Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState 
	    = vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState;
    }
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockAck 
	= vlTOPp->__Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockAck;
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState 
	= vlTOPp->__Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState;
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__47(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__47\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:216
    if (vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bus____pinNumber2) {
	vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMISO = 0U;
    } else {
	if (((5U == (0xfU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)) 
	     & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite))) {
	    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMISO 
		= (0xffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData);
	}
    }
}

VL_INLINE_OPT void VepRISC_coreEmu::_multiclk__TOP__48(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_multiclk__TOP__48\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset 
	= (((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState)) 
	    & (0x7fffU == (0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				      >> 0x10U)))) 
	   & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
	      >> 0x1fU));
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusData 
	= (0xffffU & (((7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState)) 
		       | (1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState)))
		       ? (0xffffU & vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI)
		       : 0U));
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite 
	= ((7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState)) 
	   & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
	      >> 0x1fU));
}

void VepRISC_coreEmu::_settle__TOP__49(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_settle__TOP__49\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset 
	= (((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState)) 
	    & (0x7fffU == (0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				      >> 0x10U)))) 
	   & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
	      >> 0x1fU));
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusData 
	= (0xffffU & (((7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState)) 
		       | (1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState)))
		       ? (0xffffU & vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI)
		       : 0U));
    // ALWAYS at ../../../firmware/io/controller_v1r0.v:187
    vlTOPp->__Vtableidx3 = vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState;
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeNextState 
	= vlTOPp->__Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState
	[vlTOPp->__Vtableidx3];
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite 
	= ((7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState)) 
	   & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
	      >> 0x1fU));
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:201
    vlTOPp->__Vtableidx2 = ((0x20U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
				      << 5U)) | (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState 
	= vlTOPp->__Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState
	[vlTOPp->__Vtableidx2];
    vlTOPp->epRISC_coreEmu__DOT__oBusMOSI = (0xffU 
					     & ((0x10U 
						 & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig)
						 ? 0xffU
						 : 
						((2U 
						  == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))
						  ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDistributionMOSI
						  : 
						 ((3U 
						   == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))
						   ? 
						  (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDistributionMOSI 
						   >> 8U)
						   : 
						  ((4U 
						    == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))
						    ? 
						   (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDistributionMOSI 
						    >> 0x10U)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))
						     ? 
						    (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDistributionMOSI 
						     >> 0x18U)
						     : 0U))))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bus____pinNumber2 
	= (1U & ((~ (IData)(vlTOPp->iBoardReset)) | 
		 (~ (IData)(vlTOPp->iBoardSense))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite 
	= ((4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)) 
	   & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadStore) 
	      | (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchSaveStack)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress 
	= ((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
	    ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP
	    : ((((1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			       >> 0x1eU))) & ((1U != 
					       (0xfU 
						& (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						   >> 0x18U))) 
					      | (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
						 >> 7U))) 
		& (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)))
	        ? (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegR)
	        : ((((((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadLoad) 
		       & (1U == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					 >> 0x18U)))) 
		      & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
			    >> 7U))) | (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchLoadStack)) 
		    & (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)))
		    ? (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP 
		       - (IData)(1U)) : ((((((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadStore) 
					     & (1U 
						== 
						(0xfU 
						 & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						    >> 0x18U)))) 
					    & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
						  >> 7U))) 
					   | (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchSaveStack)) 
					  & (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)))
					  ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP
					  : 0U))));
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber7 
	= (1U & ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
		   & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableVideo)) 
		  & (3U == (3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				  >> 0x10U)))) ? 1U
		  : 0U));
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__oData__out__en16 
	= (((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
	    | (0x10U <= (0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				    >> 0x10U)))) ? 0U
	    : 0xffffU);
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__en0 
	= ((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
		  | (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableRAM))))
	    ? 0xffff0000U : 0xffffffffU);
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__out0 
	= ((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
		  | (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableRAM))))
	    ? 0U : vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__rContents
	   [(0xffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
		      >> 0x10U))]);
}

VL_INLINE_OPT void VepRISC_coreEmu::_sequent__TOP__50(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_sequent__TOP__50\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/sysx_v1r0.v:201
    vlTOPp->__Vtableidx2 = ((0x20U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
				      << 5U)) | (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState 
	= vlTOPp->__Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState
	[vlTOPp->__Vtableidx2];
}

VL_INLINE_OPT void VepRISC_coreEmu::_multiclk__TOP__51(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_multiclk__TOP__51\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__oBusMOSI = (0xffU 
					     & ((0x10U 
						 & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig)
						 ? 0xffU
						 : 
						((2U 
						  == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))
						  ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDistributionMOSI
						  : 
						 ((3U 
						   == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))
						   ? 
						  (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDistributionMOSI 
						   >> 8U)
						   : 
						  ((4U 
						    == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))
						    ? 
						   (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDistributionMOSI 
						    >> 0x10U)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))
						     ? 
						    (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDistributionMOSI 
						     >> 0x18U)
						     : 0U))))));
}

VL_INLINE_OPT void VepRISC_coreEmu::_combo__TOP__52(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_combo__TOP__52\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bus____pinNumber2 
	= (1U & ((~ (IData)(vlTOPp->iBoardReset)) | 
		 (~ (IData)(vlTOPp->iBoardSense))));
}

VL_INLINE_OPT void VepRISC_coreEmu::_multiclk__TOP__53(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_multiclk__TOP__53\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite 
	= ((4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)) 
	   & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadStore) 
	      | (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchSaveStack)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress 
	= ((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
	    ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP
	    : ((((1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
			       >> 0x1eU))) & ((1U != 
					       (0xfU 
						& (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						   >> 0x18U))) 
					      | (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
						 >> 7U))) 
		& (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)))
	        ? (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegR)
	        : ((((((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadLoad) 
		       & (1U == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					 >> 0x18U)))) 
		      & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
			    >> 7U))) | (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchLoadStack)) 
		    & (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)))
		    ? (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP 
		       - (IData)(1U)) : ((((((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadStore) 
					     & (1U 
						== 
						(0xfU 
						 & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						    >> 0x18U)))) 
					    & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
						  >> 7U))) 
					   | (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchSaveStack)) 
					  & (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)))
					  ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP
					  : 0U))));
    vlTOPp->oBoardAcknowledge = (1U & ((0x1000U > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)
				        ? 1U : 0U));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT____Vcellinp__bufferMISO____pinNumber7 
	= ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite) 
	   & (6U == (0xfU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT____Vcellinp__bufferMOSI____pinNumber7 
	= ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite) 
	   & (4U == (0xfU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableRAM 
	= ((0x1000U <= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress) 
	   & (0x2000U > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableSDRAM 
	= ((0x3000U <= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress) 
	   & (0x800000U > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableBusControl 
	= ((0x2000U <= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress) 
	   & (0x3000U > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress));
}

VL_INLINE_OPT void VepRISC_coreEmu::_multiclk__TOP__54(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_multiclk__TOP__54\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber7 
	= (1U & ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
		   & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableVideo)) 
		  & (3U == (3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				  >> 0x10U)))) ? 1U
		  : 0U));
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__oData__out__en16 
	= (((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
	    | (0x10U <= (0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				    >> 0x10U)))) ? 0U
	    : 0xffffU);
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__en0 
	= ((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
		  | (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableRAM))))
	    ? 0xffff0000U : 0xffffffffU);
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__out0 
	= ((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
		  | (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableRAM))))
	    ? 0U : vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__rContents
	   [(0xffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
		      >> 0x10U))]);
}

void VepRISC_coreEmu::_settle__TOP__55(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_settle__TOP__55\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->oBoardAcknowledge = (1U & ((0x1000U > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)
				        ? 1U : 0U));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT____Vcellinp__bufferMISO____pinNumber7 
	= ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite) 
	   & (6U == (0xfU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT____Vcellinp__bufferMOSI____pinNumber7 
	= ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite) 
	   & (4U == (0xfU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataMISO 
	= (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite) 
	    & (6U == (0xfU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)))
	    ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData
	    : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataOutMISO);
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataMOSI 
	= (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite) 
	    & (4U == (0xfU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)))
	    ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData
	    : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataOutMOSI);
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableRAM 
	= ((0x1000U <= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress) 
	   & (0x2000U > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableSDRAM 
	= ((0x3000U <= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress) 
	   & (0x800000U > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableBusControl 
	= ((0x2000U <= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress) 
	   & (0x3000U > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress));
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wInternalMISO 
	= (0xffffU & ((0x10U > (0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
					   >> 0x10U)))
		       ? (((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
			     | (0x10U <= (0x7fffU & 
					  (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
					   >> 0x10U))))
			     ? 0U : ((0U == (3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						   >> 0x10U)))
				      ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)
				      : ((1U == (3U 
						 & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						    >> 0x10U)))
					  ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rInterrupt)
					  : ((2U == 
					      (3U & 
					       (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						>> 0x10U)))
					      ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)
					      : 0xeaU)))) 
			   & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__oData__out__en16)) 
			  & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__oData__out__en16))
		       : ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableUART)
			   ? ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableUART)
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
					   : 0U)) & 
			      ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableUART)
			        ? 0xffffU : 0U)) : 
			  ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableSPI)
			    ? ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableSPI)
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
				   ? 0xffffU : 0U))
			    : ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableVideo)
			        ? ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableVideo)
				      ? ((0U == (3U 
						 & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						    >> 0x10U)))
					  ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rConfig)
					  : ((1U == 
					      (3U & 
					       (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						>> 0x10U)))
					      ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColumn)
					      : ((2U 
						  == 
						  (3U 
						   & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						      >> 0x10U)))
						  ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRow)
						  : 
						 ((3U 
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
				       ? 0xffffU : 0U))
			        : ((vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__out0 
				    & vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__en0) 
				   & vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__en0))))));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcram____pinNumber1 
	= ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableRAM) 
	   & (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcsdram____pinNumber1 
	= ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableSDRAM) 
	   & (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bData__out__en0 
	= ((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite) 
		  | (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableBusControl))))
	    ? 0U : 0xffffffffU);
}

VL_INLINE_OPT void VepRISC_coreEmu::_combo__TOP__56(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_combo__TOP__56\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataMISO 
	= (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite) 
	    & (6U == (0xfU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)))
	    ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData
	    : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataOutMISO);
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataMOSI 
	= (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite) 
	    & (4U == (0xfU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)))
	    ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData
	    : vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataOutMOSI);
}

VL_INLINE_OPT void VepRISC_coreEmu::_multiclk__TOP__57(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_multiclk__TOP__57\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wInternalMISO 
	= (0xffffU & ((0x10U > (0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
					   >> 0x10U)))
		       ? (((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
			     | (0x10U <= (0x7fffU & 
					  (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
					   >> 0x10U))))
			     ? 0U : ((0U == (3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						   >> 0x10U)))
				      ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)
				      : ((1U == (3U 
						 & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						    >> 0x10U)))
					  ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rInterrupt)
					  : ((2U == 
					      (3U & 
					       (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						>> 0x10U)))
					      ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue)
					      : 0xeaU)))) 
			   & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__oData__out__en16)) 
			  & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__oData__out__en16))
		       : ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableUART)
			   ? ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableUART)
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
					   : 0U)) & 
			      ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableUART)
			        ? 0xffffU : 0U)) : 
			  ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableSPI)
			    ? ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableSPI)
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
				   ? 0xffffU : 0U))
			    : ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableVideo)
			        ? ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableVideo)
				      ? ((0U == (3U 
						 & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						    >> 0x10U)))
					  ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rConfig)
					  : ((1U == 
					      (3U & 
					       (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						>> 0x10U)))
					      ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColumn)
					      : ((2U 
						  == 
						  (3U 
						   & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						      >> 0x10U)))
						  ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRow)
						  : 
						 ((3U 
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
				       ? 0xffffU : 0U))
			        : ((vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__out0 
				    & vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__en0) 
				   & vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__en0))))));
    vlTOPp->epRISC_coreEmu__DOT__iBusMISO = (0xffU 
					     & ((2U 
						 == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState))
						 ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wInternalMISO)
						 : 
						((3U 
						  == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState))
						  ? 
						 ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wInternalMISO) 
						  >> 8U)
						  : 0U)));
}

VL_INLINE_OPT void VepRISC_coreEmu::_multiclk__TOP__58(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_multiclk__TOP__58\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcram____pinNumber1 
	= ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableRAM) 
	   & (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcsdram____pinNumber1 
	= ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableSDRAM) 
	   & (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bData__out__en0 
	= ((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite) 
		  | (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableBusControl))))
	    ? 0U : 0xffffffffU);
}

void VepRISC_coreEmu::_settle__TOP__59(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_settle__TOP__59\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__iBusMISO = (0xffU 
					     & ((2U 
						 == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState))
						 ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wInternalMISO)
						 : 
						((3U 
						  == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState))
						  ? 
						 ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wInternalMISO) 
						  >> 8U)
						  : 0U)));
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData 
	= ((((((((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite)
		  ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegM
		  : 0U) & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite)
			    ? 0xffffffffU : 0U)) & 
	       ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite)
		 ? 0xffffffffU : 0U)) | ((((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite) 
						  | (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableBusControl))))
					    ? 0U : 
					   ((0U == 
					     (0xfU 
					      & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress))
					     ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig
					     : ((1U 
						 == 
						 (0xfU 
						  & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress))
						 ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDirectMOSI
						 : 
						((2U 
						  == 
						  (0xfU 
						   & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress))
						  ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDirectMISO
						  : 
						 ((3U 
						   == 
						   (0xfU 
						    & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress))
						   ? (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMOSI)
						   : 
						  ((4U 
						    == 
						    (0xfU 
						     & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress))
						    ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataMOSI
						    : 
						   ((5U 
						     == 
						     (0xfU 
						      & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress))
						     ? (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMISO)
						     : 
						    ((6U 
						      == 
						      (0xfU 
						       & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress))
						      ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataMISO
						      : 0xbadc0deU)))))))) 
					  & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bData__out__en0) 
					 & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bData__out__en0)) 
	     | ((((0x1000U > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)
		   ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rDataOut
		   : 0U) & ((0x1000U > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)
			     ? 0xffffffffU : 0U)) & 
		((0x1000U > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)
		  ? 0xffffffffU : 0U))) | ((((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcram____pinNumber1)
					      ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbram__DOT__rDataOut
					      : 0U) 
					    & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcram____pinNumber1)
					        ? 0xffffffffU
					        : 0U)) 
					   & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcram____pinNumber1)
					       ? 0xffffffffU
					       : 0U))) 
	   | ((((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcsdram____pinNumber1)
		 ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbsdram__DOT__rDataOut
		 : 0U) & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcsdram____pinNumber1)
			   ? 0xffffffffU : 0U)) & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcsdram____pinNumber1)
						    ? 0xffffffffU
						    : 0U)));
}

VL_INLINE_OPT void VepRISC_coreEmu::_combo__TOP__60(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_combo__TOP__60\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData 
	= ((((((((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite)
		  ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegM
		  : 0U) & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite)
			    ? 0xffffffffU : 0U)) & 
	       ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite)
		 ? 0xffffffffU : 0U)) | ((((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite) 
						  | (~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableBusControl))))
					    ? 0U : 
					   ((0U == 
					     (0xfU 
					      & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress))
					     ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig
					     : ((1U 
						 == 
						 (0xfU 
						  & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress))
						 ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDirectMOSI
						 : 
						((2U 
						  == 
						  (0xfU 
						   & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress))
						  ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDirectMISO
						  : 
						 ((3U 
						   == 
						   (0xfU 
						    & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress))
						   ? (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMOSI)
						   : 
						  ((4U 
						    == 
						    (0xfU 
						     & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress))
						    ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataMOSI
						    : 
						   ((5U 
						     == 
						     (0xfU 
						      & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress))
						     ? (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMISO)
						     : 
						    ((6U 
						      == 
						      (0xfU 
						       & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress))
						      ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataMISO
						      : 0xbadc0deU)))))))) 
					  & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bData__out__en0) 
					 & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bData__out__en0)) 
	     | ((((0x1000U > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)
		   ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rDataOut
		   : 0U) & ((0x1000U > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)
			     ? 0xffffffffU : 0U)) & 
		((0x1000U > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)
		  ? 0xffffffffU : 0U))) | ((((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcram____pinNumber1)
					      ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbram__DOT__rDataOut
					      : 0U) 
					    & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcram____pinNumber1)
					        ? 0xffffffffU
					        : 0U)) 
					   & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcram____pinNumber1)
					       ? 0xffffffffU
					       : 0U))) 
	   | ((((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcsdram____pinNumber1)
		 ? vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbsdram__DOT__rDataOut
		 : 0U) & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcsdram____pinNumber1)
			   ? 0xffffffffU : 0U)) & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcsdram____pinNumber1)
						    ? 0xffffffffU
						    : 0U)));
}

void VepRISC_coreEmu::_eval(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_eval\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->iBoardClock) & (~ (IData)(vlTOPp->__Vclklast__TOP__iBoardClock)))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(2) | vlTOPp->__Vm_traceActivity);
    }
    if (((~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock)) 
	 & (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock))) {
	vlTOPp->_sequent__TOP__5(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(4) | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock)))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(8) | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock)))) {
	vlTOPp->_sequent__TOP__7(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x10) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock)) 
	 & (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock))) {
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x20) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset))) 
	 | ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wSPIClock) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__controller__DOT__wSPIClock))))) {
	vlTOPp->_sequent__TOP__10(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x40) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wSerialClock) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__controller__DOT__wSerialClock)))) {
	vlTOPp->_sequent__TOP__11(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x80) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset))) 
	 | ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wSerialClock) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__controller__DOT__wSerialClock))))) {
	vlTOPp->_sequent__TOP__12(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x100) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock)) 
	 & (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock))) {
	vlTOPp->_sequent__TOP__14(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x200) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock)))) {
	vlTOPp->_sequent__TOP__15(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x400) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock))) 
	 | ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock))))) {
	vlTOPp->_sequent__TOP__16(vlSymsp);
    }
    if (((IData)(vlTOPp->epRISC_coreEmu__DOT__oBusClock) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__oBusClock)))) {
	vlTOPp->_sequent__TOP__17(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x800) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset))) 
	 | ((IData)(vlTOPp->epRISC_coreEmu__DOT__oBusClock) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__oBusClock))))) {
	vlTOPp->_sequent__TOP__19(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x1000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset))) 
	 | ((IData)(vlTOPp->epRISC_coreEmu__DOT__oBusClock) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__oBusClock))))) {
	vlTOPp->_sequent__TOP__20(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x2000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset))) 
	 | ((~ (IData)(vlTOPp->epRISC_coreEmu__DOT__oBusClock)) 
	    & (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__oBusClock)))) {
	vlTOPp->_sequent__TOP__21(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x4000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock)))) {
	vlTOPp->_sequent__TOP__22(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x8000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock)) 
	 & (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock))) {
	vlTOPp->_sequent__TOP__23(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x10000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock) 
	 ^ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock))) {
	vlTOPp->_multiclk__TOP__24(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x20000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk))) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset))))) {
	vlTOPp->_sequent__TOP__25(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x40000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((~ (IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk)) 
	  & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk)) 
	 | ((IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset))))) {
	vlTOPp->_sequent__TOP__26(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x80000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock)))) {
	vlTOPp->_sequent__TOP__27(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x100000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock)) 
	 & (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock))) {
	vlTOPp->_sequent__TOP__28(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x200000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock)))) {
	vlTOPp->_sequent__TOP__29(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset))) 
	 | ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wSerialClock) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__controller__DOT__wSerialClock))))) {
	vlTOPp->_sequent__TOP__32(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x400000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset))) 
	 | ((~ (IData)(vlTOPp->epRISC_coreEmu__DOT__oBusClock)) 
	    & (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__oBusClock)))) {
	vlTOPp->_sequent__TOP__33(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x800000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock) 
	  ^ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock)) 
	 | ((IData)(vlTOPp->epRISC_coreEmu__DOT__oBusClock) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__oBusClock))))) {
	vlTOPp->_multiclk__TOP__34(vlSymsp);
    }
    if (((((~ (IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk)) 
	   & (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk)) 
	  | ((IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset)))) 
	 | ((IData)(vlTOPp->epRISC_coreEmu__DOT__oBusClock) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__oBusClock))))) {
	vlTOPp->_multiclk__TOP__35(vlSymsp);
    }
    vlTOPp->_combo__TOP__36(vlSymsp);
    vlTOPp->__Vm_traceActivity = (VL_ULL(0x1000000) 
				  | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock))) 
	 | ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock) 
	    ^ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock)))) {
	vlTOPp->_multiclk__TOP__37(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x2000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock)) 
	 & (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock))) {
	vlTOPp->_sequent__TOP__38(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x4000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock))) 
	 | ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock))))) {
	vlTOPp->_sequent__TOP__39(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock)) 
	 & (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock))) {
	vlTOPp->_sequent__TOP__40(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x8000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock)))) {
	vlTOPp->_sequent__TOP__41(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x10000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock)) 
	 & (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock))) {
	vlTOPp->_sequent__TOP__42(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x20000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((((IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset) 
	   & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset))) 
	  | ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wSerialClock) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__controller__DOT__wSerialClock)))) 
	 | ((~ (IData)(vlTOPp->epRISC_coreEmu__DOT__oBusClock)) 
	    & (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__oBusClock)))) {
	vlTOPp->_multiclk__TOP__44(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x40000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset))) 
	 | ((IData)(vlTOPp->epRISC_coreEmu__DOT__oBusClock) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__oBusClock))))) {
	vlTOPp->_sequent__TOP__45(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x80000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock)))) {
	vlTOPp->_sequent__TOP__46(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x100000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((~ (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock)) 
	 & (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock))) {
	vlTOPp->_sequent__TOP__47(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x200000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset))) 
	 | ((IData)(vlTOPp->epRISC_coreEmu__DOT__oBusClock) 
	    ^ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__oBusClock)))) {
	vlTOPp->_multiclk__TOP__48(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x400000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock))) 
	 | ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock) 
	    & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock))))) {
	vlTOPp->_sequent__TOP__50(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x800000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock))) 
	 | ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock) 
	    ^ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock)))) {
	vlTOPp->_multiclk__TOP__51(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x1000000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__52(vlSymsp);
    if (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock) 
	 ^ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock))) {
	vlTOPp->_multiclk__TOP__53(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x2000000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset) 
	  & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset))) 
	 | ((IData)(vlTOPp->epRISC_coreEmu__DOT__oBusClock) 
	    ^ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__oBusClock)))) {
	vlTOPp->_multiclk__TOP__54(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x4000000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__56(vlSymsp);
    if (((((((IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk) 
	     ^ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk)) 
	    | ((IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset) 
	       & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset)))) 
	   | ((IData)(vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset) 
	      & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset)))) 
	  | ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wSerialClock) 
	     & (~ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__controller__DOT__wSerialClock)))) 
	 | ((IData)(vlTOPp->epRISC_coreEmu__DOT__oBusClock) 
	    ^ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__oBusClock)))) {
	vlTOPp->_multiclk__TOP__57(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x8000000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock) 
	 ^ (IData)(vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock))) {
	vlTOPp->_multiclk__TOP__58(vlSymsp);
	vlTOPp->__Vm_traceActivity = (VL_ULL(0x10000000000) 
				      | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__60(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__iBoardClock = vlTOPp->iBoardClock;
    vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock 
	= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock;
    vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock 
	= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset 
	= vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset;
    vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__controller__DOT__wSPIClock 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wSPIClock;
    vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__controller__DOT__wSerialClock 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wSerialClock;
    vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock 
	= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock;
    vlTOPp->__Vclklast__TOP__epRISC_coreEmu__DOT__oBusClock 
	= vlTOPp->epRISC_coreEmu__DOT__oBusClock;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset 
	= vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk 
	= vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk;
    vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset;
    vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wInternalReset;
    vlTOPp->__VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk;
}

void VepRISC_coreEmu::_eval_initial(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_eval_initial\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (VL_ULL(1) | vlTOPp->__Vm_traceActivity);
    vlTOPp->_initial__TOP__4(vlSymsp);
    vlTOPp->_initial__TOP__13(vlSymsp);
    vlTOPp->_initial__TOP__30(vlSymsp);
}

void VepRISC_coreEmu::final() {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::final\n"); );
    // Variables
    VepRISC_coreEmu__Syms* __restrict vlSymsp = this->__VlSymsp;
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VepRISC_coreEmu::_eval_settle(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_eval_settle\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (VL_ULL(1) | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->_settle__TOP__31(vlSymsp);
    vlTOPp->_settle__TOP__43(vlSymsp);
    vlTOPp->_settle__TOP__49(vlSymsp);
    vlTOPp->_settle__TOP__55(vlSymsp);
    vlTOPp->_settle__TOP__59(vlSymsp);
}

VL_INLINE_OPT QData VepRISC_coreEmu::_change_request(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_change_request\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData ^ vlTOPp->__Vchglast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusData)
	 | (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset ^ vlTOPp->__Vchglast__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset)
	 | (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wInternalReset ^ vlTOPp->__Vchglast__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset)
	 | (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk ^ vlTOPp->__Vchglast__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk));
    VL_DEBUG_IF( if(__req && ((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData ^ vlTOPp->__Vchglast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusData))) VL_PRINTF("	CHANGE: ../../../firmware/core/machine_v1r0.v:100: epRISC_coreEmu.machine.wCoreBusData\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset ^ vlTOPp->__Vchglast__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset))) VL_PRINTF("	CHANGE: ../../../firmware/io/controller_v1r0.v:125: epRISC_coreEmu.controller.mBusReset\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wInternalReset ^ vlTOPp->__Vchglast__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset))) VL_PRINTF("	CHANGE: ../../../firmware/io/controller_v1r0.v:125: epRISC_coreEmu.controller.wInternalReset\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk ^ vlTOPp->__Vchglast__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk))) VL_PRINTF("	CHANGE: ../../../firmware/io/spi_v1r0.v:35: epRISC_coreEmu.controller.bspi.rTxClk\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusData 
	= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData;
    vlTOPp->__Vchglast__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset;
    vlTOPp->__Vchglast__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wInternalReset;
    vlTOPp->__Vchglast__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk 
	= vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk;
    return __req;
}

void VepRISC_coreEmu::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_ctor_var_reset\n"); );
    // Body
    iBoardClock = VL_RAND_RESET_I(1);
    iBoardReset = VL_RAND_RESET_I(1);
    iBoardSense = VL_RAND_RESET_I(1);
    iBoardReceive = VL_RAND_RESET_I(1);
    oBoardAcknowledge = VL_RAND_RESET_I(1);
    oBoardTransmit = VL_RAND_RESET_I(1);
    bBoardDebug0 = VL_RAND_RESET_I(1);
    bBoardDebug1 = VL_RAND_RESET_I(1);
    bBoardDebug2 = VL_RAND_RESET_I(1);
    bBoardDebug3 = VL_RAND_RESET_I(1);
    bBoardDebug4 = VL_RAND_RESET_I(1);
    bBoardDebug5 = VL_RAND_RESET_I(1);
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
    epRISC_coreEmu__DOT__iBusInterrupt = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__iBusMISO = VL_RAND_RESET_I(8);
    epRISC_coreEmu__DOT__oBusClock = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__oBusMOSI = VL_RAND_RESET_I(8);
    epRISC_coreEmu__DOT__oMemoryCKE = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__oMemoryWE = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__oMemoryCAS = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__oMemoryRAS = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__oMemoryCS = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__oMemoryBank = VL_RAND_RESET_I(2);
    epRISC_coreEmu__DOT__oMemoryDQM = VL_RAND_RESET_I(4);
    epRISC_coreEmu__DOT__oMemoryAddress = VL_RAND_RESET_I(12);
    epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__wCoreBusAccess = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__wSDRAMReady = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__wCoreBusData = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__wEnableRAM = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__wEnableBusControl = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__wEnableSDRAM = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__wCoreFlag = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bus____pinNumber2 = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcram____pinNumber1 = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcsdram____pinNumber1 = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__clock__DOT__rClockSplit = VL_RAND_RESET_I(2);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegGL = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegM = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegR = VL_RAND_RESET_Q(33);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__rALUOut = VL_RAND_RESET_Q(33);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipePrevState = VL_RAND_RESET_I(4);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState = VL_RAND_RESET_I(4);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeNextState = VL_RAND_RESET_I(4);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__rDataBuf = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation = VL_RAND_RESET_I(5);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptBase = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96,epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInB = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusRegA = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusRegB = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutA = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutB = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrA = VL_RAND_RESET_I(8);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrB = VL_RAND_RESET_I(8);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrA = VL_RAND_RESET_I(8);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrB = VL_RAND_RESET_I(8);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteA = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteB = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchSaveStack = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchLoadStack = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchInterrupt = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadLoad = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadStore = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__mDirectOR = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__mALURegisters = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__fCSHideRegs = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__fCSFlagSet = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT____Vcellinp__registers____pinNumber2 = VL_RAND_RESET_I(8);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT____Vcellinp__registers____pinNumber1 = VL_RAND_RESET_I(8);
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rClr = VL_RAND_RESET_I(9);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents[__Vi0] = VL_RAND_RESET_I(32);
    }}
    epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__debug = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMISO = VL_RAND_RESET_I(8);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMOSI = VL_RAND_RESET_I(8);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalCounterMISO = VL_RAND_RESET_I(8);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalCounterMOSI = VL_RAND_RESET_I(8);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rTransferCount = VL_RAND_RESET_I(8);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDirectMOSI = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDirectMISO = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataMOSI = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataMISO = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rMasterClockCount = VL_RAND_RESET_I(12);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState = VL_RAND_RESET_I(5);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipePrevState = VL_RAND_RESET_I(5);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState = VL_RAND_RESET_I(5);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockAck = VL_RAND_RESET_I(5);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockSto = VL_RAND_RESET_I(5);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalDataMISO = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wInternalDataMOSI = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDistributionMOSI = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataOutMISO = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataOutMOSI = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wTrashMISO = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT____Vcellinp__bufferMISO____pinNumber7 = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT____Vcellinp__bufferMOSI____pinNumber7 = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bData__out__en0 = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rClr = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents[__Vi0] = VL_RAND_RESET_I(32);
    }}
    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rClr = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rContents[__Vi0] = VL_RAND_RESET_I(32);
    }}
    epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rDataOut = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
	    epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rContents[__Vi0] = VL_RAND_RESET_I(32);
    }}
    epRISC_coreEmu__DOT__machine__DOT__tbram__DOT__rDataOut = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
	    epRISC_coreEmu__DOT__machine__DOT__tbram__DOT__rContents[__Vi0] = VL_RAND_RESET_I(32);
    }}
    epRISC_coreEmu__DOT__machine__DOT__tbsdram__DOT__rDataOut = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<8388608; ++__Vi0) {
	    epRISC_coreEmu__DOT__machine__DOT__tbsdram__DOT__rContents[__Vi0] = VL_RAND_RESET_I(32);
    }}
    epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__controller__DOT__rInternalMOSIBuffer = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__controller__DOT__wInternalMISO = VL_RAND_RESET_I(16);
    epRISC_coreEmu__DOT__controller__DOT__mBusWrite = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__controller__DOT__mBusReset = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__controller__DOT__wInternalReset = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__controller__DOT__mBusData = VL_RAND_RESET_I(16);
    epRISC_coreEmu__DOT__controller__DOT__wEnableUART = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__controller__DOT__wEnableSPI = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__controller__DOT__wEnableVideo = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__controller__DOT__wEnablePS2 = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__controller__DOT__wEnableRAM = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__controller__DOT__wSerialClock = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__controller__DOT__wSPIClock = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__controller__DOT__rPipeState = VL_RAND_RESET_I(5);
    epRISC_coreEmu__DOT__controller__DOT__rPipePrevState = VL_RAND_RESET_I(5);
    epRISC_coreEmu__DOT__controller__DOT__rPipeNextState = VL_RAND_RESET_I(5);
    epRISC_coreEmu__DOT__controller__DOT__oBvusInterrupt = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__controller__DOT__oBrusInterrupt = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__controller__DOT__clock__DOT__rClockSplit = VL_RAND_RESET_I(7);
    epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection = VL_RAND_RESET_I(16);
    epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rInterrupt = VL_RAND_RESET_I(16);
    epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue = VL_RAND_RESET_I(16);
    epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__oData__out__en16 = VL_RAND_RESET_I(16);
    epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState = VL_RAND_RESET_I(4);
    epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendNextState = VL_RAND_RESET_I(4);
    epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendPrevState = VL_RAND_RESET_I(4);
    epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState = VL_RAND_RESET_I(4);
    epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvNextState = VL_RAND_RESET_I(4);
    epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvPrevState = VL_RAND_RESET_I(4);
    epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountSto = VL_RAND_RESET_I(5);
    epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountAck = VL_RAND_RESET_I(5);
    epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountSto = VL_RAND_RESET_I(5);
    epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountAck = VL_RAND_RESET_I(5);
    epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataCnt = VL_RAND_RESET_I(6);
    epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataCnt = VL_RAND_RESET_I(6);
    epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataBuf = VL_RAND_RESET_I(8);
    epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataBuf = VL_RAND_RESET_I(8);
    epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl = VL_RAND_RESET_I(16);
    epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rDataIn = VL_RAND_RESET_I(16);
    epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rDataOut = VL_RAND_RESET_I(16);
    epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rClkDivide = VL_RAND_RESET_I(2);
    epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState = VL_RAND_RESET_I(4);
    epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rPrevState = VL_RAND_RESET_I(4);
    epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rNextState = VL_RAND_RESET_I(4);
    epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockSto = VL_RAND_RESET_I(5);
    epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockAck = VL_RAND_RESET_I(5);
    epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataBuf = VL_RAND_RESET_I(8);
    epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rControl = VL_RAND_RESET_I(16);
    epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataIn = VL_RAND_RESET_I(16);
    epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataOut = VL_RAND_RESET_I(16);
    epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__tmpClock = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRowSel = VL_RAND_RESET_I(4);
    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rDataOutput = VL_RAND_RESET_I(8);
    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColorOutput = VL_RAND_RESET_I(8);
    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX = VL_RAND_RESET_I(10);
    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY = VL_RAND_RESET_I(10);
    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempX = VL_RAND_RESET_I(12);
    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempY = VL_RAND_RESET_I(12);
    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rFramePtr = VL_RAND_RESET_I(12);
    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rConfig = VL_RAND_RESET_I(16);
    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRow = VL_RAND_RESET_I(16);
    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColumn = VL_RAND_RESET_I(16);
    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__wCharRAMData = VL_RAND_RESET_I(16);
    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__wCharRAMFrame = VL_RAND_RESET_I(16);
    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber7 = VL_RAND_RESET_I(1);
    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber1 = VL_RAND_RESET_I(12);
    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vrom____pinNumber1 = VL_RAND_RESET_I(12);
    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rClr = VL_RAND_RESET_I(13);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
	    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rContents[__Vi0] = VL_RAND_RESET_I(16);
    }}
    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rDataOut = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<3072; ++__Vi0) {
	    epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rContents[__Vi0] = VL_RAND_RESET_I(16);
    }}
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__rContents[__Vi0] = VL_RAND_RESET_I(32);
    }}
    epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__out0 = VL_RAND_RESET_I(32);
    epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__en0 = VL_RAND_RESET_I(32);
    __Vtableidx1 = VL_RAND_RESET_I(9);
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[0] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[1] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[2] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[3] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[4] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[5] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[6] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[7] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[8] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[9] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[10] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[11] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[12] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[13] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[14] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[15] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[16] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[17] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[18] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[19] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[20] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[21] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[22] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[23] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[24] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[25] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[26] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[27] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[28] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[29] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[30] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[31] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[32] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[33] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[34] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[35] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[36] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[37] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[38] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[39] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[40] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[41] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[42] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[43] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[44] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[45] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[46] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[47] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[48] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[49] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[50] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[51] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[52] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[53] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[54] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[55] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[56] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[57] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[58] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[59] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[60] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[61] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[62] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[63] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[64] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[65] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[66] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[67] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[68] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[69] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[70] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[71] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[72] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[73] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[74] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[75] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[76] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[77] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[78] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[79] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[80] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[81] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[82] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[83] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[84] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[85] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[86] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[87] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[88] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[89] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[90] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[91] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[92] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[93] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[94] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[95] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[96] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[97] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[98] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[99] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[100] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[101] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[102] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[103] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[104] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[105] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[106] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[107] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[108] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[109] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[110] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[111] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[112] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[113] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[114] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[115] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[116] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[117] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[118] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[119] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[120] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[121] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[122] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[123] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[124] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[125] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[126] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[127] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[128] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[129] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[130] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[131] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[132] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[133] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[134] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[135] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[136] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[137] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[138] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[139] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[140] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[141] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[142] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[143] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[144] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[145] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[146] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[147] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[148] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[149] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[150] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[151] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[152] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[153] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[154] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[155] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[156] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[157] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[158] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[159] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[160] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[161] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[162] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[163] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[164] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[165] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[166] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[167] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[168] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[169] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[170] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[171] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[172] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[173] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[174] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[175] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[176] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[177] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[178] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[179] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[180] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[181] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[182] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[183] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[184] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[185] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[186] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[187] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[188] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[189] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[190] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[191] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[192] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[193] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[194] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[195] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[196] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[197] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[198] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[199] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[200] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[201] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[202] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[203] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[204] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[205] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[206] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[207] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[208] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[209] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[210] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[211] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[212] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[213] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[214] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[215] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[216] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[217] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[218] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[219] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[220] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[221] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[222] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[223] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[224] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[225] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[226] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[227] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[228] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[229] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[230] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[231] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[232] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[233] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[234] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[235] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[236] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[237] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[238] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[239] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[240] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[241] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[242] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[243] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[244] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[245] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[246] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[247] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[248] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[249] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[250] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[251] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[252] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[253] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[254] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[255] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[256] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[257] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[258] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[259] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[260] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[261] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[262] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[263] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[264] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[265] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[266] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[267] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[268] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[269] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[270] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[271] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[272] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[273] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[274] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[275] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[276] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[277] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[278] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[279] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[280] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[281] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[282] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[283] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[284] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[285] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[286] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[287] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[288] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[289] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[290] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[291] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[292] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[293] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[294] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[295] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[296] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[297] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[298] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[299] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[300] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[301] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[302] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[303] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[304] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[305] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[306] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[307] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[308] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[309] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[310] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[311] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[312] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[313] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[314] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[315] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[316] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[317] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[318] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[319] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[320] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[321] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[322] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[323] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[324] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[325] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[326] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[327] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[328] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[329] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[330] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[331] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[332] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[333] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[334] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[335] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[336] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[337] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[338] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[339] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[340] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[341] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[342] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[343] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[344] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[345] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[346] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[347] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[348] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[349] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[350] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[351] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[352] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[353] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[354] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[355] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[356] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[357] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[358] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[359] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[360] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[361] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[362] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[363] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[364] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[365] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[366] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[367] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[368] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[369] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[370] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[371] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[372] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[373] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[374] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[375] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[376] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[377] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[378] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[379] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[380] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[381] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[382] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[383] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[384] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[385] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[386] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[387] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[388] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[389] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[390] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[391] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[392] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[393] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[394] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[395] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[396] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[397] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[398] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[399] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[400] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[401] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[402] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[403] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[404] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[405] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[406] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[407] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[408] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[409] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[410] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[411] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[412] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[413] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[414] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[415] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[416] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[417] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[418] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[419] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[420] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[421] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[422] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[423] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[424] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[425] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[426] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[427] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[428] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[429] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[430] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[431] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[432] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[433] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[434] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[435] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[436] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[437] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[438] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[439] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[440] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[441] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[442] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[443] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[444] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[445] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[446] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[447] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[448] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[449] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[450] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[451] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[452] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[453] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[454] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[455] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[456] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[457] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[458] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[459] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[460] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[461] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[462] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[463] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[464] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[465] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[466] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[467] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[468] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[469] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[470] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[471] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[472] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[473] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[474] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[475] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[476] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[477] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[478] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[479] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[480] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[481] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[482] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[483] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[484] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[485] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[486] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[487] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[488] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[489] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[490] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[491] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[492] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[493] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[494] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[495] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[496] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[497] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[498] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[499] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[500] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[501] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[502] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[503] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[504] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[505] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[506] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[507] = 0U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[508] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[509] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[510] = 1U;
    __Vtable1_epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec[511] = 0U;
    __Vtableidx2 = VL_RAND_RESET_I(6);
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[0] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[1] = 2U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[2] = 3U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[3] = 4U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[4] = 5U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[5] = 6U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[6] = 7U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[7] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[8] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[9] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[10] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[11] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[12] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[13] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[14] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[15] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[16] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[17] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[18] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[19] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[20] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[21] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[22] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[23] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[24] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[25] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[26] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[27] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[28] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[29] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[30] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[31] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[32] = 1U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[33] = 2U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[34] = 3U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[35] = 4U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[36] = 5U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[37] = 6U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[38] = 7U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[39] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[40] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[41] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[42] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[43] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[44] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[45] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[46] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[47] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[48] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[49] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[50] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[51] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[52] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[53] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[54] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[55] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[56] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[57] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[58] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[59] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[60] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[61] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[62] = 0U;
    __Vtable2_epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState[63] = 0U;
    __Vtableidx3 = VL_RAND_RESET_I(5);
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[0] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[1] = 2U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[2] = 3U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[3] = 4U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[4] = 5U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[5] = 6U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[6] = 7U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[7] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[8] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[9] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[10] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[11] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[12] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[13] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[14] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[15] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[16] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[17] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[18] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[19] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[20] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[21] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[22] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[23] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[24] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[25] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[26] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[27] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[28] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[29] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[30] = 1U;
    __Vtable3_epRISC_coreEmu__DOT__controller__DOT__rPipeNextState[31] = 1U;
    __Vdly__epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState = VL_RAND_RESET_I(4);
    __Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v0 = VL_RAND_RESET_I(8);
    __Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v0 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v1 = VL_RAND_RESET_I(8);
    __Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v1 = VL_RAND_RESET_I(32);
    __Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rContents__v1 = VL_RAND_RESET_I(1);
    __Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockSto = VL_RAND_RESET_I(5);
    __Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v0 = VL_RAND_RESET_I(8);
    __Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v0 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rContents__v0 = VL_RAND_RESET_I(8);
    __Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rContents__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMOSI__DOT__rContents__v0 = VL_RAND_RESET_I(1);
    __Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState = VL_RAND_RESET_I(5);
    __Vdly__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockAck = VL_RAND_RESET_I(5);
    __Vdlyvdim0__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v1 = VL_RAND_RESET_I(8);
    __Vdlyvval__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v1 = VL_RAND_RESET_I(32);
    __Vdlyvset__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__bufferMISO__DOT__rContents__v1 = VL_RAND_RESET_I(1);
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__rPipeState = VL_RAND_RESET_I(5);
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState = VL_RAND_RESET_I(4);
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountAck = VL_RAND_RESET_I(5);
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState = VL_RAND_RESET_I(4);
    __Vdly__epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountAck = VL_RAND_RESET_I(5);
    __VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset = VL_RAND_RESET_I(1);
    __VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset = VL_RAND_RESET_I(1);
    __VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__iBoardClock = VL_RAND_RESET_I(1);
    __Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock = VL_RAND_RESET_I(1);
    __Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset = VL_RAND_RESET_I(1);
    __Vclklast__TOP__epRISC_coreEmu__DOT__controller__DOT__wSPIClock = VL_RAND_RESET_I(1);
    __Vclklast__TOP__epRISC_coreEmu__DOT__controller__DOT__wSerialClock = VL_RAND_RESET_I(1);
    __Vclklast__TOP__epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock = VL_RAND_RESET_I(1);
    __Vclklast__TOP__epRISC_coreEmu__DOT__oBusClock = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset = VL_RAND_RESET_I(1);
    __Vclklast__TOP____VinpClk__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk = VL_RAND_RESET_I(1);
    __Vchglast__TOP__epRISC_coreEmu__DOT__machine__DOT__wCoreBusData = VL_RAND_RESET_I(32);
    __Vchglast__TOP__epRISC_coreEmu__DOT__controller__DOT__mBusReset = VL_RAND_RESET_I(1);
    __Vchglast__TOP__epRISC_coreEmu__DOT__controller__DOT__wInternalReset = VL_RAND_RESET_I(1);
    __Vchglast__TOP__epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_Q(64);
}

void VepRISC_coreEmu::_configure_coverage(VepRISC_coreEmu__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VepRISC_coreEmu::_configure_coverage\n"); );
}
