module InstructionTypeDecode(
  input  [6:0] io_opcode,
  output       io_R_Format,
  output       io_Load,
  output       io_Store,
  output       io_Branch,
  output       io_I_Type,
  output       io_JALR,
  output       io_JAL,
  output       io_LUI
);
  wire  _T_32; // @[InstructionTypeDecode.scala 25:24]
  wire  _T_35; // @[InstructionTypeDecode.scala 27:31]
  wire  _T_38; // @[InstructionTypeDecode.scala 29:31]
  wire  _T_41; // @[InstructionTypeDecode.scala 31:31]
  wire  _T_44; // @[InstructionTypeDecode.scala 33:31]
  wire  _T_47; // @[InstructionTypeDecode.scala 35:31]
  wire  _T_50; // @[InstructionTypeDecode.scala 37:31]
  wire  _T_53; // @[InstructionTypeDecode.scala 39:31]
  wire  _GEN_2; // @[InstructionTypeDecode.scala 37:48]
  wire  _GEN_4; // @[InstructionTypeDecode.scala 35:48]
  wire  _GEN_5; // @[InstructionTypeDecode.scala 35:48]
  wire  _GEN_7; // @[InstructionTypeDecode.scala 33:48]
  wire  _GEN_8; // @[InstructionTypeDecode.scala 33:48]
  wire  _GEN_9; // @[InstructionTypeDecode.scala 33:48]
  wire  _GEN_11; // @[InstructionTypeDecode.scala 31:48]
  wire  _GEN_12; // @[InstructionTypeDecode.scala 31:48]
  wire  _GEN_13; // @[InstructionTypeDecode.scala 31:48]
  wire  _GEN_14; // @[InstructionTypeDecode.scala 31:48]
  wire  _GEN_16; // @[InstructionTypeDecode.scala 29:48]
  wire  _GEN_17; // @[InstructionTypeDecode.scala 29:48]
  wire  _GEN_18; // @[InstructionTypeDecode.scala 29:48]
  wire  _GEN_19; // @[InstructionTypeDecode.scala 29:48]
  wire  _GEN_20; // @[InstructionTypeDecode.scala 29:48]
  wire  _GEN_22; // @[InstructionTypeDecode.scala 27:48]
  wire  _GEN_23; // @[InstructionTypeDecode.scala 27:48]
  wire  _GEN_24; // @[InstructionTypeDecode.scala 27:48]
  wire  _GEN_25; // @[InstructionTypeDecode.scala 27:48]
  wire  _GEN_26; // @[InstructionTypeDecode.scala 27:48]
  wire  _GEN_27; // @[InstructionTypeDecode.scala 27:48]
  assign _T_32 = io_opcode == 7'h33; // @[InstructionTypeDecode.scala 25:24]
  assign _T_35 = io_opcode == 7'h3; // @[InstructionTypeDecode.scala 27:31]
  assign _T_38 = io_opcode == 7'h23; // @[InstructionTypeDecode.scala 29:31]
  assign _T_41 = io_opcode == 7'h63; // @[InstructionTypeDecode.scala 31:31]
  assign _T_44 = io_opcode == 7'h13; // @[InstructionTypeDecode.scala 33:31]
  assign _T_47 = io_opcode == 7'h67; // @[InstructionTypeDecode.scala 35:31]
  assign _T_50 = io_opcode == 7'h6f; // @[InstructionTypeDecode.scala 37:31]
  assign _T_53 = io_opcode == 7'h37; // @[InstructionTypeDecode.scala 39:31]
  assign _GEN_2 = _T_50 ? 1'h0 : _T_53; // @[InstructionTypeDecode.scala 37:48]
  assign _GEN_4 = _T_47 ? 1'h0 : _T_50; // @[InstructionTypeDecode.scala 35:48]
  assign _GEN_5 = _T_47 ? 1'h0 : _GEN_2; // @[InstructionTypeDecode.scala 35:48]
  assign _GEN_7 = _T_44 ? 1'h0 : _T_47; // @[InstructionTypeDecode.scala 33:48]
  assign _GEN_8 = _T_44 ? 1'h0 : _GEN_4; // @[InstructionTypeDecode.scala 33:48]
  assign _GEN_9 = _T_44 ? 1'h0 : _GEN_5; // @[InstructionTypeDecode.scala 33:48]
  assign _GEN_11 = _T_41 ? 1'h0 : _T_44; // @[InstructionTypeDecode.scala 31:48]
  assign _GEN_12 = _T_41 ? 1'h0 : _GEN_7; // @[InstructionTypeDecode.scala 31:48]
  assign _GEN_13 = _T_41 ? 1'h0 : _GEN_8; // @[InstructionTypeDecode.scala 31:48]
  assign _GEN_14 = _T_41 ? 1'h0 : _GEN_9; // @[InstructionTypeDecode.scala 31:48]
  assign _GEN_16 = _T_38 ? 1'h0 : _T_41; // @[InstructionTypeDecode.scala 29:48]
  assign _GEN_17 = _T_38 ? 1'h0 : _GEN_11; // @[InstructionTypeDecode.scala 29:48]
  assign _GEN_18 = _T_38 ? 1'h0 : _GEN_12; // @[InstructionTypeDecode.scala 29:48]
  assign _GEN_19 = _T_38 ? 1'h0 : _GEN_13; // @[InstructionTypeDecode.scala 29:48]
  assign _GEN_20 = _T_38 ? 1'h0 : _GEN_14; // @[InstructionTypeDecode.scala 29:48]
  assign _GEN_22 = _T_35 ? 1'h0 : _T_38; // @[InstructionTypeDecode.scala 27:48]
  assign _GEN_23 = _T_35 ? 1'h0 : _GEN_16; // @[InstructionTypeDecode.scala 27:48]
  assign _GEN_24 = _T_35 ? 1'h0 : _GEN_17; // @[InstructionTypeDecode.scala 27:48]
  assign _GEN_25 = _T_35 ? 1'h0 : _GEN_18; // @[InstructionTypeDecode.scala 27:48]
  assign _GEN_26 = _T_35 ? 1'h0 : _GEN_19; // @[InstructionTypeDecode.scala 27:48]
  assign _GEN_27 = _T_35 ? 1'h0 : _GEN_20; // @[InstructionTypeDecode.scala 27:48]
  assign io_R_Format = io_opcode == 7'h33; // @[InstructionTypeDecode.scala 16:28 InstructionTypeDecode.scala 26:28]
  assign io_Load = _T_32 ? 1'h0 : _T_35; // @[InstructionTypeDecode.scala 17:24 InstructionTypeDecode.scala 28:24]
  assign io_Store = _T_32 ? 1'h0 : _GEN_22; // @[InstructionTypeDecode.scala 18:25 InstructionTypeDecode.scala 30:25]
  assign io_Branch = _T_32 ? 1'h0 : _GEN_23; // @[InstructionTypeDecode.scala 19:26 InstructionTypeDecode.scala 32:26]
  assign io_I_Type = _T_32 ? 1'h0 : _GEN_24; // @[InstructionTypeDecode.scala 20:26 InstructionTypeDecode.scala 34:26]
  assign io_JALR = _T_32 ? 1'h0 : _GEN_25; // @[InstructionTypeDecode.scala 21:24 InstructionTypeDecode.scala 36:24]
  assign io_JAL = _T_32 ? 1'h0 : _GEN_26; // @[InstructionTypeDecode.scala 22:23 InstructionTypeDecode.scala 38:23]
  assign io_LUI = _T_32 ? 1'h0 : _GEN_27; // @[InstructionTypeDecode.scala 23:23 InstructionTypeDecode.scala 40:23]
endmodule
module control_decode(
  input        io_R_Format,
  input        io_Load,
  input        io_Store,
  input        io_Branch,
  input        io_I_Type,
  input        io_JALR,
  input        io_JAL,
  input        io_LUI,
  output       io_MemWrite,
  output       io_Branch2,
  output       io_MemRead,
  output       io_RegWrite,
  output       io_MemtoReg,
  output [2:0] io_ALUoperation,
  output [1:0] io_operand_A_sel,
  output       io_operand_B_sel,
  output [1:0] io_extend_sel,
  output [1:0] io_next_PC_sel
);
  wire [2:0] _GEN_1; // @[control_decode.scala 77:36]
  wire [1:0] _GEN_2; // @[control_decode.scala 77:36]
  wire  _GEN_3; // @[control_decode.scala 71:35]
  wire [2:0] _GEN_4; // @[control_decode.scala 71:35]
  wire [1:0] _GEN_5; // @[control_decode.scala 71:35]
  wire [1:0] _GEN_6; // @[control_decode.scala 71:35]
  wire  _GEN_7; // @[control_decode.scala 71:35]
  wire  _GEN_8; // @[control_decode.scala 65:37]
  wire [2:0] _GEN_9; // @[control_decode.scala 65:37]
  wire [1:0] _GEN_10; // @[control_decode.scala 65:37]
  wire [1:0] _GEN_11; // @[control_decode.scala 65:37]
  wire  _GEN_12; // @[control_decode.scala 65:37]
  wire  _GEN_13; // @[control_decode.scala 59:39]
  wire [2:0] _GEN_14; // @[control_decode.scala 59:39]
  wire  _GEN_15; // @[control_decode.scala 59:39]
  wire [1:0] _GEN_16; // @[control_decode.scala 59:39]
  wire [1:0] _GEN_17; // @[control_decode.scala 59:39]
  wire  _GEN_18; // @[control_decode.scala 59:39]
  wire [2:0] _GEN_20; // @[control_decode.scala 54:39]
  wire [1:0] _GEN_21; // @[control_decode.scala 54:39]
  wire  _GEN_22; // @[control_decode.scala 54:39]
  wire  _GEN_23; // @[control_decode.scala 54:39]
  wire [1:0] _GEN_24; // @[control_decode.scala 54:39]
  wire  _GEN_25; // @[control_decode.scala 54:39]
  wire [2:0] _GEN_27; // @[control_decode.scala 48:37]
  wire  _GEN_28; // @[control_decode.scala 48:37]
  wire [1:0] _GEN_29; // @[control_decode.scala 48:37]
  wire  _GEN_30; // @[control_decode.scala 48:37]
  wire [1:0] _GEN_31; // @[control_decode.scala 48:37]
  wire  _GEN_32; // @[control_decode.scala 48:37]
  wire [1:0] _GEN_33; // @[control_decode.scala 48:37]
  wire  _GEN_35; // @[control_decode.scala 41:37]
  wire  _GEN_36; // @[control_decode.scala 41:37]
  wire [2:0] _GEN_37; // @[control_decode.scala 41:37]
  wire  _GEN_38; // @[control_decode.scala 41:37]
  wire [1:0] _GEN_39; // @[control_decode.scala 41:37]
  wire  _GEN_40; // @[control_decode.scala 41:37]
  wire [1:0] _GEN_41; // @[control_decode.scala 41:37]
  wire [1:0] _GEN_42; // @[control_decode.scala 41:37]
  assign _GEN_1 = io_LUI ? 3'h6 : 3'h0; // @[control_decode.scala 77:36]
  assign _GEN_2 = io_LUI ? 2'h3 : 2'h0; // @[control_decode.scala 77:36]
  assign _GEN_3 = io_JAL ? 1'h1 : io_LUI; // @[control_decode.scala 71:35]
  assign _GEN_4 = io_JAL ? 3'h3 : _GEN_1; // @[control_decode.scala 71:35]
  assign _GEN_5 = io_JAL ? 2'h2 : _GEN_2; // @[control_decode.scala 71:35]
  assign _GEN_6 = io_JAL ? 2'h2 : 2'h0; // @[control_decode.scala 71:35]
  assign _GEN_7 = io_JAL ? 1'h0 : io_LUI; // @[control_decode.scala 71:35]
  assign _GEN_8 = io_JALR ? 1'h1 : _GEN_3; // @[control_decode.scala 65:37]
  assign _GEN_9 = io_JALR ? 3'h3 : _GEN_4; // @[control_decode.scala 65:37]
  assign _GEN_10 = io_JALR ? 2'h2 : _GEN_5; // @[control_decode.scala 65:37]
  assign _GEN_11 = io_JALR ? 2'h3 : _GEN_6; // @[control_decode.scala 65:37]
  assign _GEN_12 = io_JALR ? 1'h0 : _GEN_7; // @[control_decode.scala 65:37]
  assign _GEN_13 = io_I_Type ? 1'h1 : _GEN_8; // @[control_decode.scala 59:39]
  assign _GEN_14 = io_I_Type ? 3'h1 : _GEN_9; // @[control_decode.scala 59:39]
  assign _GEN_15 = io_I_Type ? 1'h1 : _GEN_12; // @[control_decode.scala 59:39]
  assign _GEN_16 = io_I_Type ? 2'h0 : _GEN_10; // @[control_decode.scala 59:39]
  assign _GEN_17 = io_I_Type ? 2'h0 : _GEN_11; // @[control_decode.scala 59:39]
  assign _GEN_18 = io_I_Type ? 1'h0 : _GEN_12; // @[control_decode.scala 59:39]
  assign _GEN_20 = io_Branch ? 3'h2 : _GEN_14; // @[control_decode.scala 54:39]
  assign _GEN_21 = io_Branch ? 2'h1 : _GEN_17; // @[control_decode.scala 54:39]
  assign _GEN_22 = io_Branch ? 1'h0 : _GEN_13; // @[control_decode.scala 54:39]
  assign _GEN_23 = io_Branch ? 1'h0 : _GEN_15; // @[control_decode.scala 54:39]
  assign _GEN_24 = io_Branch ? 2'h0 : _GEN_16; // @[control_decode.scala 54:39]
  assign _GEN_25 = io_Branch ? 1'h0 : _GEN_18; // @[control_decode.scala 54:39]
  assign _GEN_27 = io_Store ? 3'h5 : _GEN_20; // @[control_decode.scala 48:37]
  assign _GEN_28 = io_Store ? 1'h1 : _GEN_23; // @[control_decode.scala 48:37]
  assign _GEN_29 = io_Store ? 2'h2 : {{1'd0}, _GEN_25}; // @[control_decode.scala 48:37]
  assign _GEN_30 = io_Store ? 1'h0 : io_Branch; // @[control_decode.scala 48:37]
  assign _GEN_31 = io_Store ? 2'h0 : _GEN_21; // @[control_decode.scala 48:37]
  assign _GEN_32 = io_Store ? 1'h0 : _GEN_22; // @[control_decode.scala 48:37]
  assign _GEN_33 = io_Store ? 2'h0 : _GEN_24; // @[control_decode.scala 48:37]
  assign _GEN_35 = io_Load ? 1'h1 : _GEN_32; // @[control_decode.scala 41:37]
  assign _GEN_36 = io_Load ? 1'h1 : _GEN_28; // @[control_decode.scala 41:37]
  assign _GEN_37 = io_Load ? 3'h4 : _GEN_27; // @[control_decode.scala 41:37]
  assign _GEN_38 = io_Load ? 1'h0 : io_Store; // @[control_decode.scala 41:37]
  assign _GEN_39 = io_Load ? 2'h0 : _GEN_29; // @[control_decode.scala 41:37]
  assign _GEN_40 = io_Load ? 1'h0 : _GEN_30; // @[control_decode.scala 41:37]
  assign _GEN_41 = io_Load ? 2'h0 : _GEN_31; // @[control_decode.scala 41:37]
  assign _GEN_42 = io_Load ? 2'h0 : _GEN_33; // @[control_decode.scala 41:37]
  assign io_MemWrite = io_R_Format ? 1'h0 : _GEN_38; // @[control_decode.scala 27:28 control_decode.scala 28:28 control_decode.scala 49:28]
  assign io_Branch2 = io_R_Format ? 1'h0 : _GEN_40; // @[control_decode.scala 29:27 control_decode.scala 55:27]
  assign io_MemRead = io_R_Format ? 1'h0 : io_Load; // @[control_decode.scala 30:27 control_decode.scala 42:27]
  assign io_RegWrite = io_R_Format ? 1'h1 : _GEN_35; // @[control_decode.scala 31:28 control_decode.scala 40:36 control_decode.scala 44:28 control_decode.scala 60:28 control_decode.scala 66:28 control_decode.scala 72:28 control_decode.scala 78:28]
  assign io_MemtoReg = io_R_Format ? 1'h0 : io_Load; // @[control_decode.scala 32:28 control_decode.scala 43:28]
  assign io_ALUoperation = io_R_Format ? 3'h0 : _GEN_37; // @[control_decode.scala 33:32 control_decode.scala 46:32 control_decode.scala 50:32 control_decode.scala 56:32 control_decode.scala 61:32 control_decode.scala 67:32 control_decode.scala 73:32 control_decode.scala 79:32]
  assign io_operand_A_sel = io_R_Format ? 2'h0 : _GEN_42; // @[control_decode.scala 34:33 control_decode.scala 68:33 control_decode.scala 74:33 control_decode.scala 80:33]
  assign io_operand_B_sel = io_R_Format ? 1'h0 : _GEN_36; // @[control_decode.scala 35:33 control_decode.scala 45:33 control_decode.scala 51:33 control_decode.scala 62:33 control_decode.scala 81:33]
  assign io_extend_sel = io_R_Format ? 2'h0 : _GEN_39; // @[control_decode.scala 36:30 control_decode.scala 52:30 control_decode.scala 82:30]
  assign io_next_PC_sel = io_R_Format ? 2'h0 : _GEN_41; // @[control_decode.scala 37:31 control_decode.scala 57:31 control_decode.scala 69:31 control_decode.scala 75:31]
