// example.c
// Generated by decompiling example
// using Reko decompiler version 0.8.2.0.

#include "example.h"

// 00000560: FlagGroup byte _init(Register word64 r6, Register word64 r7, Register word64 r8, Register word64 r9, Register word64 r10, Register word64 r11, Register word64 r12, Register word64 r13, Register out Eq_n r1Out, Register out Eq_n r6Out, Register out Eq_n r8Out, Register out Eq_n r9Out, Register out Eq_n r10Out, Register out Eq_n r11Out, Register out Eq_n r12Out, Register out Eq_n r13Out)
byte _init(word64 r6, word64 r7, word64 r8, word64 r9, word64 r10, word64 r11, word64 r12, word64 r13, union Eq_n & r1Out, union Eq_n & r6Out, union Eq_n & r8Out, union Eq_n & r9Out, union Eq_n & r10Out, union Eq_n & r11Out, union Eq_n & r12Out, union Eq_n & r13Out)
{
	Eq_n r15_n = fp - 0x0140;
	word64 r12_n = DPB(r12, 0x2000, 0);
	Eq_n r1_n = DPB(fp - 0x00A0, 8248, 0) + 0x00;
	if (r1_n != 0x00)
		r1_n();
	Eq_n v16_n = (word64) r15_n + 0x00D0;
	Eq_n r6_n;
	Eq_n r8_n;
	Eq_n r9_n;
	Eq_n r10_n;
	Eq_n r11_n;
	Eq_n r12_n;
	Eq_n r13_n;
	Eq_n r1_n;
	byte CC_n;
	(*((word64) r15_n + 0x0110))();
	r1Out = r1_n;
	r6Out = r6_n;
	r8Out = r8_n;
	r9Out = r9_n;
	r10Out = r10_n;
	r11Out = r11_n;
	r12Out = r12_n;
	r13Out = r13_n;
	return CC_n;
}

// 000005C0: void __cxa_finalize()
void __cxa_finalize()
{
}

// 000005E0: void __libc_start_main()
void __libc_start_main()
{
}

// 00000600: void _start(Register word64 r2, Register word64 r5, Register word64 r6, Register Eq_n r14)
void _start(word64 r2, word64 r5, word64 r6, Eq_n r14)
{
	Eq_n r15_n = fp - 0x00A0 & ~0x0F;
	*(r15_n - 0x00B0) = 0x00;
	*(r15_n - 0x0010) = r14;
	*(r15_n - 0x08) = r15_n - 0x00B0;
	__libc_start_main(DPB(r2, 0x2040, 0) + 0x00, qwLocA0, fp - 0x0098, DPB(r5, 0x0820, 0), DPB(r6, 0x0888, 0), *(r15_n - 0x0010), *(r15_n - 0x08));
}

// 00000648: Register (ptr64 byte) deregister_tm_clones(Register (ptr64 byte) r1, Register word64 r2, Register word64 r5, Register Eq_n r14, Register out Eq_n r2Out, Register out Eq_n r5Out)
byte * deregister_tm_clones(byte * r1, word64 r2, word64 r5, Eq_n r14, union Eq_n & r2Out, union Eq_n & r5Out)
{
	word64 r2_n = DPB(r2, 0x2068, 0);
	union Eq_n * r5_n = DPB(r5, 0x08C8, 0);
	Eq_n r1_n = DPB(r1, 0x2068, 0) + 0x07 - r2_n;
	if (r1_n > *r5_n)
	{
		Eq_n r1_n = *DPB(r1_n, 0x2030, 0);
		if (r1_n != 0x00)
		{
			Eq_n r5_n;
			byte * r1_n;
			Eq_n r2_n;
			word64 r14_n;
			r1_n();
			r2Out = r2_n;
			r5Out = r5_n;
			return r1_n;
		}
		else
		{
			Eq_n r5_n;
			byte * r1_n;
			Eq_n r2_n;
			r14();
			r2Out = r2_n;
			r5Out = r5_n;
			return r1_n;
		}
	}
	else
	{
		Eq_n r5_n;
		byte * r1_n;
		Eq_n r2_n;
		r14();
		r2Out = r2_n;
		r5Out = r5_n;
		return r1_n;
	}
}

// 00000680: void register_tm_clones(Register Eq_n r1, Register (ptr64 byte) r2, Register word64 r3, Register Eq_n r14)
void register_tm_clones(Eq_n r1, byte * r2, word64 r3, Eq_n r14)
{
	int64 r3_n = DPB(r3, 0x2068, 0) - DPB(r1, 0x2068, 0);
	uint64 r1_n = r3_n >> 0x03 >> 0x003F;
	uint64 r3_n = (r3_n >> 0x03) + r1_n;
	if (r3_n != 0x00)
	{
		Eq_n r1_n = DPB(r1_n, 0x2050, 0) + 0x00;
		if (r1_n != 0x00)
		{
			word64 r14_n;
			r1_n();
		}
		else
			r14();
	}
	else
		r14();
}

