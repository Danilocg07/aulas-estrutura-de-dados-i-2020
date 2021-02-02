/* 12. Faça um programa em C que leia um número real e calcule o quadrado deste
número. Ao final, o programa deve imprimir o resultado do cálculo. */

#include <stdio.h>
#include <stdlib.h>

void main()
 {
    float num, resultado;
    printf("Digite o numero: ");
    scanf("%f", &num);
    resultado = num * num;
    printf("Quadrado do numero: %f", resultado);
 }