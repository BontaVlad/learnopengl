/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/vlad/Nim/lib -o /home/vlad/Sandbox/learnopengl/getting_started/nimcache/glm_mat.o /home/vlad/Sandbox/learnopengl/getting_started/nimcache/glm_mat.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw;
typedef struct tyObject_Vec_ajluWiFZ8tTU9b0kwuUOFAQ tyObject_Vec_ajluWiFZ8tTU9b0kwuUOFAQ;
typedef struct tyObject_Mat_rRXFRTYKpgDJ5Kn1m7tKHA tyObject_Mat_rRXFRTYKpgDJ5Kn1m7tKHA;
typedef struct tyObject_Mat_heEQpaDfEb6loQ9cBE724ag tyObject_Mat_heEQpaDfEb6loQ9cBE724ag;
typedef struct tyObject_Mat_T4xVXfJBjoFESt9b1eXqtYg tyObject_Mat_T4xVXfJBjoFESt9b1eXqtYg;
typedef struct tyObject_Vec_8lp09c9aJ6sSqRDc8uUVfyuA tyObject_Vec_8lp09c9aJ6sSqRDc8uUVfyuA;
typedef struct tyObject_Mat_HtRb1O5aOVprrfb4PBLHfQ tyObject_Mat_HtRb1O5aOVprrfb4PBLHfQ;
typedef struct tyObject_Vec_S5njPDIR1N39afJ9a6EQzdbA tyObject_Vec_S5njPDIR1N39afJ9a6EQzdbA;
typedef NF32 tyArray_9aTCwbdg1cSQimdVd0OEKVw[4];
struct tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw {
tyArray_9aTCwbdg1cSQimdVd0OEKVw arr;
};
typedef NF tyArray_jOGfJgrdxgfAJsLC7WNNEw[4];
struct tyObject_Vec_ajluWiFZ8tTU9b0kwuUOFAQ {
tyArray_jOGfJgrdxgfAJsLC7WNNEw arr;
};
typedef tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw tyArray_Vwko69bN4O2Unwiy9crf9a1iQ[4];
struct tyObject_Mat_rRXFRTYKpgDJ5Kn1m7tKHA {
tyArray_Vwko69bN4O2Unwiy9crf9a1iQ arr;
};
typedef tyObject_Vec_ajluWiFZ8tTU9b0kwuUOFAQ tyArray_PWeDMgRgWxdaA1WjZ09bmiA[4];
struct tyObject_Mat_heEQpaDfEb6loQ9cBE724ag {
tyArray_PWeDMgRgWxdaA1WjZ09bmiA arr;
};
typedef NF32 tyArray_mXNbtvWKAiZn9bWV4uCjiKg[3];
struct tyObject_Vec_8lp09c9aJ6sSqRDc8uUVfyuA {
tyArray_mXNbtvWKAiZn9bWV4uCjiKg arr;
};
typedef tyObject_Vec_8lp09c9aJ6sSqRDc8uUVfyuA tyArray_gMPLzijF49bL6LaDnzjidvg[3];
struct tyObject_Mat_T4xVXfJBjoFESt9b1eXqtYg {
tyArray_gMPLzijF49bL6LaDnzjidvg arr;
};
typedef NF tyArray_9ce69c9a1NzlPVqY9aKHS79b5IQ[3];
struct tyObject_Vec_S5njPDIR1N39afJ9a6EQzdbA {
tyArray_9ce69c9a1NzlPVqY9aKHS79b5IQ arr;
};
typedef tyObject_Vec_S5njPDIR1N39afJ9a6EQzdbA tyArray_g1Wwy4MqSojCcyAwDZZ0dg[3];
struct tyObject_Mat_HtRb1O5aOVprrfb4PBLHfQ {
tyArray_g1Wwy4MqSojCcyAwDZZ0dg arr;
};
static N_INLINE(tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw, vec4f_u2UUzR9aPCs9aqyEhW70rpwwmat)(tyObject_Vec_ajluWiFZ8tTU9b0kwuUOFAQ* v);
static N_INLINE(NF, x_f8GfYB2hC5iTh5sGMTYXowmat)(tyObject_Vec_ajluWiFZ8tTU9b0kwuUOFAQ* v);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NF, y_f8GfYB2hC5iTh5sGMTYXow_2mat)(tyObject_Vec_ajluWiFZ8tTU9b0kwuUOFAQ* v);
static N_INLINE(NF, z_f8GfYB2hC5iTh5sGMTYXow_3mat)(tyObject_Vec_ajluWiFZ8tTU9b0kwuUOFAQ* v);
static N_INLINE(NF, w_f8GfYB2hC5iTh5sGMTYXow_4mat)(tyObject_Vec_ajluWiFZ8tTU9b0kwuUOFAQ* v);
static N_INLINE(tyObject_Mat_rRXFRTYKpgDJ5Kn1m7tKHA, mat4f_Jzsi0g3nuU62zc9cGj9clPmQmat)(tyObject_Mat_heEQpaDfEb6loQ9cBE724ag* mat);
static N_INLINE(tyObject_Vec_ajluWiFZ8tTU9b0kwuUOFAQ, vec4d_ar9bKbHjjXzlvL9a7dG4gYEgmat)(tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw v);
static N_INLINE(NF32, x_tjrjUdeXJd2fxJDgvPZ5hAmat)(tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw v);
static N_INLINE(NF32, y_tjrjUdeXJd2fxJDgvPZ5hA_2mat)(tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw v);
static N_INLINE(NF32, z_tjrjUdeXJd2fxJDgvPZ5hA_3mat)(tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw v);
static N_INLINE(NF32, w_tjrjUdeXJd2fxJDgvPZ5hA_4mat)(tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw v);
static N_INLINE(tyObject_Mat_heEQpaDfEb6loQ9cBE724ag, mat4d_drw0kDMotRSLJ5rI7jkJjwmat)(tyObject_Mat_rRXFRTYKpgDJ5Kn1m7tKHA* mat);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

