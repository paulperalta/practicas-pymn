//jesus paul peralta diaz 354662
//partica 4-2
#include <stdio.h> 
#include <stdlib.h> 
#include<time.h>

main(){
	int vectorA[9], vectorB[9];
	srand(time(0));
	for(int i=0;i<10;i++){
		vectorA[i]=rand();
	}
	for(int i=0;i<10;i++){
	vectorB[i]=rand();
	}
	printf("vector A\n");
	for(int i=0;i<10;i++){
		printf("%d\n",vectorA[i]);
	}
	printf("vector B\n");
	for(int i=0;i<10;i++){
		printf("%d\n",vectorB[i]);
	}
}
