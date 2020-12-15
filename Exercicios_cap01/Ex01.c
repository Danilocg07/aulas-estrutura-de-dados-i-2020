//1. Faça um programa em C que imprima o seu nome.

#include <stdio.h>
#include <stdlib.h>

void main(){

        // declaração de variavel
        char nome[100]; // Vetor de string

        printf("Digite seu nome: \n"); // escrever algo na tela \n - > pular uma linha
        scanf("%s", &nome); // fazer a leitura do que é digitado %s -> o valor digitado vai ficar dentro desse espaço 
        printf("---------------------------");
        printf("\n%s \n", nome);
        printf("---------------------------\n\n");
}