static N_INLINE(NF, x_f8GfYB2hC5iTh5sGMTYXowmat)(tyObject_Vec_ajluWiFZ8tTU9b0kwuUOFAQ* v) {
	NF result;
	nimfr_("x", "vec.nim");
	result = (NF)0;
	nimln_(255, "vec.nim");
	result = (*v).arr[(((NI) 0))- 0];
	popFrame();
	return result;
}

static N_INLINE(NF, y_f8GfYB2hC5iTh5sGMTYXow_2mat)(tyObject_Vec_ajluWiFZ8tTU9b0kwuUOFAQ* v) {
	NF result;
	nimfr_("y", "vec.nim");
	result = (NF)0;
	nimln_(255, "vec.nim");
	result = (*v).arr[(((NI) 1))- 0];
	popFrame();
	return result;
}

static N_INLINE(NF, z_f8GfYB2hC5iTh5sGMTYXow_3mat)(tyObject_Vec_ajluWiFZ8tTU9b0kwuUOFAQ* v) {
	NF result;
	nimfr_("z", "vec.nim");
	result = (NF)0;
	nimln_(255, "vec.nim");
	result = (*v).arr[(((NI) 2))- 0];
	popFrame();
	return result;
}

static N_INLINE(NF, w_f8GfYB2hC5iTh5sGMTYXow_4mat)(tyObject_Vec_ajluWiFZ8tTU9b0kwuUOFAQ* v) {
	NF result;
	nimfr_("w", "vec.nim");
	result = (NF)0;
	nimln_(255, "vec.nim");
	result = (*v).arr[(((NI) 3))- 0];
	popFrame();
	return result;
}

static N_INLINE(tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw, vec4f_u2UUzR9aPCs9aqyEhW70rpwwmat)(tyObject_Vec_ajluWiFZ8tTU9b0kwuUOFAQ* v) {
	tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw result;
	tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw T1_;
	NF T2_;
	NF T3_;
	NF T4_;
	NF T5_;
	nimfr_("vec4f", "vec.nim");
	memset((void*)(&result), 0, sizeof(result));
	nimln_(659, "vec.nim");
	memset((void*)(&T1_), 0, sizeof(T1_));
	T2_ = (NF)0;
	T2_ = x_f8GfYB2hC5iTh5sGMTYXowmat(v);
	T1_.arr[0] = ((NF32) (T2_));
	T3_ = (NF)0;
	T3_ = y_f8GfYB2hC5iTh5sGMTYXow_2mat(v);
	T1_.arr[1] = ((NF32) (T3_));
	T4_ = (NF)0;
	T4_ = z_f8GfYB2hC5iTh5sGMTYXow_3mat(v);
	T1_.arr[2] = ((NF32) (T4_));
	T5_ = (NF)0;
	T5_ = w_f8GfYB2hC5iTh5sGMTYXow_4mat(v);
	T1_.arr[3] = ((NF32) (T5_));
	result = T1_;
	popFrame();
	return result;
}

