//Vetor 10 posições inteiros e
//mostra apenas posições impares.
#include <stdio.h>

int main()
{
    int vet[15],i;

for( i = 0 ; i <15; i++){
    printf("Forneca um numero inteiro vet[%d]: ",i);
    scanf("%d", &vet[i]);
}
for ( i = 1 ; i <15; i++){
    printf("\n%d\n", vet[i]);
    i++;
}
return 0;
}
