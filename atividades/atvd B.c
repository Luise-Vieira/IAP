#include<stdio.h>
#include<stdlib.h>

int main()
{
    float A,B,C;

    printf("\nDigite o valor de A:");
    scanf("%f",&A);
    printf("\nDigite o valor de B:");
    scanf("%f",&B);
    C=A;
    A=B;
    B=C;
    printf("\nO valor de A e B sao:%f  %f",A,B);


return(0);
}
