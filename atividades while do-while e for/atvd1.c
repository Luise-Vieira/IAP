#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
    int num,cont,soma;
    soma=0;
    cont=1;
    while(cont<=3)
    {
        printf("Digite um numero\n");
        scanf("%d",&num);
        soma=soma+num;
        cont=cont+1;
    }
    printf("o resultado da soma e %d: ",soma);
return(0);
}
