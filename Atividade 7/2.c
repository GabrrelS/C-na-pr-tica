// Criar uma aplicação, usando vetores e matrizes, para ler o nome e a média de 30 alunos. Em seguida deve ser exibida a lista com os nomes e as médias.

#include <stdio.h>

int main(){
    char nome[30][100];
    int i, media[30]; 

    for (i=0; i<30; i++){
        printf("Informe o nome do aluno %d\n", i);
        scanf("%s", &nome[i]);
        printf("Informe a media do aluno %d\n", i);
        scanf("%d", &media[i]);
    }
    
    printf("MEDIA DOS ALUNOS:\n");
    for (i=0; i<30; i++){
        printf("[%s][%d]\n", nome[i], media[i]);
    }
    
    return 0;
}