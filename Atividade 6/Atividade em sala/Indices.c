// Criar uma aplicação, para ler 5 números e ir armazenando-os em um vetor. Em seguida exiba esses vetor em ordem crescente dos índice e em ordem decrescente dos índices.

#include <stdio.h>

int main(){
    int i, vetor[5];

    //Armazenando numeros
    for (i=0; i<5; i++){
        printf("Informe o numero %d\n", i);
        scanf("%d", &vetor[i]);
    }

    //Ordem crescente
    for (i=0; i<5; i++){
        printf("[%d][%d]\n", i, vetor[i]);
    }

    printf("\n");

    //Ordem decrescente
    for (i=4; i>=0; i--){
        printf("[%d][%d]\n", i, vetor[i]);
    }

    return 0;
}