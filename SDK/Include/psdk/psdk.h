#ifndef __SDK_WAFFLE_PSDK_PSDK_H_
#define __SDK_WAFFLE_PSDK_PSDK_H_

#include <windows.h>
#include <intrin.h>
#include <winternl.h>

#ifndef  _In_
#define  _In_
#endif
#ifndef  _In_opt_
#define  _In_opt_
#endif
#ifndef  _Out_
#define  _Out_
#endif
#ifndef  _Out_opt_
#define  _Out_opt_
#endif
#ifndef  _Inout_
#define  _Inout_
#endif
#ifndef  _Inout_opt_
#define  _Inout_opt_
#endif
#ifndef  _Reserved_
#define  _Reserved_
#endif


#ifdef __cplusplus
extern "C" {
#endif

#undef  RtlMoveMemory
    VOID WINAPI RtlMoveMemory(
        _In_    VOID UNALIGNED *Destination,
        _In_    const VOID UNALIGNED *Source,
        _In_    SIZE_T Length
        );

#undef  RtlFillMemory
    VOID WINAPI RtlFillMemory(
        _Out_   VOID UNALIGNED *Destination,
        _In_    SIZE_T Length,
        _In_    UCHAR Fill
        );

#undef  RtlZeroMemory
    VOID WINAPI RtlZeroMemory(
        _In_    VOID UNALIGNED *Destination,
        _In_    SIZE_T Length
        );

#include "kernel32.h"
#include "user32.h"
#include "gdi32.h"
#include "shell32.h"
#include "psapi.h"

#ifdef __cplusplus
};
#endif

#endif /* __SDK_WAFFLE_PSDK_PSDK_H_ */