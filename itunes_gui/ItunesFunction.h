#pragma once
#include "stdafx.h"
#include <Windows.h>
#include <string>

using namespace std;

typedef bool(_stdcall *PFN_cert_stuff_for_get_object_0)(void *pstuff0/*sizeof(*pstuff0) == 0x18*/);//edi����
//pushad
//pushfd
//push edi //pstuff1
//call PFN_cert_stuff_for_get_object_0
//popfd
//popad

typedef int(_cdecl *PFN_cert_stuff_for_get_num2)(void *pstuff0, void *pstuff, const char *p/*C:\ProgramData\Apple Computer\iTunes\SC Info*/, PULONG pnum2);
typedef bool(_cdecl *PFN_cert_stuff_for_get_object)(void *pstuff/*sizeof(*pstuff) == 0x18*/);
typedef int(_cdecl *PFN_cert_stuff_get_object)(void *pstuff, void *pobject/*sizeof(*pobject) == 8*/);// return 0 succ;
typedef int(_cdecl *PFN_cert_init)(int n/*n==200*/, void *pstuff, ULONG num, LPBYTE pin_data, ULONG inSize, LPBYTE *ppout, PULONG poutLen, PULONG pflag);

typedef void*(_cdecl *PFN_get_guid)(void *);
typedef int(_cdecl *PFN_ActionSignature)(ULONG num, LPBYTE pbody, ULONG size, LPBYTE *ppout, PULONG poutLen);
typedef int(_cdecl *PFN_kbsync)(ULONG num2, ULONGLONG dsid, ULONG reserved, ULONG type, LPBYTE *ppout, PULONG poutLen /* *ppoutLen = 1*/);
typedef void(_cdecl *PFN_Release_Mem)(void *p);
typedef int(_cdecl *PFN_setkeybag)(ULONG num2, LPBYTE p_in_keybag, ULONG inLen);

extern PFN_cert_stuff_for_get_object_0 pfn_cert_stuff_for_get_object_0;
extern PFN_cert_stuff_for_get_num2 pfn_cert_stuff_for_get_num2;
extern PFN_cert_stuff_for_get_object pfn_cert_stuff_for_get_object;
extern PFN_cert_stuff_get_object pfn_cert_stuff_get_object;
extern PFN_cert_init pfn_cert_init;

extern PFN_get_guid pfn_get_guid;
extern PFN_ActionSignature pfn_ActionSignature;
extern PFN_Release_Mem pfn_Release_Mem;
extern PFN_kbsync pfn_kbsync;
extern PFN_setkeybag pfn_setkeybag;

//CFAllocatorRef CFGetAllocator(CFTypeRef cf)
typedef void* (_cdecl *PFN_CFGetAllocator)(void *);

extern PFN_CFGetAllocator pfn_CFGetAllocator;

//void CFRelease(CFTypeRef cf)
typedef void(_cdecl *PFN_CFRelease)(void *);

extern PFN_CFRelease pfn_CFRelease;

//const char * CFStringGetCStringPtr(CFStringRef str, CFStringEncoding encoding)
typedef const char* (_cdecl* PFN_CFStringGetCStringPtr)(void * /*CFStringRef*/ str, /*CFStringEncoding*/int encoding);

extern PFN_CFStringGetCStringPtr pfn_CFStringGetCStringPtr;

typedef int /*CFTypeID*/(_cdecl *PFN_CFStringGetTypeID)(void);//string type == 7

extern PFN_CFStringGetTypeID pfn_CFStringGetTypeID;

//CFTypeID CFGetTypeID(CFTypeRef cf);
typedef int(_cdecl *PFN_CFGetTypeID)(void *cf);

extern PFN_CFGetTypeID pfn_CFGetTypeID;

//CFTypeID CFDictionaryGetTypeID(void);
typedef int(_cdecl *PFN_CFDictionaryGetTypeID)(void);

extern PFN_CFDictionaryGetTypeID pfn_CFDictionaryGetTypeID;

//void CFDictionaryGetKeysAndValues(CFDictionaryRef theDict, const void **keys, const void **values);
typedef void(_cdecl * PFN_CFDictionaryGetKeysAndValues)(void *cf, void **keys, void **values);

extern PFN_CFDictionaryGetKeysAndValues pfn_CFDictionaryGetKeysAndValues;

//CFIndex CFDictionaryGetCount(CFDictionaryRef theDict);
typedef int(_cdecl *PFN_CFDictionaryGetCount)(void *cf);

extern PFN_CFDictionaryGetCount pfn_CFDictionaryGetCount;

//const void *CFDictionaryGetValue(CFDictionaryRef theDict, const void *key);
typedef const void *(_cdecl *PFN_CFDictionaryGetValue)(void *cf, const void *key);

extern PFN_CFDictionaryGetValue pfn_CFDictionaryGetValue;


BOOL Init();