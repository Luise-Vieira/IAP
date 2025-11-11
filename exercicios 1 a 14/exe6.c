#include<stdlib.h>
#include<stdio.h>
int main()
{
    float H,D,M,S;
    printf("Digite o valor de segundos:");
    scanf("%f",&S);
    M=S/60;
    H=M/60;
    D=H/24;
    printf("\nO valor dos segundos em dias,horas e minutos e:%f%f%f",D ,H ,M);

return(0);
}
