#include <stdio.h>
#include <iostream>
#include <math.h>

main(){
	int numero, a[10], i;
	printf("ingrese numero");
	scanf("%d", &numero);
	
	for(i=0; numero>0;i++){
		a[i]=numero%2;
		numero=numero/2;
	}
	for(i=i-1;i>=0;i--){
		printf("%d", a[i]);
	}
}
