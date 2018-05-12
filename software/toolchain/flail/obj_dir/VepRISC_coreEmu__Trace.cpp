// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VepRISC_coreEmu__Syms.h"


//======================

void VepRISC_coreEmu::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VepRISC_coreEmu* t=(VepRISC_coreEmu*)userthis;
    VepRISC_coreEmu__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VepRISC_coreEmu::traceChgThis(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (IData)(vlTOPp->__Vm_traceActivity)))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 1U)))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 5U)))))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((IData)(vlTOPp->__Vm_traceActivity) 
				 | (IData)((vlTOPp->__Vm_traceActivity 
					    >> 5U))) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0xbU))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0xfU)))))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((IData)(vlTOPp->__Vm_traceActivity) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 5U))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0xfU)))))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((((IData)(vlTOPp->__Vm_traceActivity) 
				 | (IData)((vlTOPp->__Vm_traceActivity 
					    >> 8U))) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0xeU))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x17U)))))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0xbU)))))) {
	    vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((IData)(vlTOPp->__Vm_traceActivity) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0xbU))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x17U)))))) {
	    vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((IData)(vlTOPp->__Vm_traceActivity) 
				  | (IData)((vlTOPp->__Vm_traceActivity 
					     >> 0xbU))) 
				 | (IData)((vlTOPp->__Vm_traceActivity 
					    >> 0x17U))) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0x22U))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x26U)))))) {
	    vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (((((IData)(vlTOPp->__Vm_traceActivity) 
				  | (IData)((vlTOPp->__Vm_traceActivity 
					     >> 0xdU))) 
				 | (IData)((vlTOPp->__Vm_traceActivity 
					    >> 0x12U))) 
				| (IData)((vlTOPp->__Vm_traceActivity 
					   >> 0x13U))) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x17U)))))) {
	    vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0xfU)))))) {
	    vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x10U)))))) {
	    vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x11U)))))) {
	    vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x17U)))))) {
	    vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x18U)))))) {
	    vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x19U)))))) {
	    vlTOPp->traceChgThis__17(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x1cU)))))) {
	    vlTOPp->traceChgThis__18(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x1dU)))))) {
	    vlTOPp->traceChgThis__19(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x1eU)))))) {
	    vlTOPp->traceChgThis__20(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x1fU)))))) {
	    vlTOPp->traceChgThis__21(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x22U)))))) {
	    vlTOPp->traceChgThis__22(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x23U)))))) {
	    vlTOPp->traceChgThis__23(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x24U)))))) {
	    vlTOPp->traceChgThis__24(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x25U)))))) {
	    vlTOPp->traceChgThis__25(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x26U)))))) {
	    vlTOPp->traceChgThis__26(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x27U)))))) {
	    vlTOPp->traceChgThis__27(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)(vlTOPp->__Vm_traceActivity) 
			       | (IData)((vlTOPp->__Vm_traceActivity 
					  >> 0x28U)))))) {
	    vlTOPp->traceChgThis__28(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 1U))))) {
	    vlTOPp->traceChgThis__29(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 2U))))) {
	    vlTOPp->traceChgThis__30(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 3U))))) {
	    vlTOPp->traceChgThis__31(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 4U))))) {
	    vlTOPp->traceChgThis__32(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 5U))))) {
	    vlTOPp->traceChgThis__33(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 6U))))) {
	    vlTOPp->traceChgThis__34(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 7U))))) {
	    vlTOPp->traceChgThis__35(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 8U))))) {
	    vlTOPp->traceChgThis__36(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 9U))))) {
	    vlTOPp->traceChgThis__37(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0xaU))))) {
	    vlTOPp->traceChgThis__38(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0xbU))))) {
	    vlTOPp->traceChgThis__39(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0xcU))))) {
	    vlTOPp->traceChgThis__40(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0xdU))))) {
	    vlTOPp->traceChgThis__41(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & ((IData)((vlTOPp->__Vm_traceActivity 
					>> 0xdU)) | (IData)(
							    (vlTOPp->__Vm_traceActivity 
							     >> 0x13U)))))) {
	    vlTOPp->traceChgThis__42(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0xeU))))) {
	    vlTOPp->traceChgThis__43(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0xfU))))) {
	    vlTOPp->traceChgThis__44(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x12U))))) {
	    vlTOPp->traceChgThis__45(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x13U))))) {
	    vlTOPp->traceChgThis__46(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x14U))))) {
	    vlTOPp->traceChgThis__47(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x15U))))) {
	    vlTOPp->traceChgThis__48(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x16U))))) {
	    vlTOPp->traceChgThis__49(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x17U))))) {
	    vlTOPp->traceChgThis__50(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x1aU))))) {
	    vlTOPp->traceChgThis__51(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x1bU))))) {
	    vlTOPp->traceChgThis__52(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x1fU))))) {
	    vlTOPp->traceChgThis__53(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x20U))))) {
	    vlTOPp->traceChgThis__54(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (IData)((vlTOPp->__Vm_traceActivity 
				       >> 0x21U))))) {
	    vlTOPp->traceChgThis__55(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__56(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = VL_ULL(0);
}

void VepRISC_coreEmu::traceChgThis__2(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__rClr),9);
	vcdp->chgBus  (c+2,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vram__DOT__rClr),13);
    }
}

