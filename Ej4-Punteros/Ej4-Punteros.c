#include <stdio.h>
long int valor_1 = 200000, valor_2;

int main(){
    
    long int *ptrl;	
	ptrl = &valor_1;
    
printf("\nel valor al que apunta ptrL es: %ld\n", *ptrl);
	valor_2=*ptrl;
printf("el valor_2 es: %ld\n", valor_2);
printf("la direccion de valor_1 es: %ld\n", &valor_1);
printf("la direccion de ptrl es: %ld\n", ptrl);

	if(&valor_1 == ptrl){
printf("las direcciones son iguales\n");
	}else{
printf("las direcciones son diferentes\n");
}
}
