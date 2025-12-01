// Faça um programa que leia um número inteiro e exiba o seu dobro.
#include <stdio.h>

int main(){
	int numero = 0, dobro;
	
	printf("Escreva um numero inteiro: \n");
	scanf("%d", &numero);
	
	dobro = numero * 2;
	
	printf("O dobro do numero %d resulta em %d.", numero, dobro);
	return 0;
}