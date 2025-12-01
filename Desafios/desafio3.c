// Escreva um programa que solicite ao usuário a temperatura em graus Celsius e retorne essa temperatura nas escalas Fahrenheit e Kelvin.

#include <stdio.h>

int main(){
    float C = 0, F = 0, K = 0;

    printf("Informe uma temperatura em graus Celsius e receba a conversao dela para Fahrenheit e Kelvin.\n");
    scanf("%f", &C);
    
    F = (C * 1.8)+32;
    K = C + 273.15;

    printf("%.2f graus Celsius equivale a %.2f F e %.2f K", C, F, K);

    return 0;
}