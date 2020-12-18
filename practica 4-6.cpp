//jesus paul peralta diaz 354662
//partica 4-6
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>

main(){
	srand(time(0));
	int vectorA[3][3];
	
	for(int j=0;j<3;j++){
	for(int i=0;i<3;i++){
		vectorA[j][i]=(rand() % 100);
	}
	}
	printf("vector A\n");
	for(int j=0;j<3;j++){
	for(int i=0;i<3;i++){
		printf("%d\n",vectorA[j][i]);
}
}
}
