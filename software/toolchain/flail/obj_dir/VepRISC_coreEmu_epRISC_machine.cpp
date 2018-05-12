// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VepRISC_coreEmu.h for the primary calling header

#include "VepRISC_coreEmu_epRISC_machine.h" // For This
#include "VepRISC_coreEmu__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES

VL_ST_SIG8(VepRISC_coreEmu_epRISC_machine::__Vtable1___PVT__core__DOT__rExec[512],0,0);

//--------------------

VL_CTOR_IMP(VepRISC_coreEmu_epRISC_machine) {
    VL_CELL (bus, VepRISC_coreEmu_epRISC_sysXMaster);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VepRISC_coreEmu_epRISC_machine::__Vconfigure(VepRISC_coreEmu__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VepRISC_coreEmu_epRISC_machine::~VepRISC_coreEmu_epRISC_machine() {
}

//--------------------
// Internal Methods

void VepRISC_coreEmu_epRISC_machine::_settle__TOP__epRISC_coreEmu__machine__1(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_settle__TOP__epRISC_coreEmu__machine__1\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine__bus.iMasterClock 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusMemClock;
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_machine::_sequent__TOP__epRISC_coreEmu__machine__2(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_sequent__TOP__epRISC_coreEmu__machine__2\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__clock__DOT__rClockSplit 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__clock__DOT__rClockSplit;
    // ALWAYS at ../../../firmware/core/machine_v1r0.v:33
    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__clock__DOT__rClockSplit 
	= (3U & ((IData)(1U) + (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__clock__DOT__rClockSplit)));
    if ((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__clock__DOT__rClockSplit))) {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusClock = 1U;
    }
    if ((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__clock__DOT__rClockSplit))) {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusMemClock = 1U;
    }
    if ((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__clock__DOT__rClockSplit))) {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusClock = 0U;
    }
    if ((3U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__clock__DOT__rClockSplit))) {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusMemClock = 0U;
    }
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__clock__DOT__rClockSplit 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__clock__DOT__rClockSplit;
}

void VepRISC_coreEmu_epRISC_machine::_initial__TOP__epRISC_coreEmu__machine__3(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_initial__TOP__epRISC_coreEmu__machine__3\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at ../../../firmware/core/machine_v1r0.v:29
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__clock__DOT__rClockSplit = 0U;
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_machine::_sequent__TOP__epRISC_coreEmu__machine__4(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_sequent__TOP__epRISC_coreEmu__machine__4\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/rom_v1r0.v:11
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rDataOut 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents
	[(0xfffU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)];
    // ALWAYS at ../../../firmware/testbench/testmem_v1r0.v:13
    if (((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite) 
	 & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wEnableRAM))) {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbram__DOT__rContents[(0xfffU 
									    & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)] 
	    = vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusData;
    } else {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbram__DOT__rDataOut 
	    = vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbram__DOT__rContents
	    [(0xfffU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)];
    }
    // ALWAYS at ../../../firmware/testbench/testmem_v1r0.v:13
    if (((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite) 
	 & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wEnableSDRAM))) {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbsdram__DOT__rContents[(0xfffU 
									      & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)] 
	    = vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusData;
    } else {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbsdram__DOT__rDataOut 
	    = vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbsdram__DOT__rContents
	    [(0xfffU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)];
    }
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_machine::_sequent__TOP__epRISC_coreEmu__machine__5(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_sequent__TOP__epRISC_coreEmu__machine__5\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdlyvset__core__DOT__registers__DOT__rContents__v0 = 0U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdlyvset__core__DOT__registers__DOT__rContents__v1 = 0U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rPipeState 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState;
    // ALWAYS at ../../../firmware/core/core_v5r0.v:63
    if ((1U & (~ (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutWriteB)))) {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusRegB 
	    = vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__registers__DOT__rContents
	    [vlSymsp->TOP__epRISC_coreEmu__machine.core__DOT____Vcellinp__registers____pinNumber2];
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:47
    if (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutWriteA) {
	vlSymsp->TOP__epRISC_coreEmu__machine.__Vdlyvval__core__DOT__registers__DOT__rContents__v0 
	    = vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutA;
	vlSymsp->TOP__epRISC_coreEmu__machine.__Vdlyvset__core__DOT__registers__DOT__rContents__v0 = 1U;
	vlSymsp->TOP__epRISC_coreEmu__machine.__Vdlyvdim0__core__DOT__registers__DOT__rContents__v0 
	    = vlSymsp->TOP__epRISC_coreEmu__machine.core__DOT____Vcellinp__registers____pinNumber1;
    }
    if (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutWriteB) {
	vlSymsp->TOP__epRISC_coreEmu__machine.__Vdlyvval__core__DOT__registers__DOT__rContents__v1 
	    = vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutB;
	vlSymsp->TOP__epRISC_coreEmu__machine.__Vdlyvset__core__DOT__registers__DOT__rContents__v1 = 1U;
	vlSymsp->TOP__epRISC_coreEmu__machine.__Vdlyvdim0__core__DOT__registers__DOT__rContents__v1 
	    = vlSymsp->TOP__epRISC_coreEmu__machine.core__DOT____Vcellinp__registers____pinNumber2;
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:225
    if (vlTOPp->iBoardReset) {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipePrevState 
	    = vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState;
	vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rPipeState 
	    = vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeNextState;
    } else {
	vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rPipeState = 0U;
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipePrevState = 0U;
    }
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_machine::_sequent__TOP__epRISC_coreEmu__machine__6(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_sequent__TOP__epRISC_coreEmu__machine__6\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp1,95,0,3);
    //char	__VpadToAlign116[4];
    VL_SIGW(__Vtemp2,95,0,3);
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegInterruptStack[0U] 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegInterruptStack[0U];
    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegInterruptStack[1U] 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegInterruptStack[1U];
    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegInterruptStack[2U] 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegInterruptStack[2U];
    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegSP 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegSP;
    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegIP 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegIP;
    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS;
    // ALWAYS at ../../../firmware/core/core_v5r0.v:485
    if (vlTOPp->iBoardReset) {
	if ((8U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) {
	    VL_SHIFTR_WWI(96,96,32, __Vtemp1, vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegInterruptStack, 0x20U);
	    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegInterruptStack[0U] 
		= __Vtemp1[0U];
	    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegInterruptStack[1U] 
		= __Vtemp1[1U];
	    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegInterruptStack[2U] 
		= __Vtemp1[2U];
	    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegInterruptStack[2U] 
		= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegIP;
	} else {
	    if (((5U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)) 
		 & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchInterrupt))) {
		VL_SHIFTL_WWI(96,96,32, __Vtemp2, vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegInterruptStack, 0x20U);
		vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegInterruptStack[0U] 
		    = __Vtemp2[0U];
		vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegInterruptStack[1U] 
		    = __Vtemp2[1U];
		vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegInterruptStack[2U] 
		    = __Vtemp2[2U];
	    }
	}
    } else {
	vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegInterruptStack[0U] = 0U;
	vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegInterruptStack[1U] = 0U;
	vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegInterruptStack[2U] = 0U;
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:290
    if (vlTOPp->iBoardReset) {
	if ((5U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) {
	    if (((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchSaveStack) 
		 | ((~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
			>> 7U)) & ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchSaveStack) 
				   | ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadStore) 
				      & (1U == (0xfU 
						& (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						   >> 0x18U)))))))) {
		vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegSP 
		    = ((IData)(1U) + vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegSP);
	    } else {
		if (((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchLoadStack) 
		     | ((~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
			    >> 7U)) & ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchLoadStack) 
				       | ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadLoad) 
					  & (1U == 
					     (0xfU 
					      & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						 >> 0x18U)))))))) {
		    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegSP 
			= (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegSP 
			   - (IData)(1U));
		} else {
		    if ((((~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
			      >> 7U)) & (1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutAddrA))) 
			 & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutWriteA))) {
			vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegSP 
			    = vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutA;
		    } else {
			if ((((~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
				  >> 7U)) & (1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutAddrB))) 
			     & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutWriteB))) {
			    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegSP 
				= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutB;
			}
		    }
		}
	    }
	}
    } else {
	vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegSP = 0U;
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:260
    if (vlTOPp->iBoardReset) {
	if ((5U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegIP 
		= ((0x80000000U & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst)
		    ? ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchLoadStack)
		        ? ((IData)(1U) + vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegM)
		        : ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchInterrupt)
			    ? ((IData)(1U) + vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegInterruptStack[2U])
			    : (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegR)))
		    : ((((1U == (0x3fU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					  >> 0x1aU))) 
			 & (1U == (0x3fU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					    >> 0x14U)))) 
			& (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
			   >> 6U)) ? (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegInterruptBase 
				      + (0xfffffU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst))
		        : ((IData)(1U) + vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegIP)));
	} else {
	    if ((7U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) {
		vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegIP 
		    = ((((1U == (0x3fU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					  >> 0x1aU))) 
			 & (1U == (0x3fU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					    >> 0x14U)))) 
			& (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
			   >> 6U)) ? (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegInterruptBase 
				      + (0xfffffU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst))
		        : ((IData)(1U) + vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegIP));
	    } else {
		if ((8U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) {
		    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegIP 
			= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegInterruptBase;
		}
	    }
	}
    } else {
	vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegIP = 0U;
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:309
    if (vlTOPp->iBoardReset) {
	if ((5U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) {
	    if (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__fCSFlagSet) {
		vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS 
		    = ((0xfffffff7U & vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS) 
		       | (8U & (((0U == (0x1fU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						  >> 0x14U)))
				  ? (IData)((vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegR 
					     >> 0x20U))
				  : (((1U == (0x1fU 
					      & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						 >> 0x14U))) 
				      | (0xeU == (0x1fU 
						  & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						     >> 0x14U)))) 
				     & (~ (IData)((vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegR 
						   >> 0x20U))))) 
				<< 3U)));
		vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS 
		    = ((0xfffffffbU & vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS) 
		       | ((VL_ULL(0) == vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegR) 
			  << 2U));
		vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS 
		    = ((0xfffffffdU & vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS) 
		       | (2U & ((IData)((vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegR 
					 >> 0x1fU)) 
				<< 1U)));
		vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS 
		    = ((0xfffffffeU & vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS) 
		       | (((0U == (0x1fU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					    >> 0x14U))) 
			   & ((((vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA 
				 & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB) 
				>> 0x1fU) & (~ (IData)(
						       (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegR 
							>> 0x1fU)))) 
			      | (((~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA 
				      >> 0x1fU)) & 
				  (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB 
				      >> 0x1fU))) & (IData)(
							    (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegR 
							     >> 0x1fU))))) 
			  | ((1U == (0x1fU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					      >> 0x14U))) 
			     & ((((~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA 
				      >> 0x1fU)) & 
				  (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB 
				   >> 0x1fU)) & (~ (IData)(
							   (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegR 
							    >> 0x1fU)))) 
				| (((vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA 
				     >> 0x1fU) & (~ 
						  (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB 
						   >> 0x1fU))) 
				   & (IData)((vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegR 
					      >> 0x1fU)))))));
	    }
	    if (((1U == (0x3fU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
				  >> 0x1aU))) & (3U 
						 == 
						 (0x3fU 
						  & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						     >> 0x14U))))) {
		vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS 
		    = ((0xffff0fffU & vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS) 
		       | (0xf000U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
				     >> 4U)));
		vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS 
		    = ((0xffffff7fU & vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS) 
		       | (0x80U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
				   >> 8U)));
	    }
	    if (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchInterrupt) {
		vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS 
		    = (0x40U | vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS);
	    }
	    if ((((~ (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__fCSHideRegs)) 
		  & (2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutAddrA))) 
		 & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutWriteA))) {
		vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS 
		    = vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutA;
	    } else {
		if ((((~ (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__fCSHideRegs)) 
		      & (2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutAddrB))) 
		     & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutWriteB))) {
		    vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS 
			= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutB;
		}
	    }
	} else {
	    if ((8U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) {
		vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS 
		    = (0xffffffbfU & vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS);
	    }
	}
    } else {
	vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS = 0U;
    }
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegInterruptStack[0U] 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegInterruptStack[0U];
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegInterruptStack[1U] 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegInterruptStack[1U];
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegInterruptStack[2U] 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegInterruptStack[2U];
    // ALWAYS at ../../../firmware/core/core_v5r0.v:387
    if (vlTOPp->iBoardReset) {
	if ((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegM 
		= ((0x80000000U & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst)
		    ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegIP
		    : vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInB);
	} else {
	    if (((4U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)) 
		 & ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadLoad) 
		    | (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchLoadStack)))) {
		vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegM 
		    = vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusData;
	    }
	}
    } else {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegM = 0U;
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:411
    if (vlTOPp->iBoardReset) {
	if ((3U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegR 
		= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rALUOut;
	}
    } else {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegR = VL_ULL(0);
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:366
    if (vlTOPp->iBoardReset) {
	if ((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB 
		= ((0x80000000U & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst)
		    ? ((0x80000U & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst)
		        ? ((IData)(0xfff00000U) + (0xfffffU 
						   & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst))
		        : (0xfffffU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst))
		    : ((1U == (3U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
				     >> 0x1eU))) ? 
		       ((0x20U & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS)
			 ? ((IData)(0xfff00000U) + 
			    (0xfffffU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst))
			 : (0xfffffU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst))
		        : ((1U == (7U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					 >> 0x1dU)))
			    ? ((0xfffffU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst) 
			       << (0x1eU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					    >> 0x13U)))
			    : ((((1U == (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						 >> 0x1cU))) 
				 & (~ (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mALURegisters))) 
				& ((0xcU == (0x1fU 
					     & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						>> 0x14U))) 
				   | (0xdU == (0x1fU 
					       & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						  >> 0x14U)))))
			        ? (0x1eU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					    >> 7U))
			        : (((1U == (0xfU & 
					    (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					     >> 0x1cU))) 
				    & (~ (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mALURegisters)))
				    ? ((0xffU & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst) 
				       << (0x1eU & 
					   (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					    >> 7U)))
				    : vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInB)))));
	}
    } else {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB = 0U;
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:356
    if (vlTOPp->iBoardReset) {
	if ((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA 
		= (((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrA)) 
		    & (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
			  >> 7U))) ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegIP
		    : (((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrA)) 
			& (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
			      >> 7U))) ? (((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadLoad) 
					   & (2U == 
					      (0xfU 
					       & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						  >> 0x18U))))
					   ? (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegSP 
					      - (IData)(1U))
					   : vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegSP)
		        : (((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrA)) 
			    & (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
				  >> 7U))) ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS
			    : (((3U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrA)) 
				& (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
				      >> 7U))) ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegGL
			        : (((0xfU == (0xfU 
					      & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
						 >> 0xcU))) 
				    & (4U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrA)))
				    ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegInterruptBase
				    : vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusRegA)))));
	}
    } else {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA = 0U;
    }
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegSP 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegSP;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegIP 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegIP;
    // ALWAYS at ../../../firmware/core/core_v5r0.v:341
    if (vlTOPp->iBoardReset) {
	if ((5U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) {
	    if ((((~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
		      >> 7U)) & (3U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutAddrA))) 
		 & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutWriteA))) {
		vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegGL 
		    = vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutA;
	    } else {
		if ((((~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
			  >> 7U)) & (3U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutAddrB))) 
		     & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutWriteB))) {
		    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegGL 
			= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutB;
		}
	    }
	}
    } else {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegGL = 0U;
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:472
    if (vlTOPp->iBoardReset) {
	if ((5U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) {
	    if ((((0xfU == (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
				    >> 0xcU))) & (4U 
						  == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutAddrA))) 
		 & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutWriteA))) {
		vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegInterruptBase 
		    = vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutA;
	    }
	    if ((((0xfU == (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
				    >> 0xcU))) & (4U 
						  == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutAddrB))) 
		 & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutWriteB))) {
		vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegInterruptBase 
		    = vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutB;
	    }
	}
    } else {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegInterruptBase = 0U;
    }
    // ALWAYS at ../../../firmware/core/core_v5r0.v:402
    if (vlTOPp->iBoardReset) {
	if ((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) {
	    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
		= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusData;
	}
    } else {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst = 0U;
    }
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rRegCS;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__fCSHideRegs 
	= (1U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
		 >> 7U));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__fCSFlagSet 
	= (1U & (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
		    >> 4U)));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchInterrupt 
	= ((vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
	    >> 0x1fU) & (3U == (7U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
				      >> 0x1cU))));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mALURegisters 
	= ((1U == (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			   >> 0x1cU))) & (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					     >> 0x1bU)));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrA 
	= ((0x80000000U & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst)
	    ? (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
		       >> 0x14U)) : ((1U == (3U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						   >> 0x1eU)))
				      ? (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						 >> 0x18U))
				      : ((1U == (7U 
						 & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						    >> 0x1dU)))
					  ? (0xfU & 
					     (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					      >> 0x18U))
					  : ((1U == 
					      (0xfU 
					       & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						  >> 0x1cU)))
					      ? (0xfU 
						 & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						    >> 0xcU))
					      : ((1U 
						  == 
						  (0x1fU 
						   & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						      >> 0x1bU)))
						  ? 
						 (0xfU 
						  & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						     >> 0x14U))
						  : 0xffU)))));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutAddrA 
	= ((1U == (0x1fU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			    >> 0x1bU))) ? (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						   >> 0x10U))
	    : ((1U == (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			       >> 0x1cU))) ? (0xfU 
					      & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						 >> 0x10U))
	        : ((1U == (3U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
				 >> 0x1eU))) ? (0xfU 
						& (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						   >> 0x14U))
		    : 0xffU)));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutAddrB 
	= ((1U == (0x1fU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			    >> 0x1bU))) ? (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						   >> 0x14U))
	    : ((1U == (7U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			     >> 0x1dU))) ? (0xfU & 
					    (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					     >> 0x18U))
	        : 0xffU));
    // ALWAYS at ../../../firmware/core/core_v5r0.v:446
    vlSymsp->TOP__epRISC_coreEmu__machine.__Vtableidx1 
	= ((0x100U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
		      << 8U)) | ((0x80U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
					   << 6U)) 
				 | ((0x40U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
					      << 3U)) 
				    | ((0x20U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
						 << 3U)) 
				       | ((0x1eU & 
					   (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					    >> 0x17U)) 
					  | (1U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						   >> 0x1fU)))))));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rExec 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__Vtable1___PVT__core__DOT__rExec
	[vlSymsp->TOP__epRISC_coreEmu__machine.__Vtableidx1];
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrB 
	= ((1U == (3U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			 >> 0x1eU))) ? (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						>> 0x14U))
	    : ((1U == (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			       >> 0x1cU))) ? (0xfU 
					      & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						 >> 8U))
	        : ((1U == (0x1fU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
				    >> 0x1bU))) ? (0xfU 
						   & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						      >> 0x10U))
		    : 0xffU)));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mDirectOR 
	= ((1U == (7U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			 >> 0x1dU))) & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					>> 0x1cU));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchLoadStack 
	= ((vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
	    >> 0x1fU) & (7U == (7U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
				      >> 0x1cU))));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadLoad 
	= ((1U == (3U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			 >> 0x1eU))) & (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					   >> 0x1dU)));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchSaveStack 
	= ((vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
	    >> 0x1fU) & (5U == (7U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
				      >> 0x1cU))));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadStore 
	= ((1U == (3U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			 >> 0x1eU))) & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					>> 0x1dU));
}

