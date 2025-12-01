// Programa que mostra preço com 10% de desconto
#include <stdio.h>

int main(){
    float preco = 0, precoDesconto = 0, precoFinal = 0;
    printf("informe o preco: ");
    scanf("%f", &preco);
    
    precoDesconto = (preco * 0.10);
    precoFinal = preco - precoDesconto;

    printf("O valor inicial era: R$ %.2f.\nO desconto foi de 10 porcento.\nO valor com desconto aplicado e: R$ %.2f", preco, precoFinal);
    return 0;
}