void VepRISC_coreEmu::traceChgThis__3(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+3,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__clock__DOT__rClockSplit),2);
	vcdp->chgBit  (c+4,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wSerialClock));
	vcdp->chgBit  (c+5,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wSPIClock));
	vcdp->chgBus  (c+6,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__clock__DOT__rClockSplit),7);
	vcdp->chgBus  (c+7,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vrom____pinNumber1),12);
    }
}

void VepRISC_coreEmu::traceChgThis__4(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+8,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rExec));
	vcdp->chgBus  (c+9,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrA),8);
	vcdp->chgBus  (c+10,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrB),8);
	vcdp->chgBus  (c+11,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrA),8);
	vcdp->chgBus  (c+12,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutAddrB),8);
	vcdp->chgBit  (c+13,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchSaveStack));
	vcdp->chgBit  (c+14,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchLoadStack));
	vcdp->chgBit  (c+15,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mBranchInterrupt));
	vcdp->chgBit  (c+16,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadLoad));
	vcdp->chgBit  (c+17,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mLoadStore));
	vcdp->chgBit  (c+18,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mDirectOR));
	vcdp->chgBit  (c+19,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__mALURegisters));
    }
}

void VepRISC_coreEmu::traceChgThis__5(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+20,((0xfU & (((((((((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)) 
					     | (2U 
						== (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
					    | (3U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
					   | (4U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
					  | (5U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
					 | (8U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
					| (7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))) 
				       | (6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState)))
				       ? ((1U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
					   ? 2U : (
						   (2U 
						    == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
						    ? 3U
						    : 
						   ((3U 
						     == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))
						     ? 4U
						     : 
						    ((4U 
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
					   ? 1U : 0U)))),4);
    }
}

void VepRISC_coreEmu::traceChgThis__6(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+21,((((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInAddrA)) 
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
    }
}

void VepRISC_coreEmu::traceChgThis__7(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+22,(((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableUART)
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
			        ? 0xffffU : 0U))),16);
    }
}

void VepRISC_coreEmu::traceChgThis__8(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+23,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber1),12);
    }
}

void VepRISC_coreEmu::traceChgThis__9(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+24,(((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableVideo)
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
					   : 0U)) & 
			      ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableVideo)
			        ? 0xffffU : 0U))),16);
    }
}

