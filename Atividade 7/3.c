// Leia 3 notas de 10 alunos, e calcule a média para cada aluno. As notas devem ser armazenadas em uma matriz 2D onde a primeira coluna é a nota1, a segunda coluna a nota2, a terceira coluna a nota 3 e a quarta coluna a média. Em seguida, exiba a tabela.

#include <stdio.h>

int main(){
    float notas[10][4];
    int L, N;

    for (L=0; L<10; L++){
        for (N=0; N<3; N++){
            printf("Informe a nota %d do aluno %d\n", N+1, L+1);
            scanf("%f", &notas[L][N]);
        }
        notas[L][3] = (notas[L][0] + notas[L][1] + notas[L][2])/3.0;
    }

    printf("Notas e medias:\nALUNO/ N1 / N2 / N3 / MEDIA\n");
    for (L=0; L<10; L++){
        printf("Aluno %d: [%.2f] [%.2f] [%.2f] [%.2f]\n", L+1, notas[L][0], notas[L][1], notas[L][2], notas[L][3]);    
    }
    
    return 0;
}