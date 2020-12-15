#include<stdio.h>
#include<stdlib.h>

int main(){
int i;
float produto, quant,total;
do{
printf("1. Cachorro Quente \n2.Hamburger Simples\n");
printf("3. Hamburger c/ Ovo\n4. Hamburger Completo\n");
printf("5. Cheeseburger \n6. Refrigerante\n");
printf("\nDigite seu pedido ou '0' para sair:\n");
scanf("%i",&i);
printf("\n__________________________________________________\n");

switch(i){
    case 1:
    system("cls || clear");
    produto = 5.0;
    printf("\nInforme a quantidade\n");
    scanf("%f",&quant);
    total=total+(produto*quant);
    break;
    case 2:
    system("cls || clear");//limpa menu
    produto = 6.0;
    printf("\nInforme a quantidade\n");
    scanf("%f",&quant);
    total=total+(produto*quant);
    break;
    case 3:
    system("cls || clear");
    produto = 8.0;
    printf("\nInforme a quantidade\n");
    scanf("%f",&quant);
    total=total+(produto*quant);
    break;
    case 4:
    system("cls || clear");
    produto = 15.0;
    printf("\nInforme a quantidade\n");
    scanf("%f",&quant);
    total=total+(produto*quant);
    break;
    case 5:
    system("cls || clear");
    produto = 7.5;
    printf("\nInforme a quantidade\n");
    scanf("%f",&quant);
    total=total+(produto*quant);
    break;
    case 6:
    system("cls || clear");
    produto = 2.0;
    printf("\nInforme a quantidade\n");
    scanf("%f",&quant);
    total=total+(produto*quant);
    break;
    default: printf("\nPedido Finalizado!\n");
    }
}while (i);
printf("\nTotal do pedido: %.2f\n\n",total);
printf("\n__________________________________________________\n");
return 0;
}