static N_INLINE(tyObject_Mat_rRXFRTYKpgDJ5Kn1m7tKHA, mat4f_Jzsi0g3nuU62zc9cGj9clPmQmat)(tyObject_Mat_heEQpaDfEb6loQ9cBE724ag* mat) {
	tyObject_Mat_rRXFRTYKpgDJ5Kn1m7tKHA result;
	tyObject_Mat_rRXFRTYKpgDJ5Kn1m7tKHA T1_;
	nimfr_("mat4f", "mat.nim");
	memset((void*)(&result), 0, sizeof(result));
	nimln_(654, "mat.nim");
	memset((void*)(&T1_), 0, sizeof(T1_));
	T1_.arr[0] = vec4f_u2UUzR9aPCs9aqyEhW70rpwwmat((&(*mat).arr[(((NI) 0))- 0]));
	T1_.arr[1] = vec4f_u2UUzR9aPCs9aqyEhW70rpwwmat((&(*mat).arr[(((NI) 1))- 0]));
	T1_.arr[2] = vec4f_u2UUzR9aPCs9aqyEhW70rpwwmat((&(*mat).arr[(((NI) 2))- 0]));
	T1_.arr[3] = vec4f_u2UUzR9aPCs9aqyEhW70rpwwmat((&(*mat).arr[(((NI) 3))- 0]));
	result = T1_;
	popFrame();
	return result;
}

static N_INLINE(NF32, x_tjrjUdeXJd2fxJDgvPZ5hAmat)(tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw v) {
	NF32 result;
	nimfr_("x", "vec.nim");
	result = (NF32)0;
	nimln_(255, "vec.nim");
	result = v.arr[(((NI) 0))- 0];
	popFrame();
	return result;
}

static N_INLINE(NF32, y_tjrjUdeXJd2fxJDgvPZ5hA_2mat)(tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw v) {
	NF32 result;
	nimfr_("y", "vec.nim");
	result = (NF32)0;
	nimln_(255, "vec.nim");
	result = v.arr[(((NI) 1))- 0];
	popFrame();
	return result;
}

static N_INLINE(NF32, z_tjrjUdeXJd2fxJDgvPZ5hA_3mat)(tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw v) {
	NF32 result;
	nimfr_("z", "vec.nim");
	result = (NF32)0;
	nimln_(255, "vec.nim");
	result = v.arr[(((NI) 2))- 0];
	popFrame();
	return result;
}

static N_INLINE(NF32, w_tjrjUdeXJd2fxJDgvPZ5hA_4mat)(tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw v) {
	NF32 result;
	nimfr_("w", "vec.nim");
	result = (NF32)0;
	nimln_(255, "vec.nim");
	result = v.arr[(((NI) 3))- 0];
	popFrame();
	return result;
}

static N_INLINE(tyObject_Vec_ajluWiFZ8tTU9b0kwuUOFAQ, vec4d_ar9bKbHjjXzlvL9a7dG4gYEgmat)(tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw v) {
	tyObject_Vec_ajluWiFZ8tTU9b0kwuUOFAQ result;
	tyObject_Vec_ajluWiFZ8tTU9b0kwuUOFAQ T1_;
	NF32 T2_;
	NF32 T3_;
	NF32 T4_;
	NF32 T5_;
	nimfr_("vec4d", "vec.nim");
	memset((void*)(&result), 0, sizeof(result));
	nimln_(662, "vec.nim");
	memset((void*)(&T1_), 0, sizeof(T1_));
	T2_ = (NF32)0;
	T2_ = x_tjrjUdeXJd2fxJDgvPZ5hAmat(v);
	T1_.arr[0] = ((NF) (T2_));
	T3_ = (NF32)0;
	T3_ = y_tjrjUdeXJd2fxJDgvPZ5hA_2mat(v);
	T1_.arr[1] = ((NF) (T3_));
	T4_ = (NF32)0;
	T4_ = z_tjrjUdeXJd2fxJDgvPZ5hA_3mat(v);
	T1_.arr[2] = ((NF) (T4_));
	T5_ = (NF32)0;
	T5_ = w_tjrjUdeXJd2fxJDgvPZ5hA_4mat(v);
	T1_.arr[3] = ((NF) (T5_));
	result = T1_;
	popFrame();
	return result;
}

