# include <stdlib.h>
# include <stdio.h>

int main () {

int a,b,c;

print("Informe uma valor para A:\n");
scanf("%d",&a);

print("Informe uma valor para b:\n");
scanf("%d",&b);

if (a==b){
c= a+b;
printf("C  eh igual ah:%d\n",c);
}

else{
c=a*b;
printf("C eh igual a:%d\n",c);
}

system("pause");
return 0;
}
