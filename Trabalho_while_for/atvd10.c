#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,fatorial = 1,i;
    printf("Digite o numero\n");
    scanf("%d",&num);

    if(num<0)
    {
        printf("Não existe fatorial de numero negativo\n");
    }
    else
    {
        for(i=num; i>=1; i--)
        {
            fatorial=fatorial*i;
        }
        printf("%d",fatorial);

    }
    return 0;
}