void VepRISC_coreEmu::traceChgThis__10(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+25,((((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite) 
				 | (0x10U <= (0x7fffU 
					      & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						 >> 0x10U))))
				 ? 0U : ((0U == (3U 
						 & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						    >> 0x10U)))
					  ? (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection)
					  : ((1U == 
					      (3U & 
					       (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
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
    }
}

void VepRISC_coreEmu::traceChgThis__11(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+26,(((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableSPI)
				 ? ((0U == (3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						  >> 0x10U)))
				     ? ((8U != (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
					 ? (0x80U | (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rControl))
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
					   : 0U)) & 
			      ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableSPI)
			        ? 0xffffU : 0U))),16);
    }
}

void VepRISC_coreEmu::traceChgThis__12(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+27,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAccess));
    }
}

void VepRISC_coreEmu::traceChgThis__13(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgQuad (c+28,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rALUOut),33);
	vcdp->chgBus  (c+30,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wALUOperation),5);
	vcdp->chgBus  (c+31,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutA),32);
    }
}

void VepRISC_coreEmu::traceChgThis__14(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+32,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusInB),32);
	vcdp->chgBit  (c+33,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteA));
	vcdp->chgBit  (c+34,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutWriteB));
	vcdp->chgBus  (c+35,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT____Vcellinp__registers____pinNumber1),8);
	vcdp->chgBus  (c+36,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT____Vcellinp__registers____pinNumber2),8);
    }
}

void VepRISC_coreEmu::traceChgThis__15(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+37,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableUART));
	vcdp->chgBit  (c+38,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableSPI));
	vcdp->chgBit  (c+39,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableVideo));
	vcdp->chgBit  (c+40,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wEnableRAM));
    }
}

void VepRISC_coreEmu::traceChgThis__16(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+41,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusData),32);
	vcdp->chgBit  (c+42,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bus____pinNumber2));
	vcdp->chgBus  (c+43,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataMOSI),32);
	vcdp->chgBus  (c+44,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataMISO),32);
	vcdp->chgBit  (c+45,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wInternalReset));
	vcdp->chgBus  (c+46,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvNextState),4);
	vcdp->chgBit  (c+47,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__tmpClock));
    }
}

void VepRISC_coreEmu::traceChgThis__17(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+48,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDistributionMOSI),32);
    }
}

void VepRISC_coreEmu::traceChgThis__18(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+49,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__registers__DOT__debug));
    }
}

void VepRISC_coreEmu::traceChgThis__19(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+50,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusOutB),32);
    }
}

void VepRISC_coreEmu::traceChgThis__20(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+51,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendNextState),4);
    }
}

void VepRISC_coreEmu::traceChgThis__21(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+52,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeNextState),5);
    }
}

void VepRISC_coreEmu::traceChgThis__22(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+53,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusWrite));
	vcdp->chgBit  (c+54,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusReset));
	vcdp->chgBus  (c+55,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__mBusData),16);
    }
}

void VepRISC_coreEmu::traceChgThis__23(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+56,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeNextState),5);
    }
}

void VepRISC_coreEmu::traceChgThis__24(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+57,(vlTOPp->epRISC_coreEmu__DOT__oBusMOSI),8);
    }
}

void VepRISC_coreEmu::traceChgThis__25(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+58,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite));
	vcdp->chgBit  (c+59,((1U & ((0x1000U > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)
				     ? 1U : 0U))));
	vcdp->chgBus  (c+60,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress),32);
	vcdp->chgBit  (c+61,((0x1000U > vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)));
	vcdp->chgBit  (c+62,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableRAM));
	vcdp->chgBit  (c+63,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableBusControl));
	vcdp->chgBit  (c+64,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableSDRAM));
	vcdp->chgBit  (c+65,((0x800000U <= vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)));
	vcdp->chgBit  (c+66,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableBusControl)
				     ? 1U : 0U))));
	vcdp->chgBus  (c+67,((0xfU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)),4);
	vcdp->chgBit  (c+68,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT____Vcellinp__bufferMISO____pinNumber7));
	vcdp->chgBit  (c+69,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT____Vcellinp__bufferMOSI____pinNumber7));
	vcdp->chgBus  (c+70,((0xfffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)),12);
	vcdp->chgBit  (c+71,(((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableRAM))));
	vcdp->chgBit  (c+72,(((IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusWrite) 
			      & (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wEnableSDRAM))));
	vcdp->chgBus  (c+73,((0x7fffffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusAddress)),23);
    }
}