endmodule
module control(
  input  [6:0] io_opcode,
  output       io_MemoryWrite,
  output       io_Branch2,
  output       io_MemRead,
  output       io_RegWrite,
  output       io_MemtoReg,
  output [2:0] io_ALUoperation,
  output [1:0] io_operand_A_sel,
  output       io_operand_B_sel,
  output [1:0] io_extend_sel,
  output [1:0] io_next_PC_sel
);
  wire [6:0] InstDecode_io_opcode; // @[control.scala 31:40]
  wire  InstDecode_io_R_Format; // @[control.scala 31:40]
  wire  InstDecode_io_Load; // @[control.scala 31:40]
  wire  InstDecode_io_Store; // @[control.scala 31:40]
  wire  InstDecode_io_Branch; // @[control.scala 31:40]
  wire  InstDecode_io_I_Type; // @[control.scala 31:40]
  wire  InstDecode_io_JALR; // @[control.scala 31:40]
  wire  InstDecode_io_JAL; // @[control.scala 31:40]
  wire  InstDecode_io_LUI; // @[control.scala 31:40]
  wire  CtrlDecode_io_R_Format; // @[control.scala 32:40]
  wire  CtrlDecode_io_Load; // @[control.scala 32:40]
  wire  CtrlDecode_io_Store; // @[control.scala 32:40]
  wire  CtrlDecode_io_Branch; // @[control.scala 32:40]
  wire  CtrlDecode_io_I_Type; // @[control.scala 32:40]
  wire  CtrlDecode_io_JALR; // @[control.scala 32:40]
  wire  CtrlDecode_io_JAL; // @[control.scala 32:40]
  wire  CtrlDecode_io_LUI; // @[control.scala 32:40]
  wire  CtrlDecode_io_MemWrite; // @[control.scala 32:40]
  wire  CtrlDecode_io_Branch2; // @[control.scala 32:40]
  wire  CtrlDecode_io_MemRead; // @[control.scala 32:40]
  wire  CtrlDecode_io_RegWrite; // @[control.scala 32:40]
  wire  CtrlDecode_io_MemtoReg; // @[control.scala 32:40]
  wire [2:0] CtrlDecode_io_ALUoperation; // @[control.scala 32:40]
  wire [1:0] CtrlDecode_io_operand_A_sel; // @[control.scala 32:40]
  wire  CtrlDecode_io_operand_B_sel; // @[control.scala 32:40]
  wire [1:0] CtrlDecode_io_extend_sel; // @[control.scala 32:40]
  wire [1:0] CtrlDecode_io_next_PC_sel; // @[control.scala 32:40]
  InstructionTypeDecode InstDecode ( // @[control.scala 31:40]
    .io_opcode(InstDecode_io_opcode),
    .io_R_Format(InstDecode_io_R_Format),
    .io_Load(InstDecode_io_Load),
    .io_Store(InstDecode_io_Store),
    .io_Branch(InstDecode_io_Branch),
    .io_I_Type(InstDecode_io_I_Type),
    .io_JALR(InstDecode_io_JALR),
    .io_JAL(InstDecode_io_JAL),
    .io_LUI(InstDecode_io_LUI)
  );
  control_decode CtrlDecode ( // @[control.scala 32:40]
    .io_R_Format(CtrlDecode_io_R_Format),
    .io_Load(CtrlDecode_io_Load),
    .io_Store(CtrlDecode_io_Store),
    .io_Branch(CtrlDecode_io_Branch),
    .io_I_Type(CtrlDecode_io_I_Type),
    .io_JALR(CtrlDecode_io_JALR),
    .io_JAL(CtrlDecode_io_JAL),
    .io_LUI(CtrlDecode_io_LUI),
    .io_MemWrite(CtrlDecode_io_MemWrite),
    .io_Branch2(CtrlDecode_io_Branch2),
    .io_MemRead(CtrlDecode_io_MemRead),
    .io_RegWrite(CtrlDecode_io_RegWrite),
    .io_MemtoReg(CtrlDecode_io_MemtoReg),
    .io_ALUoperation(CtrlDecode_io_ALUoperation),
    .io_operand_A_sel(CtrlDecode_io_operand_A_sel),
    .io_operand_B_sel(CtrlDecode_io_operand_B_sel),
    .io_extend_sel(CtrlDecode_io_extend_sel),
    .io_next_PC_sel(CtrlDecode_io_next_PC_sel)
  );
  assign io_MemoryWrite = CtrlDecode_io_MemWrite; // @[control.scala 20:31 control.scala 43:31]
  assign io_Branch2 = CtrlDecode_io_Branch2; // @[control.scala 21:27 control.scala 44:27]
  assign io_MemRead = CtrlDecode_io_MemRead; // @[control.scala 22:27 control.scala 45:27]
  assign io_RegWrite = CtrlDecode_io_RegWrite; // @[control.scala 23:28 control.scala 46:28]
  assign io_MemtoReg = CtrlDecode_io_MemtoReg; // @[control.scala 24:28 control.scala 47:28]
  assign io_ALUoperation = CtrlDecode_io_ALUoperation; // @[control.scala 25:32 control.scala 48:32]
  assign io_operand_A_sel = CtrlDecode_io_operand_A_sel; // @[control.scala 26:33 control.scala 49:33]
  assign io_operand_B_sel = CtrlDecode_io_operand_B_sel; // @[control.scala 27:33 control.scala 50:33]
  assign io_extend_sel = CtrlDecode_io_extend_sel; // @[control.scala 28:30 control.scala 51:30]
  assign io_next_PC_sel = CtrlDecode_io_next_PC_sel; // @[control.scala 29:31 control.scala 52:31]
  assign InstDecode_io_opcode = io_opcode; // @[control.scala 33:37]
  assign CtrlDecode_io_R_Format = InstDecode_io_R_Format; // @[control.scala 34:39]
  assign CtrlDecode_io_Load = InstDecode_io_Load; // @[control.scala 35:35]
  assign CtrlDecode_io_Store = InstDecode_io_Store; // @[control.scala 36:36]
  assign CtrlDecode_io_Branch = InstDecode_io_Branch; // @[control.scala 37:37]
  assign CtrlDecode_io_I_Type = InstDecode_io_I_Type; // @[control.scala 38:37]
  assign CtrlDecode_io_JALR = InstDecode_io_JALR; // @[control.scala 39:35]
  assign CtrlDecode_io_JAL = InstDecode_io_JAL; // @[control.scala 40:34]
  assign CtrlDecode_io_LUI = InstDecode_io_LUI; // @[control.scala 41:34]
