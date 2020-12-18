//jesus paul peralta diaz 354662
//partica 4-4
#include <iostream>
#include <stdio.h>

int sumavector(int x, int y, int z){
	printf("%d",x+y+z);
	}

main(){
	int vectorA[2], vectorB[2];
	for(int i=0; i<3;i++){
		printf("ingrese elemento %d del vector A\n",i+1);
		scanf("%d",&vectorA[i]);
	}
	printf("la suma de los vectores es:");
	sumavector(vectorA[0], vectorA[1], vectorA[2]);
	return 0;
}
