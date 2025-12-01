// Escreva um programa em C que calcule a soma dos números pares de 1 a N, onde N é um número inteiro fornecido pelo usuário.

#include <stdio.h>

int main() {
    int n, i, soma = 0;

    printf("Digite um numero inteiro e receba o valor da soma dos numeros pares dentro dele:\n");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        soma += i;
    }

    printf("Soma dos pares de 1 a %d: %d\n", n, soma);

    return 0;
}