void VepRISC_coreEmu::traceChgThis__26(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+74,(((vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__out0 
			       & vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__en0) 
			      & vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bmem__DOT__oData__out__en0)),32);
	vcdp->chgBit  (c+75,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT____Vcellinp__vram____pinNumber7));
    }
}

void VepRISC_coreEmu::traceChgThis__27(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+76,(vlTOPp->epRISC_coreEmu__DOT__iBusMISO),8);
	vcdp->chgBus  (c+77,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__wInternalMISO),16);
    }
}

void VepRISC_coreEmu::traceChgThis__28(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+78,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcram____pinNumber1));
	vcdp->chgBit  (c+79,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT____Vcellinp__bcsdram____pinNumber1));
    }
}

void VepRISC_coreEmu::traceChgThis__29(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+80,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusClock));
	vcdp->chgBit  (c+81,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__wCoreBusMemClock));
	vcdp->chgBus  (c+82,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRowSel),4);
	vcdp->chgBus  (c+83,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rDataOutput),8);
	vcdp->chgBus  (c+84,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColorOutput),8);
	vcdp->chgBus  (c+85,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX),10);
	vcdp->chgBus  (c+86,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY),10);
	vcdp->chgBus  (c+87,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempX),12);
	vcdp->chgBus  (c+88,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rTempY),12);
	vcdp->chgBus  (c+89,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rFramePtr),12);
	vcdp->chgBit  (c+90,((1U & (((0x23U <= (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY)) 
				     & (0x203U > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY)))
				     ? 1U : 0U))));
	vcdp->chgBit  (c+91,((1U & (((0xa0U <= (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX)) 
				     & (0x320U > (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX)))
				     ? 1U : 0U))));
	vcdp->chgBit  (c+92,((1U & ((1U & ((((0x23U 
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
	vcdp->chgBus  (c+93,((0xffU & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__wCharRAMFrame) 
				       >> 8U))),8);
	vcdp->chgBus  (c+94,((0xffU & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__wCharRAMFrame))),8);
	vcdp->chgBus  (c+95,((0xffU & (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rDataOut))),8);
	vcdp->chgBus  (c+96,((0x3ffU & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseX) 
					- (IData)(0xa0U)))),10);
	vcdp->chgBus  (c+97,((0x3ffU & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rPulseY) 
					- (IData)(0x23U)))),10);
	vcdp->chgBus  (c+98,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__wCharRAMFrame),16);
	vcdp->chgBit  (c+99,((1U & ((0x50U < (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rFramePtr))
				     ? 1U : 0U))));
	vcdp->chgBus  (c+100,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__vrom__DOT__rDataOut),16);
    }
}

void VepRISC_coreEmu::traceChgThis__30(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+101,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDirectMOSI),32);
    }
}

void VepRISC_coreEmu::traceChgThis__31(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+102,(vlTOPp->epRISC_coreEmu__DOT__oBusClock));
	vcdp->chgBus  (c+103,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbram__DOT__rDataOut),32);
	vcdp->chgBus  (c+104,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbsdram__DOT__rDataOut),32);
	vcdp->chgBit  (c+105,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDerivedClock));
	vcdp->chgBus  (c+106,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rMasterClockCount),12);
	vcdp->chgBus  (c+107,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataOutMISO),32);
	vcdp->chgBus  (c+108,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wDataOutMOSI),32);
	vcdp->chgBus  (c+109,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__tbrom__DOT__rDataOut),32);
    }
}

void VepRISC_coreEmu::traceChgThis__32(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+110,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipePrevState),4);
	vcdp->chgBus  (c+111,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusRegB),32);
    }
}

