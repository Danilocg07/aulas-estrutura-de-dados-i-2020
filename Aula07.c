#include<stdio.h>

int main(){
    int a, b, c;

    printf("Informe o valor de A: ");
    scanf("%d", &a);
    printf("Informe o valor de B: ");
    scanf("%d", &b);
    printf("Informe o valor de C: ");
    scanf("%d", &c);

    if(a+b < c)
        printf("\n\nA + B e menor que C.");
    else
        printf("\n\nA + B e maior que C.");

    return 0;
}
