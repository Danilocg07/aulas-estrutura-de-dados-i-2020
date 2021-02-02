/* 7. Faça um programa em C que leia o nome o endereço e o telefone de um cliente e
ao final, imprima esses dados */

#include <stdio.h>
 #include <stdlib.h>
 
void main()
 {
 char nome[100], telefone[100], endereco[100];
 printf("Digite seu nome: ");
 scanf("%s", &nome);
printf("Digite seu telefone: ");
 scanf("%s", &telefone);
 printf("Digite seu endereco: ");
 scanf("%s", &endereco);
 printf("\nDados - Nome:%s, Telefone: %s, Enderenco: %s",nome, telefone,
endereco);
 }