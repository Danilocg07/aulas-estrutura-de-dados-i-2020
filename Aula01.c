#include<stdio.h>

int main(){

int idade;
char nome[30];

printf("Digite seu nome:\n");//aparece na tela
gets(nome);
printf("Digite sua idade:\n");
scanf("%i",&idade);

printf("-----------------");
printf("%s tem %i de idade",nome,idade);

return 0;

}
