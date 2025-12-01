// Escreva um programa em C que peça 4 médias bimestrais e calcule a media final e informe se o aluno está Aprovado, Reprovado ou Final.
#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3, n4;
    int media = 0;

    printf("Informe a primeira nota: \n");
    scanf("%f", &n1);

    printf("Informe a segunda nota: \n");
    scanf("%f", &n2);

    printf("Informe a terceira nota: \n");
    scanf("%f", &n3);

    printf("Informe a quarta nota: \n");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4;

    printf("Media: %d\n", media);

    if (media >= 7.0){
        printf("APROVADO");
    } else if (media <= 4.0){
        printf("REPROVADO");
    } else{
        printf("FINAL");
    }
    return 0;
}