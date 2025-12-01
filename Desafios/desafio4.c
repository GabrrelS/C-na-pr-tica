// Tendo como entrada a altura e o sexo (codificado da seguinte forma: 1: FEMININO e 2: MASCULINO) de uma pessoa, construa um programa que calcule e imprima seu peso ideal, utilizando as seguintes fórmulas:

#include <stdio.h>

int main(){
    int sexo;
    double altura = 0, peso = 0;

    printf("Informe o seu sexo e a sua altura e veja o seu peso ideal\nSexo 1-[Feminino] / 2-[Masculino]:\n");
    scanf("%d", &sexo);
    
    if (sexo != 1 && sexo != 2){
        printf("Sexo invalido\n");
        return 1;
    }

    printf("Altura (em metros):\n");
    scanf("%lf", &altura);

    if (sexo==1){
        peso = (62.1 * altura) - 44.7;
        printf("O seu peso ideal e %.2lf kg\n", peso);
    } else if (sexo==2){
        peso = (72.7 * altura) - 58;
        printf("O seu peso ideal e %.2lf kg\n", peso);
    }
    return 0;
}