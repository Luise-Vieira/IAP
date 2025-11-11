#include<stdio.h>
#include<stdlib.h>

int main()
{
    int v[4],cont=0;

    for(cont=0; cont<4; cont++)
    {
        printf("Digite o numero\n");
        scanf("%d",&v[cont]);

        printf("\nO valor do numero %d multiplicado por dois e: %d\n\n",v[cont],v[cont]*2);
    }

    return 0;
}/*

    int main()
{
    int v[4],cont=0;

    for(cont=0; cont<4; cont++){
        printf("Digite o numero\n");
        scanf("%d",&v[cont]);
    }

    for(int i=0; i<4; i++){
        printf("\nO valor do numero %d multiplicado por dois e: %d\n",v[i],v[i]*2);
    } */
