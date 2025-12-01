// Armazenar notas de alunos OBS: EU DECIDI QUE QUERIA MOSTRAR AS NOTAS ARMAZENADAS

#include <stdio.h>
int main(){
    float alunos[7];
    int i;
    
    for (i=0; i<7; i++){
        printf("Informe a nota do aluno %d\n", i);
        scanf("%f", &alunos[i]);
    }

    printf("Nota dos alunos\n\n");
    for (i=0; i<7; i++){
        printf("Aluno %d: %.2f\n", i, alunos[i]);
    }
    return 0;
}