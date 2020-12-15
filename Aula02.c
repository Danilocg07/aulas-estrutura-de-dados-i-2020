#include<stdio.h>

int main(){

int cep, fone;
char nome[30], endereco[50],cidade[30];

printf("Digite seu nome:\n");
gets(nome);
printf("Digite seu endereco:\n");
gets(endereco);
printf("Digite sua cidade:\n");
gets(cidade);
printf("Digite o CEP:\n");
scanf("%i",&cep);
printf("Digite o Telefone:\n");
scanf("%i",&fone);
printf("\n____________________________________");
printf("\nNome: %s",nome);
printf("\n Endereco: %s\n Cidade: %s\n CEP: %i\n Fone: %i",endereco, cidade, cep, fone);
printf("\n____________________________________");
return 0;

}
