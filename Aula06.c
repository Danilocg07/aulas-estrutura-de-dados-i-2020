#include<stdio.h>


int main(){
    int media,falta;
    printf("digite a falta do aluno");
    scanf("%d",& falta);
    if(falta>=5)
        printf("reprovado  por faltas");
    printf("digite a media do aluno");
    scanf("%d",& media);
    if(media<7)
        printf("reprovado por media");
    else
        printf("parabens! voce foi aprovado");
    return 0;
}
