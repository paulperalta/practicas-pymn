#include <stdio.h>
#include <math.h>
int main(){
	float masa, gravedad=9.8, peso;
	printf("escriba la masa de la persona en kilogramos: ");
	scanf("%f",&masa);
	peso=gravedad*masa;
	printf("la fuerza de atraccion son: %fN",peso);
	return 0;
}
