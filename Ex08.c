/* 8. Faça um programa em C que leia dois números inteiros e imprima a subtração
deles. */
#include <stdio.h>
 #include <stdlib.h>

void main()
{
 int n, n2, subtracao;
 printf("Digite o numero 1: ");
 scanf("%d", &n);
 printf("Digite o numero 2: ");
 scanf("%d", &n2);
 subtracao = n - n2;
 printf("Resultado: %d", subtracao);
 }