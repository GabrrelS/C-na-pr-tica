// Escreva um programa em C que calcule a soma dos números pares de 1 a N, onde N é um número inteiro fornecido pelo usuário.

#include <stdio.h>

int main(){
    int i, n = 0, nPar = 0;
    printf("Informe um numero e receba a soma de todos os pares presentes dentro dele\n");
    scanf("%d", &n);

    for (i=0; i<=n; i++){
        if (i % 2==0){
            nPar += i;
        }
    }
    printf("A soma dos numeros pares eh: %d", nPar);
    return 0;
}