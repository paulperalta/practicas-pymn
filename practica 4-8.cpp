//jesus paul peralta diaz 354662
//partica 4-8
#include <stdio.h> 
#include <stdlib.h>
int multiplicamatriz(int x, int y){
	printf("%d,",(x*y)+(x*y)+(x*y));
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
	printf("la multiplicacion de los vectores es:");
	
	for(int k=0;k<3;k++){
	for(int l=0;l<3;l++){
	for(int j=0;j<3;j++){
	for(int i=0; i<3;i++){
		multiplicamatriz(matrizA[j][i], matrizB[k][l]);
	}
	printf("\n");
}
}
}
	return 0;
}
