// a.h
// Generated by decompiling a.out
// using Reko decompiler version 0.8.2.0.

/*
// Equivalence classes ////////////
Eq_1: (struct "Globals" (8000270C (ptr32 code) ptr8000270C) (80002714 (arr (ptr32 code)) a80002714) (8000271C word32 dw8000271C) (80002724 byte b80002724) (80002726 uint32 dw80002726) (FFFFFFFF code tFFFFFFFF))
	globals_t (in globals : (ptr32 (struct "Globals")))
Eq_56: (fn word32 (ptr32))
	T_56 (in deregister_tm_clones : ptr32)
	T_57 (in signature of deregister_tm_clones : void)
Eq_121: (fn void ())
	T_121 (in register_tm_clones : ptr32)
	T_122 (in signature of register_tm_clones : void)
	T_124 (in register_tm_clones : ptr32)
Eq_150: (fn void (real64, int32))
	T_150 (in pow_int : ptr32)
	T_151 (in signature of pow_int : void)
	T_161 (in pow_int : ptr32)
Eq_153: (fn void (int32))
	T_153 (in factorial : ptr32)
	T_154 (in signature of factorial : void)
	T_163 (in factorial : ptr32)
Eq_170: (fn void (real64))
	T_170 (in sine_taylor : ptr32)
	T_171 (in signature of sine_taylor : void)
Eq_174: (fn void (real64, real64, Eq_178))
	T_174 (in _sin : ptr32)
	T_175 (in signature of _sin : void)
Eq_178: (union "Eq_178" ((ptr32 word32) u0) ((ref int32) u1))
	T_178 (in tArg14 : Eq_178)
	T_183 (in fp - 0x00000008 : word32)
Eq_195: (ref int32)
	T_195 (in tArg14 + 0x00000000 : word32)
Eq_200: (union "Eq_200" ((ptr32 word32) u0) ((ref int32) u1))
	T_200 (in tArg14 + 0x00000000 : word32)
// Type Variables ////////////
globals_t: (in globals : (ptr32 (struct "Globals")))
  Class: Eq_1
  DataType: (ptr32 Eq_1)
  OrigDataType: (ptr32 (struct "Globals"))
T_2: (in a6 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_3: (in a7Out : ptr32)
  Class: Eq_3
  DataType: ptr32
  OrigDataType: ptr32
T_4: (in a6_23 : (ptr32 word32))
  Class: Eq_4
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct (0 T_12 t0000)))
T_5: (in fp : ptr32)
  Class: Eq_5
  DataType: ptr32
  OrigDataType: ptr32
T_6: (in 0x00000004 : word32)
  Class: Eq_6
  DataType: ui32
  OrigDataType: ui32
T_7: (in fp - 0x00000004 : word32)
  Class: Eq_4
  DataType: (ptr32 word32)
  OrigDataType: ptr32
T_8: (in true : bool)
  Class: Eq_8
  DataType: bool
  OrigDataType: bool
T_9: (in a6_32 : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_10: (in 0x00000000 : word32)
  Class: Eq_10
  DataType: word32
  OrigDataType: word32
T_11: (in a6_23 + 0x00000000 : word32)
  Class: Eq_11
  DataType: ptr32
  OrigDataType: ptr32
T_12: (in Mem31[a6_23 + 0x00000000:word32] : word32)
  Class: Eq_2
  DataType: word32
  OrigDataType: word32
T_13: (in 0x00000004 : word32)
  Class: Eq_13
  DataType: int32
  OrigDataType: int32
T_14: (in a6_23 + 0x00000004 : word32)
  Class: Eq_3
  DataType: ptr32
  OrigDataType: ptr32
T_15: (in 00000000 : ptr32)
  Class: Eq_15
  DataType: ptr32
  OrigDataType: ptr32
T_16: (in 0x00000000 : word32)
  Class: Eq_15
  DataType: ptr32
  OrigDataType: word32
T_17: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_17
  DataType: bool
  OrigDataType: bool
T_18: (in a0_26 : word32)
  Class: Eq_18
  DataType: word32
  OrigDataType: word32
T_19: (in 00000000 : ptr32)
  Class: Eq_19
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_20: (in d0_12 : int32)
  Class: Eq_20
  DataType: int32
  OrigDataType: int32
T_21: (in 0 : int32)
  Class: Eq_20
  DataType: int32
  OrigDataType: int32
T_22: (in false : bool)
  Class: Eq_22
  DataType: bool
  OrigDataType: bool
T_23: (in 0x00000001 : word32)
  Class: Eq_20
  DataType: int32
  OrigDataType: word32
T_24: (in d0_18 : int32)
  Class: Eq_24
  DataType: int32
  OrigDataType: int32
T_25: (in 0x00000001 : word32)
  Class: Eq_25
  DataType: word32
  OrigDataType: word32
T_26: (in d0_12 >> 0x00000001 : word32)
  Class: Eq_24
  DataType: int32
  OrigDataType: int32
T_27: (in 0x00000000 : word32)
  Class: Eq_24
  DataType: int32
  OrigDataType: word32
T_28: (in d0_18 == 0x00000000 : bool)
  Class: Eq_28
  DataType: bool
  OrigDataType: bool
T_29: (in 00000000 : ptr32)
  Class: Eq_29
  DataType: ptr32
  OrigDataType: ptr32
T_30: (in 0x00000000 : word32)
  Class: Eq_29
  DataType: ptr32
  OrigDataType: word32
T_31: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_31
  DataType: bool
  OrigDataType: bool
T_32: (in a0_37 : word32)
  Class: Eq_32
  DataType: word32
  OrigDataType: word32
T_33: (in 00000000 : ptr32)
  Class: Eq_33
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_34: (in a6_38 : ptr32)
  Class: Eq_34
  DataType: ptr32
  OrigDataType: ptr32
T_35: (in fp : ptr32)
  Class: Eq_35
  DataType: ptr32
  OrigDataType: ptr32
T_36: (in 0x00000004 : word32)
  Class: Eq_36
  DataType: ui32
  OrigDataType: ui32
T_37: (in fp - 0x00000004 : word32)
  Class: Eq_34
  DataType: ptr32
  OrigDataType: ptr32
T_38: (in a7_12 : ptr32)
  Class: Eq_38
  DataType: ptr32
  OrigDataType: ptr32
T_39: (in 0x0000000C : word32)
  Class: Eq_39
  DataType: ui32
  OrigDataType: ui32
T_40: (in fp - 0x0000000C : word32)
  Class: Eq_38
  DataType: ptr32
  OrigDataType: ptr32
T_41: (in 80002724 : ptr32)
  Class: Eq_41
  DataType: (ptr32 byte)
  OrigDataType: (ptr32 (struct (0 T_42 t0000)))
T_42: (in Mem15[0x80002724:byte] : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_43: (in 0x00 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_44: (in globals->b80002724 != 0x00 : bool)
  Class: Eq_44
  DataType: bool
  OrigDataType: bool
T_45: (in d0_21 : uint32)
  Class: Eq_45
  DataType: uint32
  OrigDataType: up32
T_46: (in 80002726 : ptr32)
  Class: Eq_46
  DataType: (ptr32 uint32)
  OrigDataType: (ptr32 (struct (0 T_47 t0000)))
T_47: (in Mem15[0x80002726:word32] : word32)
  Class: Eq_45
  DataType: uint32
  OrigDataType: word32
T_48: (in a2_20 : (arr (ptr32 code)))
  Class: Eq_48
  DataType: (ptr32 (arr (ptr32 code)))
  OrigDataType: (ptr32 (struct (0 (arr T_265) a0000)))
T_49: (in 80002714 : ptr32)
  Class: Eq_48
  DataType: (ptr32 (arr (ptr32 code)))
  OrigDataType: ptr32
T_50: (in d2_25 : up32)
  Class: Eq_50
  DataType: up32
  OrigDataType: up32
T_51: (in 0x00000000 : word32)
  Class: Eq_50
  DataType: up32
  OrigDataType: word32
T_52: (in 0x00000000 : word32)
  Class: Eq_45
  DataType: uint32
  OrigDataType: up32
T_53: (in d0_21 >= 0x00000000 : bool)
  Class: Eq_53
  DataType: bool
  OrigDataType: bool
T_54: (in a7_56 : ptr32)
  Class: Eq_54
  DataType: ptr32
  OrigDataType: ptr32
T_55: (in a6_55 : word32)
  Class: Eq_55
  DataType: word32
  OrigDataType: word32
T_56: (in deregister_tm_clones : ptr32)
  Class: Eq_56
  DataType: (ptr32 Eq_56)
  OrigDataType: (ptr32 (fn T_59 (T_58)))
T_57: (in signature of deregister_tm_clones : void)
  Class: Eq_56
  DataType: (ptr32 Eq_56)
  OrigDataType: 
T_58: (in out a7_56 : ptr32)
  Class: Eq_3
  DataType: ptr32
  OrigDataType: ptr32
T_59: (in deregister_tm_clones(out a7_56) : word32)
  Class: Eq_55
  DataType: word32
  OrigDataType: word32
T_60: (in 00000000 : ptr32)
  Class: Eq_60
  DataType: ptr32
  OrigDataType: ptr32
T_61: (in 0x00000000 : word32)
  Class: Eq_60
  DataType: ptr32
  OrigDataType: word32
T_62: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_62
  DataType: bool
  OrigDataType: bool
T_63: (in d0_31 : uint32)
  Class: Eq_45
  DataType: uint32
  OrigDataType: uint32
T_64: (in 0x00000001 : word32)
  Class: Eq_64
  DataType: up32
  OrigDataType: up32
T_65: (in d0_21 + 0x00000001 : word32)
  Class: Eq_45
  DataType: uint32
  OrigDataType: up32
T_66: (in 80002726 : ptr32)
  Class: Eq_66
  DataType: (ptr32 uint32)
  OrigDataType: (ptr32 (struct (0 T_67 t0000)))
T_67: (in Mem34[0x80002726:word32] : word32)
  Class: Eq_45
  DataType: uint32
  OrigDataType: word32
T_68: (in a0_46 : word32)
  Class: Eq_68
  DataType: word32
  OrigDataType: word32
T_69: (in d1_95 : word32)
  Class: Eq_69
  DataType: word32
  OrigDataType: word32
T_70: (in 4 : int32)
  Class: Eq_70
  DataType: int32
  OrigDataType: int32
T_71: (in d0_31 * 4 : word32)
  Class: Eq_71
  DataType: ui32
  OrigDataType: ui32
T_72: (in a2_20[d0_31 * 4] : word32)
  Class: Eq_72
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_73: (in 80002726 : ptr32)
  Class: Eq_73
  DataType: (ptr32 uint32)
  OrigDataType: (ptr32 (struct (0 T_74 t0000)))
T_74: (in Mem34[0x80002726:word32] : word32)
  Class: Eq_45
  DataType: uint32
  OrigDataType: word32
T_75: (in d2_25 - d0_21 : word32)
  Class: Eq_75
  DataType: up32
  OrigDataType: up32
T_76: (in 0x00000000 : word32)
  Class: Eq_75
  DataType: up32
  OrigDataType: up32
T_77: (in d2_25 - d0_21 > 0x00000000 : bool)
  Class: Eq_77
  DataType: bool
  OrigDataType: bool
T_78: (in 0x01 : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_79: (in 80002724 : ptr32)
  Class: Eq_79
  DataType: (ptr32 byte)
  OrigDataType: (ptr32 (struct (0 T_80 t0000)))
T_80: (in Mem81[0x80002724:byte] : byte)
  Class: Eq_42
  DataType: byte
  OrigDataType: byte
T_81: (in 8000065C : ptr32)
  Class: Eq_81
  DataType: ptr32
  OrigDataType: ptr32
T_82: (in 0x00000004 : word32)
  Class: Eq_82
  DataType: ui32
  OrigDataType: ui32
T_83: (in a7_56 - 0x00000004 : word32)
  Class: Eq_83
  DataType: (ptr32 ptr32)
  OrigDataType: (ptr32 (struct (0 T_86 t0000)))
T_84: (in 0x00000000 : word32)
  Class: Eq_84
  DataType: word32
  OrigDataType: word32
T_85: (in a7_56 - 0x00000004 + 0x00000000 : word32)
  Class: Eq_85
  DataType: word32
  OrigDataType: word32
T_86: (in Mem68[a7_56 - 0x00000004 + 0x00000000:word32] : word32)
  Class: Eq_81
  DataType: ptr32
  OrigDataType: word32
T_87: (in d0_75 : word32)
  Class: Eq_87
  DataType: word32
  OrigDataType: word32
T_88: (in a0_76 : word32)
  Class: Eq_88
  DataType: word32
  OrigDataType: word32
T_89: (in d1_77 : word32)
  Class: Eq_89
  DataType: word32
  OrigDataType: word32
T_90: (in 00000000 : ptr32)
  Class: Eq_90
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_91: (in a6_18 : ptr32)
  Class: Eq_91
  DataType: ptr32
  OrigDataType: ptr32
T_92: (in fp : ptr32)
  Class: Eq_92
  DataType: ptr32
  OrigDataType: ptr32
T_93: (in 0x00000004 : word32)
  Class: Eq_93
  DataType: ui32
  OrigDataType: ui32
T_94: (in fp - 0x00000004 : word32)
  Class: Eq_91
  DataType: ptr32
  OrigDataType: ptr32
T_95: (in a7_23 : ptr32)
  Class: Eq_95
  DataType: ptr32
  OrigDataType: ptr32
T_96: (in fp - 0x00000004 : word32)
  Class: Eq_95
  DataType: ptr32
  OrigDataType: ptr32
T_97: (in 00000000 : ptr32)
  Class: Eq_97
  DataType: ptr32
  OrigDataType: ptr32
T_98: (in 0x00000000 : word32)
  Class: Eq_97
  DataType: ptr32
  OrigDataType: word32
T_99: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_99
  DataType: bool
  OrigDataType: bool
T_100: (in 8000271C : ptr32)
  Class: Eq_100
  DataType: (ptr32 word32)
  OrigDataType: (ptr32 (struct (0 T_101 t0000)))
T_101: (in Mem25[0x8000271C:word32] : word32)
  Class: Eq_101
  DataType: word32
  OrigDataType: word32
T_102: (in 0x00000000 : word32)
  Class: Eq_101
  DataType: word32
  OrigDataType: word32
T_103: (in globals->dw8000271C != 0x00000000 : bool)
  Class: Eq_103
  DataType: bool
  OrigDataType: bool
T_104: (in a7_17 : word32)
  Class: Eq_104
  DataType: word32
  OrigDataType: word32
T_105: (in a1_20 : word32)
  Class: Eq_105
  DataType: word32
  OrigDataType: word32
T_106: (in 00000000 : ptr32)
  Class: Eq_106
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_107: (in 8 : int32)
  Class: Eq_107
  DataType: int32
  OrigDataType: int32
T_108: (in a7_17 + 8 : word32)
  Class: Eq_95
  DataType: ptr32
  OrigDataType: word32
T_109: (in 00000000 : ptr32)
  Class: Eq_109
  DataType: ptr32
  OrigDataType: ptr32
T_110: (in 0x00000000 : word32)
  Class: Eq_109
  DataType: ptr32
  OrigDataType: word32
T_111: (in 0x00000000 == 0x00000000 : bool)
  Class: Eq_111
  DataType: bool
  OrigDataType: bool
T_112: (in a7_36 : (ptr32 ptr32))
  Class: Eq_112
  DataType: (ptr32 ptr32)
  OrigDataType: (ptr32 (struct (0 T_118 t0000)))
T_113: (in 4 : int32)
  Class: Eq_113
  DataType: int32
  OrigDataType: int32
T_114: (in a7_23 - 4 : word32)
  Class: Eq_112
  DataType: (ptr32 ptr32)
  OrigDataType: ptr32
T_115: (in 8000271C : ptr32)
  Class: Eq_115
  DataType: ptr32
  OrigDataType: ptr32
T_116: (in 0x00000000 : word32)
  Class: Eq_116
  DataType: word32
  OrigDataType: word32
T_117: (in a7_36 + 0x00000000 : word32)
  Class: Eq_117
  DataType: ptr32
  OrigDataType: ptr32
T_118: (in Mem38[a7_36 + 0x00000000:word32] : word32)
  Class: Eq_115
  DataType: ptr32
  OrigDataType: word32
T_119: (in a1_44 : word32)
  Class: Eq_119
  DataType: word32
  OrigDataType: word32
T_120: (in 00000000 : ptr32)
  Class: Eq_120
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_121: (in register_tm_clones : ptr32)
  Class: Eq_121
  DataType: (ptr32 Eq_121)
  OrigDataType: (ptr32 (fn T_123 ()))
T_122: (in signature of register_tm_clones : void)
  Class: Eq_121
  DataType: (ptr32 Eq_121)
  OrigDataType: 
T_123: (in register_tm_clones() : void)
  Class: Eq_123
  DataType: void
  OrigDataType: void
T_124: (in register_tm_clones : ptr32)
  Class: Eq_121
  DataType: (ptr32 Eq_121)
  OrigDataType: (ptr32 (fn T_125 ()))
T_125: (in register_tm_clones() : void)
  Class: Eq_123
  DataType: void
  OrigDataType: void
T_126: (in rArg04 : real64)
  Class: Eq_126
  DataType: real64
  OrigDataType: real64
T_127: (in dwArg04 : int32)
  Class: Eq_127
  DataType: int32
  OrigDataType: int32
T_128: (in dwLoc08_35 : int32)
  Class: Eq_128
  DataType: int32
  OrigDataType: int32
T_129: (in 2 : int32)
  Class: Eq_128
  DataType: int32
  OrigDataType: int32
T_130: (in 0x00000001 : word32)
  Class: Eq_130
  DataType: word32
  OrigDataType: word32
T_131: (in dwLoc08_35 + 0x00000001 : word32)
  Class: Eq_128
  DataType: int32
  OrigDataType: int32
T_132: (in dwLoc08_35 - dwArg04 : word32)
  Class: Eq_132
  DataType: int32
  OrigDataType: int32
T_133: (in 0x00000000 : word32)
  Class: Eq_132
  DataType: int32
  OrigDataType: int32
T_134: (in dwLoc08_35 - dwArg04 > 0x00000000 : bool)
  Class: Eq_134
  DataType: bool
  OrigDataType: bool
T_135: (in rArg04 : real64)
  Class: Eq_135
  DataType: real64
  OrigDataType: real64
T_136: (in dwArg0C : int32)
  Class: Eq_127
  DataType: int32
  OrigDataType: int32
T_137: (in dwLoc08_49 : int32)
  Class: Eq_137
  DataType: int32
  OrigDataType: int32
T_138: (in 0x00000000 : word32)
  Class: Eq_137
  DataType: int32
  OrigDataType: word32
T_139: (in 0x00000001 : word32)
  Class: Eq_139
  DataType: word32
  OrigDataType: word32
T_140: (in dwLoc08_49 + 0x00000001 : word32)
  Class: Eq_137
  DataType: int32
  OrigDataType: word32
T_141: (in dwLoc08_49 - dwArg0C : word32)
  Class: Eq_141
  DataType: int32
  OrigDataType: int32
T_142: (in 0x00000000 : word32)
  Class: Eq_141
  DataType: int32
  OrigDataType: int32
T_143: (in dwLoc08_49 - dwArg0C >= 0x00000000 : bool)
  Class: Eq_143
  DataType: bool
  OrigDataType: bool
T_144: (in rArg04 : real64)
  Class: Eq_135
  DataType: real64
  OrigDataType: real64
T_145: (in dwArg0C : int32)
  Class: Eq_145
  DataType: int32
  OrigDataType: int32
T_146: (in dwLoc08_127 : int32)
  Class: Eq_127
  DataType: int32
  OrigDataType: int32
T_147: (in 3 : int32)
  Class: Eq_127
  DataType: int32
  OrigDataType: int32
T_148: (in dwLoc08_130 : int32)
  Class: Eq_127
  DataType: int32
  OrigDataType: int32
T_149: (in 5 : int32)
  Class: Eq_127
  DataType: int32
  OrigDataType: int32
T_150: (in pow_int : ptr32)
  Class: Eq_150
  DataType: (ptr32 Eq_150)
  OrigDataType: (ptr32 (fn T_152 (T_144, T_146)))
T_151: (in signature of pow_int : void)
  Class: Eq_150
  DataType: (ptr32 Eq_150)
  OrigDataType: 
T_152: (in pow_int(rArg04, dwLoc08_127) : void)
  Class: Eq_152
  DataType: void
  OrigDataType: void
T_153: (in factorial : ptr32)
  Class: Eq_153
  DataType: (ptr32 Eq_153)
  OrigDataType: (ptr32 (fn T_155 (T_146)))
T_154: (in signature of factorial : void)
  Class: Eq_153
  DataType: (ptr32 Eq_153)
  OrigDataType: 
T_155: (in factorial(dwLoc08_127) : void)
  Class: Eq_155
  DataType: void
  OrigDataType: void
T_156: (in 0x00000004 : word32)
  Class: Eq_156
  DataType: word32
  OrigDataType: word32
T_157: (in dwLoc08_127 + 0x00000004 : word32)
  Class: Eq_127
  DataType: int32
  OrigDataType: int32
T_158: (in dwLoc08_127 - dwArg0C : word32)
  Class: Eq_158
  DataType: int32
  OrigDataType: int32
T_159: (in 0x00000000 : word32)
  Class: Eq_158
  DataType: int32
  OrigDataType: int32
T_160: (in dwLoc08_127 - dwArg0C > 0x00000000 : bool)
  Class: Eq_160
  DataType: bool
  OrigDataType: bool
T_161: (in pow_int : ptr32)
  Class: Eq_150
  DataType: (ptr32 Eq_150)
  OrigDataType: (ptr32 (fn T_162 (T_144, T_148)))
T_162: (in pow_int(rArg04, dwLoc08_130) : void)
  Class: Eq_152
  DataType: void
  OrigDataType: void
T_163: (in factorial : ptr32)
  Class: Eq_153
  DataType: (ptr32 Eq_153)
  OrigDataType: (ptr32 (fn T_164 (T_148)))
T_164: (in factorial(dwLoc08_130) : void)
  Class: Eq_155
  DataType: void
  OrigDataType: void
T_165: (in 0x00000004 : word32)
  Class: Eq_165
  DataType: word32
  OrigDataType: word32
T_166: (in dwLoc08_130 + 0x00000004 : word32)
  Class: Eq_127
  DataType: int32
  OrigDataType: int32
T_167: (in dwLoc08_130 - dwArg0C : word32)
  Class: Eq_167
  DataType: int32
  OrigDataType: int32
T_168: (in 0x00000000 : word32)
  Class: Eq_167
  DataType: int32
  OrigDataType: int32
T_169: (in dwLoc08_130 - dwArg0C > 0x00000000 : bool)
  Class: Eq_169
  DataType: bool
  OrigDataType: bool
T_170: (in sine_taylor : ptr32)
  Class: Eq_170
  DataType: (ptr32 Eq_170)
  OrigDataType: (ptr32 (fn T_173 (T_172)))
T_171: (in signature of sine_taylor : void)
  Class: Eq_170
  DataType: (ptr32 Eq_170)
  OrigDataType: 
T_172: (in 4.61425307021499e+18 : real64)
  Class: Eq_126
  DataType: real64
  OrigDataType: real64
T_173: (in sine_taylor(4.61425307021499e+18) : void)
  Class: Eq_173
  DataType: void
  OrigDataType: void
T_174: (in _sin : ptr32)
  Class: Eq_174
  DataType: (ptr32 Eq_174)
  OrigDataType: (ptr32 (fn T_184 (T_179, T_180, T_183)))
T_175: (in signature of _sin : void)
  Class: Eq_174
  DataType: (ptr32 Eq_174)
  OrigDataType: 
T_176: (in rArg04 : real64)
  Class: Eq_176
  DataType: real64
  OrigDataType: real64
T_177: (in rArg0C : real64)
  Class: Eq_177
  DataType: real64
  OrigDataType: real64
T_178: (in tArg14 : Eq_178)
  Class: Eq_178
  DataType: Eq_178
  OrigDataType: (union ((ptr32 (struct (0 T_196 t0000))) u1) ((ref int32) u0))
T_179: (in 4.61425307021499e+18 : real64)
  Class: Eq_176
  DataType: real64
  OrigDataType: real64
T_180: (in 4.56906395155395e+18 : real64)
  Class: Eq_177
  DataType: real64
  OrigDataType: real64
T_181: (in fp : ptr32)
  Class: Eq_181
  DataType: ptr32
  OrigDataType: ptr32
T_182: (in 0x00000008 : word32)
  Class: Eq_182
  DataType: ui32
  OrigDataType: ui32
T_183: (in fp - 0x00000008 : word32)
  Class: Eq_178
  DataType: Eq_178
  OrigDataType: (union (ptr32 u0) ((ref int32) u1))
T_184: (in _sin(4.61425307021499e+18, 4.56906395155395e+18, fp - 0x00000008) : void)
  Class: Eq_184
  DataType: void
  OrigDataType: void
T_185: (in rLoc0C_114 : real64)
  Class: Eq_176
  DataType: real64
  OrigDataType: real64
T_186: (in v9_14 : real64)
  Class: Eq_186
  DataType: real64
  OrigDataType: real64
T_187: (in (real96) rArg04 : real96)
  Class: Eq_187
  DataType: real96
  OrigDataType: real96
T_188: (in (real96) rArg04 * rArg04 : real96)
  Class: Eq_188
  DataType: real96
  OrigDataType: real96
T_189: (in (real64) ((real96) rArg04 * rArg04) : real64)
  Class: Eq_186
  DataType: real64
  OrigDataType: real64
T_190: (in dwLoc20_120 : word32)
  Class: Eq_190
  DataType: word32
  OrigDataType: word32
T_191: (in 0x00000002 : word32)
  Class: Eq_190
  DataType: word32
  OrigDataType: word32
T_192: (in rLoc14_122 : real64)
  Class: Eq_192
  DataType: real64
  OrigDataType: real64
T_193: (in 0x3FF0000000000000 : word64)
  Class: Eq_192
  DataType: real64
  OrigDataType: word64
T_194: (in 0x00000000 : word32)
  Class: Eq_194
  DataType: word32
  OrigDataType: word32
T_195: (in tArg14 + 0x00000000 : word32)
  Class: Eq_195
  DataType: Eq_195
  OrigDataType: (ref int32)
T_196: (in Mem98[tArg14 + 0x00000000:word32] : word32)
  Class: Eq_196
  DataType: word32
  OrigDataType: word32
T_197: (in 0x00000001 : word32)
  Class: Eq_197
  DataType: word32
  OrigDataType: word32
T_198: (in Mem98[tArg14 + 0x00000000:word32] + 0x00000001 : word32)
  Class: Eq_196
  DataType: word32
  OrigDataType: word32
T_199: (in 0x00000000 : word32)
  Class: Eq_199
  DataType: word32
  OrigDataType: word32
T_200: (in tArg14 + 0x00000000 : word32)
  Class: Eq_200
  DataType: Eq_200
  OrigDataType: (union ((ptr32 word32) u1) ((ref int32) u0))
T_201: (in Mem106[tArg14 + 0x00000000:word32] : word32)
  Class: Eq_196
  DataType: Eq_178
  OrigDataType: word32
T_202: (in v23_57 : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_203: (in 0x00000000 : word32)
  Class: Eq_203
  DataType: word32
  OrigDataType: word32
T_204: (in dwLoc20_120 + 0x00000000 : word32)
  Class: Eq_202
  DataType: word32
  OrigDataType: word32
T_205: (in (real96) rLoc0C_114 : real96)
  Class: Eq_205
  DataType: real96
  OrigDataType: real96
T_206: (in (real96) rLoc0C_114 * v9_14 : real96)
  Class: Eq_206
  DataType: real96
  OrigDataType: real96
T_207: (in (real64) ((real96) rLoc0C_114 * v9_14) : real64)
  Class: Eq_207
  DataType: real64
  OrigDataType: real64
T_208: (in (real96) (real64) ((real96) rLoc0C_114 * v9_14) : real96)
  Class: Eq_208
  DataType: real96
  OrigDataType: real96
T_209: (in (real96) (real64) ((real96) rLoc0C_114 * v9_14) * v9_14 : real96)
  Class: Eq_209
  DataType: real96
  OrigDataType: real96
T_210: (in (real64) ((real96) (real64) ((real96) rLoc0C_114 * v9_14) * v9_14) : real64)
  Class: Eq_176
  DataType: real64
  OrigDataType: real64
T_211: (in 0x00000003 : word32)
  Class: Eq_211
  DataType: word32
  OrigDataType: word32
T_212: (in v23_57 + 0x00000003 : word32)
  Class: Eq_190
  DataType: word32
  OrigDataType: word32
T_213: (in (real96) rLoc14_122 : real96)
  Class: Eq_213
  DataType: real96
  OrigDataType: real96
T_214: (in (real96) v23_57 : real96)
  Class: Eq_214
  DataType: real96
  OrigDataType: real96
T_215: (in (real80) (real96) v23_57 : real80)
  Class: Eq_215
  DataType: real80
  OrigDataType: real80
T_216: (in (real96) rLoc14_122 * (real80) ((real96) v23_57) : real96)
  Class: Eq_216
  DataType: real96
  OrigDataType: real96
T_217: (in (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) : real64)
  Class: Eq_217
  DataType: real64
  OrigDataType: real64
T_218: (in (real96) (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) : real96)
  Class: Eq_218
  DataType: real96
  OrigDataType: real96
T_219: (in 0x00000001 : word32)
  Class: Eq_219
  DataType: word32
  OrigDataType: word32
T_220: (in v23_57 + 0x00000001 : word32)
  Class: Eq_220
  DataType: word32
  OrigDataType: word32
T_221: (in (real96) (v23_57 + 0x00000001) : real96)
  Class: Eq_221
  DataType: real96
  OrigDataType: real96
T_222: (in (real80) (real96) (v23_57 + 0x00000001) : real80)
  Class: Eq_222
  DataType: real80
  OrigDataType: real80
T_223: (in (real96) (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) * (real80) ((real96) (v23_57 + 0x00000001)) : real96)
  Class: Eq_223
  DataType: real96
  OrigDataType: real96
T_224: (in (real64) ((real96) (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) * (real80) ((real96) (v23_57 + 0x00000001))) : real64)
  Class: Eq_224
  DataType: real64
  OrigDataType: real64
T_225: (in (real96) (real64) ((real96) (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) * (real80) ((real96) (v23_57 + 0x00000001))) : real96)
  Class: Eq_225
  DataType: real96
  OrigDataType: real96
T_226: (in 0x00000002 : word32)
  Class: Eq_226
  DataType: word32
  OrigDataType: word32
T_227: (in v23_57 + 0x00000002 : word32)
  Class: Eq_227
  DataType: word32
  OrigDataType: word32
T_228: (in (real96) (v23_57 + 0x00000002) : real96)
  Class: Eq_228
  DataType: real96
  OrigDataType: real96
T_229: (in (real80) (real96) (v23_57 + 0x00000002) : real80)
  Class: Eq_229
  DataType: real80
  OrigDataType: real80
T_230: (in (real96) (real64) ((real96) (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) * (real80) ((real96) (v23_57 + 0x00000001))) * (real80) ((real96) (v23_57 + 0x00000002)) : real96)
  Class: Eq_230
  DataType: real96
  OrigDataType: real96
T_231: (in (real64) ((real96) (real64) ((real96) (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) * (real80) ((real96) (v23_57 + 0x00000001))) * (real80) ((real96) (v23_57 + 0x00000002))) : real64)
  Class: Eq_231
  DataType: real64
  OrigDataType: real64
T_232: (in (real96) (real64) ((real96) (real64) ((real96) (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) * (real80) ((real96) (v23_57 + 0x00000001))) * (real80) ((real96) (v23_57 + 0x00000002))) : real96)
  Class: Eq_232
  DataType: real96
  OrigDataType: real96
T_233: (in v23_57 + 0x00000003 : word32)
  Class: Eq_233
  DataType: word32
  OrigDataType: word32
T_234: (in (real96) (v23_57 + 0x00000003) : real96)
  Class: Eq_234
  DataType: real96
  OrigDataType: real96
T_235: (in (real80) (real96) (v23_57 + 0x00000003) : real80)
  Class: Eq_235
  DataType: real80
  OrigDataType: real80
T_236: (in (real96) (real64) ((real96) (real64) ((real96) (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) * (real80) ((real96) (v23_57 + 0x00000001))) * (real80) ((real96) (v23_57 + 0x00000002))) * (real80) ((real96) (v23_57 + 0x00000003)) : real96)
  Class: Eq_236
  DataType: real96
  OrigDataType: real96
T_237: (in (real64) ((real96) (real64) ((real96) (real64) ((real96) (real64) ((real96) rLoc14_122 * (real80) ((real96) v23_57)) * (real80) ((real96) (v23_57 + 0x00000001))) * (real80) ((real96) (v23_57 + 0x00000002))) * (real80) ((real96) (v23_57 + 0x00000003))) : real64)
  Class: Eq_192
  DataType: real64
  OrigDataType: real64
T_238: (in (real96) rLoc0C_114 : real96)
  Class: Eq_238
  DataType: real96
  OrigDataType: real96
T_239: (in (real96) rLoc0C_114 / rLoc14_122 : real96)
  Class: Eq_239
  DataType: real96
  OrigDataType: real96
T_240: (in (real64) ((real96) rLoc0C_114 / rLoc14_122) : real64)
  Class: Eq_177
  DataType: real64
  OrigDataType: real64
T_241: (in (real64) ((real96) rLoc0C_114 / rLoc14_122) < rArg0C : bool)
  Class: Eq_241
  DataType: bool
  OrigDataType: bool
T_242: (in a0_12 : (ptr32 code))
  Class: Eq_242
  DataType: (ptr32 code)
  OrigDataType: (ptr32 code)
T_243: (in 8000270C : ptr32)
  Class: Eq_243
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_244 t0000)))
T_244: (in Mem11[0x8000270C:word32] : word32)
  Class: Eq_242
  DataType: (ptr32 code)
  OrigDataType: word32
T_245: (in a6_19 : ptr32)
  Class: Eq_245
  DataType: ptr32
  OrigDataType: ptr32
T_246: (in fp : ptr32)
  Class: Eq_246
  DataType: ptr32
  OrigDataType: ptr32
T_247: (in 0x00000004 : word32)
  Class: Eq_247
  DataType: ui32
  OrigDataType: ui32
T_248: (in fp - 0x00000004 : word32)
  Class: Eq_245
  DataType: ptr32
  OrigDataType: ptr32
T_249: (in a7_21 : ptr32)
  Class: Eq_249
  DataType: ptr32
  OrigDataType: ptr32
T_250: (in 0x00000008 : word32)
  Class: Eq_250
  DataType: ui32
  OrigDataType: ui32
T_251: (in fp - 0x00000008 : word32)
  Class: Eq_249
  DataType: ptr32
  OrigDataType: ptr32
T_252: (in a2_13 : ptr32)
  Class: Eq_252
  DataType: ptr32
  OrigDataType: ptr32
T_253: (in 8000270C : ptr32)
  Class: Eq_252
  DataType: ptr32
  OrigDataType: ptr32
T_254: (in -1 : int32)
  Class: Eq_242
  DataType: (ptr32 code)
  OrigDataType: int32
T_255: (in a0_12 == (<anonymous> *) -1 : bool)
  Class: Eq_255
  DataType: bool
  OrigDataType: bool
T_256: (in a2_24 : ptr32)
  Class: Eq_256
  DataType: ptr32
  OrigDataType: ptr32
T_257: (in 4 : int32)
  Class: Eq_257
  DataType: int32
  OrigDataType: int32
T_258: (in a2_24 - 4 : word32)
  Class: Eq_258
  DataType: (ptr32 (ptr32 code))
  OrigDataType: (ptr32 (struct (0 T_261 t0000)))
T_259: (in 0x00000000 : word32)
  Class: Eq_259
  DataType: word32
  OrigDataType: word32
T_260: (in a2_24 - 4 + 0x00000000 : word32)
  Class: Eq_260
  DataType: word32
  OrigDataType: word32
T_261: (in Mem11[a2_24 - 4 + 0x00000000:word32] : word32)
  Class: Eq_242
  DataType: (ptr32 code)
  OrigDataType: word32
T_262: (in a2_24 - 4 : word32)
  Class: Eq_252
  DataType: ptr32
  OrigDataType: ptr32
T_263: (in -1 : int32)
  Class: Eq_242
  DataType: (ptr32 code)
  OrigDataType: int32
T_264: (in a0_12 != (<anonymous> *) -1 : bool)
  Class: Eq_264
  DataType: bool
  OrigDataType: bool
T_265:
  Class: Eq_265
  DataType: (ptr32 code)
  OrigDataType: (struct 0004 (0 T_72 t0000))
*/
typedef struct Globals {
	<anonymous> * ptr8000270C;	// 8000270C
	<anonymous> * a80002714[];	// 80002714
	word32 dw8000271C;	// 8000271C
	byte b80002724;	// 80002724
	uint32 dw80002726;	// 80002726
	<anonymous> tFFFFFFFF;	// FFFFFFFF
} Eq_1;

typedef word32 (Eq_56)(ptr32);

typedef void (Eq_121)();

typedef void (Eq_150)(real64, int32);

typedef void (Eq_153)(int32);

typedef void (Eq_170)(real64);

typedef void (Eq_174)(real64, real64, Eq_178);

typedef union Eq_178 {
	word32 * u0;
	int32 & u1;
} Eq_178;

typedef int32 & Eq_195;

typedef union Eq_200 {
	word32 * u0;
	int32 & u1;
} Eq_200;

