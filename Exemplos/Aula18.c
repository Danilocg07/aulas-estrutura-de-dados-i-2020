
#include <stdio.h>

int main()
{
    int vet[5],i,div,primo;

for( i = 0 ; i <5; i++)
    {
    div = 2;
    primo = 1;

    printf("Forneca um numero inteiro vet[%d]: ",i);
    scanf("%d", &vet[i]);

    if (vet[i] <= 1)
	primo = 0;

    while (primo == 1 && div <= vet[i] / 2) {
	if (vet[i] % div  == 0)
        primo = 0;
        div = div + 1;
    }

    if (primo == 1)
	printf("\nvet[%d] eh primo!\n\n", vet[i]);
    else
	printf("\nvet[%d] nao eh primo!\n\n", vet[i]);
    }
    return 0;
}
