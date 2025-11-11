#include<stdio.h>
#include<stdlib.h>

int main()
{
    double num,soma=0, quad;
    for(int i=1; i<=11; i++)
    {
        quad= pow(1*i,2);
        num=i/quad;
        printf("%d/%lf\n",i, quad );
        soma+=num;

    }
    printf("Soma: %lf\n ",soma);

    return 0;
}

