#include <stdio.h>

typedef struct sensores {
	char sensor;
	int valor;
	unsigned long tiempo;
	
} Sensores;

int main(){
	
	Sensores c;
	
printf (" tiene un tamanio de %zd bytes\n", sizeof (c));
}
