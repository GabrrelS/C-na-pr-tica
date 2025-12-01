// Você está desenvolvendo um programa de menu em C. Como você usaria a estrutura `switch` para permitir que os usuários escolham entre diferentes opções, como "Novo Jogo", "Carregar Jogo", "Configurações" e "Sair". Desenvolva e seja criativo.
#include <stdio.h>
#include <stdlib.h>

int main(){
    int comida = 0;

    printf("Escolha a sua refeicao entre as opcoes abaixo:\nOpcao 1 - Pizza\nOpcao 2 - Hamburguer\nOpcao 3 - Sushi\nOpcao 4 - Salada\n");
    scanf("%d", &comida);

    switch (comida){
    case 1:
        printf("A refeicao selecionada foi Pizza\n");
        break;
    case 2:
        printf("A refeicao selecionada foi Hamburguer\n");
        break;
    case 3:
        printf("A refeicao selecionada foi Sushi\n");
        break;
    case 4:
        printf("A refeicao selecionada foi Salada\n");
        break;
    default:
        printf("Numero sem refeicao associada");
        break;
    }
    return 0;
}