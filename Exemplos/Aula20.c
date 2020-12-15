#include <stdio.h>

int main()
{
    int vet[5],i,menor = 9999;

        for( i = 0 ; i <5; i++){
            printf("Forneca um numero inteiro vet[%d]: ",i);
            scanf("%d", &vet[i]);
            if (vet[i]< menor) menor=vet[i];
        }
        for ( i = 0 ; i <5; i++){
            printf("\n%d\n", vet[i]*menor);
        }
return 0;
}
