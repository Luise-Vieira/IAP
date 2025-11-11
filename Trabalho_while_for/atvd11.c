#include<stdio.h>
#include<stdlib.h>

int main()
{
    float num,soma=0, quad;
    for(int i=1; i<=20; i++)
    {
        quad= pow(2*i,2);
        num=i/quad;
        printf("%d/%f\n",i, quad );
        soma+=num;

    }
    printf("Soma: %f\n ",soma);

    return 0;
}
