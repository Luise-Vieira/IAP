#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num=0,soma=0;

    do
    {
        if(num%2 == 0)
        {
            soma = soma + num;
        }

        num++;
    }
    while(num<100);

    printf("0 resultado da soma e \n:%d",soma);
}
