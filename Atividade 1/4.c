// Escreva um programa que leia a base e a altura de um triângulo, que depois calcule e exiba a sua área. Use AREA = (BASE*ALTURA)/2.
#include <stdio.h>

int main(){
	int area, base, altura;

    	printf("Informe a base do triangulo: \n");
    	scanf("%d", &base);

    	printf("Informe a altura do triangulo: \n");
    	scanf("%d", &altura);

    	area = (base * altura)/2;

    	printf("A area do triangulo tem %d cm.", area);
	return 0;
}