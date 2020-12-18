//jesus paul peralta diaz 354662
//partica 4-1
#include <iostream>
#include <stdio.h>

main(){
	int option;
	int arrayA[9], arrayB[9];
	do{
		printf("escoje la opcion que desea\nagregar elementos al arreglo A precione: 1\nagregar elementos al arreglo B precione: 2\nimprimir arreglo A precione: 3\nimprimir arreglo B precione: 4\npara salir del programa precione: 5\n");
		scanf("%d",&option);
		switch(option){
			case 1:
				for(int i=0; i<10;i++){
					printf("ingrese elemento %d para arreglo A\n",i+1);
					scanf("%d",&arrayA[i]);
				system("cls");
				}
				break;
			case 2:
				for(int i=0; i<10; i++){
					printf("ingrese elemento %d para arreglo B\n",i+1);
					scanf("%d",&arrayB[i]);
				system("cls");
				}
				break;
			case 3:
				for(int i=0; i<10; i++){
					printf("el elemento %d del arreglo A es: %d\n",i+1,arrayA[i]);
					}
				break;
			case 4:
				for(int i=0; i<10; i++){
					printf("el elemento %d del arreglo B es: %d\n",i+1,arrayB[i]);
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
