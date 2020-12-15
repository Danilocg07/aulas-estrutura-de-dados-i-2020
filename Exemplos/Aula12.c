#include<stdio.h>
#include<stdlib.h>

int main(){

char x; float a, b,c;

printf("1. Soma\n2. subtracao\n");
printf("3. multiplicacao\n4. divisao\n\nDigite sua Opcao:");
scanf("%c",&x);
printf("\n__________________________________________________\n");
printf("Digite o valor 1: \n");
    scanf("%f",&a);
    printf("Digite o valor 2: \n");
    scanf("%f",&b);
switch(x){
    case'1':
    c=a+b;
    printf("\nSoma: %.2f + %.2f = %.2f",a,b,c);
    break;
    case'2':
    c=a-b;
    printf("\nSubtracao: %.2f - %.2f = %.2f",a,b,c);
    break;
    case'3':
    c=a*b;
    printf("\nMultiplicacao: %.2f * %.2f = %.2f",a,b,c);
    break;
    case'4':
    c=a/b;
    printf("\nDivisao: %.2f / %.2f = %.2f",a,b,c);
    break;
    default: printf("Opcao Invalida!");
    }
    return 0;

}

