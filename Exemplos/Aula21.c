#include <stdio.h>

int main()
{
    int vet[5],i;

        for( i = 0 ; i <5; i++){
            printf("Forneca um numero inteiro vet[%d]: ",i);
            scanf("%d", &vet[i]);

        }
        for ( i = 4 ; i >=0; i--){
            printf("\n%d\n", vet[i]);
        }
return 0;
}
