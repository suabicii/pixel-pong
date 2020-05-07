#pragma option push -b -a8 -pc -A- /*P_O_Push*/
/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 2.00.0104 */
/* at Tue Jul 09 17:56:05 1996
 */
//@@MIDL_FILE_HEADING(  )
#include "rpc.h"
#include "rpcndr.h"

#ifndef __rpcpri_h__
#define __rpcpri_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __TriggerPrivateRPC_INTERFACE_DEFINED__
#define __TriggerPrivateRPC_INTERFACE_DEFINED__

/****************************************
 * Generated header for interface: TriggerPrivateRPC
 * at Tue Jul 09 17:56:05 1996
 * using MIDL 2.00.0104
 ****************************************/
/* [auto_handle][unique][version][uuid] */ 


#ifndef RPC_COMMON_IDL
#define RPC_COMMON_IDL
#define		szTriggerRPCProtocol		TEXT("ncacn_np")
#define		szTriggerRPCSecurity		TEXT("Security=impersonation dynamic true")
			/* size is 4 */
typedef long RPC_BOOL;

			/* size is 1 */
typedef small RPC_BYTE;

			/* size is 4 */
typedef long RPC_INT;

			/* size is 4 */
typedef long RPC_SC;

			/* size is 4 */
typedef long RPC_EC;

			/* size is 4 */
typedef long RPC_DWORD;

			/* size is 2 */
typedef wchar_t RPC_CHAR;

			/* size is 4 */
typedef /* [string] */ RPC_CHAR __RPC_FAR *RPC_SZ;

			/* size is 16 */
typedef struct  __MIDL_TriggerPrivateRPC_0001
    {
    short rgwSystemTime[ 8 ];
    }	RPC_SYSTEMTIME;

			/* size is 172 */
typedef struct  __MIDL_TriggerPrivateRPC_0002
    {
    RPC_BYTE rgbTzi[ 172 ];
    }	RPC_TIME_ZONE_INFORMATION;

			/* size is 28 */
typedef struct  __MIDL_TriggerPrivateRPC_0003
    {
    long rgdwServiceStatus[ 7 ];
    }	RPC_SERVICE_STATUS;

#define		ecOK						0		// no error
#define		ecGeneralFailure			50001	// a failure occurred that caused proxy generation to stop
#define		ecSomeProxiesFailed			50002	// some proxies failed to get generated
#define		ecTargetNotValid			50003	// supplied target address not valid
#define		ecTargetNotUnique			50004	// supplied target address not unique
#define		ecProxyDLLNotImplemented	50005	// not implemented yet
#define		ecProxyDLLOOM				50006	// memory allocation error
#define		ecProxyDLLError				50007	// general error
#define		ecProxyDLLProtocol			50008	// protocol error
#define		ecProxyDLLSyntax			50009	// syntax error
#define		ecProxyDLLEOF				50010   // end of file
#define		ecProxyDLLSoftware			50011	// error in software
#define		ecProxyDLLConfig			50012	// configuration error
#define		ecProxyDLLContention		50013	// contention error
#define		ecProxyDLLNotFound			50014	// not found
#define		ecProxyDLLDiskSpace			50015	// out of disk space
#define		ecProxyDLLException			50016	// exception thrown
#define		ecProxyDLLDefault			50017	// unknown error
#define		ecProxyNotValid				50018	// supplied proxy not valid
#define		ecProxyNotUnique			50019	// supplied proxy not unique or unable to generate a unique proxy
#define		ecProxyDuplicate			50020	// a primary proxy of the same type was also supplied
			/* size is 16 */
typedef struct  _PROXYNODE
    {
    struct _PROXYNODE __RPC_FAR *pnodeNext;
    RPC_SZ wszProxy;
    RPC_EC ec;
    RPC_SZ wszDN;
    }	PROXYNODE;

			/* size is 4 */
typedef struct _PROXYNODE __RPC_FAR *PPROXYNODE;

			/* size is 48 */
typedef struct  _PROXYINFO
    {
    RPC_BOOL fContinueOnError;
    RPC_BOOL fIgnoreOldSecondaries;
    RPC_SZ wszDN;
    RPC_SZ wszNickName;
    RPC_SZ wszCommonName;
    RPC_SZ wszDisplayName;
    RPC_SZ wszSurName;
    RPC_SZ wszGivenName;
    RPC_SZ wszInitials;
    RPC_SZ wszTargetAddress;
    PROXYNODE __RPC_FAR *pPNVerifyProxy;
    PROXYNODE __RPC_FAR *pPNExcludeProxy;
    }	PROXYINFO;

			/* size is 4 */
typedef struct _PROXYINFO __RPC_FAR *PPROXYINFO;

			/* size is 8 */
typedef struct  _PROXYLIST
    {
    PROXYNODE __RPC_FAR *__RPC_FAR *ppPNProxy;
    PROXYNODE __RPC_FAR *__RPC_FAR *ppPNFailedProxyType;
    }	PROXYLIST;

			/* size is 4 */
typedef struct _PROXYLIST __RPC_FAR *PPROXYLIST;

			/* size is 192 */
typedef struct  __MIDL_TriggerPrivateRPC_0004
    {
    RPC_SYSTEMTIME st;
    RPC_TIME_ZONE_INFORMATION tzi;
    RPC_DWORD dwReturn;
    }	RemoteSystemTimeInfo;

			/* size is 48 */
