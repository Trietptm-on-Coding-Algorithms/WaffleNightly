﻿#ifndef __SDK_WAFFLE_PORT_PORT_H_
#define __SDK_WAFFLE_PORT_PORT_H_

#define WAFFLE_PORT_MACHINE_I386    0x014C  //IMAGE_FILE_MACHINE_I386
#define WAFFLE_PORT_MACHINE_AMD64   0x8664  //IMAGE_FILE_MACHINE_AMD64

#define WAFFLE_PORT_MACHINE_IA64    0x0200  //IMAGE_FILE_MACHINE_IA64

#define WAFFLE_PORT_MACHINE_ARM     0x01C0  //IMAGE_FILE_MACHINE_ARM
#define WAFFLE_PORT_MACHINE_ARMNT   0x01C4  //IMAGE_FILE_MACHINE_ARMNT
#define WAFFLE_PORT_MACHINE_ARM64   0xAA64  //IMAGE_FILE_MACHINE_ARM64
#define WAFFLE_PORT_MACHINE_THUMB   0x01C2  //IMAGE_FILE_MACHINE_THUMB

#define WAFFLE_PORT_MACHINE_STRING_I386     TEXT("I386")
#define WAFFLE_PORT_MACHINE_STRING_AMD64    TEXT("AMD64")

#define WAFFLE_PORT_MACHINE_STRING_IA64     TEXT("IA64")

#define WAFFLE_PORT_MACHINE_STRING_ARM      TEXT("ARM")
#define WAFFLE_PORT_MACHINE_STRING_ARMNT    TEXT("ARMNT")
#define WAFFLE_PORT_MACHINE_STRING_ARM64    TEXT("ARM64")
#define WAFFLE_PORT_MACHINE_STRING_THUMB    TEXT("THUMB")

//http://msdn.microsoft.com/en-us/library/windows/desktop/ms680646(v=vs.85).aspx
#if     defined(_M_IX86)
#include "I386.h"
#elif   defined(_M_AMD64)
#include "AMD64.h"
#elif   defined(_M_IA64)
#include "IA64.h"
#elif   defined(_M_ARM)
#include "ARMNT.h"
#else
#error   Unknown platform.
#endif

#ifdef WAFFLE_PORT_ENTRY_POINT_LOOP_INSTRUCTION
#define WAFFLE_PORT_ENTRY_POINT_LOOP        ((LPBYTE) WAFFLE_PORT_ENTRY_POINT_LOOP_INSTRUCTION)
#define WAFFLE_PORT_ENTRY_POINT_LOOP_SIZE   (sizeof(WAFFLE_PORT_ENTRY_POINT_LOOP_INSTRUCTION) - 1)
#endif

#if     defined(__GNUC__)
#define WAFFLE_PORT_RETURN_ADDRESS __builtin_return_address(0)
#elif   defined(_MSC_VER)
#define WAFFLE_PORT_RETURN_ADDRESS _ReturnAddress()
#endif

#endif /* __SDK_WAFFLE_PORT_PORT_H_ */