static N_INLINE(tyObject_Mat_heEQpaDfEb6loQ9cBE724ag, mat4d_drw0kDMotRSLJ5rI7jkJjwmat)(tyObject_Mat_rRXFRTYKpgDJ5Kn1m7tKHA* mat) {
	tyObject_Mat_heEQpaDfEb6loQ9cBE724ag result;
	tyObject_Mat_heEQpaDfEb6loQ9cBE724ag T1_;
	nimfr_("mat4d", "mat.nim");
	memset((void*)(&result), 0, sizeof(result));
	nimln_(655, "mat.nim");
	memset((void*)(&T1_), 0, sizeof(T1_));
	T1_.arr[0] = vec4d_ar9bKbHjjXzlvL9a7dG4gYEgmat((*mat).arr[(((NI) 0))- 0]);
	T1_.arr[1] = vec4d_ar9bKbHjjXzlvL9a7dG4gYEgmat((*mat).arr[(((NI) 1))- 0]);
	T1_.arr[2] = vec4d_ar9bKbHjjXzlvL9a7dG4gYEgmat((*mat).arr[(((NI) 2))- 0]);
	T1_.arr[3] = vec4d_ar9bKbHjjXzlvL9a7dG4gYEgmat((*mat).arr[(((NI) 3))- 0]);
	result = T1_;
	popFrame();
	return result;
}

N_NIMCALL(tyObject_Mat_T4xVXfJBjoFESt9b1eXqtYg, mat3_a0uQJfXiy9aQlYR4iveqxUw)(tyObject_Vec_8lp09c9aJ6sSqRDc8uUVfyuA a, tyObject_Vec_8lp09c9aJ6sSqRDc8uUVfyuA b, tyObject_Vec_8lp09c9aJ6sSqRDc8uUVfyuA c) {
	tyObject_Mat_T4xVXfJBjoFESt9b1eXqtYg result;
	nimfr_("mat3", "mat.nim");
	memset((void*)(&result), 0, sizeof(result));
	nimln_(166, "mat.nim");
	result.arr[0] = a;
	result.arr[1] = b;
	result.arr[2] = c;
	popFrame();
	return result;
}

