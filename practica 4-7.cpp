//jesus paul peralta diaz 354662
//partica 4-7
#include <stdio.h> 
#include <stdlib.h> 
int sumamatriz(int x, int y){
	printf("%d,",x+y);
	}

main(){
	int matrizA[3][3];
	int matrizB[3][3];
	for(int j=0;j<3;j++){
	for(int i=0; i<3;i++){
		printf("ingrese elemento %d,%d del matriz A\n",j+1,i+1);
		scanf("%d",&matrizA[j][i]);
}
}
	for(int j=0;j<3;j++){
	for(int i=0; i<3;i++){
		printf("ingrese elemento %d,%d del matriz B\n",j+1,i+1);
		scanf("%d",&matrizB[j][i]);
}
}
	printf("la suma de los vectores es:");
	
	for(int j=0;j<3;j++){
	for(int i=0; i<3;i++){
		sumamatriz(matrizA[j][i], matrizB[j][i]);
	}
	printf("\n");
}
	return 0;
}
