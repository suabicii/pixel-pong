/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 3.01.75 */
/* at Fri Mar 27 05:37:32 1998
 */
/* Compiler settings for J:\events\src\esconf\esconf.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: none
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IEvents = {0x2F42C690,0xC6A4,0x11D0,{0x93,0xE9,0x00,0xAA,0x00,0x64,0xD4,0x70}};


const IID IID_IHosts = {0x2F42C69A,0xC6A4,0x11D0,{0x93,0xE9,0x00,0xAA,0x00,0x64,0xD4,0x70}};


const IID IID_IHost = {0x4AA3F8E1,0xC6AF,0x11D0,{0x93,0xE9,0x00,0xAA,0x00,0x64,0xD4,0x70}};


const IID IID_IHandlers = {0x2F42C69D,0xC6A4,0x11D0,{0x93,0xE9,0x00,0xAA,0x00,0x64,0xD4,0x70}};


const IID IID_IHandler = {0x4AA3F8E4,0xC6AF,0x11D0,{0x93,0xE9,0x00,0xAA,0x00,0x64,0xD4,0x70}};


const IID IID_IBoundFolders = {0xB0C0F075,0xDEA0,0x11d0,{0x84,0xB0,0x00,0xC0,0x4F,0xC2,0xF8,0xDA}};


const IID IID_IBoundFolder = {0xB0C0F074,0xDEA0,0x11d0,{0x84,0xB0,0x00,0xC0,0x4F,0xC2,0xF8,0xDA}};


const IID IID_IEventBindings = {0x2F42C694,0xC6A4,0x11D0,{0x93,0xE9,0x00,0xAA,0x00,0x64,0xD4,0x70}};


const IID IID_IEventBinding = {0x2F42C697,0xC6A4,0x11D0,{0x93,0xE9,0x00,0xAA,0x00,0x64,0xD4,0x70}};


const IID IID_ISchedule = {0x2F42C699,0xC6A4,0x11D0,{0x93,0xE9,0x00,0xAA,0x00,0x64,0xD4,0x70}};


const IID LIBID_ESCONFIGLib = {0x2F42C683,0xC6A4,0x11D0,{0x93,0xE9,0x00,0xAA,0x00,0x64,0xD4,0x70}};


const CLSID CLSID_Events = {0x2F42C693,0xC6A4,0x11D0,{0x93,0xE9,0x00,0xAA,0x00,0x64,0xD4,0x70}};


#ifdef __cplusplus
}
#endif

