#include <stdio.h>

char f [10]={'a','b','c','a','b','c','a','b','c','d'}; //a
int b[10]; //b
int g[5]={8}; //c
int c[100]={1};//d
int monto=0; //d
double a[11]={};
double B[34]={};
int main(void){
//                         A
printf("Septimo lugar %c arreglo f\n" , f[6]); //a
//                         B
b[3]= 45;  //b
printf("Cuarto lugar %d arreglo b\n" , b[3]); //b
//                         C
for (int i = 0; i <= 7; i++ ){ //c
c[i]=8;//c
}
printf("Arreglo g inicializado en 8\n" , g[0]); //c
//                      	D          
for (int i = 0; i <= 99; i++ ){ //d
c[i]=1;//d
}
for (int i = 0; i <= 99; i++ ){ //d
monto= c[i]+monto;//d
}
printf("La suma de los elementos del arreglo c es %d \n" , monto); //d
//                          E
for (int i = 0; i <= 10; i++ ){//E
B[i]=a[i];//E
}
printf("Arreglo a copiado con exito\n" );//E
return 0;
}
