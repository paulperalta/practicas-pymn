#include <stdio.h>
#include <math.h>
int main(){
	float volumen, radio, PI=3.1416;
	printf("escriba radio de la esfera");
	scanf("%f",&radio);
	volumen=PI*radio*1.25;
	printf("el volumen de la esfera es: %f",volumen);
	return 0;
}
