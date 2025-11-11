#include<stdlib.h>
#include<stdio.h>

int main()
{
    float C1,C2,H, res;
    printf("\nDigite os lados do triangulo");
    scanf("%f%f",&C1,&C2);
    H=(C1*C1)+(C2*C2);
    res=sqrt(H);
    printf("O valor da hipotenusa\n %f",res);
    return(0);
}
