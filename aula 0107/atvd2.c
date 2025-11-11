#include<stdio.h>
#include<stdlib.h>

int main()
{
    int v[4],cont=0;

    for(cont=0; cont<4; cont++)
    {
        printf("Digite o numero\n");
        scanf("%d",&v[cont]);
    }
    for(cont=0; cont<4; cont++)
    {
        if(cont%2==0)
        {
            printf("O valor na posicao par e: %d\n",v[cont]);
        }
    }

    return 0;

}
