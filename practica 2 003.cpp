#include <stdio.h>
#include <iostream>
#include<math.h>

int main(){
	int A, B, C;
	float X1, X2;
	printf("introduce A\n");
	scanf("%d",&A);
	printf("introduce B\n");
	scanf("%d",&B);
	printf("introduce C\n");
	scanf("%d",&C);
	if((pow(B,2)-4*A*C)<0){
		printf("raiz imaginaria");
	}
	else{
		X1=sqrt(pow(B,2)-4*A*C);
		X1=(-B+X1)/A*2;
		X2=sqrt(pow(B,2)-4*A*C);
		X2=(-B-X2)/A*2;
		printf("X1 es: %f y X2 es: %f",X1,X2);
	}
	return 0;
}
