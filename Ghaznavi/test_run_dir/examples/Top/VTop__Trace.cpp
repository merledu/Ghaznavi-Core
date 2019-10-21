// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


//======================

void VTop::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTop* t=(VTop*)userthis;
    VTop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VTop::traceChgThis(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTop::traceChgThis__2(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_RegWrite));
	vcdp->chgBus  (c+2,(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_ALUoperation),3);
	vcdp->chgBus  (c+3,(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_operand_A_sel),2);
	vcdp->chgBit  (c+4,(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_operand_B_sel));
	vcdp->chgBus  (c+5,(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_extend_sel),2);
	vcdp->chgBus  (c+6,(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_next_PC_sel),2);
	vcdp->chgBus  (c+7,(vlTOPp->Top__DOT__register_io_WriteData),32);
	vcdp->chgBus  (c+8,(vlTOPp->Top__DOT__register_io_rs1),32);
	vcdp->chgBus  (c+9,(vlTOPp->Top__DOT__register_io_rs2),32);
	vcdp->chgBus  (c+10,(vlTOPp->Top__DOT__alu_io_A),32);
	vcdp->chgBus  (c+11,(vlTOPp->Top__DOT__alu_io_B),32);
	vcdp->chgBus  (c+12,((IData)(vlTOPp->Top__DOT__alu__DOT___GEN_22)),32);
	vcdp->chgBit  (c+13,(((2U == (3U & ((IData)(vlTOPp->Top__DOT__alucontrol_io_control) 
					    >> 3U))) 
			      & (1U == (IData)(vlTOPp->Top__DOT__alu__DOT___GEN_22)))));
	vcdp->chgBus  (c+14,(vlTOPp->Top__DOT__alucontrol_io_control),5);
	vcdp->chgBus  (c+15,(vlTOPp->Top__DOT__immediate_io_I_Immediate),32);
	vcdp->chgBus  (c+16,(((0x80000000U & (vlTOPp->Top__DOT__immediate__DOT__output2 
					      << 1U)) 
			      | vlTOPp->Top__DOT__immediate__DOT__output2)),32);
	vcdp->chgBus  (c+17,((vlTOPp->Top__DOT__immediate__DOT__sbt13 
			      + vlTOPp->Top__DOT__PC__DOT__pc1)),32);
	vcdp->chgBus  (c+18,((vlTOPp->Top__DOT__immediate__DOT__sbt19 
			      + vlTOPp->Top__DOT__PC__DOT__pc1)),32);
	vcdp->chgBus  (c+19,(vlTOPp->Top__DOT__instmem__DOT__mem___05FT_12_data),32);
	vcdp->chgBus  (c+20,((0xffU & (IData)((vlTOPp->Top__DOT__alu__DOT___GEN_22 
					       >> 2U)))),8);
	vcdp->chgBus  (c+21,((0xfffffffeU & (vlTOPp->Top__DOT__register_io_rs1 
					     + vlTOPp->Top__DOT__immediate_io_I_Immediate))),32);
	vcdp->chgBit  (c+22,(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load));
	vcdp->chgBit  (c+23,(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store));
	vcdp->chgBit  (c+24,(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Branch));
	vcdp->chgBit  (c+25,(vlTOPp->Top__DOT__control__DOT__InstDecode_io_I_Type));
	vcdp->chgBit  (c+26,(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JALR));
	vcdp->chgBit  (c+27,(vlTOPp->Top__DOT__control__DOT__InstDecode_io_JAL));
	vcdp->chgBit  (c+28,(vlTOPp->Top__DOT__control__DOT__InstDecode_io_LUI));
	vcdp->chgBus  (c+29,(vlTOPp->Top__DOT__immediate__DOT__output2),31);
	vcdp->chgBus  (c+30,(vlTOPp->Top__DOT__immediate__DOT__output2),31);
	vcdp->chgBus  (c+31,(vlTOPp->Top__DOT__immediate__DOT__sbt13),32);
	vcdp->chgBus  (c+32,(vlTOPp->Top__DOT__immediate__DOT__sbt19),32);
	vcdp->chgBus  (c+33,(vlTOPp->Top__DOT__DataMemory__DOT__mem___05FT_23_data),32);
	vcdp->chgBus  (c+34,((0xffU & (IData)((vlTOPp->Top__DOT__alu__DOT___GEN_22 
					       >> 2U)))),10);
	vcdp->chgBus  (c+35,((vlTOPp->Top__DOT__register_io_rs1 
			      + vlTOPp->Top__DOT__immediate_io_I_Immediate)),32);
	vcdp->chgQuad (c+36,((VL_ULL(0xfffffffe) & 
			      (((QData)((IData)((1U 
						 & ((vlTOPp->Top__DOT__register_io_rs1 
						     + vlTOPp->Top__DOT__immediate_io_I_Immediate) 
						    >> 0x1fU)))) 
				<< 0x20U) | (QData)((IData)(
							    (vlTOPp->Top__DOT__register_io_rs1 
							     + vlTOPp->Top__DOT__immediate_io_I_Immediate)))))),33);
    }
}