void VepRISC_coreEmu::traceChgThis__33(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+112,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegIP),32);
	vcdp->chgBus  (c+113,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegSP),32);
	vcdp->chgBus  (c+114,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS),32);
	vcdp->chgBus  (c+115,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegGL),32);
	vcdp->chgBus  (c+116,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegA),32);
	vcdp->chgBus  (c+117,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegB),32);
	vcdp->chgBus  (c+118,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegM),32);
	vcdp->chgQuad (c+119,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegR),33);
	vcdp->chgBus  (c+121,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst),32);
	vcdp->chgBus  (c+122,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptBase),32);
	vcdp->chgArray(c+123,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegInterruptStack),96);
	vcdp->chgBit  (c+126,((1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				     >> 0x1fU))));
	vcdp->chgBit  (c+127,(((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				>> 0x1fU) & (0U == 
					     (7U & 
					      (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					       >> 0x1cU))))));
	vcdp->chgBit  (c+128,(((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				>> 0x1fU) & (4U == 
					     (7U & 
					      (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					       >> 0x1cU))))));
	vcdp->chgBit  (c+129,(((vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				>> 0x1fU) & (6U == 
					     (7U & 
					      (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					       >> 0x1cU))))));
	vcdp->chgBit  (c+130,((1U == (3U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					    >> 0x1eU)))));
	vcdp->chgBit  (c+131,((1U == (7U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					    >> 0x1dU)))));
	vcdp->chgBit  (c+132,((1U == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					      >> 0x1cU)))));
	vcdp->chgBit  (c+133,(((1U == (0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					       >> 0x1cU))) 
			       & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				  >> 0x1bU))));
	vcdp->chgBit  (c+134,((1U == (0x1fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					       >> 0x1bU)))));
	vcdp->chgBit  (c+135,(((1U == (0x1fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						>> 0x1bU))) 
			       & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				     >> 0x18U)))));
	vcdp->chgBit  (c+136,(((1U == (0x1fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
						>> 0x1bU))) 
			       & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				  >> 0x18U))));
	vcdp->chgBit  (c+137,((1U == (0x3fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					       >> 0x1aU)))));
	vcdp->chgBus  (c+138,((0xfffffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst)),20);
	vcdp->chgBus  (c+139,((0xffU & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst)),8);
	vcdp->chgBus  (c+140,((0x3fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					>> 0x14U))),6);
	vcdp->chgBus  (c+141,((0x1fU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
					>> 0x14U))),5);
	vcdp->chgBus  (c+142,((0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				       >> 0x18U))),4);
	vcdp->chgBus  (c+143,((0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				       >> 0x14U))),4);
	vcdp->chgBus  (c+144,((0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				       >> 0x10U))),4);
	vcdp->chgBus  (c+145,((0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				       >> 0xcU))),4);
	vcdp->chgBus  (c+146,((0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rInst 
				       >> 8U))),4);
	vcdp->chgBus  (c+147,((0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				       >> 0xcU))),4);
	vcdp->chgBus  (c+148,((0xfU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				       >> 8U))),4);
	vcdp->chgBit  (c+149,((1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				     >> 7U))));
	vcdp->chgBit  (c+150,((1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				     >> 6U))));
	vcdp->chgBit  (c+151,((1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				     >> 5U))));
	vcdp->chgBit  (c+152,((1U & (~ (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
					>> 4U)))));
	vcdp->chgBit  (c+153,((1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				     >> 3U))));
	vcdp->chgBit  (c+154,((1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				     >> 2U))));
	vcdp->chgBit  (c+155,((1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS 
				     >> 1U))));
	vcdp->chgBit  (c+156,((1U & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rRegCS)));
    }
}

void VepRISC_coreEmu::traceChgThis__34(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+157,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rTxClk));
	vcdp->chgBus  (c+158,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rClkDivide),2);
    }
}

