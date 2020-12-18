//jesus paul peralta diaz 354662
//partica 4-5
#include <iostream>
#include <stdio.h>

main(){
	int option;
	int arrayA[3][3];
	do{
		printf("agregar elementos al arreglo A precione: 1\npara imprimir el arreglo precione 2\npara salir del programa precione: 5\n");
		scanf("%d",&option);
		switch(option){
			case 1:
				for(int j=0;j<3; j++){
				for(int i=0; i<3; i++){
					printf("ingrese elemento %d,%d para arreglo A\n",i+1,j+1);
					scanf("%d",&arrayA[j][i]);
				system("cls");
				}
			}
				break;
			case 2:
				for(int j=0;j<3; j++){
				for(int i=0; i<3; i++){
					printf("el elemento %d,%d del arreglo A es: %d\n",j+1,i+1,arrayA[j][i]);
					}
				}
				break;
			case 5:
				return 0;
				break;
			default:
				printf("opcion no valida, escoja una opcion valida");
				system("cls");
		}
	}while(option!=5);
	return 0;
}
