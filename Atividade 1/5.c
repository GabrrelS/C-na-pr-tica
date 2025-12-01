// Faça um programa que leia 2 valores inteiros (A e B) e mostre o resultado da divisão inteira. O programa deve exibir uma mensagem do tipo: “A divisão de __ por __ é igual a __ ”.
#include <stdio.h>

int main(){
    int A, B, divisao;

    printf("Informe o valor de A: \n");
    scanf("%d", &A);

    printf("Informe o valor de B: \n");
    scanf("%d", &B);

    divisao = A / B;

    printf("A divisao de %d por %d e igual a %d", A, B, divisao);
	return 0;
}