void VepRISC_coreEmu_epRISC_machine::_initial__TOP__epRISC_coreEmu__machine__7(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_initial__TOP__epRISC_coreEmu__machine__7\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at ../../../firmware/core/rom_v1r0.v:15
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0U] = 0x8000001fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[1U] = 0x43f01ff0U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[2U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[3U] = 0xd0000296U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[4U] = 0x63f01ff1U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[5U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[6U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[7U] = 0xd00002b4U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[8U] = 0x63f01ff1U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[9U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xaU] = 0x43f01ff2U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xbU] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xcU] = 0x43f01ff3U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xdU] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xeU] = 0xd00003e1U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xfU] = 0x63f01ff4U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x10U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x11U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x12U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x13U] = 0x43f01ff2U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x14U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x15U] = 0x43f01ff3U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x16U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x17U] = 0xd000040dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x18U] = 0x63f01ff4U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x19U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1aU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1bU] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1cU] = 0xd0000338U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1dU] = 0x63f01ff5U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1eU] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1fU] = 0x21001100U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x20U] = 0x23000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x21U] = 0xd00001cdU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x22U] = 0x24007fffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x23U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x24U] = 0x24000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x25U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x26U] = 0xd00001d8U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x27U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x28U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x29U] = 0x2400012aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2aU] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2bU] = 0xd00002faU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2cU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2dU] = 0x240001b1U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2eU] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2fU] = 0xd00002f6U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x30U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x31U] = 0x240001b6U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x32U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x33U] = 0xd00002f2U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x34U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x35U] = 0x25003000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x36U] = 0x26006000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x37U] = 0x65500000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x38U] = 0x45400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x39U] = 0x10e04500U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3aU] = 0x82000007U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3bU] = 0x2f000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3cU] = 0x65f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3dU] = 0x18055001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3eU] = 0x10e05600U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3fU] = 0x81000002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x40U] = 0x800ffff7U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x41U] = 0x240001d1U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x42U] = 0x10e05600U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x43U] = 0x82000002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x44U] = 0x240001cfU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x45U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x46U] = 0xd00002dfU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x47U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x48U] = 0x240001e0U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x49U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4aU] = 0xd00002dbU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4bU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4cU] = 0x24000041U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4dU] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4eU] = 0xd000024bU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4fU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x50U] = 0x2400013bU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x51U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x52U] = 0xd00002d3U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x53U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x54U] = 0xd0000300U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x55U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x56U] = 0x2400015aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x57U] = 0x18e0f0ffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x58U] = 0x81000002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x59U] = 0x24000151U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5aU] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5bU] = 0xd00002caU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5cU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5dU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5eU] = 0x18e0f0ffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5fU] = 0x810000c6U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x60U] = 0x24000162U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x61U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x62U] = 0xd00002c3U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x63U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x64U] = 0x24003000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x65U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x66U] = 0x24000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x67U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x68U] = 0xd00003bcU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x69U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x6aU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x6bU] = 0x24003000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x6cU] = 0x44f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x6dU] = 0x18e0fceaU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x6eU] = 0x81000006U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x6fU] = 0x24000168U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x70U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x71U] = 0xd00002b4U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x72U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x73U] = 0x800000b2U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x74U] = 0x24000171U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x75U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x76U] = 0xd00002afU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x77U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x78U] = 0x24003001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x79U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x7aU] = 0x2400000cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x7bU] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x7cU] = 0xd00002beU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x7dU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x7eU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x7fU] = 0x24000175U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x80U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x81U] = 0xd00002a4U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x82U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x83U] = 0x24003000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x84U] = 0x44f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x85U] = 0x18e0f000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x86U] = 0x82000006U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x87U] = 0x24000179U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x88U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x89U] = 0xd000029cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x8aU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x8bU] = 0x8000009aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x8cU] = 0x24000181U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x8dU] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x8eU] = 0xd0000297U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x8fU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x90U] = 0x24003004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x91U] = 0x44f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x92U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x93U] = 0x24000002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x94U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x95U] = 0xd000025cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x96U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x97U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x98U] = 0x24000184U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x99U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x9aU] = 0xd000028bU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x9bU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x9cU] = 0x2400018aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x9dU] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x9eU] = 0xd0000287U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x9fU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xa0U] = 0x24003004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xa1U] = 0x44600000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xa2U] = 0x18656002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xa3U] = 0x18666001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xa4U] = 0x10066500U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xa5U] = 0x25003005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xa6U] = 0x10065600U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xa7U] = 0x27000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xa8U] = 0x240001edU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xa9U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xaaU] = 0xd000027bU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xabU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xacU] = 0x61700000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xadU] = 0x24000002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xaeU] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xafU] = 0xd0000242U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xb0U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xb1U] = 0x41700000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xb2U] = 0x24000190U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xb3U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xb4U] = 0xd0000271U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xb5U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xb6U] = 0x61500000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xb7U] = 0x2400000cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xb8U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xb9U] = 0xd0000281U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xbaU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xbbU] = 0x41500000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xbcU] = 0x18055003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xbdU] = 0x24000193U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xbeU] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xbfU] = 0xd0000266U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xc0U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xc1U] = 0x45400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xc2U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xc3U] = 0xd0000216U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xc4U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xc5U] = 0x18055001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xc6U] = 0x24000196U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xc7U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xc8U] = 0xd000025dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xc9U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xcaU] = 0x45400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xcbU] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xccU] = 0xd000020dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xcdU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xceU] = 0x18055001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xcfU] = 0x24000199U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xd0U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xd1U] = 0xd0000254U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xd2U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xd3U] = 0x45400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xd4U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xd5U] = 0xd0000204U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xd6U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xd7U] = 0x18055001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xd8U] = 0x240001ecU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xd9U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xdaU] = 0xd000024bU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xdbU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xdcU] = 0x18077001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xddU] = 0x10e05600U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xdeU] = 0x840fffcaU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xdfU] = 0x240001ecU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xe0U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xe1U] = 0xd0000244U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xe2U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xe3U] = 0x2400019bU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xe4U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xe5U] = 0xd0000240U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xe6U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xe7U] = 0xd0000172U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xe8U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xe9U] = 0xd0000151U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xeaU] = 0xd0000420U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xebU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xecU] = 0x18e0f047U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xedU] = 0x8300000eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xeeU] = 0x181ff030U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xefU] = 0x18e0f00aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xf0U] = 0x84000014U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xf1U] = 0x181ff007U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xf2U] = 0x18e0f00aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xf3U] = 0x84000003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xf4U] = 0x18e0f010U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xf5U] = 0x8400000fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xf6U] = 0x240001ecU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xf7U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xf8U] = 0xd000022dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xf9U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xfaU] = 0x800fffe9U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xfbU] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xfcU] = 0x240001ecU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xfdU] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xfeU] = 0xd0000227U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0xffU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x100U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x101U] = 0x18e0f04dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x102U] = 0x81000023U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x103U] = 0x800fffe0U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x104U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x105U] = 0x240001ecU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x106U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x107U] = 0xd000021eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x108U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x109U] = 0x240001abU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x10aU] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x10bU] = 0xd000021aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x10cU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x10dU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x10eU] = 0x1865f002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x10fU] = 0x186ff001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x110U] = 0x100ff500U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x111U] = 0x25003005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x112U] = 0x10085f00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x113U] = 0x48500003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x114U] = 0x48600004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x115U] = 0x48700005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x116U] = 0x61700000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x117U] = 0x61500000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x118U] = 0xd000030cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x119U] = 0x41500000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x11aU] = 0x41700000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x11bU] = 0x18e0f000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x11cU] = 0x82000009U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x11dU] = 0x18055001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x11eU] = 0x18077080U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x11fU] = 0x18166001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x120U] = 0x18e06000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x121U] = 0x820ffff5U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x122U] = 0xd00003a4U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x123U] = 0x48700005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x124U] = 0x80700000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x125U] = 0x240001e6U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x126U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x127U] = 0xd00001feU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x128U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x129U] = 0x80000496U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x12aU] = 0x65705249U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x12bU] = 0x53432042U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x12cU] = 0x6f6f746cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x12dU] = 0x6f616465U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x12eU] = 0x72207633U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x12fU] = 0x2e340a0dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x130U] = 0x636f7079U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x131U] = 0x72696768U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x132U] = 0x74203230U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x133U] = 0x31352d32U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x134U] = 0x30313720U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x135U] = 0x50726f70U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x136U] = 0x6f727469U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x137U] = 0x6f6e616cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x138U] = 0x204c6162U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x139U] = 0x730a0d0aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x13aU] = 0xd000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x13bU] = 0x41747465U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x13cU] = 0x6d707469U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x13dU] = 0x6e672074U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x13eU] = 0x6f206d6fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x13fU] = 0x756e7420U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x140U] = 0x53442063U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x141U] = 0x61726420U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x142U] = 0x696e2073U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x143U] = 0x6c6f7420U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x144U] = 0x412e2e2eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x145U] = 0xa0d0000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x146U] = 0x41747465U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x147U] = 0x6d707469U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x148U] = 0x6e672074U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x149U] = 0x6f206d6fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x14aU] = 0x756e7420U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x14bU] = 0x53442063U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x14cU] = 0x61726420U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x14dU] = 0x696e2073U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x14eU] = 0x6c6f7420U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x14fU] = 0x422e2e2eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x150U] = 0xa0d0000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x151U] = 0x20205344U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x152U] = 0x20636172U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x153U] = 0x64206d6fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x154U] = 0x756e7465U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x155U] = 0x64207375U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x156U] = 0x63636573U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x157U] = 0x7366756cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x158U] = 0x6c792e0aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x159U] = 0xd0a0d00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x15aU] = 0x20204572U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x15bU] = 0x726f7220U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x15cU] = 0x6d6f756eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x15dU] = 0x74696e67U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x15eU] = 0x20534420U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x15fU] = 0x63617264U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x160U] = 0x2e0a0d0aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x161U] = 0xd000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x162U] = 0x46657463U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x163U] = 0x68696e67U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x164U] = 0x20646973U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x165U] = 0x6b20696eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x166U] = 0x666f2e2eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x167U] = 0x2e0a0d00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x168U] = 0x20204469U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x169U] = 0x736b2061U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x16aU] = 0x70706561U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x16bU] = 0x72732074U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x16cU] = 0x6f206265U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x16dU] = 0x20636f72U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x16eU] = 0x72757074U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x16fU] = 0x2e0a0d0aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x170U] = 0xd000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x171U] = 0x2020466fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x172U] = 0x756e6420U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x173U] = 0x6469736bU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x174U] = 0x20270000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x175U] = 0x27206174U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x176U] = 0x20626c6fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x177U] = 0x636b2030U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x178U] = 0x2e0a0d00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x179U] = 0x20204469U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x17aU] = 0x736b2061U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x17bU] = 0x70706561U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x17cU] = 0x72732074U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x17dU] = 0x6f206265U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x17eU] = 0x20656d70U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x17fU] = 0x74792e0aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x180U] = 0xd0a0d00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x181U] = 0x2020466fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x182U] = 0x756e6420U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x183U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x184U] = 0x20656e74U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x185U] = 0x72696573U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x186U] = 0x206f6e20U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x187U] = 0x6469736bU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x188U] = 0x2e0a0d0aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x189U] = 0xd000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x18aU] = 0x41766169U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x18bU] = 0x6c61626cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x18cU] = 0x6520656eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x18dU] = 0x74726965U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x18eU] = 0x733a0a0dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x18fU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x190U] = 0x3a20456eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x191U] = 0x74727920U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x192U] = 0x27000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x193U] = 0x273a2073U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x194U] = 0x74617274U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x195U] = 0x20000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x196U] = 0x2c206c65U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x197U] = 0x6e677468U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x198U] = 0x20000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x199U] = 0x2c206c6fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x19aU] = 0x61642000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x19bU] = 0x53656c65U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x19cU] = 0x63742061U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x19dU] = 0x6e20656eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x19eU] = 0x74727920U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x19fU] = 0x746f2065U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1a0U] = 0x78656375U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1a1U] = 0x74652c20U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1a2U] = 0x6f722074U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1a3U] = 0x79706520U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1a4U] = 0x274d2720U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1a5U] = 0x746f2065U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1a6U] = 0x6e746572U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1a7U] = 0x20746865U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1a8U] = 0x206d6f6eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1a9U] = 0x69746f72U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1aaU] = 0x3a200000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1abU] = 0x20204c6fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1acU] = 0x6164696eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1adU] = 0x6720656eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1aeU] = 0x7472792eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1afU] = 0x2e2e0a0dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1b0U] = 0xa0d0000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1b1U] = 0x53746172U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1b2U] = 0x74696e67U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1b3U] = 0x20504f53U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1b4U] = 0x54732e2eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1b5U] = 0x2e0a0d00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1b6U] = 0x20204d65U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1b7U] = 0x6d6f7279U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1b8U] = 0x20202020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1b9U] = 0x20202020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1baU] = 0x20200000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1bbU] = 0x20205541U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1bcU] = 0x52542020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1bdU] = 0x20202020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1beU] = 0x20202020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1bfU] = 0x20200000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1c0U] = 0x20205350U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1c1U] = 0x49202020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1c2U] = 0x20202020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1c3U] = 0x20202020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1c4U] = 0x20200000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1c5U] = 0x20207379U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1c6U] = 0x73582042U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1c7U] = 0x75732020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1c8U] = 0x20202020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1c9U] = 0x20200000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1caU] = 0x2020492fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1cbU] = 0x4f20436fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1ccU] = 0x6e74726fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1cdU] = 0x6c6c6572U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1ceU] = 0x20200000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1cfU] = 0x4f4b0a0dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1d0U] = 0U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1d1U] = 0x4641494cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1d2U] = 0xa0d0000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1d3U] = 0x2020504fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1d4U] = 0x53542073U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1d5U] = 0x75636365U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1d6U] = 0x73736675U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1d7U] = 0x6c2e0a0dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1d8U] = 0xa0d0000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1d9U] = 0x2020504fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1daU] = 0x53542075U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1dbU] = 0x6e737563U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1dcU] = 0x63657373U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1ddU] = 0x66756c2eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1deU] = 0xa0d0a0dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1dfU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1e0U] = 0x2020504fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1e1U] = 0x53547320U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1e2U] = 0x636f6d70U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1e3U] = 0x6c657465U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1e4U] = 0x2e0a0d0aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1e5U] = 0xd000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1e6U] = 0x456e7465U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1e7U] = 0x72696e67U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1e8U] = 0x206d6f6eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1e9U] = 0x69746f72U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1eaU] = 0x2e2e2e0aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1ebU] = 0xd0a0d00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1ecU] = 0xa0d0000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1edU] = 0x20200000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1eeU] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1efU] = 0x2c002000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1f0U] = 0x2f010001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1f1U] = 0x6cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1f2U] = 0x4000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1f3U] = 0x4000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1f4U] = 0x4000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1f5U] = 0x4000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1f6U] = 0x4cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1f7U] = 0x18f0f001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1f8U] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1f9U] = 0x4cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1faU] = 0x18f0f002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1fbU] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1fcU] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1fdU] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1feU] = 0x61e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x1ffU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x200U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x201U] = 0x18111004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x202U] = 0x2c002000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x203U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x204U] = 0x41e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x205U] = 0x18011006U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x206U] = 0x2f600008U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x207U] = 0x103ffe00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x208U] = 0x186ff010U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x209U] = 0x103ffd00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x20aU] = 0x6cf00001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x20bU] = 0x2f010005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x20cU] = 0x6cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x20dU] = 0x4cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x20eU] = 0x18f0f001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x20fU] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x210U] = 0x4cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x211U] = 0x18f0f002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x212U] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x213U] = 0x4cf00002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x214U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x215U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x216U] = 0x41e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x217U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x218U] = 0x61e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x219U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x21aU] = 0x18111003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x21bU] = 0x2c002000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x21cU] = 0x41e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x21dU] = 0x18011004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x21eU] = 0x2f600000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x21fU] = 0x103ffe00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x220U] = 0x186ff010U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x221U] = 0x6cf00001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x222U] = 0x2f010005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x223U] = 0x6cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x224U] = 0x4cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x225U] = 0x18f0f001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x226U] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x227U] = 0x4cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x228U] = 0x18f0f002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x229U] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x22aU] = 0x2f600000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x22bU] = 0x103ffe00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x22cU] = 0x186ff010U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x22dU] = 0x6cf00001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x22eU] = 0x2f010005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x22fU] = 0x6cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x230U] = 0x4cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x231U] = 0x18f0f001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x232U] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x233U] = 0x4cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x234U] = 0x18f0f002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x235U] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x236U] = 0x4cf00002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x237U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x238U] = 0x41e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x239U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x23aU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x23bU] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x23cU] = 0x18111003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x23dU] = 0x2c002000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x23eU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x23fU] = 0x18011004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x240U] = 0x2f000011U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x241U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x242U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x243U] = 0xd00fffbbU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x244U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x245U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x246U] = 0x2f000010U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x247U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x248U] = 0x2f000080U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x249U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x24aU] = 0xd00fffb4U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x24bU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x24cU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x24dU] = 0x2f000010U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x24eU] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x24fU] = 0xd00fffc9U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x250U] = 0x18f0f080U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x251U] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x252U] = 0xd00fffc6U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x253U] = 0x18f0f040U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x254U] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x255U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x256U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x257U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x258U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x259U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x25aU] = 0x2c002000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x25bU] = 0x2f808010U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x25cU] = 0x3f000020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x25dU] = 0x6cf00001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x25eU] = 0x2f010005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x25fU] = 0x6cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x260U] = 0x4cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x261U] = 0x18f0f001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x262U] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x263U] = 0x2f800010U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x264U] = 0x6cf00001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x265U] = 0x2f010005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x266U] = 0x6cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x267U] = 0x4cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x268U] = 0x18f0f001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x269U] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x26aU] = 0x2f800010U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x26bU] = 0x6cf00001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x26cU] = 0x2f010005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x26dU] = 0x6cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x26eU] = 0x4cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x26fU] = 0x18f0f001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x270U] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x271U] = 0x4cf00002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x272U] = 0x18f0f020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x273U] = 0x820ffff7U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x274U] = 0x2f800012U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x275U] = 0x6cf00001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x276U] = 0x2f010005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x277U] = 0x6cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x278U] = 0x4cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x279U] = 0x18f0f001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x27aU] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x27bU] = 0x2f800012U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x27cU] = 0x6cf00001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x27dU] = 0x2f010005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x27eU] = 0x6cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x27fU] = 0x4cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x280U] = 0x18f0f001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x281U] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x282U] = 0x4cf00002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x283U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x284U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x285U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x286U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x287U] = 0x18111003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x288U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x289U] = 0x18011004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x28aU] = 0x2d000020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x28bU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x28cU] = 0xd00fff8cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x28dU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x28eU] = 0x18bff078U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x28fU] = 0x186cc003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x290U] = 0x103ccf00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x291U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x292U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x293U] = 0xd00fff6bU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x294U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x295U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x296U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x297U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x298U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x299U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x29aU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x29bU] = 0x18111003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x29cU] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x29dU] = 0x18011004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x29eU] = 0x2d000021U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x29fU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2a0U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2a1U] = 0xd00fff5dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2a2U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2a3U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2a4U] = 0x2d000020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2a5U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2a6U] = 0xd00fff72U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2a7U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2a8U] = 0x183ff080U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2a9U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2aaU] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2abU] = 0xd00fff53U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2acU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2adU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2aeU] = 0x2d000020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2afU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2b0U] = 0xd00fff68U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2b1U] = 0x18f0f080U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2b2U] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2b3U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2b4U] = 0x2d000022U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2b5U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2b6U] = 0xd00fff62U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2b7U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2b8U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2b9U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2baU] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2bbU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2bcU] = 0x2d000021U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2bdU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2beU] = 0x2d0000ffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2bfU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2c0U] = 0xd00fff3eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2c1U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2c2U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2c3U] = 0x2d000020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2c4U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2c5U] = 0xd00fff53U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2c6U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2c7U] = 0x183ff080U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2c8U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2c9U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2caU] = 0xd00fff34U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2cbU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2ccU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2cdU] = 0x2d000020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2ceU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2cfU] = 0xd00fff49U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2d0U] = 0x18f0f080U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2d1U] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2d2U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2d3U] = 0x2d000022U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2d4U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2d5U] = 0xd00fff43U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2d6U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2d7U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2d8U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2d9U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2daU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2dbU] = 0x61e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2dcU] = 0x18111004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2ddU] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2deU] = 0x2e000008U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2dfU] = 0x18011005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2e0U] = 0x182dccf0U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2e1U] = 0x186cc004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2e2U] = 0x188dd01cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2e3U] = 0x180dd030U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2e4U] = 0x18e0d03aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2e5U] = 0x84000002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2e6U] = 0x180dd007U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2e7U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2e8U] = 0xd00fff52U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2e9U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2eaU] = 0x181ee001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2ebU] = 0x18e0e000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2ecU] = 0x820ffff4U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2edU] = 0x41e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2eeU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2efU] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2f0U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2f1U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2f2U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2f3U] = 0x61e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2f4U] = 0x18111004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2f5U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2f6U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2f7U] = 0x18011006U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2f8U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2f9U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2faU] = 0x2c000008U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2fbU] = 0x101dcd00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2fcU] = 0x186dd002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2fdU] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2feU] = 0x106ccd00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x2ffU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x300U] = 0x182eccf0U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x301U] = 0x186cc004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x302U] = 0x188ee01cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x303U] = 0x180ee030U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x304U] = 0x18e0e03aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x305U] = 0x84000002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x306U] = 0x180ee007U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x307U] = 0x61e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x308U] = 0xd00fff32U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x309U] = 0x41e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x30aU] = 0x181dd001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x30bU] = 0x18e0d000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x30cU] = 0x820ffff4U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x30dU] = 0x41e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x30eU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x30fU] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x310U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x311U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x312U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x313U] = 0x61e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x314U] = 0x18111004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x315U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x316U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x317U] = 0x18011006U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x318U] = 0x8ed0000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x319U] = 0x187dd002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x31aU] = 0x100ccd00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x31bU] = 0x4cf00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x31cU] = 0x2d000003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x31dU] = 0x182ee003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x31eU] = 0x101ede00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x31fU] = 0x186ee003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x320U] = 0x10dffeffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x321U] = 0x41e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x322U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x323U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x324U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x325U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x326U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x327U] = 0x18111003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x328U] = 0x2d000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x329U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x32aU] = 0x18011004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x32bU] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x32cU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x32dU] = 0xd00fffe4U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x32eU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x32fU] = 0x18e0f000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x330U] = 0x81000006U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x331U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x332U] = 0xd00fff08U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x333U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x334U] = 0x180dd001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x335U] = 0x800ffff7U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x336U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x337U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x338U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x339U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x33aU] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x33bU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x33cU] = 0x61e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x33dU] = 0x18111004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x33eU] = 0x2e000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x33fU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x340U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x341U] = 0x18011006U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x342U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x343U] = 0x61e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x344U] = 0xd00fffcdU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x345U] = 0x41e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x346U] = 0x18e0f000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x347U] = 0x81000008U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x348U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x349U] = 0xd00ffef1U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x34aU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x34bU] = 0x180ee001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x34cU] = 0x181dd001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x34dU] = 0x18e0d000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x34eU] = 0x820ffff5U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x34fU] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x350U] = 0x41e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x351U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x352U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x353U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x354U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x355U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x356U] = 0x61e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x357U] = 0x2c000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x358U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x359U] = 0xd00fff2cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x35aU] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x35bU] = 0x2c00000bU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x35cU] = 0xd00fff5fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x35dU] = 0x181cc001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x35eU] = 0x18e0c000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x35fU] = 0x820ffffdU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x360U] = 0x2c000001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x361U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x362U] = 0xd00fff23U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x363U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x364U] = 0x2c000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x365U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x366U] = 0x2c000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x367U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x368U] = 0x2d000001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x369U] = 0x186dd000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x36aU] = 0x2e000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x36bU] = 0xd0000084U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x36cU] = 0x10e0fd00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x36dU] = 0x81000005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x36eU] = 0x180ee001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x36fU] = 0x18e0e402U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x370U] = 0x8100006eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x371U] = 0x800ffffaU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x372U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x373U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x374U] = 0x2c000008U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x375U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x376U] = 0x2c0001aaU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x377U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x378U] = 0xd0000077U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x379U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x37aU] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x37bU] = 0x2d000001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x37cU] = 0x186dd002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x37dU] = 0x10f0fd00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x37eU] = 0x8200000cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x37fU] = 0xd00fff3cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x380U] = 0xd00fff3bU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x381U] = 0xd00fff3aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x382U] = 0x18f0f001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x383U] = 0x8100005dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x384U] = 0xd00fff37U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x385U] = 0x18e0f0aaU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x386U] = 0x8200005aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x387U] = 0x2e000001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x388U] = 0x186ee001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x389U] = 0x80000014U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x38aU] = 0x2c000037U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x38bU] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x38cU] = 0x2c000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x38dU] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x38eU] = 0xd0000061U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x38fU] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x390U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x391U] = 0x2c000029U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x392U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x393U] = 0x2c000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x394U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x395U] = 0xd000005aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x396U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x397U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x398U] = 0x2e000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x399U] = 0x10e0fd00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x39aU] = 0x82000003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x39bU] = 0x2e000001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x39cU] = 0x186ee000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x39dU] = 0x2d000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x39eU] = 0x18f0e003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x39fU] = 0x81000013U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3a0U] = 0x2c000037U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3a1U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3a2U] = 0x2c000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3a3U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3a4U] = 0xd000004bU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3a5U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3a6U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3a7U] = 0x2c000029U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3a8U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3a9U] = 0x2c000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3aaU] = 0x18f0e002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3abU] = 0x81000002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3acU] = 0x2c804000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3adU] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3aeU] = 0xd0000041U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3afU] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3b0U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3b1U] = 0x80000008U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3b2U] = 0x2c000029U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3b3U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3b4U] = 0x2c000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3b5U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3b6U] = 0xd0000039U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3b7U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3b8U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3b9U] = 0x18f0f001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3baU] = 0x81000005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3bbU] = 0x180dd001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3bcU] = 0x18e0d480U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3bdU] = 0x81000023U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3beU] = 0x800fffe0U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3bfU] = 0x18f0e002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3c0U] = 0x81000013U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3c1U] = 0x2c00003aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3c2U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3c3U] = 0x2c000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3c4U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3c5U] = 0xd000002aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3c6U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3c7U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3c8U] = 0x18e0f000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3c9U] = 0x82000017U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3caU] = 0xd00ffef1U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3cbU] = 0x18f0f040U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3ccU] = 0x81000004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3cdU] = 0x2c000001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3ceU] = 0x186cc002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3cfU] = 0x103eec00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3d0U] = 0xd00ffeebU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3d1U] = 0xd00ffeeaU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3d2U] = 0xd00ffee9U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3d3U] = 0x2c000010U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3d4U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3d5U] = 0x2c000200U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3d6U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3d7U] = 0xd0000018U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3d8U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3d9U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3daU] = 0x18e0f000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3dbU] = 0x82000005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3dcU] = 0x8000000aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3ddU] = 0xd00001b4U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3deU] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3dfU] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3e0U] = 0x2c000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3e1U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3e2U] = 0xd00ffea3U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3e3U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3e4U] = 0x2f0000ffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3e5U] = 0x80000006U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3e6U] = 0x2c000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3e7U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3e8U] = 0xd00ffe9dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3e9U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3eaU] = 0x8fe0000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3ebU] = 0x41e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3ecU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3edU] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3eeU] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3efU] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3f0U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3f1U] = 0x18111003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3f2U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3f3U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3f4U] = 0x18011005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3f5U] = 0xd00ffec6U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3f6U] = 0x183cc040U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3f7U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3f8U] = 0xd00ffea1U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3f9U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3faU] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3fbU] = 0x8cd0000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3fcU] = 0x18ddccffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3fdU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3feU] = 0xd00ffe9bU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x3ffU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x400U] = 0x18ddc8ffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x401U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x402U] = 0xd00ffe97U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x403U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x404U] = 0x18ddc4ffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x405U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x406U] = 0xd00ffe93U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x407U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x408U] = 0x18ddc0ffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x409U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x40aU] = 0xd00ffe8fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x40bU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x40cU] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x40dU] = 0x18e0c040U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x40eU] = 0x82000003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x40fU] = 0x2d000095U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x410U] = 0x80000006U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x411U] = 0x18e0c048U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x412U] = 0x82000003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x413U] = 0x2d000087U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x414U] = 0x80000002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x415U] = 0x2d0000ffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x416U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x417U] = 0xd00ffe82U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x418U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x419U] = 0x2d00000aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x41aU] = 0xd00ffea1U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x41bU] = 0x18e0f0ffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x41cU] = 0x82000005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x41dU] = 0x181dd001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x41eU] = 0x18e0d000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x41fU] = 0x81000002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x420U] = 0x800ffffaU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x421U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x422U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x423U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x424U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x425U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x426U] = 0x61e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x427U] = 0x18111004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x428U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x429U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x42aU] = 0x18011006U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x42bU] = 0x2f000001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x42cU] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x42dU] = 0xd00ffe58U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x42eU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x42fU] = 0x186dd009U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x430U] = 0x2f000011U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x431U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x432U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x433U] = 0xd00fffbcU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x434U] = 0x18111002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x435U] = 0x18e0f000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x436U] = 0x82000023U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x437U] = 0xd00ffe84U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x438U] = 0x18e0f0feU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x439U] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x43aU] = 0x2e000080U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x43bU] = 0x2d000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x43cU] = 0xd00ffe7fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x43dU] = 0x186df018U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x43eU] = 0xd00ffe7dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x43fU] = 0x186ff010U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x440U] = 0x103ddf00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x441U] = 0xd00ffe7aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x442U] = 0x186ff008U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x443U] = 0x103ddf00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x444U] = 0xd00ffe77U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x445U] = 0x103ddf00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x446U] = 0x6cd00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x447U] = 0x180cc001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x448U] = 0x181ee001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x449U] = 0x18e0e000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x44aU] = 0x820ffff2U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x44bU] = 0xd00ffe70U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x44cU] = 0xd00ffe6fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x44dU] = 0x2f000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x44eU] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x44fU] = 0xd00ffe36U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x450U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x451U] = 0xd00ffe6aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x452U] = 0xd00ffe69U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x453U] = 0xd00ffe68U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x454U] = 0xd00ffe67U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x455U] = 0xd00ffe66U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x456U] = 0xd00ffe65U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x457U] = 0x2f000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x458U] = 0x80000009U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x459U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x45aU] = 0xd00ffe7fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x45bU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x45cU] = 0x2f000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x45dU] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x45eU] = 0xd00ffe27U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x45fU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x460U] = 0x2f0000ffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x461U] = 0x41e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x462U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x463U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x464U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x465U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x466U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x467U] = 0x61e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x468U] = 0x18111004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x469U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x46aU] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x46bU] = 0x18011006U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x46cU] = 0x2f000001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x46dU] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x46eU] = 0xd00ffe17U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x46fU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x470U] = 0x2f000018U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x471U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x472U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x473U] = 0xd00fff7cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x474U] = 0x18111002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x475U] = 0x18e0f000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x476U] = 0x8200002eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x477U] = 0x2f0000feU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x478U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x479U] = 0xd00ffe20U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x47aU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x47bU] = 0x2e000080U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x47cU] = 0x4cd00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x47dU] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x47eU] = 0x182cdcffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x47fU] = 0x188dd018U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x480U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x481U] = 0xd00ffe18U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x482U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x483U] = 0x182cd8ffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x484U] = 0x188dd010U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x485U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x486U] = 0xd00ffe13U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x487U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x488U] = 0x182cd4ffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x489U] = 0x188dd008U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x48aU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x48bU] = 0xd00ffe0eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x48cU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x48dU] = 0x182cd0ffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x48eU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x48fU] = 0xd00ffe0aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x490U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x491U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x492U] = 0x180cc001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x493U] = 0x181ee001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x494U] = 0x18e0e000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x495U] = 0x820fffe7U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x496U] = 0x2f0000ffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x497U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x498U] = 0xd00ffe01U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x499U] = 0xd00ffe00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x49aU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x49bU] = 0xd00ffe20U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x49cU] = 0x18e0f0ffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x49dU] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x49eU] = 0x2f000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x49fU] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4a0U] = 0xd00ffde5U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4a1U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4a2U] = 0x2f000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4a3U] = 0x80000006U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4a4U] = 0x2f000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4a5U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4a6U] = 0xd00ffddfU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4a7U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4a8U] = 0x2f0000ffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4a9U] = 0x41e00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4aaU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4abU] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4acU] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4adU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4aeU] = 0x2d000030U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4afU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4b0U] = 0x2d000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4b1U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4b2U] = 0xd00ffd4cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4b3U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4b4U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4b5U] = 0x2d000031U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4b6U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4b7U] = 0x2d000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4b8U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4b9U] = 0xd00ffd45U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4baU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4bbU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4bcU] = 0x2d000032U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4bdU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4beU] = 0x2d000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4bfU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4c0U] = 0xd00ffd3eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4c1U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4c2U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4c3U] = 0xd0000003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4c4U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4c5U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4c6U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4c7U] = 0x2d000031U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4c8U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4c9U] = 0x2d000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4caU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4cbU] = 0xd00ffd33U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4ccU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4cdU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4ceU] = 0x2d000032U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4cfU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4d0U] = 0x2d000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4d1U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4d2U] = 0xd00ffd2cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4d3U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4d4U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4d5U] = 0x2d000033U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4d6U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4d7U] = 0x2d000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4d8U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4d9U] = 0xd00ffd25U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4daU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4dbU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4dcU] = 0x2d000031U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4ddU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4deU] = 0xd00ffd3aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4dfU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4e0U] = 0x180ff001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4e1U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4e2U] = 0x2d000031U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4e3U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4e4U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4e5U] = 0xd00ffd19U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4e6U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4e7U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4e8U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4e9U] = 0x18e0f050U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4eaU] = 0x820fffebU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4ebU] = 0x2d000031U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4ecU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4edU] = 0x2d000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4eeU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4efU] = 0xd00ffd0fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4f0U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4f1U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4f2U] = 0x2d000032U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4f3U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4f4U] = 0xd00ffd24U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4f5U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4f6U] = 0x180ff001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4f7U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4f8U] = 0x2d000032U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4f9U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4faU] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4fbU] = 0xd00ffd03U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4fcU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4fdU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4feU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x4ffU] = 0x18e0f028U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x500U] = 0x820fffd5U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x501U] = 0x2d000032U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x502U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x503U] = 0x2d000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x504U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x505U] = 0xd00ffcf9U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x506U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x507U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x508U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x509U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x50aU] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x50bU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x50cU] = 0x18111003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x50dU] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x50eU] = 0x18011004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x50fU] = 0x18e0c020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x510U] = 0x8300001eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x511U] = 0x18e0c00dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x512U] = 0x82000009U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x513U] = 0x2d000031U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x514U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x515U] = 0x2d000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x516U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x517U] = 0xd00ffce7U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x518U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x519U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x51aU] = 0x80000048U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x51bU] = 0x18e0c00aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x51cU] = 0x82000011U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x51dU] = 0x2d000032U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x51eU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x51fU] = 0xd00ffcf9U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x520U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x521U] = 0x180ff001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x522U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x523U] = 0x2d000032U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x524U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x525U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x526U] = 0xd00ffcd8U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x527U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x528U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x529U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x52aU] = 0x18e0f028U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x52bU] = 0x81000036U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x52cU] = 0x80000036U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x52dU] = 0x80000035U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x52eU] = 0x183cc4ffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x52fU] = 0x2d000033U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x530U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x531U] = 0x61c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x532U] = 0xd00ffcccU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x533U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x534U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x535U] = 0x2d000031U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x536U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x537U] = 0xd00ffce1U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x538U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x539U] = 0x180ff001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x53aU] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x53bU] = 0x2d000031U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x53cU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x53dU] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x53eU] = 0xd00ffcc0U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x53fU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x540U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x541U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x542U] = 0x18e0f050U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x543U] = 0x8200001fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x544U] = 0x2d000031U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x545U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x546U] = 0x2d000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x547U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x548U] = 0xd00ffcb6U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x549U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x54aU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x54bU] = 0x2d000032U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x54cU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x54dU] = 0xd00ffccbU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x54eU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x54fU] = 0x180ff001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x550U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x551U] = 0x2d000032U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x552U] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x553U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x554U] = 0xd00ffcaaU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x555U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x556U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x557U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x558U] = 0x18e0f028U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x559U] = 0x82000009U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x55aU] = 0x2d000032U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x55bU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x55cU] = 0x2d000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x55dU] = 0x61d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x55eU] = 0xd00ffca0U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x55fU] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x560U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x561U] = 0xd00fff65U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x562U] = 0x41d00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x563U] = 0x41c00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x564U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x565U] = 0xa0a416eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x566U] = 0x20657272U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x567U] = 0x6f722068U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x568U] = 0x6173206fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x569U] = 0x63637572U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x56aU] = 0x65642e0aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x56bU] = 0U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x56cU] = 0xa0a4120U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x56dU] = 0x66617461U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x56eU] = 0x6c206572U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x56fU] = 0x726f7220U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x570U] = 0x68617320U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x571U] = 0x6f636375U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x572U] = 0x7265642eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x573U] = 0xa000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x574U] = 0x43616c6cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x575U] = 0x65642061U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x576U] = 0x74200000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x577U] = 0x53746163U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x578U] = 0x6b747261U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x579U] = 0x63652028U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x57aU] = 0x746f7020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x57bU] = 0x3136293aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x57cU] = 0xa000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x57dU] = 0x52656769U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x57eU] = 0x73746572U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x57fU] = 0x733a0a00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x580U] = 0x52657375U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x581U] = 0x6d696e67U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x582U] = 0x2e0a0a00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x583U] = 0x48616c74U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x584U] = 0x696e672eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x585U] = 0xa0a0000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x586U] = 0x80000001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x587U] = 0x2f00056cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x588U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x589U] = 0xd00ffd9cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x58aU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x58bU] = 0x2f000574U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x58cU] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x58dU] = 0xd00ffd98U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x58eU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x58fU] = 0xd00ffd4aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x590U] = 0x4200000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x591U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x592U] = 0x2f000574U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x593U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x594U] = 0xd00ffd91U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x595U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x596U] = 0x2f0000f0U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x597U] = 0x181ff001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x598U] = 0x18e0f000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x599U] = 0x820ffffeU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x59aU] = 0x18111001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x59bU] = 0xd00ffd3eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x59cU] = 0x18011001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x59dU] = 0x2f00000aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x59eU] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x59fU] = 0xd0000013U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5a0U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5a1U] = 0x2f00000dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5a2U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5a3U] = 0xd000000fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5a4U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5a5U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5a6U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5a7U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5a8U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5a9U] = 0x4c656d6fU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5aaU] = 0x6e207630U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5abU] = 0x2e32202dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5acU] = 0x20666f72U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5adU] = 0x20657052U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5aeU] = 0x49534320U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5afU] = 0x76352073U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5b0U] = 0x79737465U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5b1U] = 0x6d730000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5b2U] = 0x18111001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5b3U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5b4U] = 0x18011002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5b5U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5b6U] = 0xd00ffc84U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5b7U] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5b8U] = 0xf0000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5b9U] = 0x800ffc81U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5baU] = 0x800fff50U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5bbU] = 0x800ffc9eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5bcU] = 0x800ffd1dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5bdU] = 0x800ffd68U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5beU] = 0x800fffc9U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5bfU] = 0x210017ffU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5c0U] = 0x280005a9U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5c1U] = 0x61800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5c2U] = 0xd00ffffbU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5c3U] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5c4U] = 0x26001000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5c5U] = 0x29000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5c6U] = 0x2800000aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5c7U] = 0x61800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5c8U] = 0xd00fffeaU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5c9U] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5caU] = 0x2800000dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5cbU] = 0x61800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5ccU] = 0xd00fffe6U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5cdU] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5ceU] = 0x2800003eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5cfU] = 0x61800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5d0U] = 0xd00fffe2U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5d1U] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5d2U] = 0xd00fffe9U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5d3U] = 0x18e0f008U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5d4U] = 0x8200000eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5d5U] = 0x18e06000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5d6U] = 0x82000002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5d7U] = 0x800ffffbU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5d8U] = 0x18166002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5d9U] = 0x18199001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5daU] = 0x46f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5dbU] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5dcU] = 0xd00fffd6U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5ddU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5deU] = 0x18066001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5dfU] = 0x2f000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5e0U] = 0x66f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5e1U] = 0x800ffff1U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5e2U] = 0x18e0f00dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5e3U] = 0x82000003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5e4U] = 0x66f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5e5U] = 0x8000000aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5e6U] = 0x18f09180U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5e7U] = 0x820fffebU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5e8U] = 0x61f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5e9U] = 0xd00fffc9U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5eaU] = 0x41f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5ebU] = 0x66f00000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5ecU] = 0x18066001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5edU] = 0x18099001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5eeU] = 0x800fffe4U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5efU] = 0x26001000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5f0U] = 0x27000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5f1U] = 0x46900000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5f2U] = 0x18e0900dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5f3U] = 0x82000005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5f4U] = 0x18e0703aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5f5U] = 0x82000002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5f6U] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5f7U] = 0x800fffcdU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5f8U] = 0x18e09052U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5f9U] = 0x8200000cU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5faU] = 0x2800000aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5fbU] = 0x61800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5fcU] = 0xd00fffb6U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5fdU] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5feU] = 0x2800000dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x5ffU] = 0x61800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x600U] = 0xd00fffb2U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x601U] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x602U] = 0xd0400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x603U] = 0x18066001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x604U] = 0x800fffedU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x605U] = 0x18e0903aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x606U] = 0x82000005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x607U] = 0x2700003aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x608U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x609U] = 0x18066001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x60aU] = 0x800fffe7U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x60bU] = 0x18e0902eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x60cU] = 0x82000007U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x60dU] = 0x18e0703aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x60eU] = 0x82000002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x60fU] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x610U] = 0x2700002eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x611U] = 0x18066001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x612U] = 0x800fffdfU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x613U] = 0x18e09020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x614U] = 0x82000003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x615U] = 0x18066001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x616U] = 0x800fffdbU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x617U] = 0x25000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x618U] = 0x46900000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x619U] = 0x18199030U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x61aU] = 0x18e0900aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x61bU] = 0x84000007U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x61cU] = 0x18199007U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x61dU] = 0x18e0900aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x61eU] = 0x84000008U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x61fU] = 0x18e09010U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x620U] = 0x84000002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x621U] = 0x80000005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x622U] = 0x18655004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x623U] = 0x10355900U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x624U] = 0x18066001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x625U] = 0x800ffff3U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x626U] = 0x46900000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x627U] = 0x18e0703aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x628U] = 0x82000004U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x629U] = 0x64500000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x62aU] = 0x18044001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x62bU] = 0x800fffc6U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x62cU] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x62dU] = 0x8450000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x62eU] = 0x18e0902eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x62fU] = 0x82000003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x630U] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x631U] = 0x800fffc0U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x632U] = 0x18e07000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x633U] = 0x82000016U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x634U] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x635U] = 0x2800000aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x636U] = 0x61800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x637U] = 0xd00fff7bU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x638U] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x639U] = 0x2800000dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x63aU] = 0x61800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x63bU] = 0xd00fff77U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x63cU] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x63dU] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x63eU] = 0xd00ffc9bU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x63fU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x640U] = 0x2800003aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x641U] = 0x61800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x642U] = 0xd00fff70U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x643U] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x644U] = 0x44800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x645U] = 0x61800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x646U] = 0xd00fff76U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x647U] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x648U] = 0x800fffa9U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x649U] = 0x18e0702eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x64aU] = 0xd20fff74U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x64bU] = 0x8840000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x64cU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x64dU] = 0x10e08400U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x64eU] = 0x8b000002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x64fU] = 0x8840000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x650U] = 0x101a8400U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x651U] = 0x180aa001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x652U] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x653U] = 0x2800000aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x654U] = 0x61800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x655U] = 0xd00fff65U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x656U] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x657U] = 0x2800000aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x658U] = 0x61800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x659U] = 0xd00fff60U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x65aU] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x65bU] = 0x2800000dU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x65cU] = 0x61800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x65dU] = 0xd00fff55U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x65eU] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x65fU] = 0x61400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x660U] = 0xd00ffc79U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x661U] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x662U] = 0x2800003aU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x663U] = 0x61800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x664U] = 0xd00fff4eU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x665U] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x666U] = 0x18e0a008U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x667U] = 0x83000003U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x668U] = 0x8ba0000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x669U] = 0x80000002U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x66aU] = 0x2b000008U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x66bU] = 0x101aab00U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x66cU] = 0x80000005U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x66dU] = 0x28000020U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x66eU] = 0x61800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x66fU] = 0xd00fff43U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x670U] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x671U] = 0x44800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x672U] = 0x61800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x673U] = 0xd00fff49U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x674U] = 0x41800000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x675U] = 0x18044001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x676U] = 0x181bb001U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x677U] = 0x18e0b000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x678U] = 0x820ffff5U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x679U] = 0x18e0a000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x67aU] = 0x820fffddU;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x67bU] = 0x41400000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x67cU] = 0x27000000U;
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rContents[0x67dU] = 0x800fff74U;
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_machine::_sequent__TOP__epRISC_coreEmu__machine__8(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_sequent__TOP__epRISC_coreEmu__machine__8\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__Vdly__core__DOT__rPipeState;
    // ALWAYS at ../../../firmware/core/core_v5r0.v:57
    if ((1U & (~ (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutWriteA)))) {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusRegA 
	    = vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__registers__DOT__rContents
	    [vlSymsp->TOP__epRISC_coreEmu__machine.core__DOT____Vcellinp__registers____pinNumber1];
    }
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAccess 
	= (((4U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)) 
	    | (1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) 
	   & (~ (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusClock)));
    // ALWAYSPOST at ../../../firmware/core/core_v5r0.v:49
    if (vlSymsp->TOP__epRISC_coreEmu__machine.__Vdlyvset__core__DOT__registers__DOT__rContents__v0) {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__registers__DOT__rContents[vlSymsp->TOP__epRISC_coreEmu__machine.__Vdlyvdim0__core__DOT__registers__DOT__rContents__v0] 
	    = vlSymsp->TOP__epRISC_coreEmu__machine.__Vdlyvval__core__DOT__registers__DOT__rContents__v0;
    }
    if (vlSymsp->TOP__epRISC_coreEmu__machine.__Vdlyvset__core__DOT__registers__DOT__rContents__v1) {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__registers__DOT__rContents[vlSymsp->TOP__epRISC_coreEmu__machine.__Vdlyvdim0__core__DOT__registers__DOT__rContents__v1] 
	    = vlSymsp->TOP__epRISC_coreEmu__machine.__Vdlyvval__core__DOT__registers__DOT__rContents__v1;
    }
}

