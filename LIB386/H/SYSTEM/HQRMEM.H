//──────────────────────────────────────────────────────────────────────────
#ifndef	LIB_SYSTEM_HQRMEM
#define LIB_SYSTEM_HQRMEM

//──────────────────────────────────────────────────────────────────────────
#include	<SYSTEM/HQR.H>

//──────────────────────────────────────────────────────────────────────────
#ifdef	__cplusplus
extern	"C"	{
#endif

//──────────────────────────────────────────────────────────────────────────
extern	COMPRESSED_HEADER *GetPtrBlockMemoryHQR(void *ptrhqr, S32 index);

//──────────────────────────────────────────────────────────────────────────
extern	U32	LoadMemoryHQR( void *ptrhqr, void *ptrdest, S32 index )	;

//──────────────────────────────────────────────────────────────────────────
#ifdef	__cplusplus
}
#endif

//──────────────────────────────────────────────────────────────────────────
#endif//LIB_SYSTEM_HQRMEM

//──────────────────────────────────────────────────────────────────────────

