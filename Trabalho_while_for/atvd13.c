#include<stdio.h>
#include<stdlib.h>

int main()
{
    float cont,soma=0,num=2,den=17;

    for(cont=0; cont<8; cont++)
    {
        soma=soma+(num/den);
        num=num+2;
        den=den-2;
        printf("%0.2f/%0.2f\n",num,den);
    }
    printf("%0.2f\n",soma);
    return 0;
}
