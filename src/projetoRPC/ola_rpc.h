/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _OLA_RPC_H_RPCGEN
#define _OLA_RPC_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define OLA_PROG 123
#define OLA_VERSION 1

#if defined(__STDC__) || defined(__cplusplus)
#define digaOla 1
extern  void * digaola_1(void *, CLIENT *);
extern  void * digaola_1_svc(void *, struct svc_req *);
extern int ola_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define digaOla 1
extern  void * digaola_1();
extern  void * digaola_1_svc();
extern int ola_prog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_OLA_RPC_H_RPCGEN */