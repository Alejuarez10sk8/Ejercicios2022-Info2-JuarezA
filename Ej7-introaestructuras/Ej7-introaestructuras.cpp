#include <stdio.h>

typedef struct cliente {

char apellido[ 15 ];
char nombre[ 15 ];
int numeroCliente;

	struct {
		char numeroTelefonico[11];
		char direccion[50];
		char ciudad [15];
		char estado [3];
		char codigoPostal[6];
	} personal;
} registroCliente;
	

int main(){

	registroCliente c1 , ptrCliente;
 
 
		 c1.apellido[0]='a';
		 c1.nombre[0]='b';
		 c1.numeroCliente=1;

		 c1.personal.numeroTelefonico[0]='1';
		 c1.personal.direccion[0]='2';
		 c1.personal.ciudad [0]='c';
		 c1.personal.estado [0]='d';
		 c1.personal.codigoPostal[0]='3';
	ptrCliente = c1;
printf("%c , %c , %i \n" , c1.apellido[0], c1.nombre[0] , c1.numeroCliente);
printf("%d , %d , %d \n" , &ptrCliente.apellido[0], &ptrCliente.nombre[0] , &ptrCliente.numeroCliente);
printf(" %c , %c , %c , %c , %c \n\n" , c1.personal.numeroTelefonico[0], c1.personal.direccion[0] , c1.personal.ciudad [0],c1.personal.estado [0], c1.personal.codigoPostal[0] );
printf(" %d , %d , %d , %d , %d \n\n" , &ptrCliente.personal.numeroTelefonico[0], &ptrCliente.personal.direccion[0] , &ptrCliente.personal.ciudad [0],&ptrCliente.personal.estado [0], &ptrCliente.personal.codigoPostal[0] );
}
