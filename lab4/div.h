/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _DIV_H_RPCGEN
#define _DIV_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct numbers {
	double a;
	double b;
};
typedef struct numbers numbers;

#define DIV_PROG 0x4562877
#define DIV_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define divide 1
extern  double * divide_1(numbers *, CLIENT *);
extern  double * divide_1_svc(numbers *, struct svc_req *);
extern int div_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define divide 1
extern  double * divide_1();
extern  double * divide_1_svc();
extern int div_prog_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_numbers (XDR *, numbers*);

#else /* K&R C */
extern bool_t xdr_numbers ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_DIV_H_RPCGEN */
