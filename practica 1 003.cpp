#include <stdio.h>
#include <math.h>
#include <iostream>
int main(){
char nombre[20];
int edad;
float peso, altura, IMC;

printf("ingrese nombre: ");
scanf("%s",&nombre);

printf("\ningrese edad: ");
scanf("%d",&edad);

printf("\ningrese pesos en kilogramos: ");
scanf("%f",&peso);

printf("\ningrese altura en metros: ");
scanf("%f",&altura);

IMC=peso/(altura*altura);
printf("nombre: %s \nedad: %d \npeso: %f \naltura: %f \nIMC: %f",nombre,edad,peso,altura,IMC);
}
