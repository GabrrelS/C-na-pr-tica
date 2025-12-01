// Escreva um programa que resolva uma equação do segundo grau e imprima o valor de delta e a fórmula de Bhaskara (x’ e x’’).

#include <stdio.h>
#include <math.h>

int main(){
    float a = 0.0, b = 0.0, c = 0.0, x1 = 0.0, x2 = 0.0, delta = 0.0;
    
    printf("Informe o valor de A:\n");
    scanf("%f", &a);
    
    printf("Informe valor de B:\n");
    scanf("%f", &b);
    
    printf("Informe o valor de C:\n");
    scanf("%f", &c);
    
    delta = (b*b) - (4*a*c);
    
    printf("Valor de delta: %.0f\n", delta);
    
    x1 = (-b + sqrt(delta))/ (2*a);
    x2 = (-b - sqrt(delta))/ (2*a);
        
    if (delta > 0){
        printf("valores:\nX1 = %.2f\nX2 = %.2f\n", x1, x2);        
    } else{
        printf("A equacao nao possui solucoes reais\n");
    }
    return 0;
}