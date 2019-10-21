package datapath
import chisel3._
import chisel3.util.experimental.loadMemoryFromFile

class InstructionMemory extends Module{
	val io=IO(new Bundle{
		//val clock=Input(UInt(32.W))
		val wrAddr=Input(UInt(32.W))
		val rdData=Output(UInt(32.W))
		
			
	})
		val mem=Mem(1024,UInt(32.W))
		io.rdData:=mem(io.wrAddr)
		loadMemoryFromFile(mem,"/home/monis/Risc-V/Ghaznavi/abc.txt")
		
}

		
		

