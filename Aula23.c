//exemplo de matrizes

#include <stdio.h>

int main()
{
    int l, c;
    int mat[3][3];
    // LER DADOS
    for(l=0;l < 3;l++){
        for(c=0;c<3;c++){
        printf("Digite o valor da matriz[%l][%c]",l,c);
          scanf("%i",&mat[l][c]);
        }
    }
    //MOSTRAR DADOS
    for(l=0;l < 3;l++){
        for(c=0;c<3;c++){
          printf("%i ",mat[l][c]);
        }
    printf("\n");
    }

return 0;
}
