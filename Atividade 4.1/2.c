// Faça um programa que recebe o preço de 10 produtos e exibe o valor do produto mais caro.

#include <stdio.h>

int main(){
    int produto;
    float preco = 0, precoMaior = 0.0;

    for (int produto = 1; produto <= 10; produto++){
        printf("Informe o valor do produto %d\n", produto);
        scanf("%f", &preco);

        if (preco > precoMaior){
            precoMaior = preco;
        }
    }
    
    printf("O produto mais caro custa R$ %.2f\n", precoMaior);
    return 0;
}