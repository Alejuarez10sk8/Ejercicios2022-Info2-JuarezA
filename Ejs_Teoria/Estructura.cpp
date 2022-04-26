#include <stdio.h>
#include <math.h>
typedef struct punto2D {
float x[2];
float y[2];
} Punto2D;

Punto2D sumar(Punto2D *p1){
Punto2D p2;
for (int i=0;i<2;i++){
//Punto2D p2= {p1->x[i] + p1->x[i+1], p1->y[i] + p1->y[i+1]}; //solo me carga primer variable
p2.x[0]=p1->x[i] + p2.x[0];
p2.y[0]=p1->y[i] + p2.y[0];
}
return p2;
};
int main() {
Punto2D p1,p2;
p1.x[0] = 2;
p1.y[0] = 3;
p1.x[1] = 1;
p1.y[1] = 3;
p2 = sumar(&p1);
printf("Coordenadas (%f, %f)\n", p2.x[0], p2.y[0]);
return 0;
}