void VTop::traceChgThis__3(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+38,(vlTOPp->Top__DOT__PC__DOT__pc1),32);
	vcdp->chgBus  (c+39,(((IData)(4U) + vlTOPp->Top__DOT__PC__DOT__pc1)),32);
	vcdp->chgBus  (c+40,((0x3ffU & (vlTOPp->Top__DOT__PC__DOT__pc1 
					>> 2U))),32);
	vcdp->chgBus  (c+41,(vlTOPp->Top__DOT__register__DOT__registers_c_0),32);
	vcdp->chgBus  (c+42,(vlTOPp->Top__DOT__register__DOT__registers_c_1),32);
	vcdp->chgBus  (c+43,(vlTOPp->Top__DOT__register__DOT__registers_c_2),32);
	vcdp->chgBus  (c+44,(vlTOPp->Top__DOT__register__DOT__registers_c_3),32);
	vcdp->chgBus  (c+45,(vlTOPp->Top__DOT__register__DOT__registers_c_4),32);
	vcdp->chgBus  (c+46,(vlTOPp->Top__DOT__register__DOT__registers_c_5),32);
	vcdp->chgBus  (c+47,(vlTOPp->Top__DOT__register__DOT__registers_c_6),32);
	vcdp->chgBus  (c+48,(vlTOPp->Top__DOT__register__DOT__registers_c_7),32);
	vcdp->chgBus  (c+49,(vlTOPp->Top__DOT__register__DOT__registers_c_8),32);
	vcdp->chgBus  (c+50,(vlTOPp->Top__DOT__register__DOT__registers_c_9),32);
	vcdp->chgBus  (c+51,(vlTOPp->Top__DOT__register__DOT__registers_c_10),32);
	vcdp->chgBus  (c+52,(vlTOPp->Top__DOT__register__DOT__registers_c_11),32);
	vcdp->chgBus  (c+53,(vlTOPp->Top__DOT__register__DOT__registers_c_12),32);
	vcdp->chgBus  (c+54,(vlTOPp->Top__DOT__register__DOT__registers_c_13),32);
	vcdp->chgBus  (c+55,(vlTOPp->Top__DOT__register__DOT__registers_c_14),32);
	vcdp->chgBus  (c+56,(vlTOPp->Top__DOT__register__DOT__registers_c_15),32);
	vcdp->chgBus  (c+57,(vlTOPp->Top__DOT__register__DOT__registers_c_16),32);
	vcdp->chgBus  (c+58,(vlTOPp->Top__DOT__register__DOT__registers_c_17),32);
	vcdp->chgBus  (c+59,(vlTOPp->Top__DOT__register__DOT__registers_c_18),32);
	vcdp->chgBus  (c+60,(vlTOPp->Top__DOT__register__DOT__registers_c_19),32);
	vcdp->chgBus  (c+61,(vlTOPp->Top__DOT__register__DOT__registers_c_20),32);
	vcdp->chgBus  (c+62,(vlTOPp->Top__DOT__register__DOT__registers_c_21),32);
	vcdp->chgBus  (c+63,(vlTOPp->Top__DOT__register__DOT__registers_c_22),32);
	vcdp->chgBus  (c+64,(vlTOPp->Top__DOT__register__DOT__registers_c_23),32);
	vcdp->chgBus  (c+65,(vlTOPp->Top__DOT__register__DOT__registers_c_24),32);
	vcdp->chgBus  (c+66,(vlTOPp->Top__DOT__register__DOT__registers_c_25),32);
	vcdp->chgBus  (c+67,(vlTOPp->Top__DOT__register__DOT__registers_c_26),32);
	vcdp->chgBus  (c+68,(vlTOPp->Top__DOT__register__DOT__registers_c_27),32);
	vcdp->chgBus  (c+69,(vlTOPp->Top__DOT__register__DOT__registers_c_28),32);
	vcdp->chgBus  (c+70,(vlTOPp->Top__DOT__register__DOT__registers_c_29),32);
	vcdp->chgBus  (c+71,(vlTOPp->Top__DOT__register__DOT__registers_c_30),32);
	vcdp->chgBus  (c+72,(vlTOPp->Top__DOT__register__DOT__registers_c_31),32);
	vcdp->chgBus  (c+73,((0x3ffU & (vlTOPp->Top__DOT__PC__DOT__pc1 
					>> 2U))),10);
    }
}

