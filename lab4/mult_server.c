/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "mult.h"

double *
multiply_1_svc(numbers *argp, struct svc_req *rqstp)
{
	static double  result;
	printf("multiply(%f,%f) is called\n", argp->a, argp->b);
	result = argp->a * argp->b;

	return &result;
}
