// Cada espectador de um cinema respondeu a um questionário no qual constava sua opinião em relação ao filme: ótimo – 3, bom – 2, regular – 1. Faça um programa que receba a opinião de 5 espectadores, calcule e mostre:

#include <stdio.h>

int main(){
    int opiniao, espec;
    int regular = 0, bom = 0, otimo = 0;

        printf("Entre as opçoes:\nDigite:\n\n1- Regular.\n2- Bom.\n3- Otimo.\n\n");
        
        for (int espec = 1; espec <= 5; espec++){
            printf("Caro espectador %d, informe qual foi a opiniao em relacao ao filme assistido.\n", espec);
            scanf("%d", &opiniao);

        while (opiniao != 1 && opiniao != 2 && opiniao != 3){
            printf("Opcao invalida. Informe entre as opcoes disponiveis.\n");
            scanf("%d", &opiniao);
        }

        if (opiniao == 1){
            regular++;
        } else if (opiniao == 2){
            bom++;
        } else if (opiniao == 3){
            otimo++;
        }
    }

    printf("Resultados:\n");
    printf("Regular: %d.\nBom: %d.\nOtimo: %d.\n", regular, bom, otimo);
    
    return 0;
}