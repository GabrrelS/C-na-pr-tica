// Você está encarregada de desenvolver um programa para uma empresa de logística que precisa determinar a região de destino com base no código de destino de um pacote.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int code;
    
    printf("Informe o codigo a regiao de destino.\n");
    scanf("%d", &code);
    
    switch (code){
    case 1:
        printf("Destino: Regiao Metropolitana.\n");
        break;
    case 2:
        printf("Destino: Interior Norte.\n");
        break;
    case 3:
        printf("Destino: Interior Sul.\n");
        break;
    case 4:
        printf("Destino: Regiao Litoranea.\n");
        break;
    case 5:
        printf("Destino: Serra.\n");
        break;
    case 6:
        printf("Destino: Regiao Oeste.\n");
        break;
    default:
        printf("Destino: Internacional.\n");
        break;
    }
    return 0;
}