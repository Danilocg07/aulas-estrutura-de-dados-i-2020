/* 17. Faça um programa em C que calcule a conversão entre graus centígrados e Fahrenheit. Para isso, leia o valor em centígrados e calcule com base na fórmula a
seguir. Após calcular o programa deve imprimir o resultado da conversão 

F= (9*C+160)/5   ( A.1) 
Em que:
• F = Graus em Fahrenheit
• C = Graus centígrados
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    float gCentigrados, gFahrenheit;
    printf("Digite o valor em graus centigrados: ");
    scanf("%f", &gCentigrados);
    gFahrenheit = (9 * gCentigrados + 160) / 5;
    printf("Temperatura em fahrenheit: %f", gFahrenheit);
}