void VepRISC_coreEmu::traceChgThis__35(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+159,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__oBvusInterrupt));
	vcdp->chgBus  (c+160,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataBuf),8);
    }
}

void VepRISC_coreEmu::traceChgThis__36(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+161,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendPrevState),4);
	vcdp->chgBus  (c+162,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvPrevState),4);
	vcdp->chgBus  (c+163,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendDataCnt),6);
	vcdp->chgBus  (c+164,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataCnt),6);
	vcdp->chgBus  (c+165,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvDataBuf),8);
	vcdp->chgBus  (c+166,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rDataOut),16);
    }
}

void VepRISC_coreEmu::traceChgThis__37(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+167,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rTransferCount),8);
	vcdp->chgBus  (c+168,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rDirectMISO),32);
    }
}

void VepRISC_coreEmu::traceChgThis__38(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+169,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wInternalDataMOSI),32);
	vcdp->chgBus  (c+170,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__wTrashMISO),32);
    }
}

void VepRISC_coreEmu::traceChgThis__39(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+171,(vlTOPp->epRISC_coreEmu__DOT__iBusInterrupt));
	vcdp->chgBus  (c+172,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rDirection),16);
	vcdp->chgBus  (c+173,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rInterrupt),16);
	vcdp->chgBus  (c+174,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__gpio__DOT__rValue),16);
	vcdp->chgBus  (c+175,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rConfig),16);
	vcdp->chgBus  (c+176,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRow),16);
	vcdp->chgBus  (c+177,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColumn),16);
	vcdp->chgBus  (c+178,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__wCharRAMData),16);
	vcdp->chgBus  (c+179,((0x1ffffU & ((((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRow) 
					     << 4U) 
					    + ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rRow) 
					       << 6U)) 
					   + (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bvga__DOT__rColumn)))),17);
    }
}

void VepRISC_coreEmu::traceChgThis__40(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+180,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipePrevState),5);
    }
}

void VepRISC_coreEmu::traceChgThis__41(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+181,((0xfU & (~ ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rControl) 
					  >> 3U)))),4);
	vcdp->chgBus  (c+182,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockSto),5);
	vcdp->chgBus  (c+183,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rControl),16);
	vcdp->chgBus  (c+184,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataIn),16);
    }
}

void VepRISC_coreEmu::traceChgThis__42(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+185,((0xfU & (((((((((8U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState)) 
					      | (9U 
						 == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
					     | (7U 
						== (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
					    | (6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))) 
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
					        : (
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
					    ? 0U : 
					   ((0U == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
					     ? 0xbU
					     : ((0xbU 
						 == (IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState))
						 ? 0xaU
						 : 8U)))))),4);
    }
}

void VepRISC_coreEmu::traceChgThis__43(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+186,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountSto),5);
	vcdp->chgBus  (c+187,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountSto),5);
	vcdp->chgBus  (c+188,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl),16);
	vcdp->chgBus  (c+189,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rDataIn),16);
	vcdp->chgBit  (c+190,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
				     >> 5U))));
	vcdp->chgBit  (c+191,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
				     >> 4U))));
	vcdp->chgBit  (c+192,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
				     >> 8U))));
	vcdp->chgBit  (c+193,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
				     >> 7U))));
	vcdp->chgBit  (c+194,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
				     >> 6U))));
	vcdp->chgBit  (c+195,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
				     >> 0xaU))));
	vcdp->chgBit  (c+196,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
				     >> 9U))));
	vcdp->chgBit  (c+197,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
				     >> 0xbU))));
	vcdp->chgBit  (c+198,((1U & ((IData)(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rControl) 
				     >> 0xcU))));
    }
}

void VepRISC_coreEmu::traceChgThis__44(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+199,((6U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState))));
	vcdp->chgBus  (c+200,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__rPipeState),4);
	vcdp->chgBus  (c+201,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__core__DOT__wBusRegA),32);
    }
}

