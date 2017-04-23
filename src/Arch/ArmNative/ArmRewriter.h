#pragma once

typedef IExpression * (IRtlEmitter::*UnaryOpEmitter)(IExpression *);
typedef IExpression * (IRtlEmitter::*BinOpEmitter)(IExpression *, IExpression *);

enum class FlagM
{
	CF, VF, ZF, NF,
};
inline FlagM operator | (FlagM a, FlagM b) { return (FlagM)((int)a | (int)b); }

class ArmRewriter : public INativeRewriter
{
public:
	ArmRewriter(
		const uint8_t * rawBytes,
		size_t length,
		IRtlEmitter * emitter,
		IFrame * frame,
		IRewriterHost * host);

	STDMETHOD(QueryInterface)(REFIID iid, void ** ppvOut);
	STDMETHOD_(ULONG, AddRef)();
	STDMETHOD_(ULONG, Release)();

	STDMETHOD(Next)();

private:
	void AddConditional(void(*mkInstr)());
	void ConditionalSkip();
	void ConditionalAssign(IExpression * dst, IExpression * src);
	IExpression * FlagGroup(FlagM bits, const char * name, PrimitiveType type);
	arm_cc Invert(arm_cc);
	bool IsLastOperand(const cs_arm_op & op);
	//IExpression * Operand(const ArmInstructionOperand & op);
	void NotImplementedYet();
	void MaybeUpdateFlags(IExpression * opDst);
	void MaybePostOperand(const cs_arm_op & op);
	IExpression * MaybeShiftOperand(IExpression * exp, const cs_arm_op & op);
	IExpression * NZCV();
	IExpression * Operand(const cs_arm_op & op);
	IExpression * Reg(int reg) { return frame.EnsureRegister(reg); }
	IExpression * Reg(arm_reg reg) { return frame.EnsureRegister((int)reg); }

	PrimitiveType SizeFromLoadStore();
	IExpression * TestCond(arm_cc cond);
	const char * ArmRewriter::VectorElementType();

	const cs_arm_op & Dst() { return instr->detail->arm.operands[0]; }
	const cs_arm_op & Src1() { return instr->detail->arm.operands[1]; }
	const cs_arm_op & Src2() { return instr->detail->arm.operands[2]; }
	const cs_arm_op & Src3() { return instr->detail->arm.operands[3]; }

	void RewriteStrd();
	void RewriteTeq();
	void RewriteTst();
	void RewriteUmlal();
	void RewriteAdcSbc(BinOpEmitter fn);
	void RewriteB(bool link);
	void RewriteBfc();
	void RewriteBfi();
	void RewriteBic();
	void RewriteBinOp(BinOpEmitter fn, bool updateFlags);
	void RewriteClz();
	void RewriteCmn();
	void RewriteCmp();
	void RewriteCps();
	void RewriteDmb();
	void RewriteLdm(int);
	void RewriteLdm(IExpression  * dst, const cs_arm_op * range, int length, int offset, bool writeback);
	void RewriteLdr(PrimitiveType);
	void RewriteLdrd();
	void RewriteMcr();
	void RewriteMov();
	void RewriteMovt();
	void RewriteMrc();
	void RewriteMrs();
	void RewriteMsr();
	void RewriteMulbb(bool, bool, PrimitiveType, BinOpEmitter);
	void RewriteMull(PrimitiveType, BinOpEmitter);
	void RewriteMultiplyAccumulate(BinOpEmitter);
	void RewritePop();
	void RewritePush();
	void RewriteRev();
	void RewriteRevBinOp(BinOpEmitter, bool setflags);
	void RewriteSbfx();
	void RewriteStm();
	void RewriteStmib();
	void RewriteStr(PrimitiveType);
	void RewriteSvc();
	void RewriteUnaryOp(UnaryOpEmitter);
	void RewriteUbfx();
	void RewriteVldmia();
	void RewriteVmov();
	void RewriteVstmia();
	void RewriteXtab(PrimitiveType);
	void RewriteXtb(PrimitiveType);

private:
	ULONG cRef;	// COM ref count.

	IRtlEmitter & m;
	IRewriterHost & host;
	IFrame & frame;
	cs_insn * instr;
	const uint8_t * rawBytes;
	size_t length;
	csh hcapstone;
};