endmodule
module reg_32(
  input         clock,
  input         io_regwrite,
  input  [4:0]  io_rd_sel,
  input  [4:0]  io_rs1_sel,
  input  [4:0]  io_rs2_sel,
  input  [31:0] io_WriteData,
  output [31:0] io_rs1,
  output [31:0] io_rs2
);
  reg [31:0] registers_c_0; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_0;
  reg [31:0] registers_c_1; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_1;
  reg [31:0] registers_c_2; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_2;
  reg [31:0] registers_c_3; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_3;
  reg [31:0] registers_c_4; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_4;
  reg [31:0] registers_c_5; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_5;
  reg [31:0] registers_c_6; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_6;
  reg [31:0] registers_c_7; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_7;
  reg [31:0] registers_c_8; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_8;
  reg [31:0] registers_c_9; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_9;
  reg [31:0] registers_c_10; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_10;
  reg [31:0] registers_c_11; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_11;
  reg [31:0] registers_c_12; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_12;
  reg [31:0] registers_c_13; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_13;
  reg [31:0] registers_c_14; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_14;
  reg [31:0] registers_c_15; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_15;
  reg [31:0] registers_c_16; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_16;
  reg [31:0] registers_c_17; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_17;
  reg [31:0] registers_c_18; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_18;
  reg [31:0] registers_c_19; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_19;
  reg [31:0] registers_c_20; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_20;
  reg [31:0] registers_c_21; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_21;
  reg [31:0] registers_c_22; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_22;
  reg [31:0] registers_c_23; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_23;
  reg [31:0] registers_c_24; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_24;
  reg [31:0] registers_c_25; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_25;
  reg [31:0] registers_c_26; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_26;
  reg [31:0] registers_c_27; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_27;
  reg [31:0] registers_c_28; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_28;
  reg [31:0] registers_c_29; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_29;
  reg [31:0] registers_c_30; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_30;
  reg [31:0] registers_c_31; // @[reg_32.scala 18:36]
  reg [31:0] _RAND_31;
  wire [31:0] _GEN_1; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_2; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_3; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_4; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_5; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_6; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_7; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_8; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_9; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_10; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_11; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_12; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_13; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_14; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_15; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_16; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_17; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_18; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_19; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_20; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_21; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_22; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_23; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_24; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_25; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_26; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_27; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_28; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_29; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_30; // @[reg_32.scala 20:23]
  wire [31:0] _GEN_33; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_34; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_35; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_36; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_37; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_38; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_39; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_40; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_41; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_42; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_43; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_44; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_45; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_46; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_47; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_48; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_49; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_50; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_51; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_52; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_53; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_54; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_55; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_56; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_57; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_58; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_59; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_60; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_61; // @[reg_32.scala 21:24]
  wire [31:0] _GEN_62; // @[reg_32.scala 21:24]
  wire  _T_62; // @[reg_32.scala 23:40]
  wire [31:0] _GEN_65; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_66; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_67; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_68; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_69; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_70; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_71; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_72; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_73; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_74; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_75; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_76; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_77; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_78; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_79; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_80; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_81; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_82; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_83; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_84; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_85; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_86; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_87; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_88; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_89; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_90; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_91; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_92; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_93; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_94; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_95; // @[reg_32.scala 24:56]
  wire [31:0] _GEN_96; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_97; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_98; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_99; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_100; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_101; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_102; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_103; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_104; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_105; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_106; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_107; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_108; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_109; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_110; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_111; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_112; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_113; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_114; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_115; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_116; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_117; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_118; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_119; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_120; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_121; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_122; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_123; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_124; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_125; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_126; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_127; // @[reg_32.scala 26:48]
  wire [31:0] _GEN_129; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_130; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_131; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_132; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_133; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_134; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_135; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_136; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_137; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_138; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_139; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_140; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_141; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_142; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_143; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_144; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_145; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_146; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_147; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_148; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_149; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_150; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_151; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_152; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_153; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_154; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_155; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_156; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_157; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_158; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_159; // @[reg_32.scala 23:55]
  wire [31:0] _GEN_160; // @[reg_32.scala 23:55]
  assign _GEN_1 = 5'h1 == io_rs1_sel ? $signed(registers_c_1) : $signed(registers_c_0); // @[reg_32.scala 20:23]
  assign _GEN_2 = 5'h2 == io_rs1_sel ? $signed(registers_c_2) : $signed(_GEN_1); // @[reg_32.scala 20:23]
  assign _GEN_3 = 5'h3 == io_rs1_sel ? $signed(registers_c_3) : $signed(_GEN_2); // @[reg_32.scala 20:23]
  assign _GEN_4 = 5'h4 == io_rs1_sel ? $signed(registers_c_4) : $signed(_GEN_3); // @[reg_32.scala 20:23]
  assign _GEN_5 = 5'h5 == io_rs1_sel ? $signed(registers_c_5) : $signed(_GEN_4); // @[reg_32.scala 20:23]
  assign _GEN_6 = 5'h6 == io_rs1_sel ? $signed(registers_c_6) : $signed(_GEN_5); // @[reg_32.scala 20:23]
  assign _GEN_7 = 5'h7 == io_rs1_sel ? $signed(registers_c_7) : $signed(_GEN_6); // @[reg_32.scala 20:23]
  assign _GEN_8 = 5'h8 == io_rs1_sel ? $signed(registers_c_8) : $signed(_GEN_7); // @[reg_32.scala 20:23]
  assign _GEN_9 = 5'h9 == io_rs1_sel ? $signed(registers_c_9) : $signed(_GEN_8); // @[reg_32.scala 20:23]
  assign _GEN_10 = 5'ha == io_rs1_sel ? $signed(registers_c_10) : $signed(_GEN_9); // @[reg_32.scala 20:23]
  assign _GEN_11 = 5'hb == io_rs1_sel ? $signed(registers_c_11) : $signed(_GEN_10); // @[reg_32.scala 20:23]
  assign _GEN_12 = 5'hc == io_rs1_sel ? $signed(registers_c_12) : $signed(_GEN_11); // @[reg_32.scala 20:23]
  assign _GEN_13 = 5'hd == io_rs1_sel ? $signed(registers_c_13) : $signed(_GEN_12); // @[reg_32.scala 20:23]
  assign _GEN_14 = 5'he == io_rs1_sel ? $signed(registers_c_14) : $signed(_GEN_13); // @[reg_32.scala 20:23]
  assign _GEN_15 = 5'hf == io_rs1_sel ? $signed(registers_c_15) : $signed(_GEN_14); // @[reg_32.scala 20:23]
  assign _GEN_16 = 5'h10 == io_rs1_sel ? $signed(registers_c_16) : $signed(_GEN_15); // @[reg_32.scala 20:23]
  assign _GEN_17 = 5'h11 == io_rs1_sel ? $signed(registers_c_17) : $signed(_GEN_16); // @[reg_32.scala 20:23]
  assign _GEN_18 = 5'h12 == io_rs1_sel ? $signed(registers_c_18) : $signed(_GEN_17); // @[reg_32.scala 20:23]
  assign _GEN_19 = 5'h13 == io_rs1_sel ? $signed(registers_c_19) : $signed(_GEN_18); // @[reg_32.scala 20:23]
  assign _GEN_20 = 5'h14 == io_rs1_sel ? $signed(registers_c_20) : $signed(_GEN_19); // @[reg_32.scala 20:23]
  assign _GEN_21 = 5'h15 == io_rs1_sel ? $signed(registers_c_21) : $signed(_GEN_20); // @[reg_32.scala 20:23]
  assign _GEN_22 = 5'h16 == io_rs1_sel ? $signed(registers_c_22) : $signed(_GEN_21); // @[reg_32.scala 20:23]
  assign _GEN_23 = 5'h17 == io_rs1_sel ? $signed(registers_c_23) : $signed(_GEN_22); // @[reg_32.scala 20:23]
  assign _GEN_24 = 5'h18 == io_rs1_sel ? $signed(registers_c_24) : $signed(_GEN_23); // @[reg_32.scala 20:23]
  assign _GEN_25 = 5'h19 == io_rs1_sel ? $signed(registers_c_25) : $signed(_GEN_24); // @[reg_32.scala 20:23]
  assign _GEN_26 = 5'h1a == io_rs1_sel ? $signed(registers_c_26) : $signed(_GEN_25); // @[reg_32.scala 20:23]
  assign _GEN_27 = 5'h1b == io_rs1_sel ? $signed(registers_c_27) : $signed(_GEN_26); // @[reg_32.scala 20:23]
  assign _GEN_28 = 5'h1c == io_rs1_sel ? $signed(registers_c_28) : $signed(_GEN_27); // @[reg_32.scala 20:23]
  assign _GEN_29 = 5'h1d == io_rs1_sel ? $signed(registers_c_29) : $signed(_GEN_28); // @[reg_32.scala 20:23]
  assign _GEN_30 = 5'h1e == io_rs1_sel ? $signed(registers_c_30) : $signed(_GEN_29); // @[reg_32.scala 20:23]
  assign _GEN_33 = 5'h1 == io_rs2_sel ? $signed(registers_c_1) : $signed(registers_c_0); // @[reg_32.scala 21:24]
  assign _GEN_34 = 5'h2 == io_rs2_sel ? $signed(registers_c_2) : $signed(_GEN_33); // @[reg_32.scala 21:24]
  assign _GEN_35 = 5'h3 == io_rs2_sel ? $signed(registers_c_3) : $signed(_GEN_34); // @[reg_32.scala 21:24]
  assign _GEN_36 = 5'h4 == io_rs2_sel ? $signed(registers_c_4) : $signed(_GEN_35); // @[reg_32.scala 21:24]
  assign _GEN_37 = 5'h5 == io_rs2_sel ? $signed(registers_c_5) : $signed(_GEN_36); // @[reg_32.scala 21:24]
  assign _GEN_38 = 5'h6 == io_rs2_sel ? $signed(registers_c_6) : $signed(_GEN_37); // @[reg_32.scala 21:24]
  assign _GEN_39 = 5'h7 == io_rs2_sel ? $signed(registers_c_7) : $signed(_GEN_38); // @[reg_32.scala 21:24]
  assign _GEN_40 = 5'h8 == io_rs2_sel ? $signed(registers_c_8) : $signed(_GEN_39); // @[reg_32.scala 21:24]
  assign _GEN_41 = 5'h9 == io_rs2_sel ? $signed(registers_c_9) : $signed(_GEN_40); // @[reg_32.scala 21:24]
  assign _GEN_42 = 5'ha == io_rs2_sel ? $signed(registers_c_10) : $signed(_GEN_41); // @[reg_32.scala 21:24]
  assign _GEN_43 = 5'hb == io_rs2_sel ? $signed(registers_c_11) : $signed(_GEN_42); // @[reg_32.scala 21:24]
  assign _GEN_44 = 5'hc == io_rs2_sel ? $signed(registers_c_12) : $signed(_GEN_43); // @[reg_32.scala 21:24]
  assign _GEN_45 = 5'hd == io_rs2_sel ? $signed(registers_c_13) : $signed(_GEN_44); // @[reg_32.scala 21:24]
  assign _GEN_46 = 5'he == io_rs2_sel ? $signed(registers_c_14) : $signed(_GEN_45); // @[reg_32.scala 21:24]
  assign _GEN_47 = 5'hf == io_rs2_sel ? $signed(registers_c_15) : $signed(_GEN_46); // @[reg_32.scala 21:24]
  assign _GEN_48 = 5'h10 == io_rs2_sel ? $signed(registers_c_16) : $signed(_GEN_47); // @[reg_32.scala 21:24]
  assign _GEN_49 = 5'h11 == io_rs2_sel ? $signed(registers_c_17) : $signed(_GEN_48); // @[reg_32.scala 21:24]
  assign _GEN_50 = 5'h12 == io_rs2_sel ? $signed(registers_c_18) : $signed(_GEN_49); // @[reg_32.scala 21:24]
  assign _GEN_51 = 5'h13 == io_rs2_sel ? $signed(registers_c_19) : $signed(_GEN_50); // @[reg_32.scala 21:24]
  assign _GEN_52 = 5'h14 == io_rs2_sel ? $signed(registers_c_20) : $signed(_GEN_51); // @[reg_32.scala 21:24]
  assign _GEN_53 = 5'h15 == io_rs2_sel ? $signed(registers_c_21) : $signed(_GEN_52); // @[reg_32.scala 21:24]
  assign _GEN_54 = 5'h16 == io_rs2_sel ? $signed(registers_c_22) : $signed(_GEN_53); // @[reg_32.scala 21:24]
  assign _GEN_55 = 5'h17 == io_rs2_sel ? $signed(registers_c_23) : $signed(_GEN_54); // @[reg_32.scala 21:24]
  assign _GEN_56 = 5'h18 == io_rs2_sel ? $signed(registers_c_24) : $signed(_GEN_55); // @[reg_32.scala 21:24]
  assign _GEN_57 = 5'h19 == io_rs2_sel ? $signed(registers_c_25) : $signed(_GEN_56); // @[reg_32.scala 21:24]
  assign _GEN_58 = 5'h1a == io_rs2_sel ? $signed(registers_c_26) : $signed(_GEN_57); // @[reg_32.scala 21:24]
  assign _GEN_59 = 5'h1b == io_rs2_sel ? $signed(registers_c_27) : $signed(_GEN_58); // @[reg_32.scala 21:24]
  assign _GEN_60 = 5'h1c == io_rs2_sel ? $signed(registers_c_28) : $signed(_GEN_59); // @[reg_32.scala 21:24]
  assign _GEN_61 = 5'h1d == io_rs2_sel ? $signed(registers_c_29) : $signed(_GEN_60); // @[reg_32.scala 21:24]
  assign _GEN_62 = 5'h1e == io_rs2_sel ? $signed(registers_c_30) : $signed(_GEN_61); // @[reg_32.scala 21:24]
  assign _T_62 = io_rd_sel == 5'h0; // @[reg_32.scala 23:40]
  assign _GEN_65 = 5'h1 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_1); // @[reg_32.scala 24:56]
  assign _GEN_66 = 5'h2 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_2); // @[reg_32.scala 24:56]
  assign _GEN_67 = 5'h3 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_3); // @[reg_32.scala 24:56]
  assign _GEN_68 = 5'h4 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_4); // @[reg_32.scala 24:56]
  assign _GEN_69 = 5'h5 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_5); // @[reg_32.scala 24:56]
  assign _GEN_70 = 5'h6 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_6); // @[reg_32.scala 24:56]
  assign _GEN_71 = 5'h7 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_7); // @[reg_32.scala 24:56]
  assign _GEN_72 = 5'h8 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_8); // @[reg_32.scala 24:56]
  assign _GEN_73 = 5'h9 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_9); // @[reg_32.scala 24:56]
  assign _GEN_74 = 5'ha == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_10); // @[reg_32.scala 24:56]
  assign _GEN_75 = 5'hb == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_11); // @[reg_32.scala 24:56]
  assign _GEN_76 = 5'hc == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_12); // @[reg_32.scala 24:56]
  assign _GEN_77 = 5'hd == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_13); // @[reg_32.scala 24:56]
  assign _GEN_78 = 5'he == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_14); // @[reg_32.scala 24:56]
  assign _GEN_79 = 5'hf == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_15); // @[reg_32.scala 24:56]
  assign _GEN_80 = 5'h10 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_16); // @[reg_32.scala 24:56]
  assign _GEN_81 = 5'h11 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_17); // @[reg_32.scala 24:56]
  assign _GEN_82 = 5'h12 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_18); // @[reg_32.scala 24:56]
  assign _GEN_83 = 5'h13 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_19); // @[reg_32.scala 24:56]
  assign _GEN_84 = 5'h14 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_20); // @[reg_32.scala 24:56]
  assign _GEN_85 = 5'h15 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_21); // @[reg_32.scala 24:56]
  assign _GEN_86 = 5'h16 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_22); // @[reg_32.scala 24:56]
  assign _GEN_87 = 5'h17 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_23); // @[reg_32.scala 24:56]
  assign _GEN_88 = 5'h18 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_24); // @[reg_32.scala 24:56]
  assign _GEN_89 = 5'h19 == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_25); // @[reg_32.scala 24:56]
  assign _GEN_90 = 5'h1a == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_26); // @[reg_32.scala 24:56]
  assign _GEN_91 = 5'h1b == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_27); // @[reg_32.scala 24:56]
  assign _GEN_92 = 5'h1c == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_28); // @[reg_32.scala 24:56]
  assign _GEN_93 = 5'h1d == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_29); // @[reg_32.scala 24:56]
  assign _GEN_94 = 5'h1e == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_30); // @[reg_32.scala 24:56]
  assign _GEN_95 = 5'h1f == io_rd_sel ? $signed(32'sh0) : $signed(registers_c_31); // @[reg_32.scala 24:56]
  assign _GEN_96 = 5'h0 == io_rd_sel ? $signed(io_WriteData) : $signed(32'sh0); // @[reg_32.scala 26:48]
  assign _GEN_97 = 5'h1 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_1); // @[reg_32.scala 26:48]
  assign _GEN_98 = 5'h2 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_2); // @[reg_32.scala 26:48]
  assign _GEN_99 = 5'h3 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_3); // @[reg_32.scala 26:48]
  assign _GEN_100 = 5'h4 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_4); // @[reg_32.scala 26:48]
  assign _GEN_101 = 5'h5 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_5); // @[reg_32.scala 26:48]
  assign _GEN_102 = 5'h6 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_6); // @[reg_32.scala 26:48]
  assign _GEN_103 = 5'h7 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_7); // @[reg_32.scala 26:48]
  assign _GEN_104 = 5'h8 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_8); // @[reg_32.scala 26:48]
  assign _GEN_105 = 5'h9 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_9); // @[reg_32.scala 26:48]
  assign _GEN_106 = 5'ha == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_10); // @[reg_32.scala 26:48]
  assign _GEN_107 = 5'hb == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_11); // @[reg_32.scala 26:48]
  assign _GEN_108 = 5'hc == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_12); // @[reg_32.scala 26:48]
  assign _GEN_109 = 5'hd == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_13); // @[reg_32.scala 26:48]
  assign _GEN_110 = 5'he == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_14); // @[reg_32.scala 26:48]
  assign _GEN_111 = 5'hf == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_15); // @[reg_32.scala 26:48]
  assign _GEN_112 = 5'h10 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_16); // @[reg_32.scala 26:48]
  assign _GEN_113 = 5'h11 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_17); // @[reg_32.scala 26:48]
  assign _GEN_114 = 5'h12 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_18); // @[reg_32.scala 26:48]
  assign _GEN_115 = 5'h13 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_19); // @[reg_32.scala 26:48]
  assign _GEN_116 = 5'h14 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_20); // @[reg_32.scala 26:48]
  assign _GEN_117 = 5'h15 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_21); // @[reg_32.scala 26:48]
  assign _GEN_118 = 5'h16 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_22); // @[reg_32.scala 26:48]
  assign _GEN_119 = 5'h17 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_23); // @[reg_32.scala 26:48]
  assign _GEN_120 = 5'h18 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_24); // @[reg_32.scala 26:48]
  assign _GEN_121 = 5'h19 == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_25); // @[reg_32.scala 26:48]
  assign _GEN_122 = 5'h1a == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_26); // @[reg_32.scala 26:48]
  assign _GEN_123 = 5'h1b == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_27); // @[reg_32.scala 26:48]
  assign _GEN_124 = 5'h1c == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_28); // @[reg_32.scala 26:48]
  assign _GEN_125 = 5'h1d == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_29); // @[reg_32.scala 26:48]
  assign _GEN_126 = 5'h1e == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_30); // @[reg_32.scala 26:48]
  assign _GEN_127 = 5'h1f == io_rd_sel ? $signed(io_WriteData) : $signed(registers_c_31); // @[reg_32.scala 26:48]
  assign _GEN_129 = _T_62 ? $signed(32'sh0) : $signed(_GEN_96); // @[reg_32.scala 23:55]
  assign _GEN_130 = _T_62 ? $signed(_GEN_65) : $signed(_GEN_97); // @[reg_32.scala 23:55]
  assign _GEN_131 = _T_62 ? $signed(_GEN_66) : $signed(_GEN_98); // @[reg_32.scala 23:55]
  assign _GEN_132 = _T_62 ? $signed(_GEN_67) : $signed(_GEN_99); // @[reg_32.scala 23:55]
  assign _GEN_133 = _T_62 ? $signed(_GEN_68) : $signed(_GEN_100); // @[reg_32.scala 23:55]
  assign _GEN_134 = _T_62 ? $signed(_GEN_69) : $signed(_GEN_101); // @[reg_32.scala 23:55]
  assign _GEN_135 = _T_62 ? $signed(_GEN_70) : $signed(_GEN_102); // @[reg_32.scala 23:55]
  assign _GEN_136 = _T_62 ? $signed(_GEN_71) : $signed(_GEN_103); // @[reg_32.scala 23:55]
  assign _GEN_137 = _T_62 ? $signed(_GEN_72) : $signed(_GEN_104); // @[reg_32.scala 23:55]
  assign _GEN_138 = _T_62 ? $signed(_GEN_73) : $signed(_GEN_105); // @[reg_32.scala 23:55]
  assign _GEN_139 = _T_62 ? $signed(_GEN_74) : $signed(_GEN_106); // @[reg_32.scala 23:55]
  assign _GEN_140 = _T_62 ? $signed(_GEN_75) : $signed(_GEN_107); // @[reg_32.scala 23:55]
  assign _GEN_141 = _T_62 ? $signed(_GEN_76) : $signed(_GEN_108); // @[reg_32.scala 23:55]
  assign _GEN_142 = _T_62 ? $signed(_GEN_77) : $signed(_GEN_109); // @[reg_32.scala 23:55]
  assign _GEN_143 = _T_62 ? $signed(_GEN_78) : $signed(_GEN_110); // @[reg_32.scala 23:55]
  assign _GEN_144 = _T_62 ? $signed(_GEN_79) : $signed(_GEN_111); // @[reg_32.scala 23:55]
  assign _GEN_145 = _T_62 ? $signed(_GEN_80) : $signed(_GEN_112); // @[reg_32.scala 23:55]
  assign _GEN_146 = _T_62 ? $signed(_GEN_81) : $signed(_GEN_113); // @[reg_32.scala 23:55]
  assign _GEN_147 = _T_62 ? $signed(_GEN_82) : $signed(_GEN_114); // @[reg_32.scala 23:55]
  assign _GEN_148 = _T_62 ? $signed(_GEN_83) : $signed(_GEN_115); // @[reg_32.scala 23:55]
  assign _GEN_149 = _T_62 ? $signed(_GEN_84) : $signed(_GEN_116); // @[reg_32.scala 23:55]
  assign _GEN_150 = _T_62 ? $signed(_GEN_85) : $signed(_GEN_117); // @[reg_32.scala 23:55]
  assign _GEN_151 = _T_62 ? $signed(_GEN_86) : $signed(_GEN_118); // @[reg_32.scala 23:55]
  assign _GEN_152 = _T_62 ? $signed(_GEN_87) : $signed(_GEN_119); // @[reg_32.scala 23:55]
  assign _GEN_153 = _T_62 ? $signed(_GEN_88) : $signed(_GEN_120); // @[reg_32.scala 23:55]
  assign _GEN_154 = _T_62 ? $signed(_GEN_89) : $signed(_GEN_121); // @[reg_32.scala 23:55]
  assign _GEN_155 = _T_62 ? $signed(_GEN_90) : $signed(_GEN_122); // @[reg_32.scala 23:55]
  assign _GEN_156 = _T_62 ? $signed(_GEN_91) : $signed(_GEN_123); // @[reg_32.scala 23:55]
  assign _GEN_157 = _T_62 ? $signed(_GEN_92) : $signed(_GEN_124); // @[reg_32.scala 23:55]
  assign _GEN_158 = _T_62 ? $signed(_GEN_93) : $signed(_GEN_125); // @[reg_32.scala 23:55]
  assign _GEN_159 = _T_62 ? $signed(_GEN_94) : $signed(_GEN_126); // @[reg_32.scala 23:55]
  assign _GEN_160 = _T_62 ? $signed(_GEN_95) : $signed(_GEN_127); // @[reg_32.scala 23:55]
  assign io_rs1 = 5'h1f == io_rs1_sel ? $signed(registers_c_31) : $signed(_GEN_30); // @[reg_32.scala 20:23]
  assign io_rs2 = 5'h1f == io_rs2_sel ? $signed(registers_c_31) : $signed(_GEN_62); // @[reg_32.scala 21:24]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  registers_c_0 = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  registers_c_1 = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  registers_c_2 = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  registers_c_3 = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  registers_c_4 = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  registers_c_5 = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  registers_c_6 = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  registers_c_7 = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  registers_c_8 = _RAND_8[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  registers_c_9 = _RAND_9[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  registers_c_10 = _RAND_10[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  registers_c_11 = _RAND_11[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  registers_c_12 = _RAND_12[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  registers_c_13 = _RAND_13[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  registers_c_14 = _RAND_14[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  registers_c_15 = _RAND_15[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  registers_c_16 = _RAND_16[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  registers_c_17 = _RAND_17[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {1{`RANDOM}};
  registers_c_18 = _RAND_18[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {1{`RANDOM}};
  registers_c_19 = _RAND_19[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {1{`RANDOM}};
  registers_c_20 = _RAND_20[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {1{`RANDOM}};
  registers_c_21 = _RAND_21[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {1{`RANDOM}};
  registers_c_22 = _RAND_22[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {1{`RANDOM}};
  registers_c_23 = _RAND_23[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_24 = {1{`RANDOM}};
  registers_c_24 = _RAND_24[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_25 = {1{`RANDOM}};
  registers_c_25 = _RAND_25[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_26 = {1{`RANDOM}};
  registers_c_26 = _RAND_26[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_27 = {1{`RANDOM}};
  registers_c_27 = _RAND_27[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_28 = {1{`RANDOM}};
  registers_c_28 = _RAND_28[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_29 = {1{`RANDOM}};
  registers_c_29 = _RAND_29[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_30 = {1{`RANDOM}};
  registers_c_30 = _RAND_30[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_31 = {1{`RANDOM}};
  registers_c_31 = _RAND_31[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (io_regwrite) begin
      if (_T_62) begin
        registers_c_0 <= 32'sh0;
      end else begin
        if (5'h0 == io_rd_sel) begin
          registers_c_0 <= io_WriteData;
        end else begin
          registers_c_0 <= 32'sh0;
        end
      end
    end else begin
      registers_c_0 <= 32'sh0;
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h1 == io_rd_sel) begin
          registers_c_1 <= 32'sh0;
        end
      end else begin
        if (5'h1 == io_rd_sel) begin
          registers_c_1 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h2 == io_rd_sel) begin
          registers_c_2 <= 32'sh0;
        end
      end else begin
        if (5'h2 == io_rd_sel) begin
          registers_c_2 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h3 == io_rd_sel) begin
          registers_c_3 <= 32'sh0;
        end
      end else begin
        if (5'h3 == io_rd_sel) begin
          registers_c_3 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h4 == io_rd_sel) begin
          registers_c_4 <= 32'sh0;
        end
      end else begin
        if (5'h4 == io_rd_sel) begin
          registers_c_4 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h5 == io_rd_sel) begin
          registers_c_5 <= 32'sh0;
        end
      end else begin
        if (5'h5 == io_rd_sel) begin
          registers_c_5 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h6 == io_rd_sel) begin
          registers_c_6 <= 32'sh0;
        end
      end else begin
        if (5'h6 == io_rd_sel) begin
          registers_c_6 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h7 == io_rd_sel) begin
          registers_c_7 <= 32'sh0;
        end
      end else begin
        if (5'h7 == io_rd_sel) begin
          registers_c_7 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h8 == io_rd_sel) begin
          registers_c_8 <= 32'sh0;
        end
      end else begin
        if (5'h8 == io_rd_sel) begin
          registers_c_8 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h9 == io_rd_sel) begin
          registers_c_9 <= 32'sh0;
        end
      end else begin
        if (5'h9 == io_rd_sel) begin
          registers_c_9 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'ha == io_rd_sel) begin
          registers_c_10 <= 32'sh0;
        end
      end else begin
        if (5'ha == io_rd_sel) begin
          registers_c_10 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'hb == io_rd_sel) begin
          registers_c_11 <= 32'sh0;
        end
      end else begin
        if (5'hb == io_rd_sel) begin
          registers_c_11 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'hc == io_rd_sel) begin
          registers_c_12 <= 32'sh0;
        end
      end else begin
        if (5'hc == io_rd_sel) begin
          registers_c_12 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'hd == io_rd_sel) begin
          registers_c_13 <= 32'sh0;
        end
      end else begin
        if (5'hd == io_rd_sel) begin
          registers_c_13 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'he == io_rd_sel) begin
          registers_c_14 <= 32'sh0;
        end
      end else begin
        if (5'he == io_rd_sel) begin
          registers_c_14 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'hf == io_rd_sel) begin
          registers_c_15 <= 32'sh0;
        end
      end else begin
        if (5'hf == io_rd_sel) begin
          registers_c_15 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h10 == io_rd_sel) begin
          registers_c_16 <= 32'sh0;
        end
      end else begin
        if (5'h10 == io_rd_sel) begin
          registers_c_16 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h11 == io_rd_sel) begin
          registers_c_17 <= 32'sh0;
        end
      end else begin
        if (5'h11 == io_rd_sel) begin
          registers_c_17 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h12 == io_rd_sel) begin
          registers_c_18 <= 32'sh0;
        end
      end else begin
        if (5'h12 == io_rd_sel) begin
          registers_c_18 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h13 == io_rd_sel) begin
          registers_c_19 <= 32'sh0;
        end
      end else begin
        if (5'h13 == io_rd_sel) begin
          registers_c_19 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h14 == io_rd_sel) begin
          registers_c_20 <= 32'sh0;
        end
      end else begin
        if (5'h14 == io_rd_sel) begin
          registers_c_20 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h15 == io_rd_sel) begin
          registers_c_21 <= 32'sh0;
        end
      end else begin
        if (5'h15 == io_rd_sel) begin
          registers_c_21 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h16 == io_rd_sel) begin
          registers_c_22 <= 32'sh0;
        end
      end else begin
        if (5'h16 == io_rd_sel) begin
          registers_c_22 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h17 == io_rd_sel) begin
          registers_c_23 <= 32'sh0;
        end
      end else begin
        if (5'h17 == io_rd_sel) begin
          registers_c_23 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h18 == io_rd_sel) begin
          registers_c_24 <= 32'sh0;
        end
      end else begin
        if (5'h18 == io_rd_sel) begin
          registers_c_24 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h19 == io_rd_sel) begin
          registers_c_25 <= 32'sh0;
        end
      end else begin
        if (5'h19 == io_rd_sel) begin
          registers_c_25 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h1a == io_rd_sel) begin
          registers_c_26 <= 32'sh0;
        end
      end else begin
        if (5'h1a == io_rd_sel) begin
          registers_c_26 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h1b == io_rd_sel) begin
          registers_c_27 <= 32'sh0;
        end
      end else begin
        if (5'h1b == io_rd_sel) begin
          registers_c_27 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h1c == io_rd_sel) begin
          registers_c_28 <= 32'sh0;
        end
      end else begin
        if (5'h1c == io_rd_sel) begin
          registers_c_28 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h1d == io_rd_sel) begin
          registers_c_29 <= 32'sh0;
        end
      end else begin
        if (5'h1d == io_rd_sel) begin
          registers_c_29 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h1e == io_rd_sel) begin
          registers_c_30 <= 32'sh0;
        end
      end else begin
        if (5'h1e == io_rd_sel) begin
          registers_c_30 <= io_WriteData;
        end
      end
    end
    if (io_regwrite) begin
      if (_T_62) begin
        if (5'h1f == io_rd_sel) begin
          registers_c_31 <= 32'sh0;
        end
      end else begin
        if (5'h1f == io_rd_sel) begin
          registers_c_31 <= io_WriteData;
        end
      end
    end
  end
endmodule
module alu(
  input  [31:0] io_A,
  input  [31:0] io_B,
  output [31:0] io_x,
  output        io_AluBranch,
  input  [4:0]  io_Aluop
);
  wire  _T_17; // @[alu.scala 19:31]
  wire [32:0] _T_18; // @[alu.scala 20:35]
  wire [31:0] _T_19; // @[alu.scala 20:35]
  wire [31:0] _T_20; // @[alu.scala 20:35]
  wire  _T_22; // @[alu.scala 21:37]
  wire [31:0] _T_23; // @[alu.scala 22:40]
  wire [31:0] _T_24; // @[alu.scala 23:41]
  wire [4:0] _T_25; // @[alu.scala 24:40]
  wire [62:0] _GEN_24; // @[alu.scala 25:40]
  wire [62:0] _T_26; // @[alu.scala 25:40]
  wire [62:0] _T_27; // @[alu.scala 26:41]
  wire  _T_29; // @[alu.scala 28:37]
  wire  _T_32; // @[alu.scala 31:35]
  wire [1:0] _GEN_0; // @[alu.scala 31:42]
  wire  _T_36; // @[alu.scala 36:38]
  wire  _T_38; // @[alu.scala 36:66]
  wire  _T_39; // @[alu.scala 36:54]
  wire  _T_42; // @[alu.scala 39:33]
  wire [1:0] _GEN_1; // @[alu.scala 39:38]
  wire  _T_46; // @[alu.scala 44:37]
  wire [31:0] _T_47; // @[alu.scala 45:30]
  wire [31:0] _T_48; // @[alu.scala 45:30]
  wire  _T_50; // @[alu.scala 46:37]
  wire [4:0] _T_51; // @[alu.scala 47:30]
  wire [31:0] _T_55; // @[alu.scala 49:41]
  wire [31:0] _T_56; // @[alu.scala 50:31]
  wire  _T_58; // @[alu.scala 51:37]
  wire [31:0] _T_59; // @[alu.scala 52:38]
  wire [31:0] _T_60; // @[alu.scala 52:38]
  wire  _T_62; // @[alu.scala 53:37]
  wire [31:0] _T_63; // @[alu.scala 54:38]
  wire [31:0] _T_64; // @[alu.scala 54:38]
  wire  _T_66; // @[alu.scala 55:37]
  wire [32:0] _T_67; // @[alu.scala 56:38]
  wire [31:0] _T_68; // @[alu.scala 56:38]
  wire [31:0] _T_69; // @[alu.scala 56:38]
  wire  _T_71; // @[alu.scala 57:37]
  wire [4:0] _T_74; // @[alu.scala 58:44]
  wire [4:0] _T_75; // @[alu.scala 58:58]
  wire  _T_77; // @[alu.scala 59:37]
  wire  _T_78; // @[alu.scala 60:35]
  wire [1:0] _GEN_2; // @[alu.scala 60:44]
  wire  _T_82; // @[alu.scala 65:37]
  wire [1:0] _GEN_3; // @[alu.scala 66:44]
  wire  _T_87; // @[alu.scala 71:37]
  wire  _T_92; // @[alu.scala 77:37]
  wire  _T_94; // @[alu.scala 78:54]
  wire  _T_95; // @[alu.scala 78:46]
  wire [1:0] _GEN_5; // @[alu.scala 78:62]
  wire  _T_99; // @[alu.scala 83:37]
  wire  _T_102; // @[alu.scala 86:34]
  wire  _T_103; // @[alu.scala 86:48]
  wire  _T_104; // @[alu.scala 86:42]
  wire [1:0] _GEN_6; // @[alu.scala 86:54]
  wire [1:0] _GEN_7; // @[alu.scala 83:52]
  wire [1:0] _GEN_8; // @[alu.scala 77:52]
  wire [1:0] _GEN_9; // @[alu.scala 71:52]
  wire [1:0] _GEN_10; // @[alu.scala 65:52]
  wire [1:0] _GEN_11; // @[alu.scala 59:52]
  wire [4:0] _GEN_12; // @[alu.scala 57:52]
  wire [31:0] _GEN_13; // @[alu.scala 55:52]
  wire [31:0] _GEN_14; // @[alu.scala 53:52]
  wire [31:0] _GEN_15; // @[alu.scala 51:52]
  wire [31:0] _GEN_16; // @[alu.scala 46:52]
  wire [31:0] _GEN_17; // @[alu.scala 44:52]
  wire [31:0] _GEN_18; // @[alu.scala 36:82]
  wire [31:0] _GEN_19; // @[alu.scala 30:51]
  wire [31:0] _GEN_20; // @[alu.scala 28:51]
  wire [62:0] _GEN_21; // @[alu.scala 21:51]
  wire [62:0] _GEN_22; // @[alu.scala 19:46]
  wire [1:0] _T_107; // @[alu.scala 96:31]
  wire  _T_109; // @[alu.scala 96:37]
  wire  _T_111; // @[alu.scala 96:58]
  wire [31:0] _GEN_25; // @[alu.scala 17:22 alu.scala 20:29 alu.scala 27:30 alu.scala 29:29 alu.scala 32:30 alu.scala 34:30 alu.scala 40:38 alu.scala 42:38 alu.scala 45:22 alu.scala 50:22 alu.scala 52:30 alu.scala 54:30 alu.scala 56:30 alu.scala 58:30 alu.scala 61:38 alu.scala 63:38 alu.scala 67:30 alu.scala 69:38 alu.scala 73:38 alu.scala 75:38 alu.scala 79:38 alu.scala 81:38 alu.scala 87:38 alu.scala 89:38]
  assign _T_17 = io_Aluop == 5'h0; // @[alu.scala 19:31]
  assign _T_18 = $signed(io_A) + $signed(io_B); // @[alu.scala 20:35]
  assign _T_19 = $signed(io_A) + $signed(io_B); // @[alu.scala 20:35]
  assign _T_20 = $signed(_T_19); // @[alu.scala 20:35]
  assign _T_22 = io_Aluop == 5'h1; // @[alu.scala 21:37]
  assign _T_23 = $unsigned(io_A); // @[alu.scala 22:40]
  assign _T_24 = $unsigned(io_B); // @[alu.scala 23:41]
  assign _T_25 = io_B[4:0]; // @[alu.scala 24:40]
  assign _GEN_24 = {{31'd0}, _T_23}; // @[alu.scala 25:40]
  assign _T_26 = _GEN_24 << _T_25; // @[alu.scala 25:40]
  assign _T_27 = $signed(_T_26); // @[alu.scala 26:41]
  assign _T_29 = io_Aluop == 5'h1f; // @[alu.scala 28:37]
  assign _T_32 = $signed(io_A) < $signed(io_B); // @[alu.scala 31:35]
  assign _GEN_0 = _T_32 ? $signed(2'sh1) : $signed(2'sh0); // @[alu.scala 31:42]
  assign _T_36 = io_Aluop == 5'h3; // @[alu.scala 36:38]
  assign _T_38 = io_Aluop == 5'h16; // @[alu.scala 36:66]
  assign _T_39 = _T_36 | _T_38; // @[alu.scala 36:54]
  assign _T_42 = _T_23 < _T_24; // @[alu.scala 39:33]
  assign _GEN_1 = _T_42 ? $signed(2'sh1) : $signed(2'sh0); // @[alu.scala 39:38]
  assign _T_46 = io_Aluop == 5'h4; // @[alu.scala 44:37]
  assign _T_47 = $signed(io_A) ^ $signed(io_B); // @[alu.scala 45:30]
  assign _T_48 = $signed(_T_47); // @[alu.scala 45:30]
  assign _T_50 = io_Aluop == 5'h5; // @[alu.scala 46:37]
  assign _T_51 = io_A[4:0]; // @[alu.scala 47:30]
  assign _T_55 = _T_23 >> _T_24; // @[alu.scala 49:41]
  assign _T_56 = $signed(_T_55); // @[alu.scala 50:31]
  assign _T_58 = io_Aluop == 5'h6; // @[alu.scala 51:37]
  assign _T_59 = $signed(io_A) | $signed(io_B); // @[alu.scala 52:38]
  assign _T_60 = $signed(_T_59); // @[alu.scala 52:38]
  assign _T_62 = io_Aluop == 5'h7; // @[alu.scala 53:37]
  assign _T_63 = $signed(io_A) & $signed(io_B); // @[alu.scala 54:38]
  assign _T_64 = $signed(_T_63); // @[alu.scala 54:38]
  assign _T_66 = io_Aluop == 5'h8; // @[alu.scala 55:37]
  assign _T_67 = $signed(io_A) - $signed(io_B); // @[alu.scala 56:38]
  assign _T_68 = $signed(io_A) - $signed(io_B); // @[alu.scala 56:38]
  assign _T_69 = $signed(_T_68); // @[alu.scala 56:38]
  assign _T_71 = io_Aluop == 5'hd; // @[alu.scala 57:37]
  assign _T_74 = _T_51 >> _T_25; // @[alu.scala 58:44]
  assign _T_75 = $signed(_T_74); // @[alu.scala 58:58]
  assign _T_77 = io_Aluop == 5'h10; // @[alu.scala 59:37]
  assign _T_78 = $signed(io_A) == $signed(io_B); // @[alu.scala 60:35]
  assign _GEN_2 = _T_78 ? $signed(2'sh1) : $signed(2'sh0); // @[alu.scala 60:44]
  assign _T_82 = io_Aluop == 5'h11; // @[alu.scala 65:37]
  assign _GEN_3 = _T_78 ? $signed(2'sh0) : $signed(2'sh1); // @[alu.scala 66:44]
  assign _T_87 = io_Aluop == 5'h14; // @[alu.scala 71:37]
  assign _T_92 = io_Aluop == 5'h15; // @[alu.scala 77:37]
  assign _T_94 = $signed(io_A) > $signed(io_B); // @[alu.scala 78:54]
  assign _T_95 = _T_78 | _T_94; // @[alu.scala 78:46]
  assign _GEN_5 = _T_95 ? $signed(2'sh1) : $signed(2'sh0); // @[alu.scala 78:62]
  assign _T_99 = io_Aluop == 5'h17; // @[alu.scala 83:37]
  assign _T_102 = _T_23 == _T_24; // @[alu.scala 86:34]
  assign _T_103 = _T_23 > _T_24; // @[alu.scala 86:48]
  assign _T_104 = _T_102 | _T_103; // @[alu.scala 86:42]
  assign _GEN_6 = _T_104 ? $signed(2'sh1) : $signed(2'sh0); // @[alu.scala 86:54]
  assign _GEN_7 = _T_99 ? $signed(_GEN_6) : $signed(2'sh0); // @[alu.scala 83:52]
  assign _GEN_8 = _T_92 ? $signed(_GEN_5) : $signed(_GEN_7); // @[alu.scala 77:52]
  assign _GEN_9 = _T_87 ? $signed(_GEN_0) : $signed(_GEN_8); // @[alu.scala 71:52]
  assign _GEN_10 = _T_82 ? $signed(_GEN_3) : $signed(_GEN_9); // @[alu.scala 65:52]
  assign _GEN_11 = _T_77 ? $signed(_GEN_2) : $signed(_GEN_10); // @[alu.scala 59:52]
  assign _GEN_12 = _T_71 ? $signed(_T_75) : $signed({{3{_GEN_11[1]}},_GEN_11}); // @[alu.scala 57:52]
  assign _GEN_13 = _T_66 ? $signed(_T_69) : $signed({{27{_GEN_12[4]}},_GEN_12}); // @[alu.scala 55:52]
  assign _GEN_14 = _T_62 ? $signed(_T_64) : $signed(_GEN_13); // @[alu.scala 53:52]
  assign _GEN_15 = _T_58 ? $signed(_T_60) : $signed(_GEN_14); // @[alu.scala 51:52]
  assign _GEN_16 = _T_50 ? $signed(_T_56) : $signed(_GEN_15); // @[alu.scala 46:52]
  assign _GEN_17 = _T_46 ? $signed(_T_48) : $signed(_GEN_16); // @[alu.scala 44:52]
  assign _GEN_18 = _T_39 ? $signed({{30{_GEN_1[1]}},_GEN_1}) : $signed(_GEN_17); // @[alu.scala 36:82]
  assign _GEN_19 = _T_22 ? $signed({{30{_GEN_0[1]}},_GEN_0}) : $signed(_GEN_18); // @[alu.scala 30:51]
  assign _GEN_20 = _T_29 ? $signed(io_A) : $signed(_GEN_19); // @[alu.scala 28:51]
  assign _GEN_21 = _T_22 ? $signed(_T_27) : $signed({{31{_GEN_20[31]}},_GEN_20}); // @[alu.scala 21:51]
  assign _GEN_22 = _T_17 ? $signed({{31{_T_20[31]}},_T_20}) : $signed(_GEN_21); // @[alu.scala 19:46]
  assign _T_107 = io_Aluop[4:3]; // @[alu.scala 96:31]
  assign _T_109 = _T_107 == 2'h2; // @[alu.scala 96:37]
  assign _T_111 = $signed(io_x) == $signed(32'sh1); // @[alu.scala 96:58]
  assign _GEN_25 = _GEN_22[31:0]; // @[alu.scala 17:22 alu.scala 20:29 alu.scala 27:30 alu.scala 29:29 alu.scala 32:30 alu.scala 34:30 alu.scala 40:38 alu.scala 42:38 alu.scala 45:22 alu.scala 50:22 alu.scala 52:30 alu.scala 54:30 alu.scala 56:30 alu.scala 58:30 alu.scala 61:38 alu.scala 63:38 alu.scala 67:30 alu.scala 69:38 alu.scala 73:38 alu.scala 75:38 alu.scala 79:38 alu.scala 81:38 alu.scala 87:38 alu.scala 89:38]
  assign io_x = $signed(_GEN_25); // @[alu.scala 17:22 alu.scala 20:29 alu.scala 27:30 alu.scala 29:29 alu.scala 32:30 alu.scala 34:30 alu.scala 40:38 alu.scala 42:38 alu.scala 45:22 alu.scala 50:22 alu.scala 52:30 alu.scala 54:30 alu.scala 56:30 alu.scala 58:30 alu.scala 61:38 alu.scala 63:38 alu.scala 67:30 alu.scala 69:38 alu.scala 73:38 alu.scala 75:38 alu.scala 79:38 alu.scala 81:38 alu.scala 87:38 alu.scala 89:38]
  assign io_AluBranch = _T_109 & _T_111; // @[alu.scala 97:30 alu.scala 99:30]
endmodule
module ALU_control(
  input  [2:0] io_Aluop,
  input        io_Func7,
  input  [2:0] io_Func3,
  output [4:0] io_control
);
  wire  _T_15; // @[ALU_control.scala 15:31]
  wire [4:0] _T_18; // @[Cat.scala 30:58]
  wire  _T_20; // @[ALU_control.scala 17:37]
  wire  _T_23; // @[ALU_control.scala 19:37]
  wire  _T_26; // @[ALU_control.scala 21:37]
  wire  _T_28; // @[ALU_control.scala 22:31]
  wire [3:0] _T_33; // @[Cat.scala 30:58]
  wire [4:0] _GEN_0; // @[ALU_control.scala 22:44]
  wire  _T_35; // @[ALU_control.scala 28:36]
  wire [4:0] _T_37; // @[Cat.scala 30:58]
  wire  _T_39; // @[ALU_control.scala 30:37]
  wire [4:0] _GEN_2; // @[ALU_control.scala 30:49]
  wire [4:0] _GEN_3; // @[ALU_control.scala 28:48]
  wire [4:0] _GEN_4; // @[ALU_control.scala 21:49]
  wire [4:0] _GEN_5; // @[ALU_control.scala 19:49]
  wire [4:0] _GEN_6; // @[ALU_control.scala 17:50]
  assign _T_15 = io_Aluop == 3'h0; // @[ALU_control.scala 15:31]
  assign _T_18 = {1'h0,io_Func7,io_Func3}; // @[Cat.scala 30:58]
  assign _T_20 = io_Aluop == 3'h4; // @[ALU_control.scala 17:37]
  assign _T_23 = io_Aluop == 3'h5; // @[ALU_control.scala 19:37]
  assign _T_26 = io_Aluop == 3'h1; // @[ALU_control.scala 21:37]
  assign _T_28 = io_Func3 == 3'h5; // @[ALU_control.scala 22:31]
  assign _T_33 = {1'h0,io_Func3}; // @[Cat.scala 30:58]
  assign _GEN_0 = _T_28 ? _T_18 : {{1'd0}, _T_33}; // @[ALU_control.scala 22:44]
  assign _T_35 = io_Aluop == 3'h2; // @[ALU_control.scala 28:36]
  assign _T_37 = {2'h2,io_Func3}; // @[Cat.scala 30:58]
  assign _T_39 = io_Aluop == 3'h3; // @[ALU_control.scala 30:37]
  assign _GEN_2 = _T_39 ? 5'h1f : 5'h0; // @[ALU_control.scala 30:49]
  assign _GEN_3 = _T_35 ? _T_37 : _GEN_2; // @[ALU_control.scala 28:48]
  assign _GEN_4 = _T_26 ? _GEN_0 : _GEN_3; // @[ALU_control.scala 21:49]
  assign _GEN_5 = _T_23 ? 5'h0 : _GEN_4; // @[ALU_control.scala 19:49]
  assign _GEN_6 = _T_20 ? 5'h0 : _GEN_5; // @[ALU_control.scala 17:50]
  assign io_control = _T_15 ? _T_18 : _GEN_6; // @[ALU_control.scala 14:27 ALU_control.scala 16:35 ALU_control.scala 18:35 ALU_control.scala 20:35 ALU_control.scala 23:27 ALU_control.scala 25:28 ALU_control.scala 29:35 ALU_control.scala 31:35 ALU_control.scala 33:35]
endmodule
module ImmediateGeneration(
  input  [31:0] io_Instruction,
  input  [31:0] io_PC,
  output [31:0] io_I_Immediate,
  output [31:0] io_S_Immediate,
  output [31:0] io_U_Immediate,
  output [31:0] io_SB_Immediate,
  output [31:0] io_UJ_Immediate
);
  wire [11:0] sbt1; // @[ImmediateGeneration.scala 17:34]
  wire  _T_19; // @[ImmediateGeneration.scala 18:38]
  wire [18:0] _T_23; // @[Bitwise.scala 72:12]
  wire [30:0] output$; // @[Cat.scala 30:58]
  wire [30:0] output1; // @[ImmediateGeneration.scala 19:30]
  wire [4:0] sbt2; // @[ImmediateGeneration.scala 22:34]
  wire [6:0] sbt3; // @[ImmediateGeneration.scala 23:34]
  wire [11:0] sbt4; // @[Cat.scala 30:58]
  wire  _T_24; // @[ImmediateGeneration.scala 25:39]
  wire [18:0] _T_28; // @[Bitwise.scala 72:12]
  wire [30:0] output2; // @[Cat.scala 30:58]
  wire [30:0] output3; // @[ImmediateGeneration.scala 26:31]
  wire [19:0] sbt5; // @[ImmediateGeneration.scala 29:34]
  wire  _T_29; // @[ImmediateGeneration.scala 30:36]
  wire [10:0] _T_33; // @[Bitwise.scala 72:12]
  wire [30:0] sbt6; // @[Cat.scala 30:58]
  wire [45:0] _GEN_0; // @[ImmediateGeneration.scala 31:25]
  wire [45:0] sbt7; // @[ImmediateGeneration.scala 31:25]
  wire [45:0] output4; // @[ImmediateGeneration.scala 32:28]
  wire  sbt8; // @[ImmediateGeneration.scala 35:34]
  wire [3:0] sbt9; // @[ImmediateGeneration.scala 36:34]
  wire [5:0] sbt10; // @[ImmediateGeneration.scala 37:35]
  wire  sbt11; // @[ImmediateGeneration.scala 38:35]
  wire [12:0] sbt12; // @[Cat.scala 30:58]
  wire  _T_39; // @[ImmediateGeneration.scala 40:38]
  wire [18:0] _T_43; // @[Bitwise.scala 72:12]
  wire [31:0] sbt13; // @[Cat.scala 30:58]
  wire [32:0] _T_44; // @[ImmediateGeneration.scala 41:29]
  wire [31:0] output5; // @[ImmediateGeneration.scala 41:29]
  wire [7:0] sbt14; // @[ImmediateGeneration.scala 45:35]
  wire  sbt15; // @[ImmediateGeneration.scala 46:35]
  wire [9:0] sbt16; // @[ImmediateGeneration.scala 47:35]
  wire [20:0] sbt18; // @[Cat.scala 30:58]
  wire  _T_49; // @[ImmediateGeneration.scala 50:38]
  wire [10:0] _T_53; // @[Bitwise.scala 72:12]
  wire [31:0] sbt19; // @[Cat.scala 30:58]
  wire [32:0] _T_54; // @[ImmediateGeneration.scala 51:29]
  wire [31:0] output8; // @[ImmediateGeneration.scala 51:29]
  wire [31:0] _GEN_3; // @[ImmediateGeneration.scala 33:24]
  assign sbt1 = io_Instruction[31:20]; // @[ImmediateGeneration.scala 17:34]
  assign _T_19 = sbt1[11]; // @[ImmediateGeneration.scala 18:38]
  assign _T_23 = _T_19 ? 19'h7ffff : 19'h0; // @[Bitwise.scala 72:12]
  assign output$ = {_T_23,sbt1}; // @[Cat.scala 30:58]
  assign output1 = $signed(output$); // @[ImmediateGeneration.scala 19:30]
  assign sbt2 = io_Instruction[11:7]; // @[ImmediateGeneration.scala 22:34]
  assign sbt3 = io_Instruction[31:25]; // @[ImmediateGeneration.scala 23:34]
  assign sbt4 = {sbt3,sbt2}; // @[Cat.scala 30:58]
  assign _T_24 = sbt4[11]; // @[ImmediateGeneration.scala 25:39]
  assign _T_28 = _T_24 ? 19'h7ffff : 19'h0; // @[Bitwise.scala 72:12]
  assign output2 = {_T_28,sbt3,sbt2}; // @[Cat.scala 30:58]
  assign output3 = $signed(output2); // @[ImmediateGeneration.scala 26:31]
  assign sbt5 = io_Instruction[31:12]; // @[ImmediateGeneration.scala 29:34]
  assign _T_29 = sbt5[19]; // @[ImmediateGeneration.scala 30:36]
  assign _T_33 = _T_29 ? 11'h7ff : 11'h0; // @[Bitwise.scala 72:12]
  assign sbt6 = {_T_33,sbt5}; // @[Cat.scala 30:58]
  assign _GEN_0 = {{15'd0}, sbt6}; // @[ImmediateGeneration.scala 31:25]
  assign sbt7 = _GEN_0 << 4'hc; // @[ImmediateGeneration.scala 31:25]
  assign output4 = $signed(sbt7); // @[ImmediateGeneration.scala 32:28]
  assign sbt8 = io_Instruction[7]; // @[ImmediateGeneration.scala 35:34]
  assign sbt9 = io_Instruction[11:8]; // @[ImmediateGeneration.scala 36:34]
  assign sbt10 = io_Instruction[30:25]; // @[ImmediateGeneration.scala 37:35]
  assign sbt11 = io_Instruction[31]; // @[ImmediateGeneration.scala 38:35]
  assign sbt12 = {sbt11,sbt8,sbt10,sbt9,1'h0}; // @[Cat.scala 30:58]
  assign _T_39 = sbt12[12]; // @[ImmediateGeneration.scala 40:38]
  assign _T_43 = _T_39 ? 19'h7ffff : 19'h0; // @[Bitwise.scala 72:12]
  assign sbt13 = {_T_43,sbt11,sbt8,sbt10,sbt9,1'h0}; // @[Cat.scala 30:58]
  assign _T_44 = sbt13 + io_PC; // @[ImmediateGeneration.scala 41:29]
  assign output5 = sbt13 + io_PC; // @[ImmediateGeneration.scala 41:29]
  assign sbt14 = io_Instruction[19:12]; // @[ImmediateGeneration.scala 45:35]
  assign sbt15 = io_Instruction[20]; // @[ImmediateGeneration.scala 46:35]
  assign sbt16 = io_Instruction[30:21]; // @[ImmediateGeneration.scala 47:35]
  assign sbt18 = {sbt11,sbt14,sbt15,sbt16,1'h0}; // @[Cat.scala 30:58]
  assign _T_49 = sbt18[20]; // @[ImmediateGeneration.scala 50:38]
  assign _T_53 = _T_49 ? 11'h7ff : 11'h0; // @[Bitwise.scala 72:12]
  assign sbt19 = {_T_53,sbt11,sbt14,sbt15,sbt16,1'h0}; // @[Cat.scala 30:58]
  assign _T_54 = sbt19 + io_PC; // @[ImmediateGeneration.scala 51:29]
  assign output8 = sbt19 + io_PC; // @[ImmediateGeneration.scala 51:29]
  assign io_I_Immediate = {{1{output1[30]}},output1}; // @[ImmediateGeneration.scala 20:24]
  assign io_S_Immediate = {{1{output3[30]}},output3}; // @[ImmediateGeneration.scala 27:24]
  assign _GEN_3 = output4[31:0]; // @[ImmediateGeneration.scala 33:24]
  assign io_U_Immediate = $signed(_GEN_3); // @[ImmediateGeneration.scala 33:24]
  assign io_SB_Immediate = $signed(output5); // @[ImmediateGeneration.scala 43:25]
  assign io_UJ_Immediate = $signed(output8); // @[ImmediateGeneration.scala 53:25]
endmodule
module PC(
  input         clock,
  input  [31:0] io_input,
  output [31:0] io_pc,
  output [31:0] io_pc4
);
  reg [31:0] pc1; // @[PC.scala 12:32]
  reg [31:0] _RAND_0;
  wire [32:0] _T_14; // @[PC.scala 14:28]
  assign _T_14 = pc1 + 32'h4; // @[PC.scala 14:28]
  assign io_pc = pc1; // @[PC.scala 15:22]
  assign io_pc4 = pc1 + 32'h4; // @[PC.scala 14:23]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc1 = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    pc1 <= io_input;
  end
endmodule
module InstructionMemory(
  input         clock,
  input  [31:0] io_wrAddr,
  output [31:0] io_rdData
);
  reg [31:0] mem [0:1023]; // @[InstructionMemory.scala 13:28]
  reg [31:0] _RAND_0;
  wire [31:0] mem__T_12_data; // @[InstructionMemory.scala 13:28]
  wire [9:0] mem__T_12_addr; // @[InstructionMemory.scala 13:28]
  assign mem__T_12_addr = io_wrAddr[9:0];
  assign mem__T_12_data = mem[mem__T_12_addr]; // @[InstructionMemory.scala 13:28]
  assign io_rdData = mem__T_12_data; // @[InstructionMemory.scala 14:26]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    mem[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  end
`endif // RANDOMIZE
endmodule
module DataMemory(
  input         clock,
  input  [7:0]  io_wrAddr,
  input  [31:0] io_wrData,
  input         io_MemRead,
  output [31:0] io_Data,
  input         io_MemWrite
);
  reg [31:0] mem [0:1023]; // @[DataMemory.scala 16:28]
  reg [31:0] _RAND_0;
  wire [31:0] mem__T_23_data; // @[DataMemory.scala 16:28]
  wire [9:0] mem__T_23_addr; // @[DataMemory.scala 16:28]
  wire [31:0] mem__T_20_data; // @[DataMemory.scala 16:28]
  wire [9:0] mem__T_20_addr; // @[DataMemory.scala 16:28]
  wire  mem__T_20_mask; // @[DataMemory.scala 16:28]
  wire  mem__T_20_en; // @[DataMemory.scala 16:28]
  assign mem__T_23_addr = {{2'd0}, io_wrAddr};
  assign mem__T_23_data = mem[mem__T_23_addr]; // @[DataMemory.scala 16:28]
  assign mem__T_20_data = io_wrData;
  assign mem__T_20_addr = {{2'd0}, io_wrAddr};
  assign mem__T_20_mask = 1'h1;
  assign mem__T_20_en = io_MemWrite;
  assign io_Data = io_MemRead ? $signed(mem__T_23_data) : $signed(32'sh0); // @[DataMemory.scala 15:24 DataMemory.scala 22:32]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    mem[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if(mem__T_20_en & mem__T_20_mask) begin
      mem[mem__T_20_addr] <= mem__T_20_data; // @[DataMemory.scala 16:28]
    end
  end
endmodule
module Jalr(
  input  [31:0] io_A,
  input  [31:0] io_B,
  output [31:0] io_x
);
  wire [32:0] _T_11; // @[Jalr.scala 15:28]
  wire [31:0] _T_12; // @[Jalr.scala 15:28]
  wire [31:0] ab; // @[Jalr.scala 15:28]
  wire [32:0] _GEN_0; // @[Jalr.scala 16:27]
  wire [32:0] _T_14; // @[Jalr.scala 16:27]
  wire [32:0] bc; // @[Jalr.scala 16:27]
  wire [31:0] _GEN_1; // @[Jalr.scala 17:21]
  assign _T_11 = $signed(io_A) + $signed(io_B); // @[Jalr.scala 15:28]
  assign _T_12 = $signed(io_A) + $signed(io_B); // @[Jalr.scala 15:28]
  assign ab = $signed(_T_12); // @[Jalr.scala 15:28]
  assign _GEN_0 = {{1{ab[31]}},ab}; // @[Jalr.scala 16:27]
  assign _T_14 = $signed(_GEN_0) & $signed(33'shfffffffe); // @[Jalr.scala 16:27]
  assign bc = $signed(_T_14); // @[Jalr.scala 16:27]
  assign _GEN_1 = bc[31:0]; // @[Jalr.scala 17:21]
  assign io_x = $signed(_GEN_1); // @[Jalr.scala 17:21]
endmodule
module Top(
  input         clock,
  input         reset,
  output [31:0] io_instruction,
  output [31:0] io_reg_out,
  output        io_branch,
  output        io_branch2
);
  wire [6:0] control_io_opcode; // @[Top.scala 12:37]
  wire  control_io_MemoryWrite; // @[Top.scala 12:37]
  wire  control_io_Branch2; // @[Top.scala 12:37]
  wire  control_io_MemRead; // @[Top.scala 12:37]
  wire  control_io_RegWrite; // @[Top.scala 12:37]
  wire  control_io_MemtoReg; // @[Top.scala 12:37]
  wire [2:0] control_io_ALUoperation; // @[Top.scala 12:37]
  wire [1:0] control_io_operand_A_sel; // @[Top.scala 12:37]
  wire  control_io_operand_B_sel; // @[Top.scala 12:37]
  wire [1:0] control_io_extend_sel; // @[Top.scala 12:37]
  wire [1:0] control_io_next_PC_sel; // @[Top.scala 12:37]
  wire  register_clock; // @[Top.scala 13:38]
  wire  register_io_regwrite; // @[Top.scala 13:38]
  wire [4:0] register_io_rd_sel; // @[Top.scala 13:38]
  wire [4:0] register_io_rs1_sel; // @[Top.scala 13:38]
  wire [4:0] register_io_rs2_sel; // @[Top.scala 13:38]
  wire [31:0] register_io_WriteData; // @[Top.scala 13:38]
  wire [31:0] register_io_rs1; // @[Top.scala 13:38]
  wire [31:0] register_io_rs2; // @[Top.scala 13:38]
  wire [31:0] alu_io_A; // @[Top.scala 14:33]
  wire [31:0] alu_io_B; // @[Top.scala 14:33]
  wire [31:0] alu_io_x; // @[Top.scala 14:33]
  wire  alu_io_AluBranch; // @[Top.scala 14:33]
  wire [4:0] alu_io_Aluop; // @[Top.scala 14:33]
  wire [2:0] alucontrol_io_Aluop; // @[Top.scala 15:40]
  wire  alucontrol_io_Func7; // @[Top.scala 15:40]
  wire [2:0] alucontrol_io_Func3; // @[Top.scala 15:40]
  wire [4:0] alucontrol_io_control; // @[Top.scala 15:40]
  wire [31:0] immediate_io_Instruction; // @[Top.scala 16:39]
  wire [31:0] immediate_io_PC; // @[Top.scala 16:39]
  wire [31:0] immediate_io_I_Immediate; // @[Top.scala 16:39]
  wire [31:0] immediate_io_S_Immediate; // @[Top.scala 16:39]
  wire [31:0] immediate_io_U_Immediate; // @[Top.scala 16:39]
  wire [31:0] immediate_io_SB_Immediate; // @[Top.scala 16:39]
  wire [31:0] immediate_io_UJ_Immediate; // @[Top.scala 16:39]
  wire  PC_clock; // @[Top.scala 17:30]
  wire [31:0] PC_io_input; // @[Top.scala 17:30]
  wire [31:0] PC_io_pc; // @[Top.scala 17:30]
  wire [31:0] PC_io_pc4; // @[Top.scala 17:30]
  wire  instmem_clock; // @[Top.scala 18:35]
  wire [31:0] instmem_io_wrAddr; // @[Top.scala 18:35]
  wire [31:0] instmem_io_rdData; // @[Top.scala 18:35]
  wire  DataMemory_clock; // @[Top.scala 19:38]
  wire [7:0] DataMemory_io_wrAddr; // @[Top.scala 19:38]
  wire [31:0] DataMemory_io_wrData; // @[Top.scala 19:38]
  wire  DataMemory_io_MemRead; // @[Top.scala 19:38]
  wire [31:0] DataMemory_io_Data; // @[Top.scala 19:38]
  wire  DataMemory_io_MemWrite; // @[Top.scala 19:38]
  wire [31:0] Jalr_io_A; // @[Top.scala 66:48]
  wire [31:0] Jalr_io_B; // @[Top.scala 66:48]
  wire [31:0] Jalr_io_x; // @[Top.scala 66:48]
  wire [9:0] _T_14; // @[Top.scala 23:44]
  wire  _T_22; // @[Top.scala 41:46]
  wire [31:0] _GEN_0; // @[Top.scala 41:53]
  wire  _T_24; // @[Top.scala 54:46]
  wire [31:0] _T_25; // @[Top.scala 55:45]
  wire [31:0] _GEN_1; // @[Top.scala 56:59]
  wire [31:0] _GEN_2; // @[Top.scala 54:53]
  wire  _T_29; // @[Top.scala 59:45]
  wire  _T_34; // @[Top.scala 60:47]
  wire [31:0] _T_35; // @[Top.scala 61:72]
  wire [32:0] _T_37; // @[Top.scala 63:56]
  wire [31:0] _T_38; // @[Top.scala 63:56]
  wire [31:0] _GEN_3; // @[Top.scala 60:68]
  wire  _T_40; // @[Top.scala 65:50]
  wire [31:0] _T_41; // @[Top.scala 69:56]
  wire  _T_43; // @[Top.scala 70:50]
  wire [31:0] _T_44; // @[Top.scala 71:64]
  wire  _T_46; // @[Top.scala 73:50]
  wire [31:0] _GEN_4; // @[Top.scala 73:57]
  wire [31:0] _GEN_5; // @[Top.scala 70:57]
  wire [31:0] _GEN_6; // @[Top.scala 65:57]
  wire [31:0] _GEN_7; // @[Top.scala 59:52]
  wire  _T_48; // @[Top.scala 76:51]
  wire [31:0] _GEN_9; // @[Top.scala 76:58]
  wire [31:0] _GEN_10; // @[Top.scala 76:58]
  wire  _T_50; // @[Top.scala 81:51]
  wire  _T_52; // @[Top.scala 82:62]
  wire  _T_56; // @[Top.scala 86:81]
  wire [31:0] _GEN_11; // @[Top.scala 86:88]
  wire [31:0] _GEN_12; // @[Top.scala 83:77]
  wire [31:0] _GEN_13; // @[Top.scala 83:77]
  wire [31:0] _GEN_14; // @[Top.scala 83:77]
  wire [31:0] _GEN_15; // @[Top.scala 82:69]
  wire [31:0] _GEN_16; // @[Top.scala 82:69]
  wire [31:0] _GEN_17; // @[Top.scala 82:69]
  wire [31:0] _GEN_20; // @[Top.scala 81:58]
  wire  _T_61; // @[Top.scala 102:48]
  wire [31:0] _GEN_21; // @[Top.scala 102:55]
  control control ( // @[Top.scala 12:37]
    .io_opcode(control_io_opcode),
    .io_MemoryWrite(control_io_MemoryWrite),
    .io_Branch2(control_io_Branch2),
    .io_MemRead(control_io_MemRead),
    .io_RegWrite(control_io_RegWrite),
    .io_MemtoReg(control_io_MemtoReg),
    .io_ALUoperation(control_io_ALUoperation),
    .io_operand_A_sel(control_io_operand_A_sel),
    .io_operand_B_sel(control_io_operand_B_sel),
    .io_extend_sel(control_io_extend_sel),
    .io_next_PC_sel(control_io_next_PC_sel)
  );
  reg_32 register ( // @[Top.scala 13:38]
    .clock(register_clock),
    .io_regwrite(register_io_regwrite),
    .io_rd_sel(register_io_rd_sel),
    .io_rs1_sel(register_io_rs1_sel),
    .io_rs2_sel(register_io_rs2_sel),
    .io_WriteData(register_io_WriteData),
    .io_rs1(register_io_rs1),
    .io_rs2(register_io_rs2)
  );
  alu alu ( // @[Top.scala 14:33]
    .io_A(alu_io_A),
    .io_B(alu_io_B),
    .io_x(alu_io_x),
    .io_AluBranch(alu_io_AluBranch),
    .io_Aluop(alu_io_Aluop)
  );
  ALU_control alucontrol ( // @[Top.scala 15:40]
    .io_Aluop(alucontrol_io_Aluop),
    .io_Func7(alucontrol_io_Func7),
    .io_Func3(alucontrol_io_Func3),
    .io_control(alucontrol_io_control)
  );
  ImmediateGeneration immediate ( // @[Top.scala 16:39]
    .io_Instruction(immediate_io_Instruction),
    .io_PC(immediate_io_PC),
    .io_I_Immediate(immediate_io_I_Immediate),
    .io_S_Immediate(immediate_io_S_Immediate),
    .io_U_Immediate(immediate_io_U_Immediate),
    .io_SB_Immediate(immediate_io_SB_Immediate),
    .io_UJ_Immediate(immediate_io_UJ_Immediate)
  );
  PC PC ( // @[Top.scala 17:30]
    .clock(PC_clock),
    .io_input(PC_io_input),
    .io_pc(PC_io_pc),
    .io_pc4(PC_io_pc4)
  );
  InstructionMemory instmem ( // @[Top.scala 18:35]
    .clock(instmem_clock),
    .io_wrAddr(instmem_io_wrAddr),
    .io_rdData(instmem_io_rdData)
  );
  DataMemory DataMemory ( // @[Top.scala 19:38]
    .clock(DataMemory_clock),
    .io_wrAddr(DataMemory_io_wrAddr),
    .io_wrData(DataMemory_io_wrData),
    .io_MemRead(DataMemory_io_MemRead),
    .io_Data(DataMemory_io_Data),
    .io_MemWrite(DataMemory_io_MemWrite)
  );
  Jalr Jalr ( // @[Top.scala 66:48]
    .io_A(Jalr_io_A),
    .io_B(Jalr_io_B),
    .io_x(Jalr_io_x)
  );
  assign _T_14 = PC_io_pc[11:2]; // @[Top.scala 23:44]
  assign _T_22 = control_io_operand_B_sel; // @[Top.scala 41:46]
  assign _GEN_0 = _T_22 ? $signed(immediate_io_I_Immediate) : $signed(register_io_rs2); // @[Top.scala 41:53]
  assign _T_24 = control_io_operand_A_sel == 2'h2; // @[Top.scala 54:46]
  assign _T_25 = $signed(PC_io_pc4); // @[Top.scala 55:45]
  assign _GEN_1 = register_io_rs1; // @[Top.scala 56:59]
  assign _GEN_2 = _T_24 ? $signed(_T_25) : $signed(_GEN_1); // @[Top.scala 54:53]
  assign _T_29 = control_io_next_PC_sel == 2'h1; // @[Top.scala 59:45]
  assign _T_34 = io_branch & io_branch2; // @[Top.scala 60:47]
  assign _T_35 = $unsigned(immediate_io_SB_Immediate); // @[Top.scala 61:72]
  assign _T_37 = PC_io_pc + 32'h4; // @[Top.scala 63:56]
  assign _T_38 = PC_io_pc + 32'h4; // @[Top.scala 63:56]
  assign _GEN_3 = _T_34 ? _T_35 : _T_38; // @[Top.scala 60:68]
  assign _T_40 = control_io_next_PC_sel == 2'h3; // @[Top.scala 65:50]
  assign _T_41 = $unsigned(Jalr_io_x); // @[Top.scala 69:56]
  assign _T_43 = control_io_next_PC_sel == 2'h2; // @[Top.scala 70:50]
  assign _T_44 = $unsigned(immediate_io_UJ_Immediate); // @[Top.scala 71:64]
  assign _T_46 = control_io_next_PC_sel == 2'h0; // @[Top.scala 73:50]
  assign _GEN_4 = _T_46 ? PC_io_pc4 : 32'h0; // @[Top.scala 73:57]
  assign _GEN_5 = _T_43 ? _T_44 : _GEN_4; // @[Top.scala 70:57]
  assign _GEN_6 = _T_40 ? _T_41 : _GEN_5; // @[Top.scala 65:57]
  assign _GEN_7 = _T_29 ? _GEN_3 : _GEN_6; // @[Top.scala 59:52]
  assign _T_48 = control_io_extend_sel == 2'h2; // @[Top.scala 76:51]
  assign _GEN_9 = _T_48 ? $signed(register_io_rs1) : $signed(_GEN_2); // @[Top.scala 76:58]
  assign _GEN_10 = _T_48 ? $signed(immediate_io_S_Immediate) : $signed(_GEN_0); // @[Top.scala 76:58]
  assign _T_50 = control_io_extend_sel == 2'h1; // @[Top.scala 81:51]
  assign _T_52 = control_io_operand_A_sel == 2'h3; // @[Top.scala 82:62]
  assign _T_56 = control_io_MemtoReg; // @[Top.scala 86:81]
  assign _GEN_11 = alu_io_x; // @[Top.scala 86:88]
  assign _GEN_12 = _T_22 ? $signed(register_io_rs1) : $signed(_GEN_9); // @[Top.scala 83:77]
  assign _GEN_13 = _T_22 ? $signed(immediate_io_U_Immediate) : $signed(_GEN_10); // @[Top.scala 83:77]
  assign _GEN_14 = _T_22 ? $signed(_GEN_11) : $signed(alu_io_x); // @[Top.scala 83:77]
  assign _GEN_15 = _T_52 ? $signed(_GEN_12) : $signed(_GEN_9); // @[Top.scala 82:69]
  assign _GEN_16 = _T_52 ? $signed(_GEN_13) : $signed(_GEN_10); // @[Top.scala 82:69]
  assign _GEN_17 = _T_52 ? $signed(_GEN_14) : $signed(alu_io_x); // @[Top.scala 82:69]
  assign _GEN_20 = _T_50 ? $signed(_GEN_17) : $signed(alu_io_x); // @[Top.scala 81:58]
  assign _T_61 = control_io_MemtoReg == 1'h0; // @[Top.scala 102:48]
  assign _GEN_21 = _T_61 ? $signed(alu_io_x) : $signed(_GEN_20); // @[Top.scala 102:55]
  assign io_instruction = instmem_io_rdData; // @[Top.scala 24:31]
  assign io_reg_out = register_io_WriteData; // @[Top.scala 50:28]
  assign io_branch = control_io_Branch2; // @[Top.scala 52:26]
  assign io_branch2 = alu_io_AluBranch; // @[Top.scala 53:27]
  assign control_io_opcode = io_instruction[6:0]; // @[Top.scala 26:34]
  assign register_clock = clock;
  assign register_io_regwrite = control_io_RegWrite; // @[Top.scala 38:37]
  assign register_io_rd_sel = io_instruction[11:7]; // @[Top.scala 37:35]
  assign register_io_rs1_sel = io_instruction[19:15]; // @[Top.scala 35:36]
  assign register_io_rs2_sel = io_instruction[24:20]; // @[Top.scala 36:36]
  assign register_io_WriteData = _T_56 ? $signed(DataMemory_io_Data) : $signed(_GEN_21); // @[Top.scala 49:39 Top.scala 87:86 Top.scala 101:46 Top.scala 103:46]
  assign alu_io_A = _T_50 ? $signed(_GEN_15) : $signed(_GEN_9); // @[Top.scala 40:26 Top.scala 55:33 Top.scala 57:33 Top.scala 78:33 Top.scala 84:57]
  assign alu_io_B = _T_50 ? $signed(_GEN_16) : $signed(_GEN_10); // @[Top.scala 43:33 Top.scala 46:33 Top.scala 79:33 Top.scala 85:57]
  assign alu_io_Aluop = alucontrol_io_control; // @[Top.scala 31:29]
  assign alucontrol_io_Aluop = control_io_ALUoperation; // @[Top.scala 30:37]
  assign alucontrol_io_Func7 = io_instruction[30]; // @[Top.scala 32:36]
  assign alucontrol_io_Func3 = io_instruction[14:12]; // @[Top.scala 33:36]
  assign immediate_io_Instruction = io_instruction; // @[Top.scala 27:42]
  assign immediate_io_PC = PC_io_pc; // @[Top.scala 28:32]
  assign PC_clock = clock;
  assign PC_io_input = _T_48 ? PC_io_pc4 : _GEN_7; // @[Top.scala 21:28 Top.scala 61:44 Top.scala 63:44 Top.scala 69:44 Top.scala 71:36 Top.scala 74:36 Top.scala 77:36]
  assign instmem_clock = clock;
  assign instmem_io_wrAddr = {{22'd0}, _T_14}; // @[Top.scala 23:34]
  assign DataMemory_clock = clock;
  assign DataMemory_io_wrAddr = alu_io_x[9:2]; // @[Top.scala 96:37]
  assign DataMemory_io_wrData = register_io_rs2; // @[Top.scala 97:37]
  assign DataMemory_io_MemRead = control_io_MemRead; // @[Top.scala 98:38]
  assign DataMemory_io_MemWrite = control_io_MemoryWrite; // @[Top.scala 99:39]
  assign Jalr_io_A = register_io_rs1; // @[Top.scala 67:42]
  assign Jalr_io_B = immediate_io_I_Immediate; // @[Top.scala 68:42]
endmodule
