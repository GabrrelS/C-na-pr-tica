// Criar uma aplicação, para ler dois nomes. Em seguida deve ser exibido o tamanho de cada nome, e se eles são iguais, se o primeiro é maior, ou se o primeiro é menor.

#include <stdio.h>
#include <string.h>

int main(){
    char vet1[100], vet2[100];
    int tam1 = 0, tam2 = 0, ret = 0;

    printf("Nome 1: \n");
    scanf("%s", &vet1);
    printf("Nome 2: \n");
    scanf("%s", &vet2);

    tam1 = strlen(vet1);
    tam2 = strlen(vet2);

    printf("O nome %s tem %d caracteres\nO nome %s tem %d caracteres\n", vet1, tam1, vet2, tam2);

    ret = strcmp(vet1, vet2);

    if (ret==0){
        printf("%s e igual a %s\n", vet1, vet2);
    }else if (ret > 0){
        printf("%s e maior que a %s\n", vet1, vet2);
    }else if (ret < 0){
        printf("%se menor que a %s\n", vet1, vet2);
    }

    return 0;
}