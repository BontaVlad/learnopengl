/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/vlad/Nim/lib -o /home/vlad/Sandbox/learnopengl/lighting/nimcache/main.o /home/vlad/Sandbox/learnopengl/lighting/nimcache/main.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <setjmp.h>
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
typedef struct tyObject_WindowEventObj_d6XCemaEKzK59bxf1YxrwlA tyObject_WindowEventObj_d6XCemaEKzK59bxf1YxrwlA;
typedef struct tyObject_MouseWheelEventObj_XL6XlXxawDE0K4y7eEOqtg tyObject_MouseWheelEventObj_XL6XlXxawDE0K4y7eEOqtg;
typedef struct tyObject_SDLException_9c6o5Sg4WWFW32kxEqehq7A tyObject_SDLException_9c6o5Sg4WWFW32kxEqehq7A;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct TSafePoint TSafePoint;
typedef struct tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w;
typedef struct tyObject_GlContextPtrcolonObjectType__RFk4O9aogXphw3vfXrOizCg tyObject_GlContextPtrcolonObjectType__RFk4O9aogXphw3vfXrOizCg;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
typedef NI32 tyEnum_EventType_9ayvRjKFMoE6pV9bOp5OUI5w;
typedef NU8 tyArray_Y1pDC6KIrpu9aJMBN9aOQMhw[52];
struct tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug {
tyEnum_EventType_9ayvRjKFMoE6pV9bOp5OUI5w kind;
tyArray_Y1pDC6KIrpu9aJMBN9aOQMhw padding;
};
typedef N_CDECL_PTR(NU8*, tyProc_J1PDbNq7uKOgh20mdTxcDg) (NI* numkeys);
typedef NI32 tyEnum_Bool32_lrv4aZgVTmBUYdrYUkLMlg;
typedef N_CDECL_PTR(tyEnum_Bool32_lrv4aZgVTmBUYdrYUkLMlg, tyProc_b9aXpKFbsyZ0PIk3aYRVCAA) (tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug* event);
typedef NU8 tyEnum_WindowEventID_qlyMtQ19b0uMsXgE0vQ3Diw;
struct tyObject_WindowEventObj_d6XCemaEKzK59bxf1YxrwlA {
tyEnum_EventType_9ayvRjKFMoE6pV9bOp5OUI5w kind;
NU32 timestamp;
NU32 windowID;
tyEnum_WindowEventID_qlyMtQ19b0uMsXgE0vQ3Diw event;
NU8 pad1;
NU8 pad2;
NU8 pad3;
int data1;
int data2;
};
typedef NI32 tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw;
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_fvOXafK39cW5YZA9b9bzinu9cw) (int flags);
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
Exception* up;
};
struct tyObject_SDLException_9c6o5Sg4WWFW32kxEqehq7A {
  Exception Sup;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_CDECL_PTR(NCSTRING, tyProc_09bvyvHFtWbkzL5AHgf0bKw) (void);
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI lastSize;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* freeChunksList;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
};
typedef long tyArray_TcvIiMAJvcwzNLsZkfnFnQ[25];
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClP_0) (Exception* e, void* ClE_0);
void* ClE_0;
} tyProc_KeeAOYBd84Ofsw6Y7LizaQ;
struct TSafePoint {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
tyProc_KeeAOYBd84Ofsw6Y7LizaQ raiseAction;
};
typedef N_CDECL_PTR(NIM_BOOL, tyProc_CS9bxA1KE4RHFQ1vMCkCBmg) (NCSTRING name, NCSTRING value);
typedef N_CDECL_PTR(tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w*, tyProc_1K9aSViCbSUpZMtRI9aw9a2Rg) (NCSTRING title, int x, int y, int w, int h, NU32 flags);
typedef N_CDECL_PTR(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw, tyProc_gHZVvnv6jeg9cI9brLoWECJw) (tyEnum_Bool32_lrv4aZgVTmBUYdrYUkLMlg enabled);
typedef N_CDECL_PTR(tyObject_GlContextPtrcolonObjectType__RFk4O9aogXphw3vfXrOizCg*, tyProc_A4TgaVzGkRyot8mrE1bD0g) (tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w* window);
typedef N_CDECL_PTR(void, tyProc_T629bWTbvDFNyKAaO0BGGIQ) (tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w* window);
typedef N_CDECL_PTR(void, tyProc_ln4kdL5W9bbX4a1xl8nnVXQ) (void);
typedef NI32 tyEnum_MouseWheelDirection_ndQsZIBTF1N2Cb9c7mV9b2VQ;
struct tyObject_MouseWheelEventObj_XL6XlXxawDE0K4y7eEOqtg {
tyEnum_EventType_9ayvRjKFMoE6pV9bOp5OUI5w kind;
NU32 timestamp;
NU32 windowID;
NU32 which;
int x;
int y;
tyEnum_MouseWheelDirection_ndQsZIBTF1N2Cb9c7mV9b2VQ direction;
};
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w {
char dummy;
};
struct tyObject_GlContextPtrcolonObjectType__RFk4O9aogXphw3vfXrOizCg {
char dummy;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
N_NIMCALL(void, nimLoadProcs0)(void);
N_NIMCALL(void, handleInput_9cku33tvANHm87a2gL2qUHQ)(void);
N_NIMCALL(NIM_BOOL, toBool_3fq5Y9cfgYx8q7J9ba6TTYbQ)(tyEnum_Bool32_lrv4aZgVTmBUYdrYUkLMlg some);
N_STDCALL(void, glViewport_yDKviL1Jxz9cvMulIoNt7vQ)(NI32 x, NI32 y, NI32 width, NI32 height);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, main_9cku33tvANHm87a2gL2qUHQ_2)(void);
N_NIMCALL(NIM_BOOL, toBool_9bg9codirrpaPKZJuSwGJgEg)(tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw some);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef_T6kh3mQztDNb9bpesdVnfXw)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
N_STDCALL(void, glEnable_XJ9c7bGCtPrHsj9bTWEfLf3A)(NU32 cap);
N_STDCALL(void, glGenVertexArrays_zvqeRPLD9c2eggqLYZ1r3Zg)(NI32 n, NU32* arrays);
N_STDCALL(void, glBindVertexArray_DTfQaj6wT6HQ9c375GwSXmg)(NU32 array);
N_STDCALL(void, glBindBuffer_3rtrqe5eYHMVBLzlqTY63w)(NU32 target, NU32 buffer);
N_STDCALL(void, glVertexAttribPointer_ARjPQ9cnPkJQtADdR9bd9a8Ww)(NU32 index, NI32 size, NU32 type_0, NIM_BOOL normalized, NI32 stride, void* pointer);
N_STDCALL(void, glEnableVertexAttribArray_PNXJR7G6JIj9ajx7Tvz9a1RA)(NU32 index);
N_STDCALL(void, glClearColor_f9bT9as4U8bxdkTUxJK60qlA)(NF32 red, NF32 green, NF32 blue, NF32 alpha);
N_STDCALL(void, glClear_ecjp09clx9c7t3uIhyfuACGQ)(NU32 mask);
static N_INLINE(void, popSafePoint)(void);
static N_INLINE(void, setFrame)(TFrame* s);
static N_INLINE(void, destroy_sFvfWODyHxg46OuBtGyU8Qmain)(tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w* window);
N_NIMCALL(void, reraiseException)(void);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* theStackBottom);
NIM_EXTERNC N_NOINLINE(void, systemInit000)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_macrosDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unsignedInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_unsignedDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, sdl2_sdl2Init000)(void);
NIM_EXTERNC N_NOINLINE(void, sdl2_sdl2DatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, glm_vecInit000)(void);
NIM_EXTERNC N_NOINLINE(void, glm_vecDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, glm_matInit000)(void);
NIM_EXTERNC N_NOINLINE(void, glm_matDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, glm_globalsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, glm_globalsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, glm_mat_transformInit000)(void);
NIM_EXTERNC N_NOINLINE(void, glm_mat_transformDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, glm_quatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, glm_quatDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, glm_glmInit000)(void);
NIM_EXTERNC N_NOINLINE(void, glm_glmDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_sequtilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, x11_xInit000)(void);
NIM_EXTERNC N_NOINLINE(void, x11_xDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, x11_xlibInit000)(void);
NIM_EXTERNC N_NOINLINE(void, x11_xlibDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, x11_keysymInit000)(void);
NIM_EXTERNC N_NOINLINE(void, x11_keysymDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, x11_xutilInit000)(void);
NIM_EXTERNC N_NOINLINE(void, x11_xutilDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_dynlibDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, opengl_openglInit000)(void);
NIM_EXTERNC N_NOINLINE(void, opengl_openglDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void);
NIM_EXTERNC N_NOINLINE(void, mainDatInit000)(void);
NIM_BOOL run_Bwe4xYAdZLYwpHWAwyMxRA;
int screenWidth_BY9awPNjIKMlJgec2Lc40gA;
int screenHeight_Sc15UsbfHjCpDkYtTKu9c6g;
extern tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug defaultEvent_LbtYyFPe9bpTC9bKZ8rWJeKQ;
extern tyProc_J1PDbNq7uKOgh20mdTxcDg Dl_142464_;
extern tyProc_b9aXpKFbsyZ0PIk3aYRVCAA Dl_142605_;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
extern tyProc_fvOXafK39cW5YZA9b9bzinu9cw Dl_141765_;
extern TNimType NTI_bAvOj2UcojKN87yAQLs0aw_;
TNimType NTI_9c6o5Sg4WWFW32kxEqehq7A_;
TNimType NTI_T6kh3mQztDNb9bpesdVnfXw_;
extern tyProc_09bvyvHFtWbkzL5AHgf0bKw Dl_142654_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
extern TSafePoint* excHandler_rqLlY5bs9atDw2OXYqJEn5g;
extern tyProc_CS9bxA1KE4RHFQ1vMCkCBmg Dl_143013_;
extern tyProc_1K9aSViCbSUpZMtRI9aw9a2Rg Dl_142356_;
extern tyProc_gHZVvnv6jeg9cI9brLoWECJw Dl_142531_;
extern tyProc_A4TgaVzGkRyot8mrE1bD0g Dl_142434_;
extern tyProc_T629bWTbvDFNyKAaO0BGGIQ Dl_142456_;
extern tyProc_T629bWTbvDFNyKAaO0BGGIQ Dl_142388_;
extern tyProc_ln4kdL5W9bbX4a1xl8nnVXQ Dl_141777_;
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_2, "SDL2 initialization failed", 26);
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_3, ", SDL error: ", 13);
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_5, "Linear texture filtering could not be enabled", 45);
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_6, "Window could not be created", 27);

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

