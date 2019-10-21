// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop.h"              // For This
#include "VTop__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VTop) {
    VTop__Syms* __restrict vlSymsp = __VlSymsp = new VTop__Syms(this, name());
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTop::__Vconfigure(VTop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTop::~VTop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VTop::eval() {
    VTop__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VTop::eval\n"); );
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

void VTop::_eval_initial_loop(VTop__Syms* __restrict vlSymsp) {
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

void VTop::_initial__TOP__1(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_initial__TOP__1\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,223,0,7);
    // Body
    // INITIAL at /home/monis/Risc-V/MERL/test_run_dir/examples/Top/Top.InstructionMemory.mem.v:7
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x2f616263U;
    __Vtemp1[2U] = 0x6b746f70U;
    __Vtemp1[3U] = 0x2f446573U;
    __Vtemp1[4U] = 0x6f6e6973U;
    __Vtemp1[5U] = 0x6d652f6dU;
    __Vtemp1[6U] = 0x2f686fU;
    VL_READMEM_W (true,32,1024, 0,7, __Vtemp1, vlTOPp->Top__DOT__instmem__DOT__mem
		  ,0,~0);
}

VL_INLINE_OPT void VTop::_sequent__TOP__2(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__2\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvset__Top__DOT__DataMemory__DOT__mem__v0,0,0);
    //char	__VpadToAlign57[1];
    VL_SIG16(__Vdlyvdim0__Top__DOT__DataMemory__DOT__mem__v0,9,0);
    VL_SIG(__Vdlyvval__Top__DOT__DataMemory__DOT__mem__v0,31,0);
    // Body
    __Vdlyvset__Top__DOT__DataMemory__DOT__mem__v0 = 0U;
    // ALWAYS at Top.v:824
    vlTOPp->Top__DOT__register__DOT__registers_c_0 
	= ((IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite)
	    ? ((0U == (0x1fU & (vlTOPp->io_instruction 
				>> 7U))) ? 0U : ((0U 
						  == 
						  (0x1fU 
						   & (vlTOPp->io_instruction 
						      >> 7U)))
						  ? vlTOPp->Top__DOT__register_io_WriteData
						  : 0U))
	    : 0U);
    // ALWAYS at Top.v:835
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((1U == (0x1fU & (vlTOPp->io_instruction 
				 >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_1 = 0U;
	    }
	} else {
	    if ((1U == (0x1fU & (vlTOPp->io_instruction 
				 >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_1 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:846
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((2U == (0x1fU & (vlTOPp->io_instruction 
				 >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_2 = 0U;
	    }
	} else {
	    if ((2U == (0x1fU & (vlTOPp->io_instruction 
				 >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_2 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:857
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((3U == (0x1fU & (vlTOPp->io_instruction 
				 >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_3 = 0U;
	    }
	} else {
	    if ((3U == (0x1fU & (vlTOPp->io_instruction 
				 >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_3 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:868
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((4U == (0x1fU & (vlTOPp->io_instruction 
				 >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_4 = 0U;
	    }
	} else {
	    if ((4U == (0x1fU & (vlTOPp->io_instruction 
				 >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_4 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:879
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((5U == (0x1fU & (vlTOPp->io_instruction 
				 >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_5 = 0U;
	    }
	} else {
	    if ((5U == (0x1fU & (vlTOPp->io_instruction 
				 >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_5 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:890
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((6U == (0x1fU & (vlTOPp->io_instruction 
				 >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_6 = 0U;
	    }
	} else {
	    if ((6U == (0x1fU & (vlTOPp->io_instruction 
				 >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_6 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:901
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((7U == (0x1fU & (vlTOPp->io_instruction 
				 >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_7 = 0U;
	    }
	} else {
	    if ((7U == (0x1fU & (vlTOPp->io_instruction 
				 >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_7 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:912
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((8U == (0x1fU & (vlTOPp->io_instruction 
				 >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_8 = 0U;
	    }
	} else {
	    if ((8U == (0x1fU & (vlTOPp->io_instruction 
				 >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_8 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:923
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((9U == (0x1fU & (vlTOPp->io_instruction 
				 >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_9 = 0U;
	    }
	} else {
	    if ((9U == (0x1fU & (vlTOPp->io_instruction 
				 >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_9 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:934
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0xaU == (0x1fU & (vlTOPp->io_instruction 
				   >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_10 = 0U;
	    }
	} else {
	    if ((0xaU == (0x1fU & (vlTOPp->io_instruction 
				   >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_10 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:945
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0xbU == (0x1fU & (vlTOPp->io_instruction 
				   >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_11 = 0U;
	    }
	} else {
	    if ((0xbU == (0x1fU & (vlTOPp->io_instruction 
				   >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_11 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:956
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0xcU == (0x1fU & (vlTOPp->io_instruction 
				   >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_12 = 0U;
	    }
	} else {
	    if ((0xcU == (0x1fU & (vlTOPp->io_instruction 
				   >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_12 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:967
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0xdU == (0x1fU & (vlTOPp->io_instruction 
				   >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_13 = 0U;
	    }
	} else {
	    if ((0xdU == (0x1fU & (vlTOPp->io_instruction 
				   >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_13 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:978
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0xeU == (0x1fU & (vlTOPp->io_instruction 
				   >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_14 = 0U;
	    }
	} else {
	    if ((0xeU == (0x1fU & (vlTOPp->io_instruction 
				   >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_14 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:989
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0xfU == (0x1fU & (vlTOPp->io_instruction 
				   >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_15 = 0U;
	    }
	} else {
	    if ((0xfU == (0x1fU & (vlTOPp->io_instruction 
				   >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_15 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1000
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0x10U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_16 = 0U;
	    }
	} else {
	    if ((0x10U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_16 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1011
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0x11U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_17 = 0U;
	    }
	} else {
	    if ((0x11U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_17 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1022
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0x12U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_18 = 0U;
	    }
	} else {
	    if ((0x12U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_18 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1033
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0x13U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_19 = 0U;
	    }
	} else {
	    if ((0x13U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_19 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1044
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0x14U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_20 = 0U;
	    }
	} else {
	    if ((0x14U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_20 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1055
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0x15U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_21 = 0U;
	    }
	} else {
	    if ((0x15U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_21 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1066
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0x16U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_22 = 0U;
	    }
	} else {
	    if ((0x16U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_22 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1077
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0x17U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_23 = 0U;
	    }
	} else {
	    if ((0x17U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_23 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1088
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0x18U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_24 = 0U;
	    }
	} else {
	    if ((0x18U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_24 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1099
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0x19U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_25 = 0U;
	    }
	} else {
	    if ((0x19U == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_25 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1110
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0x1aU == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_26 = 0U;
	    }
	} else {
	    if ((0x1aU == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_26 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1121
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0x1bU == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_27 = 0U;
	    }
	} else {
	    if ((0x1bU == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_27 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1132
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0x1cU == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_28 = 0U;
	    }
	} else {
	    if ((0x1cU == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_28 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1143
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0x1dU == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_29 = 0U;
	    }
	} else {
	    if ((0x1dU == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_29 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1154
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0x1eU == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_30 = 0U;
	    }
	} else {
	    if ((0x1eU == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_30 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1165
    if (vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite) {
	if ((0U == (0x1fU & (vlTOPp->io_instruction 
			     >> 7U)))) {
	    if ((0x1fU == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_31 = 0U;
	    }
	} else {
	    if ((0x1fU == (0x1fU & (vlTOPp->io_instruction 
				    >> 7U)))) {
		vlTOPp->Top__DOT__register__DOT__registers_c_31 
		    = vlTOPp->Top__DOT__register_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1613
    if (((0x33U != (0x7fU & vlTOPp->io_instruction)) 
	 & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load)) 
	    & (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store)))) {
	__Vdlyvval__Top__DOT__DataMemory__DOT__mem__v0 
	    = vlTOPp->Top__DOT__register_io_rs2;
	__Vdlyvset__Top__DOT__DataMemory__DOT__mem__v0 = 1U;
	__Vdlyvdim0__Top__DOT__DataMemory__DOT__mem__v0 
	    = (0xffU & (IData)((vlTOPp->Top__DOT__alu__DOT___GEN_22 
				>> 2U)));
    }
    // ALWAYS at Top.v:1511
    vlTOPp->Top__DOT__PC__DOT__pc1 = vlTOPp->Top__DOT__PC_io_input;
    // ALWAYSPOST at Top.v:1615
    if (__Vdlyvset__Top__DOT__DataMemory__DOT__mem__v0) {
	vlTOPp->Top__DOT__DataMemory__DOT__mem[__Vdlyvdim0__Top__DOT__DataMemory__DOT__mem__v0] 
	    = __Vdlyvval__Top__DOT__DataMemory__DOT__mem__v0;
    }
    vlTOPp->Top__DOT__instmem__DOT__mem___05FT_12_data 
	= vlTOPp->Top__DOT__instmem__DOT__mem[(0x3ffU 
					       & (vlTOPp->Top__DOT__PC__DOT__pc1 
						  >> 2U))];
}

void VTop::_settle__TOP__3(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__3\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__instmem__DOT__mem___05FT_12_data 
	= vlTOPp->Top__DOT__instmem__DOT__mem[(0x3ffU 
					       & (vlTOPp->Top__DOT__PC__DOT__pc1 
						  >> 2U))];
    vlTOPp->io_instruction = vlTOPp->Top__DOT__instmem__DOT__mem___05FT_12_data;
}

VL_INLINE_OPT void VTop::_sequent__TOP__4(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__4\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_instruction = vlTOPp->Top__DOT__instmem__DOT__mem___05FT_12_data;
    vlTOPp->Top__DOT__immediate__DOT__sbt13 = ((((0x80000000U 
						  & vlTOPp->io_instruction)
						  ? 0x7ffffU
						  : 0U) 
						<< 0xdU) 
					       | ((0x1000U 
						   & (vlTOPp->io_instruction 
						      >> 0x13U)) 
						  | ((0x800U 
						      & (vlTOPp->io_instruction 
							 << 4U)) 
						     | ((0x7e0U 
							 & (vlTOPp->io_instruction 
							    >> 0x14U)) 
							| (0x1eU 
							   & (vlTOPp->io_instruction 
							      >> 7U))))));
    vlTOPp->Top__DOT__immediate__DOT__sbt19 = ((((0x80000000U 
						  & vlTOPp->io_instruction)
						  ? 0x7ffU
						  : 0U) 
						<< 0x15U) 
					       | ((0x100000U 
						   & (vlTOPp->io_instruction 
						      >> 0xbU)) 
						  | ((0xff000U 
						      & vlTOPp->io_instruction) 
						     | ((0x800U 
							 & (vlTOPp->io_instruction 
							    >> 9U)) 
							| (0x7feU 
							   & (vlTOPp->io_instruction 
							      >> 0x14U))))));
    vlTOPp->Top__DOT__alucontrol__DOT___T_18 = ((8U 
						 & (vlTOPp->io_instruction 
						    >> 0x1bU)) 
						| (7U 
						   & (vlTOPp->io_instruction 
						      >> 0xcU)));
    vlTOPp->Top__DOT__immediate__DOT__output2 = (((
						   (0x80000000U 
						    & vlTOPp->io_instruction)
						    ? 0x7ffffU
						    : 0U) 
						  << 0xcU) 
						 | ((0xfe0U 
						     & (vlTOPp->io_instruction 
							>> 0x14U)) 
						    | (0x1fU 
						       & (vlTOPp->io_instruction 
							  >> 7U))));
    vlTOPp->Top__DOT__immediate_io_I_Immediate = ((0x80000000U 
						   & (((0x80000000U 
							& vlTOPp->io_instruction)
						        ? 0x7ffffU
						        : 0U) 
						      << 0xdU)) 
						  | ((((0x80000000U 
							& vlTOPp->io_instruction)
						        ? 0x7ffffU
						        : 0U) 
						      << 0xcU) 
						     | (0xfffU 
							& (vlTOPp->io_instruction 
							   >> 0x14U))));
    vlTOPp->Top__DOT__register_io_rs2 = ((0x1fU == 
					  (0x1fU & 
					   (vlTOPp->io_instruction 
					    >> 0x14U)))
					  ? vlTOPp->Top__DOT__register__DOT__registers_c_31
					  : ((0x1eU 
					      == (0x1fU 
						  & (vlTOPp->io_instruction 
						     >> 0x14U)))
					      ? vlTOPp->Top__DOT__register__DOT__registers_c_30
					      : ((0x1dU 
						  == 
						  (0x1fU 
						   & (vlTOPp->io_instruction 
						      >> 0x14U)))
						  ? vlTOPp->Top__DOT__register__DOT__registers_c_29
						  : 
						 ((0x1cU 
						   == 
						   (0x1fU 
						    & (vlTOPp->io_instruction 
						       >> 0x14U)))
						   ? vlTOPp->Top__DOT__register__DOT__registers_c_28
						   : 
						  ((0x1bU 
						    == 
						    (0x1fU 
						     & (vlTOPp->io_instruction 
							>> 0x14U)))
						    ? vlTOPp->Top__DOT__register__DOT__registers_c_27
						    : 
						   ((0x1aU 
						     == 
						     (0x1fU 
						      & (vlTOPp->io_instruction 
							 >> 0x14U)))
						     ? vlTOPp->Top__DOT__register__DOT__registers_c_26
						     : 
						    ((0x19U 
						      == 
						      (0x1fU 
						       & (vlTOPp->io_instruction 
							  >> 0x14U)))
						      ? vlTOPp->Top__DOT__register__DOT__registers_c_25
						      : 
						     ((0x18U 
						       == 
						       (0x1fU 
							& (vlTOPp->io_instruction 
							   >> 0x14U)))
						       ? vlTOPp->Top__DOT__register__DOT__registers_c_24
						       : 
						      ((0x17U 
							== 
							(0x1fU 
							 & (vlTOPp->io_instruction 
							    >> 0x14U)))
						        ? vlTOPp->Top__DOT__register__DOT__registers_c_23
						        : 
						       ((0x16U 
							 == 
							 (0x1fU 
							  & (vlTOPp->io_instruction 
							     >> 0x14U)))
							 ? vlTOPp->Top__DOT__register__DOT__registers_c_22
							 : 
							((0x15U 
							  == 
							  (0x1fU 
							   & (vlTOPp->io_instruction 
							      >> 0x14U)))
							  ? vlTOPp->Top__DOT__register__DOT__registers_c_21
							  : 
							 ((0x14U 
							   == 
							   (0x1fU 
							    & (vlTOPp->io_instruction 
							       >> 0x14U)))
							   ? vlTOPp->Top__DOT__register__DOT__registers_c_20
							   : 
							  ((0x13U 
							    == 
							    (0x1fU 
							     & (vlTOPp->io_instruction 
								>> 0x14U)))
							    ? vlTOPp->Top__DOT__register__DOT__registers_c_19
							    : 
							   ((0x12U 
							     == 
							     (0x1fU 
							      & (vlTOPp->io_instruction 
								 >> 0x14U)))
							     ? vlTOPp->Top__DOT__register__DOT__registers_c_18
							     : 
							    ((0x11U 
							      == 
							      (0x1fU 
							       & (vlTOPp->io_instruction 
								  >> 0x14U)))
							      ? vlTOPp->Top__DOT__register__DOT__registers_c_17
							      : 
							     ((0x10U 
							       == 
							       (0x1fU 
								& (vlTOPp->io_instruction 
								   >> 0x14U)))
							       ? vlTOPp->Top__DOT__register__DOT__registers_c_16
							       : 
							      ((0xfU 
								== 
								(0x1fU 
								 & (vlTOPp->io_instruction 
								    >> 0x14U)))
							        ? vlTOPp->Top__DOT__register__DOT__registers_c_15
							        : 
							       ((0xeU 
								 == 
								 (0x1fU 
								  & (vlTOPp->io_instruction 
								     >> 0x14U)))
								 ? vlTOPp->Top__DOT__register__DOT__registers_c_14
								 : 
								((0xdU 
								  == 
								  (0x1fU 
								   & (vlTOPp->io_instruction 
								      >> 0x14U)))
								  ? vlTOPp->Top__DOT__register__DOT__registers_c_13
								  : 
								 ((0xcU 
								   == 
								   (0x1fU 
								    & (vlTOPp->io_instruction 
								       >> 0x14U)))
								   ? vlTOPp->Top__DOT__register__DOT__registers_c_12
								   : 
								  ((0xbU 
								    == 
								    (0x1fU 
								     & (vlTOPp->io_instruction 
									>> 0x14U)))
								    ? vlTOPp->Top__DOT__register__DOT__registers_c_11
								    : 
								   ((0xaU 
								     == 
								     (0x1fU 
								      & (vlTOPp->io_instruction 
									 >> 0x14U)))
								     ? vlTOPp->Top__DOT__register__DOT__registers_c_10
								     : 
								    ((9U 
								      == 
								      (0x1fU 
								       & (vlTOPp->io_instruction 
									  >> 0x14U)))
								      ? vlTOPp->Top__DOT__register__DOT__registers_c_9
								      : 
								     ((8U 
								       == 
								       (0x1fU 
									& (vlTOPp->io_instruction 
									   >> 0x14U)))
								       ? vlTOPp->Top__DOT__register__DOT__registers_c_8
								       : 
								      ((7U 
									== 
									(0x1fU 
									 & (vlTOPp->io_instruction 
									    >> 0x14U)))
								        ? vlTOPp->Top__DOT__register__DOT__registers_c_7
								        : 
								       ((6U 
									 == 
									 (0x1fU 
									  & (vlTOPp->io_instruction 
									     >> 0x14U)))
									 ? vlTOPp->Top__DOT__register__DOT__registers_c_6
									 : 
									((5U 
									  == 
									  (0x1fU 
									   & (vlTOPp->io_instruction 
									      >> 0x14U)))
									  ? vlTOPp->Top__DOT__register__DOT__registers_c_5
									  : 
									 ((4U 
									   == 
									   (0x1fU 
									    & (vlTOPp->io_instruction 
									       >> 0x14U)))
									   ? vlTOPp->Top__DOT__register__DOT__registers_c_4
									   : 
									  ((3U 
									    == 
									    (0x1fU 
									     & (vlTOPp->io_instruction 
										>> 0x14U)))
									    ? vlTOPp->Top__DOT__register__DOT__registers_c_3
									    : 
									   ((2U 
									     == 
									     (0x1fU 
									      & (vlTOPp->io_instruction 
										>> 0x14U)))
									     ? vlTOPp->Top__DOT__register__DOT__registers_c_2
									     : 
									    ((1U 
									      == 
									      (0x1fU 
									       & (vlTOPp->io_instruction 
										>> 0x14U)))
									      ? vlTOPp->Top__DOT__register__DOT__registers_c_1
									      : vlTOPp->Top__DOT__register__DOT__registers_c_0)))))))))))))))))))))))))))))));
    vlTOPp->Top__DOT__register_io_rs1 = ((0x1fU == 
					  (0x1fU & 
					   (vlTOPp->io_instruction 
					    >> 0xfU)))
					  ? vlTOPp->Top__DOT__register__DOT__registers_c_31
					  : ((0x1eU 
					      == (0x1fU 
						  & (vlTOPp->io_instruction 
						     >> 0xfU)))
					      ? vlTOPp->Top__DOT__register__DOT__registers_c_30
					      : ((0x1dU 
						  == 
						  (0x1fU 
						   & (vlTOPp->io_instruction 
						      >> 0xfU)))
						  ? vlTOPp->Top__DOT__register__DOT__registers_c_29
						  : 
						 ((0x1cU 
						   == 
						   (0x1fU 
						    & (vlTOPp->io_instruction 
						       >> 0xfU)))
						   ? vlTOPp->Top__DOT__register__DOT__registers_c_28
						   : 
						  ((0x1bU 
						    == 
						    (0x1fU 
						     & (vlTOPp->io_instruction 
							>> 0xfU)))
						    ? vlTOPp->Top__DOT__register__DOT__registers_c_27
						    : 
						   ((0x1aU 
						     == 
						     (0x1fU 
						      & (vlTOPp->io_instruction 
							 >> 0xfU)))
						     ? vlTOPp->Top__DOT__register__DOT__registers_c_26
						     : 
						    ((0x19U 
						      == 
						      (0x1fU 
						       & (vlTOPp->io_instruction 
							  >> 0xfU)))
						      ? vlTOPp->Top__DOT__register__DOT__registers_c_25
						      : 
						     ((0x18U 
						       == 
						       (0x1fU 
							& (vlTOPp->io_instruction 
							   >> 0xfU)))
						       ? vlTOPp->Top__DOT__register__DOT__registers_c_24
						       : 
						      ((0x17U 
							== 
							(0x1fU 
							 & (vlTOPp->io_instruction 
							    >> 0xfU)))
						        ? vlTOPp->Top__DOT__register__DOT__registers_c_23
						        : 
						       ((0x16U 
							 == 
							 (0x1fU 
							  & (vlTOPp->io_instruction 
							     >> 0xfU)))
							 ? vlTOPp->Top__DOT__register__DOT__registers_c_22
							 : 
							((0x15U 
							  == 
							  (0x1fU 
							   & (vlTOPp->io_instruction 
							      >> 0xfU)))
							  ? vlTOPp->Top__DOT__register__DOT__registers_c_21
							  : 
							 ((0x14U 
							   == 
							   (0x1fU 
							    & (vlTOPp->io_instruction 
							       >> 0xfU)))
							   ? vlTOPp->Top__DOT__register__DOT__registers_c_20
							   : 
							  ((0x13U 
							    == 
							    (0x1fU 
							     & (vlTOPp->io_instruction 
								>> 0xfU)))
							    ? vlTOPp->Top__DOT__register__DOT__registers_c_19
							    : 
							   ((0x12U 
							     == 
							     (0x1fU 
							      & (vlTOPp->io_instruction 
								 >> 0xfU)))
							     ? vlTOPp->Top__DOT__register__DOT__registers_c_18
							     : 
							    ((0x11U 
							      == 
							      (0x1fU 
							       & (vlTOPp->io_instruction 
								  >> 0xfU)))
							      ? vlTOPp->Top__DOT__register__DOT__registers_c_17
							      : 
							     ((0x10U 
							       == 
							       (0x1fU 
								& (vlTOPp->io_instruction 
								   >> 0xfU)))
							       ? vlTOPp->Top__DOT__register__DOT__registers_c_16
							       : 
							      ((0xfU 
								== 
								(0x1fU 
								 & (vlTOPp->io_instruction 
								    >> 0xfU)))
							        ? vlTOPp->Top__DOT__register__DOT__registers_c_15
							        : 
							       ((0xeU 
								 == 
								 (0x1fU 
								  & (vlTOPp->io_instruction 
								     >> 0xfU)))
								 ? vlTOPp->Top__DOT__register__DOT__registers_c_14
								 : 
								((0xdU 
								  == 
								  (0x1fU 
								   & (vlTOPp->io_instruction 
								      >> 0xfU)))
								  ? vlTOPp->Top__DOT__register__DOT__registers_c_13
								  : 
								 ((0xcU 
								   == 
								   (0x1fU 
								    & (vlTOPp->io_instruction 
								       >> 0xfU)))
								   ? vlTOPp->Top__DOT__register__DOT__registers_c_12
								   : 
								  ((0xbU 
								    == 
								    (0x1fU 
								     & (vlTOPp->io_instruction 
									>> 0xfU)))
								    ? vlTOPp->Top__DOT__register__DOT__registers_c_11
								    : 
								   ((0xaU 
								     == 
								     (0x1fU 
								      & (vlTOPp->io_instruction 
									 >> 0xfU)))
								     ? vlTOPp->Top__DOT__register__DOT__registers_c_10
								     : 
								    ((9U 
								      == 
								      (0x1fU 
								       & (vlTOPp->io_instruction 
									  >> 0xfU)))
								      ? vlTOPp->Top__DOT__register__DOT__registers_c_9
								      : 
								     ((8U 
								       == 
								       (0x1fU 
									& (vlTOPp->io_instruction 
									   >> 0xfU)))
								       ? vlTOPp->Top__DOT__register__DOT__registers_c_8
								       : 
								      ((7U 
									== 
									(0x1fU 
									 & (vlTOPp->io_instruction 
									    >> 0xfU)))
								        ? vlTOPp->Top__DOT__register__DOT__registers_c_7
								        : 
								       ((6U 
									 == 
									 (0x1fU 
									  & (vlTOPp->io_instruction 
									     >> 0xfU)))
									 ? vlTOPp->Top__DOT__register__DOT__registers_c_6
									 : 
									((5U 
									  == 
									  (0x1fU 
									   & (vlTOPp->io_instruction 
									      >> 0xfU)))
									  ? vlTOPp->Top__DOT__register__DOT__registers_c_5
									  : 
									 ((4U 
									   == 
									   (0x1fU 
									    & (vlTOPp->io_instruction 
									       >> 0xfU)))
									   ? vlTOPp->Top__DOT__register__DOT__registers_c_4
									   : 
									  ((3U 
									    == 
									    (0x1fU 
									     & (vlTOPp->io_instruction 
										>> 0xfU)))
									    ? vlTOPp->Top__DOT__register__DOT__registers_c_3
									    : 
									   ((2U 
									     == 
									     (0x1fU 
									      & (vlTOPp->io_instruction 
										>> 0xfU)))
									     ? vlTOPp->Top__DOT__register__DOT__registers_c_2
									     : 
									    ((1U 
									      == 
									      (0x1fU 
									       & (vlTOPp->io_instruction 
										>> 0xfU)))
									      ? vlTOPp->Top__DOT__register__DOT__registers_c_1
									      : vlTOPp->Top__DOT__register__DOT__registers_c_0)))))))))))))))))))))))))))))));
    vlTOPp->Top__DOT__control__DOT__InstDecode_io_I_Type 
	= ((0x33U != (0x7fU & vlTOPp->io_instruction)) 
	   & ((3U != (0x7fU & vlTOPp->io_instruction)) 
	      & ((0x23U != (0x7fU & vlTOPp->io_instruction)) 
		 & ((0x63U != (0x7fU & vlTOPp->io_instruction)) 
		    & (0x13U == (0x7fU & vlTOPp->io_instruction))))));
    vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store 
	= ((0x33U != (0x7fU & vlTOPp->io_instruction)) 
	   & ((3U != (0x7fU & vlTOPp->io_instruction)) 
	      & (0x23U == (0x7fU & vlTOPp->io_instruction))));
    vlTOPp->Top__DOT__control__DOT__InstDecode_io_Branch 
	= ((0x33U != (0x7fU & vlTOPp->io_instruction)) 
	   & ((3U != (0x7fU & vlTOPp->io_instruction)) 
	      & ((0x23U != (0x7fU & vlTOPp->io_instruction)) 
		 & (0x63U == (0x7fU & vlTOPp->io_instruction)))));
    vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load 
	= ((0x33U != (0x7fU & vlTOPp->io_instruction)) 
	   & (3U == (0x7fU & vlTOPp->io_instruction)));
    vlTOPp->Top__DOT__control__DOT__InstDecode_io_LUI 
	= ((0x33U != (0x7fU & vlTOPp->io_instruction)) 
	   & ((3U != (0x7fU & vlTOPp->io_instruction)) 
	      & ((0x23U != (0x7fU & vlTOPp->io_instruction)) 
		 & ((0x63U != (0x7fU & vlTOPp->io_instruction)) 
		    & ((0x13U != (0x7fU & vlTOPp->io_instruction)) 
		       & ((0x67U != (0x7fU & vlTOPp->io_instruction)) 
			  & ((0x6fU != (0x7fU & vlTOPp->io_instruction)) 
			     & (0x37U == (0x7fU & vlTOPp->io_instruction)))))))));
    vlTOPp->Top__DOT__control__DOT__InstDecode_io_JALR 
	= ((0x33U != (0x7fU & vlTOPp->io_instruction)) 
	   & ((3U != (0x7fU & vlTOPp->io_instruction)) 
	      & ((0x23U != (0x7fU & vlTOPp->io_instruction)) 
		 & ((0x63U != (0x7fU & vlTOPp->io_instruction)) 
		    & ((0x13U != (0x7fU & vlTOPp->io_instruction)) 
		       & (0x67U == (0x7fU & vlTOPp->io_instruction)))))));
    vlTOPp->Top__DOT__control__DOT__InstDecode_io_JAL 
	= ((0x33U != (0x7fU & vlTOPp->io_instruction)) 
	   & ((3U != (0x7fU & vlTOPp->io_instruction)) 
	      & ((0x23U != (0x7fU & vlTOPp->io_instruction)) 
		 & ((0x63U != (0x7fU & vlTOPp->io_instruction)) 
		    & ((0x13U != (0x7fU & vlTOPp->io_instruction)) 
		       & ((0x67U != (0x7fU & vlTOPp->io_instruction)) 
			  & (0x6fU == (0x7fU & vlTOPp->io_instruction))))))));
}

void VTop::_settle__TOP__5(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__5\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__immediate__DOT__sbt13 = ((((0x80000000U 
						  & vlTOPp->io_instruction)
						  ? 0x7ffffU
						  : 0U) 
						<< 0xdU) 
					       | ((0x1000U 
						   & (vlTOPp->io_instruction 
						      >> 0x13U)) 
						  | ((0x800U 
						      & (vlTOPp->io_instruction 
							 << 4U)) 
						     | ((0x7e0U 
							 & (vlTOPp->io_instruction 
							    >> 0x14U)) 
							| (0x1eU 
							   & (vlTOPp->io_instruction 
							      >> 7U))))));
    vlTOPp->Top__DOT__immediate__DOT__sbt19 = ((((0x80000000U 
						  & vlTOPp->io_instruction)
						  ? 0x7ffU
						  : 0U) 
						<< 0x15U) 
					       | ((0x100000U 
						   & (vlTOPp->io_instruction 
						      >> 0xbU)) 
						  | ((0xff000U 
						      & vlTOPp->io_instruction) 
						     | ((0x800U 
							 & (vlTOPp->io_instruction 
							    >> 9U)) 
							| (0x7feU 
							   & (vlTOPp->io_instruction 
							      >> 0x14U))))));
    vlTOPp->Top__DOT__alucontrol__DOT___T_18 = ((8U 
						 & (vlTOPp->io_instruction 
						    >> 0x1bU)) 
						| (7U 
						   & (vlTOPp->io_instruction 
						      >> 0xcU)));
    vlTOPp->Top__DOT__immediate__DOT__output2 = (((
						   (0x80000000U 
						    & vlTOPp->io_instruction)
						    ? 0x7ffffU
						    : 0U) 
						  << 0xcU) 
						 | ((0xfe0U 
						     & (vlTOPp->io_instruction 
							>> 0x14U)) 
						    | (0x1fU 
						       & (vlTOPp->io_instruction 
							  >> 7U))));
    vlTOPp->Top__DOT__immediate_io_I_Immediate = ((0x80000000U 
						   & (((0x80000000U 
							& vlTOPp->io_instruction)
						        ? 0x7ffffU
						        : 0U) 
						      << 0xdU)) 
						  | ((((0x80000000U 
							& vlTOPp->io_instruction)
						        ? 0x7ffffU
						        : 0U) 
						      << 0xcU) 
						     | (0xfffU 
							& (vlTOPp->io_instruction 
							   >> 0x14U))));
    vlTOPp->Top__DOT__register_io_rs2 = ((0x1fU == 
					  (0x1fU & 
					   (vlTOPp->io_instruction 
					    >> 0x14U)))
					  ? vlTOPp->Top__DOT__register__DOT__registers_c_31
					  : ((0x1eU 
					      == (0x1fU 
						  & (vlTOPp->io_instruction 
						     >> 0x14U)))
					      ? vlTOPp->Top__DOT__register__DOT__registers_c_30
					      : ((0x1dU 
						  == 
						  (0x1fU 
						   & (vlTOPp->io_instruction 
						      >> 0x14U)))
						  ? vlTOPp->Top__DOT__register__DOT__registers_c_29
						  : 
						 ((0x1cU 
						   == 
						   (0x1fU 
						    & (vlTOPp->io_instruction 
						       >> 0x14U)))
						   ? vlTOPp->Top__DOT__register__DOT__registers_c_28
						   : 
						  ((0x1bU 
						    == 
						    (0x1fU 
						     & (vlTOPp->io_instruction 
							>> 0x14U)))
						    ? vlTOPp->Top__DOT__register__DOT__registers_c_27
						    : 
						   ((0x1aU 
						     == 
						     (0x1fU 
						      & (vlTOPp->io_instruction 
							 >> 0x14U)))
						     ? vlTOPp->Top__DOT__register__DOT__registers_c_26
						     : 
						    ((0x19U 
						      == 
						      (0x1fU 
						       & (vlTOPp->io_instruction 
							  >> 0x14U)))
						      ? vlTOPp->Top__DOT__register__DOT__registers_c_25
						      : 
						     ((0x18U 
						       == 
						       (0x1fU 
							& (vlTOPp->io_instruction 
							   >> 0x14U)))
						       ? vlTOPp->Top__DOT__register__DOT__registers_c_24
						       : 
						      ((0x17U 
							== 
							(0x1fU 
							 & (vlTOPp->io_instruction 
							    >> 0x14U)))
						        ? vlTOPp->Top__DOT__register__DOT__registers_c_23
						        : 
						       ((0x16U 
							 == 
							 (0x1fU 
							  & (vlTOPp->io_instruction 
							     >> 0x14U)))
							 ? vlTOPp->Top__DOT__register__DOT__registers_c_22
							 : 
							((0x15U 
							  == 
							  (0x1fU 
							   & (vlTOPp->io_instruction 
							      >> 0x14U)))
							  ? vlTOPp->Top__DOT__register__DOT__registers_c_21
							  : 
							 ((0x14U 
							   == 
							   (0x1fU 
							    & (vlTOPp->io_instruction 
							       >> 0x14U)))
							   ? vlTOPp->Top__DOT__register__DOT__registers_c_20
							   : 
							  ((0x13U 
							    == 
							    (0x1fU 
							     & (vlTOPp->io_instruction 
								>> 0x14U)))
							    ? vlTOPp->Top__DOT__register__DOT__registers_c_19
							    : 
							   ((0x12U 
							     == 
							     (0x1fU 
							      & (vlTOPp->io_instruction 
								 >> 0x14U)))
							     ? vlTOPp->Top__DOT__register__DOT__registers_c_18
							     : 
							    ((0x11U 
							      == 
							      (0x1fU 
							       & (vlTOPp->io_instruction 
								  >> 0x14U)))
							      ? vlTOPp->Top__DOT__register__DOT__registers_c_17
							      : 
							     ((0x10U 
							       == 
							       (0x1fU 
								& (vlTOPp->io_instruction 
								   >> 0x14U)))
							       ? vlTOPp->Top__DOT__register__DOT__registers_c_16
							       : 
							      ((0xfU 
								== 
								(0x1fU 
								 & (vlTOPp->io_instruction 
								    >> 0x14U)))
							        ? vlTOPp->Top__DOT__register__DOT__registers_c_15
							        : 
							       ((0xeU 
								 == 
								 (0x1fU 
								  & (vlTOPp->io_instruction 
								     >> 0x14U)))
								 ? vlTOPp->Top__DOT__register__DOT__registers_c_14
								 : 
								((0xdU 
								  == 
								  (0x1fU 
								   & (vlTOPp->io_instruction 
								      >> 0x14U)))
								  ? vlTOPp->Top__DOT__register__DOT__registers_c_13
								  : 
								 ((0xcU 
								   == 
								   (0x1fU 
								    & (vlTOPp->io_instruction 
								       >> 0x14U)))
								   ? vlTOPp->Top__DOT__register__DOT__registers_c_12
								   : 
								  ((0xbU 
								    == 
								    (0x1fU 
								     & (vlTOPp->io_instruction 
									>> 0x14U)))
								    ? vlTOPp->Top__DOT__register__DOT__registers_c_11
								    : 
								   ((0xaU 
								     == 
								     (0x1fU 
								      & (vlTOPp->io_instruction 
									 >> 0x14U)))
								     ? vlTOPp->Top__DOT__register__DOT__registers_c_10
								     : 
								    ((9U 
								      == 
								      (0x1fU 
								       & (vlTOPp->io_instruction 
									  >> 0x14U)))
								      ? vlTOPp->Top__DOT__register__DOT__registers_c_9
								      : 
								     ((8U 
								       == 
								       (0x1fU 
									& (vlTOPp->io_instruction 
									   >> 0x14U)))
								       ? vlTOPp->Top__DOT__register__DOT__registers_c_8
								       : 
								      ((7U 
									== 
									(0x1fU 
									 & (vlTOPp->io_instruction 
									    >> 0x14U)))
								        ? vlTOPp->Top__DOT__register__DOT__registers_c_7
								        : 
								       ((6U 
									 == 
									 (0x1fU 
									  & (vlTOPp->io_instruction 
									     >> 0x14U)))
									 ? vlTOPp->Top__DOT__register__DOT__registers_c_6
									 : 
									((5U 
									  == 
									  (0x1fU 
									   & (vlTOPp->io_instruction 
									      >> 0x14U)))
									  ? vlTOPp->Top__DOT__register__DOT__registers_c_5
									  : 
									 ((4U 
									   == 
									   (0x1fU 
									    & (vlTOPp->io_instruction 
									       >> 0x14U)))
									   ? vlTOPp->Top__DOT__register__DOT__registers_c_4
									   : 
									  ((3U 
									    == 
									    (0x1fU 
									     & (vlTOPp->io_instruction 
										>> 0x14U)))
									    ? vlTOPp->Top__DOT__register__DOT__registers_c_3
									    : 
									   ((2U 
									     == 
									     (0x1fU 
									      & (vlTOPp->io_instruction 
										>> 0x14U)))
									     ? vlTOPp->Top__DOT__register__DOT__registers_c_2
									     : 
									    ((1U 
									      == 
									      (0x1fU 
									       & (vlTOPp->io_instruction 
										>> 0x14U)))
									      ? vlTOPp->Top__DOT__register__DOT__registers_c_1
									      : vlTOPp->Top__DOT__register__DOT__registers_c_0)))))))))))))))))))))))))))))));
    vlTOPp->Top__DOT__register_io_rs1 = ((0x1fU == 
					  (0x1fU & 
					   (vlTOPp->io_instruction 
					    >> 0xfU)))
					  ? vlTOPp->Top__DOT__register__DOT__registers_c_31
					  : ((0x1eU 
					      == (0x1fU 
						  & (vlTOPp->io_instruction 
						     >> 0xfU)))
					      ? vlTOPp->Top__DOT__register__DOT__registers_c_30
					      : ((0x1dU 
						  == 
						  (0x1fU 
						   & (vlTOPp->io_instruction 
						      >> 0xfU)))
						  ? vlTOPp->Top__DOT__register__DOT__registers_c_29
						  : 
						 ((0x1cU 
						   == 
						   (0x1fU 
						    & (vlTOPp->io_instruction 
						       >> 0xfU)))
						   ? vlTOPp->Top__DOT__register__DOT__registers_c_28
						   : 
						  ((0x1bU 
						    == 
						    (0x1fU 
						     & (vlTOPp->io_instruction 
							>> 0xfU)))
						    ? vlTOPp->Top__DOT__register__DOT__registers_c_27
						    : 
						   ((0x1aU 
						     == 
						     (0x1fU 
						      & (vlTOPp->io_instruction 
							 >> 0xfU)))
						     ? vlTOPp->Top__DOT__register__DOT__registers_c_26
						     : 
						    ((0x19U 
						      == 
						      (0x1fU 
						       & (vlTOPp->io_instruction 
							  >> 0xfU)))
						      ? vlTOPp->Top__DOT__register__DOT__registers_c_25
						      : 
						     ((0x18U 
						       == 
						       (0x1fU 
							& (vlTOPp->io_instruction 
							   >> 0xfU)))
						       ? vlTOPp->Top__DOT__register__DOT__registers_c_24
						       : 
						      ((0x17U 
							== 
							(0x1fU 
							 & (vlTOPp->io_instruction 
							    >> 0xfU)))
						        ? vlTOPp->Top__DOT__register__DOT__registers_c_23
						        : 
						       ((0x16U 
							 == 
							 (0x1fU 
							  & (vlTOPp->io_instruction 
							     >> 0xfU)))
							 ? vlTOPp->Top__DOT__register__DOT__registers_c_22
							 : 
							((0x15U 
							  == 
							  (0x1fU 
							   & (vlTOPp->io_instruction 
							      >> 0xfU)))
							  ? vlTOPp->Top__DOT__register__DOT__registers_c_21
							  : 
							 ((0x14U 
							   == 
							   (0x1fU 
							    & (vlTOPp->io_instruction 
							       >> 0xfU)))
							   ? vlTOPp->Top__DOT__register__DOT__registers_c_20
							   : 
							  ((0x13U 
							    == 
							    (0x1fU 
							     & (vlTOPp->io_instruction 
								>> 0xfU)))
							    ? vlTOPp->Top__DOT__register__DOT__registers_c_19
							    : 
							   ((0x12U 
							     == 
							     (0x1fU 
							      & (vlTOPp->io_instruction 
								 >> 0xfU)))
							     ? vlTOPp->Top__DOT__register__DOT__registers_c_18
							     : 
							    ((0x11U 
							      == 
							      (0x1fU 
							       & (vlTOPp->io_instruction 
								  >> 0xfU)))
							      ? vlTOPp->Top__DOT__register__DOT__registers_c_17
							      : 
							     ((0x10U 
							       == 
							       (0x1fU 
								& (vlTOPp->io_instruction 
								   >> 0xfU)))
							       ? vlTOPp->Top__DOT__register__DOT__registers_c_16
							       : 
							      ((0xfU 
								== 
								(0x1fU 
								 & (vlTOPp->io_instruction 
								    >> 0xfU)))
							        ? vlTOPp->Top__DOT__register__DOT__registers_c_15
							        : 
							       ((0xeU 
								 == 
								 (0x1fU 
								  & (vlTOPp->io_instruction 
								     >> 0xfU)))
								 ? vlTOPp->Top__DOT__register__DOT__registers_c_14
								 : 
								((0xdU 
								  == 
								  (0x1fU 
								   & (vlTOPp->io_instruction 
								      >> 0xfU)))
								  ? vlTOPp->Top__DOT__register__DOT__registers_c_13
								  : 
								 ((0xcU 
								   == 
								   (0x1fU 
								    & (vlTOPp->io_instruction 
								       >> 0xfU)))
								   ? vlTOPp->Top__DOT__register__DOT__registers_c_12
								   : 
								  ((0xbU 
								    == 
								    (0x1fU 
								     & (vlTOPp->io_instruction 
									>> 0xfU)))
								    ? vlTOPp->Top__DOT__register__DOT__registers_c_11
								    : 
								   ((0xaU 
								     == 
								     (0x1fU 
								      & (vlTOPp->io_instruction 
									 >> 0xfU)))
								     ? vlTOPp->Top__DOT__register__DOT__registers_c_10
								     : 
								    ((9U 
								      == 
								      (0x1fU 
								       & (vlTOPp->io_instruction 
									  >> 0xfU)))
								      ? vlTOPp->Top__DOT__register__DOT__registers_c_9
								      : 
								     ((8U 
								       == 
								       (0x1fU 
									& (vlTOPp->io_instruction 
									   >> 0xfU)))
								       ? vlTOPp->Top__DOT__register__DOT__registers_c_8
								       : 
								      ((7U 
									== 
									(0x1fU 
									 & (vlTOPp->io_instruction 
									    >> 0xfU)))
								        ? vlTOPp->Top__DOT__register__DOT__registers_c_7
								        : 
								       ((6U 
									 == 
									 (0x1fU 
									  & (vlTOPp->io_instruction 
									     >> 0xfU)))
									 ? vlTOPp->Top__DOT__register__DOT__registers_c_6
									 : 
									((5U 
									  == 
									  (0x1fU 
									   & (vlTOPp->io_instruction 
									      >> 0xfU)))
									  ? vlTOPp->Top__DOT__register__DOT__registers_c_5
									  : 
									 ((4U 
									   == 
									   (0x1fU 
									    & (vlTOPp->io_instruction 
									       >> 0xfU)))
									   ? vlTOPp->Top__DOT__register__DOT__registers_c_4
									   : 
									  ((3U 
									    == 
									    (0x1fU 
									     & (vlTOPp->io_instruction 
										>> 0xfU)))
									    ? vlTOPp->Top__DOT__register__DOT__registers_c_3
									    : 
									   ((2U 
									     == 
									     (0x1fU 
									      & (vlTOPp->io_instruction 
										>> 0xfU)))
									     ? vlTOPp->Top__DOT__register__DOT__registers_c_2
									     : 
									    ((1U 
									      == 
									      (0x1fU 
									       & (vlTOPp->io_instruction 
										>> 0xfU)))
									      ? vlTOPp->Top__DOT__register__DOT__registers_c_1
									      : vlTOPp->Top__DOT__register__DOT__registers_c_0)))))))))))))))))))))))))))))));
    vlTOPp->Top__DOT__control__DOT__InstDecode_io_I_Type 
	= ((0x33U != (0x7fU & vlTOPp->io_instruction)) 
	   & ((3U != (0x7fU & vlTOPp->io_instruction)) 
	      & ((0x23U != (0x7fU & vlTOPp->io_instruction)) 
		 & ((0x63U != (0x7fU & vlTOPp->io_instruction)) 
		    & (0x13U == (0x7fU & vlTOPp->io_instruction))))));
    vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store 
	= ((0x33U != (0x7fU & vlTOPp->io_instruction)) 
	   & ((3U != (0x7fU & vlTOPp->io_instruction)) 
	      & (0x23U == (0x7fU & vlTOPp->io_instruction))));
    vlTOPp->Top__DOT__control__DOT__InstDecode_io_Branch 
	= ((0x33U != (0x7fU & vlTOPp->io_instruction)) 
	   & ((3U != (0x7fU & vlTOPp->io_instruction)) 
	      & ((0x23U != (0x7fU & vlTOPp->io_instruction)) 
		 & (0x63U == (0x7fU & vlTOPp->io_instruction)))));
    vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load 
	= ((0x33U != (0x7fU & vlTOPp->io_instruction)) 
	   & (3U == (0x7fU & vlTOPp->io_instruction)));
    vlTOPp->Top__DOT__control__DOT__InstDecode_io_LUI 
	= ((0x33U != (0x7fU & vlTOPp->io_instruction)) 
	   & ((3U != (0x7fU & vlTOPp->io_instruction)) 
	      & ((0x23U != (0x7fU & vlTOPp->io_instruction)) 
		 & ((0x63U != (0x7fU & vlTOPp->io_instruction)) 
		    & ((0x13U != (0x7fU & vlTOPp->io_instruction)) 
		       & ((0x67U != (0x7fU & vlTOPp->io_instruction)) 
			  & ((0x6fU != (0x7fU & vlTOPp->io_instruction)) 
			     & (0x37U == (0x7fU & vlTOPp->io_instruction)))))))));
    vlTOPp->Top__DOT__control__DOT__InstDecode_io_JALR 
	= ((0x33U != (0x7fU & vlTOPp->io_instruction)) 
	   & ((3U != (0x7fU & vlTOPp->io_instruction)) 
	      & ((0x23U != (0x7fU & vlTOPp->io_instruction)) 
		 & ((0x63U != (0x7fU & vlTOPp->io_instruction)) 
		    & ((0x13U != (0x7fU & vlTOPp->io_instruction)) 
		       & (0x67U == (0x7fU & vlTOPp->io_instruction)))))));
    vlTOPp->Top__DOT__control__DOT__InstDecode_io_JAL 
	= ((0x33U != (0x7fU & vlTOPp->io_instruction)) 
	   & ((3U != (0x7fU & vlTOPp->io_instruction)) 
	      & ((0x23U != (0x7fU & vlTOPp->io_instruction)) 
		 & ((0x63U != (0x7fU & vlTOPp->io_instruction)) 
		    & ((0x13U != (0x7fU & vlTOPp->io_instruction)) 
		       & ((0x67U != (0x7fU & vlTOPp->io_instruction)) 
			  & (0x6fU == (0x7fU & vlTOPp->io_instruction))))))));
    vlTOPp->io_branch = ((0x33U != (0x7fU & vlTOPp->io_instruction)) 
			 & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load)) 
			    & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store)) 
			       & (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Branch))));
    vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite 
	= ((0x33U == (0x7fU & vlTOPp->io_instruction)) 
	   | ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load) 
	      | ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store)) 
		 & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Branch)) 
		    & ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_I_Type) 
		       | ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JALR) 
			  | ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JAL) 
			     | (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_LUI))))))));
    vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_next_PC_sel 
	= ((0x33U == (0x7fU & vlTOPp->io_instruction))
	    ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load)
		     ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store)
			      ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Branch)
				       ? 1U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_I_Type)
					        ? 0U
					        : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JALR)
						    ? 3U
						    : 
						   ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JAL)
						     ? 2U
						     : 0U)))))));
    vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_ALUoperation 
	= ((0x33U == (0x7fU & vlTOPp->io_instruction))
	    ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load)
		     ? 4U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store)
			      ? 5U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Branch)
				       ? 2U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_I_Type)
					        ? 1U
					        : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JALR)
						    ? 3U
						    : 
						   ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JAL)
						     ? 3U
						     : 
						    ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_LUI)
						      ? 6U
						      : 0U))))))));
    vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_operand_A_sel 
	= ((0x33U == (0x7fU & vlTOPp->io_instruction))
	    ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load)
		     ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store)
			      ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Branch)
				       ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_I_Type)
					        ? 0U
					        : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JALR)
						    ? 2U
						    : 
						   ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JAL)
						     ? 2U
						     : 
						    ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_LUI)
						      ? 3U
						      : 0U))))))));
    vlTOPp->Top__DOT__control__DOT__CtrlDecode__DOT___GEN_12 
	= ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JALR)) 
	   & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JAL)) 
	      & (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_LUI)));
}

VL_INLINE_OPT void VTop::_sequent__TOP__6(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__6\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_branch = ((0x33U != (0x7fU & vlTOPp->io_instruction)) 
			 & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load)) 
			    & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store)) 
			       & (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Branch))));
    vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite 
	= ((0x33U == (0x7fU & vlTOPp->io_instruction)) 
	   | ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load) 
	      | ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store)) 
		 & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Branch)) 
		    & ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_I_Type) 
		       | ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JALR) 
			  | ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JAL) 
			     | (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_LUI))))))));
    vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_next_PC_sel 
	= ((0x33U == (0x7fU & vlTOPp->io_instruction))
	    ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load)
		     ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store)
			      ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Branch)
				       ? 1U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_I_Type)
					        ? 0U
					        : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JALR)
						    ? 3U
						    : 
						   ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JAL)
						     ? 2U
						     : 0U)))))));
    vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_ALUoperation 
	= ((0x33U == (0x7fU & vlTOPp->io_instruction))
	    ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load)
		     ? 4U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store)
			      ? 5U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Branch)
				       ? 2U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_I_Type)
					        ? 1U
					        : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JALR)
						    ? 3U
						    : 
						   ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JAL)
						     ? 3U
						     : 
						    ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_LUI)
						      ? 6U
						      : 0U))))))));
    vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_operand_A_sel 
	= ((0x33U == (0x7fU & vlTOPp->io_instruction))
	    ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load)
		     ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store)
			      ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Branch)
				       ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_I_Type)
					        ? 0U
					        : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JALR)
						    ? 2U
						    : 
						   ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JAL)
						     ? 2U
						     : 
						    ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_LUI)
						      ? 3U
						      : 0U))))))));
    vlTOPp->Top__DOT__control__DOT__CtrlDecode__DOT___GEN_12 
	= ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JALR)) 
	   & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JAL)) 
	      & (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_LUI)));
    vlTOPp->Top__DOT__alucontrol_io_control = ((0U 
						== (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_ALUoperation))
					        ? (IData)(vlTOPp->Top__DOT__alucontrol__DOT___T_18)
					        : (
						   (4U 
						    == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_ALUoperation))
						    ? 0U
						    : 
						   ((5U 
						     == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_ALUoperation))
						     ? 0U
						     : 
						    ((1U 
						      == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_ALUoperation))
						      ? 
						     ((5U 
						       == 
						       (7U 
							& (vlTOPp->io_instruction 
							   >> 0xcU)))
						       ? (IData)(vlTOPp->Top__DOT__alucontrol__DOT___T_18)
						       : 
						      (7U 
						       & (vlTOPp->io_instruction 
							  >> 0xcU)))
						      : 
						     ((2U 
						       == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_ALUoperation))
						       ? 
						      (0x10U 
						       | (7U 
							  & (vlTOPp->io_instruction 
							     >> 0xcU)))
						       : 
						      ((3U 
							== (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_ALUoperation))
						        ? 0x1fU
						        : 0U))))));
    vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_operand_B_sel 
	= ((0x33U != (0x7fU & vlTOPp->io_instruction)) 
	   & ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load) 
	      | ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store) 
		 | ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Branch)) 
		    & ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_I_Type) 
		       | (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode__DOT___GEN_12))))));
    vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_extend_sel 
	= ((0x33U == (0x7fU & vlTOPp->io_instruction))
	    ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load)
		     ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store)
			      ? 2U : ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Branch)) 
				      & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_I_Type)) 
					 & (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode__DOT___GEN_12))))));
}

