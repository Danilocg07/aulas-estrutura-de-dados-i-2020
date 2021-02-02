/* 14. Faça um programa em C que leia a base e a altura de um retângulo e imprima o
perímetro (base + altura) e a área (base * altura) */
#include <stdio.h>
#include <stdlib.h>

void main()
{
    float base, altura, perimetro, area;
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    perimetro = base + altura;
    area = base * altura;
    printf("Perimetro: %f \n", perimetro);
    printf("Area: %f \n", area);
}