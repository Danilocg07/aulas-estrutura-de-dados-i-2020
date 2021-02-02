/* 13. Faça um programa em C que leia o saldo de uma conta poupança e imprima o
novo saldo, considerando um reajuste de 2%. */
#include <stdio.h>
#include <stdlib.h>

void main()
{
    float saldo, novoSaldo;
    printf("Digite o saldo:");
    scanf("%f", &saldo);
    novoSaldo = saldo + saldo * 0.02;
    printf("Saldo com reajuste: %f", novoSaldo);
}