typedef struct  _RemoteServiceStatus
    {
    RPC_SC sc;
    RPC_SZ szShortName;
    RPC_SZ szDisplayName;
    RPC_SZ szVersion;
    RPC_SERVICE_STATUS ss;
    struct _RemoteServiceStatus __RPC_FAR *prssNext;
    }	RemoteServiceStatus;

#define		rmsSuspendRepair	0x0001
#define		rmsSuspendNotif		0x0002
			/* size is 24 */
typedef struct  _RemoteMaintenanceStatus
    {
    RPC_DWORD dwStatus;
    RPC_SYSTEMTIME st;
    RPC_SZ szUser;
    }	RemoteMaintenanceStatus;

			/* size is 12 */
typedef struct  _BackupListNode
    {
    struct _BackupListNode __RPC_FAR *pnodeNext;
    struct _BackupListNode __RPC_FAR *pnodeChildren;
    RPC_SZ szName;
    }	BackupListNode;

			/* size is 44 */
typedef struct  _DistributedLockOwner
    {
    RPC_CHAR rgchComputer[ 17 ];
    RPC_DWORD dwPID;
    RPC_DWORD dwTID;
    }	DistributedLockOwner;

#define	DLR_NO_WAIT		0x00000001
#define	cchMaxLockName	17
			/* size is 84 */
typedef struct  _DistributedLockRequest
    {
    RPC_CHAR rgchLockName[ 17 ];
    RPC_DWORD dwFlags;
    DistributedLockOwner dlo;
    }	DistributedLockRequest;

			/* size is 48 */
typedef struct  _DistributedLockReply
    {
    RPC_BOOL fGranted;
    DistributedLockOwner dlo;
    }	DistributedLockReply;

#endif  // #ifndef RPC_COMMON_IDL
			/* size is 4 */
RPC_SC __cdecl ScGetMaintenanceMode( 
    /* [in] */ handle_t h,
    /* [out] */ RPC_DWORD __RPC_FAR *pdw,
    /* [out] */ RPC_SYSTEMTIME __RPC_FAR *pst,
    /* [out] */ RPC_SZ __RPC_FAR *pszUser);

			/* size is 4 */
RPC_SC __cdecl ScSetMaintenanceMode( 
    /* [in] */ handle_t h,
    /* [in] */ RPC_DWORD dw,
    /* [in] */ RPC_SZ szUser);

			/* size is 4 */
RPC_SC __cdecl ScGetRemoteSystemTime( 
    /* [in] */ handle_t h,
    /* [out] */ RPC_SYSTEMTIME __RPC_FAR *pst);

			/* size is 4 */
RPC_SC __cdecl ScSetRemoteSystemTime( 
    /* [in] */ handle_t h,
    /* [in] */ RPC_SYSTEMTIME __RPC_FAR *pst);

#define		dwServerFlagMapiRunning			0x00000001
#define		dwServerFlagNoPrivateStore		0x00000002
			/* size is 4 */
RPC_SC __cdecl ScGetRemoteServerStatus( 
    /* [in] */ handle_t h,
    /* [out] */ RPC_DWORD __RPC_FAR *pdwServerFlags,
    /* [out] */ RemoteSystemTimeInfo __RPC_FAR *prsti,
    /* [out][in] */ RemoteServiceStatus __RPC_FAR *prss,
    /* [out] */ RemoteMaintenanceStatus __RPC_FAR *prms);

			/* size is 4 */
RPC_SC __cdecl ScRunOffLineABTask( 
    /* [in] */ handle_t h);

			/* size is 4 */
RPC_SC __cdecl ScGetDistributedLock( 
    /* [in] */ handle_t h,
    /* [in] */ DistributedLockRequest __RPC_FAR *pdlRequest,
    /* [out] */ DistributedLockReply __RPC_FAR *pdlReply);

			/* size is 4 */
RPC_SC __cdecl ScReleaseDistributedLock( 
    /* [in] */ handle_t h,
    /* [in] */ DistributedLockRequest __RPC_FAR *pdlRequest);

			/* size is 4 */
RPC_SC __cdecl ScKillDistributedLock( 
    /* [in] */ handle_t h,
    /* [in] */ DistributedLockRequest __RPC_FAR *pdlRequest,
    /* [out] */ DistributedLockReply __RPC_FAR *pdlReply);

			/* size is 4 */
RPC_SC __cdecl ScRasEnumEntries( 
    /* [in] */ handle_t h,
    /* [in] */ RPC_INT cb,
    /* [size_is][out] */ RPC_BYTE __RPC_FAR rgbRasEnumEntries[  ],
    /* [out] */ RPC_INT __RPC_FAR *pcEntries);

			/* size is 4 */
RPC_SC __cdecl ScGetExtensionPath( 
    /* [in] */ handle_t h,
    /* [in] */ RPC_SZ szExtensionName,
    /* [in] */ RPC_SZ szExtensionCPU,
    /* [out] */ RPC_SZ __RPC_FAR *pszExtensionPath);



extern RPC_IF_HANDLE TriggerPrivateRPC_ClientIfHandle;
extern RPC_IF_HANDLE TriggerPrivateRPC_ServerIfHandle;
#endif /* __TriggerPrivateRPC_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
#pragma option pop /*P_O_Pop*/
