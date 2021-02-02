/* 9. Faça um programa em C que leia um número real e imprima ¼ deste número. */
 #include <stdio.h>
 #include <stdlib.h>

void main()
 {
 float n, resultado;
 printf("Digite o numero: ");
 scanf("%f", &n);
 resultado = n / 4;
 printf("Resultado: %f", resultado);
 }