// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInstructionMemory__Syms.h"


//======================

void VInstructionMemory::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VInstructionMemory* t=(VInstructionMemory*)userthis;
    VInstructionMemory__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VInstructionMemory::traceChgThis(VInstructionMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VInstructionMemory::traceChgThis__2(VInstructionMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->InstructionMemory__DOT__mem___05FT_12_data),32);
    }
}

void VInstructionMemory::traceChgThis__3(VInstructionMemory__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,(vlTOPp->clock));
	vcdp->chgBit  (c+3,(vlTOPp->reset));
	vcdp->chgBus  (c+4,(vlTOPp->io_wrAddr),32);
	vcdp->chgBus  (c+5,(vlTOPp->io_rdData),32);
	vcdp->chgBus  (c+6,((0x3ffU & vlTOPp->io_wrAddr)),10);
    }
}