void VepRISC_coreEmu::traceChgThis__45(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+202,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataBuf),8);
	vcdp->chgBus  (c+203,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rDataOut),16);
    }
}

void VepRISC_coreEmu::traceChgThis__46(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+204,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rState),4);
	vcdp->chgBus  (c+205,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rPrevState),4);
	vcdp->chgBus  (c+206,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__bspi__DOT__rLockAck),5);
    }
}

void VepRISC_coreEmu::traceChgThis__47(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+207,((3U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
				     >> 2U))),2);
	vcdp->chgBus  (c+208,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig),32);
	vcdp->chgBit  (c+209,((1U & vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig)));
	vcdp->chgBit  (c+210,((1U & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
				     >> 4U))));
	vcdp->chgBus  (c+211,((0xffU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
					>> 8U))),8);
	vcdp->chgBus  (c+212,((0xfffU & (vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rConfig 
					 >> 0x10U))),12);
	vcdp->chgBus  (c+213,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockSto),5);
    }
}

void VepRISC_coreEmu::traceChgThis__48(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+214,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalCounterMOSI),8);
    }
}

void VepRISC_coreEmu::traceChgThis__49(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+215,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendState),4);
	vcdp->chgBus  (c+216,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvState),4);
	vcdp->chgBus  (c+217,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rRecvCountAck),5);
	vcdp->chgBus  (c+218,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__uart__DOT__rSendCountAck),5);
    }
}

void VepRISC_coreEmu::traceChgThis__50(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+219,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI),32);
	vcdp->chgBus  (c+220,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSIBuffer),32);
	vcdp->chgBus  (c+221,((0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
					  >> 0x10U))),15);
	vcdp->chgBit  (c+222,((0x10U > (0x7fffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
						   >> 0x10U)))));
	vcdp->chgBus  (c+223,((3U & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
				     >> 0x10U))),2);
	vcdp->chgBus  (c+224,((0xffU & (vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rInternalMOSI 
					>> 0x10U))),8);
    }
}

void VepRISC_coreEmu::traceChgThis__51(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+225,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMOSI),8);
    }
}

void VepRISC_coreEmu::traceChgThis__52(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+226,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalCounterMISO),8);
	vcdp->chgBus  (c+227,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rInternalDataMISO),32);
    }
}

void VepRISC_coreEmu::traceChgThis__53(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+228,(vlTOPp->epRISC_coreEmu__DOT__controller__DOT__rPipeState),5);
    }
}

void VepRISC_coreEmu::traceChgThis__54(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+229,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState),5);
	vcdp->chgBus  (c+230,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipePrevState),5);
	vcdp->chgBus  (c+231,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rLockAck),5);
	vcdp->chgBit  (c+232,((7U == (IData)(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rPipeState))));
    }
}

void VepRISC_coreEmu::traceChgThis__55(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+233,(vlTOPp->epRISC_coreEmu__DOT__machine__DOT__bus__DOT__rCounterMISO),8);
    }
}

