#include <stdio.h>
#include <math.h>
#include <stdlib.h> //para hacer clear

//variables y constantes para usar en las formulas
#define R 8.314 //definimos constante
typedef struct variables { //variables de gases ideales
	float presion;
	float volumen;
	float temperatura; 
	float nmoles;
} Variables; 

int varia=3; //variable para elegir la ecuacion

//funciones
int inicio()
	{
	printf("=========================================================\n");
	printf("|Programa para calcular con la ecuacion de Gases Ideales|\n"); //introduccion
	printf("=========================================================\n\n ");
	printf("Elija una opcion: (Escriba 1 o 2) \n\n");
	printf("1- Calcular una incognita de PV=nRT\n"); //opcion 1
	printf("2- Calcular una incognita de (V1xP1)/T1 = (V2xP2)/T2\n\n"); //opcion 2
	}
	
Variables ingresar(Variables *v1,Variables *v2) //ingreso de valores, sirve para las dos opciones
	{
		system("cls"); //limpia consola
		if(varia==1) //Indica que ecuacion estas utilizando
		{
	printf("\n Ecuacion PV=nRT\n"); 
		}else{
			printf("\n Ecuacion (V1xP1)/T1 = (V2xP2)/T2 \n\n");	 // indica 2da ecuacion
		}
	printf("\nA continuacion, ingresar los valores segun los pida \n");
	printf("Si esa variable es la incognita poner 0 \n"); // asi determino la incognita

		if(varia==1) //si estamos usando la primera ecuacion le pregunta al usuario el n de moles
	{
	printf("Ingresar cantidad de moles: \n");
	scanf("%f", &v1->nmoles);
	}
		printf("Ingresar temperatura en Kelvin: \n");
	scanf("%f", &v1->temperatura);
		printf("Ingresar volumen en metros^3: \n");
	scanf("%f", &v1->volumen);
		printf("Ingresar presion en pascales: \n");
	scanf("%f", &v1->presion);
	if(varia==2){ //si estamos usando la segunda ecuacion le pregunta sobre las segundas variables para igualar
	printf("Ingresar temperatura final en Kelvin: \n");
	scanf("%f", &v2->temperatura);
		printf("Ingresar volumen final en metros^3: \n");
	scanf("%f", &v2->volumen);
		printf("Ingresar presion final en pascales: \n");
	scanf("%f", &v2->presion);
	}
	}

Variables ecuacion_PVNRT(Variables *v1) //formulas y calculos de 1era ecuacion
	{
		if (v1->nmoles==0){// si es igual a 0, es por que es la incognita
		v1->nmoles = (v1->volumen*v1->presion)/(R*v1->temperatura);	// (V*P)/(R*T) Y lo cargamos en la variable que antes tenia la incognita
		}
		if (v1->temperatura==0){
		v1->temperatura = (v1->volumen*v1->presion)/(R*v1->nmoles);	
		}
		if (v1->presion==0){
		v1->presion = (v1->nmoles*v1->temperatura*R)/(v1->volumen);	
		}
		if (v1->volumen==0){
		v1->volumen = (v1->nmoles*v1->temperatura*R)/(v1->presion);	
		}
	}
		Variables ecuacion_VPT(Variables *v1,Variables *v2) //formulas y calculos de 2da ecuacion
	{
		if(v2->temperatura==0){
		v2->temperatura= (v2->presion*v2->volumen*v1->temperatura)/(v1->presion*v1->volumen);
		}
		if(v2->volumen==0){
		v2->volumen= (v1->presion*v1->volumen*v2->temperatura)/(v2->presion*v1->temperatura);
		}
		if(v2->presion==0){
		v2->presion= (v1->presion*v1->volumen*v2->temperatura)/(v2->volumen*v1->temperatura);
		}
	}

	
Variables imprimir_resultados(Variables *v1, Variables *v2) //resultados, sirven para las dos ecuaciones
	{
	system("cls");
	printf("===============================\n");
	printf("TUS VARIABLES E INCOGNITAS SON\n");
	printf("===============================\n\n");
	if(varia==1){ //si es la 1era ecuacion lo muestra si no no hace falta
		printf("Numero de moles n= %f moles\n", v1->nmoles);
	}
		printf("Temperatura     T= %f Kelvins\n", v1->temperatura);
		printf("Volumen         V= %f metros^3\n", v1->volumen);
		printf("Presion         P= %f Pascales\n", v1->presion);
	if(varia==2){ //si es la 2da ecuacion los muestras
	
		printf("Temperatura final    T= %f Kelvins\n", v2->temperatura);
		printf("Volumen final        V= %f metros^3\n", v2->volumen);
		printf("Presion final        P= %f Pascales\n", v2->presion);
	}
}
int main()
{   
	Variables v1,v2; //necesitamos dos de esta estructuras
	inicio(); //llamamos al subprograma para que de "inicio"
	
	while(varia>2 || varia<1) // es por si ponen una opcion que no hay
	{
	scanf("%i", &varia); //se elige la opcion 1 o 2 
	}
	
	switch(varia) //opciones 
	{
		case 1:
			ingresar(&v1,&v2); //llamamos al subprograma y le enviamos la info como punteros para que ingresen los valores
			ecuacion_PVNRT(&v1); //le mandamos al subprograma los valores para que calcule
			imprimir_resultados(&v1,&v2);//los mostramos
		break;
		case 2:
			ingresar(&v1,&v2);//llamamos al subprograma y le enviamos la info como punteros para que ingresen los valores
			ecuacion_VPT(&v1,&v2);//le mandamos al subprograma los valores para que calcule
			imprimir_resultados(&v1,&v2);//los mostramos
		break;
	}
}