void VTop::_settle__TOP__7(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__7\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__alucontrol_io_control = ((0U 
						== (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_ALUoperation))
					        ? (IData)(vlTOPp->Top__DOT__alucontrol__DOT___T_18)
					        : (
						   (4U 
						    == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_ALUoperation))
						    ? 0U
						    : 
						   ((5U 
						     == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_ALUoperation))
						     ? 0U
						     : 
						    ((1U 
						      == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_ALUoperation))
						      ? 
						     ((5U 
						       == 
						       (7U 
							& (vlTOPp->io_instruction 
							   >> 0xcU)))
						       ? (IData)(vlTOPp->Top__DOT__alucontrol__DOT___T_18)
						       : 
						      (7U 
						       & (vlTOPp->io_instruction 
							  >> 0xcU)))
						      : 
						     ((2U 
						       == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_ALUoperation))
						       ? 
						      (0x10U 
						       | (7U 
							  & (vlTOPp->io_instruction 
							     >> 0xcU)))
						       : 
						      ((3U 
							== (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_ALUoperation))
						        ? 0x1fU
						        : 0U))))));
    vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_operand_B_sel 
	= ((0x33U != (0x7fU & vlTOPp->io_instruction)) 
	   & ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load) 
	      | ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store) 
		 | ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Branch)) 
		    & ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_I_Type) 
		       | (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode__DOT___GEN_12))))));
    vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_extend_sel 
	= ((0x33U == (0x7fU & vlTOPp->io_instruction))
	    ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load)
		     ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store)
			      ? 2U : ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Branch)) 
				      & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_I_Type)) 
					 & (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode__DOT___GEN_12))))));
    vlTOPp->Top__DOT___GEN_9 = ((2U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_extend_sel))
				 ? vlTOPp->Top__DOT__register_io_rs1
				 : ((2U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_operand_A_sel))
				     ? ((IData)(4U) 
					+ vlTOPp->Top__DOT__PC__DOT__pc1)
				     : vlTOPp->Top__DOT__register_io_rs1));
    vlTOPp->Top__DOT___GEN_10 = ((2U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_extend_sel))
				  ? ((0x80000000U & 
				      (vlTOPp->Top__DOT__immediate__DOT__output2 
				       << 1U)) | vlTOPp->Top__DOT__immediate__DOT__output2)
				  : ((IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_operand_B_sel)
				      ? vlTOPp->Top__DOT__immediate_io_I_Immediate
				      : vlTOPp->Top__DOT__register_io_rs2));
}