void VepRISC_coreEmu_epRISC_machine::_settle__TOP__epRISC_coreEmu__machine__9(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_settle__TOP__epRISC_coreEmu__machine__9\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__fCSHideRegs 
	= (1U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
		 >> 7U));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__fCSFlagSet 
	= (1U & (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
		    >> 4U)));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchInterrupt 
	= ((vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
	    >> 0x1fU) & (3U == (7U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
				      >> 0x1cU))));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mALURegisters 
	= ((1U == (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			   >> 0x1cU))) & (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					     >> 0x1bU)));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrA 
	= ((0x80000000U & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst)
	    ? (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
		       >> 0x14U)) : ((1U == (3U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						   >> 0x1eU)))
				      ? (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						 >> 0x18U))
				      : ((1U == (7U 
						 & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						    >> 0x1dU)))
					  ? (0xfU & 
					     (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					      >> 0x18U))
					  : ((1U == 
					      (0xfU 
					       & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						  >> 0x1cU)))
					      ? (0xfU 
						 & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						    >> 0xcU))
					      : ((1U 
						  == 
						  (0x1fU 
						   & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						      >> 0x1bU)))
						  ? 
						 (0xfU 
						  & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						     >> 0x14U))
						  : 0xffU)))));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutAddrA 
	= ((1U == (0x1fU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			    >> 0x1bU))) ? (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						   >> 0x10U))
	    : ((1U == (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			       >> 0x1cU))) ? (0xfU 
					      & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						 >> 0x10U))
	        : ((1U == (3U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
				 >> 0x1eU))) ? (0xfU 
						& (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						   >> 0x14U))
		    : 0xffU)));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutAddrB 
	= ((1U == (0x1fU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			    >> 0x1bU))) ? (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						   >> 0x14U))
	    : ((1U == (7U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			     >> 0x1dU))) ? (0xfU & 
					    (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					     >> 0x18U))
	        : 0xffU));
    // ALWAYS at ../../../firmware/core/core_v5r0.v:446
    vlSymsp->TOP__epRISC_coreEmu__machine.__Vtableidx1 
	= ((0x100U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
		      << 8U)) | ((0x80U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
					   << 6U)) 
				 | ((0x40U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
					      << 3U)) 
				    | ((0x20U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
						 << 3U)) 
				       | ((0x1eU & 
					   (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					    >> 0x17U)) 
					  | (1U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						   >> 0x1fU)))))));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rExec 
	= vlSymsp->TOP__epRISC_coreEmu__machine.__Vtable1___PVT__core__DOT__rExec
	[vlSymsp->TOP__epRISC_coreEmu__machine.__Vtableidx1];
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrB 
	= ((1U == (3U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			 >> 0x1eU))) ? (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						>> 0x14U))
	    : ((1U == (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			       >> 0x1cU))) ? (0xfU 
					      & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						 >> 8U))
	        : ((1U == (0x1fU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
				    >> 0x1bU))) ? (0xfU 
						   & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						      >> 0x10U))
		    : 0xffU)));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mDirectOR 
	= ((1U == (7U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			 >> 0x1dU))) & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					>> 0x1cU));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchLoadStack 
	= ((vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
	    >> 0x1fU) & (7U == (7U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
				      >> 0x1cU))));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadLoad 
	= ((1U == (3U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			 >> 0x1eU))) & (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					   >> 0x1dU)));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchSaveStack 
	= ((vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
	    >> 0x1fU) & (5U == (7U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
				      >> 0x1cU))));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadStore 
	= ((1U == (3U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			 >> 0x1eU))) & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					>> 0x1dU));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAccess 
	= (((4U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)) 
	    | (1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) 
	   & (~ (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusClock)));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutWriteB 
	= ((5U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)) 
	   & ((1U == (0x1fU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			       >> 0x1bU))) | (1U == 
					      (7U & 
					       (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						>> 0x1dU)))));
    vlSymsp->TOP__epRISC_coreEmu__machine.core__DOT____Vcellinp__registers____pinNumber1 
	= (0xffU & ((0xf0U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
			      >> 8U)) + (((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)) 
					  | (1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)))
					  ? (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrA)
					  : (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutAddrA))));
    // ALWAYS at ../../../firmware/core/core_v5r0.v:235
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeNextState 
	= (0xfU & (((((((((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)) 
			  | (2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) 
			 | (3U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) 
			| (4U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) 
		       | (5U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) 
		      | (8U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) 
		     | (7U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) 
		    | (6U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)))
		    ? ((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))
		        ? 2U : ((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))
				 ? 3U : ((3U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))
					  ? 4U : ((4U 
						   == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))
						   ? 
						  ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rExec)
						    ? 5U
						    : 7U)
						   : 
						  ((5U 
						    == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))
						    ? 
						   (((1U 
						      == 
						      (0x3fU 
						       & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
							  >> 0x1aU))) 
						     & (2U 
							== 
							(0x3fU 
							 & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
							    >> 0x14U))))
						     ? 6U
						     : 
						    (((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__iBusInterrupt) 
						      & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
							 >> 6U))
						      ? 8U
						      : 1U))
						    : 
						   ((8U 
						     == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))
						     ? 1U
						     : 
						    ((7U 
						      == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))
						      ? 
						     (((1U 
							== 
							(0x3fU 
							 & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
							    >> 0x1aU))) 
						       & (2U 
							  == 
							  (0x3fU 
							   & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
							      >> 0x14U))))
						       ? 6U
						       : 1U)
						      : 6U)))))))
		    : ((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))
		        ? 1U : 0U)));
    vlSymsp->TOP__epRISC_coreEmu__machine.core__DOT____Vcellinp__registers____pinNumber2 
	= (0xffU & ((0xf0U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
			      >> 8U)) + (((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)) 
					  | (1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)))
					  ? (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrB)
					  : (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutAddrB))));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation 
	= (0x1fU & ((1U == (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
				    >> 0x1cU))) ? (0x1fU 
						   & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						      >> 0x14U))
		     : (((1U == (7U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
				       >> 0x1dU))) 
			 & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mDirectOR))
			 ? 3U : 0U)));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutWriteA 
	= ((5U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)) 
	   & (((1U == (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			       >> 0x1cU))) | ((1U == 
					       (0x1fU 
						& (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						   >> 0x1bU))) 
					      & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						 >> 0x18U))) 
	      | (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadLoad)));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutA 
	= ((1U == (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			   >> 0x1cU))) ? (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegR)
	    : ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadLoad)
	        ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegM
	        : vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInB 
	= (((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrB)) 
	    & (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
		  >> 7U))) ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegIP
	    : (((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrB)) 
		& (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
		      >> 7U))) ? (((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadLoad) 
				   & (2U == (0xfU & 
					     (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					      >> 0x18U))))
				   ? (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegSP 
				      - (IData)(1U))
				   : vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegSP)
	        : (((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrB)) 
		    & (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
			  >> 7U))) ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS
		    : (((3U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrB)) 
			& (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
			      >> 7U))) ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegGL
		        : (((0xfU == (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
					      >> 0xcU))) 
			    & (4U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrB)))
			    ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegInterruptBase
			    : vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusRegB)))));
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_machine::_multiclk__TOP__epRISC_coreEmu__machine__10(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_multiclk__TOP__epRISC_coreEmu__machine__10\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutWriteB 
	= ((5U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)) 
	   & ((1U == (0x1fU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			       >> 0x1bU))) | (1U == 
					      (7U & 
					       (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						>> 0x1dU)))));
    vlSymsp->TOP__epRISC_coreEmu__machine.core__DOT____Vcellinp__registers____pinNumber1 
	= (0xffU & ((0xf0U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
			      >> 8U)) + (((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)) 
					  | (1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)))
					  ? (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrA)
					  : (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutAddrA))));
    vlSymsp->TOP__epRISC_coreEmu__machine.core__DOT____Vcellinp__registers____pinNumber2 
	= (0xffU & ((0xf0U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
			      >> 8U)) + (((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)) 
					  | (1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)))
					  ? (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrB)
					  : (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutAddrB))));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutWriteA 
	= ((5U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)) 
	   & (((1U == (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			       >> 0x1cU))) | ((1U == 
					       (0x1fU 
						& (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						   >> 0x1bU))) 
					      & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						 >> 0x18U))) 
	      | (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadLoad)));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInB 
	= (((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrB)) 
	    & (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
		  >> 7U))) ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegIP
	    : (((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrB)) 
		& (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
		      >> 7U))) ? (((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadLoad) 
				   & (2U == (0xfU & 
					     (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					      >> 0x18U))))
				   ? (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegSP 
				      - (IData)(1U))
				   : vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegSP)
	        : (((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrB)) 
		    & (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
			  >> 7U))) ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS
		    : (((3U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrB)) 
			& (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
			      >> 7U))) ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegGL
		        : (((0xfU == (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
					      >> 0xcU))) 
			    & (4U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusInAddrB)))
			    ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegInterruptBase
			    : vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusRegB)))));
}