void VTop::traceChgThis__4(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+74,(vlTOPp->clock));
	vcdp->chgBit  (c+75,(vlTOPp->reset));
	vcdp->chgBus  (c+76,(vlTOPp->io_instruction),32);
	vcdp->chgBus  (c+77,(vlTOPp->io_reg_out),32);
	vcdp->chgBit  (c+78,(vlTOPp->io_branch));
	vcdp->chgBit  (c+79,(vlTOPp->io_branch2));
	vcdp->chgBus  (c+80,((0x7fU & vlTOPp->io_instruction)),7);
	vcdp->chgBit  (c+81,(((0x33U != (0x7fU & vlTOPp->io_instruction)) 
			      & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load)) 
				 & (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store)))));
	vcdp->chgBit  (c+82,(((0x33U != (0x7fU & vlTOPp->io_instruction)) 
			      & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load)) 
				 & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Store)) 
				    & (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Branch))))));
	vcdp->chgBit  (c+83,(((0x33U != (0x7fU & vlTOPp->io_instruction)) 
			      & (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load))));
	vcdp->chgBus  (c+84,((0x1fU & (vlTOPp->io_instruction 
				       >> 7U))),5);
	vcdp->chgBus  (c+85,((0x1fU & (vlTOPp->io_instruction 
				       >> 0xfU))),5);
	vcdp->chgBus  (c+86,((0x1fU & (vlTOPp->io_instruction 
				       >> 0x14U))),5);
	vcdp->chgBit  (c+87,((1U & (vlTOPp->io_instruction 
				    >> 0x1eU))));
	vcdp->chgBus  (c+88,((7U & (vlTOPp->io_instruction 
				    >> 0xcU))),3);
	vcdp->chgBus  (c+89,((IData)((VL_ULL(0x3fffffffffff) 
				      & ((QData)((IData)(
							 ((((0x80000000U 
							     & vlTOPp->io_instruction)
							     ? 0x7ffU
							     : 0U) 
							   << 0x14U) 
							  | (0xfffffU 
							     & (vlTOPp->io_instruction 
								>> 0xcU))))) 
					 << 0xcU)))),32);
	vcdp->chgBus  (c+90,(((2U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_extend_sel))
			       ? ((IData)(4U) + vlTOPp->Top__DOT__PC__DOT__pc1)
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
				       : ((2U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
					   ? (vlTOPp->Top__DOT__immediate__DOT__sbt19 
					      + vlTOPp->Top__DOT__PC__DOT__pc1)
					   : ((0U == (IData)(vlTOPp->Top__DOT__control__DOT__CtrlDecode_io_next_PC_sel))
					       ? ((IData)(4U) 
						  + vlTOPp->Top__DOT__PC__DOT__pc1)
					       : 0U)))))),32);
	vcdp->chgBus  (c+91,((((0x33U != (0x7fU & vlTOPp->io_instruction)) 
			       & (IData)(vlTOPp->Top__DOT__control__DOT__InstDecode_io_Load))
			       ? vlTOPp->Top__DOT__DataMemory__DOT__mem___05FT_23_data
			       : 0U)),32);
	vcdp->chgBit  (c+92,((0x33U == (0x7fU & vlTOPp->io_instruction))));
	vcdp->chgBus  (c+93,((0xfffU & (vlTOPp->io_instruction 
					>> 0x14U))),12);
	vcdp->chgBus  (c+94,(((((0x80000000U & vlTOPp->io_instruction)
				 ? 0x7ffffU : 0U) << 0xcU) 
			      | (0xfffU & (vlTOPp->io_instruction 
					   >> 0x14U)))),31);
	vcdp->chgBus  (c+95,((0x7fU & (vlTOPp->io_instruction 
				       >> 0x19U))),7);
	vcdp->chgBus  (c+96,(((0xfe0U & (vlTOPp->io_instruction 
					 >> 0x14U)) 
			      | (0x1fU & (vlTOPp->io_instruction 
					  >> 7U)))),12);
	vcdp->chgBus  (c+97,((0xfffffU & (vlTOPp->io_instruction 
					  >> 0xcU))),20);
	vcdp->chgBus  (c+98,(((((0x80000000U & vlTOPp->io_instruction)
				 ? 0x7ffU : 0U) << 0x14U) 
			      | (0xfffffU & (vlTOPp->io_instruction 
					     >> 0xcU)))),31);
	vcdp->chgQuad (c+99,((VL_ULL(0x3fffffffffff) 
			      & ((QData)((IData)(((
						   ((0x80000000U 
						     & vlTOPp->io_instruction)
						     ? 0x7ffU
						     : 0U) 
						   << 0x14U) 
						  | (0xfffffU 
						     & (vlTOPp->io_instruction 
							>> 0xcU))))) 
				 << 0xcU))),46);
	vcdp->chgBit  (c+101,((1U & (vlTOPp->io_instruction 
				     >> 7U))));
	vcdp->chgBus  (c+102,((0xfU & (vlTOPp->io_instruction 
				       >> 8U))),4);
	vcdp->chgBus  (c+103,((0x3fU & (vlTOPp->io_instruction 
					>> 0x19U))),6);
	vcdp->chgBit  (c+104,((1U & (vlTOPp->io_instruction 
				     >> 0x1fU))));
	vcdp->chgBus  (c+105,(((0x1000U & (vlTOPp->io_instruction 
					   >> 0x13U)) 
			       | ((0x800U & (vlTOPp->io_instruction 
					     << 4U)) 
				  | ((0x7e0U & (vlTOPp->io_instruction 
						>> 0x14U)) 
				     | (0x1eU & (vlTOPp->io_instruction 
						 >> 7U)))))),13);
	vcdp->chgBus  (c+106,((0xffU & (vlTOPp->io_instruction 
					>> 0xcU))),8);
	vcdp->chgBit  (c+107,((1U & (vlTOPp->io_instruction 
				     >> 0x14U))));
	vcdp->chgBus  (c+108,((0x3ffU & (vlTOPp->io_instruction 
					 >> 0x15U))),10);
	vcdp->chgBus  (c+109,(((0x100000U & (vlTOPp->io_instruction 
					     >> 0xbU)) 
			       | ((0xff000U & vlTOPp->io_instruction) 
				  | ((0x800U & (vlTOPp->io_instruction 
						>> 9U)) 
				     | (0x7feU & (vlTOPp->io_instruction 
						  >> 0x14U)))))),21);
    }
}
