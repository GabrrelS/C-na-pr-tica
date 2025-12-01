// Crie um programa C que permita ao usuário inserir uma nota entre 0 e 100 e, com base na nota, exiba a classificação correspondente (por exemplo, A, B, C, D ou F). Use uma estrutura `switch` para realizar essa classificação.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int nota, classificacao;
    printf("Digite a sua nota de 0 a 100 e descubra a sua classificacao\n");
    printf("Informe a nota:\n");
    scanf("%d", &nota);

    if (nota <0 || nota > 100){
        printf("Nota invalida\n");
    return 1;
    }

    classificacao = nota / 10;

    switch (classificacao){
    case 10:
    case 9:
        printf("Nota: %d\nClassificacao: A\n", nota);
        break;
    case 8:
        printf("Nota: %d\nClassificacao: B\n", nota);
        break;
    case 7:
        printf("Nota: %d\nClassificacao: C\n", nota);
        break;
    case 6:
        printf("Nota: %d\nClassificacao: D\n", nota);
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("Nota: %d\nClassificacao: F\n", nota);
        break;
    }
    return 0;
}