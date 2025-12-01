// Escreva um programa que leia o código de origem de um produto e imprima na tela a região de sua procedência conforme a tabela
#include <stdio.h>
#include <stdlib.h>

int main(){
    int code;

    printf("Informe o codigo de seu produto e receba a regiao de prodencia do mesmo.\n");
    scanf("%d", &code);

    switch (code){
    case 1:
        printf("Sul\n");
        break;
    case 2:
        printf("Norte\n");
        break;
    case 3:
        printf("Leste\n");
        break;
    case 4:
        printf("Oeste\n");
        break;
    case 5:
    case 6:
        printf("Nordeste\n");
        break;
    case 7:
    case 8:
    case 9:
        printf("Sudeste\n");
        break;
    case 10:
        printf("Centro-Oeste\n");
        break;
    case 11:
        printf("Noroeste\n");
        break;
    default:
        printf("Produto Importado\n");
        break;
    }
    return 0;
}