VL_INLINE_OPT void VTop::_sequent__TOP__8(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__8\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT___GEN_9 = ((2U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_extend_sel))
				 ? vlTOPp->Top__DOT__register_io_rs1
				 : ((2U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_operand_A_sel))
				     ? ((IData)(4U) 
					+ vlTOPp->Top__DOT__PC__DOT__pc1)
				     : vlTOPp->Top__DOT__register_io_rs1));
    vlTOPp->Top__DOT___GEN_10 = ((2U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_extend_sel))
				  ? ((0x80000000U & 
				      (vlTOPp->Top__DOT__immediate__DOT__output2 
				       << 1U)) | vlTOPp->Top__DOT__immediate__DOT__output2)
				  : ((IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_operand_B_sel)
				      ? vlTOPp->Top__DOT__immediate_io_I_Immediate
				      : vlTOPp->Top__DOT__register_io_rs2));
    vlTOPp->Top__DOT__alu_io_A = ((1U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_extend_sel))
				   ? ((3U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_operand_A_sel))
				       ? ((IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_operand_B_sel)
					   ? vlTOPp->Top__DOT__register_io_rs1
					   : vlTOPp->Top__DOT___GEN_9)
				       : vlTOPp->Top__DOT___GEN_9)
				   : vlTOPp->Top__DOT___GEN_9);
    vlTOPp->Top__DOT__alu_io_B = ((1U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_extend_sel))
				   ? ((3U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_operand_A_sel))
				       ? ((IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_operand_B_sel)
					   ? (IData)(
						     (VL_ULL(0x3fffffffffff) 
						      & ((QData)((IData)(
									 ((((0x80000000U 
									     & vlTOPp->io_instruction)
									     ? 0x7ffU
									     : 0U) 
									   << 0x14U) 
									  | (0xfffffU 
									     & (vlTOPp->io_instruction 
										>> 0xcU))))) 
							 << 0xcU)))
					   : vlTOPp->Top__DOT___GEN_10)
				       : vlTOPp->Top__DOT___GEN_10)
				   : vlTOPp->Top__DOT___GEN_10);
}