void VepRISC_coreEmu::traceChgThis__56(VepRISC_coreEmu__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VepRISC_coreEmu* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+234,(vlTOPp->iBoardClock));
	vcdp->chgBit  (c+235,(vlTOPp->iBoardReset));
	vcdp->chgBit  (c+236,(vlTOPp->iBoardSense));
	vcdp->chgBit  (c+237,(vlTOPp->iBoardReceive));
	vcdp->chgBit  (c+238,(vlTOPp->oBoardAcknowledge));
	vcdp->chgBit  (c+239,(vlTOPp->oBoardTransmit));
	vcdp->chgBit  (c+240,(vlTOPp->bBoardDebug0));
	vcdp->chgBit  (c+241,(vlTOPp->bBoardDebug1));
	vcdp->chgBit  (c+242,(vlTOPp->bBoardDebug2));
	vcdp->chgBit  (c+243,(vlTOPp->bBoardDebug3));
	vcdp->chgBit  (c+244,(vlTOPp->bBoardDebug4));
	vcdp->chgBit  (c+245,(vlTOPp->bBoardDebug5));
	vcdp->chgBit  (c+246,(vlTOPp->iSerialRX));
	vcdp->chgBit  (c+247,(vlTOPp->iSerialCTS));
	vcdp->chgBit  (c+248,(vlTOPp->iSerialDCD));
	vcdp->chgBit  (c+249,(vlTOPp->iSerialDSR));
	vcdp->chgBit  (c+250,(vlTOPp->oSerialDTR));
	vcdp->chgBit  (c+251,(vlTOPp->oSerialRTS));
	vcdp->chgBit  (c+252,(vlTOPp->oSerialTX));
	vcdp->chgBit  (c+253,(vlTOPp->iTTLSerialRX));
	vcdp->chgBit  (c+254,(vlTOPp->iTTLSerialRST));
	vcdp->chgBit  (c+255,(vlTOPp->oTTLSerialTX));
	vcdp->chgBit  (c+256,(vlTOPp->bGPIO0));
	vcdp->chgBit  (c+257,(vlTOPp->bGPIO1));
	vcdp->chgBit  (c+258,(vlTOPp->bGPIO2));
	vcdp->chgBit  (c+259,(vlTOPp->bGPIO3));
	vcdp->chgBit  (c+260,(vlTOPp->bGPIO4));
	vcdp->chgBit  (c+261,(vlTOPp->bGPIO5));
	vcdp->chgBit  (c+262,(vlTOPp->bGPIO6));
	vcdp->chgBit  (c+263,(vlTOPp->bGPIO7));
	vcdp->chgBit  (c+264,(vlTOPp->bGPIO8));
	vcdp->chgBit  (c+265,(vlTOPp->bGPIO9));
	vcdp->chgBit  (c+266,(vlTOPp->bGPIO10));
	vcdp->chgBit  (c+267,(vlTOPp->bGPIO11));
	vcdp->chgBit  (c+268,(vlTOPp->bGPIO12));
	vcdp->chgBit  (c+269,(vlTOPp->bGPIO13));
	vcdp->chgBit  (c+270,(vlTOPp->bGPIO14));
	vcdp->chgBit  (c+271,(vlTOPp->bGPIO15));
	vcdp->chgBit  (c+272,(vlTOPp->iExtBusInterrupt));
	vcdp->chgBus  (c+273,(vlTOPp->iExtBusMISO),4);
	vcdp->chgBit  (c+274,(vlTOPp->oExtBusClock));
	vcdp->chgBus  (c+275,(vlTOPp->oExtBusSS),2);
	vcdp->chgBus  (c+276,(vlTOPp->oExtBusMOSI),4);
	vcdp->chgBit  (c+277,(vlTOPp->iSPIMISO));
	vcdp->chgBit  (c+278,(vlTOPp->iSPIDetect0));
	vcdp->chgBit  (c+279,(vlTOPp->iSPIDetect1));
	vcdp->chgBit  (c+280,(vlTOPp->iSPIWrite0));
	vcdp->chgBit  (c+281,(vlTOPp->iSPIWrite1));
	vcdp->chgBit  (c+282,(vlTOPp->oSPIMOSI));
	vcdp->chgBit  (c+283,(vlTOPp->oSPISelect));
	vcdp->chgBit  (c+284,(vlTOPp->oSPIClock));
	vcdp->chgBit  (c+285,(vlTOPp->oVGAHorizontal));
	vcdp->chgBit  (c+286,(vlTOPp->oVGAVertical));
	vcdp->chgBus  (c+287,(vlTOPp->oVGAColor),8);
	vcdp->chgBit  (c+288,(vlTOPp->bPS2Data));
	vcdp->chgBit  (c+289,(vlTOPp->bPS2Clock));
	vcdp->chgBit  (c+290,((1U & (~ (IData)(vlTOPp->iBoardReset)))));
    }
}
