// Criar uma aplicação, usando matrizes, para ler o nome de 30 alunos. Em seguida deve ser exibida a lista com os nomes.

#include <stdio.h>

int main(){
    char nome[30][100];
    int i; 

    for (i=0; i<30; i++){
        printf("Informe o nome do aluno %d\n", i);
        scanf("%s", &nome[i]);
    }
    
    printf("LISTA DE NOMES:\n");
    for (i=0; i<30; i++){
        printf("[%s]\n", nome[i]);
    }
    
    return 0;
}