void VTop::_settle__TOP__9(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__9\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__alu_io_A = ((1U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_extend_sel))
				   ? ((3U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_operand_A_sel))
				       ? ((IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_operand_B_sel)
					   ? vlTOPp->Top__DOT__register_io_rs1
					   : vlTOPp->Top__DOT___GEN_9)
				       : vlTOPp->Top__DOT___GEN_9)
				   : vlTOPp->Top__DOT___GEN_9);
    vlTOPp->Top__DOT__alu_io_B = ((1U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_extend_sel))
				   ? ((3U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_operand_A_sel))
				       ? ((IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_operand_B_sel)
					   ? (IData)(
						     (VL_ULL(0x3fffffffffff) 
						      & ((QData)((IData)(
									 ((((0x80000000U 
									     & vlTOPp->io_instruction)
									     ? 0x7ffU
									     : 0U) 
									   << 0x14U) 
									  | (0xfffffU 
									     & (vlTOPp->io_instruction 
										>> 0xcU))))) 
							 << 0xcU)))
					   : vlTOPp->Top__DOT___GEN_10)
				       : vlTOPp->Top__DOT___GEN_10)
				   : vlTOPp->Top__DOT___GEN_10);
    vlTOPp->Top__DOT__alu__DOT___T_78 = (vlTOPp->Top__DOT__alu_io_A 
					 == vlTOPp->Top__DOT__alu_io_B);
    vlTOPp->Top__DOT__alu__DOT___T_32 = VL_LTS_III(1,32,32, vlTOPp->Top__DOT__alu_io_A, vlTOPp->Top__DOT__alu_io_B);
}

