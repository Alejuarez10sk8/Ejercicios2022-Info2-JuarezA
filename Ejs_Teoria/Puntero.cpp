#include <stdio.h>


float promediosuma(float x[],float *ps , float *pp){
	float total;
	for (int i=0; i<4; i++){
		total= total + x[i];	
	
	}
	*pp =total / 4;
	*ps = total;
}
int main(void){
	float array[4]={35,45,55,65};
	float suma;
	float promedio;
	float *psuma=&suma;
	float *ppromedio=&promedio;
	

	promediosuma(array , psuma , ppromedio);
	
	printf("Promedio: %.3f \n", promedio);
	printf("Suma: %.3f", suma);
	return 0;
}