// 000006C8: void __do_global_dtors_aux(Register word64 r1, Register word64 r2, Register word64 r5, Register word64 r11, Register word64 r12, Register word64 r13)
void __do_global_dtors_aux(word64 r1, word64 r2, word64 r5, word64 r11, word64 r12, word64 r13)
{
	byte * r13_n = DPB(r13, 0x08D0, 0);
	Eq_n r15_n = fp - 0x0140;
	byte * r11_n = DPB(r11, 0x2068, 0);
	if (*r11_n == 0x00)
	{
		byte * r1_n = DPB(r1, 0x2028, 0);
		if (*r13_n != *r1_n)
		{
			word64 r1_n = DPB(r1, 8288, 0);
			__cxa_finalize();
		}
		r1 = deregister_tm_clones(r1_n, r2, r5, 0x070E, out r2, out r5);
		*r11_n = 0x01;
	}
	Eq_n v12_n = (word64) r15_n + 0x00F8;
	(*((word64) r15_n + 0x0110))();
}

// 00000720: void frame_dummy(Register Eq_n r1, Register word64 r2, Register word64 r3, Register word64 r13)
void frame_dummy(Eq_n r1, word64 r2, word64 r3, word64 r13)
{
	word64 r3_n;
	byte * r13_n = DPB(r13, 0x08D8, 0);
	byte * r2_n = DPB(r2, 0x1E18, 0);
	Eq_n r15_n = fp - 0x0140;
	Eq_n CC_n = cond(*r13_n - *r2_n);
	if (*r13_n == *r2_n)
	{
l00000740:
		Mem18 = Mem10;
		Eq_n v8_n = (word64) r15_n + 0x0108;
		r13_n = (byte *) *v8_n;
		Eq_n r14_n = *((word64) v8_n + 0x08);
		r15_n = *((word64) v8_n + 0x0010);
		if (CC_n)
		{
			register_tm_clones(r1, r2_n, r3, r14_n);
			return;
		}
	}
	Eq_n r1_n = *DPB(r1, 0x2048, 0);
	r1 = r1_n;
	CC_n = cond(r1_n);
	if (r1_n != 0x00)
	{
		r1_n();
		r3 = r3_n;
	}
	goto l00000740;
}

// 00000768: Register Eq_n fib(Register Eq_n r2, Register out Eq_n r10Out, Register out Eq_n r11Out)
Eq_n fib(Eq_n r2, union Eq_n & r10Out, union Eq_n & r11Out)
{
	Eq_n r1_n;
	Eq_n r11_n = fp - 0x0148;
	word32 v12_n = SLICE(r2, word32, 32);
	if (r2 <= 0x01)
		r1_n = r2;
	else
	{
		struct Eq_n * r11_n;
		word64 r10_n;
		word32 v18_n = SLICE(fib((int64) (word32) SEQ(v12_n, (word32) r2 - 0x01), out r10_n, out r11_n), word32, 32);
		word64 r10_n;
		word64 r2_n = fib((int64) (word32) SEQ(v18_n, (word32) SEQ(v18_n, r11_n->dw00A4) - 0x02), out r10_n, out r11_n);
		r1_n = SEQ(SLICE(r2_n, word32, 32), (word32) (r2_n + r10_n));
	}
	Eq_n v26_n = (word64) r11_n + 0x00F8;
	int64 r1_n = (int64) (word32) r1_n;
	Eq_n r10_n;
	Eq_n r11_n;
	Eq_n r2_n;
	(*((word64) r11_n + 0x0118))();
	r10Out = r10_n;
	r11Out = r11_n;
	return r2_n;
}

// 000007E0: void main(Register word64 r3)
void main(word64 r3)
{
	struct Eq_n * r11_n;
	word64 r10_n;
	int64 r1_n = (int64) (word32) fib(0x0A, out r10_n, out r11_n);
	r11_n->t0120();
}

// 00000820: void __libc_csu_init(Register word64 r2, Register word64 r3, Register word64 r4, Register word64 r6, Register word64 r7, Register word64 r11, Register word64 r12, Register word64 r13)
void __libc_csu_init(word64 r2, word64 r3, word64 r4, word64 r6, word64 r7, word64 r11, word64 r12, word64 r13)
{
	union Eq_n * r1_n = DPB(r1_n, 7688, 0);
	Eq_n r15_n = fp - 0x0140;
	int64 r11_n = DPB(r11_n, 0x1E10, 0) - r1_n >> 0x03;
	word64 r1_n;
	word64 r11_n;
	word64 r8_n;
	word64 r9_n;
	word64 r10_n;
	word64 r12_n;
	word64 r13_n;
	word64 r6_n;
	if (!_init(r6, r7, r4, r3, r2, r11, r12, r13, out r1_n, out r6_n, out r8_n, out r9_n, out r10_n, out r11_n, out r12_n, out r13_n))
	{
		union Eq_n * r7_n = r1_n;
		do
		{
			word64 r11_n;
			(*r7_n)();
			r11_n = r11_n - 0x01;
		} while (r11_n != 0x01);
	}
	Eq_n v17_n = (word64) r15_n + 0x00D8;
	Eq_n r4_n = *((word64) r15_n + 0x0110);
	r4_n();
}

// 00000888: void __libc_csu_fini(Register Eq_n r14)
void __libc_csu_fini(Eq_n r14)
{
	r14();
}

// 00000890: void _fini(Register word64 r6, Register word64 r7, Register word64 r8, Register word64 r9, Register word64 r10, Register word64 r11, Register word64 r12, Register word64 r13, Register Eq_n r14)
void _fini(word64 r6, word64 r7, word64 r8, word64 r9, word64 r10, word64 r11, word64 r12, word64 r13, Eq_n r14)
{
	word64 r4_n;
	r14();
}

