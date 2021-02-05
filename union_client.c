/*	Archivo: union_client.c
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "union.h"

void
union_1(char *host)
{
	CLIENT *clnt;
	U  *result_1;
	int funcion_1_arg1;

#ifndef	DEBUG
	clnt = clnt_create (host, UNION, VUNION, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */
	/* agregado v */
	for(funcion_1_arg1 = 0 ; funcion_1_arg1 < 10 ; funcion_1_arg1++){
		/* agregado ^ */
		result_1 = funcion_1(funcion_1_arg1, clnt);
		if (result_1 == (U *) NULL) {
			clnt_perror (clnt, "call failed");
		}
		/* agregado v */
		switch( result_1->flag ){
			/* case 0: */
			case 1:
				printf("Un entero! vale: %d \n", result_1->U_u.i);
				break;
			/* case 1: */
			case 2:
				printf("Un doble! vale: %f \n", result_1->U_u.d);
				break;
			default:
				printf("Auuchh!!! ESTO NO ES NADA!!! \n");
				break;
		}
	}
	/* agregado ^ */
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}

int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	union_1 (host);
exit (0);
}
/* Fin del archivo: union_client.c */