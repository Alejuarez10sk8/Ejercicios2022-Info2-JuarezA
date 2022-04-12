 
/*Calculo del interés compuesto */
#include <stdio.h>
#include<math.h>

/* la función main comienza la ejecución del programa */
int main()
{

double monto; /* monto del depósito */
double principal = 1000.0; /* monto principal */
double tasa [5]={0.05,0.06,0.08,0.09,0.10}; /* interés compuesto anual */
int anio; /* contador de años */
for (int i = 0; i <= 4; i++ ) {
/* muestra el encabezado de salida de la tabla */
printf( "Anio    Monto del deposito con tasa de %.2f\n",tasa[i] );

/* calcula el monto del depdsito para cada uno de los diez afios */
for ( anio = 1; anio <= 10; anio++ ) {

/* calcula el nuevo monto para el año especificado */

monto = principal * pow( 1.0 + tasa[i], anio );

/* muestra una linea de la tabla */

printf( "%4d %21.2f\n", anio, monto );
} 
monto=0;/* fin de for */
}
return 0; /* indica terminacidén exitosa del programa */

} /* fin de la funcidén main */

 
