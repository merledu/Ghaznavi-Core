// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VInstructionMemory.h for the primary calling header

#ifndef _VInstructionMemory___024unit_H_
#define _VInstructionMemory___024unit_H_

#include "verilated.h"
class VInstructionMemory__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VInstructionMemory___024unit) {
  public:
    // CELLS
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign12[4];
    VInstructionMemory__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VInstructionMemory___024unit& operator= (const VInstructionMemory___024unit&);	///< Copying not allowed
    VInstructionMemory___024unit(const VInstructionMemory___024unit&);	///< Copying not allowed
  public:
    VInstructionMemory___024unit(const char* name="TOP");
    ~VInstructionMemory___024unit();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VInstructionMemory__Syms* symsp, bool first);
  private:
    void	_configure_coverage(VInstructionMemory__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