N_NIMCALL(void, handleInput_9cku33tvANHm87a2gL2qUHQ)(void) {
	tyObject_Event_Uzh9aP43ffUpM9aa6vZvNEug evt;
	NU8* keyState;
	nimfr_("handleInput", "main.nim");
	nimln_(28, "main.nim");
	evt = defaultEvent_LbtYyFPe9bpTC9bKZ8rWJeKQ;
	nimln_(29, "main.nim");
	keyState = Dl_142464_(NIM_NIL);
	{
		nimln_(31, "main.nim");
		while (1) {
			tyEnum_Bool32_lrv4aZgVTmBUYdrYUkLMlg T3_;
			NIM_BOOL T4_;
			T3_ = (tyEnum_Bool32_lrv4aZgVTmBUYdrYUkLMlg)0;
			T3_ = Dl_142605_((&evt));
			T4_ = (NIM_BOOL)0;
			T4_ = toBool_3fq5Y9cfgYx8q7J9ba6TTYbQ(T3_);
			if (!T4_) goto LA2;
			nimln_(32, "main.nim");
			switch (evt.kind) {
			case ((tyEnum_EventType_9ayvRjKFMoE6pV9bOp5OUI5w) 256):
			{
				nimln_(34, "main.nim");
				run_Bwe4xYAdZLYwpHWAwyMxRA = NIM_FALSE;
			}
			break;
			case ((tyEnum_EventType_9ayvRjKFMoE6pV9bOp5OUI5w) 512):
			{
				tyObject_WindowEventObj_d6XCemaEKzK59bxf1YxrwlA* windowEvent;
				nimln_(36, "main.nim");
				windowEvent = ((tyObject_WindowEventObj_d6XCemaEKzK59bxf1YxrwlA*) ((&evt)));
				nimln_(37, "main.nim");
				{
					if (!((*windowEvent).event == ((tyEnum_WindowEventID_qlyMtQ19b0uMsXgE0vQ3Diw) 5))) goto LA9_;
					nimln_(38, "main.nim");
					screenWidth_BY9awPNjIKMlJgec2Lc40gA = (*windowEvent).data1;
					nimln_(39, "main.nim");
					screenHeight_Sc15UsbfHjCpDkYtTKu9c6g = (*windowEvent).data2;
					nimln_(40, "main.nim");
					glViewport_yDKviL1Jxz9cvMulIoNt7vQ(((NI32) 0), ((NI32) 0), screenWidth_BY9awPNjIKMlJgec2Lc40gA, screenHeight_Sc15UsbfHjCpDkYtTKu9c6g);
				}
				LA9_: ;
			}
			break;
			case ((tyEnum_EventType_9ayvRjKFMoE6pV9bOp5OUI5w) 1027):
			{
				tyObject_MouseWheelEventObj_XL6XlXxawDE0K4y7eEOqtg* wheelEvent;
				nimln_(42, "main.nim");
				wheelEvent = ((tyObject_MouseWheelEventObj_XL6XlXxawDE0K4y7eEOqtg*) ((&evt)));
			}
			break;
			default:
			{
			}
			break;
			}
		} LA2: ;
	}
	popFrame();
}
static N_NIMCALL(void, Marker_tyRef_T6kh3mQztDNb9bpesdVnfXw)(void* p, NI op) {
	tyObject_SDLException_9c6o5Sg4WWFW32kxEqehq7A* a;
	a = (tyObject_SDLException_9c6o5Sg4WWFW32kxEqehq7A*)p;
	nimGCvisit((void*)(*a).Sup.parent, op);
	nimGCvisit((void*)(*a).Sup.message, op);
	nimGCvisit((void*)(*a).Sup.trace, op);
	nimGCvisit((void*)(*a).Sup.up, op);
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim");
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(138, "gc.nim");
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim");
	nimln_(216, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr_("asgnRefNoCycle", "gc.nim");
	nimln_(276, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		nimln_(378, "system.nim");
		nimln_(276, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		nimln_(277, "gc.nim");
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		nimln_(278, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	nimln_(279, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		nimln_(378, "system.nim");
		nimln_(279, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		nimln_(280, "gc.nim");
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		nimln_(281, "gc.nim");
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			nimln_(282, "gc.nim");
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	nimln_(283, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("incRef", "gc.nim");
	nimln_(196, "gc.nim");
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	popFrame();
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("decRef", "gc.nim");
	nimln_(223, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(224, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr_("asgnRef", "gc.nim");
	nimln_(269, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		nimln_(378, "system.nim");
		nimln_(269, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	nimln_(270, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		nimln_(378, "system.nim");
		nimln_(270, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	nimln_(271, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = excHandler_rqLlY5bs9atDw2OXYqJEn5g;
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = s;
}

static N_INLINE(void, popSafePoint)(void) {
	excHandler_rqLlY5bs9atDw2OXYqJEn5g = (*excHandler_rqLlY5bs9atDw2OXYqJEn5g).prev;
}

static N_INLINE(void, setFrame)(TFrame* s) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
}

static N_INLINE(void, destroy_sFvfWODyHxg46OuBtGyU8Qmain)(tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w* window) {
	nimfr_("destroy", "sdl2.nim");
	nimln_(1742, "sdl2.nim");
	Dl_142388_(window);
	popFrame();
}

N_NIMCALL(void, main_9cku33tvANHm87a2gL2qUHQ_2)(void) {
	TSafePoint TM_V45tF8B8NBcxFcjfe7lhBw_4;
	nimfr_("main", "main.nim");
	nimln_(93, "main.nim");
	{
		tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw T3_;
		NIM_BOOL T4_;
		tyObject_SDLException_9c6o5Sg4WWFW32kxEqehq7A* e;
		NimStringDesc* T7_;
		NCSTRING T8_;
		NimStringDesc* T9_;
		T3_ = (tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw)0;
		T3_ = Dl_141765_(((int) 65535));
		T4_ = (NIM_BOOL)0;
		T4_ = toBool_9bg9codirrpaPKZJuSwGJgEg(T3_);
		if (!!(T4_)) goto LA5_;
		e = (tyObject_SDLException_9c6o5Sg4WWFW32kxEqehq7A*)0;
		nimln_(2702, "system.nim");
		e = (tyObject_SDLException_9c6o5Sg4WWFW32kxEqehq7A*) newObj((&NTI_T6kh3mQztDNb9bpesdVnfXw_), sizeof(tyObject_SDLException_9c6o5Sg4WWFW32kxEqehq7A));
		(*e).Sup.Sup.m_type = (&NTI_9c6o5Sg4WWFW32kxEqehq7A_);
		nimln_(94, "main.nim");
		T7_ = (NimStringDesc*)0;
		nimln_(20, "main.nim");
		T8_ = (NCSTRING)0;
		T8_ = Dl_142654_();
		T9_ = (NimStringDesc*)0;
		T9_ = cstrToNimstr(T8_);
		T7_ = rawNewString(((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_2)->Sup.len + T9_->Sup.len + 13);
appendString(T7_, ((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_2));
appendString(T7_, ((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_3));
appendString(T7_, T9_);
		asgnRefNoCycle((void**) (&(*e).Sup.message), T7_);
		nimln_(2697, "system.nim");
		asgnRef((void**) (&(*e).Sup.parent), NIM_NIL);
		nimln_(19, "main.nim");
		raiseException((Exception*)e, "SDLException");
	}
	LA5_: ;
	nimln_(98, "main.nim");
	pushSafePoint(&TM_V45tF8B8NBcxFcjfe7lhBw_4);
	TM_V45tF8B8NBcxFcjfe7lhBw_4.status = setjmp(TM_V45tF8B8NBcxFcjfe7lhBw_4.context);
	if (TM_V45tF8B8NBcxFcjfe7lhBw_4.status == 0) {
		tyObject_WindowPtrcolonObjectType__8bMU2xl1xmmMvYcskTOB4w* window;
		tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw T26_;
		tyObject_GlContextPtrcolonObjectType__RFk4O9aogXphw3vfXrOizCg* T27_;
		TSafePoint TM_V45tF8B8NBcxFcjfe7lhBw_7;
		nimln_(100, "main.nim");
		{
			NIM_BOOL T13_;
			tyObject_SDLException_9c6o5Sg4WWFW32kxEqehq7A* volatile e_2;
			NimStringDesc* T16_;
			NCSTRING T17_;
			NimStringDesc* T18_;
			T13_ = (NIM_BOOL)0;
			T13_ = Dl_143013_("SDL_RENDER_SCALE_QUALITY", "2");
			if (!!(T13_)) goto LA14_;
			e_2 = (tyObject_SDLException_9c6o5Sg4WWFW32kxEqehq7A*)0;
			nimln_(2702, "system.nim");
			e_2 = (tyObject_SDLException_9c6o5Sg4WWFW32kxEqehq7A*) newObj((&NTI_T6kh3mQztDNb9bpesdVnfXw_), sizeof(tyObject_SDLException_9c6o5Sg4WWFW32kxEqehq7A));
			(*e_2).Sup.Sup.m_type = (&NTI_9c6o5Sg4WWFW32kxEqehq7A_);
			nimln_(101, "main.nim");
			T16_ = (NimStringDesc*)0;
			nimln_(20, "main.nim");
			T17_ = (NCSTRING)0;
			T17_ = Dl_142654_();
			T18_ = (NimStringDesc*)0;
			T18_ = cstrToNimstr(T17_);
			T16_ = rawNewString(((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_5)->Sup.len + T18_->Sup.len + 13);
appendString(T16_, ((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_5));
appendString(T16_, ((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_3));
appendString(T16_, T18_);
			asgnRefNoCycle((void**) (&(*e_2).Sup.message), T16_);
			nimln_(2697, "system.nim");
			asgnRef((void**) (&(*e_2).Sup.parent), NIM_NIL);
			nimln_(19, "main.nim");
			raiseException((Exception*)e_2, "SDLException");
		}
		LA14_: ;
		nimln_(103, "main.nim");
		window = Dl_142356_("Our own 2D platformer", ((int) 805240832), ((int) 805240832), screenWidth_BY9awPNjIKMlJgec2Lc40gA, screenHeight_Sc15UsbfHjCpDkYtTKu9c6g, ((unsigned int) 34));
		nimln_(106, "main.nim");
		{
			tyObject_SDLException_9c6o5Sg4WWFW32kxEqehq7A* volatile e_3;
			NimStringDesc* T23_;
			NCSTRING T24_;
			NimStringDesc* T25_;
			if (!(window == 0)) goto LA21_;
			e_3 = (tyObject_SDLException_9c6o5Sg4WWFW32kxEqehq7A*)0;
			nimln_(2702, "system.nim");
			e_3 = (tyObject_SDLException_9c6o5Sg4WWFW32kxEqehq7A*) newObj((&NTI_T6kh3mQztDNb9bpesdVnfXw_), sizeof(tyObject_SDLException_9c6o5Sg4WWFW32kxEqehq7A));
			(*e_3).Sup.Sup.m_type = (&NTI_9c6o5Sg4WWFW32kxEqehq7A_);
			nimln_(106, "main.nim");
			T23_ = (NimStringDesc*)0;
			nimln_(20, "main.nim");
			T24_ = (NCSTRING)0;
			T24_ = Dl_142654_();
			T25_ = (NimStringDesc*)0;
			T25_ = cstrToNimstr(T24_);
			T23_ = rawNewString(((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_6)->Sup.len + T25_->Sup.len + 13);
appendString(T23_, ((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_6));
appendString(T23_, ((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_3));
appendString(T23_, T25_);
			asgnRefNoCycle((void**) (&(*e_3).Sup.message), T23_);
			nimln_(2697, "system.nim");
			asgnRef((void**) (&(*e_3).Sup.parent), NIM_NIL);
			nimln_(19, "main.nim");
			raiseException((Exception*)e_3, "SDLException");
		}
		LA21_: ;
		nimln_(108, "main.nim");
		T26_ = (tyEnum_SDL_Return_8wc8or7UFANAtbisKJq7lw)0;
		T26_ = Dl_142531_(((tyEnum_Bool32_lrv4aZgVTmBUYdrYUkLMlg) 1));
		T26_;
		nimln_(109, "main.nim");
		T27_ = (tyObject_GlContextPtrcolonObjectType__RFk4O9aogXphw3vfXrOizCg*)0;
		T27_ = Dl_142434_(window);
		T27_;
		nimln_(110, "main.nim");
		pushSafePoint(&TM_V45tF8B8NBcxFcjfe7lhBw_7);
		TM_V45tF8B8NBcxFcjfe7lhBw_7.status = setjmp(TM_V45tF8B8NBcxFcjfe7lhBw_7.context);
		if (TM_V45tF8B8NBcxFcjfe7lhBw_7.status == 0) {
			NU32 lightVAO;
			NU32 VBO;
			nimln_(113, "main.nim");
			glEnable_XJ9c7bGCtPrHsj9bTWEfLf3A(((NU32) 2929));
			lightVAO = (NU32)0;
			VBO = (NU32)0;
			nimln_(131, "main.nim");
			glGenVertexArrays_zvqeRPLD9c2eggqLYZ1r3Zg(((NI32) 1), (&lightVAO));
			nimln_(132, "main.nim");
			glBindVertexArray_DTfQaj6wT6HQ9c375GwSXmg(lightVAO);
			nimln_(134, "main.nim");
			glBindBuffer_3rtrqe5eYHMVBLzlqTY63w(((NU32) 34962), VBO);
			nimln_(135, "main.nim");
			glVertexAttribPointer_ARjPQ9cnPkJQtADdR9bd9a8Ww(((NU32) 0), ((NI32) 3), ((NU32) 5126), NIM_FALSE, ((NI32) 12), ((void*) 0));
			nimln_(136, "main.nim");
			glEnableVertexAttribArray_PNXJR7G6JIj9ajx7Tvz9a1RA(((NU32) 0));
			{
				nimln_(139, "main.nim");
				while (1) {
					if (!run_Bwe4xYAdZLYwpHWAwyMxRA) goto LA30;
					nimln_(140, "main.nim");
					handleInput_9cku33tvANHm87a2gL2qUHQ();
					nimln_(141, "main.nim");
					glClearColor_f9bT9as4U8bxdkTUxJK60qlA(2.0000000000000001e-01, 2.9999999999999999e-01, 2.9999999999999999e-01, 1.0000000000000000e+00);
					nimln_(142, "main.nim");
					glClear_ecjp09clx9c7t3uIhyfuACGQ(((NU32) 16640));
					nimln_(143, "main.nim");
					Dl_142456_(window);
				} LA30: ;
			}
			popSafePoint();
		}
		else {
			popSafePoint();
			setFrame((TFrame*)&FR_);
		}
		{
			nimln_(110, "main.nim");
			destroy_sFvfWODyHxg46OuBtGyU8Qmain(window);
		}
		if (TM_V45tF8B8NBcxFcjfe7lhBw_7.status != 0) reraiseException();
		popSafePoint();
	}
	else {
		popSafePoint();
		setFrame((TFrame*)&FR_);
	}
	{
		nimln_(98, "main.nim");
		Dl_141777_();
	}
	if (TM_V45tF8B8NBcxFcjfe7lhBw_4.status != 0) reraiseException();
	popFrame();
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner(void) {
	systemInit000();
	stdlib_macrosDatInit000();
	stdlib_unsignedDatInit000();
	stdlib_parseutilsDatInit000();
	stdlib_mathDatInit000();
	stdlib_algorithmDatInit000();
	stdlib_strutilsDatInit000();
	sdl2_sdl2DatInit000();
	glm_vecDatInit000();
	glm_matDatInit000();
	glm_globalsDatInit000();
	glm_mat_transformDatInit000();
	glm_quatDatInit000();
	glm_glmDatInit000();
	stdlib_sequtilsDatInit000();
	x11_xDatInit000();
	x11_xlibDatInit000();
	x11_keysymDatInit000();
	x11_xutilDatInit000();
	stdlib_dynlibDatInit000();
	opengl_openglDatInit000();
	mainDatInit000();
	stdlib_macrosInit000();
	stdlib_unsignedInit000();
	stdlib_parseutilsInit000();
	stdlib_mathInit000();
	stdlib_algorithmInit000();
	stdlib_strutilsInit000();
	sdl2_sdl2Init000();
	glm_vecInit000();
	glm_matInit000();
	glm_globalsInit000();
	glm_mat_transformInit000();
	glm_quatInit000();
	glm_glmInit000();
	stdlib_sequtilsInit000();
	x11_xInit000();
	x11_xlibInit000();
	x11_keysymInit000();
	x11_xutilInit000();
	stdlib_dynlibInit000();
	opengl_openglInit000();
}

void PreMain(void) {
	void (*volatile inner)(void);
	systemDatInit000();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)(void);
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void) {
	nimfr_("main", "main.nim");
	nimln_(10, "main.nim");
	run_Bwe4xYAdZLYwpHWAwyMxRA = NIM_TRUE;
	nimln_(11, "main.nim");
	screenWidth_BY9awPNjIKMlJgec2Lc40gA = ((int) 800);
	nimln_(12, "main.nim");
	screenHeight_Sc15UsbfHjCpDkYtTKu9c6g = ((int) 600);
	nimln_(17, "main.nim");
	nimLoadProcs0();
	nimln_(146, "main.nim");
	main_9cku33tvANHm87a2gL2qUHQ_2();
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, mainDatInit000)(void) {
static TNimNode TM_V45tF8B8NBcxFcjfe7lhBw_0[1];
NTI_9c6o5Sg4WWFW32kxEqehq7A_.size = sizeof(tyObject_SDLException_9c6o5Sg4WWFW32kxEqehq7A);
NTI_9c6o5Sg4WWFW32kxEqehq7A_.kind = 17;
NTI_9c6o5Sg4WWFW32kxEqehq7A_.base = (&NTI_bAvOj2UcojKN87yAQLs0aw_);
TM_V45tF8B8NBcxFcjfe7lhBw_0[0].len = 0; TM_V45tF8B8NBcxFcjfe7lhBw_0[0].kind = 2;
NTI_9c6o5Sg4WWFW32kxEqehq7A_.node = &TM_V45tF8B8NBcxFcjfe7lhBw_0[0];
NTI_T6kh3mQztDNb9bpesdVnfXw_.size = sizeof(tyObject_SDLException_9c6o5Sg4WWFW32kxEqehq7A*);
NTI_T6kh3mQztDNb9bpesdVnfXw_.kind = 22;
NTI_T6kh3mQztDNb9bpesdVnfXw_.base = (&NTI_9c6o5Sg4WWFW32kxEqehq7A_);
NTI_T6kh3mQztDNb9bpesdVnfXw_.marker = Marker_tyRef_T6kh3mQztDNb9bpesdVnfXw;
}
