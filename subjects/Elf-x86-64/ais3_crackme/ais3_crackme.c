// ais3_crackme.c
// Generated by decompiling ais3_crackme
// using Reko decompiler version 0.7.2.0.

#include "ais3_crackme.h"

// 00000000004003C8: void _init()
void _init()
{
	call_gmon_start();
	return;
}

// 0000000000400410: void _start(Register (ptr Eq_5) rdx, Stack Eq_6 qwArg00, Stack word32 dwArg04)
void _start( * rdx, Eq_6 qwArg00, word32 dwArg04)
{
	__align(fp + 0x08);
	__libc_start_main(&globals->t4005C5, qwArg00, fp + 0x08, &globals->t400620, &globals->t4006B0, rdx, DPB(qwArg00, fp + 0x04, 0));
	__hlt();
}

// 000000000040043C: void call_gmon_start()
void call_gmon_start()
{
	word64 rax_4 = globals->qw600FE0;
	if (rax_4 != 0x00)
	{
		word64 rsp_17;
		byte SCZO_18;
		word64 rax_19;
		byte SZO_20;
		byte C_21;
		byte Z_22;
		word32 eax_23;
		eax();
	}
	return;
}

// 0000000000400460: Register ptr64 deregister_tm_clones(Register word64 r8)
ptr64 deregister_tm_clones(word64 r8)
{
	if (false && 0x00 != 0x00)
	{
		ptr64 rsp_43;
		word32 eax_44;
		word64 rax_45;
		word64 rbp_46;
		word64 r8_47;
		byte SCZO_48;
		byte CZ_49;
		byte SZO_50;
		byte C_51;
		byte Z_52;
		word32 edi_53;
		word64 rdi_54;
		eax();
		return rsp_43;
	}
	else
		return fp + 0x04;
}

// 0000000000400490: void register_tm_clones(Register word64 r8)
void register_tm_clones(word64 r8)
{
	if (true && 0x00 != 0x00)
	{
		word64 rsp_48;
		word64 rax_49;
		word64 rbp_50;
		word64 r8_51;
		byte SCZO_52;
		word64 rdx_53;
		byte Z_54;
		byte SZO_55;
		byte C_56;
		word64 rsi_57;
		word64 rdi_58;
		word32 edx_59;
		edx();
		return;
	}
	else
		return;
}

// 00000000004004D0: void __do_global_dtors_aux(Register word64 r8)
void __do_global_dtors_aux(word64 r8)
{
	if (globals->b601038 == 0x00)
	{
		deregister_tm_clones(r8);
		globals->b601038 = 0x01;
	}
	return;
}

// 00000000004004F0: void frame_dummy(Register word64 r8)
void frame_dummy(word64 r8)
{
	if (globals->qw600E08 == 0x00 || 0x00 == 0x00)
	{
		register_tm_clones(r8);
		return;
	}
	else
	{
		word64 rsp_47;
		byte SCZO_48;
		byte Z_49;
		word32 eax_50;
		word64 rax_51;
		byte SZO_52;
		byte C_53;
		word64 rbp_54;
		word32 edi_55;
		word64 rdi_56;
		word64 r8_57;
		word64 rdx_58;
		word32 edx_59;
		word64 rsi_60;
		eax();
		register_tm_clones(r8_57);
		return;
	}
}

// 0000000000400520: Register word32 verify(Register (arr Eq_141) rdi)
word32 verify(Eq_141 rdi[])
{
	word32 dwLoc08_127 = 0x00;
	while (true)
	{
		word32 eax_123;
		if ((byte) (word32) (&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&(&rdi[(int64) (word32) (uint64) dwLoc08_127].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00].a0000)[0x00] == 0x00)
			break;
		byte al_74 = (byte) (uint64) ((word32) (uint64) dwLoc08_127 ^ (word32) ((uint64) ((word32) (&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&((&(rdi)[(int64) ((word32) ((uint64) dwLoc08_127))].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000))[0x00].a0000)[0x00])));
		uint64 rax_114 = (uint64) dwLoc08_127;
		if ((byte) (word32) (DPB(rax_114, (int16) (byte) rax_114, 0) + 0x00601020) != (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_74 >> (byte) ((uint64) ((word32) ((uint64) (0x08 - (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc08_127) ^ 0x09)) & 0x03)))))))))))) | (word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) al_74 << (byte) ((uint64) ((word32) ((uint64) ((word32) ((uint64) ((word32) ((uint64) dwLoc08_127) ^ 0x09)) & 0x03)))))))))))) + 0x08)
		{
			eax_123 = 0x00;
			return eax_123;
		}
		dwLoc08_127 = dwLoc08_127 + 0x01;
	}
	eax_123 = (word32) (dwLoc08_127 == 0x17);
	return eax_123;
}

// 00000000004005C5: void main(Register (ptr Eq_226) rsi, Register word32 edi)
void main(Eq_226 * rsi, word32 edi)
{
	if (edi != 0x02)
		puts("You need to enter the secret key!");
	else if (verify(rsi->ptr0008) != 0x00)
		puts("Correct! that is the secret key!");
	else
		puts("I'm sorry, that's the wrong secret key!");
	return;
}

// 0000000000400620: void __libc_csu_init(Register word32 edi)
void __libc_csu_init(word32 edi)
{
	_init();
	if (0x0000000000600E00 - 0x0000000000600DF8 >> 0x03 != 0x00)
	{
		do
		{
			word64 rsp_60;
			word64 rbp_61;
			word64 r12_62;
			word64 r13_63;
			word64 r14_64;
			word64 r15_65;
			word64 rbx_66;
			byte SCZO_67;
			word32 r13d_68;
			word32 edi_69;
			word64 rsi_70;
			word64 rdx_71;
			byte SZO_72;
			byte C_73;
			byte Z_74;
			word32 ebx_75;
			word64 rdi_76;
			globals->u600DF8();
		} while (rbx_66 + 0x01 != rbp_61);
	}
	return;
}

// 00000000004006B0: void __libc_csu_fini()
void __libc_csu_fini()
{
	return;
}

// 00000000004006B4: void _fini()
void _fini()
{
	return;
}

