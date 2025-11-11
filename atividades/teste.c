#include<stdio.h>
    int num1,num2,soma;
    float media;
int main()
{
printf("Entre com o primeiro valor:\n");
scanf("%d",&num1);
printf("Entre com o segundo valor:\n");
scanf("%d",&num2);
soma=num1+num2;
media=soma/2;
printf("O resultado da media é %f\n",media);
return(0);
}
