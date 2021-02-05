/* Archivo: union.x */
/* Ejemplo de uso de UNIONES EN RPC */

union U switch(int flag){
	case 1: int i;
	case 2:	double d;
	default: void;
};

program UNION {
	version VUNION {
		U funcion(int)=1;
	}=1;
}=0x20000004;
/* Fin del archivo: union.x */
