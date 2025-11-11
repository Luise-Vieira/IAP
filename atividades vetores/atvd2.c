#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int v[3],cont;


    for(cont=0; cont<3; cont++)
    {
        printf("Digite 3 valores:\n");
        scanf("%d",&v[cont]);
    }
    for(cont=0; cont<3; cont++)
    {
        if(v[cont]%2!=0)
        {
            printf("%d no indice %d\n",v[cont],cont);
        }
    }


    return 0;
}
