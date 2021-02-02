/* 16. Faça um programa em C que calcule o reajuste do salário de um funcionário. Para
isso, o programa deverá ler o salário atual do funcionário e ler o percentual de
reajuste. Ao final imprimir o valor do novo salário */
#include <stdio.h>
#include <stdlib.h>

void main()
{
    float salario, percReajuste, vlrReajuste;
    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salario);
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percReajuste);
    vlrReajuste = salario + (salario * (percReajuste / 100));
    printf("Produto com desconto: %f", vlrReajuste);
}