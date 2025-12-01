// Escreva um programa C que leia um número de 1 a 7 representando um dia da semana e exiba o nome correspondente do dia. Utilize uma estrutura `switch` para implementar essa lógica
#include <stdio.h>
#include <stdlib.h>

int main(){
    int dia = 0;

    printf("Informe um numero e receba a sua representacao em dias da semana.\n");
    scanf("%d", &dia);

    switch (dia){
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda\n");
        break;
    case 3:
        printf("Terca\n");
        break;
    case 4:
        printf("Quarta\n");
        break;
    case 5:
        printf("Quinta\n");
        break;
    case 6:
        printf("Sexta\n");
        break;
    case 7:
        printf("Sabado\n");
        break;
    default:
        printf("Nao esta entre os dias de uma semana!\n");
        break;
    }
    return 0;
}