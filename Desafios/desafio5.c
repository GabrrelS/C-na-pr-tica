// Você foi designado para desenvolver um programa que ajudará a polícia a classificar a participação de uma pessoa em um crime. O programa fará 5 perguntas para a pessoa sobre o crime, conforme listadas abaixo:

#include <stdio.h>
#include <stdlib.h>

int main(){
    int resposta, sim = 0, nao = 0, i;

    printf("Responda as perguntas no padrao:\n\n1 - [Sim]\n2 - [Nao]\n\n");

    for (i = 1; i <= 5; i++){
        if (i==1){
            printf("Telefonou para a vitima?\n");
            scanf("%d", &resposta);
            if (resposta==1){
                sim++;
            } else{
                nao++;
            }
        } if (i==2){
            printf("Esteve no local do crime?\n");
            scanf("%d", &resposta);
            if (resposta==1){
                sim++;
            } else{
                nao++;
            }
        } if (i==3){
            printf("Mora perto da vitima?\n");
            scanf("%d", &resposta);
            if (resposta==1){
                sim++;
            } else{
                nao++;
            }
        } if (i==4){
            printf("Devia para a vitima?\n");
            scanf("%d", &resposta);
            if (resposta==1){
                sim++;
            } else{
                nao++;
            }
        } if (i==5){
            printf("Ja trabalhou com a vitima?\n");
            scanf("%d", &resposta);
            if (resposta==1){
                sim++;
            } else{
                nao++;
            }
        }
    }

    printf("Respostas recebidas e analise concluida.\n\n");
    system("pause");

    if (sim==2){
        printf("A analise determinou: Suspeita\n");
    } else if (sim==3 || sim==4){
        printf("A analise determinou: Cumplice\n");
    } else if (sim==5){
        printf("A analise determinou: Assassino\n");
    } else{
        printf("A analise determinou: Inocente\n");
    }
    return 0;
}