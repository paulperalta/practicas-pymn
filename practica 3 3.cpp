#include <stdio.h>
#include <iostream>

main(){
	int codigo[3];
	int i=0, a=0;
do{
for(i=0; i<4; i++){
	printf("ingrese cdigito %d\n",a+1);
	scanf("%d", &codigo[i]);
	a++;
}
}while((codigo[0]==codigo[1])||(codigo[0]==codigo[2]) || (codigo[0]==codigo[3]) || (codigo[1]==codigo[2])|| (codigo[1]==codigo[3])||(codigo[2]==codigo[3]));
printf("codigo valido");
}

