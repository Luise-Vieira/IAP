#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int v1[3],v2[3],v3[3],cont;

    for(cont=0; cont<3; cont++)
    {
        printf("\nDigite o valor(v1): ");
        scanf("%d",&v1[cont]);
    }
    for(cont=0; cont<3; cont++)
    {
        printf("\nDigite o valor(v2): ");
        scanf("%d",&v2[cont]);
    }
    for(cont=0; cont<3; cont++)
    {
        v3[cont]=v1[cont]+v2[cont];
        printf("A soma dos valores dos indices dos vetores:%d \n",v3[cont]);
    }
    return 0;
}
