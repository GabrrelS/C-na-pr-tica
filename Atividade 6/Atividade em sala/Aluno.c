// Criar uma aplicação para ler o nome e a média de um aluno. Em seguida deve ser exibido os valores lidos.

#include <stdio.h>

int main(){
    char nome[5];
    float media = 0;
    int i;

    for (i=0; i<5; i++){
        printf("Informe o nome do aluno:\n");
        scanf("%s", &nome[i]);
    }

    printf("\n\n");
    for (i=0; i<5; i++){
        printf("Informe a media do aluno:\n");
        scanf("%f", &media);
    }

    for (i=0; i<5; i++){
        printf("O aluno %s esta com %.2f de media\n", nome[5], media);
    }

    return 0;
}