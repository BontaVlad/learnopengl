/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/vlad/Nim/lib -o /home/vlad/Sandbox/learnopengl/getting_started/nimcache/sdl2_sdl2.o /home/vlad/Sandbox/learnopengl/getting_started/nimcache/sdl2_sdl2.c */
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
typedef struct tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w;
typedef struct tyObject_GlContextPtrcolonObjectType__RFk4O9aogXphw3vfXrOizCg tyObject_GlContextPtrcolonObjectType__RFk4O9aogXphw3vfXrOizCg;
typedef NI32 tyEnum_EventType_9ayvRjKFMoE6pV9bOp5OUI5w;
typedef NU8 tyArray_Y1pDC6KIrpu9aJMBN9aOQMhw[52];
struct tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug {
tyEnum_EventType_9ayvRjKFMoE6pV9bOp5OUI5w kind;
tyArray_Y1pDC6KIrpu9aJMBN9aOQMhw padding;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(NU8*, tyProc_J1PDbNq7uKOgh20mdTxcDg) (NI* numkeys);
typedef NI32 tyEnum_Bool32_lrv4aZgVTmBUYdrYUkLMlg;
typedef N_CDECL_PTR(tyEnum_Bool32_lrv4aZgVTmBUYdrYUkLMlg, tyProc_b9aXpKFbsyZ0PIk3aYRVCAA) (tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug* event);
typedef NI32 tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw;
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_fvOXafK39cW5YZA9b9bzinu9cw) (int flags);
typedef N_CDECL_PTR(NCSTRING, tyProc_09bvyvHFtWbkzL5AHgf0bKw) (void);
typedef N_CDECL_PTR(NIM_BOOL, tyProc_CS9bxA1KE4RHFQ1vMCkCBmg) (NCSTRING name, NCSTRING value);
typedef N_CDECL_PTR(tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w*, tyProc_1K9aSViCbSUpZMtRI9aw9a2Rg) (NCSTRING title, int x, int y, int w, int h, NU32 flags);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_gHZVvnv6jeg9cI9brLoWECJw) (tyEnum_Bool32_lrv4aZgVTmBUYdrYUkLMlg enabled);
typedef N_CDECL_PTR(tyObject_GlContextPtrcolonObjectType__RFk4O9aogXphw3vfXrOizCg*, tyProc_A4TgaVzGkRyot8mrE1bD0g) (tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w* window);
typedef N_CDECL_PTR(NU32, tyProc_ZBJ5GRli6YRWUmwPMxvXiw) (void);
typedef N_CDECL_PTR(void, tyProc_T629bWTbvDFNyKAaO0BGGIQ) (tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w* window);
typedef N_CDECL_PTR(void, tyProc_ln4kdL5W9bbX4a1xl8nnVXQ) (void);
struct tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w {
char dummy;
};
struct tyObject_GlContextPtrcolonObjectType__RFk4O9aogXphw3vfXrOizCg {
char dummy;
};
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path);
N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug defaultEvent_LbtYyFPe9bpTC9bKZ8rWJeKQ;
static void* TM_ZcjcXgoBjElsmUGY1Ljosg_2;
tyProc_J1PDbNq7uKOgh20mdTxcDg Dl_142464_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
tyProc_b9aXpKFbsyZ0PIk3aYRVCAA Dl_142605_;
tyProc_fvOXafK39cW5YZA9b9bzinu9cw Dl_141765_;
tyProc_09bvyvHFtWbkzL5AHgf0bKw Dl_142654_;
tyProc_CS9bxA1KE4RHFQ1vMCkCBmg Dl_143013_;
tyProc_1K9aSViCbSUpZMtRI9aw9a2Rg Dl_142356_;
tyProc_gHZVvnv6jeg9cI9brLoWECJw Dl_142531_;
tyProc_A4TgaVzGkRyot8mrE1bD0g Dl_142434_;
tyProc_ZBJ5GRli6YRWUmwPMxvXiw Dl_142397_;
tyProc_T629bWTbvDFNyKAaO0BGGIQ Dl_142456_;
tyProc_T629bWTbvDFNyKAaO0BGGIQ Dl_142388_;
tyProc_ln4kdL5W9bbX4a1xl8nnVXQ Dl_141777_;
STRING_LITERAL(TM_ZcjcXgoBjElsmUGY1Ljosg_4, "libSDL2.so", 10);
STRING_LITERAL(TM_ZcjcXgoBjElsmUGY1Ljosg_5, "libSDL2.so", 10);

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

