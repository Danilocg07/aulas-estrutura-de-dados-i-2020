/*
18. Faça um programa em C que calcule a quantidade de litros de combustível con-
sumidos em uma viagem, sabendo-se que o carro tem autonomia de 12 km por
litro de combustível. O programa deverá ler o tempo decorrido na viagem e a
velocidade média e aplicar as fórmulas:

D = T ∗ V --> (A.2)

L = D / 12 --> (A.3)

Em que:
        • D = Distância percorrida
        • T = Tempo decorrido em horas
        • V = Velocidade média
        • L = Litros de combustível consumidos

Ao final, o programa deverá imprimir a distância percorrida e a quantidade de
litros consumidos na viagem.
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
        float tempoDecorrido, velocidadeMedia, distanciaPercorrida,
        combustivel;

        printf("Digite o tempo de viagem em horas: ");
        scanf("%f",&tempoDecorrido);

        printf("Digite a velocidade media: ");
        scanf("%f",&velocidadeMedia);

                distanciaPercorrida = tempoDecorrido * velocidadeMedia;

                combustivel = distanciaPercorrida / 12;

        printf("Quantidade de litros consumidos: %.2f\n", combustivel);
        printf("Distacia percorrida: %f\n\n", distanciaPercorrida);
}