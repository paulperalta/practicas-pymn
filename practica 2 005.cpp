#include <stdio.h>
#include <iostream>
#include <math.h>
main(){
	float peso, estatura, imc;
	int estado;
	printf("introduce tu peso en kilogramos\n");
	scanf("%f", &peso);
	printf("introduce tu estatura en metros\n");
	scanf("%f", &estatura);
	imc=peso/(estatura*estatura);
	if(imc < 18.5){
		estado=1;
	}
	if(imc >= 18.5 && imc <= 24.9 ) {
		estado=2;
	}
	if(imc >= 25 && imc <= 29.9 ) {
		estado=3;
	}
	if(imc >= 30 && imc <= 34.5 ) {
		estado=4;
	}
	if(imc >= 35 && imc <= 39.9 ) {
		estado=5;
	}
	if(imc >= 40) {
		estado=6;
	}
	switch(estado){
		case 1:
			printf("su indice de masa corporal es %f usted tiene bajo peso", imc);
			break;
		case 2:
			printf("su indice de masa corporal es %f usted tiene peso normal", imc);
			break;
		case 3:
			printf("su indice de masa corporal es %f usted tiene sobrepeso", imc);
			break;
		case 4:
			printf("su indice de masa corporal es %f usted tiene obesidad tipo 1", imc);
			break;
		case 5:
			printf("su indice de masa corporal es %f usted tiene obesidad tipo 2", imc);
			break;
		case 6:
			printf("su indice de masa corporal es %f usted tiene hiper obesidad", imc);
			break;					
	}
	return 0;
}
