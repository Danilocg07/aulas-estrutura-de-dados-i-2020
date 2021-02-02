/* 11. Faça um programa em C que leia dois números reais e calcule as quatro operações
básicas entre estes dois números, adição, subtração, multiplicação e divisão. Ao
final, o programa deve imprimir os resultados dos cálculos. */

#include <stdio.h>
#include <stdlib.h>

void main()
 {
 float n1, n2, resultado;
        printf("Digite o numero 1: ");
        scanf("%f", &n1);
        printf("Digite o numero 2: ");
        scanf("%f", &n2);
        resultado = n1 + n2;
        printf("\nSoma: %f", resultado);
        resultado = n1 - n2;
        printf("\nSubtracao: %f", resultado);
        resultado = n1 * n2;
        printf("\nMultiplicacao: %f", resultado);
        resultado = n1 / n2;
        printf("\nDivisao: %f", resultado);
 }