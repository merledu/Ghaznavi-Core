// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTop_H_
#define _VTop_H_

#include "verilated.h"
class VTop__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VTop) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_branch,0,0);
    VL_OUT8(io_branch2,0,0);
    VL_OUT(io_instruction,31,0);
    VL_OUT(io_reg_out,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(Top__DOT__alucontrol_io_control,4,0);
    VL_SIG8(Top__DOT__control__DOT__InstDecode_io_Load,0,0);
    VL_SIG8(Top__DOT__control__DOT__InstDecode_io_Store,0,0);
    VL_SIG8(Top__DOT__control__DOT__InstDecode_io_Branch,0,0);
    VL_SIG8(Top__DOT__control__DOT__InstDecode_io_I_Type,0,0);
    VL_SIG8(Top__DOT__control__DOT__InstDecode_io_JALR,0,0);
    VL_SIG8(Top__DOT__control__DOT__InstDecode_io_JAL,0,0);
    VL_SIG8(Top__DOT__control__DOT__InstDecode_io_LUI,0,0);
    VL_SIG8(Top__DOT__control__DOT__CtrlDecode_io_RegWrite,0,0);
    VL_SIG8(Top__DOT__control__DOT__CtrlDecode_io_ALUoperation,2,0);
    VL_SIG8(Top__DOT__control__DOT__CtrlDecode_io_operand_A_sel,1,0);
    VL_SIG8(Top__DOT__control__DOT__CtrlDecode_io_operand_B_sel,0,0);
    VL_SIG8(Top__DOT__control__DOT__CtrlDecode_io_extend_sel,1,0);
    VL_SIG8(Top__DOT__control__DOT__CtrlDecode_io_next_PC_sel,1,0);
    VL_SIG8(Top__DOT__control__DOT__CtrlDecode__DOT___GEN_12,0,0);
    VL_SIG8(Top__DOT__alu__DOT___T_32,0,0);
    VL_SIG8(Top__DOT__alu__DOT___T_78,0,0);
    VL_SIG8(Top__DOT__alu__DOT___GEN_11,1,0);
    VL_SIG8(Top__DOT__alu__DOT___GEN_12,4,0);
    VL_SIG8(Top__DOT__alucontrol__DOT___T_18,4,0);
    VL_SIG(Top__DOT__register_io_WriteData,31,0);
    VL_SIG(Top__DOT__register_io_rs1,31,0);
    VL_SIG(Top__DOT__register_io_rs2,31,0);
    VL_SIG(Top__DOT__alu_io_A,31,0);
    VL_SIG(Top__DOT__alu_io_B,31,0);
    VL_SIG(Top__DOT__immediate_io_I_Immediate,31,0);
    VL_SIG(Top__DOT__PC_io_input,31,0);
    VL_SIG(Top__DOT___GEN_9,31,0);
    VL_SIG(Top__DOT___GEN_10,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_0,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_1,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_2,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_3,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_4,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_5,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_6,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_7,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_8,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_9,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_10,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_11,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_12,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_13,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_14,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_15,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_16,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_17,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_18,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_19,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_20,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_21,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_22,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_23,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_24,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_25,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_26,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_27,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_28,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_29,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_30,31,0);
    VL_SIG(Top__DOT__register__DOT__registers_c_31,31,0);
    VL_SIG(Top__DOT__alu__DOT___GEN_20,31,0);
    VL_SIG(Top__DOT__immediate__DOT__output2,30,0);
    VL_SIG(Top__DOT__immediate__DOT__sbt13,31,0);
    VL_SIG(Top__DOT__immediate__DOT__sbt19,31,0);
    VL_SIG(Top__DOT__PC__DOT__pc1,31,0);
    VL_SIG(Top__DOT__instmem__DOT__mem___05FT_12_data,31,0);
    VL_SIG(Top__DOT__DataMemory__DOT__mem___05FT_23_data,31,0);
    //char	__VpadToAlign228[4];
    VL_SIG64(Top__DOT__alu__DOT___GEN_22,62,0);
    VL_SIG(Top__DOT__instmem__DOT__mem[1024],31,0);
    VL_SIG(Top__DOT__DataMemory__DOT__mem[1024],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    //char	__VpadToAlign8437[3];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VTop__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VTop& operator= (const VTop&);	///< Copying not allowed
    VTop(const VTop&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VTop(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VTop();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VTop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VTop__Syms* symsp, bool first);
  private:
    static QData	_change_request(VTop__Syms* __restrict vlSymsp);
    void	_configure_coverage(VTop__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VTop__Syms* __restrict vlSymsp);
    static void	_eval_initial(VTop__Syms* __restrict vlSymsp);
    static void	_eval_settle(VTop__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(VTop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__10(VTop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__12(VTop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__14(VTop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__16(VTop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(VTop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__4(VTop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(VTop__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__8(VTop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__11(VTop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__13(VTop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__15(VTop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__17(VTop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__3(VTop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__5(VTop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__7(VTop__Syms* __restrict vlSymsp);
    static void	_settle__TOP__9(VTop__Syms* __restrict vlSymsp);
    static void	traceChgThis(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
