 
/*Calculo del inter�s compuesto */
#include <stdio.h>
#include<math.h>

/* la funci�n main comienza la ejecuci�n del programa */
int main()
{

double monto; /* monto del dep�sito */
double principal = 1000.0; /* monto principal */
double tasa [5]={0.05,0.06,0.08,0.09,0.10}; /* inter�s compuesto anual */
int anio; /* contador de a�os */
for (int i = 0; i <= 4; i++ ) {
/* muestra el encabezado de salida de la tabla */
printf( "Anio    Monto del deposito con tasa de %.2f\n",tasa[i] );

/* calcula el monto del depdsito para cada uno de los diez afios */
for ( anio = 1; anio <= 10; anio++ ) {

/* calcula el nuevo monto para el a�o especificado */

monto = principal * pow( 1.0 + tasa[i], anio );

/* muestra una linea de la tabla */

printf( "%4d %21.2f\n", anio, monto );
} 
monto=0;/* fin de for */
}
return 0; /* indica terminacid�n exitosa del programa */

} /* fin de la funcid�n main */

 
