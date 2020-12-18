#include <iostream>
#include <stdio.h>

int main(){
	int numero;
	int residuo;
	printf("dar numero\n");
	scanf("%d",&numero);
	residuo=numero%2;
	if(residuo==1){
		printf("numero es impar");
	}
	else{
		printf("numero es par");
	}
	return 0;
}
