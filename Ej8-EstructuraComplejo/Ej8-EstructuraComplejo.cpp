#include <stdio.h>

typedef struct complejo {
	float real;
	float imaginario;
	int variable;
	int cx[100];
};
complejo escribir (complejo *px){
	px->variable = 1;
	px->cx[17]=3;
}
int main(){
	complejo x, px;
	x.imaginario= 1.3;
	x.real= (-2.2);
	escribir (&px);
	printf("%i \n" , px.variable);
	printf("%i" , px.cx[18]);
}
