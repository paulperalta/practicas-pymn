#include <stdio.h>
#include <iostream>
#include<string.h>

main(){
	int ganancia;
	float impuesto;
	char  estado[8];
	char input1[]="casado", input2[]="soltero";
	
	printf("eres casado o soltero \n");
	scanf("%s",&estado);
if(strcmp(input1,estado)==0){
	printf("ingrese sus ganancias mensuales \n");
	scanf("%d",&ganancia);
	if(ganancia <=64000){
		impuesto=ganancia*.10;
		printf("tus impuestos a pagar son %f pesos \n", impuesto);
	}
	else{
		impuesto=ganancia*.25;
		printf("tus impuestos a pagar son %f pesos \n", impuesto);
	}
}

else{
	if(strcmp(input2,estado)==0){
	printf("ingrese sus ganancias mensuales \n");
	scanf("%d",&ganancia);
	if(ganancia <=32000){
		impuesto=ganancia*.10;
		printf("tus impuestos a pagar son %f pesos \n", impuesto);
	}
	else{
		impuesto=ganancia*.25;
		printf("tus impuestos a pagar son %f pesos \n", impuesto);
	}
}
	else{
	printf("no es un estado valido");
	}
}
return 0;
}
