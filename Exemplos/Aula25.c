#include <stdio.h>

int main()
{
    void media(float x, float y);
    for(int i=0; i<5; i++){
    float n1, n2;

    printf("Digite o nota 1: ");
    scanf("%f",&n1);

    printf("Digite o nota 2: ");
    scanf("%f",&n2);

    media(n1,n2);
    printf("\n");
    }
    return 0;
}

void media(float x, float y){
    float media = (x+y)/2;
    if (media >=70) printf("\nMedia = %.1f -> APROVADO!\n",media);else
    if (media >=40) printf("\nMedia = %.1f ->RECUPERACAO!\n",media);else
    printf("\nMedia = %.1f ->REPROVADO!\n",media);

}