N_NIMCALL(tyObject_Mat_HtRb1O5aOVprrfb4PBLHfQ, mat3_GnV39c9bfQfKHmgIWBodVH8A)(tyObject_Vec_S5njPDIR1N39afJ9a6EQzdbA* a, tyObject_Vec_S5njPDIR1N39afJ9a6EQzdbA* b, tyObject_Vec_S5njPDIR1N39afJ9a6EQzdbA* c) {
	tyObject_Mat_HtRb1O5aOVprrfb4PBLHfQ result;
	nimfr_("mat3", "mat.nim");
	memset((void*)(&result), 0, sizeof(result));
	nimln_(166, "mat.nim");
	result.arr[0] = (*a);
	result.arr[1] = (*b);
	result.arr[2] = (*c);
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(tyObject_Mat_rRXFRTYKpgDJ5Kn1m7tKHA, mat4_dnl08WbvO2CTNBskwbejJA)(NF32 s) {
	tyObject_Mat_rRXFRTYKpgDJ5Kn1m7tKHA result;
	nimfr_("mat4", "mat.nim");
	memset((void*)(&result), 0, sizeof(result));
	{
		NI i;
		NI res;
		i = (NI)0;
		nimln_(1986, "system.nim");
		res = ((NI) 0);
		{
			nimln_(1987, "system.nim");
			while (1) {
				NI TM_t5aYtJOF4f4Nxh9cOYUM05g_2;
				if (!(res <= ((NI) 3))) goto LA3;
				nimln_(1988, "system.nim");
				i = res;
				if ((NU)(i) > (NU)(3)) raiseIndexError();
				if ((NU)(i) > (NU)(3)) raiseIndexError();
				nimln_(217, "mat.nim");
				result.arr[(i)- 0].arr[(i)- 0] = s;
				nimln_(1989, "system.nim");
				TM_t5aYtJOF4f4Nxh9cOYUM05g_2 = addInt(res, ((NI) 1));
				res = (NI)(TM_t5aYtJOF4f4Nxh9cOYUM05g_2);
			} LA3: ;
		}
	}
	popFrame();
	return result;
}

N_NIMCALL(void, row0eq__qL9cF9cOCu0hEf9crQaEJdlMg)(tyObject_Mat_rRXFRTYKpgDJ5Kn1m7tKHA* m, tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw value) {
	nimfr_("row0=", "mat.nim");
	{
		NI j;
		NI i;
		j = (NI)0;
		nimln_(3847, "system.nim");
		i = ((NI) 0);
		{
			nimln_(3848, "system.nim");
			while (1) {
				NI TM_t5aYtJOF4f4Nxh9cOYUM05g_3;
				if (!(i < ((NI) 4))) goto LA3;
				nimln_(3849, "system.nim");
				j = i;
				if ((NU)(j) > (NU)(3)) raiseIndexError();
				nimln_(593, "mat.nim");
				if ((NU)(j) > (NU)(3)) raiseIndexError();
				(*m).arr[(j)- 0].arr[(((NI) 0))- 0] = value.arr[(j)- 0];
				nimln_(3850, "system.nim");
				TM_t5aYtJOF4f4Nxh9cOYUM05g_3 = addInt(i, ((NI) 1));
				i = (NI)(TM_t5aYtJOF4f4Nxh9cOYUM05g_3);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, row1eq__qL9cF9cOCu0hEf9crQaEJdlMg_2)(tyObject_Mat_rRXFRTYKpgDJ5Kn1m7tKHA* m, tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw value) {
	nimfr_("row1=", "mat.nim");
	{
		NI j;
		NI i;
		j = (NI)0;
		nimln_(3847, "system.nim");
		i = ((NI) 0);
		{
			nimln_(3848, "system.nim");
			while (1) {
				NI TM_t5aYtJOF4f4Nxh9cOYUM05g_4;
				if (!(i < ((NI) 4))) goto LA3;
				nimln_(3849, "system.nim");
				j = i;
				if ((NU)(j) > (NU)(3)) raiseIndexError();
				nimln_(597, "mat.nim");
				if ((NU)(j) > (NU)(3)) raiseIndexError();
				(*m).arr[(j)- 0].arr[(((NI) 1))- 0] = value.arr[(j)- 0];
				nimln_(3850, "system.nim");
				TM_t5aYtJOF4f4Nxh9cOYUM05g_4 = addInt(i, ((NI) 1));
				i = (NI)(TM_t5aYtJOF4f4Nxh9cOYUM05g_4);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(void, row2eq__qL9cF9cOCu0hEf9crQaEJdlMg_3)(tyObject_Mat_rRXFRTYKpgDJ5Kn1m7tKHA* m, tyObject_Vec_nc2ATn3mNKEC36f9a1o6BCw value) {
	nimfr_("row2=", "mat.nim");
	{
		NI j;
		NI i;
		j = (NI)0;
		nimln_(3847, "system.nim");
		i = ((NI) 0);
		{
			nimln_(3848, "system.nim");
			while (1) {
				NI TM_t5aYtJOF4f4Nxh9cOYUM05g_5;
				if (!(i < ((NI) 4))) goto LA3;
				nimln_(3849, "system.nim");
				j = i;
				if ((NU)(j) > (NU)(3)) raiseIndexError();
				nimln_(601, "mat.nim");
				if ((NU)(j) > (NU)(3)) raiseIndexError();
				(*m).arr[(j)- 0].arr[(((NI) 2))- 0] = value.arr[(j)- 0];
				nimln_(3850, "system.nim");
				TM_t5aYtJOF4f4Nxh9cOYUM05g_5 = addInt(i, ((NI) 1));
				i = (NI)(TM_t5aYtJOF4f4Nxh9cOYUM05g_5);
			} LA3: ;
		}
	}
	popFrame();
}

N_NIMCALL(NF32*, caddr_jgGzxJqqiHwFCU9bs1j3VOw)(tyObject_Mat_rRXFRTYKpgDJ5Kn1m7tKHA* m) {
	NF32* result;
	nimfr_("caddr", "mat.nim");
	result = (NF32*)0;
	nimln_(47, "mat.nim");
	result = (&(*m).arr[(((NI) 0))- 0].arr[(((NI) 0))- 0]);
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, glm_matInit000)(void) {
	nimfr_("mat", "mat.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, glm_matDatInit000)(void) {
}
