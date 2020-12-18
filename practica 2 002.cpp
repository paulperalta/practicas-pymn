#include <stdio.h>
#include <iostream>

int main()
{
int edad;

printf("Cual es tu edad\n");
scanf("%d",&edad);
printf("Tu edad es %d\n",edad);
if(edad < 18){
	printf("eres menor de edad\n");
}
else{
	printf("eres mayor de edad");
}

return 0;
}