void VepRISC_coreEmu_epRISC_machine::_initial__TOP__epRISC_coreEmu__machine__11(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_initial__TOP__epRISC_coreEmu__machine__11\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at ../../../firmware/core/core_v5r0.v:42
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__registers__DOT__rClr = 0U;
    while ((0x100U > (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__registers__DOT__rClr))) {
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__registers__DOT__rContents[(0xffU 
										& (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__registers__DOT__rClr))] = 0U;
	vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__registers__DOT__rClr 
	    = (0x1ffU & ((IData)(1U) + (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__registers__DOT__rClr)));
    }
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_machine::_multiclk__TOP__epRISC_coreEmu__machine__12(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_multiclk__TOP__epRISC_coreEmu__machine__12\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../../firmware/core/core_v5r0.v:235
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeNextState 
	= (0xfU & (((((((((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)) 
			  | (2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) 
			 | (3U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) 
			| (4U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) 
		       | (5U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) 
		      | (8U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) 
		     | (7U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))) 
		    | (6U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)))
		    ? ((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))
		        ? 2U : ((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))
				 ? 3U : ((3U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))
					  ? 4U : ((4U 
						   == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))
						   ? 
						  ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rExec)
						    ? 5U
						    : 7U)
						   : 
						  ((5U 
						    == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))
						    ? 
						   (((1U 
						      == 
						      (0x3fU 
						       & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
							  >> 0x1aU))) 
						     & (2U 
							== 
							(0x3fU 
							 & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
							    >> 0x14U))))
						     ? 6U
						     : 
						    (((IData)(vlSymsp->TOP__epRISC_coreEmu.__PVT__iBusInterrupt) 
						      & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
							 >> 6U))
						      ? 8U
						      : 1U))
						    : 
						   ((8U 
						     == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))
						     ? 1U
						     : 
						    ((7U 
						      == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))
						      ? 
						     (((1U 
							== 
							(0x3fU 
							 & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
							    >> 0x1aU))) 
						       & (2U 
							  == 
							  (0x3fU 
							   & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
							      >> 0x14U))))
						       ? 6U
						       : 1U)
						      : 6U)))))))
		    : ((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))
		        ? 1U : 0U)));
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_machine::_sequent__TOP__epRISC_coreEmu__machine__13(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_sequent__TOP__epRISC_coreEmu__machine__13\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation 
	= (0x1fU & ((1U == (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
				    >> 0x1cU))) ? (0x1fU 
						   & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						      >> 0x14U))
		     : (((1U == (7U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
				       >> 0x1dU))) 
			 & (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mDirectOR))
			 ? 3U : 0U)));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutA 
	= ((1U == (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			   >> 0x1cU))) ? (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegR)
	    : ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadLoad)
	        ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegM
	        : vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA));
    // ALWAYS at ../../../firmware/core/core_v5r0.v:421
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rALUOut 
	= (VL_ULL(0x1ffffffff) & (((((((((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation)) 
					 | (1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
					| (2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
				       | (3U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
				      | (4U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
				     | (5U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
				    | (6U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
				   | (7U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation)))
				   ? ((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
				       ? ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
					  + (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)))
				       : ((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
					   ? ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
					      - (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)))
					   : ((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
					       ? ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						  & (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)))
					       : ((3U 
						   == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
						   ? 
						  ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						   | (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)))
						   : 
						  ((4U 
						    == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
						    ? 
						   ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						    ^ (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)))
						    : 
						   ((5U 
						     == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
						     ? 
						    (~ (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)))
						     : 
						    ((6U 
						      == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
						      ? 
						     ((0x20U 
						       >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						       ? 
						      ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						       << vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						       : VL_ULL(0))
						      : 
						     ((0x80000000U 
						       & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)
						       ? 
						      ((~ 
							((0x20U 
							  >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							  ? 
							 (VL_ULL(1) 
							  >> vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							  : VL_ULL(0))) 
						       + 
						       ((0x20U 
							 >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							 ? 
							((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
							 >> vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							 : VL_ULL(0)))
						       : 
						      ((0x20U 
							>= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						        ? 
						       ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
							>> vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						        : VL_ULL(0))))))))))
				   : (((((((((8U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation)) 
					     | (9U 
						== (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
					    | (0xaU 
					       == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
					   | (0xbU 
					      == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
					  | (0xcU == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
					 | (0xdU == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
					| (0xeU == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
				       | (0xfU == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation)))
				       ? ((8U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
					   ? ((0x20U 
					       >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
					       ? ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						  >> vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
					       : VL_ULL(0))
					   : ((9U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
					       ? ((
						   (0x20U 
						    >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						    ? 
						   ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						    >> vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						    : VL_ULL(0)) 
						  + 
						  ((0x20U 
						    >= 
						    ((IData)(0x20U) 
						     - vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB))
						    ? 
						   (((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						     & (~ 
							((0x20U 
							  >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							  ? 
							 (VL_ULL(1) 
							  << vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							  : VL_ULL(0)))) 
						    << 
						    ((IData)(0x20U) 
						     - vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB))
						    : VL_ULL(0)))
					       : ((0xaU 
						   == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
						   ? 
						  (((0x20U 
						     >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						     ? 
						    ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						     << vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						     : VL_ULL(0)) 
						   + 
						   ((0x20U 
						     >= 
						     ((IData)(0x20U) 
						      - vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB))
						     ? 
						    (((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						      & (~ 
							 ((0x20U 
							   >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							   ? 
							  (VL_ULL(1) 
							   >> vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							   : VL_ULL(0)))) 
						     >> 
						     ((IData)(0x20U) 
						      - vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB))
						     : VL_ULL(0)))
						   : 
						  ((0xbU 
						    == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
						    ? 
						   ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						    & (~ (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB))))
						    : 
						   ((0xcU 
						     == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
						     ? 
						    ((0x20U 
						      >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						      ? 
						     (((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						       & (QData)((IData)(
									 (0xffU 
									  & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst)))) 
						      << vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						      : VL_ULL(0))
						     : 
						    ((0xdU 
						      == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
						      ? 
						     ((0x20U 
						       >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						       ? 
						      (((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
							& ((0x20U 
							    >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							    ? 
							   ((QData)((IData)(
									    (0xffU 
									     & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst))) 
							    << vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							    : VL_ULL(0))) 
						       >> vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						       : VL_ULL(0))
						      : 
						     ((0xeU 
						       == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
						       ? 
						      ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						       - (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)))
						       : 
						      ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						       & (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB))))))))))
				       : ((0x10U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
					   ? (((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
					       + (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB))) 
					      + (QData)((IData)(
								(1U 
								 & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
								    >> 3U)))))
					   : ((0x11U 
					       == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
					       ? ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						  - 
						  ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)) 
						   + (QData)((IData)(
								     (1U 
								      & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
									 >> 3U))))))
					       : VL_ULL(0xbadc0de))))));
}

void VepRISC_coreEmu_epRISC_machine::_settle__TOP__epRISC_coreEmu__machine__14(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_settle__TOP__epRISC_coreEmu__machine__14\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__registers__DOT__debug 
	= (1U & ((0xaU > vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__registers__DOT__rContents
		  [5U]) ? 1U : 0U));
    // ALWAYS at ../../../firmware/core/core_v5r0.v:421
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rALUOut 
	= (VL_ULL(0x1ffffffff) & (((((((((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation)) 
					 | (1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
					| (2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
				       | (3U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
				      | (4U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
				     | (5U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
				    | (6U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
				   | (7U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation)))
				   ? ((0U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
				       ? ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
					  + (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)))
				       : ((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
					   ? ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
					      - (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)))
					   : ((2U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
					       ? ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						  & (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)))
					       : ((3U 
						   == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
						   ? 
						  ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						   | (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)))
						   : 
						  ((4U 
						    == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
						    ? 
						   ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						    ^ (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)))
						    : 
						   ((5U 
						     == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
						     ? 
						    (~ (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)))
						     : 
						    ((6U 
						      == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
						      ? 
						     ((0x20U 
						       >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						       ? 
						      ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						       << vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						       : VL_ULL(0))
						      : 
						     ((0x80000000U 
						       & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)
						       ? 
						      ((~ 
							((0x20U 
							  >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							  ? 
							 (VL_ULL(1) 
							  >> vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							  : VL_ULL(0))) 
						       + 
						       ((0x20U 
							 >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							 ? 
							((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
							 >> vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							 : VL_ULL(0)))
						       : 
						      ((0x20U 
							>= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						        ? 
						       ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
							>> vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						        : VL_ULL(0))))))))))
				   : (((((((((8U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation)) 
					     | (9U 
						== (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
					    | (0xaU 
					       == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
					   | (0xbU 
					      == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
					  | (0xcU == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
					 | (0xdU == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
					| (0xeU == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))) 
				       | (0xfU == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation)))
				       ? ((8U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
					   ? ((0x20U 
					       >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
					       ? ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						  >> vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
					       : VL_ULL(0))
					   : ((9U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
					       ? ((
						   (0x20U 
						    >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						    ? 
						   ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						    >> vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						    : VL_ULL(0)) 
						  + 
						  ((0x20U 
						    >= 
						    ((IData)(0x20U) 
						     - vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB))
						    ? 
						   (((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						     & (~ 
							((0x20U 
							  >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							  ? 
							 (VL_ULL(1) 
							  << vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							  : VL_ULL(0)))) 
						    << 
						    ((IData)(0x20U) 
						     - vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB))
						    : VL_ULL(0)))
					       : ((0xaU 
						   == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
						   ? 
						  (((0x20U 
						     >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						     ? 
						    ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						     << vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						     : VL_ULL(0)) 
						   + 
						   ((0x20U 
						     >= 
						     ((IData)(0x20U) 
						      - vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB))
						     ? 
						    (((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						      & (~ 
							 ((0x20U 
							   >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							   ? 
							  (VL_ULL(1) 
							   >> vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							   : VL_ULL(0)))) 
						     >> 
						     ((IData)(0x20U) 
						      - vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB))
						     : VL_ULL(0)))
						   : 
						  ((0xbU 
						    == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
						    ? 
						   ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						    & (~ (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB))))
						    : 
						   ((0xcU 
						     == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
						     ? 
						    ((0x20U 
						      >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						      ? 
						     (((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						       & (QData)((IData)(
									 (0xffU 
									  & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst)))) 
						      << vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						      : VL_ULL(0))
						     : 
						    ((0xdU 
						      == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
						      ? 
						     ((0x20U 
						       >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						       ? 
						      (((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
							& ((0x20U 
							    >= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							    ? 
							   ((QData)((IData)(
									    (0xffU 
									     & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst))) 
							    << vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
							    : VL_ULL(0))) 
						       >> vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)
						       : VL_ULL(0))
						      : 
						     ((0xeU 
						       == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
						       ? 
						      ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						       - (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)))
						       : 
						      ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						       & (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB))))))))))
				       : ((0x10U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
					   ? (((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
					       + (QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB))) 
					      + (QData)((IData)(
								(1U 
								 & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
								    >> 3U)))))
					   : ((0x11U 
					       == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wALUOperation))
					       ? ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegA)) 
						  - 
						  ((QData)((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB)) 
						   + (QData)((IData)(
								     (1U 
								      & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
									 >> 3U))))))
					       : VL_ULL(0xbadc0de))))));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutB 
	= ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mDirectOR)
	    ? (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rALUOut)
	    : vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB);
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_machine::_sequent__TOP__epRISC_coreEmu__machine__15(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_sequent__TOP__epRISC_coreEmu__machine__15\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__registers__DOT__debug 
	= (1U & ((0xaU > vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__registers__DOT__rContents
		  [5U]) ? 1U : 0U));
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_machine::_sequent__TOP__epRISC_coreEmu__machine__16(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_sequent__TOP__epRISC_coreEmu__machine__16\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__wBusOutB 
	= ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mDirectOR)
	    ? (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rALUOut)
	    : vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegB);
}

void VepRISC_coreEmu_epRISC_machine::_settle__TOP__epRISC_coreEmu__machine__17(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_settle__TOP__epRISC_coreEmu__machine__17\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bus____pinNumber2 
	= (1U & ((~ (IData)(vlTOPp->iBoardReset)) | 
		 (~ (IData)(vlTOPp->iBoardSense))));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite 
	= ((4U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)) 
	   & ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadStore) 
	      | (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchSaveStack)));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress 
	= ((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))
	    ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegIP
	    : ((((1U == (3U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			       >> 0x1eU))) & ((1U != 
					       (0xfU 
						& (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						   >> 0x18U))) 
					      | (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
						 >> 7U))) 
		& (4U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)))
	        ? (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegR)
	        : ((((((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadLoad) 
		       & (1U == (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					 >> 0x18U)))) 
		      & (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
			    >> 7U))) | (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchLoadStack)) 
		    & (4U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)))
		    ? (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegSP 
		       - (IData)(1U)) : ((((((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadStore) 
					     & (1U 
						== 
						(0xfU 
						 & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						    >> 0x18U)))) 
					    & (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
						  >> 7U))) 
					   | (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchSaveStack)) 
					  & (4U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)))
					  ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegSP
					  : 0U))));
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_machine::_combo__TOP__epRISC_coreEmu__machine__18(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_combo__TOP__epRISC_coreEmu__machine__18\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bus____pinNumber2 
	= (1U & ((~ (IData)(vlTOPp->iBoardReset)) | 
		 (~ (IData)(vlTOPp->iBoardSense))));
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_machine::_multiclk__TOP__epRISC_coreEmu__machine__19(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_multiclk__TOP__epRISC_coreEmu__machine__19\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite 
	= ((4U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)) 
	   & ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadStore) 
	      | (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchSaveStack)));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress 
	= ((1U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState))
	    ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegIP
	    : ((((1U == (3U & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
			       >> 0x1eU))) & ((1U != 
					       (0xfU 
						& (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						   >> 0x18U))) 
					      | (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
						 >> 7U))) 
		& (4U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)))
	        ? (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegR)
	        : ((((((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadLoad) 
		       & (1U == (0xfU & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
					 >> 0x18U)))) 
		      & (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
			    >> 7U))) | (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchLoadStack)) 
		    & (4U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)))
		    ? (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegSP 
		       - (IData)(1U)) : ((((((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mLoadStore) 
					     & (1U 
						== 
						(0xfU 
						 & (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rInst 
						    >> 0x18U)))) 
					    & (~ (vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegCS 
						  >> 7U))) 
					   | (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__mBranchSaveStack)) 
					  & (4U == (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rPipeState)))
					  ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegSP
					  : 0U))));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wEnableRAM 
	= ((0x1000U <= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress) 
	   & (0x2000U > vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wEnableSDRAM 
	= ((0x3000U <= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress) 
	   & (0x800000U > vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wEnableBusControl 
	= ((0x2000U <= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress) 
	   & (0x3000U > vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress));
}

void VepRISC_coreEmu_epRISC_machine::_settle__TOP__epRISC_coreEmu__machine__20(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_settle__TOP__epRISC_coreEmu__machine__20\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wEnableRAM 
	= ((0x1000U <= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress) 
	   & (0x2000U > vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wEnableSDRAM 
	= ((0x3000U <= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress) 
	   & (0x800000U > vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress));
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wEnableBusControl 
	= ((0x2000U <= vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress) 
	   & (0x3000U > vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress));
    vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bcram____pinNumber1 
	= ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wEnableRAM) 
	   & (~ (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite)));
    vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bcsdram____pinNumber1 
	= ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wEnableSDRAM) 
	   & (~ (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite)));
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_machine::_multiclk__TOP__epRISC_coreEmu__machine__21(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_multiclk__TOP__epRISC_coreEmu__machine__21\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bcram____pinNumber1 
	= ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wEnableRAM) 
	   & (~ (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite)));
    vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bcsdram____pinNumber1 
	= ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wEnableSDRAM) 
	   & (~ (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite)));
}

VL_INLINE_OPT void VepRISC_coreEmu_epRISC_machine::_combo__TOP__epRISC_coreEmu__machine__22(VepRISC_coreEmu__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_combo__TOP__epRISC_coreEmu__machine__22\n"); );
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusData 
	= ((((((((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite)
		  ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__core__DOT__rRegM
		  : 0U) & ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite)
			    ? 0xffffffffU : 0U)) & 
	       ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite)
		 ? 0xffffffffU : 0U)) | ((((1U & ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusWrite) 
						  | (~ (IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wEnableBusControl))))
					    ? 0U : 
					   ((0U == 
					     (0xfU 
					      & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress))
					     ? vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rConfig
					     : ((1U 
						 == 
						 (0xfU 
						  & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress))
						 ? vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rDirectMOSI
						 : 
						((2U 
						  == 
						  (0xfU 
						   & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress))
						  ? vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rDirectMISO
						  : 
						 ((3U 
						   == 
						   (0xfU 
						    & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress))
						   ? (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rCounterMOSI)
						   : 
						  ((4U 
						    == 
						    (0xfU 
						     & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress))
						    ? vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDataMOSI
						    : 
						   ((5U 
						     == 
						     (0xfU 
						      & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress))
						     ? (IData)(vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__rCounterMISO)
						     : 
						    ((6U 
						      == 
						      (0xfU 
						       & vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress))
						      ? vlSymsp->TOP__epRISC_coreEmu__machine__bus.__PVT__wDataMISO
						      : 0xbadc0deU)))))))) 
					  & vlSymsp->TOP__epRISC_coreEmu__machine__bus.bData__out__en0) 
					 & vlSymsp->TOP__epRISC_coreEmu__machine__bus.bData__out__en0)) 
	     | ((((0x1000U > vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)
		   ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbrom__DOT__rDataOut
		   : 0U) & ((0x1000U > vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)
			     ? 0xffffffffU : 0U)) & 
		((0x1000U > vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__wCoreBusAddress)
		  ? 0xffffffffU : 0U))) | ((((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bcram____pinNumber1)
					      ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbram__DOT__rDataOut
					      : 0U) 
					    & ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bcram____pinNumber1)
					        ? 0xffffffffU
					        : 0U)) 
					   & ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bcram____pinNumber1)
					       ? 0xffffffffU
					       : 0U))) 
	   | ((((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bcsdram____pinNumber1)
		 ? vlSymsp->TOP__epRISC_coreEmu__machine.__PVT__tbsdram__DOT__rDataOut
		 : 0U) & ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bcsdram____pinNumber1)
			   ? 0xffffffffU : 0U)) & ((IData)(vlSymsp->TOP__epRISC_coreEmu__machine.__Vcellinp__bcsdram____pinNumber1)
						    ? 0xffffffffU
						    : 0U)));
}

void VepRISC_coreEmu_epRISC_machine::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_ctor_var_reset\n"); );
    // Body
    __PVT__iBoardClock = VL_RAND_RESET_I(1);
    __PVT__iBoardReset = VL_RAND_RESET_I(1);
    __PVT__iBoardSense = VL_RAND_RESET_I(1);
    __PVT__iBoardReceive = VL_RAND_RESET_I(1);
    __PVT__oBoardAcknowledge = VL_RAND_RESET_I(1);
    __PVT__oBoardTransmit = VL_RAND_RESET_I(1);
    __PVT__bBoardDebug0 = VL_RAND_RESET_I(1);
    __PVT__bBoardDebug2 = VL_RAND_RESET_I(1);
    __PVT__bBoardDebug3 = VL_RAND_RESET_I(1);
    __PVT__bBoardDebug4 = VL_RAND_RESET_I(1);
    __PVT__bBoardDebug5 = VL_RAND_RESET_I(1);
    __PVT__iBusInterrupt = VL_RAND_RESET_I(1);
    __PVT__iBusMISO = VL_RAND_RESET_I(8);
    __PVT__oBusClock = VL_RAND_RESET_I(1);
    __PVT__oBusSelect = VL_RAND_RESET_I(2);
    __PVT__oBusMOSI = VL_RAND_RESET_I(8);
    __PVT__oMemoryCKE = VL_RAND_RESET_I(1);
    __PVT__oMemoryCLK = VL_RAND_RESET_I(1);
    __PVT__oMemoryWE = VL_RAND_RESET_I(1);
    __PVT__oMemoryCAS = VL_RAND_RESET_I(1);
    __PVT__oMemoryRAS = VL_RAND_RESET_I(1);
    __PVT__oMemoryCS = VL_RAND_RESET_I(1);
    __PVT__oMemoryBank = VL_RAND_RESET_I(2);
    __PVT__oMemoryDQM = VL_RAND_RESET_I(4);
    __PVT__oMemoryAddress = VL_RAND_RESET_I(12);
    __PVT__bMemoryData = VL_RAND_RESET_I(32);
    __PVT__wCoreBusClock = VL_RAND_RESET_I(1);
    __PVT__wCoreBusMemClock = VL_RAND_RESET_I(1);
    __PVT__wCoreBusWrite = VL_RAND_RESET_I(1);
    __PVT__wCoreBusAccess = VL_RAND_RESET_I(1);
    __PVT__wSDRAMReady = VL_RAND_RESET_I(1);
    __PVT__wCoreBusAddress = VL_RAND_RESET_I(32);
    __PVT__wCoreBusData = VL_RAND_RESET_I(32);
    __PVT__wEnableRAM = VL_RAND_RESET_I(1);
    __PVT__wEnableBusControl = VL_RAND_RESET_I(1);
    __PVT__wEnableSDRAM = VL_RAND_RESET_I(1);
    __PVT__wCoreFlag = VL_RAND_RESET_I(1);
    __Vcellinp__bus____pinNumber2 = VL_RAND_RESET_I(1);
    __Vcellinp__bcram____pinNumber1 = VL_RAND_RESET_I(1);
    __Vcellinp__bcsdram____pinNumber1 = VL_RAND_RESET_I(1);
    bBoardDebug0__out = VL_RAND_RESET_I(1);
    bBoardDebug0__en = VL_RAND_RESET_I(1);
    bBoardDebug2__out = VL_RAND_RESET_I(1);
    bBoardDebug2__en = VL_RAND_RESET_I(1);
    bBoardDebug3__out = VL_RAND_RESET_I(1);
    bBoardDebug3__en = VL_RAND_RESET_I(1);
    bBoardDebug4__out = VL_RAND_RESET_I(1);
    bBoardDebug4__en = VL_RAND_RESET_I(1);
    bBoardDebug5__out = VL_RAND_RESET_I(1);
    bBoardDebug5__en = VL_RAND_RESET_I(1);
    bMemoryData__out = VL_RAND_RESET_I(32);
    bMemoryData__en = VL_RAND_RESET_I(32);
    __PVT__clock__DOT__rClockSplit = VL_RAND_RESET_I(2);
    __PVT__core__DOT__rRegIP = VL_RAND_RESET_I(32);
    __PVT__core__DOT__rRegSP = VL_RAND_RESET_I(32);
    __PVT__core__DOT__rRegCS = VL_RAND_RESET_I(32);
    __PVT__core__DOT__rRegGL = VL_RAND_RESET_I(32);
    __PVT__core__DOT__rRegA = VL_RAND_RESET_I(32);
    __PVT__core__DOT__rRegB = VL_RAND_RESET_I(32);
    __PVT__core__DOT__rRegM = VL_RAND_RESET_I(32);
    __PVT__core__DOT__rRegR = VL_RAND_RESET_Q(33);
    __PVT__core__DOT__rALUOut = VL_RAND_RESET_Q(33);
    __PVT__core__DOT__rExec = VL_RAND_RESET_I(1);
    __PVT__core__DOT__rPipePrevState = VL_RAND_RESET_I(4);
    __PVT__core__DOT__rPipeState = VL_RAND_RESET_I(4);
    __PVT__core__DOT__rPipeNextState = VL_RAND_RESET_I(4);
    __PVT__core__DOT__rInst = VL_RAND_RESET_I(32);
    __PVT__core__DOT__rDataBuf = VL_RAND_RESET_I(32);
    __PVT__core__DOT__wALUOperation = VL_RAND_RESET_I(5);
    __PVT__core__DOT__rRegInterruptBase = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96,__PVT__core__DOT__rRegInterruptStack);
    __PVT__core__DOT__wBusInB = VL_RAND_RESET_I(32);
    __PVT__core__DOT__wBusRegA = VL_RAND_RESET_I(32);
    __PVT__core__DOT__wBusRegB = VL_RAND_RESET_I(32);
    __PVT__core__DOT__wBusOutA = VL_RAND_RESET_I(32);
    __PVT__core__DOT__wBusOutB = VL_RAND_RESET_I(32);
    __PVT__core__DOT__wBusInAddrA = VL_RAND_RESET_I(8);
    __PVT__core__DOT__wBusInAddrB = VL_RAND_RESET_I(8);
    __PVT__core__DOT__wBusOutAddrA = VL_RAND_RESET_I(8);
    __PVT__core__DOT__wBusOutAddrB = VL_RAND_RESET_I(8);
    __PVT__core__DOT__wBusOutWriteA = VL_RAND_RESET_I(1);
    __PVT__core__DOT__wBusOutWriteB = VL_RAND_RESET_I(1);
    __PVT__core__DOT__mBranchSaveStack = VL_RAND_RESET_I(1);
    __PVT__core__DOT__mBranchLoadStack = VL_RAND_RESET_I(1);
    __PVT__core__DOT__mBranchInterrupt = VL_RAND_RESET_I(1);
    __PVT__core__DOT__mLoadLoad = VL_RAND_RESET_I(1);
    __PVT__core__DOT__mLoadStore = VL_RAND_RESET_I(1);
    __PVT__core__DOT__mDirectOR = VL_RAND_RESET_I(1);
    __PVT__core__DOT__mALURegisters = VL_RAND_RESET_I(1);
    __PVT__core__DOT__fCSHideRegs = VL_RAND_RESET_I(1);
    __PVT__core__DOT__fCSFlagSet = VL_RAND_RESET_I(1);
    core__DOT____Vcellinp__registers____pinNumber2 = VL_RAND_RESET_I(8);
    core__DOT____Vcellinp__registers____pinNumber1 = VL_RAND_RESET_I(8);
    __PVT__core__DOT__registers__DOT__rClr = VL_RAND_RESET_I(9);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    __PVT__core__DOT__registers__DOT__rContents[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__core__DOT__registers__DOT__debug = VL_RAND_RESET_I(1);
    __PVT__tbrom__DOT__rDataOut = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
	    __PVT__tbrom__DOT__rContents[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__tbram__DOT__rDataOut = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
	    __PVT__tbram__DOT__rContents[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__tbsdram__DOT__rDataOut = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
	    __PVT__tbsdram__DOT__rContents[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vtableidx1 = VL_RAND_RESET_I(9);
    __Vtable1___PVT__core__DOT__rExec[0] = 1U;
    __Vtable1___PVT__core__DOT__rExec[1] = 1U;
    __Vtable1___PVT__core__DOT__rExec[2] = 1U;
    __Vtable1___PVT__core__DOT__rExec[3] = 0U;
    __Vtable1___PVT__core__DOT__rExec[4] = 1U;
    __Vtable1___PVT__core__DOT__rExec[5] = 1U;
    __Vtable1___PVT__core__DOT__rExec[6] = 1U;
    __Vtable1___PVT__core__DOT__rExec[7] = 0U;
    __Vtable1___PVT__core__DOT__rExec[8] = 1U;
    __Vtable1___PVT__core__DOT__rExec[9] = 1U;
    __Vtable1___PVT__core__DOT__rExec[10] = 1U;
    __Vtable1___PVT__core__DOT__rExec[11] = 0U;
    __Vtable1___PVT__core__DOT__rExec[12] = 1U;
    __Vtable1___PVT__core__DOT__rExec[13] = 1U;
    __Vtable1___PVT__core__DOT__rExec[14] = 1U;
    __Vtable1___PVT__core__DOT__rExec[15] = 0U;
    __Vtable1___PVT__core__DOT__rExec[16] = 1U;
    __Vtable1___PVT__core__DOT__rExec[17] = 1U;
    __Vtable1___PVT__core__DOT__rExec[18] = 1U;
    __Vtable1___PVT__core__DOT__rExec[19] = 0U;
    __Vtable1___PVT__core__DOT__rExec[20] = 1U;
    __Vtable1___PVT__core__DOT__rExec[21] = 1U;
    __Vtable1___PVT__core__DOT__rExec[22] = 1U;
    __Vtable1___PVT__core__DOT__rExec[23] = 1U;
    __Vtable1___PVT__core__DOT__rExec[24] = 1U;
    __Vtable1___PVT__core__DOT__rExec[25] = 0U;
    __Vtable1___PVT__core__DOT__rExec[26] = 1U;
    __Vtable1___PVT__core__DOT__rExec[27] = 1U;
    __Vtable1___PVT__core__DOT__rExec[28] = 1U;
    __Vtable1___PVT__core__DOT__rExec[29] = 0U;
    __Vtable1___PVT__core__DOT__rExec[30] = 1U;
    __Vtable1___PVT__core__DOT__rExec[31] = 0U;
    __Vtable1___PVT__core__DOT__rExec[32] = 1U;
    __Vtable1___PVT__core__DOT__rExec[33] = 1U;
    __Vtable1___PVT__core__DOT__rExec[34] = 1U;
    __Vtable1___PVT__core__DOT__rExec[35] = 1U;
    __Vtable1___PVT__core__DOT__rExec[36] = 1U;
    __Vtable1___PVT__core__DOT__rExec[37] = 0U;
    __Vtable1___PVT__core__DOT__rExec[38] = 1U;
    __Vtable1___PVT__core__DOT__rExec[39] = 0U;
    __Vtable1___PVT__core__DOT__rExec[40] = 1U;
    __Vtable1___PVT__core__DOT__rExec[41] = 1U;
    __Vtable1___PVT__core__DOT__rExec[42] = 1U;
    __Vtable1___PVT__core__DOT__rExec[43] = 0U;
    __Vtable1___PVT__core__DOT__rExec[44] = 1U;
    __Vtable1___PVT__core__DOT__rExec[45] = 1U;
    __Vtable1___PVT__core__DOT__rExec[46] = 1U;
    __Vtable1___PVT__core__DOT__rExec[47] = 0U;
    __Vtable1___PVT__core__DOT__rExec[48] = 1U;
    __Vtable1___PVT__core__DOT__rExec[49] = 1U;
    __Vtable1___PVT__core__DOT__rExec[50] = 1U;
    __Vtable1___PVT__core__DOT__rExec[51] = 0U;
    __Vtable1___PVT__core__DOT__rExec[52] = 1U;
    __Vtable1___PVT__core__DOT__rExec[53] = 1U;
    __Vtable1___PVT__core__DOT__rExec[54] = 1U;
    __Vtable1___PVT__core__DOT__rExec[55] = 1U;
    __Vtable1___PVT__core__DOT__rExec[56] = 1U;
    __Vtable1___PVT__core__DOT__rExec[57] = 0U;
    __Vtable1___PVT__core__DOT__rExec[58] = 1U;
    __Vtable1___PVT__core__DOT__rExec[59] = 0U;
    __Vtable1___PVT__core__DOT__rExec[60] = 1U;
    __Vtable1___PVT__core__DOT__rExec[61] = 1U;
    __Vtable1___PVT__core__DOT__rExec[62] = 1U;
    __Vtable1___PVT__core__DOT__rExec[63] = 0U;
    __Vtable1___PVT__core__DOT__rExec[64] = 1U;
    __Vtable1___PVT__core__DOT__rExec[65] = 1U;
    __Vtable1___PVT__core__DOT__rExec[66] = 1U;
    __Vtable1___PVT__core__DOT__rExec[67] = 0U;
    __Vtable1___PVT__core__DOT__rExec[68] = 1U;
    __Vtable1___PVT__core__DOT__rExec[69] = 1U;
    __Vtable1___PVT__core__DOT__rExec[70] = 1U;
    __Vtable1___PVT__core__DOT__rExec[71] = 1U;
    __Vtable1___PVT__core__DOT__rExec[72] = 1U;
    __Vtable1___PVT__core__DOT__rExec[73] = 0U;
    __Vtable1___PVT__core__DOT__rExec[74] = 1U;
    __Vtable1___PVT__core__DOT__rExec[75] = 0U;
    __Vtable1___PVT__core__DOT__rExec[76] = 1U;
    __Vtable1___PVT__core__DOT__rExec[77] = 1U;
    __Vtable1___PVT__core__DOT__rExec[78] = 1U;
    __Vtable1___PVT__core__DOT__rExec[79] = 0U;
    __Vtable1___PVT__core__DOT__rExec[80] = 1U;
    __Vtable1___PVT__core__DOT__rExec[81] = 1U;
    __Vtable1___PVT__core__DOT__rExec[82] = 1U;
    __Vtable1___PVT__core__DOT__rExec[83] = 1U;
    __Vtable1___PVT__core__DOT__rExec[84] = 1U;
    __Vtable1___PVT__core__DOT__rExec[85] = 0U;
    __Vtable1___PVT__core__DOT__rExec[86] = 1U;
    __Vtable1___PVT__core__DOT__rExec[87] = 1U;
    __Vtable1___PVT__core__DOT__rExec[88] = 1U;
    __Vtable1___PVT__core__DOT__rExec[89] = 0U;
    __Vtable1___PVT__core__DOT__rExec[90] = 1U;
    __Vtable1___PVT__core__DOT__rExec[91] = 1U;
    __Vtable1___PVT__core__DOT__rExec[92] = 1U;
    __Vtable1___PVT__core__DOT__rExec[93] = 0U;
    __Vtable1___PVT__core__DOT__rExec[94] = 1U;
    __Vtable1___PVT__core__DOT__rExec[95] = 0U;
    __Vtable1___PVT__core__DOT__rExec[96] = 1U;
    __Vtable1___PVT__core__DOT__rExec[97] = 1U;
    __Vtable1___PVT__core__DOT__rExec[98] = 1U;
    __Vtable1___PVT__core__DOT__rExec[99] = 1U;
    __Vtable1___PVT__core__DOT__rExec[100] = 1U;
    __Vtable1___PVT__core__DOT__rExec[101] = 0U;
    __Vtable1___PVT__core__DOT__rExec[102] = 1U;
    __Vtable1___PVT__core__DOT__rExec[103] = 1U;
    __Vtable1___PVT__core__DOT__rExec[104] = 1U;
    __Vtable1___PVT__core__DOT__rExec[105] = 0U;
    __Vtable1___PVT__core__DOT__rExec[106] = 1U;
    __Vtable1___PVT__core__DOT__rExec[107] = 0U;
    __Vtable1___PVT__core__DOT__rExec[108] = 1U;
    __Vtable1___PVT__core__DOT__rExec[109] = 1U;
    __Vtable1___PVT__core__DOT__rExec[110] = 1U;
    __Vtable1___PVT__core__DOT__rExec[111] = 0U;
    __Vtable1___PVT__core__DOT__rExec[112] = 1U;
    __Vtable1___PVT__core__DOT__rExec[113] = 1U;
    __Vtable1___PVT__core__DOT__rExec[114] = 1U;
    __Vtable1___PVT__core__DOT__rExec[115] = 0U;
    __Vtable1___PVT__core__DOT__rExec[116] = 1U;
    __Vtable1___PVT__core__DOT__rExec[117] = 1U;
    __Vtable1___PVT__core__DOT__rExec[118] = 1U;
    __Vtable1___PVT__core__DOT__rExec[119] = 1U;
    __Vtable1___PVT__core__DOT__rExec[120] = 1U;
    __Vtable1___PVT__core__DOT__rExec[121] = 0U;
    __Vtable1___PVT__core__DOT__rExec[122] = 1U;
    __Vtable1___PVT__core__DOT__rExec[123] = 0U;
    __Vtable1___PVT__core__DOT__rExec[124] = 1U;
    __Vtable1___PVT__core__DOT__rExec[125] = 1U;
    __Vtable1___PVT__core__DOT__rExec[126] = 1U;
    __Vtable1___PVT__core__DOT__rExec[127] = 0U;
    __Vtable1___PVT__core__DOT__rExec[128] = 1U;
    __Vtable1___PVT__core__DOT__rExec[129] = 1U;
    __Vtable1___PVT__core__DOT__rExec[130] = 1U;
    __Vtable1___PVT__core__DOT__rExec[131] = 0U;
    __Vtable1___PVT__core__DOT__rExec[132] = 1U;
    __Vtable1___PVT__core__DOT__rExec[133] = 1U;
    __Vtable1___PVT__core__DOT__rExec[134] = 1U;
    __Vtable1___PVT__core__DOT__rExec[135] = 0U;
    __Vtable1___PVT__core__DOT__rExec[136] = 1U;
    __Vtable1___PVT__core__DOT__rExec[137] = 1U;
    __Vtable1___PVT__core__DOT__rExec[138] = 1U;
    __Vtable1___PVT__core__DOT__rExec[139] = 1U;
    __Vtable1___PVT__core__DOT__rExec[140] = 1U;
    __Vtable1___PVT__core__DOT__rExec[141] = 0U;
    __Vtable1___PVT__core__DOT__rExec[142] = 1U;
    __Vtable1___PVT__core__DOT__rExec[143] = 0U;
    __Vtable1___PVT__core__DOT__rExec[144] = 1U;
    __Vtable1___PVT__core__DOT__rExec[145] = 1U;
    __Vtable1___PVT__core__DOT__rExec[146] = 1U;
    __Vtable1___PVT__core__DOT__rExec[147] = 0U;
    __Vtable1___PVT__core__DOT__rExec[148] = 1U;
    __Vtable1___PVT__core__DOT__rExec[149] = 1U;
    __Vtable1___PVT__core__DOT__rExec[150] = 1U;
    __Vtable1___PVT__core__DOT__rExec[151] = 0U;
    __Vtable1___PVT__core__DOT__rExec[152] = 1U;
    __Vtable1___PVT__core__DOT__rExec[153] = 1U;
    __Vtable1___PVT__core__DOT__rExec[154] = 1U;
    __Vtable1___PVT__core__DOT__rExec[155] = 0U;
    __Vtable1___PVT__core__DOT__rExec[156] = 1U;
    __Vtable1___PVT__core__DOT__rExec[157] = 1U;
    __Vtable1___PVT__core__DOT__rExec[158] = 1U;
    __Vtable1___PVT__core__DOT__rExec[159] = 0U;
    __Vtable1___PVT__core__DOT__rExec[160] = 1U;
    __Vtable1___PVT__core__DOT__rExec[161] = 1U;
    __Vtable1___PVT__core__DOT__rExec[162] = 1U;
    __Vtable1___PVT__core__DOT__rExec[163] = 1U;
    __Vtable1___PVT__core__DOT__rExec[164] = 1U;
    __Vtable1___PVT__core__DOT__rExec[165] = 0U;
    __Vtable1___PVT__core__DOT__rExec[166] = 1U;
    __Vtable1___PVT__core__DOT__rExec[167] = 0U;
    __Vtable1___PVT__core__DOT__rExec[168] = 1U;
    __Vtable1___PVT__core__DOT__rExec[169] = 1U;
    __Vtable1___PVT__core__DOT__rExec[170] = 1U;
    __Vtable1___PVT__core__DOT__rExec[171] = 1U;
    __Vtable1___PVT__core__DOT__rExec[172] = 1U;
    __Vtable1___PVT__core__DOT__rExec[173] = 0U;
    __Vtable1___PVT__core__DOT__rExec[174] = 1U;
    __Vtable1___PVT__core__DOT__rExec[175] = 0U;
    __Vtable1___PVT__core__DOT__rExec[176] = 1U;
    __Vtable1___PVT__core__DOT__rExec[177] = 1U;
    __Vtable1___PVT__core__DOT__rExec[178] = 1U;
    __Vtable1___PVT__core__DOT__rExec[179] = 0U;
    __Vtable1___PVT__core__DOT__rExec[180] = 1U;
    __Vtable1___PVT__core__DOT__rExec[181] = 1U;
    __Vtable1___PVT__core__DOT__rExec[182] = 1U;
    __Vtable1___PVT__core__DOT__rExec[183] = 0U;
    __Vtable1___PVT__core__DOT__rExec[184] = 1U;
    __Vtable1___PVT__core__DOT__rExec[185] = 1U;
    __Vtable1___PVT__core__DOT__rExec[186] = 1U;
    __Vtable1___PVT__core__DOT__rExec[187] = 0U;
    __Vtable1___PVT__core__DOT__rExec[188] = 1U;
    __Vtable1___PVT__core__DOT__rExec[189] = 1U;
    __Vtable1___PVT__core__DOT__rExec[190] = 1U;
    __Vtable1___PVT__core__DOT__rExec[191] = 0U;
    __Vtable1___PVT__core__DOT__rExec[192] = 1U;
    __Vtable1___PVT__core__DOT__rExec[193] = 1U;
    __Vtable1___PVT__core__DOT__rExec[194] = 1U;
    __Vtable1___PVT__core__DOT__rExec[195] = 0U;
    __Vtable1___PVT__core__DOT__rExec[196] = 1U;
    __Vtable1___PVT__core__DOT__rExec[197] = 1U;
    __Vtable1___PVT__core__DOT__rExec[198] = 1U;
    __Vtable1___PVT__core__DOT__rExec[199] = 1U;
    __Vtable1___PVT__core__DOT__rExec[200] = 1U;
    __Vtable1___PVT__core__DOT__rExec[201] = 0U;
    __Vtable1___PVT__core__DOT__rExec[202] = 1U;
    __Vtable1___PVT__core__DOT__rExec[203] = 1U;
    __Vtable1___PVT__core__DOT__rExec[204] = 1U;
    __Vtable1___PVT__core__DOT__rExec[205] = 0U;
    __Vtable1___PVT__core__DOT__rExec[206] = 1U;
    __Vtable1___PVT__core__DOT__rExec[207] = 0U;
    __Vtable1___PVT__core__DOT__rExec[208] = 1U;
    __Vtable1___PVT__core__DOT__rExec[209] = 1U;
    __Vtable1___PVT__core__DOT__rExec[210] = 1U;
    __Vtable1___PVT__core__DOT__rExec[211] = 1U;
    __Vtable1___PVT__core__DOT__rExec[212] = 1U;
    __Vtable1___PVT__core__DOT__rExec[213] = 0U;
    __Vtable1___PVT__core__DOT__rExec[214] = 1U;
    __Vtable1___PVT__core__DOT__rExec[215] = 0U;
    __Vtable1___PVT__core__DOT__rExec[216] = 1U;
    __Vtable1___PVT__core__DOT__rExec[217] = 1U;
    __Vtable1___PVT__core__DOT__rExec[218] = 1U;
    __Vtable1___PVT__core__DOT__rExec[219] = 0U;
    __Vtable1___PVT__core__DOT__rExec[220] = 1U;
    __Vtable1___PVT__core__DOT__rExec[221] = 1U;
    __Vtable1___PVT__core__DOT__rExec[222] = 1U;
    __Vtable1___PVT__core__DOT__rExec[223] = 0U;
    __Vtable1___PVT__core__DOT__rExec[224] = 1U;
    __Vtable1___PVT__core__DOT__rExec[225] = 1U;
    __Vtable1___PVT__core__DOT__rExec[226] = 1U;
    __Vtable1___PVT__core__DOT__rExec[227] = 1U;
    __Vtable1___PVT__core__DOT__rExec[228] = 1U;
    __Vtable1___PVT__core__DOT__rExec[229] = 0U;
    __Vtable1___PVT__core__DOT__rExec[230] = 1U;
    __Vtable1___PVT__core__DOT__rExec[231] = 1U;
    __Vtable1___PVT__core__DOT__rExec[232] = 1U;
    __Vtable1___PVT__core__DOT__rExec[233] = 0U;
    __Vtable1___PVT__core__DOT__rExec[234] = 1U;
    __Vtable1___PVT__core__DOT__rExec[235] = 1U;
    __Vtable1___PVT__core__DOT__rExec[236] = 1U;
    __Vtable1___PVT__core__DOT__rExec[237] = 0U;
    __Vtable1___PVT__core__DOT__rExec[238] = 1U;
    __Vtable1___PVT__core__DOT__rExec[239] = 0U;
    __Vtable1___PVT__core__DOT__rExec[240] = 1U;
    __Vtable1___PVT__core__DOT__rExec[241] = 1U;
    __Vtable1___PVT__core__DOT__rExec[242] = 1U;
    __Vtable1___PVT__core__DOT__rExec[243] = 0U;
    __Vtable1___PVT__core__DOT__rExec[244] = 1U;
    __Vtable1___PVT__core__DOT__rExec[245] = 1U;
    __Vtable1___PVT__core__DOT__rExec[246] = 1U;
    __Vtable1___PVT__core__DOT__rExec[247] = 0U;
    __Vtable1___PVT__core__DOT__rExec[248] = 1U;
    __Vtable1___PVT__core__DOT__rExec[249] = 1U;
    __Vtable1___PVT__core__DOT__rExec[250] = 1U;
    __Vtable1___PVT__core__DOT__rExec[251] = 0U;
    __Vtable1___PVT__core__DOT__rExec[252] = 1U;
    __Vtable1___PVT__core__DOT__rExec[253] = 1U;
    __Vtable1___PVT__core__DOT__rExec[254] = 1U;
    __Vtable1___PVT__core__DOT__rExec[255] = 0U;
    __Vtable1___PVT__core__DOT__rExec[256] = 1U;
    __Vtable1___PVT__core__DOT__rExec[257] = 1U;
    __Vtable1___PVT__core__DOT__rExec[258] = 1U;
    __Vtable1___PVT__core__DOT__rExec[259] = 0U;
    __Vtable1___PVT__core__DOT__rExec[260] = 1U;
    __Vtable1___PVT__core__DOT__rExec[261] = 1U;
    __Vtable1___PVT__core__DOT__rExec[262] = 1U;
    __Vtable1___PVT__core__DOT__rExec[263] = 0U;
    __Vtable1___PVT__core__DOT__rExec[264] = 1U;
    __Vtable1___PVT__core__DOT__rExec[265] = 1U;
    __Vtable1___PVT__core__DOT__rExec[266] = 1U;
    __Vtable1___PVT__core__DOT__rExec[267] = 0U;
    __Vtable1___PVT__core__DOT__rExec[268] = 1U;
    __Vtable1___PVT__core__DOT__rExec[269] = 1U;
    __Vtable1___PVT__core__DOT__rExec[270] = 1U;
    __Vtable1___PVT__core__DOT__rExec[271] = 1U;
    __Vtable1___PVT__core__DOT__rExec[272] = 1U;
    __Vtable1___PVT__core__DOT__rExec[273] = 0U;
    __Vtable1___PVT__core__DOT__rExec[274] = 1U;
    __Vtable1___PVT__core__DOT__rExec[275] = 0U;
    __Vtable1___PVT__core__DOT__rExec[276] = 1U;
    __Vtable1___PVT__core__DOT__rExec[277] = 1U;
    __Vtable1___PVT__core__DOT__rExec[278] = 1U;
    __Vtable1___PVT__core__DOT__rExec[279] = 0U;
    __Vtable1___PVT__core__DOT__rExec[280] = 1U;
    __Vtable1___PVT__core__DOT__rExec[281] = 1U;
    __Vtable1___PVT__core__DOT__rExec[282] = 1U;
    __Vtable1___PVT__core__DOT__rExec[283] = 0U;
    __Vtable1___PVT__core__DOT__rExec[284] = 1U;
    __Vtable1___PVT__core__DOT__rExec[285] = 1U;
    __Vtable1___PVT__core__DOT__rExec[286] = 1U;
    __Vtable1___PVT__core__DOT__rExec[287] = 0U;
    __Vtable1___PVT__core__DOT__rExec[288] = 1U;
    __Vtable1___PVT__core__DOT__rExec[289] = 1U;
    __Vtable1___PVT__core__DOT__rExec[290] = 1U;
    __Vtable1___PVT__core__DOT__rExec[291] = 1U;
    __Vtable1___PVT__core__DOT__rExec[292] = 1U;
    __Vtable1___PVT__core__DOT__rExec[293] = 0U;
    __Vtable1___PVT__core__DOT__rExec[294] = 1U;
    __Vtable1___PVT__core__DOT__rExec[295] = 0U;
    __Vtable1___PVT__core__DOT__rExec[296] = 1U;
    __Vtable1___PVT__core__DOT__rExec[297] = 1U;
    __Vtable1___PVT__core__DOT__rExec[298] = 1U;
    __Vtable1___PVT__core__DOT__rExec[299] = 0U;
    __Vtable1___PVT__core__DOT__rExec[300] = 1U;
    __Vtable1___PVT__core__DOT__rExec[301] = 1U;
    __Vtable1___PVT__core__DOT__rExec[302] = 1U;
    __Vtable1___PVT__core__DOT__rExec[303] = 1U;
    __Vtable1___PVT__core__DOT__rExec[304] = 1U;
    __Vtable1___PVT__core__DOT__rExec[305] = 0U;
    __Vtable1___PVT__core__DOT__rExec[306] = 1U;
    __Vtable1___PVT__core__DOT__rExec[307] = 0U;
    __Vtable1___PVT__core__DOT__rExec[308] = 1U;
    __Vtable1___PVT__core__DOT__rExec[309] = 1U;
    __Vtable1___PVT__core__DOT__rExec[310] = 1U;
    __Vtable1___PVT__core__DOT__rExec[311] = 0U;
    __Vtable1___PVT__core__DOT__rExec[312] = 1U;
    __Vtable1___PVT__core__DOT__rExec[313] = 1U;
    __Vtable1___PVT__core__DOT__rExec[314] = 1U;
    __Vtable1___PVT__core__DOT__rExec[315] = 0U;
    __Vtable1___PVT__core__DOT__rExec[316] = 1U;
    __Vtable1___PVT__core__DOT__rExec[317] = 1U;
    __Vtable1___PVT__core__DOT__rExec[318] = 1U;
    __Vtable1___PVT__core__DOT__rExec[319] = 0U;
    __Vtable1___PVT__core__DOT__rExec[320] = 1U;
    __Vtable1___PVT__core__DOT__rExec[321] = 1U;
    __Vtable1___PVT__core__DOT__rExec[322] = 1U;
    __Vtable1___PVT__core__DOT__rExec[323] = 0U;
    __Vtable1___PVT__core__DOT__rExec[324] = 1U;
    __Vtable1___PVT__core__DOT__rExec[325] = 1U;
    __Vtable1___PVT__core__DOT__rExec[326] = 1U;
    __Vtable1___PVT__core__DOT__rExec[327] = 1U;
    __Vtable1___PVT__core__DOT__rExec[328] = 1U;
    __Vtable1___PVT__core__DOT__rExec[329] = 0U;
    __Vtable1___PVT__core__DOT__rExec[330] = 1U;
    __Vtable1___PVT__core__DOT__rExec[331] = 0U;
    __Vtable1___PVT__core__DOT__rExec[332] = 1U;
    __Vtable1___PVT__core__DOT__rExec[333] = 1U;
    __Vtable1___PVT__core__DOT__rExec[334] = 1U;
    __Vtable1___PVT__core__DOT__rExec[335] = 1U;
    __Vtable1___PVT__core__DOT__rExec[336] = 1U;
    __Vtable1___PVT__core__DOT__rExec[337] = 0U;
    __Vtable1___PVT__core__DOT__rExec[338] = 1U;
    __Vtable1___PVT__core__DOT__rExec[339] = 1U;
    __Vtable1___PVT__core__DOT__rExec[340] = 1U;
    __Vtable1___PVT__core__DOT__rExec[341] = 0U;
    __Vtable1___PVT__core__DOT__rExec[342] = 1U;
    __Vtable1___PVT__core__DOT__rExec[343] = 0U;
    __Vtable1___PVT__core__DOT__rExec[344] = 1U;
    __Vtable1___PVT__core__DOT__rExec[345] = 1U;
    __Vtable1___PVT__core__DOT__rExec[346] = 1U;
    __Vtable1___PVT__core__DOT__rExec[347] = 0U;
    __Vtable1___PVT__core__DOT__rExec[348] = 1U;
    __Vtable1___PVT__core__DOT__rExec[349] = 1U;
    __Vtable1___PVT__core__DOT__rExec[350] = 1U;
    __Vtable1___PVT__core__DOT__rExec[351] = 0U;
    __Vtable1___PVT__core__DOT__rExec[352] = 1U;
    __Vtable1___PVT__core__DOT__rExec[353] = 1U;
    __Vtable1___PVT__core__DOT__rExec[354] = 1U;
    __Vtable1___PVT__core__DOT__rExec[355] = 1U;
    __Vtable1___PVT__core__DOT__rExec[356] = 1U;
    __Vtable1___PVT__core__DOT__rExec[357] = 0U;
    __Vtable1___PVT__core__DOT__rExec[358] = 1U;
    __Vtable1___PVT__core__DOT__rExec[359] = 1U;
    __Vtable1___PVT__core__DOT__rExec[360] = 1U;
    __Vtable1___PVT__core__DOT__rExec[361] = 0U;
    __Vtable1___PVT__core__DOT__rExec[362] = 1U;
    __Vtable1___PVT__core__DOT__rExec[363] = 0U;
    __Vtable1___PVT__core__DOT__rExec[364] = 1U;
    __Vtable1___PVT__core__DOT__rExec[365] = 1U;
    __Vtable1___PVT__core__DOT__rExec[366] = 1U;
    __Vtable1___PVT__core__DOT__rExec[367] = 1U;
    __Vtable1___PVT__core__DOT__rExec[368] = 1U;
    __Vtable1___PVT__core__DOT__rExec[369] = 0U;
    __Vtable1___PVT__core__DOT__rExec[370] = 1U;
    __Vtable1___PVT__core__DOT__rExec[371] = 0U;
    __Vtable1___PVT__core__DOT__rExec[372] = 1U;
    __Vtable1___PVT__core__DOT__rExec[373] = 1U;
    __Vtable1___PVT__core__DOT__rExec[374] = 1U;
    __Vtable1___PVT__core__DOT__rExec[375] = 0U;
    __Vtable1___PVT__core__DOT__rExec[376] = 1U;
    __Vtable1___PVT__core__DOT__rExec[377] = 1U;
    __Vtable1___PVT__core__DOT__rExec[378] = 1U;
    __Vtable1___PVT__core__DOT__rExec[379] = 0U;
    __Vtable1___PVT__core__DOT__rExec[380] = 1U;
    __Vtable1___PVT__core__DOT__rExec[381] = 1U;
    __Vtable1___PVT__core__DOT__rExec[382] = 1U;
    __Vtable1___PVT__core__DOT__rExec[383] = 0U;
    __Vtable1___PVT__core__DOT__rExec[384] = 1U;
    __Vtable1___PVT__core__DOT__rExec[385] = 1U;
    __Vtable1___PVT__core__DOT__rExec[386] = 1U;
    __Vtable1___PVT__core__DOT__rExec[387] = 0U;
    __Vtable1___PVT__core__DOT__rExec[388] = 1U;
    __Vtable1___PVT__core__DOT__rExec[389] = 1U;
    __Vtable1___PVT__core__DOT__rExec[390] = 1U;
    __Vtable1___PVT__core__DOT__rExec[391] = 0U;
    __Vtable1___PVT__core__DOT__rExec[392] = 1U;
    __Vtable1___PVT__core__DOT__rExec[393] = 1U;
    __Vtable1___PVT__core__DOT__rExec[394] = 1U;
    __Vtable1___PVT__core__DOT__rExec[395] = 1U;
    __Vtable1___PVT__core__DOT__rExec[396] = 1U;
    __Vtable1___PVT__core__DOT__rExec[397] = 0U;
    __Vtable1___PVT__core__DOT__rExec[398] = 1U;
    __Vtable1___PVT__core__DOT__rExec[399] = 1U;
    __Vtable1___PVT__core__DOT__rExec[400] = 1U;
    __Vtable1___PVT__core__DOT__rExec[401] = 0U;
    __Vtable1___PVT__core__DOT__rExec[402] = 1U;
    __Vtable1___PVT__core__DOT__rExec[403] = 0U;
    __Vtable1___PVT__core__DOT__rExec[404] = 1U;
    __Vtable1___PVT__core__DOT__rExec[405] = 1U;
    __Vtable1___PVT__core__DOT__rExec[406] = 1U;
    __Vtable1___PVT__core__DOT__rExec[407] = 1U;
    __Vtable1___PVT__core__DOT__rExec[408] = 1U;
    __Vtable1___PVT__core__DOT__rExec[409] = 0U;
    __Vtable1___PVT__core__DOT__rExec[410] = 1U;
    __Vtable1___PVT__core__DOT__rExec[411] = 1U;
    __Vtable1___PVT__core__DOT__rExec[412] = 1U;
    __Vtable1___PVT__core__DOT__rExec[413] = 0U;
    __Vtable1___PVT__core__DOT__rExec[414] = 1U;
    __Vtable1___PVT__core__DOT__rExec[415] = 0U;
    __Vtable1___PVT__core__DOT__rExec[416] = 1U;
    __Vtable1___PVT__core__DOT__rExec[417] = 1U;
    __Vtable1___PVT__core__DOT__rExec[418] = 1U;
    __Vtable1___PVT__core__DOT__rExec[419] = 1U;
    __Vtable1___PVT__core__DOT__rExec[420] = 1U;
    __Vtable1___PVT__core__DOT__rExec[421] = 0U;
    __Vtable1___PVT__core__DOT__rExec[422] = 1U;
    __Vtable1___PVT__core__DOT__rExec[423] = 0U;
    __Vtable1___PVT__core__DOT__rExec[424] = 1U;
    __Vtable1___PVT__core__DOT__rExec[425] = 1U;
    __Vtable1___PVT__core__DOT__rExec[426] = 1U;
    __Vtable1___PVT__core__DOT__rExec[427] = 1U;
    __Vtable1___PVT__core__DOT__rExec[428] = 1U;
    __Vtable1___PVT__core__DOT__rExec[429] = 0U;
    __Vtable1___PVT__core__DOT__rExec[430] = 1U;
    __Vtable1___PVT__core__DOT__rExec[431] = 1U;
    __Vtable1___PVT__core__DOT__rExec[432] = 1U;
    __Vtable1___PVT__core__DOT__rExec[433] = 0U;
    __Vtable1___PVT__core__DOT__rExec[434] = 1U;
    __Vtable1___PVT__core__DOT__rExec[435] = 0U;
    __Vtable1___PVT__core__DOT__rExec[436] = 1U;
    __Vtable1___PVT__core__DOT__rExec[437] = 1U;
    __Vtable1___PVT__core__DOT__rExec[438] = 1U;
    __Vtable1___PVT__core__DOT__rExec[439] = 1U;
    __Vtable1___PVT__core__DOT__rExec[440] = 1U;
    __Vtable1___PVT__core__DOT__rExec[441] = 0U;
    __Vtable1___PVT__core__DOT__rExec[442] = 1U;
    __Vtable1___PVT__core__DOT__rExec[443] = 0U;
    __Vtable1___PVT__core__DOT__rExec[444] = 1U;
    __Vtable1___PVT__core__DOT__rExec[445] = 1U;
    __Vtable1___PVT__core__DOT__rExec[446] = 1U;
    __Vtable1___PVT__core__DOT__rExec[447] = 0U;
    __Vtable1___PVT__core__DOT__rExec[448] = 1U;
    __Vtable1___PVT__core__DOT__rExec[449] = 1U;
    __Vtable1___PVT__core__DOT__rExec[450] = 1U;
    __Vtable1___PVT__core__DOT__rExec[451] = 0U;
    __Vtable1___PVT__core__DOT__rExec[452] = 1U;
    __Vtable1___PVT__core__DOT__rExec[453] = 1U;
    __Vtable1___PVT__core__DOT__rExec[454] = 1U;
    __Vtable1___PVT__core__DOT__rExec[455] = 1U;
    __Vtable1___PVT__core__DOT__rExec[456] = 1U;
    __Vtable1___PVT__core__DOT__rExec[457] = 0U;
    __Vtable1___PVT__core__DOT__rExec[458] = 1U;
    __Vtable1___PVT__core__DOT__rExec[459] = 1U;
    __Vtable1___PVT__core__DOT__rExec[460] = 1U;
    __Vtable1___PVT__core__DOT__rExec[461] = 0U;
    __Vtable1___PVT__core__DOT__rExec[462] = 1U;
    __Vtable1___PVT__core__DOT__rExec[463] = 1U;
    __Vtable1___PVT__core__DOT__rExec[464] = 1U;
    __Vtable1___PVT__core__DOT__rExec[465] = 0U;
    __Vtable1___PVT__core__DOT__rExec[466] = 1U;
    __Vtable1___PVT__core__DOT__rExec[467] = 1U;
    __Vtable1___PVT__core__DOT__rExec[468] = 1U;
    __Vtable1___PVT__core__DOT__rExec[469] = 0U;
    __Vtable1___PVT__core__DOT__rExec[470] = 1U;
    __Vtable1___PVT__core__DOT__rExec[471] = 1U;
    __Vtable1___PVT__core__DOT__rExec[472] = 1U;
    __Vtable1___PVT__core__DOT__rExec[473] = 0U;
    __Vtable1___PVT__core__DOT__rExec[474] = 1U;
    __Vtable1___PVT__core__DOT__rExec[475] = 1U;
    __Vtable1___PVT__core__DOT__rExec[476] = 1U;
    __Vtable1___PVT__core__DOT__rExec[477] = 0U;
    __Vtable1___PVT__core__DOT__rExec[478] = 1U;
    __Vtable1___PVT__core__DOT__rExec[479] = 0U;
    __Vtable1___PVT__core__DOT__rExec[480] = 1U;
    __Vtable1___PVT__core__DOT__rExec[481] = 1U;
    __Vtable1___PVT__core__DOT__rExec[482] = 1U;
    __Vtable1___PVT__core__DOT__rExec[483] = 1U;
    __Vtable1___PVT__core__DOT__rExec[484] = 1U;
    __Vtable1___PVT__core__DOT__rExec[485] = 0U;
    __Vtable1___PVT__core__DOT__rExec[486] = 1U;
    __Vtable1___PVT__core__DOT__rExec[487] = 1U;
    __Vtable1___PVT__core__DOT__rExec[488] = 1U;
    __Vtable1___PVT__core__DOT__rExec[489] = 0U;
    __Vtable1___PVT__core__DOT__rExec[490] = 1U;
    __Vtable1___PVT__core__DOT__rExec[491] = 1U;
    __Vtable1___PVT__core__DOT__rExec[492] = 1U;
    __Vtable1___PVT__core__DOT__rExec[493] = 0U;
    __Vtable1___PVT__core__DOT__rExec[494] = 1U;
    __Vtable1___PVT__core__DOT__rExec[495] = 1U;
    __Vtable1___PVT__core__DOT__rExec[496] = 1U;
    __Vtable1___PVT__core__DOT__rExec[497] = 0U;
    __Vtable1___PVT__core__DOT__rExec[498] = 1U;
    __Vtable1___PVT__core__DOT__rExec[499] = 0U;
    __Vtable1___PVT__core__DOT__rExec[500] = 1U;
    __Vtable1___PVT__core__DOT__rExec[501] = 1U;
    __Vtable1___PVT__core__DOT__rExec[502] = 1U;
    __Vtable1___PVT__core__DOT__rExec[503] = 1U;
    __Vtable1___PVT__core__DOT__rExec[504] = 1U;
    __Vtable1___PVT__core__DOT__rExec[505] = 0U;
    __Vtable1___PVT__core__DOT__rExec[506] = 1U;
    __Vtable1___PVT__core__DOT__rExec[507] = 0U;
    __Vtable1___PVT__core__DOT__rExec[508] = 1U;
    __Vtable1___PVT__core__DOT__rExec[509] = 1U;
    __Vtable1___PVT__core__DOT__rExec[510] = 1U;
    __Vtable1___PVT__core__DOT__rExec[511] = 0U;
    __Vdly__clock__DOT__rClockSplit = VL_RAND_RESET_I(2);
    __Vdly__core__DOT__rPipeState = VL_RAND_RESET_I(4);
    __Vdlyvdim0__core__DOT__registers__DOT__rContents__v0 = VL_RAND_RESET_I(8);
    __Vdlyvval__core__DOT__registers__DOT__rContents__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__core__DOT__registers__DOT__rContents__v0 = VL_RAND_RESET_I(1);
    __Vdlyvdim0__core__DOT__registers__DOT__rContents__v1 = VL_RAND_RESET_I(8);
    __Vdlyvval__core__DOT__registers__DOT__rContents__v1 = VL_RAND_RESET_I(32);
    __Vdlyvset__core__DOT__registers__DOT__rContents__v1 = VL_RAND_RESET_I(1);
    __Vdly__core__DOT__rRegIP = VL_RAND_RESET_I(32);
    __Vdly__core__DOT__rRegSP = VL_RAND_RESET_I(32);
    __Vdly__core__DOT__rRegCS = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(96,__Vdly__core__DOT__rRegInterruptStack);
}

void VepRISC_coreEmu_epRISC_machine::_configure_coverage(VepRISC_coreEmu__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("        VepRISC_coreEmu_epRISC_machine::_configure_coverage\n"); );
}
