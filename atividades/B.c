#include<stdio.h>
#include<stdlib.h>

int main()
{
int A,B;
    printf("Escreva o valor de A:\n");
    scanf("%d",&A);
    printf("Escreva o valor de B:\n");
    scanf("%d", &B);
    A=B;
    B=A;
    printf("O valor de A é:%d",A);
    printf("O valor de B é:%d",B);



}
