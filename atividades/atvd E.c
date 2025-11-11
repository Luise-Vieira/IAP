#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
int A,B,C,R,RQ;
    printf("\n Digite o valor de A:");
    scanf("%d",&A);
    printf("\n Digite o valor de B:");
    scanf("%d",&B);
    printf("\n Digite o valor de C:");
    scanf("%d",&C);

    R=(A+B+C);
    RQ=pow(R,2);
    printf("\n O quadrado da soma dos 3 numeros e: %d",RQ);
    return(0);
}
