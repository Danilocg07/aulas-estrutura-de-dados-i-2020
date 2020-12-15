#include<stdio.h>
#include<conio.h>
int main(void)
{

  int i, vet[5];
  //receber os valores
    for( i = 0 ; i <5; i++)
    {
      printf("Digite o Valor do Vetor: ");
      scanf("%i",&vet[i]);
    }
//mostrar os valores
     printf("\n\nOs Valores pares do Vetor: ");
       for( i = 0 ; i <5; i++)
        {
        if (!vet[i]%2==0)
        printf("\n%i",vet[i]);
        }
  getch();
  return 0;
}
