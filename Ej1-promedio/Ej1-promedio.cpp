#include <stdio.h>
#include <math.h>
#include <stdint.h>

int32_t promedio=0;
int32_t numero=0;
int32_t N=0;

int main()
{	printf("\n Programa para calcular promedio de N numeros puesto \n PARA TERMINAR PROGRAMA Y CALCULAR PROMEDIO, PONER 9999 \n");
while(numero != 9999){
	scanf( "%i", &numero );
if (numero !=9999){

promedio= promedio +numero;
N++;
}}
promedio = promedio /N;
printf("\n El promedio es %i /n" , promedio);
}

