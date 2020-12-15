#include<stdio.h>

int main(){
 float real,dolar,conversao;
    printf("Digite o valor em REAL para a conversao: ");
    scanf("%f",&real);
    printf("Digite o valor atual do DOLAR: ");
    scanf("%f",&dolar);
    conversao=real*dolar;
    printf(" \n A cotacao do DOLAR hoje e: R$ %2.2f\n" ,conversao);
    system("pause");

}
