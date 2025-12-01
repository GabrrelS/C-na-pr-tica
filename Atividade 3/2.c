// Crie um programa C que atue como uma calculadora simples. Use uma estrutura `switch` para permitir que os usuários escolham entre operações matemáticas básicas, como adição, subtração, multiplicação e divisão.
#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, resultado;
    char operacao;

    printf("Informe uma operacao e em seguida digite dois numeros para calcular\n");
    printf("Qual operacao voce deseja utilizar: (A = Adicao, S = Subtracao, M = Multiplicacao, D = Divisao):\n");
    scanf("%c", &operacao);

    printf("Digite o primeiro numero:\n");
    scanf("%f", &n1);

    printf("Digite o segundo numero:\n");
    scanf(" %f", &n2);

    switch(operacao){
    case 'A':
	resultado = n1 + n2;
	    printf("Resultado da soma: %.2f\n", resultado);
	    break;
    case 'S':
    resultado = n1 - n2;
	    printf("Resultado da subtracao: %.2f\n", resultado);
	    break;
    case 'M':
	resultado = n1 * n2;
	    printf("Resultado da multiplicacao: %.2f\n", resultado);
	    break;
    case 'D':
    resultado = n1 / n2;
        printf("Resultado da divisao: %.2f\n", resultado);
		break;

    default:
	    printf("Operacao invalida, ");
    }
return 0;
}