VL_INLINE_OPT void VTop::_sequent__TOP__10(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__10\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__alu__DOT___T_78 = (vlTOPp->Top__DOT__alu_io_A 
					 == vlTOPp->Top__DOT__alu_io_B);
    vlTOPp->Top__DOT__alu__DOT___T_32 = VL_LTS_III(1,32,32, vlTOPp->Top__DOT__alu_io_A, vlTOPp->Top__DOT__alu_io_B);
    vlTOPp->Top__DOT__alu__DOT___GEN_11 = ((0x10U == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
					    ? ((IData)(vlTOPp->Top__DOT__alu__DOT___T_78)
					        ? 1U
					        : 0U)
					    : ((0x11U 
						== (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
					        ? ((IData)(vlTOPp->Top__DOT__alu__DOT___T_78)
						    ? 0U
						    : 1U)
					        : (
						   (0x14U 
						    == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
						    ? 
						   ((IData)(vlTOPp->Top__DOT__alu__DOT___T_32)
						     ? 1U
						     : 0U)
						    : 
						   ((0x15U 
						     == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
						     ? 
						    (((IData)(vlTOPp->Top__DOT__alu__DOT___T_78) 
						      | VL_GTS_III(1,32,32, vlTOPp->Top__DOT__alu_io_A, vlTOPp->Top__DOT__alu_io_B))
						      ? 1U
						      : 0U)
						     : 
						    ((0x17U 
						      == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
						      ? 
						     (((vlTOPp->Top__DOT__alu_io_A 
							== vlTOPp->Top__DOT__alu_io_B) 
						       | (vlTOPp->Top__DOT__alu_io_A 
							  > vlTOPp->Top__DOT__alu_io_B))
						       ? 1U
						       : 0U)
						      : 0U)))));
}

void VTop::_settle__TOP__11(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__11\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__alu__DOT___GEN_11 = ((0x10U == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
					    ? ((IData)(vlTOPp->Top__DOT__alu__DOT___T_78)
					        ? 1U
					        : 0U)
					    : ((0x11U 
						== (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
					        ? ((IData)(vlTOPp->Top__DOT__alu__DOT___T_78)
						    ? 0U
						    : 1U)
					        : (
						   (0x14U 
						    == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
						    ? 
						   ((IData)(vlTOPp->Top__DOT__alu__DOT___T_32)
						     ? 1U
						     : 0U)
						    : 
						   ((0x15U 
						     == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
						     ? 
						    (((IData)(vlTOPp->Top__DOT__alu__DOT___T_78) 
						      | VL_GTS_III(1,32,32, vlTOPp->Top__DOT__alu_io_A, vlTOPp->Top__DOT__alu_io_B))
						      ? 1U
						      : 0U)
						     : 
						    ((0x17U 
						      == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
						      ? 
						     (((vlTOPp->Top__DOT__alu_io_A 
							== vlTOPp->Top__DOT__alu_io_B) 
						       | (vlTOPp->Top__DOT__alu_io_A 
							  > vlTOPp->Top__DOT__alu_io_B))
						       ? 1U
						       : 0U)
						      : 0U)))));
    vlTOPp->Top__DOT__alu__DOT___GEN_12 = (0x1fU & 
					   ((0xdU == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
					     ? ((0x1fU 
						 & vlTOPp->Top__DOT__alu_io_A) 
						>> 
						(0x1fU 
						 & vlTOPp->Top__DOT__alu_io_B))
					     : ((0x1cU 
						 & (VL_NEGATE_I((IData)(
									(1U 
									 & ((IData)(vlTOPp->Top__DOT__alu__DOT___GEN_11) 
									    >> 1U)))) 
						    << 2U)) 
						| (IData)(vlTOPp->Top__DOT__alu__DOT___GEN_11))));
}

VL_INLINE_OPT void VTop::_sequent__TOP__12(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__12\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__alu__DOT___GEN_12 = (0x1fU & 
					   ((0xdU == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
					     ? ((0x1fU 
						 & vlTOPp->Top__DOT__alu_io_A) 
						>> 
						(0x1fU 
						 & vlTOPp->Top__DOT__alu_io_B))
					     : ((0x1cU 
						 & (VL_NEGATE_I((IData)(
									(1U 
									 & ((IData)(vlTOPp->Top__DOT__alu__DOT___GEN_11) 
									    >> 1U)))) 
						    << 2U)) 
						| (IData)(vlTOPp->Top__DOT__alu__DOT___GEN_11))));
    vlTOPp->Top__DOT__alu__DOT___GEN_20 = ((0x1fU == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
					    ? vlTOPp->Top__DOT__alu_io_A
					    : ((1U 
						== (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
					        ? (
						   (0xfffffffcU 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (((IData)(vlTOPp->Top__DOT__alu__DOT___T_32)
										 ? 1U
										 : 0U) 
									       >> 1U)))) 
						       << 2U)) 
						   | ((IData)(vlTOPp->Top__DOT__alu__DOT___T_32)
						       ? 1U
						       : 0U))
					        : (
						   ((3U 
						     == (IData)(vlTOPp->Top__DOT__alucontrol_io_control)) 
						    | (0x16U 
						       == (IData)(vlTOPp->Top__DOT__alucontrol_io_control)))
						    ? 
						   ((0xfffffffcU 
						     & (VL_NEGATE_I((IData)(
									    (1U 
									     & (((vlTOPp->Top__DOT__alu_io_A 
										< vlTOPp->Top__DOT__alu_io_B)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							<< 2U)) 
						    | ((vlTOPp->Top__DOT__alu_io_A 
							< vlTOPp->Top__DOT__alu_io_B)
						        ? 1U
						        : 0U))
						    : 
						   ((4U 
						     == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
						     ? 
						    (vlTOPp->Top__DOT__alu_io_A 
						     ^ vlTOPp->Top__DOT__alu_io_B)
						     : 
						    ((5U 
						      == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
						      ? 
						     ((0x1fU 
						       >= vlTOPp->Top__DOT__alu_io_B)
						       ? 
						      (vlTOPp->Top__DOT__alu_io_A 
						       >> vlTOPp->Top__DOT__alu_io_B)
						       : 0U)
						      : 
						     ((6U 
						       == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
						       ? 
						      (vlTOPp->Top__DOT__alu_io_A 
						       | vlTOPp->Top__DOT__alu_io_B)
						       : 
						      ((7U 
							== (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
						        ? 
						       (vlTOPp->Top__DOT__alu_io_A 
							& vlTOPp->Top__DOT__alu_io_B)
						        : 
						       ((8U 
							 == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
							 ? 
							(vlTOPp->Top__DOT__alu_io_A 
							 - vlTOPp->Top__DOT__alu_io_B)
							 : 
							((0xffffffe0U 
							  & (VL_NEGATE_I((IData)(
										(1U 
										& ((IData)(vlTOPp->Top__DOT__alu__DOT___GEN_12) 
										>> 4U)))) 
							     << 5U)) 
							 | (IData)(vlTOPp->Top__DOT__alu__DOT___GEN_12))))))))));
}

void VTop::_settle__TOP__13(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__13\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__alu__DOT___GEN_20 = ((0x1fU == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
					    ? vlTOPp->Top__DOT__alu_io_A
					    : ((1U 
						== (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
					        ? (
						   (0xfffffffcU 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (((IData)(vlTOPp->Top__DOT__alu__DOT___T_32)
										 ? 1U
										 : 0U) 
									       >> 1U)))) 
						       << 2U)) 
						   | ((IData)(vlTOPp->Top__DOT__alu__DOT___T_32)
						       ? 1U
						       : 0U))
					        : (
						   ((3U 
						     == (IData)(vlTOPp->Top__DOT__alucontrol_io_control)) 
						    | (0x16U 
						       == (IData)(vlTOPp->Top__DOT__alucontrol_io_control)))
						    ? 
						   ((0xfffffffcU 
						     & (VL_NEGATE_I((IData)(
									    (1U 
									     & (((vlTOPp->Top__DOT__alu_io_A 
										< vlTOPp->Top__DOT__alu_io_B)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							<< 2U)) 
						    | ((vlTOPp->Top__DOT__alu_io_A 
							< vlTOPp->Top__DOT__alu_io_B)
						        ? 1U
						        : 0U))
						    : 
						   ((4U 
						     == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
						     ? 
						    (vlTOPp->Top__DOT__alu_io_A 
						     ^ vlTOPp->Top__DOT__alu_io_B)
						     : 
						    ((5U 
						      == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
						      ? 
						     ((0x1fU 
						       >= vlTOPp->Top__DOT__alu_io_B)
						       ? 
						      (vlTOPp->Top__DOT__alu_io_A 
						       >> vlTOPp->Top__DOT__alu_io_B)
						       : 0U)
						      : 
						     ((6U 
						       == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
						       ? 
						      (vlTOPp->Top__DOT__alu_io_A 
						       | vlTOPp->Top__DOT__alu_io_B)
						       : 
						      ((7U 
							== (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
						        ? 
						       (vlTOPp->Top__DOT__alu_io_A 
							& vlTOPp->Top__DOT__alu_io_B)
						        : 
						       ((8U 
							 == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
							 ? 
							(vlTOPp->Top__DOT__alu_io_A 
							 - vlTOPp->Top__DOT__alu_io_B)
							 : 
							((0xffffffe0U 
							  & (VL_NEGATE_I((IData)(
										(1U 
										& ((IData)(vlTOPp->Top__DOT__alu__DOT___GEN_12) 
										>> 4U)))) 
							     << 5U)) 
							 | (IData)(vlTOPp->Top__DOT__alu__DOT___GEN_12))))))))));
    vlTOPp->Top__DOT__alu__DOT___GEN_22 = (VL_ULL(0x7fffffffffffffff) 
					   & ((0U == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
					       ? (((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& ((vlTOPp->Top__DOT__alu_io_A 
										+ vlTOPp->Top__DOT__alu_io_B) 
										>> 0x1fU))))))) 
						   << 0x20U) 
						  | (QData)((IData)(
								    (vlTOPp->Top__DOT__alu_io_A 
								     + vlTOPp->Top__DOT__alu_io_B))))
					       : ((1U 
						   == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
						   ? 
						  ((QData)((IData)(vlTOPp->Top__DOT__alu_io_A)) 
						   << 
						   (0x1fU 
						    & vlTOPp->Top__DOT__alu_io_B))
						   : 
						  (((QData)((IData)(
								    (0x7fffffffU 
								     & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Top__DOT__alu__DOT___GEN_20 
										>> 0x1fU))))))) 
						    << 0x20U) 
						   | (QData)((IData)(vlTOPp->Top__DOT__alu__DOT___GEN_20))))));
}

VL_INLINE_OPT void VTop::_sequent__TOP__14(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__14\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__alu__DOT___GEN_22 = (VL_ULL(0x7fffffffffffffff) 
					   & ((0U == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
					       ? (((QData)((IData)(
								   (0x7fffffffU 
								    & VL_NEGATE_I((IData)(
										(1U 
										& ((vlTOPp->Top__DOT__alu_io_A 
										+ vlTOPp->Top__DOT__alu_io_B) 
										>> 0x1fU))))))) 
						   << 0x20U) 
						  | (QData)((IData)(
								    (vlTOPp->Top__DOT__alu_io_A 
								     + vlTOPp->Top__DOT__alu_io_B))))
					       : ((1U 
						   == (IData)(vlTOPp->Top__DOT__alucontrol_io_control))
						   ? 
						  ((QData)((IData)(vlTOPp->Top__DOT__alu_io_A)) 
						   << 
						   (0x1fU 
						    & vlTOPp->Top__DOT__alu_io_B))
						   : 
						  (((QData)((IData)(
								    (0x7fffffffU 
								     & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Top__DOT__alu__DOT___GEN_20 
										>> 0x1fU))))))) 
						    << 0x20U) 
						   | (QData)((IData)(vlTOPp->Top__DOT__alu__DOT___GEN_20))))));
    vlTOPp->io_branch2 = ((2U == (3U & ((IData)(vlTOPp->Top__DOT__alucontrol_io_control) 
					>> 3U))) & 
			  (1U == (IData)(vlTOPp->Top__DOT__alu__DOT___GEN_22)));
    vlTOPp->Top__DOT__DataMemory__DOT__mem___05FT_23_data 
	= vlTOPp->Top__DOT__DataMemory__DOT__mem[(0xffU 
						  & (IData)(
							    (vlTOPp->Top__DOT__alu__DOT___GEN_22 
							     >> 2U)))];
}

void VTop::_settle__TOP__15(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__15\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_branch2 = ((2U == (3U & ((IData)(vlTOPp->Top__DOT__alucontrol_io_control) 
					>> 3U))) & 
			  (1U == (IData)(vlTOPp->Top__DOT__alu__DOT___GEN_22)));
    vlTOPp->Top__DOT__DataMemory__DOT__mem___05FT_23_data 
	= vlTOPp->Top__DOT__DataMemory__DOT__mem[(0xffU 
						  & (IData)(
							    (vlTOPp->Top__DOT__alu__DOT___GEN_22 
							     >> 2U)))];
    vlTOPp->Top__DOT__PC_io_input = ((2U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_extend_sel))
				      ? ((IData)(4U) 
					 + vlTOPp->Top__DOT__PC__DOT__pc1)
				      : ((1U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
					  ? (((IData)(vlTOPp->io_branch) 
					      & (IData)(vlTOPp->io_branch2))
					      ? (vlTOPp->Top__DOT__immediate__DOT__sbt13 
						 + vlTOPp->Top__DOT__PC__DOT__pc1)
					      : ((IData)(4U) 
						 + vlTOPp->Top__DOT__PC__DOT__pc1))
					  : ((3U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
					      ? (0xfffffffeU 
						 & (vlTOPp->Top__DOT__register_io_rs1 
						    + vlTOPp->Top__DOT__immediate_io_I_Immediate))
					      : ((2U 
						  == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
						  ? 
						 (vlTOPp->Top__DOT__immediate__DOT__sbt19 
						  + vlTOPp->Top__DOT__PC__DOT__pc1)
						  : 
						 ((0U 
						   == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
						   ? 
						  ((IData)(4U) 
						   + vlTOPp->Top__DOT__PC__DOT__pc1)
						   : 0U)))));
    vlTOPp->Top__DOT__register_io_WriteData = (((0x33U 
						 != 
						 (0x7fU 
						  & vlTOPp->io_instruction)) 
						& (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load))
					        ? (
						   ((0x33U 
						     != 
						     (0x7fU 
						      & vlTOPp->io_instruction)) 
						    & (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load))
						    ? vlTOPp->Top__DOT__DataMemory__DOT__mem___05FT_23_data
						    : 0U)
					        : (IData)(vlTOPp->Top__DOT__alu__DOT___GEN_22));
}

VL_INLINE_OPT void VTop::_sequent__TOP__16(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__16\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__PC_io_input = ((2U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_extend_sel))
				      ? ((IData)(4U) 
					 + vlTOPp->Top__DOT__PC__DOT__pc1)
				      : ((1U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
					  ? (((IData)(vlTOPp->io_branch) 
					      & (IData)(vlTOPp->io_branch2))
					      ? (vlTOPp->Top__DOT__immediate__DOT__sbt13 
						 + vlTOPp->Top__DOT__PC__DOT__pc1)
					      : ((IData)(4U) 
						 + vlTOPp->Top__DOT__PC__DOT__pc1))
					  : ((3U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
					      ? (0xfffffffeU 
						 & (vlTOPp->Top__DOT__register_io_rs1 
						    + vlTOPp->Top__DOT__immediate_io_I_Immediate))
					      : ((2U 
						  == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
						  ? 
						 (vlTOPp->Top__DOT__immediate__DOT__sbt19 
						  + vlTOPp->Top__DOT__PC__DOT__pc1)
						  : 
						 ((0U 
						   == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
						   ? 
						  ((IData)(4U) 
						   + vlTOPp->Top__DOT__PC__DOT__pc1)
						   : 0U)))));
    vlTOPp->Top__DOT__register_io_WriteData = (((0x33U 
						 != 
						 (0x7fU 
						  & vlTOPp->io_instruction)) 
						& (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load))
					        ? (
						   ((0x33U 
						     != 
						     (0x7fU 
						      & vlTOPp->io_instruction)) 
						    & (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load))
						    ? vlTOPp->Top__DOT__DataMemory__DOT__mem___05FT_23_data
						    : 0U)
					        : (IData)(vlTOPp->Top__DOT__alu__DOT___GEN_22));
    vlTOPp->io_reg_out = vlTOPp->Top__DOT__register_io_WriteData;
}

void VTop::_settle__TOP__17(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__17\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_reg_out = vlTOPp->Top__DOT__register_io_WriteData;
}

void VTop::_eval(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_eval\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__4(vlSymsp);
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->_sequent__TOP__8(vlSymsp);
	vlTOPp->_sequent__TOP__10(vlSymsp);
	vlTOPp->_sequent__TOP__12(vlSymsp);
	vlTOPp->_sequent__TOP__14(vlSymsp);
	vlTOPp->_sequent__TOP__16(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTop::_eval_initial(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_eval_initial\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VTop::final() {
    VL_DEBUG_IF(VL_PRINTF("    VTop::final\n"); );
    // Variables
    VTop__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTop::_eval_settle(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_eval_settle\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->_settle__TOP__9(vlSymsp);
    vlTOPp->_settle__TOP__11(vlSymsp);
    vlTOPp->_settle__TOP__13(vlSymsp);
    vlTOPp->_settle__TOP__15(vlSymsp);
    vlTOPp->_settle__TOP__17(vlSymsp);
}

VL_INLINE_OPT QData VTop::_change_request(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_change_request\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void VTop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_instruction = VL_RAND_RESET_I(32);
    io_reg_out = VL_RAND_RESET_I(32);
    io_branch = VL_RAND_RESET_I(1);
    io_branch2 = VL_RAND_RESET_I(1);
    Top__DOT__register_io_WriteData = VL_RAND_RESET_I(32);
    Top__DOT__register_io_rs1 = VL_RAND_RESET_I(32);
    Top__DOT__register_io_rs2 = VL_RAND_RESET_I(32);
    Top__DOT__alu_io_A = VL_RAND_RESET_I(32);
    Top__DOT__alu_io_B = VL_RAND_RESET_I(32);
    Top__DOT__alucontrol_io_control = VL_RAND_RESET_I(5);
    Top__DOT__immediate_io_I_Immediate = VL_RAND_RESET_I(32);
    Top__DOT__PC_io_input = VL_RAND_RESET_I(32);
    Top__DOT___GEN_9 = VL_RAND_RESET_I(32);
    Top__DOT___GEN_10 = VL_RAND_RESET_I(32);
    Top__DOT__control__DOT__InstDecode_io_Load = VL_RAND_RESET_I(1);
    Top__DOT__control__DOT__InstDecode_io_Store = VL_RAND_RESET_I(1);
    Top__DOT__control__DOT__InstDecode_io_Branch = VL_RAND_RESET_I(1);
    Top__DOT__control__DOT__InstDecode_io_I_Type = VL_RAND_RESET_I(1);
    Top__DOT__control__DOT__InstDecode_io_JALR = VL_RAND_RESET_I(1);
    Top__DOT__control__DOT__InstDecode_io_JAL = VL_RAND_RESET_I(1);
    Top__DOT__control__DOT__InstDecode_io_LUI = VL_RAND_RESET_I(1);
    Top__DOT__control__DOT__CtrlDecode_io_RegWrite = VL_RAND_RESET_I(1);
    Top__DOT__control__DOT__CtrlDecode_io_ALUoperation = VL_RAND_RESET_I(3);
    Top__DOT__control__DOT__CtrlDecode_io_operand_A_sel = VL_RAND_RESET_I(2);
    Top__DOT__control__DOT__CtrlDecode_io_operand_B_sel = VL_RAND_RESET_I(1);
    Top__DOT__control__DOT__CtrlDecode_io_extend_sel = VL_RAND_RESET_I(2);
    Top__DOT__control__DOT__CtrlDecode_io_next_PC_sel = VL_RAND_RESET_I(2);
    Top__DOT__control__DOT__CtrlDecode__DOT___GEN_12 = VL_RAND_RESET_I(1);
    Top__DOT__register__DOT__registers_c_0 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_1 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_2 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_3 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_4 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_5 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_6 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_7 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_8 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_9 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_10 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_11 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_12 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_13 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_14 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_15 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_16 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_17 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_18 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_19 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_20 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_21 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_22 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_23 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_24 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_25 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_26 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_27 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_28 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_29 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_30 = VL_RAND_RESET_I(32);
    Top__DOT__register__DOT__registers_c_31 = VL_RAND_RESET_I(32);
    Top__DOT__alu__DOT___T_32 = VL_RAND_RESET_I(1);
    Top__DOT__alu__DOT___T_78 = VL_RAND_RESET_I(1);
    Top__DOT__alu__DOT___GEN_11 = VL_RAND_RESET_I(2);
    Top__DOT__alu__DOT___GEN_12 = VL_RAND_RESET_I(5);
    Top__DOT__alu__DOT___GEN_20 = VL_RAND_RESET_I(32);
    Top__DOT__alu__DOT___GEN_22 = VL_RAND_RESET_Q(63);
    Top__DOT__alucontrol__DOT___T_18 = VL_RAND_RESET_I(5);
    Top__DOT__immediate__DOT__output2 = VL_RAND_RESET_I(31);
    Top__DOT__immediate__DOT__sbt13 = VL_RAND_RESET_I(32);
    Top__DOT__immediate__DOT__sbt19 = VL_RAND_RESET_I(32);
    Top__DOT__PC__DOT__pc1 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    Top__DOT__instmem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Top__DOT__instmem__DOT__mem___05FT_12_data = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    Top__DOT__DataMemory__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Top__DOT__DataMemory__DOT__mem___05FT_23_data = VL_RAND_RESET_I(32);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VTop::_configure_coverage(VTop__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
