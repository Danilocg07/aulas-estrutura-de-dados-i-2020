//6. Faça um programa em C que leia um número inteiro e imprima o seu antecessor e o seu sucessor.

 #include <stdio.h>
 #include <stdlib.h>

void main()
 {
 float n;
 printf("Digite o numero: ");
 scanf("%f",&n);
 printf("Antecessor: %f e Sucessor: %f", n-1, n+1);
 }