N_NIMCALL(NIM_BOOL, toBool_3fq5Y9cfgYx8q7J9ba6TTYbQ)(tyEnum_Bool32_lrv4aZgVTmBUYdrYUkLMlg some) {
	NIM_BOOL result;
	nimfr_("toBool", "sdl2.nim");
	result = (NIM_BOOL)0;
	nimln_(330, "sdl2.nim");
	result = ((NIM_BOOL) (some));
	popFrame();
	return result;
}

N_NIMCALL(NIM_BOOL, toBool_9bg9codirrpaPKZJuSwGJgEg)(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw some) {
	NIM_BOOL result;
	nimfr_("toBool", "sdl2.nim");
	result = (NIM_BOOL)0;
	nimln_(331, "sdl2.nim");
	result = (some == ((tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw) 0));
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, sdl2_sdl2Init000)(void) {
	tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug T1_;
	nimfr_("sdl2", "sdl2.nim");
	nimln_(1800, "sdl2.nim");
	memset((void*)(&T1_), 0, sizeof(T1_));
	T1_.kind = ((tyEnum_EventType_9ayvRjKFMoE6pV9bOp5OUI5w) 256);
	defaultEvent_LbtYyFPe9bpTC9bKZ8rWJeKQ = T1_;
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, sdl2_sdl2DatInit000)(void) {
if (!((TM_ZcjcXgoBjElsmUGY1Ljosg_2 = nimLoadLibrary((NimStringDesc*) &TM_ZcjcXgoBjElsmUGY1Ljosg_4))
)) nimLoadLibraryError((NimStringDesc*) &TM_ZcjcXgoBjElsmUGY1Ljosg_5);
	Dl_142464_ = (tyProc_J1PDbNq7uKOgh20mdTxcDg) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_GetKeyboardState");
	Dl_142605_ = (tyProc_b9aXpKFbsyZ0PIk3aYRVCAA) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_PollEvent");
	Dl_141765_ = (tyProc_fvOXafK39cW5YZA9b9bzinu9cw) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_Init");
	Dl_142654_ = (tyProc_09bvyvHFtWbkzL5AHgf0bKw) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_GetError");
	Dl_143013_ = (tyProc_CS9bxA1KE4RHFQ1vMCkCBmg) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_SetHint");
	Dl_142356_ = (tyProc_1K9aSViCbSUpZMtRI9aw9a2Rg) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_CreateWindow");
	Dl_142531_ = (tyProc_gHZVvnv6jeg9cI9brLoWECJw) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_SetRelativeMouseMode");
	Dl_142434_ = (tyProc_A4TgaVzGkRyot8mrE1bD0g) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_GL_CreateContext");
	Dl_142397_ = (tyProc_ZBJ5GRli6YRWUmwPMxvXiw) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_GetTicks");
	Dl_142456_ = (tyProc_T629bWTbvDFNyKAaO0BGGIQ) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_GL_SwapWindow");
	Dl_142388_ = (tyProc_T629bWTbvDFNyKAaO0BGGIQ) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_DestroyWindow");
	Dl_141777_ = (tyProc_ln4kdL5W9bbX4a1xl8nnVXQ) nimGetProcAddr(TM_ZcjcXgoBjElsmUGY1Ljosg_2, "SDL_Quit");
}

