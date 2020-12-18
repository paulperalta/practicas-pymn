//jesus paul peralta diaz 354662
//partica 4-3
#include <iostream>
#include <stdio.h>

int sumavectores(int x, int y){
	printf("%d,",x+y);
	}

main(){
	int vectorA[2], vectorB[2];
	for(int i=0; i<3;i++){
		printf("ingrese elemento %d del vector A\n",i+1);
		scanf("%d",&vectorA[i]);
	}
	for(int i=0; i<3;i++){
		printf("ingrese elemento %d del vector B\n",i+1);
		scanf("%d",&vectorB[i]);
	}
	printf("la suma de los vectores es:");
	for(int i=0; i<3;i++){
		sumavectores(vectorA[i],vectorB[i]);
	}
	return 0;
}
