// Escreva um programa que leia as medidas dos lados de um TRIÂNGULO e escreva se ele é Equilátero, Isósceles ou Escaleno
#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3;
    
    printf("Informe o tamanho do lado 1:\n");
    scanf("%f", &n1);
    
    printf("Informe o tamanho do lado 2:\n");
    scanf("%f", &n2);
    
    printf("Informe o tamanho do lado 3:\n");
    scanf("%f", &n3);
    
    if (n1 < n2 + n3 && n2 < n1 + n3 && n3 < n1 + n2){
        printf("E um triangulo valido\n");
        
    if (n1 == n2 && n2 == n3){
        printf("E um triangulo equilatero\n");
    } else if(n1 == n2 || n1 == n3 || n2 == n3){
        printf("Triangulo isosceles\n");
    } else{
        printf("Triangulo escaleno\n");
    }

    } else {
        printf("Nao e um triangulo valido\n");
    }
    return 0;
}