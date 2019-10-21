// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstructionMemory.h for the primary calling header

#include "VInstructionMemory.h" // For This
#include "VInstructionMemory__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VInstructionMemory) {
    VInstructionMemory__Syms* __restrict vlSymsp = __VlSymsp = new VInstructionMemory__Syms(this, name());
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VInstructionMemory::__Vconfigure(VInstructionMemory__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VInstructionMemory::~VInstructionMemory() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VInstructionMemory::eval() {
    VInstructionMemory__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VInstructionMemory::eval\n"); );
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

void VInstructionMemory::_eval_initial_loop(VInstructionMemory__Syms* __restrict vlSymsp) {
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

void VInstructionMemory::_initial__TOP__1(VInstructionMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInstructionMemory::_initial__TOP__1\n"); );
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,223,0,7);
    // Body
    // INITIAL at /home/monis/chisel-tutorial/test_run_dir/examples/InstructionMemory/InstructionMemory.InstructionMemory.mem.v:8
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x2f616263U;
    __Vtemp1[2U] = 0x6b746f70U;
    __Vtemp1[3U] = 0x2f446573U;
    __Vtemp1[4U] = 0x6f6e6973U;
    __Vtemp1[5U] = 0x6d652f6dU;
    __Vtemp1[6U] = 0x2f686fU;
    VL_READMEM_W (true,32,1024, 0,7, __Vtemp1, vlTOPp->InstructionMemory__DOT__mem
		  ,0,~0);
}

VL_INLINE_OPT void VInstructionMemory::_combo__TOP__2(VInstructionMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInstructionMemory::_combo__TOP__2\n"); );
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->InstructionMemory__DOT__mem___05FT_12_data 
	= vlTOPp->InstructionMemory__DOT__mem[(0x3ffU 
					       & vlTOPp->io_wrAddr)];
}

void VInstructionMemory::_settle__TOP__3(VInstructionMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInstructionMemory::_settle__TOP__3\n"); );
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->InstructionMemory__DOT__mem___05FT_12_data 
	= vlTOPp->InstructionMemory__DOT__mem[(0x3ffU 
					       & vlTOPp->io_wrAddr)];
    vlTOPp->io_rdData = vlTOPp->InstructionMemory__DOT__mem___05FT_12_data;
}

VL_INLINE_OPT void VInstructionMemory::_combo__TOP__4(VInstructionMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInstructionMemory::_combo__TOP__4\n"); );
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_rdData = vlTOPp->InstructionMemory__DOT__mem___05FT_12_data;
}

void VInstructionMemory::_eval(VInstructionMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInstructionMemory::_eval\n"); );
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_combo__TOP__4(vlSymsp);
}

void VInstructionMemory::_eval_initial(VInstructionMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInstructionMemory::_eval_initial\n"); );
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VInstructionMemory::final() {
    VL_DEBUG_IF(VL_PRINTF("    VInstructionMemory::final\n"); );
    // Variables
    VInstructionMemory__Syms* __restrict vlSymsp = this->__VlSymsp;
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VInstructionMemory::_eval_settle(VInstructionMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInstructionMemory::_eval_settle\n"); );
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VInstructionMemory::_change_request(VInstructionMemory__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInstructionMemory::_change_request\n"); );
    VInstructionMemory* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void VInstructionMemory::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VInstructionMemory::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_wrAddr = VL_RAND_RESET_I(32);
    io_rdData = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    InstructionMemory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    InstructionMemory__DOT__mem___05FT_12_data = VL_RAND_RESET_I(32);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VInstructionMemory::_configure_coverage(VInstructionMemory__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VInstructionMemory::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
