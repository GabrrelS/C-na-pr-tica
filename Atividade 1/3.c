// Escreva um programa que calcule e exiba o comprimento de uma circunferência com o valor de raio dado pelo usuário. Use (C = 2πR).
#include <stdio.h>

int main(){
	float pi = 3.14, circunferencia; int R = 0;
	
	printf("Informe o numero do raio da circunferencia: \n");
	scanf("%d", &R);
	
	circunferencia = (2*pi*R);
	
	printf("A circunferencia mede %.2f cm.", circunferencia);
	return 0;
}