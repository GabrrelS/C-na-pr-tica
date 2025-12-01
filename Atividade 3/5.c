// Desenvolva um programa C que atue como um conversor de unidades simples, convertendo entre diferentes unidades de medida, como polegadas para centímetros, litros para galões, etc. Use uma estrutura `switch` para permitir que o usuário escolha a conversão desejada e realize o cálculo apropriado.
#include <stdio.h>
#include <stdlib.h>

int main(){
    float distancia,conversao;
    char unidade;

    printf("Informe uma distancia em metros e em seguida informe a unidade para qual medida deseja utilizar\n");
    scanf("%f",&distancia);
    
    printf("Diigite 'C' para centimetros ou 'K' para kilometros\n");
    scanf(" %c", &unidade);


    switch(unidade){
    case 'C':
        conversao = distancia * 100;
        printf("%.2f metros equivale a %.2f centimetros\n", distancia, conversao);
        break;

        case 'K':
        conversao = distancia / 1000;
        printf("%.2f metros equivale a %.2f kilometros\n", distancia, conversao);
        break;
    default :
	    printf("Digite uma unidade valida\n");
    }
}