#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

bool num1,num2;

    printf("Escreva um numero: ");
    scanf("%i",&num1);

        if(num1!=0)
        num1=true;
        else
        num1=false;

    printf("\nEscreva outro numero:");
    scanf("%i",&num2);
        if(num2!=0)
        num2=true;
        else
        num2=false;

    if(num1&num2==true)
        printf("Ambos os valores são verdadeiros");

    if(num1&num2==false)
        printf("Ambos os valores são falsos");

    if(num1==true&num2==false)
        printf("O primeiro valor é verdadeiro e o segundo falso");

    if(num1==false&num2==true)
        printf("O primeiro valor é falso e o segundo verdadeiro");

return 0;
}
